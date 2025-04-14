// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_APIG20240327_H_
#define ALIBABACLOUD_APIG20240327_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_APIG20240327 {
class AiServiceConfig : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<vector<string>> apiKeys{};
  shared_ptr<bool> enableHealthCheck{};
  shared_ptr<vector<string>> protocols{};
  shared_ptr<string> provider{};

  AiServiceConfig() {}

  explicit AiServiceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["address"] = boost::any(*address);
    }
    if (apiKeys) {
      res["apiKeys"] = boost::any(*apiKeys);
    }
    if (enableHealthCheck) {
      res["enableHealthCheck"] = boost::any(*enableHealthCheck);
    }
    if (protocols) {
      res["protocols"] = boost::any(*protocols);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("address") != m.end() && !m["address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["address"]));
    }
    if (m.find("apiKeys") != m.end() && !m["apiKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["apiKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["apiKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      apiKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("enableHealthCheck") != m.end() && !m["enableHealthCheck"].empty()) {
      enableHealthCheck = make_shared<bool>(boost::any_cast<bool>(m["enableHealthCheck"]));
    }
    if (m.find("protocols") != m.end() && !m["protocols"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["protocols"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["protocols"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      protocols = make_shared<vector<string>>(toVec1);
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
  }


  virtual ~AiServiceConfig() = default;
};
class AkSkIdentityConfig : public Darabonba::Model {
public:
  shared_ptr<string> ak{};
  shared_ptr<string> generateMode{};
  shared_ptr<string> sk{};
  shared_ptr<string> type{};

  AkSkIdentityConfig() {}

  explicit AkSkIdentityConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ak) {
      res["ak"] = boost::any(*ak);
    }
    if (generateMode) {
      res["generateMode"] = boost::any(*generateMode);
    }
    if (sk) {
      res["sk"] = boost::any(*sk);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ak") != m.end() && !m["ak"].empty()) {
      ak = make_shared<string>(boost::any_cast<string>(m["ak"]));
    }
    if (m.find("generateMode") != m.end() && !m["generateMode"].empty()) {
      generateMode = make_shared<string>(boost::any_cast<string>(m["generateMode"]));
    }
    if (m.find("sk") != m.end() && !m["sk"].empty()) {
      sk = make_shared<string>(boost::any_cast<string>(m["sk"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~AkSkIdentityConfig() = default;
};
class ApiKeyIdentityConfigApikeySource : public Darabonba::Model {
public:
  shared_ptr<string> source{};
  shared_ptr<string> value{};

  ApiKeyIdentityConfigApikeySource() {}

  explicit ApiKeyIdentityConfigApikeySource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ApiKeyIdentityConfigApikeySource() = default;
};
class ApiKeyIdentityConfigCredentials : public Darabonba::Model {
public:
  shared_ptr<string> apikey{};
  shared_ptr<string> generateMode{};

  ApiKeyIdentityConfigCredentials() {}

  explicit ApiKeyIdentityConfigCredentials(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apikey) {
      res["apikey"] = boost::any(*apikey);
    }
    if (generateMode) {
      res["generateMode"] = boost::any(*generateMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apikey") != m.end() && !m["apikey"].empty()) {
      apikey = make_shared<string>(boost::any_cast<string>(m["apikey"]));
    }
    if (m.find("generateMode") != m.end() && !m["generateMode"].empty()) {
      generateMode = make_shared<string>(boost::any_cast<string>(m["generateMode"]));
    }
  }


  virtual ~ApiKeyIdentityConfigCredentials() = default;
};
class ApiKeyIdentityConfig : public Darabonba::Model {
public:
  shared_ptr<ApiKeyIdentityConfigApikeySource> apikeySource{};
  shared_ptr<vector<ApiKeyIdentityConfigCredentials>> credentials{};
  shared_ptr<string> type{};

  ApiKeyIdentityConfig() {}

  explicit ApiKeyIdentityConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apikeySource) {
      res["apikeySource"] = apikeySource ? boost::any(apikeySource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (credentials) {
      vector<boost::any> temp1;
      for(auto item1:*credentials){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["credentials"] = boost::any(temp1);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apikeySource") != m.end() && !m["apikeySource"].empty()) {
      if (typeid(map<string, boost::any>) == m["apikeySource"].type()) {
        ApiKeyIdentityConfigApikeySource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["apikeySource"]));
        apikeySource = make_shared<ApiKeyIdentityConfigApikeySource>(model1);
      }
    }
    if (m.find("credentials") != m.end() && !m["credentials"].empty()) {
      if (typeid(vector<boost::any>) == m["credentials"].type()) {
        vector<ApiKeyIdentityConfigCredentials> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["credentials"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApiKeyIdentityConfigCredentials model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        credentials = make_shared<vector<ApiKeyIdentityConfigCredentials>>(expect1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ApiKeyIdentityConfig() = default;
};
class ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> operationId{};

  ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo() {}

  explicit ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (operationId) {
      res["operationId"] = boost::any(*operationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("operationId") != m.end() && !m["operationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["operationId"]));
    }
  }


  virtual ~ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo() = default;
};
class HttpRouteMatchHeaders : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  HttpRouteMatchHeaders() {}

  explicit HttpRouteMatchHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (value) {
      res["value"] = boost::any(*value);
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
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~HttpRouteMatchHeaders() = default;
};
class HttpRouteMatchPath : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  HttpRouteMatchPath() {}

  explicit HttpRouteMatchPath(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~HttpRouteMatchPath() = default;
};
class HttpRouteMatchQueryParams : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  HttpRouteMatchQueryParams() {}

  explicit HttpRouteMatchQueryParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (value) {
      res["value"] = boost::any(*value);
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
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~HttpRouteMatchQueryParams() = default;
};
class HttpRouteMatch : public Darabonba::Model {
public:
  shared_ptr<vector<HttpRouteMatchHeaders>> headers{};
  shared_ptr<bool> ignoreUriCase{};
  shared_ptr<vector<string>> methods{};
  shared_ptr<HttpRouteMatchPath> path{};
  shared_ptr<vector<HttpRouteMatchQueryParams>> queryParams{};

  HttpRouteMatch() {}

  explicit HttpRouteMatch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      vector<boost::any> temp1;
      for(auto item1:*headers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["headers"] = boost::any(temp1);
    }
    if (ignoreUriCase) {
      res["ignoreUriCase"] = boost::any(*ignoreUriCase);
    }
    if (methods) {
      res["methods"] = boost::any(*methods);
    }
    if (path) {
      res["path"] = path ? boost::any(path->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queryParams) {
      vector<boost::any> temp1;
      for(auto item1:*queryParams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["queryParams"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      if (typeid(vector<boost::any>) == m["headers"].type()) {
        vector<HttpRouteMatchHeaders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["headers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpRouteMatchHeaders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        headers = make_shared<vector<HttpRouteMatchHeaders>>(expect1);
      }
    }
    if (m.find("ignoreUriCase") != m.end() && !m["ignoreUriCase"].empty()) {
      ignoreUriCase = make_shared<bool>(boost::any_cast<bool>(m["ignoreUriCase"]));
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
    if (m.find("path") != m.end() && !m["path"].empty()) {
      if (typeid(map<string, boost::any>) == m["path"].type()) {
        HttpRouteMatchPath model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["path"]));
        path = make_shared<HttpRouteMatchPath>(model1);
      }
    }
    if (m.find("queryParams") != m.end() && !m["queryParams"].empty()) {
      if (typeid(vector<boost::any>) == m["queryParams"].type()) {
        vector<HttpRouteMatchQueryParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["queryParams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpRouteMatchQueryParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryParams = make_shared<vector<HttpRouteMatchQueryParams>>(expect1);
      }
    }
  }


  virtual ~HttpRouteMatch() = default;
};
class ApiRouteConflictInfoConflictsDetailsConflictingMatch : public Darabonba::Model {
public:
  shared_ptr<HttpRouteMatch> match{};
  shared_ptr<ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo> operationInfo{};

  ApiRouteConflictInfoConflictsDetailsConflictingMatch() {}

  explicit ApiRouteConflictInfoConflictsDetailsConflictingMatch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operationInfo) {
      res["operationInfo"] = operationInfo ? boost::any(operationInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpRouteMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpRouteMatch>(model1);
      }
    }
    if (m.find("operationInfo") != m.end() && !m["operationInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["operationInfo"].type()) {
        ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["operationInfo"]));
        operationInfo = make_shared<ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo>(model1);
      }
    }
  }


  virtual ~ApiRouteConflictInfoConflictsDetailsConflictingMatch() = default;
};
class ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> operationId{};

  ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo() {}

  explicit ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (operationId) {
      res["operationId"] = boost::any(*operationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("operationId") != m.end() && !m["operationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["operationId"]));
    }
  }


  virtual ~ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo() = default;
};
class ApiRouteConflictInfoConflictsDetailsDetectedMatch : public Darabonba::Model {
public:
  shared_ptr<HttpRouteMatch> match{};
  shared_ptr<ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo> operationInfo{};

  ApiRouteConflictInfoConflictsDetailsDetectedMatch() {}

  explicit ApiRouteConflictInfoConflictsDetailsDetectedMatch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operationInfo) {
      res["operationInfo"] = operationInfo ? boost::any(operationInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpRouteMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpRouteMatch>(model1);
      }
    }
    if (m.find("operationInfo") != m.end() && !m["operationInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["operationInfo"].type()) {
        ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["operationInfo"]));
        operationInfo = make_shared<ApiRouteConflictInfoConflictsDetailsDetectedMatchOperationInfo>(model1);
      }
    }
  }


  virtual ~ApiRouteConflictInfoConflictsDetailsDetectedMatch() = default;
};
class ApiRouteConflictInfoConflictsDetails : public Darabonba::Model {
public:
  shared_ptr<ApiRouteConflictInfoConflictsDetailsConflictingMatch> conflictingMatch{};
  shared_ptr<ApiRouteConflictInfoConflictsDetailsDetectedMatch> detectedMatch{};
  shared_ptr<string> level{};

  ApiRouteConflictInfoConflictsDetails() {}

  explicit ApiRouteConflictInfoConflictsDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conflictingMatch) {
      res["conflictingMatch"] = conflictingMatch ? boost::any(conflictingMatch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (detectedMatch) {
      res["detectedMatch"] = detectedMatch ? boost::any(detectedMatch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("conflictingMatch") != m.end() && !m["conflictingMatch"].empty()) {
      if (typeid(map<string, boost::any>) == m["conflictingMatch"].type()) {
        ApiRouteConflictInfoConflictsDetailsConflictingMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["conflictingMatch"]));
        conflictingMatch = make_shared<ApiRouteConflictInfoConflictsDetailsConflictingMatch>(model1);
      }
    }
    if (m.find("detectedMatch") != m.end() && !m["detectedMatch"].empty()) {
      if (typeid(map<string, boost::any>) == m["detectedMatch"].type()) {
        ApiRouteConflictInfoConflictsDetailsDetectedMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["detectedMatch"]));
        detectedMatch = make_shared<ApiRouteConflictInfoConflictsDetailsDetectedMatch>(model1);
      }
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
  }


  virtual ~ApiRouteConflictInfoConflictsDetails() = default;
};
class ApiRouteConflictInfoConflictsEnvironmentInfo : public Darabonba::Model {
public:
  shared_ptr<string> environmentId{};
  shared_ptr<string> name{};

  ApiRouteConflictInfoConflictsEnvironmentInfo() {}

  explicit ApiRouteConflictInfoConflictsEnvironmentInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ApiRouteConflictInfoConflictsEnvironmentInfo() = default;
};
class ApiRouteConflictInfoConflictsRouteInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> routeId{};

  ApiRouteConflictInfoConflictsRouteInfo() {}

  explicit ApiRouteConflictInfoConflictsRouteInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (routeId) {
      res["routeId"] = boost::any(*routeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("routeId") != m.end() && !m["routeId"].empty()) {
      routeId = make_shared<string>(boost::any_cast<string>(m["routeId"]));
    }
  }


  virtual ~ApiRouteConflictInfoConflictsRouteInfo() = default;
};
class ApiRouteConflictInfoConflicts : public Darabonba::Model {
public:
  shared_ptr<vector<ApiRouteConflictInfoConflictsDetails>> details{};
  shared_ptr<ApiRouteConflictInfoConflictsEnvironmentInfo> environmentInfo{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<ApiRouteConflictInfoConflictsRouteInfo> routeInfo{};

  ApiRouteConflictInfoConflicts() {}

  explicit ApiRouteConflictInfoConflicts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (details) {
      vector<boost::any> temp1;
      for(auto item1:*details){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["details"] = boost::any(temp1);
    }
    if (environmentInfo) {
      res["environmentInfo"] = environmentInfo ? boost::any(environmentInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["resourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (routeInfo) {
      res["routeInfo"] = routeInfo ? boost::any(routeInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("details") != m.end() && !m["details"].empty()) {
      if (typeid(vector<boost::any>) == m["details"].type()) {
        vector<ApiRouteConflictInfoConflictsDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApiRouteConflictInfoConflictsDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        details = make_shared<vector<ApiRouteConflictInfoConflictsDetails>>(expect1);
      }
    }
    if (m.find("environmentInfo") != m.end() && !m["environmentInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["environmentInfo"].type()) {
        ApiRouteConflictInfoConflictsEnvironmentInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["environmentInfo"]));
        environmentInfo = make_shared<ApiRouteConflictInfoConflictsEnvironmentInfo>(model1);
      }
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceName") != m.end() && !m["resourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["resourceName"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("routeInfo") != m.end() && !m["routeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["routeInfo"].type()) {
        ApiRouteConflictInfoConflictsRouteInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["routeInfo"]));
        routeInfo = make_shared<ApiRouteConflictInfoConflictsRouteInfo>(model1);
      }
    }
  }


  virtual ~ApiRouteConflictInfoConflicts() = default;
};
class ApiRouteConflictInfoDomainInfo : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> name{};

  ApiRouteConflictInfoDomainInfo() {}

  explicit ApiRouteConflictInfoDomainInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ApiRouteConflictInfoDomainInfo() = default;
};
class ApiRouteConflictInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ApiRouteConflictInfoConflicts>> conflicts{};
  shared_ptr<ApiRouteConflictInfoDomainInfo> domainInfo{};

  ApiRouteConflictInfo() {}

  explicit ApiRouteConflictInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conflicts) {
      vector<boost::any> temp1;
      for(auto item1:*conflicts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["conflicts"] = boost::any(temp1);
    }
    if (domainInfo) {
      res["domainInfo"] = domainInfo ? boost::any(domainInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("conflicts") != m.end() && !m["conflicts"].empty()) {
      if (typeid(vector<boost::any>) == m["conflicts"].type()) {
        vector<ApiRouteConflictInfoConflicts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conflicts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApiRouteConflictInfoConflicts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conflicts = make_shared<vector<ApiRouteConflictInfoConflicts>>(expect1);
      }
    }
    if (m.find("domainInfo") != m.end() && !m["domainInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["domainInfo"].type()) {
        ApiRouteConflictInfoDomainInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["domainInfo"]));
        domainInfo = make_shared<ApiRouteConflictInfoDomainInfo>(model1);
      }
    }
  }


  virtual ~ApiRouteConflictInfo() = default;
};
class Attachment : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attachResourceIds{};
  shared_ptr<string> attachResourceType{};
  shared_ptr<string> environmentId{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> policyAttachmentId{};

  Attachment() {}

  explicit Attachment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachResourceIds) {
      res["attachResourceIds"] = boost::any(*attachResourceIds);
    }
    if (attachResourceType) {
      res["attachResourceType"] = boost::any(*attachResourceType);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (policyAttachmentId) {
      res["policyAttachmentId"] = boost::any(*policyAttachmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attachResourceIds") != m.end() && !m["attachResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["attachResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["attachResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attachResourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("attachResourceType") != m.end() && !m["attachResourceType"].empty()) {
      attachResourceType = make_shared<string>(boost::any_cast<string>(m["attachResourceType"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("policyAttachmentId") != m.end() && !m["policyAttachmentId"].empty()) {
      policyAttachmentId = make_shared<string>(boost::any_cast<string>(m["policyAttachmentId"]));
    }
  }


  virtual ~Attachment() = default;
};
class AuthConfig : public Darabonba::Model {
public:
  shared_ptr<string> authMode{};
  shared_ptr<string> authType{};

  AuthConfig() {}

  explicit AuthConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authMode) {
      res["authMode"] = boost::any(*authMode);
    }
    if (authType) {
      res["authType"] = boost::any(*authType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authMode") != m.end() && !m["authMode"].empty()) {
      authMode = make_shared<string>(boost::any_cast<string>(m["authMode"]));
    }
    if (m.find("authType") != m.end() && !m["authType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["authType"]));
    }
  }


  virtual ~AuthConfig() = default;
};
class AuthorizationResourceInfo : public Darabonba::Model {
public:
  shared_ptr<string> environmentId{};
  shared_ptr<string> parentResourceId{};
  shared_ptr<string> resourceId{};

  AuthorizationResourceInfo() {}

  explicit AuthorizationResourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (parentResourceId) {
      res["parentResourceId"] = boost::any(*parentResourceId);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("parentResourceId") != m.end() && !m["parentResourceId"].empty()) {
      parentResourceId = make_shared<string>(boost::any_cast<string>(m["parentResourceId"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
  }


  virtual ~AuthorizationResourceInfo() = default;
};
class BackendServices : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> version{};
  shared_ptr<long> weight{};

  BackendServices() {}

  explicit BackendServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
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
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~BackendServices() = default;
};
class Backend : public Darabonba::Model {
public:
  shared_ptr<string> scene{};
  shared_ptr<vector<BackendServices>> services{};

  Backend() {}

  explicit Backend(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
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
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
    if (m.find("services") != m.end() && !m["services"].empty()) {
      if (typeid(vector<boost::any>) == m["services"].type()) {
        vector<BackendServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BackendServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<BackendServices>>(expect1);
      }
    }
  }


  virtual ~Backend() = default;
};
class CheckServiceLinkedRoleResult : public Darabonba::Model {
public:
  shared_ptr<bool> existed{};

  CheckServiceLinkedRoleResult() {}

  explicit CheckServiceLinkedRoleResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (existed) {
      res["existed"] = boost::any(*existed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("existed") != m.end() && !m["existed"].empty()) {
      existed = make_shared<bool>(boost::any_cast<bool>(m["existed"]));
    }
  }


  virtual ~CheckServiceLinkedRoleResult() = default;
};
class ConsumerInfo : public Darabonba::Model {
public:
  shared_ptr<string> consumerId{};
  shared_ptr<bool> enable{};
  shared_ptr<string> name{};

  ConsumerInfo() {}

  explicit ConsumerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerId) {
      res["consumerId"] = boost::any(*consumerId);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerId") != m.end() && !m["consumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["consumerId"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ConsumerInfo() = default;
};
class DashboardFilter : public Darabonba::Model {
public:
  shared_ptr<string> routeName{};

  DashboardFilter() {}

  explicit DashboardFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeName) {
      res["routeName"] = boost::any(*routeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("routeName") != m.end() && !m["routeName"].empty()) {
      routeName = make_shared<string>(boost::any_cast<string>(m["routeName"]));
    }
  }


  virtual ~DashboardFilter() = default;
};
class DomainInfo : public Darabonba::Model {
public:
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> clientCACert{};
  shared_ptr<string> createFrom{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> domainId{};
  shared_ptr<bool> forceHttps{};
  shared_ptr<bool> mTLSEnabled{};
  shared_ptr<string> name{};
  shared_ptr<string> protocol{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTimestamp{};

  DomainInfo() {}

  explicit DomainInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["certIdentifier"] = boost::any(*certIdentifier);
    }
    if (clientCACert) {
      res["clientCACert"] = boost::any(*clientCACert);
    }
    if (createFrom) {
      res["createFrom"] = boost::any(*createFrom);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (forceHttps) {
      res["forceHttps"] = boost::any(*forceHttps);
    }
    if (mTLSEnabled) {
      res["mTLSEnabled"] = boost::any(*mTLSEnabled);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("certIdentifier") != m.end() && !m["certIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["certIdentifier"]));
    }
    if (m.find("clientCACert") != m.end() && !m["clientCACert"].empty()) {
      clientCACert = make_shared<string>(boost::any_cast<string>(m["clientCACert"]));
    }
    if (m.find("createFrom") != m.end() && !m["createFrom"].empty()) {
      createFrom = make_shared<string>(boost::any_cast<string>(m["createFrom"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("forceHttps") != m.end() && !m["forceHttps"].empty()) {
      forceHttps = make_shared<bool>(boost::any_cast<bool>(m["forceHttps"]));
    }
    if (m.find("mTLSEnabled") != m.end() && !m["mTLSEnabled"].empty()) {
      mTLSEnabled = make_shared<bool>(boost::any_cast<bool>(m["mTLSEnabled"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
  }


  virtual ~DomainInfo() = default;
};
class GatewayInfoVpcInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> vpcId{};

  GatewayInfoVpcInfo() {}

  explicit GatewayInfoVpcInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~GatewayInfoVpcInfo() = default;
};
class GatewayInfo : public Darabonba::Model {
public:
  shared_ptr<string> engineVersion{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> name{};
  shared_ptr<GatewayInfoVpcInfo> vpcInfo{};

  GatewayInfo() {}

  explicit GatewayInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engineVersion) {
      res["engineVersion"] = boost::any(*engineVersion);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (vpcInfo) {
      res["vpcInfo"] = vpcInfo ? boost::any(vpcInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("engineVersion") != m.end() && !m["engineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["engineVersion"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("vpcInfo") != m.end() && !m["vpcInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpcInfo"].type()) {
        GatewayInfoVpcInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpcInfo"]));
        vpcInfo = make_shared<GatewayInfoVpcInfo>(model1);
      }
    }
  }


  virtual ~GatewayInfo() = default;
};
class SubDomainInfo : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> name{};
  shared_ptr<string> networkType{};
  shared_ptr<string> protocol{};

  SubDomainInfo() {}

  explicit SubDomainInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (networkType) {
      res["networkType"] = boost::any(*networkType);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("networkType") != m.end() && !m["networkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["networkType"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
  }


  virtual ~SubDomainInfo() = default;
};
class EnvironmentInfo : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<bool> default_{};
  shared_ptr<string> description{};
  shared_ptr<string> environmentId{};
  shared_ptr<GatewayInfo> gatewayInfo{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<SubDomainInfo>> subDomainInfos{};
  shared_ptr<long> updateTimestamp{};

  EnvironmentInfo() {}

  explicit EnvironmentInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (default_) {
      res["default"] = boost::any(*default_);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (gatewayInfo) {
      res["gatewayInfo"] = gatewayInfo ? boost::any(gatewayInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (subDomainInfos) {
      vector<boost::any> temp1;
      for(auto item1:*subDomainInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subDomainInfos"] = boost::any(temp1);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("default") != m.end() && !m["default"].empty()) {
      default_ = make_shared<bool>(boost::any_cast<bool>(m["default"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("gatewayInfo") != m.end() && !m["gatewayInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["gatewayInfo"].type()) {
        GatewayInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gatewayInfo"]));
        gatewayInfo = make_shared<GatewayInfo>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("subDomainInfos") != m.end() && !m["subDomainInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["subDomainInfos"].type()) {
        vector<SubDomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subDomainInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubDomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subDomainInfos = make_shared<vector<SubDomainInfo>>(expect1);
      }
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
  }


  virtual ~EnvironmentInfo() = default;
};
class GatewayLogConfigSlsConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  GatewayLogConfigSlsConfig() {}

  explicit GatewayLogConfigSlsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
  }


  virtual ~GatewayLogConfigSlsConfig() = default;
};
class GatewayLogConfig : public Darabonba::Model {
public:
  shared_ptr<GatewayLogConfigSlsConfig> slsConfig{};

  GatewayLogConfig() {}

  explicit GatewayLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slsConfig) {
      res["slsConfig"] = slsConfig ? boost::any(slsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("slsConfig") != m.end() && !m["slsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["slsConfig"].type()) {
        GatewayLogConfigSlsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["slsConfig"]));
        slsConfig = make_shared<GatewayLogConfigSlsConfig>(model1);
      }
    }
  }


  virtual ~GatewayLogConfig() = default;
};
class HttpApiApiInfoEnvironmentsGatewayInfo : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> name{};

  HttpApiApiInfoEnvironmentsGatewayInfo() {}

  explicit HttpApiApiInfoEnvironmentsGatewayInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~HttpApiApiInfoEnvironmentsGatewayInfo() = default;
};
class HttpApiBackendMatchCondition : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  HttpApiBackendMatchCondition() {}

  explicit HttpApiBackendMatchCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
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
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~HttpApiBackendMatchCondition() = default;
};
class HttpApiBackendMatchConditions : public Darabonba::Model {
public:
  shared_ptr<vector<HttpApiBackendMatchCondition>> conditions{};
  shared_ptr<bool> default_{};

  HttpApiBackendMatchConditions() {}

  explicit HttpApiBackendMatchConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (default_) {
      res["default"] = boost::any(*default_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("conditions") != m.end() && !m["conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["conditions"].type()) {
        vector<HttpApiBackendMatchCondition> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiBackendMatchCondition model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<HttpApiBackendMatchCondition>>(expect1);
      }
    }
    if (m.find("default") != m.end() && !m["default"].empty()) {
      default_ = make_shared<bool>(boost::any_cast<bool>(m["default"]));
    }
  }


  virtual ~HttpApiBackendMatchConditions() = default;
};
class HttpApiApiInfoEnvironmentsServiceConfigs : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<string> name{};
  shared_ptr<string> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> version{};
  shared_ptr<long> weight{};

  HttpApiApiInfoEnvironmentsServiceConfigs() {}

  explicit HttpApiApiInfoEnvironmentsServiceConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
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
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiApiInfoEnvironmentsServiceConfigs() = default;
};
class HttpApiApiInfoEnvironmentsSubDomains : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> name{};
  shared_ptr<string> networkType{};
  shared_ptr<string> protocol{};

  HttpApiApiInfoEnvironmentsSubDomains() {}

  explicit HttpApiApiInfoEnvironmentsSubDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (networkType) {
      res["networkType"] = boost::any(*networkType);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("networkType") != m.end() && !m["networkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["networkType"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
  }


  virtual ~HttpApiApiInfoEnvironmentsSubDomains() = default;
};
class HttpApiDomainInfo : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> name{};
  shared_ptr<string> protocol{};

  HttpApiDomainInfo() {}

  explicit HttpApiDomainInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
  }


  virtual ~HttpApiDomainInfo() = default;
};
class HttpApiApiInfoEnvironments : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> backendScene{};
  shared_ptr<string> backendType{};
  shared_ptr<vector<HttpApiDomainInfo>> customDomains{};
  shared_ptr<string> deployStatus{};
  shared_ptr<string> environmentId{};
  shared_ptr<HttpApiApiInfoEnvironmentsGatewayInfo> gatewayInfo{};
  shared_ptr<string> name{};
  shared_ptr<vector<HttpApiApiInfoEnvironmentsServiceConfigs>> serviceConfigs{};
  shared_ptr<vector<HttpApiApiInfoEnvironmentsSubDomains>> subDomains{};

  HttpApiApiInfoEnvironments() {}

  explicit HttpApiApiInfoEnvironments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (backendScene) {
      res["backendScene"] = boost::any(*backendScene);
    }
    if (backendType) {
      res["backendType"] = boost::any(*backendType);
    }
    if (customDomains) {
      vector<boost::any> temp1;
      for(auto item1:*customDomains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customDomains"] = boost::any(temp1);
    }
    if (deployStatus) {
      res["deployStatus"] = boost::any(*deployStatus);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (gatewayInfo) {
      res["gatewayInfo"] = gatewayInfo ? boost::any(gatewayInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (serviceConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*serviceConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceConfigs"] = boost::any(temp1);
    }
    if (subDomains) {
      vector<boost::any> temp1;
      for(auto item1:*subDomains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subDomains"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("backendScene") != m.end() && !m["backendScene"].empty()) {
      backendScene = make_shared<string>(boost::any_cast<string>(m["backendScene"]));
    }
    if (m.find("backendType") != m.end() && !m["backendType"].empty()) {
      backendType = make_shared<string>(boost::any_cast<string>(m["backendType"]));
    }
    if (m.find("customDomains") != m.end() && !m["customDomains"].empty()) {
      if (typeid(vector<boost::any>) == m["customDomains"].type()) {
        vector<HttpApiDomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customDomains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiDomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customDomains = make_shared<vector<HttpApiDomainInfo>>(expect1);
      }
    }
    if (m.find("deployStatus") != m.end() && !m["deployStatus"].empty()) {
      deployStatus = make_shared<string>(boost::any_cast<string>(m["deployStatus"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("gatewayInfo") != m.end() && !m["gatewayInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["gatewayInfo"].type()) {
        HttpApiApiInfoEnvironmentsGatewayInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gatewayInfo"]));
        gatewayInfo = make_shared<HttpApiApiInfoEnvironmentsGatewayInfo>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("serviceConfigs") != m.end() && !m["serviceConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceConfigs"].type()) {
        vector<HttpApiApiInfoEnvironmentsServiceConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiApiInfoEnvironmentsServiceConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceConfigs = make_shared<vector<HttpApiApiInfoEnvironmentsServiceConfigs>>(expect1);
      }
    }
    if (m.find("subDomains") != m.end() && !m["subDomains"].empty()) {
      if (typeid(vector<boost::any>) == m["subDomains"].type()) {
        vector<HttpApiApiInfoEnvironmentsSubDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subDomains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiApiInfoEnvironmentsSubDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subDomains = make_shared<vector<HttpApiApiInfoEnvironmentsSubDomains>>(expect1);
      }
    }
  }


  virtual ~HttpApiApiInfoEnvironments() = default;
};
class HttpApiApiInfoIngressInfoEnvironmentInfo : public Darabonba::Model {
public:
  shared_ptr<string> environmentId{};

  HttpApiApiInfoIngressInfoEnvironmentInfo() {}

  explicit HttpApiApiInfoIngressInfoEnvironmentInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
  }


  virtual ~HttpApiApiInfoIngressInfoEnvironmentInfo() = default;
};
class HttpApiApiInfoIngressInfoK8sClusterInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  HttpApiApiInfoIngressInfoK8sClusterInfo() {}

  explicit HttpApiApiInfoIngressInfoK8sClusterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["clusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterId") != m.end() && !m["clusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["clusterId"]));
    }
  }


  virtual ~HttpApiApiInfoIngressInfoK8sClusterInfo() = default;
};
class HttpApiApiInfoIngressInfo : public Darabonba::Model {
public:
  shared_ptr<HttpApiApiInfoIngressInfoEnvironmentInfo> environmentInfo{};
  shared_ptr<string> ingressClass{};
  shared_ptr<HttpApiApiInfoIngressInfoK8sClusterInfo> k8sClusterInfo{};
  shared_ptr<bool> overrideIngressIp{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> watchNamespace{};

  HttpApiApiInfoIngressInfo() {}

  explicit HttpApiApiInfoIngressInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentInfo) {
      res["environmentInfo"] = environmentInfo ? boost::any(environmentInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ingressClass) {
      res["ingressClass"] = boost::any(*ingressClass);
    }
    if (k8sClusterInfo) {
      res["k8sClusterInfo"] = k8sClusterInfo ? boost::any(k8sClusterInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (overrideIngressIp) {
      res["overrideIngressIp"] = boost::any(*overrideIngressIp);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (watchNamespace) {
      res["watchNamespace"] = boost::any(*watchNamespace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentInfo") != m.end() && !m["environmentInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["environmentInfo"].type()) {
        HttpApiApiInfoIngressInfoEnvironmentInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["environmentInfo"]));
        environmentInfo = make_shared<HttpApiApiInfoIngressInfoEnvironmentInfo>(model1);
      }
    }
    if (m.find("ingressClass") != m.end() && !m["ingressClass"].empty()) {
      ingressClass = make_shared<string>(boost::any_cast<string>(m["ingressClass"]));
    }
    if (m.find("k8sClusterInfo") != m.end() && !m["k8sClusterInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["k8sClusterInfo"].type()) {
        HttpApiApiInfoIngressInfoK8sClusterInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["k8sClusterInfo"]));
        k8sClusterInfo = make_shared<HttpApiApiInfoIngressInfoK8sClusterInfo>(model1);
      }
    }
    if (m.find("overrideIngressIp") != m.end() && !m["overrideIngressIp"].empty()) {
      overrideIngressIp = make_shared<bool>(boost::any_cast<bool>(m["overrideIngressIp"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["sourceId"]));
    }
    if (m.find("watchNamespace") != m.end() && !m["watchNamespace"].empty()) {
      watchNamespace = make_shared<string>(boost::any_cast<string>(m["watchNamespace"]));
    }
  }


  virtual ~HttpApiApiInfoIngressInfo() = default;
};
class HttpApiDeployConfigPolicyConfigsAiFallbackConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> serviceIds{};

  HttpApiDeployConfigPolicyConfigsAiFallbackConfig() {}

  explicit HttpApiDeployConfigPolicyConfigsAiFallbackConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceIds) {
      res["serviceIds"] = boost::any(*serviceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceIds") != m.end() && !m["serviceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["serviceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["serviceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~HttpApiDeployConfigPolicyConfigsAiFallbackConfig() = default;
};
class HttpApiDeployConfigPolicyConfigs : public Darabonba::Model {
public:
  shared_ptr<HttpApiDeployConfigPolicyConfigsAiFallbackConfig> aiFallbackConfig{};
  shared_ptr<bool> enable{};
  shared_ptr<string> type{};

  HttpApiDeployConfigPolicyConfigs() {}

  explicit HttpApiDeployConfigPolicyConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aiFallbackConfig) {
      res["aiFallbackConfig"] = aiFallbackConfig ? boost::any(aiFallbackConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aiFallbackConfig") != m.end() && !m["aiFallbackConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["aiFallbackConfig"].type()) {
        HttpApiDeployConfigPolicyConfigsAiFallbackConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["aiFallbackConfig"]));
        aiFallbackConfig = make_shared<HttpApiDeployConfigPolicyConfigsAiFallbackConfig>(model1);
      }
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~HttpApiDeployConfigPolicyConfigs() = default;
};
class HttpApiDeployConfigServiceConfigs : public Darabonba::Model {
public:
  shared_ptr<string> modelName{};
  shared_ptr<string> modelNamePattern{};
  shared_ptr<string> serviceId{};
  shared_ptr<long> weight{};

  HttpApiDeployConfigServiceConfigs() {}

  explicit HttpApiDeployConfigServiceConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelName) {
      res["modelName"] = boost::any(*modelName);
    }
    if (modelNamePattern) {
      res["modelNamePattern"] = boost::any(*modelNamePattern);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("modelName") != m.end() && !m["modelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["modelName"]));
    }
    if (m.find("modelNamePattern") != m.end() && !m["modelNamePattern"].empty()) {
      modelNamePattern = make_shared<string>(boost::any_cast<string>(m["modelNamePattern"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiDeployConfigServiceConfigs() = default;
};
class HttpApiDeployConfig : public Darabonba::Model {
public:
  shared_ptr<bool> autoDeploy{};
  shared_ptr<string> backendScene{};
  shared_ptr<vector<string>> customDomainIds{};
  shared_ptr<string> environmentId{};
  shared_ptr<vector<HttpApiDeployConfigPolicyConfigs>> policyConfigs{};
  shared_ptr<vector<HttpApiDeployConfigServiceConfigs>> serviceConfigs{};

  HttpApiDeployConfig() {}

  explicit HttpApiDeployConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoDeploy) {
      res["autoDeploy"] = boost::any(*autoDeploy);
    }
    if (backendScene) {
      res["backendScene"] = boost::any(*backendScene);
    }
    if (customDomainIds) {
      res["customDomainIds"] = boost::any(*customDomainIds);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (policyConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*policyConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["policyConfigs"] = boost::any(temp1);
    }
    if (serviceConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*serviceConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoDeploy") != m.end() && !m["autoDeploy"].empty()) {
      autoDeploy = make_shared<bool>(boost::any_cast<bool>(m["autoDeploy"]));
    }
    if (m.find("backendScene") != m.end() && !m["backendScene"].empty()) {
      backendScene = make_shared<string>(boost::any_cast<string>(m["backendScene"]));
    }
    if (m.find("customDomainIds") != m.end() && !m["customDomainIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["customDomainIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["customDomainIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customDomainIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("policyConfigs") != m.end() && !m["policyConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["policyConfigs"].type()) {
        vector<HttpApiDeployConfigPolicyConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["policyConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiDeployConfigPolicyConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyConfigs = make_shared<vector<HttpApiDeployConfigPolicyConfigs>>(expect1);
      }
    }
    if (m.find("serviceConfigs") != m.end() && !m["serviceConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceConfigs"].type()) {
        vector<HttpApiDeployConfigServiceConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiDeployConfigServiceConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceConfigs = make_shared<vector<HttpApiDeployConfigServiceConfigs>>(expect1);
      }
    }
  }


  virtual ~HttpApiDeployConfig() = default;
};
class HttpApiVersionInfo : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> headerName{};
  shared_ptr<string> queryName{};
  shared_ptr<string> scheme{};
  shared_ptr<string> version{};

  HttpApiVersionInfo() {}

  explicit HttpApiVersionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (headerName) {
      res["headerName"] = boost::any(*headerName);
    }
    if (queryName) {
      res["queryName"] = boost::any(*queryName);
    }
    if (scheme) {
      res["scheme"] = boost::any(*scheme);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("headerName") != m.end() && !m["headerName"].empty()) {
      headerName = make_shared<string>(boost::any_cast<string>(m["headerName"]));
    }
    if (m.find("queryName") != m.end() && !m["queryName"].empty()) {
      queryName = make_shared<string>(boost::any_cast<string>(m["queryName"]));
    }
    if (m.find("scheme") != m.end() && !m["scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["scheme"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~HttpApiVersionInfo() = default;
};
class HttpApiApiInfo : public Darabonba::Model {
public:
  shared_ptr<vector<string>> aiProtocols{};
  shared_ptr<AuthConfig> authConfig{};
  shared_ptr<string> basePath{};
  shared_ptr<vector<HttpApiDeployConfig>> deployConfigs{};
  shared_ptr<string> description{};
  shared_ptr<bool> enabelAuth{};
  shared_ptr<vector<HttpApiApiInfoEnvironments>> environments{};
  shared_ptr<string> httpApiId{};
  shared_ptr<HttpApiApiInfoIngressInfo> ingressInfo{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> protocols{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> type{};
  shared_ptr<HttpApiVersionInfo> versionInfo{};

  HttpApiApiInfo() {}

  explicit HttpApiApiInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aiProtocols) {
      res["aiProtocols"] = boost::any(*aiProtocols);
    }
    if (authConfig) {
      res["authConfig"] = authConfig ? boost::any(authConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (basePath) {
      res["basePath"] = boost::any(*basePath);
    }
    if (deployConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*deployConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["deployConfigs"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enabelAuth) {
      res["enabelAuth"] = boost::any(*enabelAuth);
    }
    if (environments) {
      vector<boost::any> temp1;
      for(auto item1:*environments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["environments"] = boost::any(temp1);
    }
    if (httpApiId) {
      res["httpApiId"] = boost::any(*httpApiId);
    }
    if (ingressInfo) {
      res["ingressInfo"] = ingressInfo ? boost::any(ingressInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (protocols) {
      res["protocols"] = boost::any(*protocols);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (versionInfo) {
      res["versionInfo"] = versionInfo ? boost::any(versionInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aiProtocols") != m.end() && !m["aiProtocols"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["aiProtocols"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["aiProtocols"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aiProtocols = make_shared<vector<string>>(toVec1);
    }
    if (m.find("authConfig") != m.end() && !m["authConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["authConfig"].type()) {
        AuthConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authConfig"]));
        authConfig = make_shared<AuthConfig>(model1);
      }
    }
    if (m.find("basePath") != m.end() && !m["basePath"].empty()) {
      basePath = make_shared<string>(boost::any_cast<string>(m["basePath"]));
    }
    if (m.find("deployConfigs") != m.end() && !m["deployConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["deployConfigs"].type()) {
        vector<HttpApiDeployConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["deployConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiDeployConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deployConfigs = make_shared<vector<HttpApiDeployConfig>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enabelAuth") != m.end() && !m["enabelAuth"].empty()) {
      enabelAuth = make_shared<bool>(boost::any_cast<bool>(m["enabelAuth"]));
    }
    if (m.find("environments") != m.end() && !m["environments"].empty()) {
      if (typeid(vector<boost::any>) == m["environments"].type()) {
        vector<HttpApiApiInfoEnvironments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["environments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiApiInfoEnvironments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        environments = make_shared<vector<HttpApiApiInfoEnvironments>>(expect1);
      }
    }
    if (m.find("httpApiId") != m.end() && !m["httpApiId"].empty()) {
      httpApiId = make_shared<string>(boost::any_cast<string>(m["httpApiId"]));
    }
    if (m.find("ingressInfo") != m.end() && !m["ingressInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ingressInfo"].type()) {
        HttpApiApiInfoIngressInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ingressInfo"]));
        ingressInfo = make_shared<HttpApiApiInfoIngressInfo>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("protocols") != m.end() && !m["protocols"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["protocols"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["protocols"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      protocols = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("versionInfo") != m.end() && !m["versionInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["versionInfo"].type()) {
        HttpApiVersionInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["versionInfo"]));
        versionInfo = make_shared<HttpApiVersionInfo>(model1);
      }
    }
  }


  virtual ~HttpApiApiInfo() = default;
};
class HttpApiInfoByName : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<bool> versionEnabled{};
  shared_ptr<vector<HttpApiApiInfo>> versionedHttpApis{};

  HttpApiInfoByName() {}

  explicit HttpApiInfoByName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (versionEnabled) {
      res["versionEnabled"] = boost::any(*versionEnabled);
    }
    if (versionedHttpApis) {
      vector<boost::any> temp1;
      for(auto item1:*versionedHttpApis){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["versionedHttpApis"] = boost::any(temp1);
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
    if (m.find("versionEnabled") != m.end() && !m["versionEnabled"].empty()) {
      versionEnabled = make_shared<bool>(boost::any_cast<bool>(m["versionEnabled"]));
    }
    if (m.find("versionedHttpApis") != m.end() && !m["versionedHttpApis"].empty()) {
      if (typeid(vector<boost::any>) == m["versionedHttpApis"].type()) {
        vector<HttpApiApiInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["versionedHttpApis"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiApiInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versionedHttpApis = make_shared<vector<HttpApiApiInfo>>(expect1);
      }
    }
  }


  virtual ~HttpApiInfoByName() = default;
};
class HttpApiMockContract : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<long> responseCode{};
  shared_ptr<string> responseContent{};

  HttpApiMockContract() {}

  explicit HttpApiMockContract(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (responseCode) {
      res["responseCode"] = boost::any(*responseCode);
    }
    if (responseContent) {
      res["responseContent"] = boost::any(*responseContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("responseCode") != m.end() && !m["responseCode"].empty()) {
      responseCode = make_shared<long>(boost::any_cast<long>(m["responseCode"]));
    }
    if (m.find("responseContent") != m.end() && !m["responseContent"].empty()) {
      responseContent = make_shared<string>(boost::any_cast<string>(m["responseContent"]));
    }
  }


  virtual ~HttpApiMockContract() = default;
};
class HttpApiParameter : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> description{};
  shared_ptr<string> exampleValue{};
  shared_ptr<string> name{};
  shared_ptr<bool> required{};
  shared_ptr<string> type{};

  HttpApiParameter() {}

  explicit HttpApiParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["defaultValue"] = boost::any(*defaultValue);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (exampleValue) {
      res["exampleValue"] = boost::any(*exampleValue);
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
    if (m.find("defaultValue") != m.end() && !m["defaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["defaultValue"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("exampleValue") != m.end() && !m["exampleValue"].empty()) {
      exampleValue = make_shared<string>(boost::any_cast<string>(m["exampleValue"]));
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


  virtual ~HttpApiParameter() = default;
};
class HttpApiRequestContractBody : public Darabonba::Model {
public:
  shared_ptr<string> contentType{};
  shared_ptr<string> description{};
  shared_ptr<string> example{};
  shared_ptr<string> jsonSchema{};

  HttpApiRequestContractBody() {}

  explicit HttpApiRequestContractBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentType) {
      res["contentType"] = boost::any(*contentType);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (example) {
      res["example"] = boost::any(*example);
    }
    if (jsonSchema) {
      res["jsonSchema"] = boost::any(*jsonSchema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contentType") != m.end() && !m["contentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["contentType"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("example") != m.end() && !m["example"].empty()) {
      example = make_shared<string>(boost::any_cast<string>(m["example"]));
    }
    if (m.find("jsonSchema") != m.end() && !m["jsonSchema"].empty()) {
      jsonSchema = make_shared<string>(boost::any_cast<string>(m["jsonSchema"]));
    }
  }


  virtual ~HttpApiRequestContractBody() = default;
};
class HttpApiRequestContract : public Darabonba::Model {
public:
  shared_ptr<HttpApiRequestContractBody> body{};
  shared_ptr<vector<HttpApiParameter>> headerParameters{};
  shared_ptr<vector<HttpApiParameter>> pathParameters{};
  shared_ptr<vector<HttpApiParameter>> queryParameters{};

  HttpApiRequestContract() {}

  explicit HttpApiRequestContract(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (headerParameters) {
      vector<boost::any> temp1;
      for(auto item1:*headerParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["headerParameters"] = boost::any(temp1);
    }
    if (pathParameters) {
      vector<boost::any> temp1;
      for(auto item1:*pathParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pathParameters"] = boost::any(temp1);
    }
    if (queryParameters) {
      vector<boost::any> temp1;
      for(auto item1:*queryParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["queryParameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        HttpApiRequestContractBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HttpApiRequestContractBody>(model1);
      }
    }
    if (m.find("headerParameters") != m.end() && !m["headerParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["headerParameters"].type()) {
        vector<HttpApiParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["headerParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        headerParameters = make_shared<vector<HttpApiParameter>>(expect1);
      }
    }
    if (m.find("pathParameters") != m.end() && !m["pathParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["pathParameters"].type()) {
        vector<HttpApiParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pathParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pathParameters = make_shared<vector<HttpApiParameter>>(expect1);
      }
    }
    if (m.find("queryParameters") != m.end() && !m["queryParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["queryParameters"].type()) {
        vector<HttpApiParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["queryParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryParameters = make_shared<vector<HttpApiParameter>>(expect1);
      }
    }
  }


  virtual ~HttpApiRequestContract() = default;
};
class HttpApiResponseContractItems : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> description{};
  shared_ptr<string> example{};
  shared_ptr<string> jsonSchema{};

  HttpApiResponseContractItems() {}

  explicit HttpApiResponseContractItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (example) {
      res["example"] = boost::any(*example);
    }
    if (jsonSchema) {
      res["jsonSchema"] = boost::any(*jsonSchema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("example") != m.end() && !m["example"].empty()) {
      example = make_shared<string>(boost::any_cast<string>(m["example"]));
    }
    if (m.find("jsonSchema") != m.end() && !m["jsonSchema"].empty()) {
      jsonSchema = make_shared<string>(boost::any_cast<string>(m["jsonSchema"]));
    }
  }


  virtual ~HttpApiResponseContractItems() = default;
};
class HttpApiResponseContract : public Darabonba::Model {
public:
  shared_ptr<string> contentType{};
  shared_ptr<vector<HttpApiResponseContractItems>> items{};

  HttpApiResponseContract() {}

  explicit HttpApiResponseContract(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentType) {
      res["contentType"] = boost::any(*contentType);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("contentType") != m.end() && !m["contentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["contentType"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<HttpApiResponseContractItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiResponseContractItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<HttpApiResponseContractItems>>(expect1);
      }
    }
  }


  virtual ~HttpApiResponseContract() = default;
};
class HttpApiOperation : public Darabonba::Model {
public:
  shared_ptr<AuthConfig> authConfig{};
  shared_ptr<string> description{};
  shared_ptr<bool> enableAuth{};
  shared_ptr<string> method{};
  shared_ptr<HttpApiMockContract> mock{};
  shared_ptr<string> name{};
  shared_ptr<string> path{};
  shared_ptr<HttpApiRequestContract> request{};
  shared_ptr<HttpApiResponseContract> response{};

  HttpApiOperation() {}

  explicit HttpApiOperation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authConfig) {
      res["authConfig"] = authConfig ? boost::any(authConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enableAuth) {
      res["enableAuth"] = boost::any(*enableAuth);
    }
    if (method) {
      res["method"] = boost::any(*method);
    }
    if (mock) {
      res["mock"] = mock ? boost::any(mock->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (request) {
      res["request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (response) {
      res["response"] = response ? boost::any(response->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authConfig") != m.end() && !m["authConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["authConfig"].type()) {
        AuthConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authConfig"]));
        authConfig = make_shared<AuthConfig>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enableAuth") != m.end() && !m["enableAuth"].empty()) {
      enableAuth = make_shared<bool>(boost::any_cast<bool>(m["enableAuth"]));
    }
    if (m.find("method") != m.end() && !m["method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["method"]));
    }
    if (m.find("mock") != m.end() && !m["mock"].empty()) {
      if (typeid(map<string, boost::any>) == m["mock"].type()) {
        HttpApiMockContract model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["mock"]));
        mock = make_shared<HttpApiMockContract>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("request") != m.end() && !m["request"].empty()) {
      if (typeid(map<string, boost::any>) == m["request"].type()) {
        HttpApiRequestContract model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["request"]));
        request = make_shared<HttpApiRequestContract>(model1);
      }
    }
    if (m.find("response") != m.end() && !m["response"].empty()) {
      if (typeid(map<string, boost::any>) == m["response"].type()) {
        HttpApiResponseContract model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["response"]));
        response = make_shared<HttpApiResponseContract>(model1);
      }
    }
  }


  virtual ~HttpApiOperation() = default;
};
class HttpApiOperationInfo : public Darabonba::Model {
public:
  shared_ptr<AuthConfig> authConfig{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> description{};
  shared_ptr<bool> enableAuth{};
  shared_ptr<string> method{};
  shared_ptr<HttpApiMockContract> mock{};
  shared_ptr<string> name{};
  shared_ptr<string> operationId{};
  shared_ptr<string> path{};
  shared_ptr<HttpApiRequestContract> request{};
  shared_ptr<HttpApiResponseContract> response{};

  HttpApiOperationInfo() {}

  explicit HttpApiOperationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authConfig) {
      res["authConfig"] = authConfig ? boost::any(authConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enableAuth) {
      res["enableAuth"] = boost::any(*enableAuth);
    }
    if (method) {
      res["method"] = boost::any(*method);
    }
    if (mock) {
      res["mock"] = mock ? boost::any(mock->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (operationId) {
      res["operationId"] = boost::any(*operationId);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (request) {
      res["request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (response) {
      res["response"] = response ? boost::any(response->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authConfig") != m.end() && !m["authConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["authConfig"].type()) {
        AuthConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authConfig"]));
        authConfig = make_shared<AuthConfig>(model1);
      }
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enableAuth") != m.end() && !m["enableAuth"].empty()) {
      enableAuth = make_shared<bool>(boost::any_cast<bool>(m["enableAuth"]));
    }
    if (m.find("method") != m.end() && !m["method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["method"]));
    }
    if (m.find("mock") != m.end() && !m["mock"].empty()) {
      if (typeid(map<string, boost::any>) == m["mock"].type()) {
        HttpApiMockContract model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["mock"]));
        mock = make_shared<HttpApiMockContract>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("operationId") != m.end() && !m["operationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["operationId"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("request") != m.end() && !m["request"].empty()) {
      if (typeid(map<string, boost::any>) == m["request"].type()) {
        HttpApiRequestContract model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["request"]));
        request = make_shared<HttpApiRequestContract>(model1);
      }
    }
    if (m.find("response") != m.end() && !m["response"].empty()) {
      if (typeid(map<string, boost::any>) == m["response"].type()) {
        HttpApiResponseContract model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["response"]));
        response = make_shared<HttpApiResponseContract>(model1);
      }
    }
  }


  virtual ~HttpApiOperationInfo() = default;
};
class HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> weight{};

  HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs() {}

  explicit HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<string>(boost::any_cast<string>(m["weight"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs() = default;
};
class HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<string> name{};
  shared_ptr<string> qualifier{};
  shared_ptr<long> weight{};

  HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs() {}

  explicit HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs() = default;
};
class HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<string> groupName{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> weight{};

  HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs() {}

  explicit HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs() = default;
};
class HttpApiPublishRevisionInfoCloudProductConfig : public Darabonba::Model {
public:
  shared_ptr<string> cloudProductType{};
  shared_ptr<vector<HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs>> containerServiceConfigs{};
  shared_ptr<vector<HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs>> functionConfigs{};
  shared_ptr<vector<HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs>> mseNacosConfigs{};

  HttpApiPublishRevisionInfoCloudProductConfig() {}

  explicit HttpApiPublishRevisionInfoCloudProductConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudProductType) {
      res["cloudProductType"] = boost::any(*cloudProductType);
    }
    if (containerServiceConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*containerServiceConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["containerServiceConfigs"] = boost::any(temp1);
    }
    if (functionConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*functionConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["functionConfigs"] = boost::any(temp1);
    }
    if (mseNacosConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*mseNacosConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mseNacosConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cloudProductType") != m.end() && !m["cloudProductType"].empty()) {
      cloudProductType = make_shared<string>(boost::any_cast<string>(m["cloudProductType"]));
    }
    if (m.find("containerServiceConfigs") != m.end() && !m["containerServiceConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["containerServiceConfigs"].type()) {
        vector<HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["containerServiceConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        containerServiceConfigs = make_shared<vector<HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs>>(expect1);
      }
    }
    if (m.find("functionConfigs") != m.end() && !m["functionConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["functionConfigs"].type()) {
        vector<HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["functionConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        functionConfigs = make_shared<vector<HttpApiPublishRevisionInfoCloudProductConfigFunctionConfigs>>(expect1);
      }
    }
    if (m.find("mseNacosConfigs") != m.end() && !m["mseNacosConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["mseNacosConfigs"].type()) {
        vector<HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mseNacosConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mseNacosConfigs = make_shared<vector<HttpApiPublishRevisionInfoCloudProductConfigMseNacosConfigs>>(expect1);
      }
    }
  }


  virtual ~HttpApiPublishRevisionInfoCloudProductConfig() = default;
};
class HttpApiPublishRevisionInfoDnsConfigs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dnsList{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<long> weight{};

  HttpApiPublishRevisionInfoDnsConfigs() {}

  explicit HttpApiPublishRevisionInfoDnsConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsList) {
      res["dnsList"] = boost::any(*dnsList);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dnsList") != m.end() && !m["dnsList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dnsList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dnsList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dnsList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoDnsConfigs() = default;
};
class HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> name{};

  HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo() {}

  explicit HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo() = default;
};
class HttpApiPublishRevisionInfoEnvironmentInfo : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> environmentId{};
  shared_ptr<HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo> gatewayInfo{};
  shared_ptr<string> name{};

  HttpApiPublishRevisionInfoEnvironmentInfo() {}

  explicit HttpApiPublishRevisionInfoEnvironmentInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (gatewayInfo) {
      res["gatewayInfo"] = gatewayInfo ? boost::any(gatewayInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("gatewayInfo") != m.end() && !m["gatewayInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["gatewayInfo"].type()) {
        HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gatewayInfo"]));
        gatewayInfo = make_shared<HttpApiPublishRevisionInfoEnvironmentInfoGatewayInfo>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoEnvironmentInfo() = default;
};
class HttpApiPublishRevisionInfoServiceConfigs : public Darabonba::Model {
public:
  shared_ptr<string> gatewayServiceId{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> version{};
  shared_ptr<long> weight{};

  HttpApiPublishRevisionInfoServiceConfigs() {}

  explicit HttpApiPublishRevisionInfoServiceConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayServiceId) {
      res["gatewayServiceId"] = boost::any(*gatewayServiceId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
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
    if (m.find("gatewayServiceId") != m.end() && !m["gatewayServiceId"].empty()) {
      gatewayServiceId = make_shared<string>(boost::any_cast<string>(m["gatewayServiceId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoServiceConfigs() = default;
};
class HttpApiPublishRevisionInfoVipConfigs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> endpoints{};
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<long> weight{};

  HttpApiPublishRevisionInfoVipConfigs() {}

  explicit HttpApiPublishRevisionInfoVipConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoints) {
      res["endpoints"] = boost::any(*endpoints);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpoints") != m.end() && !m["endpoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["endpoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["endpoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpoints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~HttpApiPublishRevisionInfoVipConfigs() = default;
};
class HttpApiPublishRevisionInfo : public Darabonba::Model {
public:
  shared_ptr<string> backendScene{};
  shared_ptr<string> backendType{};
  shared_ptr<HttpApiPublishRevisionInfoCloudProductConfig> cloudProductConfig{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<vector<HttpApiDomainInfo>> customDomains{};
  shared_ptr<vector<HttpApiPublishRevisionInfoDnsConfigs>> dnsConfigs{};
  shared_ptr<HttpApiPublishRevisionInfoEnvironmentInfo> environmentInfo{};
  shared_ptr<bool> isCurrentVersion{};
  shared_ptr<vector<HttpApiOperationInfo>> operations{};
  shared_ptr<string> revisionId{};
  shared_ptr<vector<HttpApiPublishRevisionInfoServiceConfigs>> serviceConfigs{};
  shared_ptr<vector<HttpApiDomainInfo>> subDomains{};
  shared_ptr<vector<HttpApiPublishRevisionInfoVipConfigs>> vipConfigs{};

  HttpApiPublishRevisionInfo() {}

  explicit HttpApiPublishRevisionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendScene) {
      res["backendScene"] = boost::any(*backendScene);
    }
    if (backendType) {
      res["backendType"] = boost::any(*backendType);
    }
    if (cloudProductConfig) {
      res["cloudProductConfig"] = cloudProductConfig ? boost::any(cloudProductConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (customDomains) {
      vector<boost::any> temp1;
      for(auto item1:*customDomains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customDomains"] = boost::any(temp1);
    }
    if (dnsConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*dnsConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dnsConfigs"] = boost::any(temp1);
    }
    if (environmentInfo) {
      res["environmentInfo"] = environmentInfo ? boost::any(environmentInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isCurrentVersion) {
      res["isCurrentVersion"] = boost::any(*isCurrentVersion);
    }
    if (operations) {
      vector<boost::any> temp1;
      for(auto item1:*operations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["operations"] = boost::any(temp1);
    }
    if (revisionId) {
      res["revisionId"] = boost::any(*revisionId);
    }
    if (serviceConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*serviceConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceConfigs"] = boost::any(temp1);
    }
    if (subDomains) {
      vector<boost::any> temp1;
      for(auto item1:*subDomains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subDomains"] = boost::any(temp1);
    }
    if (vipConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*vipConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["vipConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backendScene") != m.end() && !m["backendScene"].empty()) {
      backendScene = make_shared<string>(boost::any_cast<string>(m["backendScene"]));
    }
    if (m.find("backendType") != m.end() && !m["backendType"].empty()) {
      backendType = make_shared<string>(boost::any_cast<string>(m["backendType"]));
    }
    if (m.find("cloudProductConfig") != m.end() && !m["cloudProductConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["cloudProductConfig"].type()) {
        HttpApiPublishRevisionInfoCloudProductConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cloudProductConfig"]));
        cloudProductConfig = make_shared<HttpApiPublishRevisionInfoCloudProductConfig>(model1);
      }
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("customDomains") != m.end() && !m["customDomains"].empty()) {
      if (typeid(vector<boost::any>) == m["customDomains"].type()) {
        vector<HttpApiDomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customDomains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiDomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customDomains = make_shared<vector<HttpApiDomainInfo>>(expect1);
      }
    }
    if (m.find("dnsConfigs") != m.end() && !m["dnsConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["dnsConfigs"].type()) {
        vector<HttpApiPublishRevisionInfoDnsConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dnsConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiPublishRevisionInfoDnsConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dnsConfigs = make_shared<vector<HttpApiPublishRevisionInfoDnsConfigs>>(expect1);
      }
    }
    if (m.find("environmentInfo") != m.end() && !m["environmentInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["environmentInfo"].type()) {
        HttpApiPublishRevisionInfoEnvironmentInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["environmentInfo"]));
        environmentInfo = make_shared<HttpApiPublishRevisionInfoEnvironmentInfo>(model1);
      }
    }
    if (m.find("isCurrentVersion") != m.end() && !m["isCurrentVersion"].empty()) {
      isCurrentVersion = make_shared<bool>(boost::any_cast<bool>(m["isCurrentVersion"]));
    }
    if (m.find("operations") != m.end() && !m["operations"].empty()) {
      if (typeid(vector<boost::any>) == m["operations"].type()) {
        vector<HttpApiOperationInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["operations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiOperationInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operations = make_shared<vector<HttpApiOperationInfo>>(expect1);
      }
    }
    if (m.find("revisionId") != m.end() && !m["revisionId"].empty()) {
      revisionId = make_shared<string>(boost::any_cast<string>(m["revisionId"]));
    }
    if (m.find("serviceConfigs") != m.end() && !m["serviceConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceConfigs"].type()) {
        vector<HttpApiPublishRevisionInfoServiceConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiPublishRevisionInfoServiceConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceConfigs = make_shared<vector<HttpApiPublishRevisionInfoServiceConfigs>>(expect1);
      }
    }
    if (m.find("subDomains") != m.end() && !m["subDomains"].empty()) {
      if (typeid(vector<boost::any>) == m["subDomains"].type()) {
        vector<HttpApiDomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subDomains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiDomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subDomains = make_shared<vector<HttpApiDomainInfo>>(expect1);
      }
    }
    if (m.find("vipConfigs") != m.end() && !m["vipConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["vipConfigs"].type()) {
        vector<HttpApiPublishRevisionInfoVipConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["vipConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiPublishRevisionInfoVipConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vipConfigs = make_shared<vector<HttpApiPublishRevisionInfoVipConfigs>>(expect1);
      }
    }
  }


  virtual ~HttpApiPublishRevisionInfo() = default;
};
class HttpApiVersionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> headerName{};
  shared_ptr<string> queryName{};
  shared_ptr<string> scheme{};
  shared_ptr<string> version{};

  HttpApiVersionConfig() {}

  explicit HttpApiVersionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (headerName) {
      res["headerName"] = boost::any(*headerName);
    }
    if (queryName) {
      res["queryName"] = boost::any(*queryName);
    }
    if (scheme) {
      res["scheme"] = boost::any(*scheme);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("headerName") != m.end() && !m["headerName"].empty()) {
      headerName = make_shared<string>(boost::any_cast<string>(m["headerName"]));
    }
    if (m.find("queryName") != m.end() && !m["queryName"].empty()) {
      queryName = make_shared<string>(boost::any_cast<string>(m["queryName"]));
    }
    if (m.find("scheme") != m.end() && !m["scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["scheme"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~HttpApiVersionConfig() = default;
};
class HttpDubboTranscoderMothedMapListParamMapsList : public Darabonba::Model {
public:
  shared_ptr<string> extractKey{};
  shared_ptr<string> extractKeySpec{};
  shared_ptr<string> mappingType{};

  HttpDubboTranscoderMothedMapListParamMapsList() {}

  explicit HttpDubboTranscoderMothedMapListParamMapsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extractKey) {
      res["extractKey"] = boost::any(*extractKey);
    }
    if (extractKeySpec) {
      res["extractKeySpec"] = boost::any(*extractKeySpec);
    }
    if (mappingType) {
      res["mappingType"] = boost::any(*mappingType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("extractKey") != m.end() && !m["extractKey"].empty()) {
      extractKey = make_shared<string>(boost::any_cast<string>(m["extractKey"]));
    }
    if (m.find("extractKeySpec") != m.end() && !m["extractKeySpec"].empty()) {
      extractKeySpec = make_shared<string>(boost::any_cast<string>(m["extractKeySpec"]));
    }
    if (m.find("mappingType") != m.end() && !m["mappingType"].empty()) {
      mappingType = make_shared<string>(boost::any_cast<string>(m["mappingType"]));
    }
  }


  virtual ~HttpDubboTranscoderMothedMapListParamMapsList() = default;
};
class HttpDubboTranscoderMothedMapList : public Darabonba::Model {
public:
  shared_ptr<string> dubboMothedName{};
  shared_ptr<string> httpMothed{};
  shared_ptr<string> mothedpath{};
  shared_ptr<vector<HttpDubboTranscoderMothedMapListParamMapsList>> paramMapsList{};
  shared_ptr<string> passThroughAllHeaders{};
  shared_ptr<vector<string>> passThroughList{};

  HttpDubboTranscoderMothedMapList() {}

  explicit HttpDubboTranscoderMothedMapList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dubboMothedName) {
      res["dubboMothedName"] = boost::any(*dubboMothedName);
    }
    if (httpMothed) {
      res["httpMothed"] = boost::any(*httpMothed);
    }
    if (mothedpath) {
      res["mothedpath"] = boost::any(*mothedpath);
    }
    if (paramMapsList) {
      vector<boost::any> temp1;
      for(auto item1:*paramMapsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["paramMapsList"] = boost::any(temp1);
    }
    if (passThroughAllHeaders) {
      res["passThroughAllHeaders"] = boost::any(*passThroughAllHeaders);
    }
    if (passThroughList) {
      res["passThroughList"] = boost::any(*passThroughList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dubboMothedName") != m.end() && !m["dubboMothedName"].empty()) {
      dubboMothedName = make_shared<string>(boost::any_cast<string>(m["dubboMothedName"]));
    }
    if (m.find("httpMothed") != m.end() && !m["httpMothed"].empty()) {
      httpMothed = make_shared<string>(boost::any_cast<string>(m["httpMothed"]));
    }
    if (m.find("mothedpath") != m.end() && !m["mothedpath"].empty()) {
      mothedpath = make_shared<string>(boost::any_cast<string>(m["mothedpath"]));
    }
    if (m.find("paramMapsList") != m.end() && !m["paramMapsList"].empty()) {
      if (typeid(vector<boost::any>) == m["paramMapsList"].type()) {
        vector<HttpDubboTranscoderMothedMapListParamMapsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["paramMapsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpDubboTranscoderMothedMapListParamMapsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramMapsList = make_shared<vector<HttpDubboTranscoderMothedMapListParamMapsList>>(expect1);
      }
    }
    if (m.find("passThroughAllHeaders") != m.end() && !m["passThroughAllHeaders"].empty()) {
      passThroughAllHeaders = make_shared<string>(boost::any_cast<string>(m["passThroughAllHeaders"]));
    }
    if (m.find("passThroughList") != m.end() && !m["passThroughList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["passThroughList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["passThroughList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      passThroughList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~HttpDubboTranscoderMothedMapList() = default;
};
class HttpDubboTranscoder : public Darabonba::Model {
public:
  shared_ptr<string> dubboServiceGroup{};
  shared_ptr<string> dubboServiceName{};
  shared_ptr<string> dubboServiceVersion{};
  shared_ptr<vector<HttpDubboTranscoderMothedMapList>> mothedMapList{};

  HttpDubboTranscoder() {}

  explicit HttpDubboTranscoder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dubboServiceGroup) {
      res["dubboServiceGroup"] = boost::any(*dubboServiceGroup);
    }
    if (dubboServiceName) {
      res["dubboServiceName"] = boost::any(*dubboServiceName);
    }
    if (dubboServiceVersion) {
      res["dubboServiceVersion"] = boost::any(*dubboServiceVersion);
    }
    if (mothedMapList) {
      vector<boost::any> temp1;
      for(auto item1:*mothedMapList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["mothedMapList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dubboServiceGroup") != m.end() && !m["dubboServiceGroup"].empty()) {
      dubboServiceGroup = make_shared<string>(boost::any_cast<string>(m["dubboServiceGroup"]));
    }
    if (m.find("dubboServiceName") != m.end() && !m["dubboServiceName"].empty()) {
      dubboServiceName = make_shared<string>(boost::any_cast<string>(m["dubboServiceName"]));
    }
    if (m.find("dubboServiceVersion") != m.end() && !m["dubboServiceVersion"].empty()) {
      dubboServiceVersion = make_shared<string>(boost::any_cast<string>(m["dubboServiceVersion"]));
    }
    if (m.find("mothedMapList") != m.end() && !m["mothedMapList"].empty()) {
      if (typeid(vector<boost::any>) == m["mothedMapList"].type()) {
        vector<HttpDubboTranscoderMothedMapList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["mothedMapList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpDubboTranscoderMothedMapList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mothedMapList = make_shared<vector<HttpDubboTranscoderMothedMapList>>(expect1);
      }
    }
  }


  virtual ~HttpDubboTranscoder() = default;
};
class HttpRouteDomainInfos : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> name{};
  shared_ptr<string> protocol{};

  HttpRouteDomainInfos() {}

  explicit HttpRouteDomainInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
  }


  virtual ~HttpRouteDomainInfos() = default;
};
class HttpRouteEnvironmentInfoGatewayInfo : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> name{};

  HttpRouteEnvironmentInfoGatewayInfo() {}

  explicit HttpRouteEnvironmentInfoGatewayInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~HttpRouteEnvironmentInfoGatewayInfo() = default;
};
class HttpRouteEnvironmentInfoSubDomains : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> name{};
  shared_ptr<string> networkType{};
  shared_ptr<string> protocol{};

  HttpRouteEnvironmentInfoSubDomains() {}

  explicit HttpRouteEnvironmentInfoSubDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (networkType) {
      res["networkType"] = boost::any(*networkType);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("networkType") != m.end() && !m["networkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["networkType"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
  }


  virtual ~HttpRouteEnvironmentInfoSubDomains() = default;
};
class HttpRouteEnvironmentInfo : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> environmentId{};
  shared_ptr<HttpRouteEnvironmentInfoGatewayInfo> gatewayInfo{};
  shared_ptr<string> name{};
  shared_ptr<vector<HttpRouteEnvironmentInfoSubDomains>> subDomains{};

  HttpRouteEnvironmentInfo() {}

  explicit HttpRouteEnvironmentInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (gatewayInfo) {
      res["gatewayInfo"] = gatewayInfo ? boost::any(gatewayInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (subDomains) {
      vector<boost::any> temp1;
      for(auto item1:*subDomains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subDomains"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("gatewayInfo") != m.end() && !m["gatewayInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["gatewayInfo"].type()) {
        HttpRouteEnvironmentInfoGatewayInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gatewayInfo"]));
        gatewayInfo = make_shared<HttpRouteEnvironmentInfoGatewayInfo>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("subDomains") != m.end() && !m["subDomains"].empty()) {
      if (typeid(vector<boost::any>) == m["subDomains"].type()) {
        vector<HttpRouteEnvironmentInfoSubDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subDomains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpRouteEnvironmentInfoSubDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subDomains = make_shared<vector<HttpRouteEnvironmentInfoSubDomains>>(expect1);
      }
    }
  }


  virtual ~HttpRouteEnvironmentInfo() = default;
};
class HttpRoute : public Darabonba::Model {
public:
  shared_ptr<Backend> backend{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> deployStatus{};
  shared_ptr<string> description{};
  shared_ptr<vector<HttpRouteDomainInfos>> domainInfos{};
  shared_ptr<HttpRouteEnvironmentInfo> environmentInfo{};
  shared_ptr<HttpRouteMatch> match{};
  shared_ptr<string> name{};
  shared_ptr<string> routeId{};
  shared_ptr<long> updateTimestamp{};

  HttpRoute() {}

  explicit HttpRoute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backend) {
      res["backend"] = backend ? boost::any(backend->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (deployStatus) {
      res["deployStatus"] = boost::any(*deployStatus);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domainInfos) {
      vector<boost::any> temp1;
      for(auto item1:*domainInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["domainInfos"] = boost::any(temp1);
    }
    if (environmentInfo) {
      res["environmentInfo"] = environmentInfo ? boost::any(environmentInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (routeId) {
      res["routeId"] = boost::any(*routeId);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backend") != m.end() && !m["backend"].empty()) {
      if (typeid(map<string, boost::any>) == m["backend"].type()) {
        Backend model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["backend"]));
        backend = make_shared<Backend>(model1);
      }
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("deployStatus") != m.end() && !m["deployStatus"].empty()) {
      deployStatus = make_shared<string>(boost::any_cast<string>(m["deployStatus"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domainInfos") != m.end() && !m["domainInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["domainInfos"].type()) {
        vector<HttpRouteDomainInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["domainInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpRouteDomainInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainInfos = make_shared<vector<HttpRouteDomainInfos>>(expect1);
      }
    }
    if (m.find("environmentInfo") != m.end() && !m["environmentInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["environmentInfo"].type()) {
        HttpRouteEnvironmentInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["environmentInfo"]));
        environmentInfo = make_shared<HttpRouteEnvironmentInfo>(model1);
      }
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpRouteMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpRouteMatch>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("routeId") != m.end() && !m["routeId"].empty()) {
      routeId = make_shared<string>(boost::any_cast<string>(m["routeId"]));
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
  }


  virtual ~HttpRoute() = default;
};
class JwtIdentityConfigJwtPayloadConfig : public Darabonba::Model {
public:
  shared_ptr<string> payloadKeyName{};
  shared_ptr<string> payloadKeyValue{};

  JwtIdentityConfigJwtPayloadConfig() {}

  explicit JwtIdentityConfigJwtPayloadConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payloadKeyName) {
      res["payloadKeyName"] = boost::any(*payloadKeyName);
    }
    if (payloadKeyValue) {
      res["payloadKeyValue"] = boost::any(*payloadKeyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("payloadKeyName") != m.end() && !m["payloadKeyName"].empty()) {
      payloadKeyName = make_shared<string>(boost::any_cast<string>(m["payloadKeyName"]));
    }
    if (m.find("payloadKeyValue") != m.end() && !m["payloadKeyValue"].empty()) {
      payloadKeyValue = make_shared<string>(boost::any_cast<string>(m["payloadKeyValue"]));
    }
  }


  virtual ~JwtIdentityConfigJwtPayloadConfig() = default;
};
class JwtIdentityConfigJwtTokenConfig : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<bool> pass{};
  shared_ptr<string> position{};
  shared_ptr<string> prefix{};

  JwtIdentityConfigJwtTokenConfig() {}

  explicit JwtIdentityConfigJwtTokenConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (pass) {
      res["pass"] = boost::any(*pass);
    }
    if (position) {
      res["position"] = boost::any(*position);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("pass") != m.end() && !m["pass"].empty()) {
      pass = make_shared<bool>(boost::any_cast<bool>(m["pass"]));
    }
    if (m.find("position") != m.end() && !m["position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["position"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
  }


  virtual ~JwtIdentityConfigJwtTokenConfig() = default;
};
class JwtIdentityConfig : public Darabonba::Model {
public:
  shared_ptr<string> jwks{};
  shared_ptr<JwtIdentityConfigJwtPayloadConfig> jwtPayloadConfig{};
  shared_ptr<JwtIdentityConfigJwtTokenConfig> jwtTokenConfig{};
  shared_ptr<string> secretType{};
  shared_ptr<string> type{};

  JwtIdentityConfig() {}

  explicit JwtIdentityConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwks) {
      res["jwks"] = boost::any(*jwks);
    }
    if (jwtPayloadConfig) {
      res["jwtPayloadConfig"] = jwtPayloadConfig ? boost::any(jwtPayloadConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jwtTokenConfig) {
      res["jwtTokenConfig"] = jwtTokenConfig ? boost::any(jwtTokenConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (secretType) {
      res["secretType"] = boost::any(*secretType);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jwks") != m.end() && !m["jwks"].empty()) {
      jwks = make_shared<string>(boost::any_cast<string>(m["jwks"]));
    }
    if (m.find("jwtPayloadConfig") != m.end() && !m["jwtPayloadConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["jwtPayloadConfig"].type()) {
        JwtIdentityConfigJwtPayloadConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["jwtPayloadConfig"]));
        jwtPayloadConfig = make_shared<JwtIdentityConfigJwtPayloadConfig>(model1);
      }
    }
    if (m.find("jwtTokenConfig") != m.end() && !m["jwtTokenConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["jwtTokenConfig"].type()) {
        JwtIdentityConfigJwtTokenConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["jwtTokenConfig"]));
        jwtTokenConfig = make_shared<JwtIdentityConfigJwtTokenConfig>(model1);
      }
    }
    if (m.find("secretType") != m.end() && !m["secretType"].empty()) {
      secretType = make_shared<string>(boost::any_cast<string>(m["secretType"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~JwtIdentityConfig() = default;
};
class ParentResourceInfo : public Darabonba::Model {
public:
  shared_ptr<HttpApiApiInfo> apiInfo{};
  shared_ptr<string> resourceType{};

  ParentResourceInfo() {}

  explicit ParentResourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfo) {
      res["apiInfo"] = apiInfo ? boost::any(apiInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiInfo") != m.end() && !m["apiInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["apiInfo"].type()) {
        HttpApiApiInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["apiInfo"]));
        apiInfo = make_shared<HttpApiApiInfo>(model1);
      }
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ParentResourceInfo() = default;
};
class PluginClassInfo : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> configExample{};
  shared_ptr<string> description{};
  shared_ptr<long> executePriority{};
  shared_ptr<string> executeStage{};
  shared_ptr<string> imageName{};
  shared_ptr<bool> innerPlugin{};
  shared_ptr<string> mode{};
  shared_ptr<string> name{};
  shared_ptr<string> pluginClassId{};
  shared_ptr<string> source{};
  shared_ptr<string> supportedMinGatewayVersion{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};
  shared_ptr<string> versionDescription{};
  shared_ptr<string> wasmLanguage{};
  shared_ptr<string> wasmUrl{};

  PluginClassInfo() {}

  explicit PluginClassInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (configExample) {
      res["configExample"] = boost::any(*configExample);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (executePriority) {
      res["executePriority"] = boost::any(*executePriority);
    }
    if (executeStage) {
      res["executeStage"] = boost::any(*executeStage);
    }
    if (imageName) {
      res["imageName"] = boost::any(*imageName);
    }
    if (innerPlugin) {
      res["innerPlugin"] = boost::any(*innerPlugin);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pluginClassId) {
      res["pluginClassId"] = boost::any(*pluginClassId);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (supportedMinGatewayVersion) {
      res["supportedMinGatewayVersion"] = boost::any(*supportedMinGatewayVersion);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (versionDescription) {
      res["versionDescription"] = boost::any(*versionDescription);
    }
    if (wasmLanguage) {
      res["wasmLanguage"] = boost::any(*wasmLanguage);
    }
    if (wasmUrl) {
      res["wasmUrl"] = boost::any(*wasmUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("configExample") != m.end() && !m["configExample"].empty()) {
      configExample = make_shared<string>(boost::any_cast<string>(m["configExample"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("executePriority") != m.end() && !m["executePriority"].empty()) {
      executePriority = make_shared<long>(boost::any_cast<long>(m["executePriority"]));
    }
    if (m.find("executeStage") != m.end() && !m["executeStage"].empty()) {
      executeStage = make_shared<string>(boost::any_cast<string>(m["executeStage"]));
    }
    if (m.find("imageName") != m.end() && !m["imageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["imageName"]));
    }
    if (m.find("innerPlugin") != m.end() && !m["innerPlugin"].empty()) {
      innerPlugin = make_shared<bool>(boost::any_cast<bool>(m["innerPlugin"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pluginClassId") != m.end() && !m["pluginClassId"].empty()) {
      pluginClassId = make_shared<string>(boost::any_cast<string>(m["pluginClassId"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("supportedMinGatewayVersion") != m.end() && !m["supportedMinGatewayVersion"].empty()) {
      supportedMinGatewayVersion = make_shared<string>(boost::any_cast<string>(m["supportedMinGatewayVersion"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("versionDescription") != m.end() && !m["versionDescription"].empty()) {
      versionDescription = make_shared<string>(boost::any_cast<string>(m["versionDescription"]));
    }
    if (m.find("wasmLanguage") != m.end() && !m["wasmLanguage"].empty()) {
      wasmLanguage = make_shared<string>(boost::any_cast<string>(m["wasmLanguage"]));
    }
    if (m.find("wasmUrl") != m.end() && !m["wasmUrl"].empty()) {
      wasmUrl = make_shared<string>(boost::any_cast<string>(m["wasmUrl"]));
    }
  }


  virtual ~PluginClassInfo() = default;
};
class PolicyClassInfo : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<vector<string>> attachableResourceTypes{};
  shared_ptr<string> classId{};
  shared_ptr<string> configExample{};
  shared_ptr<bool> deprecated{};
  shared_ptr<string> description{};
  shared_ptr<string> direction{};
  shared_ptr<bool> enableLog{};
  shared_ptr<string> executePriority{};
  shared_ptr<string> executeStage{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  PolicyClassInfo() {}

  explicit PolicyClassInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (attachableResourceTypes) {
      res["attachableResourceTypes"] = boost::any(*attachableResourceTypes);
    }
    if (classId) {
      res["classId"] = boost::any(*classId);
    }
    if (configExample) {
      res["configExample"] = boost::any(*configExample);
    }
    if (deprecated) {
      res["deprecated"] = boost::any(*deprecated);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (direction) {
      res["direction"] = boost::any(*direction);
    }
    if (enableLog) {
      res["enableLog"] = boost::any(*enableLog);
    }
    if (executePriority) {
      res["executePriority"] = boost::any(*executePriority);
    }
    if (executeStage) {
      res["executeStage"] = boost::any(*executeStage);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("attachableResourceTypes") != m.end() && !m["attachableResourceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["attachableResourceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["attachableResourceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attachableResourceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("classId") != m.end() && !m["classId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["classId"]));
    }
    if (m.find("configExample") != m.end() && !m["configExample"].empty()) {
      configExample = make_shared<string>(boost::any_cast<string>(m["configExample"]));
    }
    if (m.find("deprecated") != m.end() && !m["deprecated"].empty()) {
      deprecated = make_shared<bool>(boost::any_cast<bool>(m["deprecated"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("direction") != m.end() && !m["direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["direction"]));
    }
    if (m.find("enableLog") != m.end() && !m["enableLog"].empty()) {
      enableLog = make_shared<bool>(boost::any_cast<bool>(m["enableLog"]));
    }
    if (m.find("executePriority") != m.end() && !m["executePriority"].empty()) {
      executePriority = make_shared<string>(boost::any_cast<string>(m["executePriority"]));
    }
    if (m.find("executeStage") != m.end() && !m["executeStage"].empty()) {
      executeStage = make_shared<string>(boost::any_cast<string>(m["executeStage"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~PolicyClassInfo() = default;
};
class PolicyDetailInfo : public Darabonba::Model {
public:
  shared_ptr<string> classId{};
  shared_ptr<string> className{};
  shared_ptr<string> config{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> policyId{};

  PolicyDetailInfo() {}

  explicit PolicyDetailInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classId) {
      res["classId"] = boost::any(*classId);
    }
    if (className) {
      res["className"] = boost::any(*className);
    }
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (policyId) {
      res["policyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("classId") != m.end() && !m["classId"].empty()) {
      classId = make_shared<string>(boost::any_cast<string>(m["classId"]));
    }
    if (m.find("className") != m.end() && !m["className"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["className"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("policyId") != m.end() && !m["policyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["policyId"]));
    }
  }


  virtual ~PolicyDetailInfo() = default;
};
class PolicyInfo : public Darabonba::Model {
public:
  shared_ptr<vector<Attachment>> attachments{};
  shared_ptr<string> classAlias{};
  shared_ptr<string> className{};
  shared_ptr<string> config{};
  shared_ptr<string> direction{};
  shared_ptr<string> executePriority{};
  shared_ptr<string> executeStage{};
  shared_ptr<string> name{};
  shared_ptr<string> policyId{};
  shared_ptr<string> type{};

  PolicyInfo() {}

  explicit PolicyInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachments) {
      vector<boost::any> temp1;
      for(auto item1:*attachments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["attachments"] = boost::any(temp1);
    }
    if (classAlias) {
      res["classAlias"] = boost::any(*classAlias);
    }
    if (className) {
      res["className"] = boost::any(*className);
    }
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (direction) {
      res["direction"] = boost::any(*direction);
    }
    if (executePriority) {
      res["executePriority"] = boost::any(*executePriority);
    }
    if (executeStage) {
      res["executeStage"] = boost::any(*executeStage);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (policyId) {
      res["policyId"] = boost::any(*policyId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attachments") != m.end() && !m["attachments"].empty()) {
      if (typeid(vector<boost::any>) == m["attachments"].type()) {
        vector<Attachment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["attachments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Attachment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attachments = make_shared<vector<Attachment>>(expect1);
      }
    }
    if (m.find("classAlias") != m.end() && !m["classAlias"].empty()) {
      classAlias = make_shared<string>(boost::any_cast<string>(m["classAlias"]));
    }
    if (m.find("className") != m.end() && !m["className"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["className"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
    if (m.find("direction") != m.end() && !m["direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["direction"]));
    }
    if (m.find("executePriority") != m.end() && !m["executePriority"].empty()) {
      executePriority = make_shared<string>(boost::any_cast<string>(m["executePriority"]));
    }
    if (m.find("executeStage") != m.end() && !m["executeStage"].empty()) {
      executeStage = make_shared<string>(boost::any_cast<string>(m["executeStage"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("policyId") != m.end() && !m["policyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["policyId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~PolicyInfo() = default;
};
class ResourceInfo : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceVersion{};

  ResourceInfo() {}

  explicit ResourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["resourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (resourceVersion) {
      res["resourceVersion"] = boost::any(*resourceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceName") != m.end() && !m["resourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["resourceName"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("resourceVersion") != m.end() && !m["resourceVersion"].empty()) {
      resourceVersion = make_shared<string>(boost::any_cast<string>(m["resourceVersion"]));
    }
  }


  virtual ~ResourceInfo() = default;
};
class ResourceStatistic : public Darabonba::Model {
public:
  shared_ptr<long> resourceCount{};
  shared_ptr<string> resourceType{};

  ResourceStatistic() {}

  explicit ResourceStatistic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceCount) {
      res["resourceCount"] = boost::any(*resourceCount);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceCount") != m.end() && !m["resourceCount"].empty()) {
      resourceCount = make_shared<long>(boost::any_cast<long>(m["resourceCount"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ResourceStatistic() = default;
};
class ServicePorts : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  ServicePorts() {}

  explicit ServicePorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
  }


  virtual ~ServicePorts() = default;
};
class ServiceHealthCheck : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> httpHost{};
  shared_ptr<string> httpPath{};
  shared_ptr<long> interval{};
  shared_ptr<string> protocol{};
  shared_ptr<long> timeout{};
  shared_ptr<long> unhealthyThreshold{};

  ServiceHealthCheck() {}

  explicit ServiceHealthCheck(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (healthyThreshold) {
      res["healthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (httpHost) {
      res["httpHost"] = boost::any(*httpHost);
    }
    if (httpPath) {
      res["httpPath"] = boost::any(*httpPath);
    }
    if (interval) {
      res["interval"] = boost::any(*interval);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (unhealthyThreshold) {
      res["unhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("healthyThreshold") != m.end() && !m["healthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["healthyThreshold"]));
    }
    if (m.find("httpHost") != m.end() && !m["httpHost"].empty()) {
      httpHost = make_shared<string>(boost::any_cast<string>(m["httpHost"]));
    }
    if (m.find("httpPath") != m.end() && !m["httpPath"].empty()) {
      httpPath = make_shared<string>(boost::any_cast<string>(m["httpPath"]));
    }
    if (m.find("interval") != m.end() && !m["interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["interval"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("unhealthyThreshold") != m.end() && !m["unhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["unhealthyThreshold"]));
    }
  }


  virtual ~ServiceHealthCheck() = default;
};
class Service : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addresses{};
  shared_ptr<AiServiceConfig> aiServiceConfig{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> groupName{};
  shared_ptr<ServiceHealthCheck> healthCheck{};
  shared_ptr<string> healthStatus{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<vector<ServicePorts>> ports{};
  shared_ptr<string> protocol{};
  shared_ptr<string> qualifier{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<string>> unhealthyEndpoints{};
  shared_ptr<long> updateTimestamp{};

  Service() {}

  explicit Service(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      res["addresses"] = boost::any(*addresses);
    }
    if (aiServiceConfig) {
      res["aiServiceConfig"] = aiServiceConfig ? boost::any(aiServiceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (healthCheck) {
      res["healthCheck"] = healthCheck ? boost::any(healthCheck->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (healthStatus) {
      res["healthStatus"] = boost::any(*healthStatus);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (ports) {
      vector<boost::any> temp1;
      for(auto item1:*ports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ports"] = boost::any(temp1);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    if (unhealthyEndpoints) {
      res["unhealthyEndpoints"] = boost::any(*unhealthyEndpoints);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("addresses") != m.end() && !m["addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("aiServiceConfig") != m.end() && !m["aiServiceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["aiServiceConfig"].type()) {
        AiServiceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["aiServiceConfig"]));
        aiServiceConfig = make_shared<AiServiceConfig>(model1);
      }
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("healthCheck") != m.end() && !m["healthCheck"].empty()) {
      if (typeid(map<string, boost::any>) == m["healthCheck"].type()) {
        ServiceHealthCheck model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["healthCheck"]));
        healthCheck = make_shared<ServiceHealthCheck>(model1);
      }
    }
    if (m.find("healthStatus") != m.end() && !m["healthStatus"].empty()) {
      healthStatus = make_shared<string>(boost::any_cast<string>(m["healthStatus"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("ports") != m.end() && !m["ports"].empty()) {
      if (typeid(vector<boost::any>) == m["ports"].type()) {
        vector<ServicePorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ServicePorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ports = make_shared<vector<ServicePorts>>(expect1);
      }
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
    if (m.find("unhealthyEndpoints") != m.end() && !m["unhealthyEndpoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["unhealthyEndpoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["unhealthyEndpoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unhealthyEndpoints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
  }


  virtual ~Service() = default;
};
class ServiceLinkedRole : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<bool> isServiceLinkedRole{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> rolePrincipalName{};

  ServiceLinkedRole() {}

  explicit ServiceLinkedRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["arn"] = boost::any(*arn);
    }
    if (assumeRolePolicyDocument) {
      res["assumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (createDate) {
      res["createDate"] = boost::any(*createDate);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (isServiceLinkedRole) {
      res["isServiceLinkedRole"] = boost::any(*isServiceLinkedRole);
    }
    if (roleId) {
      res["roleId"] = boost::any(*roleId);
    }
    if (roleName) {
      res["roleName"] = boost::any(*roleName);
    }
    if (rolePrincipalName) {
      res["rolePrincipalName"] = boost::any(*rolePrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arn") != m.end() && !m["arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["arn"]));
    }
    if (m.find("assumeRolePolicyDocument") != m.end() && !m["assumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["assumeRolePolicyDocument"]));
    }
    if (m.find("createDate") != m.end() && !m["createDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["createDate"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("isServiceLinkedRole") != m.end() && !m["isServiceLinkedRole"].empty()) {
      isServiceLinkedRole = make_shared<bool>(boost::any_cast<bool>(m["isServiceLinkedRole"]));
    }
    if (m.find("roleId") != m.end() && !m["roleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["roleId"]));
    }
    if (m.find("roleName") != m.end() && !m["roleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["roleName"]));
    }
    if (m.find("rolePrincipalName") != m.end() && !m["rolePrincipalName"].empty()) {
      rolePrincipalName = make_shared<string>(boost::any_cast<string>(m["rolePrincipalName"]));
    }
  }


  virtual ~ServiceLinkedRole() = default;
};
class SslCertMetaInfo : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<long> certId{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> certName{};
  shared_ptr<string> commonName{};
  shared_ptr<string> domain{};
  shared_ptr<bool> domainMatchCert{};
  shared_ptr<string> fingerprint{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isChainCompleted{};
  shared_ptr<string> issuer{};
  shared_ptr<string> keySize{};
  shared_ptr<string> md5{};
  shared_ptr<long> notAfterTimestamp{};
  shared_ptr<long> notBeforeTimestamp{};
  shared_ptr<string> sans{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> sha2{};
  shared_ptr<string> signAlgorithm{};

  SslCertMetaInfo() {}

  explicit SslCertMetaInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["algorithm"] = boost::any(*algorithm);
    }
    if (certId) {
      res["certId"] = boost::any(*certId);
    }
    if (certIdentifier) {
      res["certIdentifier"] = boost::any(*certIdentifier);
    }
    if (certName) {
      res["certName"] = boost::any(*certName);
    }
    if (commonName) {
      res["commonName"] = boost::any(*commonName);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (domainMatchCert) {
      res["domainMatchCert"] = boost::any(*domainMatchCert);
    }
    if (fingerprint) {
      res["fingerprint"] = boost::any(*fingerprint);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (isChainCompleted) {
      res["isChainCompleted"] = boost::any(*isChainCompleted);
    }
    if (issuer) {
      res["issuer"] = boost::any(*issuer);
    }
    if (keySize) {
      res["keySize"] = boost::any(*keySize);
    }
    if (md5) {
      res["md5"] = boost::any(*md5);
    }
    if (notAfterTimestamp) {
      res["notAfterTimestamp"] = boost::any(*notAfterTimestamp);
    }
    if (notBeforeTimestamp) {
      res["notBeforeTimestamp"] = boost::any(*notBeforeTimestamp);
    }
    if (sans) {
      res["sans"] = boost::any(*sans);
    }
    if (serialNo) {
      res["serialNo"] = boost::any(*serialNo);
    }
    if (sha2) {
      res["sha2"] = boost::any(*sha2);
    }
    if (signAlgorithm) {
      res["signAlgorithm"] = boost::any(*signAlgorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithm") != m.end() && !m["algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["algorithm"]));
    }
    if (m.find("certId") != m.end() && !m["certId"].empty()) {
      certId = make_shared<long>(boost::any_cast<long>(m["certId"]));
    }
    if (m.find("certIdentifier") != m.end() && !m["certIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["certIdentifier"]));
    }
    if (m.find("certName") != m.end() && !m["certName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["certName"]));
    }
    if (m.find("commonName") != m.end() && !m["commonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["commonName"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("domainMatchCert") != m.end() && !m["domainMatchCert"].empty()) {
      domainMatchCert = make_shared<bool>(boost::any_cast<bool>(m["domainMatchCert"]));
    }
    if (m.find("fingerprint") != m.end() && !m["fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["fingerprint"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("isChainCompleted") != m.end() && !m["isChainCompleted"].empty()) {
      isChainCompleted = make_shared<bool>(boost::any_cast<bool>(m["isChainCompleted"]));
    }
    if (m.find("issuer") != m.end() && !m["issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["issuer"]));
    }
    if (m.find("keySize") != m.end() && !m["keySize"].empty()) {
      keySize = make_shared<string>(boost::any_cast<string>(m["keySize"]));
    }
    if (m.find("md5") != m.end() && !m["md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["md5"]));
    }
    if (m.find("notAfterTimestamp") != m.end() && !m["notAfterTimestamp"].empty()) {
      notAfterTimestamp = make_shared<long>(boost::any_cast<long>(m["notAfterTimestamp"]));
    }
    if (m.find("notBeforeTimestamp") != m.end() && !m["notBeforeTimestamp"].empty()) {
      notBeforeTimestamp = make_shared<long>(boost::any_cast<long>(m["notBeforeTimestamp"]));
    }
    if (m.find("sans") != m.end() && !m["sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["sans"]));
    }
    if (m.find("serialNo") != m.end() && !m["serialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["serialNo"]));
    }
    if (m.find("sha2") != m.end() && !m["sha2"].empty()) {
      sha2 = make_shared<string>(boost::any_cast<string>(m["sha2"]));
    }
    if (m.find("signAlgorithm") != m.end() && !m["signAlgorithm"].empty()) {
      signAlgorithm = make_shared<string>(boost::any_cast<string>(m["signAlgorithm"]));
    }
  }


  virtual ~SslCertMetaInfo() = default;
};
class TlsCipherSuitesConfigTlsCipherSuite : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> supportVersions{};

  TlsCipherSuitesConfigTlsCipherSuite() {}

  explicit TlsCipherSuitesConfigTlsCipherSuite(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (supportVersions) {
      res["supportVersions"] = boost::any(*supportVersions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("supportVersions") != m.end() && !m["supportVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["supportVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["supportVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportVersions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~TlsCipherSuitesConfigTlsCipherSuite() = default;
};
class TlsCipherSuitesConfig : public Darabonba::Model {
public:
  shared_ptr<string> configType{};
  shared_ptr<vector<TlsCipherSuitesConfigTlsCipherSuite>> tlsCipherSuite{};

  TlsCipherSuitesConfig() {}

  explicit TlsCipherSuitesConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configType) {
      res["configType"] = boost::any(*configType);
    }
    if (tlsCipherSuite) {
      vector<boost::any> temp1;
      for(auto item1:*tlsCipherSuite){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tlsCipherSuite"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configType") != m.end() && !m["configType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["configType"]));
    }
    if (m.find("tlsCipherSuite") != m.end() && !m["tlsCipherSuite"].empty()) {
      if (typeid(vector<boost::any>) == m["tlsCipherSuite"].type()) {
        vector<TlsCipherSuitesConfigTlsCipherSuite> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tlsCipherSuite"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TlsCipherSuitesConfigTlsCipherSuite model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tlsCipherSuite = make_shared<vector<TlsCipherSuitesConfigTlsCipherSuite>>(expect1);
      }
    }
  }


  virtual ~TlsCipherSuitesConfig() = default;
};
class AddGatewaySecurityGroupRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<string>> portRanges{};
  shared_ptr<string> securityGroupId{};

  AddGatewaySecurityGroupRuleRequest() {}

  explicit AddGatewaySecurityGroupRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (portRanges) {
      res["portRanges"] = boost::any(*portRanges);
    }
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("portRanges") != m.end() && !m["portRanges"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["portRanges"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["portRanges"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      portRanges = make_shared<vector<string>>(toVec1);
    }
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
  }


  virtual ~AddGatewaySecurityGroupRuleRequest() = default;
};
class AddGatewaySecurityGroupRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddGatewaySecurityGroupRuleResponseBody() {}

  explicit AddGatewaySecurityGroupRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~AddGatewaySecurityGroupRuleResponseBody() = default;
};
class AddGatewaySecurityGroupRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddGatewaySecurityGroupRuleResponseBody> body{};

  AddGatewaySecurityGroupRuleResponse() {}

  explicit AddGatewaySecurityGroupRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddGatewaySecurityGroupRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddGatewaySecurityGroupRuleResponseBody>(model1);
      }
    }
  }


  virtual ~AddGatewaySecurityGroupRuleResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> service{};

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
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (service) {
      res["Service"] = boost::any(*service);
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
  }


  virtual ~ChangeResourceGroupRequest() = default;
};
class ChangeResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ChangeResourceGroupResponseBody() {}

  explicit ChangeResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class CreateDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> caCertIdentifier{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> clientCACert{};
  shared_ptr<bool> forceHttps{};
  shared_ptr<string> http2Option{};
  shared_ptr<bool> mTLSEnabled{};
  shared_ptr<string> name{};
  shared_ptr<string> protocol{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<TlsCipherSuitesConfig> tlsCipherSuitesConfig{};
  shared_ptr<string> tlsMax{};
  shared_ptr<string> tlsMin{};

  CreateDomainRequest() {}

  explicit CreateDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caCertIdentifier) {
      res["caCertIdentifier"] = boost::any(*caCertIdentifier);
    }
    if (certIdentifier) {
      res["certIdentifier"] = boost::any(*certIdentifier);
    }
    if (clientCACert) {
      res["clientCACert"] = boost::any(*clientCACert);
    }
    if (forceHttps) {
      res["forceHttps"] = boost::any(*forceHttps);
    }
    if (http2Option) {
      res["http2Option"] = boost::any(*http2Option);
    }
    if (mTLSEnabled) {
      res["mTLSEnabled"] = boost::any(*mTLSEnabled);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tlsCipherSuitesConfig) {
      res["tlsCipherSuitesConfig"] = tlsCipherSuitesConfig ? boost::any(tlsCipherSuitesConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tlsMax) {
      res["tlsMax"] = boost::any(*tlsMax);
    }
    if (tlsMin) {
      res["tlsMin"] = boost::any(*tlsMin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caCertIdentifier") != m.end() && !m["caCertIdentifier"].empty()) {
      caCertIdentifier = make_shared<string>(boost::any_cast<string>(m["caCertIdentifier"]));
    }
    if (m.find("certIdentifier") != m.end() && !m["certIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["certIdentifier"]));
    }
    if (m.find("clientCACert") != m.end() && !m["clientCACert"].empty()) {
      clientCACert = make_shared<string>(boost::any_cast<string>(m["clientCACert"]));
    }
    if (m.find("forceHttps") != m.end() && !m["forceHttps"].empty()) {
      forceHttps = make_shared<bool>(boost::any_cast<bool>(m["forceHttps"]));
    }
    if (m.find("http2Option") != m.end() && !m["http2Option"].empty()) {
      http2Option = make_shared<string>(boost::any_cast<string>(m["http2Option"]));
    }
    if (m.find("mTLSEnabled") != m.end() && !m["mTLSEnabled"].empty()) {
      mTLSEnabled = make_shared<bool>(boost::any_cast<bool>(m["mTLSEnabled"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("tlsCipherSuitesConfig") != m.end() && !m["tlsCipherSuitesConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tlsCipherSuitesConfig"].type()) {
        TlsCipherSuitesConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tlsCipherSuitesConfig"]));
        tlsCipherSuitesConfig = make_shared<TlsCipherSuitesConfig>(model1);
      }
    }
    if (m.find("tlsMax") != m.end() && !m["tlsMax"].empty()) {
      tlsMax = make_shared<string>(boost::any_cast<string>(m["tlsMax"]));
    }
    if (m.find("tlsMin") != m.end() && !m["tlsMin"].empty()) {
      tlsMin = make_shared<string>(boost::any_cast<string>(m["tlsMin"]));
    }
  }


  virtual ~CreateDomainRequest() = default;
};
class CreateDomainResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};

  CreateDomainResponseBodyData() {}

  explicit CreateDomainResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
  }


  virtual ~CreateDomainResponseBodyData() = default;
};
class CreateDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateDomainResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateDomainResponseBody() {}

  explicit CreateDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateDomainResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateDomainResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
class CreateEnvironmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> description{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};

  CreateEnvironmentRequest() {}

  explicit CreateEnvironmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
  }


  virtual ~CreateEnvironmentRequest() = default;
};
class CreateEnvironmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> environmentId{};

  CreateEnvironmentResponseBodyData() {}

  explicit CreateEnvironmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
  }


  virtual ~CreateEnvironmentResponseBodyData() = default;
};
class CreateEnvironmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateEnvironmentResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateEnvironmentResponseBody() {}

  explicit CreateEnvironmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateEnvironmentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateEnvironmentResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateEnvironmentResponseBody() = default;
};
class CreateEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEnvironmentResponseBody> body{};

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
        CreateEnvironmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEnvironmentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEnvironmentResponse() = default;
};
class CreateHttpApiRequestIngressConfig : public Darabonba::Model {
public:
  shared_ptr<string> environmentId{};
  shared_ptr<string> ingressClass{};
  shared_ptr<bool> overrideIngressIp{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> watchNamespace{};

  CreateHttpApiRequestIngressConfig() {}

  explicit CreateHttpApiRequestIngressConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (ingressClass) {
      res["ingressClass"] = boost::any(*ingressClass);
    }
    if (overrideIngressIp) {
      res["overrideIngressIp"] = boost::any(*overrideIngressIp);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (watchNamespace) {
      res["watchNamespace"] = boost::any(*watchNamespace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("ingressClass") != m.end() && !m["ingressClass"].empty()) {
      ingressClass = make_shared<string>(boost::any_cast<string>(m["ingressClass"]));
    }
    if (m.find("overrideIngressIp") != m.end() && !m["overrideIngressIp"].empty()) {
      overrideIngressIp = make_shared<bool>(boost::any_cast<bool>(m["overrideIngressIp"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["sourceId"]));
    }
    if (m.find("watchNamespace") != m.end() && !m["watchNamespace"].empty()) {
      watchNamespace = make_shared<string>(boost::any_cast<string>(m["watchNamespace"]));
    }
  }


  virtual ~CreateHttpApiRequestIngressConfig() = default;
};
class CreateHttpApiRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> aiProtocols{};
  shared_ptr<AuthConfig> authConfig{};
  shared_ptr<string> basePath{};
  shared_ptr<vector<HttpApiDeployConfig>> deployConfigs{};
  shared_ptr<string> description{};
  shared_ptr<bool> enableAuth{};
  shared_ptr<CreateHttpApiRequestIngressConfig> ingressConfig{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> protocols{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> type{};
  shared_ptr<HttpApiVersionConfig> versionConfig{};

  CreateHttpApiRequest() {}

  explicit CreateHttpApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aiProtocols) {
      res["aiProtocols"] = boost::any(*aiProtocols);
    }
    if (authConfig) {
      res["authConfig"] = authConfig ? boost::any(authConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (basePath) {
      res["basePath"] = boost::any(*basePath);
    }
    if (deployConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*deployConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["deployConfigs"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enableAuth) {
      res["enableAuth"] = boost::any(*enableAuth);
    }
    if (ingressConfig) {
      res["ingressConfig"] = ingressConfig ? boost::any(ingressConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (protocols) {
      res["protocols"] = boost::any(*protocols);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (versionConfig) {
      res["versionConfig"] = versionConfig ? boost::any(versionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aiProtocols") != m.end() && !m["aiProtocols"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["aiProtocols"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["aiProtocols"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aiProtocols = make_shared<vector<string>>(toVec1);
    }
    if (m.find("authConfig") != m.end() && !m["authConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["authConfig"].type()) {
        AuthConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authConfig"]));
        authConfig = make_shared<AuthConfig>(model1);
      }
    }
    if (m.find("basePath") != m.end() && !m["basePath"].empty()) {
      basePath = make_shared<string>(boost::any_cast<string>(m["basePath"]));
    }
    if (m.find("deployConfigs") != m.end() && !m["deployConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["deployConfigs"].type()) {
        vector<HttpApiDeployConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["deployConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiDeployConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deployConfigs = make_shared<vector<HttpApiDeployConfig>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enableAuth") != m.end() && !m["enableAuth"].empty()) {
      enableAuth = make_shared<bool>(boost::any_cast<bool>(m["enableAuth"]));
    }
    if (m.find("ingressConfig") != m.end() && !m["ingressConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ingressConfig"].type()) {
        CreateHttpApiRequestIngressConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ingressConfig"]));
        ingressConfig = make_shared<CreateHttpApiRequestIngressConfig>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("protocols") != m.end() && !m["protocols"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["protocols"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["protocols"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      protocols = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("versionConfig") != m.end() && !m["versionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["versionConfig"].type()) {
        HttpApiVersionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["versionConfig"]));
        versionConfig = make_shared<HttpApiVersionConfig>(model1);
      }
    }
  }


  virtual ~CreateHttpApiRequest() = default;
};
class CreateHttpApiResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> httpApiId{};
  shared_ptr<string> name{};

  CreateHttpApiResponseBodyData() {}

  explicit CreateHttpApiResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpApiId) {
      res["httpApiId"] = boost::any(*httpApiId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("httpApiId") != m.end() && !m["httpApiId"].empty()) {
      httpApiId = make_shared<string>(boost::any_cast<string>(m["httpApiId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateHttpApiResponseBodyData() = default;
};
class CreateHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateHttpApiResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateHttpApiResponseBody() {}

  explicit CreateHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateHttpApiResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateHttpApiResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateHttpApiResponseBody() = default;
};
class CreateHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateHttpApiResponseBody> body{};

  CreateHttpApiResponse() {}

  explicit CreateHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHttpApiResponse() = default;
};
class CreateHttpApiOperationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<HttpApiOperation>> operations{};

  CreateHttpApiOperationRequest() {}

  explicit CreateHttpApiOperationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operations) {
      vector<boost::any> temp1;
      for(auto item1:*operations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["operations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operations") != m.end() && !m["operations"].empty()) {
      if (typeid(vector<boost::any>) == m["operations"].type()) {
        vector<HttpApiOperation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["operations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiOperation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operations = make_shared<vector<HttpApiOperation>>(expect1);
      }
    }
  }


  virtual ~CreateHttpApiOperationRequest() = default;
};
class CreateHttpApiOperationResponseBodyDataOperations : public Darabonba::Model {
public:
  shared_ptr<string> operationId{};

  CreateHttpApiOperationResponseBodyDataOperations() {}

  explicit CreateHttpApiOperationResponseBodyDataOperations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationId) {
      res["operationId"] = boost::any(*operationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operationId") != m.end() && !m["operationId"].empty()) {
      operationId = make_shared<string>(boost::any_cast<string>(m["operationId"]));
    }
  }


  virtual ~CreateHttpApiOperationResponseBodyDataOperations() = default;
};
class CreateHttpApiOperationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<CreateHttpApiOperationResponseBodyDataOperations>> operations{};

  CreateHttpApiOperationResponseBodyData() {}

  explicit CreateHttpApiOperationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operations) {
      vector<boost::any> temp1;
      for(auto item1:*operations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["operations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operations") != m.end() && !m["operations"].empty()) {
      if (typeid(vector<boost::any>) == m["operations"].type()) {
        vector<CreateHttpApiOperationResponseBodyDataOperations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["operations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateHttpApiOperationResponseBodyDataOperations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operations = make_shared<vector<CreateHttpApiOperationResponseBodyDataOperations>>(expect1);
      }
    }
  }


  virtual ~CreateHttpApiOperationResponseBodyData() = default;
};
class CreateHttpApiOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateHttpApiOperationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateHttpApiOperationResponseBody() {}

  explicit CreateHttpApiOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateHttpApiOperationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateHttpApiOperationResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateHttpApiOperationResponseBody() = default;
};
class CreateHttpApiOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateHttpApiOperationResponseBody> body{};

  CreateHttpApiOperationResponse() {}

  explicit CreateHttpApiOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateHttpApiOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHttpApiOperationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHttpApiOperationResponse() = default;
};
class CreateHttpApiRouteRequestBackendConfigServices : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> version{};
  shared_ptr<long> weight{};

  CreateHttpApiRouteRequestBackendConfigServices() {}

  explicit CreateHttpApiRouteRequestBackendConfigServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
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
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~CreateHttpApiRouteRequestBackendConfigServices() = default;
};
class CreateHttpApiRouteRequestBackendConfig : public Darabonba::Model {
public:
  shared_ptr<string> scene{};
  shared_ptr<vector<CreateHttpApiRouteRequestBackendConfigServices>> services{};

  CreateHttpApiRouteRequestBackendConfig() {}

  explicit CreateHttpApiRouteRequestBackendConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
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
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
    if (m.find("services") != m.end() && !m["services"].empty()) {
      if (typeid(vector<boost::any>) == m["services"].type()) {
        vector<CreateHttpApiRouteRequestBackendConfigServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateHttpApiRouteRequestBackendConfigServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<CreateHttpApiRouteRequestBackendConfigServices>>(expect1);
      }
    }
  }


  virtual ~CreateHttpApiRouteRequestBackendConfig() = default;
};
class CreateHttpApiRouteRequest : public Darabonba::Model {
public:
  shared_ptr<CreateHttpApiRouteRequestBackendConfig> backendConfig{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> domainIds{};
  shared_ptr<string> environmentId{};
  shared_ptr<HttpRouteMatch> match{};
  shared_ptr<string> name{};

  CreateHttpApiRouteRequest() {}

  explicit CreateHttpApiRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendConfig) {
      res["backendConfig"] = backendConfig ? boost::any(backendConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domainIds) {
      res["domainIds"] = boost::any(*domainIds);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backendConfig") != m.end() && !m["backendConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["backendConfig"].type()) {
        CreateHttpApiRouteRequestBackendConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["backendConfig"]));
        backendConfig = make_shared<CreateHttpApiRouteRequestBackendConfig>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domainIds") != m.end() && !m["domainIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["domainIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["domainIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpRouteMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpRouteMatch>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateHttpApiRouteRequest() = default;
};
class CreateHttpApiRouteResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> routeId{};

  CreateHttpApiRouteResponseBodyData() {}

  explicit CreateHttpApiRouteResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeId) {
      res["routeId"] = boost::any(*routeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("routeId") != m.end() && !m["routeId"].empty()) {
      routeId = make_shared<string>(boost::any_cast<string>(m["routeId"]));
    }
  }


  virtual ~CreateHttpApiRouteResponseBodyData() = default;
};
class CreateHttpApiRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateHttpApiRouteResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateHttpApiRouteResponseBody() {}

  explicit CreateHttpApiRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateHttpApiRouteResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateHttpApiRouteResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateHttpApiRouteResponseBody() = default;
};
class CreateHttpApiRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateHttpApiRouteResponseBody> body{};

  CreateHttpApiRouteResponse() {}

  explicit CreateHttpApiRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateHttpApiRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHttpApiRouteResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHttpApiRouteResponse() = default;
};
class CreatePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> className{};
  shared_ptr<string> config{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  CreatePolicyRequest() {}

  explicit CreatePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (className) {
      res["className"] = boost::any(*className);
    }
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("className") != m.end() && !m["className"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["className"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreatePolicyRequest() = default;
};
class CreatePolicyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};

  CreatePolicyResponseBodyData() {}

  explicit CreatePolicyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["policyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("policyId") != m.end() && !m["policyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["policyId"]));
    }
  }


  virtual ~CreatePolicyResponseBodyData() = default;
};
class CreatePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreatePolicyResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreatePolicyResponseBody() {}

  explicit CreatePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreatePolicyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreatePolicyResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreatePolicyResponseBody() = default;
};
class CreatePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePolicyResponseBody> body{};

  CreatePolicyResponse() {}

  explicit CreatePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreatePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyResponse() = default;
};
class CreatePolicyAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> attachResourceId{};
  shared_ptr<string> attachResourceType{};
  shared_ptr<string> environmentId{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> policyId{};

  CreatePolicyAttachmentRequest() {}

  explicit CreatePolicyAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachResourceId) {
      res["attachResourceId"] = boost::any(*attachResourceId);
    }
    if (attachResourceType) {
      res["attachResourceType"] = boost::any(*attachResourceType);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (policyId) {
      res["policyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attachResourceId") != m.end() && !m["attachResourceId"].empty()) {
      attachResourceId = make_shared<string>(boost::any_cast<string>(m["attachResourceId"]));
    }
    if (m.find("attachResourceType") != m.end() && !m["attachResourceType"].empty()) {
      attachResourceType = make_shared<string>(boost::any_cast<string>(m["attachResourceType"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("policyId") != m.end() && !m["policyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["policyId"]));
    }
  }


  virtual ~CreatePolicyAttachmentRequest() = default;
};
class CreatePolicyAttachmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> policyAttachmentId{};

  CreatePolicyAttachmentResponseBodyData() {}

  explicit CreatePolicyAttachmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyAttachmentId) {
      res["policyAttachmentId"] = boost::any(*policyAttachmentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("policyAttachmentId") != m.end() && !m["policyAttachmentId"].empty()) {
      policyAttachmentId = make_shared<string>(boost::any_cast<string>(m["policyAttachmentId"]));
    }
  }


  virtual ~CreatePolicyAttachmentResponseBodyData() = default;
};
class CreatePolicyAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreatePolicyAttachmentResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreatePolicyAttachmentResponseBody() {}

  explicit CreatePolicyAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreatePolicyAttachmentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreatePolicyAttachmentResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreatePolicyAttachmentResponseBody() = default;
};
class CreatePolicyAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePolicyAttachmentResponseBody> body{};

  CreatePolicyAttachmentResponse() {}

  explicit CreatePolicyAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreatePolicyAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyAttachmentResponse() = default;
};
class CreateServiceRequestServiceConfigs : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addresses{};
  shared_ptr<AiServiceConfig> aiServiceConfig{};
  shared_ptr<vector<string>> dnsServers{};
  shared_ptr<string> groupName{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> qualifier{};

  CreateServiceRequestServiceConfigs() {}

  explicit CreateServiceRequestServiceConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      res["addresses"] = boost::any(*addresses);
    }
    if (aiServiceConfig) {
      res["aiServiceConfig"] = aiServiceConfig ? boost::any(aiServiceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dnsServers) {
      res["dnsServers"] = boost::any(*dnsServers);
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (qualifier) {
      res["qualifier"] = boost::any(*qualifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("addresses") != m.end() && !m["addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("aiServiceConfig") != m.end() && !m["aiServiceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["aiServiceConfig"].type()) {
        AiServiceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["aiServiceConfig"]));
        aiServiceConfig = make_shared<AiServiceConfig>(model1);
      }
    }
    if (m.find("dnsServers") != m.end() && !m["dnsServers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dnsServers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dnsServers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dnsServers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("qualifier") != m.end() && !m["qualifier"].empty()) {
      qualifier = make_shared<string>(boost::any_cast<string>(m["qualifier"]));
    }
  }


  virtual ~CreateServiceRequestServiceConfigs() = default;
};
class CreateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<CreateServiceRequestServiceConfigs>> serviceConfigs{};
  shared_ptr<string> sourceType{};

  CreateServiceRequest() {}

  explicit CreateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*serviceConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceConfigs"] = boost::any(temp1);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("serviceConfigs") != m.end() && !m["serviceConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceConfigs"].type()) {
        vector<CreateServiceRequestServiceConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceRequestServiceConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceConfigs = make_shared<vector<CreateServiceRequestServiceConfigs>>(expect1);
      }
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
  }


  virtual ~CreateServiceRequest() = default;
};
class CreateServiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> serviceIds{};

  CreateServiceResponseBodyData() {}

  explicit CreateServiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceIds) {
      res["serviceIds"] = boost::any(*serviceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("serviceIds") != m.end() && !m["serviceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["serviceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["serviceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateServiceResponseBodyData() = default;
};
class CreateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateServiceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateServiceResponseBody() {}

  explicit CreateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateServiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateServiceResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
class DeleteDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteDomainResponseBody() {}

  explicit DeleteDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class DeleteEnvironmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteEnvironmentResponseBody() {}

  explicit DeleteEnvironmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeleteEnvironmentResponseBody() = default;
};
class DeleteEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEnvironmentResponseBody> body{};

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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEnvironmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEnvironmentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEnvironmentResponse() = default;
};
class DeleteGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteGatewayResponseBody() {}

  explicit DeleteGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeleteGatewayResponseBody() = default;
};
class DeleteGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewayResponseBody> body{};

  DeleteGatewayResponse() {}

  explicit DeleteGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayResponse() = default;
};
class DeleteGatewaySecurityGroupRuleRequest : public Darabonba::Model {
public:
  shared_ptr<bool> cascadingDelete{};

  DeleteGatewaySecurityGroupRuleRequest() {}

  explicit DeleteGatewaySecurityGroupRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cascadingDelete) {
      res["cascadingDelete"] = boost::any(*cascadingDelete);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cascadingDelete") != m.end() && !m["cascadingDelete"].empty()) {
      cascadingDelete = make_shared<bool>(boost::any_cast<bool>(m["cascadingDelete"]));
    }
  }


  virtual ~DeleteGatewaySecurityGroupRuleRequest() = default;
};
class DeleteGatewaySecurityGroupRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteGatewaySecurityGroupRuleResponseBody() {}

  explicit DeleteGatewaySecurityGroupRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeleteGatewaySecurityGroupRuleResponseBody() = default;
};
class DeleteGatewaySecurityGroupRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewaySecurityGroupRuleResponseBody> body{};

  DeleteGatewaySecurityGroupRuleResponse() {}

  explicit DeleteGatewaySecurityGroupRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGatewaySecurityGroupRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewaySecurityGroupRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewaySecurityGroupRuleResponse() = default;
};
class DeleteHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteHttpApiResponseBody() {}

  explicit DeleteHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeleteHttpApiResponseBody() = default;
};
class DeleteHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteHttpApiResponseBody> body{};

  DeleteHttpApiResponse() {}

  explicit DeleteHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHttpApiResponse() = default;
};
class DeleteHttpApiOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteHttpApiOperationResponseBody() {}

  explicit DeleteHttpApiOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeleteHttpApiOperationResponseBody() = default;
};
class DeleteHttpApiOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteHttpApiOperationResponseBody> body{};

  DeleteHttpApiOperationResponse() {}

  explicit DeleteHttpApiOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteHttpApiOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHttpApiOperationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHttpApiOperationResponse() = default;
};
class DeleteHttpApiRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteHttpApiRouteResponseBody() {}

  explicit DeleteHttpApiRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeleteHttpApiRouteResponseBody() = default;
};
class DeleteHttpApiRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteHttpApiRouteResponseBody> body{};

  DeleteHttpApiRouteResponse() {}

  explicit DeleteHttpApiRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteHttpApiRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHttpApiRouteResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHttpApiRouteResponse() = default;
};
class DeletePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeletePolicyResponseBody() {}

  explicit DeletePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeletePolicyResponseBody() = default;
};
class DeletePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePolicyResponseBody> body{};

  DeletePolicyResponse() {}

  explicit DeletePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeletePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyResponse() = default;
};
class DeletePolicyAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeletePolicyAttachmentResponseBody() {}

  explicit DeletePolicyAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeletePolicyAttachmentResponseBody() = default;
};
class DeletePolicyAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePolicyAttachmentResponseBody> body{};

  DeletePolicyAttachmentResponse() {}

  explicit DeletePolicyAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeletePolicyAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyAttachmentResponse() = default;
};
class DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs : public Darabonba::Model {
public:
  shared_ptr<HttpApiBackendMatchConditions> match{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> version{};
  shared_ptr<long> weight{};

  DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs() {}

  explicit DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
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
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpApiBackendMatchConditions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpApiBackendMatchConditions>(model1);
      }
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs() = default;
};
class DeployHttpApiRequestRestApiConfigEnvironment : public Darabonba::Model {
public:
  shared_ptr<string> backendScene{};
  shared_ptr<vector<string>> customDomainIds{};
  shared_ptr<string> environmentId{};
  shared_ptr<vector<DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs>> serviceConfigs{};

  DeployHttpApiRequestRestApiConfigEnvironment() {}

  explicit DeployHttpApiRequestRestApiConfigEnvironment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendScene) {
      res["backendScene"] = boost::any(*backendScene);
    }
    if (customDomainIds) {
      res["customDomainIds"] = boost::any(*customDomainIds);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (serviceConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*serviceConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backendScene") != m.end() && !m["backendScene"].empty()) {
      backendScene = make_shared<string>(boost::any_cast<string>(m["backendScene"]));
    }
    if (m.find("customDomainIds") != m.end() && !m["customDomainIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["customDomainIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["customDomainIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customDomainIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("serviceConfigs") != m.end() && !m["serviceConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceConfigs"].type()) {
        vector<DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceConfigs = make_shared<vector<DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs>>(expect1);
      }
    }
  }


  virtual ~DeployHttpApiRequestRestApiConfigEnvironment() = default;
};
class DeployHttpApiRequestRestApiConfig : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<DeployHttpApiRequestRestApiConfigEnvironment> environment{};
  shared_ptr<string> revisionId{};

  DeployHttpApiRequestRestApiConfig() {}

  explicit DeployHttpApiRequestRestApiConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (environment) {
      res["environment"] = environment ? boost::any(environment->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (revisionId) {
      res["revisionId"] = boost::any(*revisionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("environment") != m.end() && !m["environment"].empty()) {
      if (typeid(map<string, boost::any>) == m["environment"].type()) {
        DeployHttpApiRequestRestApiConfigEnvironment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["environment"]));
        environment = make_shared<DeployHttpApiRequestRestApiConfigEnvironment>(model1);
      }
    }
    if (m.find("revisionId") != m.end() && !m["revisionId"].empty()) {
      revisionId = make_shared<string>(boost::any_cast<string>(m["revisionId"]));
    }
  }


  virtual ~DeployHttpApiRequestRestApiConfig() = default;
};
class DeployHttpApiRequest : public Darabonba::Model {
public:
  shared_ptr<DeployHttpApiRequestRestApiConfig> restApiConfig{};
  shared_ptr<string> routeId{};

  DeployHttpApiRequest() {}

  explicit DeployHttpApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (restApiConfig) {
      res["restApiConfig"] = restApiConfig ? boost::any(restApiConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (routeId) {
      res["routeId"] = boost::any(*routeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("restApiConfig") != m.end() && !m["restApiConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["restApiConfig"].type()) {
        DeployHttpApiRequestRestApiConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["restApiConfig"]));
        restApiConfig = make_shared<DeployHttpApiRequestRestApiConfig>(model1);
      }
    }
    if (m.find("routeId") != m.end() && !m["routeId"].empty()) {
      routeId = make_shared<string>(boost::any_cast<string>(m["routeId"]));
    }
  }


  virtual ~DeployHttpApiRequest() = default;
};
class DeployHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeployHttpApiResponseBody() {}

  explicit DeployHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeployHttpApiResponseBody() = default;
};
class DeployHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployHttpApiResponseBody> body{};

  DeployHttpApiResponse() {}

  explicit DeployHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeployHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~DeployHttpApiResponse() = default;
};
class ExportHttpApiResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> specContentBase64{};

  ExportHttpApiResponseBodyData() {}

  explicit ExportHttpApiResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specContentBase64) {
      res["specContentBase64"] = boost::any(*specContentBase64);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("specContentBase64") != m.end() && !m["specContentBase64"].empty()) {
      specContentBase64 = make_shared<string>(boost::any_cast<string>(m["specContentBase64"]));
    }
  }


  virtual ~ExportHttpApiResponseBodyData() = default;
};
class ExportHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ExportHttpApiResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ExportHttpApiResponseBody() {}

  explicit ExportHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ExportHttpApiResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExportHttpApiResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ExportHttpApiResponseBody() = default;
};
class ExportHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportHttpApiResponseBody> body{};

  ExportHttpApiResponse() {}

  explicit ExportHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExportHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~ExportHttpApiResponse() = default;
};
class GetDashboardRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> routeName{};

  GetDashboardRequestFilter() {}

  explicit GetDashboardRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (routeName) {
      res["routeName"] = boost::any(*routeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("routeName") != m.end() && !m["routeName"].empty()) {
      routeName = make_shared<string>(boost::any_cast<string>(m["routeName"]));
    }
  }


  virtual ~GetDashboardRequestFilter() = default;
};
class GetDashboardRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> apiId{};
  shared_ptr<GetDashboardRequestFilter> filter{};
  shared_ptr<string> name{};
  shared_ptr<string> pluginClassId{};
  shared_ptr<string> pluginId{};
  shared_ptr<string> source{};
  shared_ptr<string> upstreamCluster{};

  GetDashboardRequest() {}

  explicit GetDashboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["acceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (apiId) {
      res["apiId"] = boost::any(*apiId);
    }
    if (filter) {
      res["filter"] = filter ? boost::any(filter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pluginClassId) {
      res["pluginClassId"] = boost::any(*pluginClassId);
    }
    if (pluginId) {
      res["pluginId"] = boost::any(*pluginId);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (upstreamCluster) {
      res["upstreamCluster"] = boost::any(*upstreamCluster);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("acceptLanguage") != m.end() && !m["acceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["acceptLanguage"]));
    }
    if (m.find("apiId") != m.end() && !m["apiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["apiId"]));
    }
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      if (typeid(map<string, boost::any>) == m["filter"].type()) {
        GetDashboardRequestFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filter"]));
        filter = make_shared<GetDashboardRequestFilter>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pluginClassId") != m.end() && !m["pluginClassId"].empty()) {
      pluginClassId = make_shared<string>(boost::any_cast<string>(m["pluginClassId"]));
    }
    if (m.find("pluginId") != m.end() && !m["pluginId"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["pluginId"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("upstreamCluster") != m.end() && !m["upstreamCluster"].empty()) {
      upstreamCluster = make_shared<string>(boost::any_cast<string>(m["upstreamCluster"]));
    }
  }


  virtual ~GetDashboardRequest() = default;
};
class GetDashboardShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> apiId{};
  shared_ptr<string> filterShrink{};
  shared_ptr<string> name{};
  shared_ptr<string> pluginClassId{};
  shared_ptr<string> pluginId{};
  shared_ptr<string> source{};
  shared_ptr<string> upstreamCluster{};

  GetDashboardShrinkRequest() {}

  explicit GetDashboardShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["acceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (apiId) {
      res["apiId"] = boost::any(*apiId);
    }
    if (filterShrink) {
      res["filter"] = boost::any(*filterShrink);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pluginClassId) {
      res["pluginClassId"] = boost::any(*pluginClassId);
    }
    if (pluginId) {
      res["pluginId"] = boost::any(*pluginId);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (upstreamCluster) {
      res["upstreamCluster"] = boost::any(*upstreamCluster);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("acceptLanguage") != m.end() && !m["acceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["acceptLanguage"]));
    }
    if (m.find("apiId") != m.end() && !m["apiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["apiId"]));
    }
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      filterShrink = make_shared<string>(boost::any_cast<string>(m["filter"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pluginClassId") != m.end() && !m["pluginClassId"].empty()) {
      pluginClassId = make_shared<string>(boost::any_cast<string>(m["pluginClassId"]));
    }
    if (m.find("pluginId") != m.end() && !m["pluginId"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["pluginId"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("upstreamCluster") != m.end() && !m["upstreamCluster"].empty()) {
      upstreamCluster = make_shared<string>(boost::any_cast<string>(m["upstreamCluster"]));
    }
  }


  virtual ~GetDashboardShrinkRequest() = default;
};
class GetDashboardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> name{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  GetDashboardResponseBodyData() {}

  explicit GetDashboardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetDashboardResponseBodyData() = default;
};
class GetDashboardResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetDashboardResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDashboardResponseBody() {}

  explicit GetDashboardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
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
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDashboardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDashboardResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
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


  virtual ~GetDashboardResponseBody() = default;
};
class GetDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDashboardResponseBody> body{};

  GetDashboardResponse() {}

  explicit GetDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDashboardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDashboardResponseBody>(model1);
      }
    }
  }


  virtual ~GetDashboardResponse() = default;
};
class GetDomainRequest : public Darabonba::Model {
public:
  shared_ptr<bool> withStatistics{};

  GetDomainRequest() {}

  explicit GetDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (withStatistics) {
      res["withStatistics"] = boost::any(*withStatistics);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("withStatistics") != m.end() && !m["withStatistics"].empty()) {
      withStatistics = make_shared<bool>(boost::any_cast<bool>(m["withStatistics"]));
    }
  }


  virtual ~GetDomainRequest() = default;
};
class GetDomainResponseBodyDataStatisticsInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ResourceStatistic>> resourceStatistics{};
  shared_ptr<string> totalCount{};

  GetDomainResponseBodyDataStatisticsInfo() {}

  explicit GetDomainResponseBodyDataStatisticsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceStatistics) {
      vector<boost::any> temp1;
      for(auto item1:*resourceStatistics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resourceStatistics"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceStatistics") != m.end() && !m["resourceStatistics"].empty()) {
      if (typeid(vector<boost::any>) == m["resourceStatistics"].type()) {
        vector<ResourceStatistic> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resourceStatistics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResourceStatistic model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceStatistics = make_shared<vector<ResourceStatistic>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["totalCount"]));
    }
  }


  virtual ~GetDomainResponseBodyDataStatisticsInfo() = default;
};
class GetDomainResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> caCertIdentifier{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> certName{};
  shared_ptr<string> clientCACert{};
  shared_ptr<string> createFrom{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<bool> default_{};
  shared_ptr<string> domainId{};
  shared_ptr<bool> forceHttps{};
  shared_ptr<string> http2Option{};
  shared_ptr<string> issuer{};
  shared_ptr<bool> mTLSEnabled{};
  shared_ptr<string> name{};
  shared_ptr<long> notAfterTimstamp{};
  shared_ptr<long> notBeforeTimestamp{};
  shared_ptr<string> protocol{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sans{};
  shared_ptr<GetDomainResponseBodyDataStatisticsInfo> statisticsInfo{};
  shared_ptr<TlsCipherSuitesConfig> tlsCipherSuitesConfig{};
  shared_ptr<string> tlsMax{};
  shared_ptr<string> tlsMin{};
  shared_ptr<long> updatetimestamp{};

  GetDomainResponseBodyData() {}

  explicit GetDomainResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["algorithm"] = boost::any(*algorithm);
    }
    if (caCertIdentifier) {
      res["caCertIdentifier"] = boost::any(*caCertIdentifier);
    }
    if (certIdentifier) {
      res["certIdentifier"] = boost::any(*certIdentifier);
    }
    if (certName) {
      res["certName"] = boost::any(*certName);
    }
    if (clientCACert) {
      res["clientCACert"] = boost::any(*clientCACert);
    }
    if (createFrom) {
      res["createFrom"] = boost::any(*createFrom);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (default_) {
      res["default"] = boost::any(*default_);
    }
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (forceHttps) {
      res["forceHttps"] = boost::any(*forceHttps);
    }
    if (http2Option) {
      res["http2Option"] = boost::any(*http2Option);
    }
    if (issuer) {
      res["issuer"] = boost::any(*issuer);
    }
    if (mTLSEnabled) {
      res["mTLSEnabled"] = boost::any(*mTLSEnabled);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (notAfterTimstamp) {
      res["notAfterTimstamp"] = boost::any(*notAfterTimstamp);
    }
    if (notBeforeTimestamp) {
      res["notBeforeTimestamp"] = boost::any(*notBeforeTimestamp);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sans) {
      res["sans"] = boost::any(*sans);
    }
    if (statisticsInfo) {
      res["statisticsInfo"] = statisticsInfo ? boost::any(statisticsInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tlsCipherSuitesConfig) {
      res["tlsCipherSuitesConfig"] = tlsCipherSuitesConfig ? boost::any(tlsCipherSuitesConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tlsMax) {
      res["tlsMax"] = boost::any(*tlsMax);
    }
    if (tlsMin) {
      res["tlsMin"] = boost::any(*tlsMin);
    }
    if (updatetimestamp) {
      res["updatetimestamp"] = boost::any(*updatetimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algorithm") != m.end() && !m["algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["algorithm"]));
    }
    if (m.find("caCertIdentifier") != m.end() && !m["caCertIdentifier"].empty()) {
      caCertIdentifier = make_shared<string>(boost::any_cast<string>(m["caCertIdentifier"]));
    }
    if (m.find("certIdentifier") != m.end() && !m["certIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["certIdentifier"]));
    }
    if (m.find("certName") != m.end() && !m["certName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["certName"]));
    }
    if (m.find("clientCACert") != m.end() && !m["clientCACert"].empty()) {
      clientCACert = make_shared<string>(boost::any_cast<string>(m["clientCACert"]));
    }
    if (m.find("createFrom") != m.end() && !m["createFrom"].empty()) {
      createFrom = make_shared<string>(boost::any_cast<string>(m["createFrom"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("default") != m.end() && !m["default"].empty()) {
      default_ = make_shared<bool>(boost::any_cast<bool>(m["default"]));
    }
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("forceHttps") != m.end() && !m["forceHttps"].empty()) {
      forceHttps = make_shared<bool>(boost::any_cast<bool>(m["forceHttps"]));
    }
    if (m.find("http2Option") != m.end() && !m["http2Option"].empty()) {
      http2Option = make_shared<string>(boost::any_cast<string>(m["http2Option"]));
    }
    if (m.find("issuer") != m.end() && !m["issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["issuer"]));
    }
    if (m.find("mTLSEnabled") != m.end() && !m["mTLSEnabled"].empty()) {
      mTLSEnabled = make_shared<bool>(boost::any_cast<bool>(m["mTLSEnabled"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("notAfterTimstamp") != m.end() && !m["notAfterTimstamp"].empty()) {
      notAfterTimstamp = make_shared<long>(boost::any_cast<long>(m["notAfterTimstamp"]));
    }
    if (m.find("notBeforeTimestamp") != m.end() && !m["notBeforeTimestamp"].empty()) {
      notBeforeTimestamp = make_shared<long>(boost::any_cast<long>(m["notBeforeTimestamp"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("sans") != m.end() && !m["sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["sans"]));
    }
    if (m.find("statisticsInfo") != m.end() && !m["statisticsInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["statisticsInfo"].type()) {
        GetDomainResponseBodyDataStatisticsInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["statisticsInfo"]));
        statisticsInfo = make_shared<GetDomainResponseBodyDataStatisticsInfo>(model1);
      }
    }
    if (m.find("tlsCipherSuitesConfig") != m.end() && !m["tlsCipherSuitesConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tlsCipherSuitesConfig"].type()) {
        TlsCipherSuitesConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tlsCipherSuitesConfig"]));
        tlsCipherSuitesConfig = make_shared<TlsCipherSuitesConfig>(model1);
      }
    }
    if (m.find("tlsMax") != m.end() && !m["tlsMax"].empty()) {
      tlsMax = make_shared<string>(boost::any_cast<string>(m["tlsMax"]));
    }
    if (m.find("tlsMin") != m.end() && !m["tlsMin"].empty()) {
      tlsMin = make_shared<string>(boost::any_cast<string>(m["tlsMin"]));
    }
    if (m.find("updatetimestamp") != m.end() && !m["updatetimestamp"].empty()) {
      updatetimestamp = make_shared<long>(boost::any_cast<long>(m["updatetimestamp"]));
    }
  }


  virtual ~GetDomainResponseBodyData() = default;
};
class GetDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDomainResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDomainResponseBody() {}

  explicit GetDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDomainResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDomainResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
class GetEnvironmentRequest : public Darabonba::Model {
public:
  shared_ptr<bool> withStatistics{};
  shared_ptr<bool> withVpcInfo{};

  GetEnvironmentRequest() {}

  explicit GetEnvironmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (withStatistics) {
      res["withStatistics"] = boost::any(*withStatistics);
    }
    if (withVpcInfo) {
      res["withVpcInfo"] = boost::any(*withVpcInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("withStatistics") != m.end() && !m["withStatistics"].empty()) {
      withStatistics = make_shared<bool>(boost::any_cast<bool>(m["withStatistics"]));
    }
    if (m.find("withVpcInfo") != m.end() && !m["withVpcInfo"].empty()) {
      withVpcInfo = make_shared<bool>(boost::any_cast<bool>(m["withVpcInfo"]));
    }
  }


  virtual ~GetEnvironmentRequest() = default;
};
class GetEnvironmentResponseBodyDataStatisticsInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ResourceStatistic>> resourceStatistics{};
  shared_ptr<long> totalCount{};

  GetEnvironmentResponseBodyDataStatisticsInfo() {}

  explicit GetEnvironmentResponseBodyDataStatisticsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceStatistics) {
      vector<boost::any> temp1;
      for(auto item1:*resourceStatistics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resourceStatistics"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceStatistics") != m.end() && !m["resourceStatistics"].empty()) {
      if (typeid(vector<boost::any>) == m["resourceStatistics"].type()) {
        vector<ResourceStatistic> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resourceStatistics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResourceStatistic model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceStatistics = make_shared<vector<ResourceStatistic>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~GetEnvironmentResponseBodyDataStatisticsInfo() = default;
};
class GetEnvironmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<bool> default_{};
  shared_ptr<string> description{};
  shared_ptr<string> environmentId{};
  shared_ptr<GatewayInfo> gatewayInfo{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<GetEnvironmentResponseBodyDataStatisticsInfo> statisticsInfo{};
  shared_ptr<vector<SubDomainInfo>> subDomainInfos{};
  shared_ptr<long> updateTimestamp{};

  GetEnvironmentResponseBodyData() {}

  explicit GetEnvironmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (default_) {
      res["default"] = boost::any(*default_);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (gatewayInfo) {
      res["gatewayInfo"] = gatewayInfo ? boost::any(gatewayInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (statisticsInfo) {
      res["statisticsInfo"] = statisticsInfo ? boost::any(statisticsInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subDomainInfos) {
      vector<boost::any> temp1;
      for(auto item1:*subDomainInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subDomainInfos"] = boost::any(temp1);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("default") != m.end() && !m["default"].empty()) {
      default_ = make_shared<bool>(boost::any_cast<bool>(m["default"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("gatewayInfo") != m.end() && !m["gatewayInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["gatewayInfo"].type()) {
        GatewayInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gatewayInfo"]));
        gatewayInfo = make_shared<GatewayInfo>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("statisticsInfo") != m.end() && !m["statisticsInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["statisticsInfo"].type()) {
        GetEnvironmentResponseBodyDataStatisticsInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["statisticsInfo"]));
        statisticsInfo = make_shared<GetEnvironmentResponseBodyDataStatisticsInfo>(model1);
      }
    }
    if (m.find("subDomainInfos") != m.end() && !m["subDomainInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["subDomainInfos"].type()) {
        vector<SubDomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subDomainInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubDomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subDomainInfos = make_shared<vector<SubDomainInfo>>(expect1);
      }
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
  }


  virtual ~GetEnvironmentResponseBodyData() = default;
};
class GetEnvironmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetEnvironmentResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetEnvironmentResponseBody() {}

  explicit GetEnvironmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetEnvironmentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetEnvironmentResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetEnvironmentResponseBody() = default;
};
class GetEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnvironmentResponseBody> body{};

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
        GetEnvironmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnvironmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnvironmentResponse() = default;
};
class GetGatewayResponseBodyDataEnvironments : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> environmentId{};
  shared_ptr<string> name{};

  GetGatewayResponseBodyDataEnvironments() {}

  explicit GetGatewayResponseBodyDataEnvironments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataEnvironments() = default;
};
class GetGatewayResponseBodyDataLoadBalancersPorts : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  GetGatewayResponseBodyDataLoadBalancersPorts() {}

  explicit GetGatewayResponseBodyDataLoadBalancersPorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataLoadBalancersPorts() = default;
};
class GetGatewayResponseBodyDataLoadBalancers : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> addressIpVersion{};
  shared_ptr<string> addressType{};
  shared_ptr<bool> gatewayDefault{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> mode{};
  shared_ptr<vector<GetGatewayResponseBodyDataLoadBalancersPorts>> ports{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetGatewayResponseBodyDataLoadBalancers() {}

  explicit GetGatewayResponseBodyDataLoadBalancers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["address"] = boost::any(*address);
    }
    if (addressIpVersion) {
      res["addressIpVersion"] = boost::any(*addressIpVersion);
    }
    if (addressType) {
      res["addressType"] = boost::any(*addressType);
    }
    if (gatewayDefault) {
      res["gatewayDefault"] = boost::any(*gatewayDefault);
    }
    if (loadBalancerId) {
      res["loadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (ports) {
      vector<boost::any> temp1;
      for(auto item1:*ports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ports"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
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
    if (m.find("addressIpVersion") != m.end() && !m["addressIpVersion"].empty()) {
      addressIpVersion = make_shared<string>(boost::any_cast<string>(m["addressIpVersion"]));
    }
    if (m.find("addressType") != m.end() && !m["addressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["addressType"]));
    }
    if (m.find("gatewayDefault") != m.end() && !m["gatewayDefault"].empty()) {
      gatewayDefault = make_shared<bool>(boost::any_cast<bool>(m["gatewayDefault"]));
    }
    if (m.find("loadBalancerId") != m.end() && !m["loadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["loadBalancerId"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("ports") != m.end() && !m["ports"].empty()) {
      if (typeid(vector<boost::any>) == m["ports"].type()) {
        vector<GetGatewayResponseBodyDataLoadBalancersPorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGatewayResponseBodyDataLoadBalancersPorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ports = make_shared<vector<GetGatewayResponseBodyDataLoadBalancersPorts>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataLoadBalancers() = default;
};
class GetGatewayResponseBodyDataSecurityGroup : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> securityGroupId{};

  GetGatewayResponseBodyDataSecurityGroup() {}

  explicit GetGatewayResponseBodyDataSecurityGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataSecurityGroup() = default;
};
class GetGatewayResponseBodyDataTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetGatewayResponseBodyDataTags() {}

  explicit GetGatewayResponseBodyDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetGatewayResponseBodyDataTags() = default;
};
class GetGatewayResponseBodyDataVSwitch : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> vSwitchId{};

  GetGatewayResponseBodyDataVSwitch() {}

  explicit GetGatewayResponseBodyDataVSwitch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataVSwitch() = default;
};
class GetGatewayResponseBodyDataVpc : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> vpcId{};

  GetGatewayResponseBodyDataVpc() {}

  explicit GetGatewayResponseBodyDataVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataVpc() = default;
};
class GetGatewayResponseBodyDataZonesVSwitch : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> vSwitchId{};

  GetGatewayResponseBodyDataZonesVSwitch() {}

  explicit GetGatewayResponseBodyDataZonesVSwitch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataZonesVSwitch() = default;
};
class GetGatewayResponseBodyDataZones : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<GetGatewayResponseBodyDataZonesVSwitch> vSwitch{};
  shared_ptr<string> zoneId{};

  GetGatewayResponseBodyDataZones() {}

  explicit GetGatewayResponseBodyDataZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (vSwitch) {
      res["vSwitch"] = vSwitch ? boost::any(vSwitch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["zoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("vSwitch") != m.end() && !m["vSwitch"].empty()) {
      if (typeid(map<string, boost::any>) == m["vSwitch"].type()) {
        GetGatewayResponseBodyDataZonesVSwitch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vSwitch"]));
        vSwitch = make_shared<GetGatewayResponseBodyDataZonesVSwitch>(model1);
      }
    }
    if (m.find("zoneId") != m.end() && !m["zoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zoneId"]));
    }
  }


  virtual ~GetGatewayResponseBodyDataZones() = default;
};
class GetGatewayResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> createFrom{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<vector<GetGatewayResponseBodyDataEnvironments>> environments{};
  shared_ptr<long> expireTimestamp{};
  shared_ptr<string> gatewayId{};
  shared_ptr<vector<GetGatewayResponseBodyDataLoadBalancers>> loadBalancers{};
  shared_ptr<string> name{};
  shared_ptr<string> replicas{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<GetGatewayResponseBodyDataSecurityGroup> securityGroup{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetGatewayResponseBodyDataTags>> tags{};
  shared_ptr<string> targetVersion{};
  shared_ptr<long> updateTimestamp{};
  shared_ptr<GetGatewayResponseBodyDataVSwitch> vSwitch{};
  shared_ptr<string> version{};
  shared_ptr<GetGatewayResponseBodyDataVpc> vpc{};
  shared_ptr<vector<GetGatewayResponseBodyDataZones>> zones{};

  GetGatewayResponseBodyData() {}

  explicit GetGatewayResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (createFrom) {
      res["createFrom"] = boost::any(*createFrom);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (environments) {
      vector<boost::any> temp1;
      for(auto item1:*environments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["environments"] = boost::any(temp1);
    }
    if (expireTimestamp) {
      res["expireTimestamp"] = boost::any(*expireTimestamp);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (loadBalancers) {
      vector<boost::any> temp1;
      for(auto item1:*loadBalancers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["loadBalancers"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (replicas) {
      res["replicas"] = boost::any(*replicas);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroup) {
      res["securityGroup"] = securityGroup ? boost::any(securityGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (targetVersion) {
      res["targetVersion"] = boost::any(*targetVersion);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    if (vSwitch) {
      res["vSwitch"] = vSwitch ? boost::any(vSwitch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (vpc) {
      res["vpc"] = vpc ? boost::any(vpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zones) {
      vector<boost::any> temp1;
      for(auto item1:*zones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["zones"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("createFrom") != m.end() && !m["createFrom"].empty()) {
      createFrom = make_shared<string>(boost::any_cast<string>(m["createFrom"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("environments") != m.end() && !m["environments"].empty()) {
      if (typeid(vector<boost::any>) == m["environments"].type()) {
        vector<GetGatewayResponseBodyDataEnvironments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["environments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGatewayResponseBodyDataEnvironments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        environments = make_shared<vector<GetGatewayResponseBodyDataEnvironments>>(expect1);
      }
    }
    if (m.find("expireTimestamp") != m.end() && !m["expireTimestamp"].empty()) {
      expireTimestamp = make_shared<long>(boost::any_cast<long>(m["expireTimestamp"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("loadBalancers") != m.end() && !m["loadBalancers"].empty()) {
      if (typeid(vector<boost::any>) == m["loadBalancers"].type()) {
        vector<GetGatewayResponseBodyDataLoadBalancers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["loadBalancers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGatewayResponseBodyDataLoadBalancers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loadBalancers = make_shared<vector<GetGatewayResponseBodyDataLoadBalancers>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("replicas") != m.end() && !m["replicas"].empty()) {
      replicas = make_shared<string>(boost::any_cast<string>(m["replicas"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("securityGroup") != m.end() && !m["securityGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["securityGroup"].type()) {
        GetGatewayResponseBodyDataSecurityGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["securityGroup"]));
        securityGroup = make_shared<GetGatewayResponseBodyDataSecurityGroup>(model1);
      }
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<GetGatewayResponseBodyDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGatewayResponseBodyDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetGatewayResponseBodyDataTags>>(expect1);
      }
    }
    if (m.find("targetVersion") != m.end() && !m["targetVersion"].empty()) {
      targetVersion = make_shared<string>(boost::any_cast<string>(m["targetVersion"]));
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
    if (m.find("vSwitch") != m.end() && !m["vSwitch"].empty()) {
      if (typeid(map<string, boost::any>) == m["vSwitch"].type()) {
        GetGatewayResponseBodyDataVSwitch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vSwitch"]));
        vSwitch = make_shared<GetGatewayResponseBodyDataVSwitch>(model1);
      }
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("vpc") != m.end() && !m["vpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpc"].type()) {
        GetGatewayResponseBodyDataVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpc"]));
        vpc = make_shared<GetGatewayResponseBodyDataVpc>(model1);
      }
    }
    if (m.find("zones") != m.end() && !m["zones"].empty()) {
      if (typeid(vector<boost::any>) == m["zones"].type()) {
        vector<GetGatewayResponseBodyDataZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGatewayResponseBodyDataZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<GetGatewayResponseBodyDataZones>>(expect1);
      }
    }
  }


  virtual ~GetGatewayResponseBodyData() = default;
};
class GetGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetGatewayResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetGatewayResponseBody() {}

  explicit GetGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetGatewayResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetGatewayResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetGatewayResponseBody() = default;
};
class GetGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGatewayResponseBody> body{};

  GetGatewayResponse() {}

  explicit GetGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~GetGatewayResponse() = default;
};
class GetHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<HttpApiApiInfo> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetHttpApiResponseBody() {}

  explicit GetHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        HttpApiApiInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<HttpApiApiInfo>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetHttpApiResponseBody() = default;
};
class GetHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHttpApiResponseBody> body{};

  GetHttpApiResponse() {}

  explicit GetHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~GetHttpApiResponse() = default;
};
class GetHttpApiOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<HttpApiOperationInfo> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetHttpApiOperationResponseBody() {}

  explicit GetHttpApiOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        HttpApiOperationInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<HttpApiOperationInfo>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetHttpApiOperationResponseBody() = default;
};
class GetHttpApiOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHttpApiOperationResponseBody> body{};

  GetHttpApiOperationResponse() {}

  explicit GetHttpApiOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHttpApiOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHttpApiOperationResponseBody>(model1);
      }
    }
  }


  virtual ~GetHttpApiOperationResponse() = default;
};
class GetHttpApiRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<HttpRoute> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetHttpApiRouteResponseBody() {}

  explicit GetHttpApiRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        HttpRoute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<HttpRoute>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetHttpApiRouteResponseBody() = default;
};
class GetHttpApiRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHttpApiRouteResponseBody> body{};

  GetHttpApiRouteResponse() {}

  explicit GetHttpApiRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHttpApiRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHttpApiRouteResponseBody>(model1);
      }
    }
  }


  virtual ~GetHttpApiRouteResponse() = default;
};
class GetPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PolicyDetailInfo> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetPolicyResponseBody() {}

  explicit GetPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        PolicyDetailInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<PolicyDetailInfo>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetPolicyResponseBody() = default;
};
class GetPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPolicyResponseBody> body{};

  GetPolicyResponse() {}

  explicit GetPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetPolicyResponse() = default;
};
class GetPolicyAttachmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> attachResourceId{};
  shared_ptr<string> attachResourceType{};
  shared_ptr<string> config{};
  shared_ptr<string> environmentId{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> policyAttachmentId{};
  shared_ptr<string> policyId{};

  GetPolicyAttachmentResponseBodyData() {}

  explicit GetPolicyAttachmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachResourceId) {
      res["attachResourceId"] = boost::any(*attachResourceId);
    }
    if (attachResourceType) {
      res["attachResourceType"] = boost::any(*attachResourceType);
    }
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (policyAttachmentId) {
      res["policyAttachmentId"] = boost::any(*policyAttachmentId);
    }
    if (policyId) {
      res["policyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attachResourceId") != m.end() && !m["attachResourceId"].empty()) {
      attachResourceId = make_shared<string>(boost::any_cast<string>(m["attachResourceId"]));
    }
    if (m.find("attachResourceType") != m.end() && !m["attachResourceType"].empty()) {
      attachResourceType = make_shared<string>(boost::any_cast<string>(m["attachResourceType"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("policyAttachmentId") != m.end() && !m["policyAttachmentId"].empty()) {
      policyAttachmentId = make_shared<string>(boost::any_cast<string>(m["policyAttachmentId"]));
    }
    if (m.find("policyId") != m.end() && !m["policyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["policyId"]));
    }
  }


  virtual ~GetPolicyAttachmentResponseBodyData() = default;
};
class GetPolicyAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetPolicyAttachmentResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetPolicyAttachmentResponseBody() {}

  explicit GetPolicyAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetPolicyAttachmentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetPolicyAttachmentResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetPolicyAttachmentResponseBody() = default;
};
class GetPolicyAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPolicyAttachmentResponseBody> body{};

  GetPolicyAttachmentResponse() {}

  explicit GetPolicyAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPolicyAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPolicyAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetPolicyAttachmentResponse() = default;
};
class GetResourceOverviewResponseBodyDataApi : public Darabonba::Model {
public:
  shared_ptr<long> publishedCount{};
  shared_ptr<long> totalCount{};

  GetResourceOverviewResponseBodyDataApi() {}

  explicit GetResourceOverviewResponseBodyDataApi(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (publishedCount) {
      res["publishedCount"] = boost::any(*publishedCount);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("publishedCount") != m.end() && !m["publishedCount"].empty()) {
      publishedCount = make_shared<long>(boost::any_cast<long>(m["publishedCount"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~GetResourceOverviewResponseBodyDataApi() = default;
};
class GetResourceOverviewResponseBodyDataGateway : public Darabonba::Model {
public:
  shared_ptr<long> runningCount{};
  shared_ptr<long> totalCount{};

  GetResourceOverviewResponseBodyDataGateway() {}

  explicit GetResourceOverviewResponseBodyDataGateway(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (runningCount) {
      res["runningCount"] = boost::any(*runningCount);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("runningCount") != m.end() && !m["runningCount"].empty()) {
      runningCount = make_shared<long>(boost::any_cast<long>(m["runningCount"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~GetResourceOverviewResponseBodyDataGateway() = default;
};
class GetResourceOverviewResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetResourceOverviewResponseBodyDataApi> api{};
  shared_ptr<GetResourceOverviewResponseBodyDataGateway> gateway{};

  GetResourceOverviewResponseBodyData() {}

  explicit GetResourceOverviewResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (api) {
      res["api"] = api ? boost::any(api->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gateway) {
      res["gateway"] = gateway ? boost::any(gateway->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("api") != m.end() && !m["api"].empty()) {
      if (typeid(map<string, boost::any>) == m["api"].type()) {
        GetResourceOverviewResponseBodyDataApi model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["api"]));
        api = make_shared<GetResourceOverviewResponseBodyDataApi>(model1);
      }
    }
    if (m.find("gateway") != m.end() && !m["gateway"].empty()) {
      if (typeid(map<string, boost::any>) == m["gateway"].type()) {
        GetResourceOverviewResponseBodyDataGateway model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["gateway"]));
        gateway = make_shared<GetResourceOverviewResponseBodyDataGateway>(model1);
      }
    }
  }


  virtual ~GetResourceOverviewResponseBodyData() = default;
};
class GetResourceOverviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetResourceOverviewResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetResourceOverviewResponseBody() {}

  explicit GetResourceOverviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetResourceOverviewResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetResourceOverviewResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetResourceOverviewResponseBody() = default;
};
class GetResourceOverviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceOverviewResponseBody> body{};

  GetResourceOverviewResponse() {}

  explicit GetResourceOverviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetResourceOverviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceOverviewResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceOverviewResponse() = default;
};
class GetServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<Service> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetServiceResponseBody() {}

  explicit GetServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        Service model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Service>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
class GetTraceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  GetTraceConfigRequest() {}

  explicit GetTraceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["acceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("acceptLanguage") != m.end() && !m["acceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["acceptLanguage"]));
    }
  }


  virtual ~GetTraceConfigRequest() = default;
};
class GetTraceConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<long> sampleRatio{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> servicePort{};
  shared_ptr<string> traceType{};

  GetTraceConfigResponseBodyData() {}

  explicit GetTraceConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (sampleRatio) {
      res["sampleRatio"] = boost::any(*sampleRatio);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
    }
    if (servicePort) {
      res["servicePort"] = boost::any(*servicePort);
    }
    if (traceType) {
      res["traceType"] = boost::any(*traceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("sampleRatio") != m.end() && !m["sampleRatio"].empty()) {
      sampleRatio = make_shared<long>(boost::any_cast<long>(m["sampleRatio"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
    if (m.find("servicePort") != m.end() && !m["servicePort"].empty()) {
      servicePort = make_shared<string>(boost::any_cast<string>(m["servicePort"]));
    }
    if (m.find("traceType") != m.end() && !m["traceType"].empty()) {
      traceType = make_shared<string>(boost::any_cast<string>(m["traceType"]));
    }
  }


  virtual ~GetTraceConfigResponseBodyData() = default;
};
class GetTraceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetTraceConfigResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetTraceConfigResponseBody() {}

  explicit GetTraceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetTraceConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetTraceConfigResponseBodyData>(model1);
      }
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


  virtual ~GetTraceConfigResponseBody() = default;
};
class GetTraceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTraceConfigResponseBody> body{};

  GetTraceConfigResponse() {}

  explicit GetTraceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTraceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTraceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetTraceConfigResponse() = default;
};
class ImportHttpApiRequestSpecOssConfig : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> objectKey{};
  shared_ptr<string> regionId{};

  ImportHttpApiRequestSpecOssConfig() {}

  explicit ImportHttpApiRequestSpecOssConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["bucketName"] = boost::any(*bucketName);
    }
    if (objectKey) {
      res["objectKey"] = boost::any(*objectKey);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bucketName") != m.end() && !m["bucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["bucketName"]));
    }
    if (m.find("objectKey") != m.end() && !m["objectKey"].empty()) {
      objectKey = make_shared<string>(boost::any_cast<string>(m["objectKey"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~ImportHttpApiRequestSpecOssConfig() = default;
};
class ImportHttpApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> specContentBase64{};
  shared_ptr<string> specFileUrl{};
  shared_ptr<ImportHttpApiRequestSpecOssConfig> specOssConfig{};
  shared_ptr<string> strategy{};
  shared_ptr<string> targetHttpApiId{};
  shared_ptr<HttpApiVersionConfig> versionConfig{};

  ImportHttpApiRequest() {}

  explicit ImportHttpApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (specContentBase64) {
      res["specContentBase64"] = boost::any(*specContentBase64);
    }
    if (specFileUrl) {
      res["specFileUrl"] = boost::any(*specFileUrl);
    }
    if (specOssConfig) {
      res["specOssConfig"] = specOssConfig ? boost::any(specOssConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (strategy) {
      res["strategy"] = boost::any(*strategy);
    }
    if (targetHttpApiId) {
      res["targetHttpApiId"] = boost::any(*targetHttpApiId);
    }
    if (versionConfig) {
      res["versionConfig"] = versionConfig ? boost::any(versionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("specContentBase64") != m.end() && !m["specContentBase64"].empty()) {
      specContentBase64 = make_shared<string>(boost::any_cast<string>(m["specContentBase64"]));
    }
    if (m.find("specFileUrl") != m.end() && !m["specFileUrl"].empty()) {
      specFileUrl = make_shared<string>(boost::any_cast<string>(m["specFileUrl"]));
    }
    if (m.find("specOssConfig") != m.end() && !m["specOssConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["specOssConfig"].type()) {
        ImportHttpApiRequestSpecOssConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["specOssConfig"]));
        specOssConfig = make_shared<ImportHttpApiRequestSpecOssConfig>(model1);
      }
    }
    if (m.find("strategy") != m.end() && !m["strategy"].empty()) {
      strategy = make_shared<string>(boost::any_cast<string>(m["strategy"]));
    }
    if (m.find("targetHttpApiId") != m.end() && !m["targetHttpApiId"].empty()) {
      targetHttpApiId = make_shared<string>(boost::any_cast<string>(m["targetHttpApiId"]));
    }
    if (m.find("versionConfig") != m.end() && !m["versionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["versionConfig"].type()) {
        HttpApiVersionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["versionConfig"]));
        versionConfig = make_shared<HttpApiVersionConfig>(model1);
      }
    }
  }


  virtual ~ImportHttpApiRequest() = default;
};
class ImportHttpApiResponseBodyDataDryRunInfoFailureComponents : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> name{};

  ImportHttpApiResponseBodyDataDryRunInfoFailureComponents() {}

  explicit ImportHttpApiResponseBodyDataDryRunInfoFailureComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ImportHttpApiResponseBodyDataDryRunInfoFailureComponents() = default;
};
class ImportHttpApiResponseBodyDataDryRunInfoFailureOperations : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> method{};
  shared_ptr<string> path{};

  ImportHttpApiResponseBodyDataDryRunInfoFailureOperations() {}

  explicit ImportHttpApiResponseBodyDataDryRunInfoFailureOperations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (method) {
      res["method"] = boost::any(*method);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("method") != m.end() && !m["method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["method"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
  }


  virtual ~ImportHttpApiResponseBodyDataDryRunInfoFailureOperations() = default;
};
class ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> name{};

  ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents() {}

  explicit ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents() = default;
};
class ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> method{};
  shared_ptr<string> name{};
  shared_ptr<string> path{};

  ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations() {}

  explicit ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (method) {
      res["method"] = boost::any(*method);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
    if (m.find("method") != m.end() && !m["method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["method"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
  }


  virtual ~ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations() = default;
};
class ImportHttpApiResponseBodyDataDryRunInfo : public Darabonba::Model {
public:
  shared_ptr<vector<string>> errorMessages{};
  shared_ptr<HttpApiApiInfo> existHttpApiInfo{};
  shared_ptr<vector<ImportHttpApiResponseBodyDataDryRunInfoFailureComponents>> failureComponents{};
  shared_ptr<vector<ImportHttpApiResponseBodyDataDryRunInfoFailureOperations>> failureOperations{};
  shared_ptr<vector<ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents>> successComponents{};
  shared_ptr<vector<ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations>> successOperations{};
  shared_ptr<vector<string>> warningMessages{};

  ImportHttpApiResponseBodyDataDryRunInfo() {}

  explicit ImportHttpApiResponseBodyDataDryRunInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessages) {
      res["errorMessages"] = boost::any(*errorMessages);
    }
    if (existHttpApiInfo) {
      res["existHttpApiInfo"] = existHttpApiInfo ? boost::any(existHttpApiInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (failureComponents) {
      vector<boost::any> temp1;
      for(auto item1:*failureComponents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["failureComponents"] = boost::any(temp1);
    }
    if (failureOperations) {
      vector<boost::any> temp1;
      for(auto item1:*failureOperations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["failureOperations"] = boost::any(temp1);
    }
    if (successComponents) {
      vector<boost::any> temp1;
      for(auto item1:*successComponents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["successComponents"] = boost::any(temp1);
    }
    if (successOperations) {
      vector<boost::any> temp1;
      for(auto item1:*successOperations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["successOperations"] = boost::any(temp1);
    }
    if (warningMessages) {
      res["warningMessages"] = boost::any(*warningMessages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessages") != m.end() && !m["errorMessages"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["errorMessages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["errorMessages"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      errorMessages = make_shared<vector<string>>(toVec1);
    }
    if (m.find("existHttpApiInfo") != m.end() && !m["existHttpApiInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["existHttpApiInfo"].type()) {
        HttpApiApiInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["existHttpApiInfo"]));
        existHttpApiInfo = make_shared<HttpApiApiInfo>(model1);
      }
    }
    if (m.find("failureComponents") != m.end() && !m["failureComponents"].empty()) {
      if (typeid(vector<boost::any>) == m["failureComponents"].type()) {
        vector<ImportHttpApiResponseBodyDataDryRunInfoFailureComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["failureComponents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportHttpApiResponseBodyDataDryRunInfoFailureComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failureComponents = make_shared<vector<ImportHttpApiResponseBodyDataDryRunInfoFailureComponents>>(expect1);
      }
    }
    if (m.find("failureOperations") != m.end() && !m["failureOperations"].empty()) {
      if (typeid(vector<boost::any>) == m["failureOperations"].type()) {
        vector<ImportHttpApiResponseBodyDataDryRunInfoFailureOperations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["failureOperations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportHttpApiResponseBodyDataDryRunInfoFailureOperations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failureOperations = make_shared<vector<ImportHttpApiResponseBodyDataDryRunInfoFailureOperations>>(expect1);
      }
    }
    if (m.find("successComponents") != m.end() && !m["successComponents"].empty()) {
      if (typeid(vector<boost::any>) == m["successComponents"].type()) {
        vector<ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["successComponents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        successComponents = make_shared<vector<ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents>>(expect1);
      }
    }
    if (m.find("successOperations") != m.end() && !m["successOperations"].empty()) {
      if (typeid(vector<boost::any>) == m["successOperations"].type()) {
        vector<ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["successOperations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        successOperations = make_shared<vector<ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations>>(expect1);
      }
    }
    if (m.find("warningMessages") != m.end() && !m["warningMessages"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["warningMessages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["warningMessages"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      warningMessages = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ImportHttpApiResponseBodyDataDryRunInfo() = default;
};
class ImportHttpApiResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ImportHttpApiResponseBodyDataDryRunInfo> dryRunInfo{};
  shared_ptr<string> httpApiId{};
  shared_ptr<string> name{};

  ImportHttpApiResponseBodyData() {}

  explicit ImportHttpApiResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRunInfo) {
      res["dryRunInfo"] = dryRunInfo ? boost::any(dryRunInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpApiId) {
      res["httpApiId"] = boost::any(*httpApiId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dryRunInfo") != m.end() && !m["dryRunInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["dryRunInfo"].type()) {
        ImportHttpApiResponseBodyDataDryRunInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dryRunInfo"]));
        dryRunInfo = make_shared<ImportHttpApiResponseBodyDataDryRunInfo>(model1);
      }
    }
    if (m.find("httpApiId") != m.end() && !m["httpApiId"].empty()) {
      httpApiId = make_shared<string>(boost::any_cast<string>(m["httpApiId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ImportHttpApiResponseBodyData() = default;
};
class ImportHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ImportHttpApiResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ImportHttpApiResponseBody() {}

  explicit ImportHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ImportHttpApiResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ImportHttpApiResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ImportHttpApiResponseBody() = default;
};
class ImportHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportHttpApiResponseBody> body{};

  ImportHttpApiResponse() {}

  explicit ImportHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ImportHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~ImportHttpApiResponse() = default;
};
class ListDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> nameLike{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};

  ListDomainsRequest() {}

  explicit ListDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (nameLike) {
      res["nameLike"] = boost::any(*nameLike);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("nameLike") != m.end() && !m["nameLike"].empty()) {
      nameLike = make_shared<string>(boost::any_cast<string>(m["nameLike"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
  }


  virtual ~ListDomainsRequest() = default;
};
class ListDomainsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DomainInfo>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListDomainsResponseBodyData() {}

  explicit ListDomainsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<DomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DomainInfo>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListDomainsResponseBodyData() = default;
};
class ListDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListDomainsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListDomainsResponseBody() {}

  explicit ListDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListDomainsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListDomainsResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
class ListEnvironmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliasLike{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayNameLike{};
  shared_ptr<string> nameLike{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};

  ListEnvironmentsRequest() {}

  explicit ListEnvironmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasLike) {
      res["aliasLike"] = boost::any(*aliasLike);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayNameLike) {
      res["gatewayNameLike"] = boost::any(*gatewayNameLike);
    }
    if (nameLike) {
      res["nameLike"] = boost::any(*nameLike);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliasLike") != m.end() && !m["aliasLike"].empty()) {
      aliasLike = make_shared<string>(boost::any_cast<string>(m["aliasLike"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("gatewayNameLike") != m.end() && !m["gatewayNameLike"].empty()) {
      gatewayNameLike = make_shared<string>(boost::any_cast<string>(m["gatewayNameLike"]));
    }
    if (m.find("nameLike") != m.end() && !m["nameLike"].empty()) {
      nameLike = make_shared<string>(boost::any_cast<string>(m["nameLike"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
  }


  virtual ~ListEnvironmentsRequest() = default;
};
class ListEnvironmentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<EnvironmentInfo>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListEnvironmentsResponseBodyData() {}

  explicit ListEnvironmentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<EnvironmentInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnvironmentInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<EnvironmentInfo>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListEnvironmentsResponseBodyData() = default;
};
class ListEnvironmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListEnvironmentsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListEnvironmentsResponseBody() {}

  explicit ListEnvironmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListEnvironmentsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListEnvironmentsResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
class ListGatewaysRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListGatewaysRequestTag() {}

  explicit ListGatewaysRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListGatewaysRequestTag() = default;
};
class ListGatewaysRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> keyword{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListGatewaysRequestTag>> tag{};

  ListGatewaysRequest() {}

  explicit ListGatewaysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      if (typeid(vector<boost::any>) == m["tag"].type()) {
        vector<ListGatewaysRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewaysRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListGatewaysRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListGatewaysRequest() = default;
};
class ListGatewaysShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> keyword{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tagShrink{};

  ListGatewaysShrinkRequest() {}

  explicit ListGatewaysShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tagShrink) {
      res["tag"] = boost::any(*tagShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
  }


  virtual ~ListGatewaysShrinkRequest() = default;
};
class ListGatewaysResponseBodyDataItemsLoadBalancersPorts : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  ListGatewaysResponseBodyDataItemsLoadBalancersPorts() {}

  explicit ListGatewaysResponseBodyDataItemsLoadBalancersPorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
  }


  virtual ~ListGatewaysResponseBodyDataItemsLoadBalancersPorts() = default;
};
class ListGatewaysResponseBodyDataItemsLoadBalancers : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> addressIpVersion{};
  shared_ptr<string> addressType{};
  shared_ptr<bool> gatewayDefault{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> mode{};
  shared_ptr<vector<ListGatewaysResponseBodyDataItemsLoadBalancersPorts>> ports{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListGatewaysResponseBodyDataItemsLoadBalancers() {}

  explicit ListGatewaysResponseBodyDataItemsLoadBalancers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["address"] = boost::any(*address);
    }
    if (addressIpVersion) {
      res["addressIpVersion"] = boost::any(*addressIpVersion);
    }
    if (addressType) {
      res["addressType"] = boost::any(*addressType);
    }
    if (gatewayDefault) {
      res["gatewayDefault"] = boost::any(*gatewayDefault);
    }
    if (loadBalancerId) {
      res["loadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (ports) {
      vector<boost::any> temp1;
      for(auto item1:*ports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ports"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
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
    if (m.find("addressIpVersion") != m.end() && !m["addressIpVersion"].empty()) {
      addressIpVersion = make_shared<string>(boost::any_cast<string>(m["addressIpVersion"]));
    }
    if (m.find("addressType") != m.end() && !m["addressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["addressType"]));
    }
    if (m.find("gatewayDefault") != m.end() && !m["gatewayDefault"].empty()) {
      gatewayDefault = make_shared<bool>(boost::any_cast<bool>(m["gatewayDefault"]));
    }
    if (m.find("loadBalancerId") != m.end() && !m["loadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["loadBalancerId"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("ports") != m.end() && !m["ports"].empty()) {
      if (typeid(vector<boost::any>) == m["ports"].type()) {
        vector<ListGatewaysResponseBodyDataItemsLoadBalancersPorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewaysResponseBodyDataItemsLoadBalancersPorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ports = make_shared<vector<ListGatewaysResponseBodyDataItemsLoadBalancersPorts>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListGatewaysResponseBodyDataItemsLoadBalancers() = default;
};
class ListGatewaysResponseBodyDataItemsSecurityGroup : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};

  ListGatewaysResponseBodyDataItemsSecurityGroup() {}

  explicit ListGatewaysResponseBodyDataItemsSecurityGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
  }


  virtual ~ListGatewaysResponseBodyDataItemsSecurityGroup() = default;
};
class ListGatewaysResponseBodyDataItemsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListGatewaysResponseBodyDataItemsTags() {}

  explicit ListGatewaysResponseBodyDataItemsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListGatewaysResponseBodyDataItemsTags() = default;
};
class ListGatewaysResponseBodyDataItemsVSwitch : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};

  ListGatewaysResponseBodyDataItemsVSwitch() {}

  explicit ListGatewaysResponseBodyDataItemsVSwitch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
  }


  virtual ~ListGatewaysResponseBodyDataItemsVSwitch() = default;
};
class ListGatewaysResponseBodyDataItemsVpc : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};

  ListGatewaysResponseBodyDataItemsVpc() {}

  explicit ListGatewaysResponseBodyDataItemsVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~ListGatewaysResponseBodyDataItemsVpc() = default;
};
class ListGatewaysResponseBodyDataItemsZonesVSwitch : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};

  ListGatewaysResponseBodyDataItemsZonesVSwitch() {}

  explicit ListGatewaysResponseBodyDataItemsZonesVSwitch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
  }


  virtual ~ListGatewaysResponseBodyDataItemsZonesVSwitch() = default;
};
class ListGatewaysResponseBodyDataItemsZones : public Darabonba::Model {
public:
  shared_ptr<ListGatewaysResponseBodyDataItemsZonesVSwitch> vSwitch{};
  shared_ptr<string> zoneId{};

  ListGatewaysResponseBodyDataItemsZones() {}

  explicit ListGatewaysResponseBodyDataItemsZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitch) {
      res["vSwitch"] = vSwitch ? boost::any(vSwitch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["zoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vSwitch") != m.end() && !m["vSwitch"].empty()) {
      if (typeid(map<string, boost::any>) == m["vSwitch"].type()) {
        ListGatewaysResponseBodyDataItemsZonesVSwitch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vSwitch"]));
        vSwitch = make_shared<ListGatewaysResponseBodyDataItemsZonesVSwitch>(model1);
      }
    }
    if (m.find("zoneId") != m.end() && !m["zoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zoneId"]));
    }
  }


  virtual ~ListGatewaysResponseBodyDataItemsZones() = default;
};
class ListGatewaysResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> createFrom{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<long> expireTimestamp{};
  shared_ptr<string> gatewayId{};
  shared_ptr<vector<ListGatewaysResponseBodyDataItemsLoadBalancers>> loadBalancers{};
  shared_ptr<string> name{};
  shared_ptr<string> replicas{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<ListGatewaysResponseBodyDataItemsSecurityGroup> securityGroup{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<vector<SubDomainInfo>> subDomainInfos{};
  shared_ptr<vector<ListGatewaysResponseBodyDataItemsTags>> tags{};
  shared_ptr<string> targetVersion{};
  shared_ptr<long> updateTimestamp{};
  shared_ptr<ListGatewaysResponseBodyDataItemsVSwitch> vSwitch{};
  shared_ptr<string> version{};
  shared_ptr<ListGatewaysResponseBodyDataItemsVpc> vpc{};
  shared_ptr<vector<ListGatewaysResponseBodyDataItemsZones>> zones{};

  ListGatewaysResponseBodyDataItems() {}

  explicit ListGatewaysResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (createFrom) {
      res["createFrom"] = boost::any(*createFrom);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (expireTimestamp) {
      res["expireTimestamp"] = boost::any(*expireTimestamp);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (loadBalancers) {
      vector<boost::any> temp1;
      for(auto item1:*loadBalancers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["loadBalancers"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (replicas) {
      res["replicas"] = boost::any(*replicas);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroup) {
      res["securityGroup"] = securityGroup ? boost::any(securityGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (subDomainInfos) {
      vector<boost::any> temp1;
      for(auto item1:*subDomainInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subDomainInfos"] = boost::any(temp1);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (targetVersion) {
      res["targetVersion"] = boost::any(*targetVersion);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    if (vSwitch) {
      res["vSwitch"] = vSwitch ? boost::any(vSwitch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (vpc) {
      res["vpc"] = vpc ? boost::any(vpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zones) {
      vector<boost::any> temp1;
      for(auto item1:*zones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["zones"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("createFrom") != m.end() && !m["createFrom"].empty()) {
      createFrom = make_shared<string>(boost::any_cast<string>(m["createFrom"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("expireTimestamp") != m.end() && !m["expireTimestamp"].empty()) {
      expireTimestamp = make_shared<long>(boost::any_cast<long>(m["expireTimestamp"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("loadBalancers") != m.end() && !m["loadBalancers"].empty()) {
      if (typeid(vector<boost::any>) == m["loadBalancers"].type()) {
        vector<ListGatewaysResponseBodyDataItemsLoadBalancers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["loadBalancers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewaysResponseBodyDataItemsLoadBalancers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loadBalancers = make_shared<vector<ListGatewaysResponseBodyDataItemsLoadBalancers>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("replicas") != m.end() && !m["replicas"].empty()) {
      replicas = make_shared<string>(boost::any_cast<string>(m["replicas"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("securityGroup") != m.end() && !m["securityGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["securityGroup"].type()) {
        ListGatewaysResponseBodyDataItemsSecurityGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["securityGroup"]));
        securityGroup = make_shared<ListGatewaysResponseBodyDataItemsSecurityGroup>(model1);
      }
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("subDomainInfos") != m.end() && !m["subDomainInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["subDomainInfos"].type()) {
        vector<SubDomainInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subDomainInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubDomainInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subDomainInfos = make_shared<vector<SubDomainInfo>>(expect1);
      }
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListGatewaysResponseBodyDataItemsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewaysResponseBodyDataItemsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListGatewaysResponseBodyDataItemsTags>>(expect1);
      }
    }
    if (m.find("targetVersion") != m.end() && !m["targetVersion"].empty()) {
      targetVersion = make_shared<string>(boost::any_cast<string>(m["targetVersion"]));
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
    if (m.find("vSwitch") != m.end() && !m["vSwitch"].empty()) {
      if (typeid(map<string, boost::any>) == m["vSwitch"].type()) {
        ListGatewaysResponseBodyDataItemsVSwitch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vSwitch"]));
        vSwitch = make_shared<ListGatewaysResponseBodyDataItemsVSwitch>(model1);
      }
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("vpc") != m.end() && !m["vpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["vpc"].type()) {
        ListGatewaysResponseBodyDataItemsVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["vpc"]));
        vpc = make_shared<ListGatewaysResponseBodyDataItemsVpc>(model1);
      }
    }
    if (m.find("zones") != m.end() && !m["zones"].empty()) {
      if (typeid(vector<boost::any>) == m["zones"].type()) {
        vector<ListGatewaysResponseBodyDataItemsZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewaysResponseBodyDataItemsZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<ListGatewaysResponseBodyDataItemsZones>>(expect1);
      }
    }
  }


  virtual ~ListGatewaysResponseBodyDataItems() = default;
};
class ListGatewaysResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListGatewaysResponseBodyDataItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListGatewaysResponseBodyData() {}

  explicit ListGatewaysResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<ListGatewaysResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewaysResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListGatewaysResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListGatewaysResponseBodyData() = default;
};
class ListGatewaysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListGatewaysResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListGatewaysResponseBody() {}

  explicit ListGatewaysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListGatewaysResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListGatewaysResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListGatewaysResponseBody() = default;
};
class ListGatewaysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGatewaysResponseBody> body{};

  ListGatewaysResponse() {}

  explicit ListGatewaysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGatewaysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGatewaysResponseBody>(model1);
      }
    }
  }


  virtual ~ListGatewaysResponse() = default;
};
class ListHttpApiOperationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumerAuthorizationRuleId{};
  shared_ptr<string> method{};
  shared_ptr<string> name{};
  shared_ptr<string> nameLike{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pathLike{};
  shared_ptr<string> withConsumerInEnvironmentId{};
  shared_ptr<string> withConsumerInfoById{};
  shared_ptr<string> withPluginAttachmentByPluginId{};

  ListHttpApiOperationsRequest() {}

  explicit ListHttpApiOperationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerAuthorizationRuleId) {
      res["consumerAuthorizationRuleId"] = boost::any(*consumerAuthorizationRuleId);
    }
    if (method) {
      res["method"] = boost::any(*method);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameLike) {
      res["nameLike"] = boost::any(*nameLike);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (pathLike) {
      res["pathLike"] = boost::any(*pathLike);
    }
    if (withConsumerInEnvironmentId) {
      res["withConsumerInEnvironmentId"] = boost::any(*withConsumerInEnvironmentId);
    }
    if (withConsumerInfoById) {
      res["withConsumerInfoById"] = boost::any(*withConsumerInfoById);
    }
    if (withPluginAttachmentByPluginId) {
      res["withPluginAttachmentByPluginId"] = boost::any(*withPluginAttachmentByPluginId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerAuthorizationRuleId") != m.end() && !m["consumerAuthorizationRuleId"].empty()) {
      consumerAuthorizationRuleId = make_shared<string>(boost::any_cast<string>(m["consumerAuthorizationRuleId"]));
    }
    if (m.find("method") != m.end() && !m["method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["method"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameLike") != m.end() && !m["nameLike"].empty()) {
      nameLike = make_shared<string>(boost::any_cast<string>(m["nameLike"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("pathLike") != m.end() && !m["pathLike"].empty()) {
      pathLike = make_shared<string>(boost::any_cast<string>(m["pathLike"]));
    }
    if (m.find("withConsumerInEnvironmentId") != m.end() && !m["withConsumerInEnvironmentId"].empty()) {
      withConsumerInEnvironmentId = make_shared<string>(boost::any_cast<string>(m["withConsumerInEnvironmentId"]));
    }
    if (m.find("withConsumerInfoById") != m.end() && !m["withConsumerInfoById"].empty()) {
      withConsumerInfoById = make_shared<string>(boost::any_cast<string>(m["withConsumerInfoById"]));
    }
    if (m.find("withPluginAttachmentByPluginId") != m.end() && !m["withPluginAttachmentByPluginId"].empty()) {
      withPluginAttachmentByPluginId = make_shared<string>(boost::any_cast<string>(m["withPluginAttachmentByPluginId"]));
    }
  }


  virtual ~ListHttpApiOperationsRequest() = default;
};
class ListHttpApiOperationsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<HttpApiOperationInfo>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListHttpApiOperationsResponseBodyData() {}

  explicit ListHttpApiOperationsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<HttpApiOperationInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiOperationInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<HttpApiOperationInfo>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListHttpApiOperationsResponseBodyData() = default;
};
class ListHttpApiOperationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListHttpApiOperationsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListHttpApiOperationsResponseBody() {}

  explicit ListHttpApiOperationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListHttpApiOperationsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListHttpApiOperationsResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListHttpApiOperationsResponseBody() = default;
};
class ListHttpApiOperationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHttpApiOperationsResponseBody> body{};

  ListHttpApiOperationsResponse() {}

  explicit ListHttpApiOperationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHttpApiOperationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHttpApiOperationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListHttpApiOperationsResponse() = default;
};
class ListHttpApiRoutesRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumerAuthorizationRuleId{};
  shared_ptr<string> deployStatuses{};
  shared_ptr<string> domainId{};
  shared_ptr<string> environmentId{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> name{};
  shared_ptr<string> nameLike{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pathLike{};
  shared_ptr<bool> withAuthPolicyInfo{};
  shared_ptr<string> withConsumerInfoById{};
  shared_ptr<string> withPluginAttachmentByPluginId{};

  ListHttpApiRoutesRequest() {}

  explicit ListHttpApiRoutesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerAuthorizationRuleId) {
      res["consumerAuthorizationRuleId"] = boost::any(*consumerAuthorizationRuleId);
    }
    if (deployStatuses) {
      res["deployStatuses"] = boost::any(*deployStatuses);
    }
    if (domainId) {
      res["domainId"] = boost::any(*domainId);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameLike) {
      res["nameLike"] = boost::any(*nameLike);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (pathLike) {
      res["pathLike"] = boost::any(*pathLike);
    }
    if (withAuthPolicyInfo) {
      res["withAuthPolicyInfo"] = boost::any(*withAuthPolicyInfo);
    }
    if (withConsumerInfoById) {
      res["withConsumerInfoById"] = boost::any(*withConsumerInfoById);
    }
    if (withPluginAttachmentByPluginId) {
      res["withPluginAttachmentByPluginId"] = boost::any(*withPluginAttachmentByPluginId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerAuthorizationRuleId") != m.end() && !m["consumerAuthorizationRuleId"].empty()) {
      consumerAuthorizationRuleId = make_shared<string>(boost::any_cast<string>(m["consumerAuthorizationRuleId"]));
    }
    if (m.find("deployStatuses") != m.end() && !m["deployStatuses"].empty()) {
      deployStatuses = make_shared<string>(boost::any_cast<string>(m["deployStatuses"]));
    }
    if (m.find("domainId") != m.end() && !m["domainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["domainId"]));
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameLike") != m.end() && !m["nameLike"].empty()) {
      nameLike = make_shared<string>(boost::any_cast<string>(m["nameLike"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("pathLike") != m.end() && !m["pathLike"].empty()) {
      pathLike = make_shared<string>(boost::any_cast<string>(m["pathLike"]));
    }
    if (m.find("withAuthPolicyInfo") != m.end() && !m["withAuthPolicyInfo"].empty()) {
      withAuthPolicyInfo = make_shared<bool>(boost::any_cast<bool>(m["withAuthPolicyInfo"]));
    }
    if (m.find("withConsumerInfoById") != m.end() && !m["withConsumerInfoById"].empty()) {
      withConsumerInfoById = make_shared<string>(boost::any_cast<string>(m["withConsumerInfoById"]));
    }
    if (m.find("withPluginAttachmentByPluginId") != m.end() && !m["withPluginAttachmentByPluginId"].empty()) {
      withPluginAttachmentByPluginId = make_shared<string>(boost::any_cast<string>(m["withPluginAttachmentByPluginId"]));
    }
  }


  virtual ~ListHttpApiRoutesRequest() = default;
};
class ListHttpApiRoutesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<HttpRoute>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListHttpApiRoutesResponseBodyData() {}

  explicit ListHttpApiRoutesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<HttpRoute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpRoute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<HttpRoute>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListHttpApiRoutesResponseBodyData() = default;
};
class ListHttpApiRoutesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListHttpApiRoutesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListHttpApiRoutesResponseBody() {}

  explicit ListHttpApiRoutesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListHttpApiRoutesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListHttpApiRoutesResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListHttpApiRoutesResponseBody() = default;
};
class ListHttpApiRoutesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHttpApiRoutesResponseBody> body{};

  ListHttpApiRoutesResponse() {}

  explicit ListHttpApiRoutesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHttpApiRoutesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHttpApiRoutesResponseBody>(model1);
      }
    }
  }


  virtual ~ListHttpApiRoutesResponse() = default;
};
class ListHttpApisRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> keyword{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> types{};
  shared_ptr<bool> withAPIsPublishedToEnvironment{};
  shared_ptr<string> withAuthPolicyInEnvironmentId{};
  shared_ptr<bool> withAuthPolicyList{};
  shared_ptr<string> withConsumerInfoById{};
  shared_ptr<bool> withEnvironmentInfo{};
  shared_ptr<string> withEnvironmentInfoById{};
  shared_ptr<bool> withIngressInfo{};
  shared_ptr<string> withPluginAttachmentByPluginId{};
  shared_ptr<bool> withPolicyConfigs{};

  ListHttpApisRequest() {}

  explicit ListHttpApisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (types) {
      res["types"] = boost::any(*types);
    }
    if (withAPIsPublishedToEnvironment) {
      res["withAPIsPublishedToEnvironment"] = boost::any(*withAPIsPublishedToEnvironment);
    }
    if (withAuthPolicyInEnvironmentId) {
      res["withAuthPolicyInEnvironmentId"] = boost::any(*withAuthPolicyInEnvironmentId);
    }
    if (withAuthPolicyList) {
      res["withAuthPolicyList"] = boost::any(*withAuthPolicyList);
    }
    if (withConsumerInfoById) {
      res["withConsumerInfoById"] = boost::any(*withConsumerInfoById);
    }
    if (withEnvironmentInfo) {
      res["withEnvironmentInfo"] = boost::any(*withEnvironmentInfo);
    }
    if (withEnvironmentInfoById) {
      res["withEnvironmentInfoById"] = boost::any(*withEnvironmentInfoById);
    }
    if (withIngressInfo) {
      res["withIngressInfo"] = boost::any(*withIngressInfo);
    }
    if (withPluginAttachmentByPluginId) {
      res["withPluginAttachmentByPluginId"] = boost::any(*withPluginAttachmentByPluginId);
    }
    if (withPolicyConfigs) {
      res["withPolicyConfigs"] = boost::any(*withPolicyConfigs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("types") != m.end() && !m["types"].empty()) {
      types = make_shared<string>(boost::any_cast<string>(m["types"]));
    }
    if (m.find("withAPIsPublishedToEnvironment") != m.end() && !m["withAPIsPublishedToEnvironment"].empty()) {
      withAPIsPublishedToEnvironment = make_shared<bool>(boost::any_cast<bool>(m["withAPIsPublishedToEnvironment"]));
    }
    if (m.find("withAuthPolicyInEnvironmentId") != m.end() && !m["withAuthPolicyInEnvironmentId"].empty()) {
      withAuthPolicyInEnvironmentId = make_shared<string>(boost::any_cast<string>(m["withAuthPolicyInEnvironmentId"]));
    }
    if (m.find("withAuthPolicyList") != m.end() && !m["withAuthPolicyList"].empty()) {
      withAuthPolicyList = make_shared<bool>(boost::any_cast<bool>(m["withAuthPolicyList"]));
    }
    if (m.find("withConsumerInfoById") != m.end() && !m["withConsumerInfoById"].empty()) {
      withConsumerInfoById = make_shared<string>(boost::any_cast<string>(m["withConsumerInfoById"]));
    }
    if (m.find("withEnvironmentInfo") != m.end() && !m["withEnvironmentInfo"].empty()) {
      withEnvironmentInfo = make_shared<bool>(boost::any_cast<bool>(m["withEnvironmentInfo"]));
    }
    if (m.find("withEnvironmentInfoById") != m.end() && !m["withEnvironmentInfoById"].empty()) {
      withEnvironmentInfoById = make_shared<string>(boost::any_cast<string>(m["withEnvironmentInfoById"]));
    }
    if (m.find("withIngressInfo") != m.end() && !m["withIngressInfo"].empty()) {
      withIngressInfo = make_shared<bool>(boost::any_cast<bool>(m["withIngressInfo"]));
    }
    if (m.find("withPluginAttachmentByPluginId") != m.end() && !m["withPluginAttachmentByPluginId"].empty()) {
      withPluginAttachmentByPluginId = make_shared<string>(boost::any_cast<string>(m["withPluginAttachmentByPluginId"]));
    }
    if (m.find("withPolicyConfigs") != m.end() && !m["withPolicyConfigs"].empty()) {
      withPolicyConfigs = make_shared<bool>(boost::any_cast<bool>(m["withPolicyConfigs"]));
    }
  }


  virtual ~ListHttpApisRequest() = default;
};
class ListHttpApisResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<HttpApiInfoByName>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListHttpApisResponseBodyData() {}

  explicit ListHttpApisResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<HttpApiInfoByName> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiInfoByName model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<HttpApiInfoByName>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListHttpApisResponseBodyData() = default;
};
class ListHttpApisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListHttpApisResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListHttpApisResponseBody() {}

  explicit ListHttpApisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListHttpApisResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListHttpApisResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListHttpApisResponseBody() = default;
};
class ListHttpApisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHttpApisResponseBody> body{};

  ListHttpApisResponse() {}

  explicit ListHttpApisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHttpApisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHttpApisResponseBody>(model1);
      }
    }
  }


  virtual ~ListHttpApisResponse() = default;
};
class ListPolicyClassesRequest : public Darabonba::Model {
public:
  shared_ptr<string> attachResourceType{};
  shared_ptr<string> direction{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> type{};

  ListPolicyClassesRequest() {}

  explicit ListPolicyClassesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachResourceType) {
      res["attachResourceType"] = boost::any(*attachResourceType);
    }
    if (direction) {
      res["direction"] = boost::any(*direction);
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
    if (m.find("attachResourceType") != m.end() && !m["attachResourceType"].empty()) {
      attachResourceType = make_shared<string>(boost::any_cast<string>(m["attachResourceType"]));
    }
    if (m.find("direction") != m.end() && !m["direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["direction"]));
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


  virtual ~ListPolicyClassesRequest() = default;
};
class ListPolicyClassesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<PolicyClassInfo>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListPolicyClassesResponseBodyData() {}

  explicit ListPolicyClassesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<PolicyClassInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PolicyClassInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<PolicyClassInfo>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListPolicyClassesResponseBodyData() = default;
};
class ListPolicyClassesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListPolicyClassesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListPolicyClassesResponseBody() {}

  explicit ListPolicyClassesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListPolicyClassesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListPolicyClassesResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListPolicyClassesResponseBody() = default;
};
class ListPolicyClassesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPolicyClassesResponseBody> body{};

  ListPolicyClassesResponse() {}

  explicit ListPolicyClassesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPolicyClassesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPolicyClassesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPolicyClassesResponse() = default;
};
class ListServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceTypes{};

  ListServicesRequest() {}

  explicit ListServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["gatewayId"] = boost::any(*gatewayId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    if (sourceTypes) {
      res["sourceTypes"] = boost::any(*sourceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gatewayId") != m.end() && !m["gatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["gatewayId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
    if (m.find("sourceTypes") != m.end() && !m["sourceTypes"].empty()) {
      sourceTypes = make_shared<string>(boost::any_cast<string>(m["sourceTypes"]));
    }
  }


  virtual ~ListServicesRequest() = default;
};
class ListServicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<Service>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListServicesResponseBodyData() {}

  explicit ListServicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<Service> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Service model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<Service>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListServicesResponseBodyData() = default;
};
class ListServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListServicesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListServicesResponseBody() {}

  explicit ListServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListServicesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListServicesResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
class ListSslCertsRequest : public Darabonba::Model {
public:
  shared_ptr<string> certNameLike{};
  shared_ptr<string> domainName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListSslCertsRequest() {}

  explicit ListSslCertsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certNameLike) {
      res["certNameLike"] = boost::any(*certNameLike);
    }
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
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
    if (m.find("certNameLike") != m.end() && !m["certNameLike"].empty()) {
      certNameLike = make_shared<string>(boost::any_cast<string>(m["certNameLike"]));
    }
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListSslCertsRequest() = default;
};
class ListSslCertsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SslCertMetaInfo>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalSize{};

  ListSslCertsResponseBodyData() {}

  explicit ListSslCertsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<SslCertMetaInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SslCertMetaInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<SslCertMetaInfo>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListSslCertsResponseBodyData() = default;
};
class ListSslCertsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListSslCertsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListSslCertsResponseBody() {}

  explicit ListSslCertsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListSslCertsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListSslCertsResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListSslCertsResponseBody() = default;
};
class ListSslCertsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSslCertsResponseBody> body{};

  ListSslCertsResponse() {}

  explicit ListSslCertsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSslCertsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSslCertsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSslCertsResponse() = default;
};
class ListZonesResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> zoneId{};

  ListZonesResponseBodyDataItems() {}

  explicit ListZonesResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneId) {
      res["zoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("zoneId") != m.end() && !m["zoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zoneId"]));
    }
  }


  virtual ~ListZonesResponseBodyDataItems() = default;
};
class ListZonesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListZonesResponseBodyDataItems>> items{};

  ListZonesResponseBodyData() {}

  explicit ListZonesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<ListZonesResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListZonesResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListZonesResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~ListZonesResponseBodyData() = default;
};
class ListZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListZonesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListZonesResponseBody() {}

  explicit ListZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListZonesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListZonesResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListZonesResponseBody() = default;
};
class ListZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListZonesResponseBody> body{};

  ListZonesResponse() {}

  explicit ListZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListZonesResponseBody>(model1);
      }
    }
  }


  virtual ~ListZonesResponse() = default;
};
class RestartGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RestartGatewayResponseBody() {}

  explicit RestartGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~RestartGatewayResponseBody() = default;
};
class RestartGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartGatewayResponseBody> body{};

  RestartGatewayResponse() {}

  explicit RestartGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RestartGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~RestartGatewayResponse() = default;
};
class UndeployHttpApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> environmentId{};
  shared_ptr<string> routeId{};

  UndeployHttpApiRequest() {}

  explicit UndeployHttpApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (routeId) {
      res["routeId"] = boost::any(*routeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("routeId") != m.end() && !m["routeId"].empty()) {
      routeId = make_shared<string>(boost::any_cast<string>(m["routeId"]));
    }
  }


  virtual ~UndeployHttpApiRequest() = default;
};
class UndeployHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UndeployHttpApiResponseBody() {}

  explicit UndeployHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UndeployHttpApiResponseBody() = default;
};
class UndeployHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UndeployHttpApiResponseBody> body{};

  UndeployHttpApiResponse() {}

  explicit UndeployHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UndeployHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UndeployHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~UndeployHttpApiResponse() = default;
};
class UpdateDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> caCertIdentifier{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> clientCACert{};
  shared_ptr<bool> forceHttps{};
  shared_ptr<string> http2Option{};
  shared_ptr<bool> mTLSEnabled{};
  shared_ptr<string> protocol{};
  shared_ptr<TlsCipherSuitesConfig> tlsCipherSuitesConfig{};
  shared_ptr<string> tlsMax{};
  shared_ptr<string> tlsMin{};

  UpdateDomainRequest() {}

  explicit UpdateDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caCertIdentifier) {
      res["caCertIdentifier"] = boost::any(*caCertIdentifier);
    }
    if (certIdentifier) {
      res["certIdentifier"] = boost::any(*certIdentifier);
    }
    if (clientCACert) {
      res["clientCACert"] = boost::any(*clientCACert);
    }
    if (forceHttps) {
      res["forceHttps"] = boost::any(*forceHttps);
    }
    if (http2Option) {
      res["http2Option"] = boost::any(*http2Option);
    }
    if (mTLSEnabled) {
      res["mTLSEnabled"] = boost::any(*mTLSEnabled);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (tlsCipherSuitesConfig) {
      res["tlsCipherSuitesConfig"] = tlsCipherSuitesConfig ? boost::any(tlsCipherSuitesConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tlsMax) {
      res["tlsMax"] = boost::any(*tlsMax);
    }
    if (tlsMin) {
      res["tlsMin"] = boost::any(*tlsMin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caCertIdentifier") != m.end() && !m["caCertIdentifier"].empty()) {
      caCertIdentifier = make_shared<string>(boost::any_cast<string>(m["caCertIdentifier"]));
    }
    if (m.find("certIdentifier") != m.end() && !m["certIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["certIdentifier"]));
    }
    if (m.find("clientCACert") != m.end() && !m["clientCACert"].empty()) {
      clientCACert = make_shared<string>(boost::any_cast<string>(m["clientCACert"]));
    }
    if (m.find("forceHttps") != m.end() && !m["forceHttps"].empty()) {
      forceHttps = make_shared<bool>(boost::any_cast<bool>(m["forceHttps"]));
    }
    if (m.find("http2Option") != m.end() && !m["http2Option"].empty()) {
      http2Option = make_shared<string>(boost::any_cast<string>(m["http2Option"]));
    }
    if (m.find("mTLSEnabled") != m.end() && !m["mTLSEnabled"].empty()) {
      mTLSEnabled = make_shared<bool>(boost::any_cast<bool>(m["mTLSEnabled"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("tlsCipherSuitesConfig") != m.end() && !m["tlsCipherSuitesConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["tlsCipherSuitesConfig"].type()) {
        TlsCipherSuitesConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tlsCipherSuitesConfig"]));
        tlsCipherSuitesConfig = make_shared<TlsCipherSuitesConfig>(model1);
      }
    }
    if (m.find("tlsMax") != m.end() && !m["tlsMax"].empty()) {
      tlsMax = make_shared<string>(boost::any_cast<string>(m["tlsMax"]));
    }
    if (m.find("tlsMin") != m.end() && !m["tlsMin"].empty()) {
      tlsMin = make_shared<string>(boost::any_cast<string>(m["tlsMin"]));
    }
  }


  virtual ~UpdateDomainRequest() = default;
};
class UpdateDomainResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deployRevisionId{};

  UpdateDomainResponseBodyData() {}

  explicit UpdateDomainResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployRevisionId) {
      res["deployRevisionId"] = boost::any(*deployRevisionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deployRevisionId") != m.end() && !m["deployRevisionId"].empty()) {
      deployRevisionId = make_shared<string>(boost::any_cast<string>(m["deployRevisionId"]));
    }
  }


  virtual ~UpdateDomainResponseBodyData() = default;
};
class UpdateDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateDomainResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateDomainResponseBody() {}

  explicit UpdateDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        UpdateDomainResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<UpdateDomainResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
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
class UpdateEnvironmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> description{};

  UpdateEnvironmentRequest() {}

  explicit UpdateEnvironmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
  }


  virtual ~UpdateEnvironmentRequest() = default;
};
class UpdateEnvironmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateEnvironmentResponseBody() {}

  explicit UpdateEnvironmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UpdateEnvironmentResponseBody() = default;
};
class UpdateEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEnvironmentResponseBody> body{};

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
        UpdateEnvironmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEnvironmentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEnvironmentResponse() = default;
};
class UpdateGatewayFeatureRequest : public Darabonba::Model {
public:
  shared_ptr<string> value{};

  UpdateGatewayFeatureRequest() {}

  explicit UpdateGatewayFeatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~UpdateGatewayFeatureRequest() = default;
};
class UpdateGatewayFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateGatewayFeatureResponseBody() {}

  explicit UpdateGatewayFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UpdateGatewayFeatureResponseBody() = default;
};
class UpdateGatewayFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGatewayFeatureResponseBody> body{};

  UpdateGatewayFeatureResponse() {}

  explicit UpdateGatewayFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGatewayFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGatewayFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGatewayFeatureResponse() = default;
};
class UpdateGatewayNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  UpdateGatewayNameRequest() {}

  explicit UpdateGatewayNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateGatewayNameRequest() = default;
};
class UpdateGatewayNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateGatewayNameResponseBody() {}

  explicit UpdateGatewayNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UpdateGatewayNameResponseBody() = default;
};
class UpdateGatewayNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGatewayNameResponseBody> body{};

  UpdateGatewayNameResponse() {}

  explicit UpdateGatewayNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGatewayNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGatewayNameResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGatewayNameResponse() = default;
};
class UpdateHttpApiRequestIngressConfig : public Darabonba::Model {
public:
  shared_ptr<string> environmentId{};
  shared_ptr<string> ingressClass{};
  shared_ptr<bool> overrideIngressIp{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> watchNamespace{};

  UpdateHttpApiRequestIngressConfig() {}

  explicit UpdateHttpApiRequestIngressConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (ingressClass) {
      res["ingressClass"] = boost::any(*ingressClass);
    }
    if (overrideIngressIp) {
      res["overrideIngressIp"] = boost::any(*overrideIngressIp);
    }
    if (sourceId) {
      res["sourceId"] = boost::any(*sourceId);
    }
    if (watchNamespace) {
      res["watchNamespace"] = boost::any(*watchNamespace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("ingressClass") != m.end() && !m["ingressClass"].empty()) {
      ingressClass = make_shared<string>(boost::any_cast<string>(m["ingressClass"]));
    }
    if (m.find("overrideIngressIp") != m.end() && !m["overrideIngressIp"].empty()) {
      overrideIngressIp = make_shared<bool>(boost::any_cast<bool>(m["overrideIngressIp"]));
    }
    if (m.find("sourceId") != m.end() && !m["sourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["sourceId"]));
    }
    if (m.find("watchNamespace") != m.end() && !m["watchNamespace"].empty()) {
      watchNamespace = make_shared<string>(boost::any_cast<string>(m["watchNamespace"]));
    }
  }


  virtual ~UpdateHttpApiRequestIngressConfig() = default;
};
class UpdateHttpApiRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> aiProtocols{};
  shared_ptr<AuthConfig> authConfig{};
  shared_ptr<string> basePath{};
  shared_ptr<vector<HttpApiDeployConfig>> deployConfigs{};
  shared_ptr<string> description{};
  shared_ptr<bool> enableAuth{};
  shared_ptr<UpdateHttpApiRequestIngressConfig> ingressConfig{};
  shared_ptr<vector<string>> protocols{};
  shared_ptr<HttpApiVersionConfig> versionConfig{};

  UpdateHttpApiRequest() {}

  explicit UpdateHttpApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aiProtocols) {
      res["aiProtocols"] = boost::any(*aiProtocols);
    }
    if (authConfig) {
      res["authConfig"] = authConfig ? boost::any(authConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (basePath) {
      res["basePath"] = boost::any(*basePath);
    }
    if (deployConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*deployConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["deployConfigs"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enableAuth) {
      res["enableAuth"] = boost::any(*enableAuth);
    }
    if (ingressConfig) {
      res["ingressConfig"] = ingressConfig ? boost::any(ingressConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (protocols) {
      res["protocols"] = boost::any(*protocols);
    }
    if (versionConfig) {
      res["versionConfig"] = versionConfig ? boost::any(versionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aiProtocols") != m.end() && !m["aiProtocols"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["aiProtocols"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["aiProtocols"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      aiProtocols = make_shared<vector<string>>(toVec1);
    }
    if (m.find("authConfig") != m.end() && !m["authConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["authConfig"].type()) {
        AuthConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authConfig"]));
        authConfig = make_shared<AuthConfig>(model1);
      }
    }
    if (m.find("basePath") != m.end() && !m["basePath"].empty()) {
      basePath = make_shared<string>(boost::any_cast<string>(m["basePath"]));
    }
    if (m.find("deployConfigs") != m.end() && !m["deployConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["deployConfigs"].type()) {
        vector<HttpApiDeployConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["deployConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HttpApiDeployConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deployConfigs = make_shared<vector<HttpApiDeployConfig>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enableAuth") != m.end() && !m["enableAuth"].empty()) {
      enableAuth = make_shared<bool>(boost::any_cast<bool>(m["enableAuth"]));
    }
    if (m.find("ingressConfig") != m.end() && !m["ingressConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ingressConfig"].type()) {
        UpdateHttpApiRequestIngressConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ingressConfig"]));
        ingressConfig = make_shared<UpdateHttpApiRequestIngressConfig>(model1);
      }
    }
    if (m.find("protocols") != m.end() && !m["protocols"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["protocols"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["protocols"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      protocols = make_shared<vector<string>>(toVec1);
    }
    if (m.find("versionConfig") != m.end() && !m["versionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["versionConfig"].type()) {
        HttpApiVersionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["versionConfig"]));
        versionConfig = make_shared<HttpApiVersionConfig>(model1);
      }
    }
  }


  virtual ~UpdateHttpApiRequest() = default;
};
class UpdateHttpApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateHttpApiResponseBody() {}

  explicit UpdateHttpApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UpdateHttpApiResponseBody() = default;
};
class UpdateHttpApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateHttpApiResponseBody> body{};

  UpdateHttpApiResponse() {}

  explicit UpdateHttpApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateHttpApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateHttpApiResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateHttpApiResponse() = default;
};
class UpdateHttpApiOperationRequest : public Darabonba::Model {
public:
  shared_ptr<HttpApiOperation> operation{};

  UpdateHttpApiOperationRequest() {}

  explicit UpdateHttpApiOperationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operation) {
      res["operation"] = operation ? boost::any(operation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operation") != m.end() && !m["operation"].empty()) {
      if (typeid(map<string, boost::any>) == m["operation"].type()) {
        HttpApiOperation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["operation"]));
        operation = make_shared<HttpApiOperation>(model1);
      }
    }
  }


  virtual ~UpdateHttpApiOperationRequest() = default;
};
class UpdateHttpApiOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateHttpApiOperationResponseBody() {}

  explicit UpdateHttpApiOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UpdateHttpApiOperationResponseBody() = default;
};
class UpdateHttpApiOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateHttpApiOperationResponseBody> body{};

  UpdateHttpApiOperationResponse() {}

  explicit UpdateHttpApiOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateHttpApiOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateHttpApiOperationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateHttpApiOperationResponse() = default;
};
class UpdateHttpApiRouteRequestBackendConfigServices : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> version{};
  shared_ptr<long> weight{};

  UpdateHttpApiRouteRequestBackendConfigServices() {}

  explicit UpdateHttpApiRouteRequestBackendConfigServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (serviceId) {
      res["serviceId"] = boost::any(*serviceId);
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
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["port"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("serviceId") != m.end() && !m["serviceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["serviceId"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~UpdateHttpApiRouteRequestBackendConfigServices() = default;
};
class UpdateHttpApiRouteRequestBackendConfig : public Darabonba::Model {
public:
  shared_ptr<string> scene{};
  shared_ptr<vector<UpdateHttpApiRouteRequestBackendConfigServices>> services{};

  UpdateHttpApiRouteRequestBackendConfig() {}

  explicit UpdateHttpApiRouteRequestBackendConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
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
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
    if (m.find("services") != m.end() && !m["services"].empty()) {
      if (typeid(vector<boost::any>) == m["services"].type()) {
        vector<UpdateHttpApiRouteRequestBackendConfigServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateHttpApiRouteRequestBackendConfigServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<UpdateHttpApiRouteRequestBackendConfigServices>>(expect1);
      }
    }
  }


  virtual ~UpdateHttpApiRouteRequestBackendConfig() = default;
};
class UpdateHttpApiRouteRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateHttpApiRouteRequestBackendConfig> backendConfig{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> domainIds{};
  shared_ptr<string> environmentId{};
  shared_ptr<HttpRouteMatch> match{};

  UpdateHttpApiRouteRequest() {}

  explicit UpdateHttpApiRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendConfig) {
      res["backendConfig"] = backendConfig ? boost::any(backendConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domainIds) {
      res["domainIds"] = boost::any(*domainIds);
    }
    if (environmentId) {
      res["environmentId"] = boost::any(*environmentId);
    }
    if (match) {
      res["match"] = match ? boost::any(match->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backendConfig") != m.end() && !m["backendConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["backendConfig"].type()) {
        UpdateHttpApiRouteRequestBackendConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["backendConfig"]));
        backendConfig = make_shared<UpdateHttpApiRouteRequestBackendConfig>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domainIds") != m.end() && !m["domainIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["domainIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["domainIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domainIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("environmentId") != m.end() && !m["environmentId"].empty()) {
      environmentId = make_shared<string>(boost::any_cast<string>(m["environmentId"]));
    }
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(map<string, boost::any>) == m["match"].type()) {
        HttpRouteMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["match"]));
        match = make_shared<HttpRouteMatch>(model1);
      }
    }
  }


  virtual ~UpdateHttpApiRouteRequest() = default;
};
class UpdateHttpApiRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateHttpApiRouteResponseBody() {}

  explicit UpdateHttpApiRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UpdateHttpApiRouteResponseBody() = default;
};
class UpdateHttpApiRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateHttpApiRouteResponseBody> body{};

  UpdateHttpApiRouteResponse() {}

  explicit UpdateHttpApiRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateHttpApiRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateHttpApiRouteResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateHttpApiRouteResponse() = default;
};
class UpdatePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  UpdatePolicyRequest() {}

  explicit UpdatePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdatePolicyRequest() = default;
};
class UpdatePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdatePolicyResponseBody() {}

  explicit UpdatePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UpdatePolicyResponseBody() = default;
};
class UpdatePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePolicyResponseBody> body{};

  UpdatePolicyResponse() {}

  explicit UpdatePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdatePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePolicyResponse() = default;
};
class UpgradeGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> version{};

  UpgradeGatewayRequest() {}

  explicit UpgradeGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~UpgradeGatewayRequest() = default;
};
class UpgradeGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpgradeGatewayResponseBody() {}

  explicit UpgradeGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UpgradeGatewayResponseBody() = default;
};
class UpgradeGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeGatewayResponseBody> body{};

  UpgradeGatewayResponse() {}

  explicit UpgradeGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeGatewayResponse() = default;
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
  AddGatewaySecurityGroupRuleResponse addGatewaySecurityGroupRuleWithOptions(shared_ptr<string> gatewayId,
                                                                             shared_ptr<AddGatewaySecurityGroupRuleRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddGatewaySecurityGroupRuleResponse addGatewaySecurityGroupRule(shared_ptr<string> gatewayId, shared_ptr<AddGatewaySecurityGroupRuleRequest> request);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CreateDomainResponse createDomainWithOptions(shared_ptr<CreateDomainRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDomainResponse createDomain(shared_ptr<CreateDomainRequest> request);
  CreateEnvironmentResponse createEnvironmentWithOptions(shared_ptr<CreateEnvironmentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEnvironmentResponse createEnvironment(shared_ptr<CreateEnvironmentRequest> request);
  CreateHttpApiResponse createHttpApiWithOptions(shared_ptr<CreateHttpApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHttpApiResponse createHttpApi(shared_ptr<CreateHttpApiRequest> request);
  CreateHttpApiOperationResponse createHttpApiOperationWithOptions(shared_ptr<string> httpApiId,
                                                                   shared_ptr<CreateHttpApiOperationRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHttpApiOperationResponse createHttpApiOperation(shared_ptr<string> httpApiId, shared_ptr<CreateHttpApiOperationRequest> request);
  CreateHttpApiRouteResponse createHttpApiRouteWithOptions(shared_ptr<string> httpApiId,
                                                           shared_ptr<CreateHttpApiRouteRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHttpApiRouteResponse createHttpApiRoute(shared_ptr<string> httpApiId, shared_ptr<CreateHttpApiRouteRequest> request);
  CreatePolicyResponse createPolicyWithOptions(shared_ptr<CreatePolicyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyResponse createPolicy(shared_ptr<CreatePolicyRequest> request);
  CreatePolicyAttachmentResponse createPolicyAttachmentWithOptions(shared_ptr<CreatePolicyAttachmentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyAttachmentResponse createPolicyAttachment(shared_ptr<CreatePolicyAttachmentRequest> request);
  CreateServiceResponse createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceResponse createService(shared_ptr<CreateServiceRequest> request);
  DeleteDomainResponse deleteDomainWithOptions(shared_ptr<string> domainId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainResponse deleteDomain(shared_ptr<string> domainId);
  DeleteEnvironmentResponse deleteEnvironmentWithOptions(shared_ptr<string> environmentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEnvironmentResponse deleteEnvironment(shared_ptr<string> environmentId);
  DeleteGatewayResponse deleteGatewayWithOptions(shared_ptr<string> gatewayId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayResponse deleteGateway(shared_ptr<string> gatewayId);
  DeleteGatewaySecurityGroupRuleResponse deleteGatewaySecurityGroupRuleWithOptions(shared_ptr<string> gatewayId,
                                                                                   shared_ptr<string> securityGroupRuleId,
                                                                                   shared_ptr<DeleteGatewaySecurityGroupRuleRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewaySecurityGroupRuleResponse deleteGatewaySecurityGroupRule(shared_ptr<string> gatewayId, shared_ptr<string> securityGroupRuleId, shared_ptr<DeleteGatewaySecurityGroupRuleRequest> request);
  DeleteHttpApiResponse deleteHttpApiWithOptions(shared_ptr<string> httpApiId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHttpApiResponse deleteHttpApi(shared_ptr<string> httpApiId);
  DeleteHttpApiOperationResponse deleteHttpApiOperationWithOptions(shared_ptr<string> httpApiId,
                                                                   shared_ptr<string> operationId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHttpApiOperationResponse deleteHttpApiOperation(shared_ptr<string> httpApiId, shared_ptr<string> operationId);
  DeleteHttpApiRouteResponse deleteHttpApiRouteWithOptions(shared_ptr<string> httpApiId,
                                                           shared_ptr<string> routeId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHttpApiRouteResponse deleteHttpApiRoute(shared_ptr<string> httpApiId, shared_ptr<string> routeId);
  DeletePolicyResponse deletePolicyWithOptions(shared_ptr<string> policyId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyResponse deletePolicy(shared_ptr<string> policyId);
  DeletePolicyAttachmentResponse deletePolicyAttachmentWithOptions(shared_ptr<string> policyAttachmentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyAttachmentResponse deletePolicyAttachment(shared_ptr<string> policyAttachmentId);
  DeployHttpApiResponse deployHttpApiWithOptions(shared_ptr<string> httpApiId,
                                                 shared_ptr<DeployHttpApiRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployHttpApiResponse deployHttpApi(shared_ptr<string> httpApiId, shared_ptr<DeployHttpApiRequest> request);
  ExportHttpApiResponse exportHttpApiWithOptions(shared_ptr<string> httpApiId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportHttpApiResponse exportHttpApi(shared_ptr<string> httpApiId);
  GetDashboardResponse getDashboardWithOptions(shared_ptr<string> gatewayId,
                                               shared_ptr<GetDashboardRequest> tmpReq,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDashboardResponse getDashboard(shared_ptr<string> gatewayId, shared_ptr<GetDashboardRequest> request);
  GetDomainResponse getDomainWithOptions(shared_ptr<string> domainId,
                                         shared_ptr<GetDomainRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDomainResponse getDomain(shared_ptr<string> domainId, shared_ptr<GetDomainRequest> request);
  GetEnvironmentResponse getEnvironmentWithOptions(shared_ptr<string> environmentId,
                                                   shared_ptr<GetEnvironmentRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnvironmentResponse getEnvironment(shared_ptr<string> environmentId, shared_ptr<GetEnvironmentRequest> request);
  GetGatewayResponse getGatewayWithOptions(shared_ptr<string> gatewayId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGatewayResponse getGateway(shared_ptr<string> gatewayId);
  GetHttpApiResponse getHttpApiWithOptions(shared_ptr<string> httpApiId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHttpApiResponse getHttpApi(shared_ptr<string> httpApiId);
  GetHttpApiOperationResponse getHttpApiOperationWithOptions(shared_ptr<string> httpApiId,
                                                             shared_ptr<string> operationId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHttpApiOperationResponse getHttpApiOperation(shared_ptr<string> httpApiId, shared_ptr<string> operationId);
  GetHttpApiRouteResponse getHttpApiRouteWithOptions(shared_ptr<string> httpApiId,
                                                     shared_ptr<string> routeId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHttpApiRouteResponse getHttpApiRoute(shared_ptr<string> httpApiId, shared_ptr<string> routeId);
  GetPolicyResponse getPolicyWithOptions(shared_ptr<string> policyId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPolicyResponse getPolicy(shared_ptr<string> policyId);
  GetPolicyAttachmentResponse getPolicyAttachmentWithOptions(shared_ptr<string> policyAttachmentId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPolicyAttachmentResponse getPolicyAttachment(shared_ptr<string> policyAttachmentId);
  GetResourceOverviewResponse getResourceOverviewWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceOverviewResponse getResourceOverview();
  GetServiceResponse getServiceWithOptions(shared_ptr<string> serviceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceResponse getService(shared_ptr<string> serviceId);
  GetTraceConfigResponse getTraceConfigWithOptions(shared_ptr<string> gatewayId,
                                                   shared_ptr<GetTraceConfigRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTraceConfigResponse getTraceConfig(shared_ptr<string> gatewayId, shared_ptr<GetTraceConfigRequest> request);
  ImportHttpApiResponse importHttpApiWithOptions(shared_ptr<ImportHttpApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportHttpApiResponse importHttpApi(shared_ptr<ImportHttpApiRequest> request);
  ListDomainsResponse listDomainsWithOptions(shared_ptr<ListDomainsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDomainsResponse listDomains(shared_ptr<ListDomainsRequest> request);
  ListEnvironmentsResponse listEnvironmentsWithOptions(shared_ptr<ListEnvironmentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnvironmentsResponse listEnvironments(shared_ptr<ListEnvironmentsRequest> request);
  ListGatewaysResponse listGatewaysWithOptions(shared_ptr<ListGatewaysRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGatewaysResponse listGateways(shared_ptr<ListGatewaysRequest> request);
  ListHttpApiOperationsResponse listHttpApiOperationsWithOptions(shared_ptr<string> httpApiId,
                                                                 shared_ptr<ListHttpApiOperationsRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHttpApiOperationsResponse listHttpApiOperations(shared_ptr<string> httpApiId, shared_ptr<ListHttpApiOperationsRequest> request);
  ListHttpApiRoutesResponse listHttpApiRoutesWithOptions(shared_ptr<string> httpApiId,
                                                         shared_ptr<ListHttpApiRoutesRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHttpApiRoutesResponse listHttpApiRoutes(shared_ptr<string> httpApiId, shared_ptr<ListHttpApiRoutesRequest> request);
  ListHttpApisResponse listHttpApisWithOptions(shared_ptr<ListHttpApisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHttpApisResponse listHttpApis(shared_ptr<ListHttpApisRequest> request);
  ListPolicyClassesResponse listPolicyClassesWithOptions(shared_ptr<ListPolicyClassesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicyClassesResponse listPolicyClasses(shared_ptr<ListPolicyClassesRequest> request);
  ListServicesResponse listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServicesResponse listServices(shared_ptr<ListServicesRequest> request);
  ListSslCertsResponse listSslCertsWithOptions(shared_ptr<ListSslCertsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSslCertsResponse listSslCerts(shared_ptr<ListSslCertsRequest> request);
  ListZonesResponse listZonesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListZonesResponse listZones();
  RestartGatewayResponse restartGatewayWithOptions(shared_ptr<string> gatewayId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartGatewayResponse restartGateway(shared_ptr<string> gatewayId);
  UndeployHttpApiResponse undeployHttpApiWithOptions(shared_ptr<string> httpApiId,
                                                     shared_ptr<UndeployHttpApiRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UndeployHttpApiResponse undeployHttpApi(shared_ptr<string> httpApiId, shared_ptr<UndeployHttpApiRequest> request);
  UpdateDomainResponse updateDomainWithOptions(shared_ptr<string> domainId,
                                               shared_ptr<UpdateDomainRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDomainResponse updateDomain(shared_ptr<string> domainId, shared_ptr<UpdateDomainRequest> request);
  UpdateEnvironmentResponse updateEnvironmentWithOptions(shared_ptr<string> environmentId,
                                                         shared_ptr<UpdateEnvironmentRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEnvironmentResponse updateEnvironment(shared_ptr<string> environmentId, shared_ptr<UpdateEnvironmentRequest> request);
  UpdateGatewayFeatureResponse updateGatewayFeatureWithOptions(shared_ptr<string> gatewayId,
                                                               shared_ptr<string> name,
                                                               shared_ptr<UpdateGatewayFeatureRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGatewayFeatureResponse updateGatewayFeature(shared_ptr<string> gatewayId, shared_ptr<string> name, shared_ptr<UpdateGatewayFeatureRequest> request);
  UpdateGatewayNameResponse updateGatewayNameWithOptions(shared_ptr<string> gatewayId,
                                                         shared_ptr<UpdateGatewayNameRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGatewayNameResponse updateGatewayName(shared_ptr<string> gatewayId, shared_ptr<UpdateGatewayNameRequest> request);
  UpdateHttpApiResponse updateHttpApiWithOptions(shared_ptr<string> httpApiId,
                                                 shared_ptr<UpdateHttpApiRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHttpApiResponse updateHttpApi(shared_ptr<string> httpApiId, shared_ptr<UpdateHttpApiRequest> request);
  UpdateHttpApiOperationResponse updateHttpApiOperationWithOptions(shared_ptr<string> httpApiId,
                                                                   shared_ptr<string> operationId,
                                                                   shared_ptr<UpdateHttpApiOperationRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHttpApiOperationResponse updateHttpApiOperation(shared_ptr<string> httpApiId, shared_ptr<string> operationId, shared_ptr<UpdateHttpApiOperationRequest> request);
  UpdateHttpApiRouteResponse updateHttpApiRouteWithOptions(shared_ptr<string> httpApiId,
                                                           shared_ptr<string> routeId,
                                                           shared_ptr<UpdateHttpApiRouteRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHttpApiRouteResponse updateHttpApiRoute(shared_ptr<string> httpApiId, shared_ptr<string> routeId, shared_ptr<UpdateHttpApiRouteRequest> request);
  UpdatePolicyResponse updatePolicyWithOptions(shared_ptr<string> policyId,
                                               shared_ptr<UpdatePolicyRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePolicyResponse updatePolicy(shared_ptr<string> policyId, shared_ptr<UpdatePolicyRequest> request);
  UpgradeGatewayResponse upgradeGatewayWithOptions(shared_ptr<string> gatewayId,
                                                   shared_ptr<UpgradeGatewayRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeGatewayResponse upgradeGateway(shared_ptr<string> gatewayId, shared_ptr<UpgradeGatewayRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_APIG20240327

#endif
