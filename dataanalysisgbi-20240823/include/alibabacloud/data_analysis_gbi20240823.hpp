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
class CreateVirtualDatasourceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
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
class RunDataAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<bool> generateSqlOnly{};
  shared_ptr<string> query{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> specificationType{};

  RunDataAnalysisRequest() {}

  explicit RunDataAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
class UpdateVirtualDatasourceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
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
  CancelDatasourceAuthorizationResponse cancelDatasourceAuthorizationWithOptions(shared_ptr<CancelDatasourceAuthorizationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelDatasourceAuthorizationResponse cancelDatasourceAuthorization(shared_ptr<CancelDatasourceAuthorizationRequest> request);
  CreateDatasourceAuthorizationResponse createDatasourceAuthorizationWithOptions(shared_ptr<CreateDatasourceAuthorizationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasourceAuthorizationResponse createDatasourceAuthorization(shared_ptr<CreateDatasourceAuthorizationRequest> request);
  CreateVirtualDatasourceInstanceResponse createVirtualDatasourceInstanceWithOptions(shared_ptr<CreateVirtualDatasourceInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVirtualDatasourceInstanceResponse createVirtualDatasourceInstance(shared_ptr<CreateVirtualDatasourceInstanceRequest> request);
  DeleteVirtualDatasourceInstanceResponse deleteVirtualDatasourceInstanceWithOptions(shared_ptr<DeleteVirtualDatasourceInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVirtualDatasourceInstanceResponse deleteVirtualDatasourceInstance(shared_ptr<DeleteVirtualDatasourceInstanceRequest> request);
  ListVirtualDatasourceInstanceResponse listVirtualDatasourceInstanceWithOptions(shared_ptr<ListVirtualDatasourceInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVirtualDatasourceInstanceResponse listVirtualDatasourceInstance(shared_ptr<ListVirtualDatasourceInstanceRequest> request);
  RunDataAnalysisResponse runDataAnalysisWithOptions(shared_ptr<string> workspaceId,
                                                     shared_ptr<RunDataAnalysisRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunDataAnalysisResponse runDataAnalysis(shared_ptr<string> workspaceId, shared_ptr<RunDataAnalysisRequest> request);
  SaveVirtualDatasourceDdlResponse saveVirtualDatasourceDdlWithOptions(shared_ptr<SaveVirtualDatasourceDdlRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveVirtualDatasourceDdlResponse saveVirtualDatasourceDdl(shared_ptr<SaveVirtualDatasourceDdlRequest> request);
  SyncRemoteTablesResponse syncRemoteTablesWithOptions(shared_ptr<SyncRemoteTablesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncRemoteTablesResponse syncRemoteTables(shared_ptr<SyncRemoteTablesRequest> request);
  UpdateVirtualDatasourceInstanceResponse updateVirtualDatasourceInstanceWithOptions(shared_ptr<UpdateVirtualDatasourceInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVirtualDatasourceInstanceResponse updateVirtualDatasourceInstance(shared_ptr<UpdateVirtualDatasourceInstanceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_DataAnalysisGBI20240823

#endif
