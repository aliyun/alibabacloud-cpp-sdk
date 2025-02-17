// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DATAANALYSISGBI20240823_H_
#define ALIBABACLOUD_DATAANALYSISGBI20240823_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_DataAnalysisGBI20240823 {
class BatchDeleteSynonymsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> synonymIdKeys{};
  shared_ptr<string> workspaceId{};

  BatchDeleteSynonymsRequest() {}

  explicit BatchDeleteSynonymsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (synonymIdKeys) {
      res["synonymIdKeys"] = boost::any(*synonymIdKeys);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("synonymIdKeys") != m.end() && !m["synonymIdKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["synonymIdKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["synonymIdKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      synonymIdKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~BatchDeleteSynonymsRequest() = default;
};
class BatchDeleteSynonymsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchDeleteSynonymsResponseBody() {}

  explicit BatchDeleteSynonymsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~BatchDeleteSynonymsResponseBody() = default;
};
class BatchDeleteSynonymsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchDeleteSynonymsResponseBody> body{};

  BatchDeleteSynonymsResponse() {}

  explicit BatchDeleteSynonymsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchDeleteSynonymsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchDeleteSynonymsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchDeleteSynonymsResponse() = default;
};
class CancelDatasourceAuthorizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  CancelDatasourceAuthorizationRequest() {}

  explicit CancelDatasourceAuthorizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~CancelDatasourceAuthorizationRequest() = default;
};
class CancelDatasourceAuthorizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CancelDatasourceAuthorizationResponseBody() {}

  explicit CancelDatasourceAuthorizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CancelDatasourceAuthorizationResponseBody() = default;
};
class CancelDatasourceAuthorizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelDatasourceAuthorizationResponseBody> body{};

  CancelDatasourceAuthorizationResponse() {}

  explicit CancelDatasourceAuthorizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelDatasourceAuthorizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelDatasourceAuthorizationResponseBody>(model1);
      }
    }
  }


  virtual ~CancelDatasourceAuthorizationResponse() = default;
};
class CreateBusinessLogicRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> type{};
  shared_ptr<string> workspaceId{};

  CreateBusinessLogicRequest() {}

  explicit CreateBusinessLogicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~CreateBusinessLogicRequest() = default;
};
class CreateBusinessLogicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateBusinessLogicResponseBody() {}

  explicit CreateBusinessLogicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateBusinessLogicResponseBody() = default;
};
class CreateBusinessLogicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBusinessLogicResponseBody> body{};

  CreateBusinessLogicResponse() {}

  explicit CreateBusinessLogicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateBusinessLogicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBusinessLogicResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBusinessLogicResponse() = default;
};
class CreateDatasourceAuthorizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<long> type{};
  shared_ptr<string> url{};
  shared_ptr<string> userName{};
  shared_ptr<string> vdbId{};
  shared_ptr<string> workspaceId{};

  CreateDatasourceAuthorizationRequest() {}

  explicit CreateDatasourceAuthorizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    if (vdbId) {
      res["vdbId"] = boost::any(*vdbId);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
    if (m.find("vdbId") != m.end() && !m["vdbId"].empty()) {
      vdbId = make_shared<string>(boost::any_cast<string>(m["vdbId"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~CreateDatasourceAuthorizationRequest() = default;
};
class CreateDatasourceAuthorizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDatasourceAuthorizationResponseBody() {}

  explicit CreateDatasourceAuthorizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateDatasourceAuthorizationResponseBody() = default;
};
class CreateDatasourceAuthorizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDatasourceAuthorizationResponseBody> body{};

  CreateDatasourceAuthorizationResponse() {}

  explicit CreateDatasourceAuthorizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDatasourceAuthorizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatasourceAuthorizationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatasourceAuthorizationResponse() = default;
};
class CreateSynonymsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> columns{};
  shared_ptr<string> word{};
  shared_ptr<vector<string>> wordSynonyms{};
  shared_ptr<string> workspaceId{};

  CreateSynonymsRequest() {}

  explicit CreateSynonymsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      res["columns"] = boost::any(*columns);
    }
    if (word) {
      res["word"] = boost::any(*word);
    }
    if (wordSynonyms) {
      res["wordSynonyms"] = boost::any(*wordSynonyms);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["columns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["columns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      columns = make_shared<vector<string>>(toVec1);
    }
    if (m.find("word") != m.end() && !m["word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["word"]));
    }
    if (m.find("wordSynonyms") != m.end() && !m["wordSynonyms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["wordSynonyms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["wordSynonyms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      wordSynonyms = make_shared<vector<string>>(toVec1);
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~CreateSynonymsRequest() = default;
};
class CreateSynonymsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateSynonymsResponseBody() {}

  explicit CreateSynonymsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateSynonymsResponseBody() = default;
};
class CreateSynonymsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSynonymsResponseBody> body{};

  CreateSynonymsResponse() {}

  explicit CreateSynonymsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSynonymsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSynonymsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSynonymsResponse() = default;
};
class CreateVirtualDatasourceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<long> type{};
  shared_ptr<string> workspaceId{};

  CreateVirtualDatasourceInstanceRequest() {}

  explicit CreateVirtualDatasourceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
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
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~CreateVirtualDatasourceInstanceRequest() = default;
};
class CreateVirtualDatasourceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateVirtualDatasourceInstanceResponseBody() {}

  explicit CreateVirtualDatasourceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateVirtualDatasourceInstanceResponseBody() = default;
};
class CreateVirtualDatasourceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVirtualDatasourceInstanceResponseBody> body{};

  CreateVirtualDatasourceInstanceResponse() {}

  explicit CreateVirtualDatasourceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateVirtualDatasourceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVirtualDatasourceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVirtualDatasourceInstanceResponse() = default;
};
class DeleteBusinessLogicRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> businessLogicIdKeys{};
  shared_ptr<string> workspaceId{};

  DeleteBusinessLogicRequest() {}

  explicit DeleteBusinessLogicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessLogicIdKeys) {
      res["businessLogicIdKeys"] = boost::any(*businessLogicIdKeys);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("businessLogicIdKeys") != m.end() && !m["businessLogicIdKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["businessLogicIdKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["businessLogicIdKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      businessLogicIdKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~DeleteBusinessLogicRequest() = default;
};
class DeleteBusinessLogicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteBusinessLogicResponseBody() {}

  explicit DeleteBusinessLogicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteBusinessLogicResponseBody() = default;
};
class DeleteBusinessLogicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteBusinessLogicResponseBody> body{};

  DeleteBusinessLogicResponse() {}

  explicit DeleteBusinessLogicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteBusinessLogicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBusinessLogicResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBusinessLogicResponse() = default;
};
class DeleteColumnRequest : public Darabonba::Model {
public:
  shared_ptr<string> columnIdKey{};
  shared_ptr<string> workspaceId{};

  DeleteColumnRequest() {}

  explicit DeleteColumnRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnIdKey) {
      res["columnIdKey"] = boost::any(*columnIdKey);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columnIdKey") != m.end() && !m["columnIdKey"].empty()) {
      columnIdKey = make_shared<string>(boost::any_cast<string>(m["columnIdKey"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~DeleteColumnRequest() = default;
};
class DeleteColumnResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteColumnResponseBody() {}

  explicit DeleteColumnResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteColumnResponseBody() = default;
};
class DeleteColumnResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteColumnResponseBody> body{};

  DeleteColumnResponse() {}

  explicit DeleteColumnResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteColumnResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteColumnResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteColumnResponse() = default;
};
class DeleteSelectedTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> tableIdKey{};
  shared_ptr<string> workspaceId{};

  DeleteSelectedTableRequest() {}

  explicit DeleteSelectedTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableIdKey) {
      res["tableIdKey"] = boost::any(*tableIdKey);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tableIdKey") != m.end() && !m["tableIdKey"].empty()) {
      tableIdKey = make_shared<string>(boost::any_cast<string>(m["tableIdKey"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~DeleteSelectedTableRequest() = default;
};
class DeleteSelectedTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteSelectedTableResponseBody() {}

  explicit DeleteSelectedTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteSelectedTableResponseBody() = default;
};
class DeleteSelectedTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSelectedTableResponseBody> body{};

  DeleteSelectedTableResponse() {}

  explicit DeleteSelectedTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSelectedTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSelectedTableResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSelectedTableResponse() = default;
};
class DeleteVirtualDatasourceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> vdbId{};
  shared_ptr<string> workspaceId{};

  DeleteVirtualDatasourceInstanceRequest() {}

  explicit DeleteVirtualDatasourceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vdbId) {
      res["vdbId"] = boost::any(*vdbId);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vdbId") != m.end() && !m["vdbId"].empty()) {
      vdbId = make_shared<string>(boost::any_cast<string>(m["vdbId"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~DeleteVirtualDatasourceInstanceRequest() = default;
};
class DeleteVirtualDatasourceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteVirtualDatasourceInstanceResponseBody() {}

  explicit DeleteVirtualDatasourceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteVirtualDatasourceInstanceResponseBody() = default;
};
class DeleteVirtualDatasourceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVirtualDatasourceInstanceResponseBody> body{};

  DeleteVirtualDatasourceInstanceResponse() {}

  explicit DeleteVirtualDatasourceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteVirtualDatasourceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVirtualDatasourceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVirtualDatasourceInstanceResponse() = default;
};
class ListBusinessLogicRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> workspaceId{};

  ListBusinessLogicRequest() {}

  explicit ListBusinessLogicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
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
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListBusinessLogicRequest() = default;
};
class ListBusinessLogicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListBusinessLogicResponseBody() {}

  explicit ListBusinessLogicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListBusinessLogicResponseBody() = default;
};
class ListBusinessLogicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBusinessLogicResponseBody> body{};

  ListBusinessLogicResponse() {}

  explicit ListBusinessLogicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListBusinessLogicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBusinessLogicResponseBody>(model1);
      }
    }
  }


  virtual ~ListBusinessLogicResponse() = default;
};
class ListColumnRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<long> nextToken{};
  shared_ptr<string> tableIdKey{};
  shared_ptr<string> workspaceId{};

  ListColumnRequest() {}

  explicit ListColumnRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tableIdKey) {
      res["tableIdKey"] = boost::any(*tableIdKey);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<long>(boost::any_cast<long>(m["nextToken"]));
    }
    if (m.find("tableIdKey") != m.end() && !m["tableIdKey"].empty()) {
      tableIdKey = make_shared<string>(boost::any_cast<string>(m["tableIdKey"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListColumnRequest() = default;
};
class ListColumnResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListColumnResponseBody() {}

  explicit ListColumnResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListColumnResponseBody() = default;
};
class ListColumnResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListColumnResponseBody> body{};

  ListColumnResponse() {}

  explicit ListColumnResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListColumnResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListColumnResponseBody>(model1);
      }
    }
  }


  virtual ~ListColumnResponse() = default;
};
class ListEnumMappingRequest : public Darabonba::Model {
public:
  shared_ptr<string> columnIdKey{};
  shared_ptr<string> tableIdKey{};
  shared_ptr<string> workspaceId{};

  ListEnumMappingRequest() {}

  explicit ListEnumMappingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnIdKey) {
      res["columnIdKey"] = boost::any(*columnIdKey);
    }
    if (tableIdKey) {
      res["tableIdKey"] = boost::any(*tableIdKey);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columnIdKey") != m.end() && !m["columnIdKey"].empty()) {
      columnIdKey = make_shared<string>(boost::any_cast<string>(m["columnIdKey"]));
    }
    if (m.find("tableIdKey") != m.end() && !m["tableIdKey"].empty()) {
      tableIdKey = make_shared<string>(boost::any_cast<string>(m["tableIdKey"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListEnumMappingRequest() = default;
};
class ListEnumMappingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListEnumMappingResponseBody() {}

  explicit ListEnumMappingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListEnumMappingResponseBody() = default;
};
class ListEnumMappingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEnumMappingResponseBody> body{};

  ListEnumMappingResponse() {}

  explicit ListEnumMappingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEnumMappingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnumMappingResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnumMappingResponse() = default;
};
class ListSelectedTablesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> workspaceId{};

  ListSelectedTablesRequest() {}

  explicit ListSelectedTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
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
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListSelectedTablesRequest() = default;
};
class ListSelectedTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListSelectedTablesResponseBody() {}

  explicit ListSelectedTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListSelectedTablesResponseBody() = default;
};
class ListSelectedTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSelectedTablesResponseBody> body{};

  ListSelectedTablesResponse() {}

  explicit ListSelectedTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSelectedTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSelectedTablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSelectedTablesResponse() = default;
};
class ListSynonymsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> workspaceId{};

  ListSynonymsRequest() {}

  explicit ListSynonymsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
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
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListSynonymsRequest() = default;
};
class ListSynonymsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListSynonymsResponseBody() {}

  explicit ListSynonymsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListSynonymsResponseBody() = default;
};
class ListSynonymsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSynonymsResponseBody> body{};

  ListSynonymsResponse() {}

  explicit ListSynonymsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSynonymsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSynonymsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSynonymsResponse() = default;
};
class ListVirtualDatasourceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> workspaceId{};

  ListVirtualDatasourceInstanceRequest() {}

  explicit ListVirtualDatasourceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
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
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListVirtualDatasourceInstanceRequest() = default;
};
class ListVirtualDatasourceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListVirtualDatasourceInstanceResponseBody() {}

  explicit ListVirtualDatasourceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListVirtualDatasourceInstanceResponseBody() = default;
};
class ListVirtualDatasourceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVirtualDatasourceInstanceResponseBody> body{};

  ListVirtualDatasourceInstanceResponse() {}

  explicit ListVirtualDatasourceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVirtualDatasourceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVirtualDatasourceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ListVirtualDatasourceInstanceResponse() = default;
};
class RecoverColumnRequest : public Darabonba::Model {
public:
  shared_ptr<string> columnIdKey{};
  shared_ptr<string> tableIdKey{};
  shared_ptr<string> workspaceId{};

  RecoverColumnRequest() {}

  explicit RecoverColumnRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnIdKey) {
      res["columnIdKey"] = boost::any(*columnIdKey);
    }
    if (tableIdKey) {
      res["tableIdKey"] = boost::any(*tableIdKey);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columnIdKey") != m.end() && !m["columnIdKey"].empty()) {
      columnIdKey = make_shared<string>(boost::any_cast<string>(m["columnIdKey"]));
    }
    if (m.find("tableIdKey") != m.end() && !m["tableIdKey"].empty()) {
      tableIdKey = make_shared<string>(boost::any_cast<string>(m["tableIdKey"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~RecoverColumnRequest() = default;
};
class RecoverColumnResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RecoverColumnResponseBody() {}

  explicit RecoverColumnResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RecoverColumnResponseBody() = default;
};
class RecoverColumnResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecoverColumnResponseBody> body{};

  RecoverColumnResponse() {}

  explicit RecoverColumnResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RecoverColumnResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecoverColumnResponseBody>(model1);
      }
    }
  }


  virtual ~RecoverColumnResponse() = default;
};
class ResyncTableRequest : public Darabonba::Model {
public:
  shared_ptr<bool> keep{};
  shared_ptr<string> tableIdKey{};
  shared_ptr<string> workspaceId{};

  ResyncTableRequest() {}

  explicit ResyncTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keep) {
      res["keep"] = boost::any(*keep);
    }
    if (tableIdKey) {
      res["tableIdKey"] = boost::any(*tableIdKey);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keep") != m.end() && !m["keep"].empty()) {
      keep = make_shared<bool>(boost::any_cast<bool>(m["keep"]));
    }
    if (m.find("tableIdKey") != m.end() && !m["tableIdKey"].empty()) {
      tableIdKey = make_shared<string>(boost::any_cast<string>(m["tableIdKey"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ResyncTableRequest() = default;
};
class ResyncTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ResyncTableResponseBody() {}

  explicit ResyncTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ResyncTableResponseBody() = default;
};
class ResyncTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResyncTableResponseBody> body{};

  ResyncTableResponse() {}

  explicit ResyncTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResyncTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResyncTableResponseBody>(model1);
      }
    }
  }


  virtual ~ResyncTableResponse() = default;
};
class RunDataAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dataRole{};
  shared_ptr<bool> generateSqlOnly{};
  shared_ptr<string> query{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> specificationType{};
  shared_ptr<boost::any> userParams{};

  RunDataAnalysisRequest() {}

  explicit RunDataAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataRole) {
      res["dataRole"] = boost::any(*dataRole);
    }
    if (generateSqlOnly) {
      res["generateSqlOnly"] = boost::any(*generateSqlOnly);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (specificationType) {
      res["specificationType"] = boost::any(*specificationType);
    }
    if (userParams) {
      res["userParams"] = boost::any(*userParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataRole") != m.end() && !m["dataRole"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dataRole"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dataRole"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dataRole = make_shared<vector<string>>(toVec1);
    }
    if (m.find("generateSqlOnly") != m.end() && !m["generateSqlOnly"].empty()) {
      generateSqlOnly = make_shared<bool>(boost::any_cast<bool>(m["generateSqlOnly"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("specificationType") != m.end() && !m["specificationType"].empty()) {
      specificationType = make_shared<string>(boost::any_cast<string>(m["specificationType"]));
    }
    if (m.find("userParams") != m.end() && !m["userParams"].empty()) {
      userParams = make_shared<boost::any>(boost::any_cast<boost::any>(m["userParams"]));
    }
  }


  virtual ~RunDataAnalysisRequest() = default;
};
class RunDataAnalysisResponseBodyDataSqlData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> column{};
  shared_ptr<vector<map<string, boost::any>>> data{};

  RunDataAnalysisResponseBodyDataSqlData() {}

  explicit RunDataAnalysisResponseBodyDataSqlData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      res["column"] = boost::any(*column);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("column") != m.end() && !m["column"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["column"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["column"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      column = make_shared<vector<string>>(toVec1);
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~RunDataAnalysisResponseBodyDataSqlData() = default;
};
class RunDataAnalysisResponseBodyDataVisualizationData : public Darabonba::Model {
public:
  shared_ptr<string> plotType{};
  shared_ptr<vector<string>> xAxis{};
  shared_ptr<vector<string>> yAxis{};

  RunDataAnalysisResponseBodyDataVisualizationData() {}

  explicit RunDataAnalysisResponseBodyDataVisualizationData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (plotType) {
      res["plotType"] = boost::any(*plotType);
    }
    if (xAxis) {
      res["xAxis"] = boost::any(*xAxis);
    }
    if (yAxis) {
      res["yAxis"] = boost::any(*yAxis);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("plotType") != m.end() && !m["plotType"].empty()) {
      plotType = make_shared<string>(boost::any_cast<string>(m["plotType"]));
    }
    if (m.find("xAxis") != m.end() && !m["xAxis"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["xAxis"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["xAxis"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      xAxis = make_shared<vector<string>>(toVec1);
    }
    if (m.find("yAxis") != m.end() && !m["yAxis"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["yAxis"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["yAxis"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      yAxis = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RunDataAnalysisResponseBodyDataVisualizationData() = default;
};
class RunDataAnalysisResponseBodyDataVisualization : public Darabonba::Model {
public:
  shared_ptr<RunDataAnalysisResponseBodyDataVisualizationData> data{};
  shared_ptr<string> text{};

  RunDataAnalysisResponseBodyDataVisualization() {}

  explicit RunDataAnalysisResponseBodyDataVisualization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RunDataAnalysisResponseBodyDataVisualizationData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RunDataAnalysisResponseBodyDataVisualizationData>(model1);
      }
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunDataAnalysisResponseBodyDataVisualization() = default;
};
class RunDataAnalysisResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> evidence{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> rewrite{};
  shared_ptr<vector<string>> selector{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> sql{};
  shared_ptr<RunDataAnalysisResponseBodyDataSqlData> sqlData{};
  shared_ptr<string> sqlError{};
  shared_ptr<RunDataAnalysisResponseBodyDataVisualization> visualization{};

  RunDataAnalysisResponseBodyData() {}

  explicit RunDataAnalysisResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (evidence) {
      res["evidence"] = boost::any(*evidence);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (rewrite) {
      res["rewrite"] = boost::any(*rewrite);
    }
    if (selector) {
      res["selector"] = boost::any(*selector);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (sql) {
      res["sql"] = boost::any(*sql);
    }
    if (sqlData) {
      res["sqlData"] = sqlData ? boost::any(sqlData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sqlError) {
      res["sqlError"] = boost::any(*sqlError);
    }
    if (visualization) {
      res["visualization"] = visualization ? boost::any(visualization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("evidence") != m.end() && !m["evidence"].empty()) {
      evidence = make_shared<string>(boost::any_cast<string>(m["evidence"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("rewrite") != m.end() && !m["rewrite"].empty()) {
      rewrite = make_shared<string>(boost::any_cast<string>(m["rewrite"]));
    }
    if (m.find("selector") != m.end() && !m["selector"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["selector"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["selector"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      selector = make_shared<vector<string>>(toVec1);
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("sql") != m.end() && !m["sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["sql"]));
    }
    if (m.find("sqlData") != m.end() && !m["sqlData"].empty()) {
      if (typeid(map<string, boost::any>) == m["sqlData"].type()) {
        RunDataAnalysisResponseBodyDataSqlData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sqlData"]));
        sqlData = make_shared<RunDataAnalysisResponseBodyDataSqlData>(model1);
      }
    }
    if (m.find("sqlError") != m.end() && !m["sqlError"].empty()) {
      sqlError = make_shared<string>(boost::any_cast<string>(m["sqlError"]));
    }
    if (m.find("visualization") != m.end() && !m["visualization"].empty()) {
      if (typeid(map<string, boost::any>) == m["visualization"].type()) {
        RunDataAnalysisResponseBodyDataVisualization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["visualization"]));
        visualization = make_shared<RunDataAnalysisResponseBodyDataVisualization>(model1);
      }
    }
  }


  virtual ~RunDataAnalysisResponseBodyData() = default;
};
class RunDataAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RunDataAnalysisResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};

  RunDataAnalysisResponseBody() {}

  explicit RunDataAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RunDataAnalysisResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RunDataAnalysisResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~RunDataAnalysisResponseBody() = default;
};
class RunDataAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunDataAnalysisResponseBody> body{};

  RunDataAnalysisResponse() {}

  explicit RunDataAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunDataAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunDataAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~RunDataAnalysisResponse() = default;
};
class RunDataResultAnalysisRequestSqlData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> column{};
  shared_ptr<vector<map<string, string>>> data{};

  RunDataResultAnalysisRequestSqlData() {}

  explicit RunDataResultAnalysisRequestSqlData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      res["column"] = boost::any(*column);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("column") != m.end() && !m["column"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["column"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["column"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      column = make_shared<vector<string>>(toVec1);
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, string>>>(toVec1);
    }
  }


  virtual ~RunDataResultAnalysisRequestSqlData() = default;
};
class RunDataResultAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> analysisMode{};
  shared_ptr<string> requestId{};
  shared_ptr<RunDataResultAnalysisRequestSqlData> sqlData{};
  shared_ptr<string> workspaceId{};

  RunDataResultAnalysisRequest() {}

  explicit RunDataResultAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisMode) {
      res["analysisMode"] = boost::any(*analysisMode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sqlData) {
      res["sqlData"] = sqlData ? boost::any(sqlData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysisMode") != m.end() && !m["analysisMode"].empty()) {
      analysisMode = make_shared<string>(boost::any_cast<string>(m["analysisMode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sqlData") != m.end() && !m["sqlData"].empty()) {
      if (typeid(map<string, boost::any>) == m["sqlData"].type()) {
        RunDataResultAnalysisRequestSqlData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sqlData"]));
        sqlData = make_shared<RunDataResultAnalysisRequestSqlData>(model1);
      }
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~RunDataResultAnalysisRequest() = default;
};
class RunDataResultAnalysisResponseBodyDataVisualizationData : public Darabonba::Model {
public:
  shared_ptr<string> plotType{};
  shared_ptr<vector<string>> xAxis{};
  shared_ptr<vector<string>> yAxis{};

  RunDataResultAnalysisResponseBodyDataVisualizationData() {}

  explicit RunDataResultAnalysisResponseBodyDataVisualizationData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (plotType) {
      res["plotType"] = boost::any(*plotType);
    }
    if (xAxis) {
      res["xAxis"] = boost::any(*xAxis);
    }
    if (yAxis) {
      res["yAxis"] = boost::any(*yAxis);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("plotType") != m.end() && !m["plotType"].empty()) {
      plotType = make_shared<string>(boost::any_cast<string>(m["plotType"]));
    }
    if (m.find("xAxis") != m.end() && !m["xAxis"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["xAxis"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["xAxis"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      xAxis = make_shared<vector<string>>(toVec1);
    }
    if (m.find("yAxis") != m.end() && !m["yAxis"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["yAxis"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["yAxis"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      yAxis = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RunDataResultAnalysisResponseBodyDataVisualizationData() = default;
};
class RunDataResultAnalysisResponseBodyDataVisualization : public Darabonba::Model {
public:
  shared_ptr<RunDataResultAnalysisResponseBodyDataVisualizationData> data{};
  shared_ptr<string> text{};

  RunDataResultAnalysisResponseBodyDataVisualization() {}

  explicit RunDataResultAnalysisResponseBodyDataVisualization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RunDataResultAnalysisResponseBodyDataVisualizationData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RunDataResultAnalysisResponseBodyDataVisualizationData>(model1);
      }
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunDataResultAnalysisResponseBodyDataVisualization() = default;
};
class RunDataResultAnalysisResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> requestId{};
  shared_ptr<string> rewrite{};
  shared_ptr<string> sql{};
  shared_ptr<RunDataResultAnalysisResponseBodyDataVisualization> visualization{};

  RunDataResultAnalysisResponseBodyData() {}

  explicit RunDataResultAnalysisResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (rewrite) {
      res["rewrite"] = boost::any(*rewrite);
    }
    if (sql) {
      res["sql"] = boost::any(*sql);
    }
    if (visualization) {
      res["visualization"] = visualization ? boost::any(visualization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("rewrite") != m.end() && !m["rewrite"].empty()) {
      rewrite = make_shared<string>(boost::any_cast<string>(m["rewrite"]));
    }
    if (m.find("sql") != m.end() && !m["sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["sql"]));
    }
    if (m.find("visualization") != m.end() && !m["visualization"].empty()) {
      if (typeid(map<string, boost::any>) == m["visualization"].type()) {
        RunDataResultAnalysisResponseBodyDataVisualization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["visualization"]));
        visualization = make_shared<RunDataResultAnalysisResponseBodyDataVisualization>(model1);
      }
    }
  }


  virtual ~RunDataResultAnalysisResponseBodyData() = default;
};
class RunDataResultAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<RunDataResultAnalysisResponseBodyData> data{};

  RunDataResultAnalysisResponseBody() {}

  explicit RunDataResultAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RunDataResultAnalysisResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RunDataResultAnalysisResponseBodyData>(model1);
      }
    }
  }


  virtual ~RunDataResultAnalysisResponseBody() = default;
};
class RunDataResultAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunDataResultAnalysisResponseBody> body{};

  RunDataResultAnalysisResponse() {}

  explicit RunDataResultAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunDataResultAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunDataResultAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~RunDataResultAnalysisResponse() = default;
};
class RunSqlGenerationRequest : public Darabonba::Model {
public:
  shared_ptr<string> query{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> specificationType{};
  shared_ptr<string> workspaceId{};

  RunSqlGenerationRequest() {}

  explicit RunSqlGenerationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (specificationType) {
      res["specificationType"] = boost::any(*specificationType);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("specificationType") != m.end() && !m["specificationType"].empty()) {
      specificationType = make_shared<string>(boost::any_cast<string>(m["specificationType"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~RunSqlGenerationRequest() = default;
};
class RunSqlGenerationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> evidence{};
  shared_ptr<string> requestId{};
  shared_ptr<string> rewrite{};
  shared_ptr<vector<string>> selector{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> sql{};
  shared_ptr<string> sqlError{};

  RunSqlGenerationResponseBodyData() {}

  explicit RunSqlGenerationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (evidence) {
      res["evidence"] = boost::any(*evidence);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (rewrite) {
      res["rewrite"] = boost::any(*rewrite);
    }
    if (selector) {
      res["selector"] = boost::any(*selector);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (sql) {
      res["sql"] = boost::any(*sql);
    }
    if (sqlError) {
      res["sqlError"] = boost::any(*sqlError);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("evidence") != m.end() && !m["evidence"].empty()) {
      evidence = make_shared<string>(boost::any_cast<string>(m["evidence"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("rewrite") != m.end() && !m["rewrite"].empty()) {
      rewrite = make_shared<string>(boost::any_cast<string>(m["rewrite"]));
    }
    if (m.find("selector") != m.end() && !m["selector"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["selector"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["selector"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      selector = make_shared<vector<string>>(toVec1);
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("sql") != m.end() && !m["sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["sql"]));
    }
    if (m.find("sqlError") != m.end() && !m["sqlError"].empty()) {
      sqlError = make_shared<string>(boost::any_cast<string>(m["sqlError"]));
    }
  }


  virtual ~RunSqlGenerationResponseBodyData() = default;
};
class RunSqlGenerationResponseBody : public Darabonba::Model {
public:
  shared_ptr<RunSqlGenerationResponseBodyData> data{};

  RunSqlGenerationResponseBody() {}

  explicit RunSqlGenerationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RunSqlGenerationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RunSqlGenerationResponseBodyData>(model1);
      }
    }
  }


  virtual ~RunSqlGenerationResponseBody() = default;
};
class RunSqlGenerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunSqlGenerationResponseBody> body{};

  RunSqlGenerationResponse() {}

  explicit RunSqlGenerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunSqlGenerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunSqlGenerationResponseBody>(model1);
      }
    }
  }


  virtual ~RunSqlGenerationResponse() = default;
};
class SaveVirtualDatasourceDdlRequest : public Darabonba::Model {
public:
  shared_ptr<string> ddl{};
  shared_ptr<string> vdbId{};
  shared_ptr<string> workspaceId{};

  SaveVirtualDatasourceDdlRequest() {}

  explicit SaveVirtualDatasourceDdlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddl) {
      res["ddl"] = boost::any(*ddl);
    }
    if (vdbId) {
      res["vdbId"] = boost::any(*vdbId);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ddl") != m.end() && !m["ddl"].empty()) {
      ddl = make_shared<string>(boost::any_cast<string>(m["ddl"]));
    }
    if (m.find("vdbId") != m.end() && !m["vdbId"].empty()) {
      vdbId = make_shared<string>(boost::any_cast<string>(m["vdbId"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~SaveVirtualDatasourceDdlRequest() = default;
};
class SaveVirtualDatasourceDdlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SaveVirtualDatasourceDdlResponseBody() {}

  explicit SaveVirtualDatasourceDdlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~SaveVirtualDatasourceDdlResponseBody() = default;
};
class SaveVirtualDatasourceDdlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveVirtualDatasourceDdlResponseBody> body{};

  SaveVirtualDatasourceDdlResponse() {}

  explicit SaveVirtualDatasourceDdlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveVirtualDatasourceDdlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveVirtualDatasourceDdlResponseBody>(model1);
      }
    }
  }


  virtual ~SaveVirtualDatasourceDdlResponse() = default;
};
class SyncRemoteTablesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> keepTableNames{};
  shared_ptr<vector<string>> noModifiedTableNames{};
  shared_ptr<bool> pullSamples{};
  shared_ptr<vector<string>> tableNames{};
  shared_ptr<string> workspaceId{};

  SyncRemoteTablesRequest() {}

  explicit SyncRemoteTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keepTableNames) {
      res["keepTableNames"] = boost::any(*keepTableNames);
    }
    if (noModifiedTableNames) {
      res["noModifiedTableNames"] = boost::any(*noModifiedTableNames);
    }
    if (pullSamples) {
      res["pullSamples"] = boost::any(*pullSamples);
    }
    if (tableNames) {
      res["tableNames"] = boost::any(*tableNames);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keepTableNames") != m.end() && !m["keepTableNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["keepTableNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["keepTableNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keepTableNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("noModifiedTableNames") != m.end() && !m["noModifiedTableNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["noModifiedTableNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["noModifiedTableNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      noModifiedTableNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("pullSamples") != m.end() && !m["pullSamples"].empty()) {
      pullSamples = make_shared<bool>(boost::any_cast<bool>(m["pullSamples"]));
    }
    if (m.find("tableNames") != m.end() && !m["tableNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tableNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tableNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tableNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~SyncRemoteTablesRequest() = default;
};
class SyncRemoteTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SyncRemoteTablesResponseBody() {}

  explicit SyncRemoteTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~SyncRemoteTablesResponseBody() = default;
};
class SyncRemoteTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncRemoteTablesResponseBody> body{};

  SyncRemoteTablesResponse() {}

  explicit SyncRemoteTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SyncRemoteTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncRemoteTablesResponseBody>(model1);
      }
    }
  }


  virtual ~SyncRemoteTablesResponse() = default;
};
class UpdateBusinessLogicRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessLogicIdKey{};
  shared_ptr<string> description{};
  shared_ptr<long> type{};
  shared_ptr<string> workspaceId{};

  UpdateBusinessLogicRequest() {}

  explicit UpdateBusinessLogicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessLogicIdKey) {
      res["businessLogicIdKey"] = boost::any(*businessLogicIdKey);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("businessLogicIdKey") != m.end() && !m["businessLogicIdKey"].empty()) {
      businessLogicIdKey = make_shared<string>(boost::any_cast<string>(m["businessLogicIdKey"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~UpdateBusinessLogicRequest() = default;
};
class UpdateBusinessLogicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateBusinessLogicResponseBody() {}

  explicit UpdateBusinessLogicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateBusinessLogicResponseBody() = default;
};
class UpdateBusinessLogicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateBusinessLogicResponseBody> body{};

  UpdateBusinessLogicResponse() {}

  explicit UpdateBusinessLogicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateBusinessLogicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBusinessLogicResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBusinessLogicResponse() = default;
};
class UpdateColumnRequest : public Darabonba::Model {
public:
  shared_ptr<string> chineseName{};
  shared_ptr<string> columnIdKey{};
  shared_ptr<string> description{};
  shared_ptr<long> enumType{};
  shared_ptr<vector<string>> enumValues{};
  shared_ptr<long> rangeMax{};
  shared_ptr<long> rangeMin{};
  shared_ptr<vector<string>> samples{};
  shared_ptr<string> tableIdKey{};
  shared_ptr<string> workspaceId{};

  UpdateColumnRequest() {}

  explicit UpdateColumnRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chineseName) {
      res["chineseName"] = boost::any(*chineseName);
    }
    if (columnIdKey) {
      res["columnIdKey"] = boost::any(*columnIdKey);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (enumType) {
      res["enumType"] = boost::any(*enumType);
    }
    if (enumValues) {
      res["enumValues"] = boost::any(*enumValues);
    }
    if (rangeMax) {
      res["rangeMax"] = boost::any(*rangeMax);
    }
    if (rangeMin) {
      res["rangeMin"] = boost::any(*rangeMin);
    }
    if (samples) {
      res["samples"] = boost::any(*samples);
    }
    if (tableIdKey) {
      res["tableIdKey"] = boost::any(*tableIdKey);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chineseName") != m.end() && !m["chineseName"].empty()) {
      chineseName = make_shared<string>(boost::any_cast<string>(m["chineseName"]));
    }
    if (m.find("columnIdKey") != m.end() && !m["columnIdKey"].empty()) {
      columnIdKey = make_shared<string>(boost::any_cast<string>(m["columnIdKey"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("enumType") != m.end() && !m["enumType"].empty()) {
      enumType = make_shared<long>(boost::any_cast<long>(m["enumType"]));
    }
    if (m.find("enumValues") != m.end() && !m["enumValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["enumValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["enumValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      enumValues = make_shared<vector<string>>(toVec1);
    }
    if (m.find("rangeMax") != m.end() && !m["rangeMax"].empty()) {
      rangeMax = make_shared<long>(boost::any_cast<long>(m["rangeMax"]));
    }
    if (m.find("rangeMin") != m.end() && !m["rangeMin"].empty()) {
      rangeMin = make_shared<long>(boost::any_cast<long>(m["rangeMin"]));
    }
    if (m.find("samples") != m.end() && !m["samples"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["samples"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["samples"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      samples = make_shared<vector<string>>(toVec1);
    }
    if (m.find("tableIdKey") != m.end() && !m["tableIdKey"].empty()) {
      tableIdKey = make_shared<string>(boost::any_cast<string>(m["tableIdKey"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~UpdateColumnRequest() = default;
};
class UpdateColumnResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateColumnResponseBody() {}

  explicit UpdateColumnResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateColumnResponseBody() = default;
};
class UpdateColumnResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateColumnResponseBody> body{};

  UpdateColumnResponse() {}

  explicit UpdateColumnResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateColumnResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateColumnResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateColumnResponse() = default;
};
class UpdateEnumMappingRequest : public Darabonba::Model {
public:
  shared_ptr<string> columnIdKey{};
  shared_ptr<map<string, vector<string>>> enumMapping{};
  shared_ptr<string> tableIdKey{};
  shared_ptr<string> workspaceId{};

  UpdateEnumMappingRequest() {}

  explicit UpdateEnumMappingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnIdKey) {
      res["columnIdKey"] = boost::any(*columnIdKey);
    }
    if (enumMapping) {
      res["enumMapping"] = boost::any(*enumMapping);
    }
    if (tableIdKey) {
      res["tableIdKey"] = boost::any(*tableIdKey);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columnIdKey") != m.end() && !m["columnIdKey"].empty()) {
      columnIdKey = make_shared<string>(boost::any_cast<string>(m["columnIdKey"]));
    }
    if (m.find("enumMapping") != m.end() && !m["enumMapping"].empty()) {
      map<string, vector<string>> map1 = boost::any_cast<map<string, vector<string>>>(m["enumMapping"]);
      map<string, vector<string>> toMap1;
      for (auto item:map1) {
        vector<string> toVec2;
        if (typeid(vector<boost::any>) == item.second.type()) {
          vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item.second);
          for (auto item:vec2) {
             toVec2.push_back(boost::any_cast<string>(item));
          }
        }
         toMap1[item.first] = toVec2;
      }
      enumMapping = make_shared<map<string, vector<string>>>(toMap1);
    }
    if (m.find("tableIdKey") != m.end() && !m["tableIdKey"].empty()) {
      tableIdKey = make_shared<string>(boost::any_cast<string>(m["tableIdKey"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~UpdateEnumMappingRequest() = default;
};
class UpdateEnumMappingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateEnumMappingResponseBody() {}

  explicit UpdateEnumMappingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateEnumMappingResponseBody() = default;
};
class UpdateEnumMappingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEnumMappingResponseBody> body{};

  UpdateEnumMappingResponse() {}

  explicit UpdateEnumMappingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateEnumMappingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEnumMappingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEnumMappingResponse() = default;
};
class UpdateSynonymsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> columns{};
  shared_ptr<string> synonymIdKey{};
  shared_ptr<string> word{};
  shared_ptr<vector<string>> wordSynonyms{};
  shared_ptr<string> workspaceId{};

  UpdateSynonymsRequest() {}

  explicit UpdateSynonymsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      res["columns"] = boost::any(*columns);
    }
    if (synonymIdKey) {
      res["synonymIdKey"] = boost::any(*synonymIdKey);
    }
    if (word) {
      res["word"] = boost::any(*word);
    }
    if (wordSynonyms) {
      res["wordSynonyms"] = boost::any(*wordSynonyms);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["columns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["columns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      columns = make_shared<vector<string>>(toVec1);
    }
    if (m.find("synonymIdKey") != m.end() && !m["synonymIdKey"].empty()) {
      synonymIdKey = make_shared<string>(boost::any_cast<string>(m["synonymIdKey"]));
    }
    if (m.find("word") != m.end() && !m["word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["word"]));
    }
    if (m.find("wordSynonyms") != m.end() && !m["wordSynonyms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["wordSynonyms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["wordSynonyms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      wordSynonyms = make_shared<vector<string>>(toVec1);
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~UpdateSynonymsRequest() = default;
};
class UpdateSynonymsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateSynonymsResponseBody() {}

  explicit UpdateSynonymsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateSynonymsResponseBody() = default;
};
class UpdateSynonymsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSynonymsResponseBody> body{};

  UpdateSynonymsResponse() {}

  explicit UpdateSynonymsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSynonymsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSynonymsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSynonymsResponse() = default;
};
class UpdateTableInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<string>> foreignKeys{};
  shared_ptr<string> primaryKey{};
  shared_ptr<string> tableIdKey{};
  shared_ptr<string> workspaceId{};

  UpdateTableInfoRequest() {}

  explicit UpdateTableInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (foreignKeys) {
      res["foreignKeys"] = boost::any(*foreignKeys);
    }
    if (primaryKey) {
      res["primaryKey"] = boost::any(*primaryKey);
    }
    if (tableIdKey) {
      res["tableIdKey"] = boost::any(*tableIdKey);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("foreignKeys") != m.end() && !m["foreignKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["foreignKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["foreignKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      foreignKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("primaryKey") != m.end() && !m["primaryKey"].empty()) {
      primaryKey = make_shared<string>(boost::any_cast<string>(m["primaryKey"]));
    }
    if (m.find("tableIdKey") != m.end() && !m["tableIdKey"].empty()) {
      tableIdKey = make_shared<string>(boost::any_cast<string>(m["tableIdKey"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~UpdateTableInfoRequest() = default;
};
class UpdateTableInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateTableInfoResponseBody() {}

  explicit UpdateTableInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateTableInfoResponseBody() = default;
};
class UpdateTableInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTableInfoResponseBody> body{};

  UpdateTableInfoResponse() {}

  explicit UpdateTableInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateTableInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTableInfoResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTableInfoResponse() = default;
};
class UpdateVirtualDatasourceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<long> type{};
  shared_ptr<string> vdbId{};
  shared_ptr<string> workspaceId{};

  UpdateVirtualDatasourceInstanceRequest() {}

  explicit UpdateVirtualDatasourceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (vdbId) {
      res["vdbId"] = boost::any(*vdbId);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
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
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
    if (m.find("vdbId") != m.end() && !m["vdbId"].empty()) {
      vdbId = make_shared<string>(boost::any_cast<string>(m["vdbId"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~UpdateVirtualDatasourceInstanceRequest() = default;
};
class UpdateVirtualDatasourceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateVirtualDatasourceInstanceResponseBody() {}

  explicit UpdateVirtualDatasourceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateVirtualDatasourceInstanceResponseBody() = default;
};
class UpdateVirtualDatasourceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateVirtualDatasourceInstanceResponseBody> body{};

  UpdateVirtualDatasourceInstanceResponse() {}

  explicit UpdateVirtualDatasourceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateVirtualDatasourceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVirtualDatasourceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVirtualDatasourceInstanceResponse() = default;
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
  BatchDeleteSynonymsResponse batchDeleteSynonymsWithOptions(shared_ptr<BatchDeleteSynonymsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchDeleteSynonymsResponse batchDeleteSynonyms(shared_ptr<BatchDeleteSynonymsRequest> request);
  CancelDatasourceAuthorizationResponse cancelDatasourceAuthorizationWithOptions(shared_ptr<CancelDatasourceAuthorizationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelDatasourceAuthorizationResponse cancelDatasourceAuthorization(shared_ptr<CancelDatasourceAuthorizationRequest> request);
  CreateBusinessLogicResponse createBusinessLogicWithOptions(shared_ptr<CreateBusinessLogicRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBusinessLogicResponse createBusinessLogic(shared_ptr<CreateBusinessLogicRequest> request);
  CreateDatasourceAuthorizationResponse createDatasourceAuthorizationWithOptions(shared_ptr<CreateDatasourceAuthorizationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasourceAuthorizationResponse createDatasourceAuthorization(shared_ptr<CreateDatasourceAuthorizationRequest> request);
  CreateSynonymsResponse createSynonymsWithOptions(shared_ptr<CreateSynonymsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSynonymsResponse createSynonyms(shared_ptr<CreateSynonymsRequest> request);
  CreateVirtualDatasourceInstanceResponse createVirtualDatasourceInstanceWithOptions(shared_ptr<CreateVirtualDatasourceInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVirtualDatasourceInstanceResponse createVirtualDatasourceInstance(shared_ptr<CreateVirtualDatasourceInstanceRequest> request);
  DeleteBusinessLogicResponse deleteBusinessLogicWithOptions(shared_ptr<DeleteBusinessLogicRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBusinessLogicResponse deleteBusinessLogic(shared_ptr<DeleteBusinessLogicRequest> request);
  DeleteColumnResponse deleteColumnWithOptions(shared_ptr<DeleteColumnRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteColumnResponse deleteColumn(shared_ptr<DeleteColumnRequest> request);
  DeleteSelectedTableResponse deleteSelectedTableWithOptions(shared_ptr<DeleteSelectedTableRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSelectedTableResponse deleteSelectedTable(shared_ptr<DeleteSelectedTableRequest> request);
  DeleteVirtualDatasourceInstanceResponse deleteVirtualDatasourceInstanceWithOptions(shared_ptr<DeleteVirtualDatasourceInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVirtualDatasourceInstanceResponse deleteVirtualDatasourceInstance(shared_ptr<DeleteVirtualDatasourceInstanceRequest> request);
  ListBusinessLogicResponse listBusinessLogicWithOptions(shared_ptr<ListBusinessLogicRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBusinessLogicResponse listBusinessLogic(shared_ptr<ListBusinessLogicRequest> request);
  ListColumnResponse listColumnWithOptions(shared_ptr<ListColumnRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListColumnResponse listColumn(shared_ptr<ListColumnRequest> request);
  ListEnumMappingResponse listEnumMappingWithOptions(shared_ptr<ListEnumMappingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnumMappingResponse listEnumMapping(shared_ptr<ListEnumMappingRequest> request);
  ListSelectedTablesResponse listSelectedTablesWithOptions(shared_ptr<ListSelectedTablesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSelectedTablesResponse listSelectedTables(shared_ptr<ListSelectedTablesRequest> request);
  ListSynonymsResponse listSynonymsWithOptions(shared_ptr<ListSynonymsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSynonymsResponse listSynonyms(shared_ptr<ListSynonymsRequest> request);
  ListVirtualDatasourceInstanceResponse listVirtualDatasourceInstanceWithOptions(shared_ptr<ListVirtualDatasourceInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVirtualDatasourceInstanceResponse listVirtualDatasourceInstance(shared_ptr<ListVirtualDatasourceInstanceRequest> request);
  RecoverColumnResponse recoverColumnWithOptions(shared_ptr<RecoverColumnRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecoverColumnResponse recoverColumn(shared_ptr<RecoverColumnRequest> request);
  ResyncTableResponse resyncTableWithOptions(shared_ptr<ResyncTableRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResyncTableResponse resyncTable(shared_ptr<ResyncTableRequest> request);
  RunDataAnalysisResponse runDataAnalysisWithOptions(shared_ptr<string> workspaceId,
                                                     shared_ptr<RunDataAnalysisRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunDataAnalysisResponse runDataAnalysis(shared_ptr<string> workspaceId, shared_ptr<RunDataAnalysisRequest> request);
  RunDataResultAnalysisResponse runDataResultAnalysisWithOptions(shared_ptr<RunDataResultAnalysisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunDataResultAnalysisResponse runDataResultAnalysis(shared_ptr<RunDataResultAnalysisRequest> request);
  RunSqlGenerationResponse runSqlGenerationWithOptions(shared_ptr<RunSqlGenerationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunSqlGenerationResponse runSqlGeneration(shared_ptr<RunSqlGenerationRequest> request);
  SaveVirtualDatasourceDdlResponse saveVirtualDatasourceDdlWithOptions(shared_ptr<SaveVirtualDatasourceDdlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveVirtualDatasourceDdlResponse saveVirtualDatasourceDdl(shared_ptr<SaveVirtualDatasourceDdlRequest> request);
  SyncRemoteTablesResponse syncRemoteTablesWithOptions(shared_ptr<SyncRemoteTablesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncRemoteTablesResponse syncRemoteTables(shared_ptr<SyncRemoteTablesRequest> request);
  UpdateBusinessLogicResponse updateBusinessLogicWithOptions(shared_ptr<UpdateBusinessLogicRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBusinessLogicResponse updateBusinessLogic(shared_ptr<UpdateBusinessLogicRequest> request);
  UpdateColumnResponse updateColumnWithOptions(shared_ptr<UpdateColumnRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateColumnResponse updateColumn(shared_ptr<UpdateColumnRequest> request);
  UpdateEnumMappingResponse updateEnumMappingWithOptions(shared_ptr<UpdateEnumMappingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEnumMappingResponse updateEnumMapping(shared_ptr<UpdateEnumMappingRequest> request);
  UpdateSynonymsResponse updateSynonymsWithOptions(shared_ptr<UpdateSynonymsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSynonymsResponse updateSynonyms(shared_ptr<UpdateSynonymsRequest> request);
  UpdateTableInfoResponse updateTableInfoWithOptions(shared_ptr<UpdateTableInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTableInfoResponse updateTableInfo(shared_ptr<UpdateTableInfoRequest> request);
  UpdateVirtualDatasourceInstanceResponse updateVirtualDatasourceInstanceWithOptions(shared_ptr<UpdateVirtualDatasourceInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVirtualDatasourceInstanceResponse updateVirtualDatasourceInstance(shared_ptr<UpdateVirtualDatasourceInstanceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_DataAnalysisGBI20240823

#endif
