// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_QIANZHOU20211111_H_
#define ALIBABACLOUD_QIANZHOU20211111_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Qianzhou20211111 {
class AICreateSessionMessageRequestContext : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> error{};
  shared_ptr<string> kind{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> uuid{};

  AICreateSessionMessageRequestContext() {}

  explicit AICreateSessionMessageRequestContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (error) {
      res["error"] = boost::any(*error);
    }
    if (kind) {
      res["kind"] = boost::any(*kind);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (uuid) {
      res["uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("error") != m.end() && !m["error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["error"]));
    }
    if (m.find("kind") != m.end() && !m["kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["kind"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("uuid") != m.end() && !m["uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["uuid"]));
    }
  }


  virtual ~AICreateSessionMessageRequestContext() = default;
};
class AICreateSessionMessageRequest : public Darabonba::Model {
public:
  shared_ptr<AICreateSessionMessageRequestContext> context{};
  shared_ptr<string> language{};
  shared_ptr<string> message{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> type{};
  shared_ptr<string> employeeId{};

  AICreateSessionMessageRequest() {}

  explicit AICreateSessionMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["context"] = context ? boost::any(context->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (language) {
      res["language"] = boost::any(*language);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (sessionId) {
      res["session_id"] = boost::any(*sessionId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (employeeId) {
      res["employee_id"] = boost::any(*employeeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("context") != m.end() && !m["context"].empty()) {
      if (typeid(map<string, boost::any>) == m["context"].type()) {
        AICreateSessionMessageRequestContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["context"]));
        context = make_shared<AICreateSessionMessageRequestContext>(model1);
      }
    }
    if (m.find("language") != m.end() && !m["language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["language"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("session_id") != m.end() && !m["session_id"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["session_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("employee_id") != m.end() && !m["employee_id"].empty()) {
      employeeId = make_shared<string>(boost::any_cast<string>(m["employee_id"]));
    }
  }


  virtual ~AICreateSessionMessageRequest() = default;
};
class AICreateSessionMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> answer{};
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};

  AICreateSessionMessageResponseBody() {}

  explicit AICreateSessionMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["answer"] = boost::any(*answer);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["session_id"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("answer") != m.end() && !m["answer"].empty()) {
      answer = make_shared<string>(boost::any_cast<string>(m["answer"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("session_id") != m.end() && !m["session_id"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["session_id"]));
    }
  }


  virtual ~AICreateSessionMessageResponseBody() = default;
};
class AICreateSessionMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AICreateSessionMessageResponseBody> body{};

  AICreateSessionMessageResponse() {}

  explicit AICreateSessionMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AICreateSessionMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AICreateSessionMessageResponseBody>(model1);
      }
    }
  }


  virtual ~AICreateSessionMessageResponse() = default;
};
class CreateDiagnosisRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> clusterID{};
  shared_ptr<string> diagnosisType{};

  CreateDiagnosisRequest() {}

  explicit CreateDiagnosisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (clusterID) {
      res["clusterID"] = boost::any(*clusterID);
    }
    if (diagnosisType) {
      res["diagnosisType"] = boost::any(*diagnosisType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
    if (m.find("clusterID") != m.end() && !m["clusterID"].empty()) {
      clusterID = make_shared<string>(boost::any_cast<string>(m["clusterID"]));
    }
    if (m.find("diagnosisType") != m.end() && !m["diagnosisType"].empty()) {
      diagnosisType = make_shared<string>(boost::any_cast<string>(m["diagnosisType"]));
    }
  }


  virtual ~CreateDiagnosisRequest() = default;
};
class CreateDiagnosisResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> requestId{};

  CreateDiagnosisResponseBody() {}

  explicit CreateDiagnosisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateDiagnosisResponseBody() = default;
};
class CreateDiagnosisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDiagnosisResponseBody> body{};

  CreateDiagnosisResponse() {}

  explicit CreateDiagnosisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDiagnosisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDiagnosisResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDiagnosisResponse() = default;
};
class GetClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterID{};

  GetClusterRequest() {}

  explicit GetClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterID) {
      res["clusterID"] = boost::any(*clusterID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterID") != m.end() && !m["clusterID"].empty()) {
      clusterID = make_shared<string>(boost::any_cast<string>(m["clusterID"]));
    }
  }


  virtual ~GetClusterRequest() = default;
};
class GetClusterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterID{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> currentVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> profile{};
  shared_ptr<string> regionID{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> spec{};
  shared_ptr<string> state{};
  shared_ptr<string> userID{};

  GetClusterResponseBodyData() {}

  explicit GetClusterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterID) {
      res["clusterID"] = boost::any(*clusterID);
    }
    if (clusterType) {
      res["clusterType"] = boost::any(*clusterType);
    }
    if (currentVersion) {
      res["currentVersion"] = boost::any(*currentVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (profile) {
      res["profile"] = boost::any(*profile);
    }
    if (regionID) {
      res["regionID"] = boost::any(*regionID);
    }
    if (securityGroupId) {
      res["securityGroupId"] = boost::any(*securityGroupId);
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (userID) {
      res["userID"] = boost::any(*userID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterID") != m.end() && !m["clusterID"].empty()) {
      clusterID = make_shared<string>(boost::any_cast<string>(m["clusterID"]));
    }
    if (m.find("clusterType") != m.end() && !m["clusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["clusterType"]));
    }
    if (m.find("currentVersion") != m.end() && !m["currentVersion"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["currentVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("profile") != m.end() && !m["profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["profile"]));
    }
    if (m.find("regionID") != m.end() && !m["regionID"].empty()) {
      regionID = make_shared<string>(boost::any_cast<string>(m["regionID"]));
    }
    if (m.find("securityGroupId") != m.end() && !m["securityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["securityGroupId"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("userID") != m.end() && !m["userID"].empty()) {
      userID = make_shared<string>(boost::any_cast<string>(m["userID"]));
    }
  }


  virtual ~GetClusterResponseBodyData() = default;
};
class GetClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetClusterResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetClusterResponseBody() {}

  explicit GetClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetClusterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetClusterResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetClusterResponseBody() = default;
};
class GetClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetClusterResponseBody> body{};

  GetClusterResponse() {}

  explicit GetClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetClusterResponseBody>(model1);
      }
    }
  }


  virtual ~GetClusterResponse() = default;
};
class GetClusterWarningRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterID{};

  GetClusterWarningRequest() {}

  explicit GetClusterWarningRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterID) {
      res["clusterID"] = boost::any(*clusterID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterID") != m.end() && !m["clusterID"].empty()) {
      clusterID = make_shared<string>(boost::any_cast<string>(m["clusterID"]));
    }
  }


  virtual ~GetClusterWarningRequest() = default;
};
class GetClusterWarningResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GetClusterWarningResponseBody() {}

  explicit GetClusterWarningResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetClusterWarningResponseBody() = default;
};
class GetClusterWarningResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetClusterWarningResponseBody> body{};

  GetClusterWarningResponse() {}

  explicit GetClusterWarningResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetClusterWarningResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetClusterWarningResponseBody>(model1);
      }
    }
  }


  virtual ~GetClusterWarningResponse() = default;
};
class GetDiagnosisResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> diagnosisId{};
  shared_ptr<string> ownerUid{};

  GetDiagnosisResultRequest() {}

  explicit GetDiagnosisResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diagnosisId) {
      res["diagnosisId"] = boost::any(*diagnosisId);
    }
    if (ownerUid) {
      res["ownerUid"] = boost::any(*ownerUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("diagnosisId") != m.end() && !m["diagnosisId"].empty()) {
      diagnosisId = make_shared<string>(boost::any_cast<string>(m["diagnosisId"]));
    }
    if (m.find("ownerUid") != m.end() && !m["ownerUid"].empty()) {
      ownerUid = make_shared<string>(boost::any_cast<string>(m["ownerUid"]));
    }
  }


  virtual ~GetDiagnosisResultRequest() = default;
};
class GetDiagnosisResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  GetDiagnosisResultResponseBody() {}

  explicit GetDiagnosisResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["msg"] = boost::any(*msg);
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
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetDiagnosisResultResponseBody() = default;
};
class GetDiagnosisResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDiagnosisResultResponseBody> body{};

  GetDiagnosisResultResponse() {}

  explicit GetDiagnosisResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDiagnosisResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDiagnosisResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetDiagnosisResultResponse() = default;
};
class GetUserClusterWarningRequest : public Darabonba::Model {
public:
  shared_ptr<string> userID{};

  GetUserClusterWarningRequest() {}

  explicit GetUserClusterWarningRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userID) {
      res["userID"] = boost::any(*userID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userID") != m.end() && !m["userID"].empty()) {
      userID = make_shared<string>(boost::any_cast<string>(m["userID"]));
    }
  }


  virtual ~GetUserClusterWarningRequest() = default;
};
class GetUserClusterWarningResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GetUserClusterWarningResponseBody() {}

  explicit GetUserClusterWarningResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetUserClusterWarningResponseBody() = default;
};
class GetUserClusterWarningResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserClusterWarningResponseBody> body{};

  GetUserClusterWarningResponse() {}

  explicit GetUserClusterWarningResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserClusterWarningResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserClusterWarningResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserClusterWarningResponse() = default;
};
class GetWebshellTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GetWebshellTokenResponseBody() {}

  explicit GetWebshellTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetWebshellTokenResponseBody() = default;
};
class GetWebshellTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWebshellTokenResponseBody> body{};

  GetWebshellTokenResponse() {}

  explicit GetWebshellTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetWebshellTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWebshellTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetWebshellTokenResponse() = default;
};
class HelloRequest : public Darabonba::Model {
public:
  shared_ptr<string> user{};

  HelloRequest() {}

  explicit HelloRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~HelloRequest() = default;
};
class HelloResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> name{};
  shared_ptr<bool> success{};

  HelloResponseBodyData() {}

  explicit HelloResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["date"] = boost::any(*date);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("date") != m.end() && !m["date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["date"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~HelloResponseBodyData() = default;
};
class HelloResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<HelloResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  HelloResponseBody() {}

  explicit HelloResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["msg"] = boost::any(*msg);
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
        HelloResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<HelloResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~HelloResponseBody() = default;
};
class HelloResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HelloResponseBody> body{};

  HelloResponse() {}

  explicit HelloResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        HelloResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HelloResponseBody>(model1);
      }
    }
  }


  virtual ~HelloResponse() = default;
};
class ListClusterDeprecatedAPIRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> targetVersion{};

  ListClusterDeprecatedAPIRequest() {}

  explicit ListClusterDeprecatedAPIRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (pageNo) {
      res["page_no"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (targetVersion) {
      res["target_version"] = boost::any(*targetVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("page_no") != m.end() && !m["page_no"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["page_no"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("target_version") != m.end() && !m["target_version"].empty()) {
      targetVersion = make_shared<string>(boost::any_cast<string>(m["target_version"]));
    }
  }


  virtual ~ListClusterDeprecatedAPIRequest() = default;
};
class ListClusterDeprecatedAPIResponseBodyDatasData : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> content{};
  shared_ptr<long> count{};
  shared_ptr<string> currentVersion{};
  shared_ptr<string> deprecatedK8sVersion{};
  shared_ptr<string> ds{};
  shared_ptr<string> label{};
  shared_ptr<string> lastTime{};
  shared_ptr<string> requestUri{};
  shared_ptr<string> sourceIps{};
  shared_ptr<string> targetVersion{};
  shared_ptr<string> userAgent{};

  ListClusterDeprecatedAPIResponseBodyDatasData() {}

  explicit ListClusterDeprecatedAPIResponseBodyDatasData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (currentVersion) {
      res["current_version"] = boost::any(*currentVersion);
    }
    if (deprecatedK8sVersion) {
      res["deprecated_k8s_version"] = boost::any(*deprecatedK8sVersion);
    }
    if (ds) {
      res["ds"] = boost::any(*ds);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (lastTime) {
      res["last_time"] = boost::any(*lastTime);
    }
    if (requestUri) {
      res["request_uri"] = boost::any(*requestUri);
    }
    if (sourceIps) {
      res["source_ips"] = boost::any(*sourceIps);
    }
    if (targetVersion) {
      res["target_version"] = boost::any(*targetVersion);
    }
    if (userAgent) {
      res["user_agent"] = boost::any(*userAgent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("current_version") != m.end() && !m["current_version"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["current_version"]));
    }
    if (m.find("deprecated_k8s_version") != m.end() && !m["deprecated_k8s_version"].empty()) {
      deprecatedK8sVersion = make_shared<string>(boost::any_cast<string>(m["deprecated_k8s_version"]));
    }
    if (m.find("ds") != m.end() && !m["ds"].empty()) {
      ds = make_shared<string>(boost::any_cast<string>(m["ds"]));
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("last_time") != m.end() && !m["last_time"].empty()) {
      lastTime = make_shared<string>(boost::any_cast<string>(m["last_time"]));
    }
    if (m.find("request_uri") != m.end() && !m["request_uri"].empty()) {
      requestUri = make_shared<string>(boost::any_cast<string>(m["request_uri"]));
    }
    if (m.find("source_ips") != m.end() && !m["source_ips"].empty()) {
      sourceIps = make_shared<string>(boost::any_cast<string>(m["source_ips"]));
    }
    if (m.find("target_version") != m.end() && !m["target_version"].empty()) {
      targetVersion = make_shared<string>(boost::any_cast<string>(m["target_version"]));
    }
    if (m.find("user_agent") != m.end() && !m["user_agent"].empty()) {
      userAgent = make_shared<string>(boost::any_cast<string>(m["user_agent"]));
    }
  }


  virtual ~ListClusterDeprecatedAPIResponseBodyDatasData() = default;
};
class ListClusterDeprecatedAPIResponseBodyDatas : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<vector<ListClusterDeprecatedAPIResponseBodyDatasData>> data{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListClusterDeprecatedAPIResponseBodyDatas() {}

  explicit ListClusterDeprecatedAPIResponseBodyDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["current"] = boost::any(*current);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("current") != m.end() && !m["current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["current"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListClusterDeprecatedAPIResponseBodyDatasData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterDeprecatedAPIResponseBodyDatasData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListClusterDeprecatedAPIResponseBodyDatasData>>(expect1);
      }
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListClusterDeprecatedAPIResponseBodyDatas() = default;
};
class ListClusterDeprecatedAPIResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListClusterDeprecatedAPIResponseBodyDatas> datas{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  ListClusterDeprecatedAPIResponseBody() {}

  explicit ListClusterDeprecatedAPIResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (datas) {
      res["datas"] = datas ? boost::any(datas->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("datas") != m.end() && !m["datas"].empty()) {
      if (typeid(map<string, boost::any>) == m["datas"].type()) {
        ListClusterDeprecatedAPIResponseBodyDatas model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["datas"]));
        datas = make_shared<ListClusterDeprecatedAPIResponseBodyDatas>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListClusterDeprecatedAPIResponseBody() = default;
};
class ListClusterDeprecatedAPIResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClusterDeprecatedAPIResponseBody> body{};

  ListClusterDeprecatedAPIResponse() {}

  explicit ListClusterDeprecatedAPIResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClusterDeprecatedAPIResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterDeprecatedAPIResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterDeprecatedAPIResponse() = default;
};
class ListClusterImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> imageHash{};
  shared_ptr<string> imageName{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> uid{};

  ListClusterImagesRequest() {}

  explicit ListClusterImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (imageHash) {
      res["image_hash"] = boost::any(*imageHash);
    }
    if (imageName) {
      res["image_name"] = boost::any(*imageName);
    }
    if (pageNo) {
      res["page_no"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("image_hash") != m.end() && !m["image_hash"].empty()) {
      imageHash = make_shared<string>(boost::any_cast<string>(m["image_hash"]));
    }
    if (m.find("image_name") != m.end() && !m["image_name"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["image_name"]));
    }
    if (m.find("page_no") != m.end() && !m["page_no"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["page_no"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~ListClusterImagesRequest() = default;
};
class ListClusterImagesResponseBodyDatasData : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> controllerName{};
  shared_ptr<string> controllerType{};
  shared_ptr<string> created{};
  shared_ptr<string> imageHash{};
  shared_ptr<string> imageName{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> uid{};
  shared_ptr<string> updated{};

  ListClusterImagesResponseBodyDatasData() {}

  explicit ListClusterImagesResponseBodyDatasData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (controllerName) {
      res["controller_name"] = boost::any(*controllerName);
    }
    if (controllerType) {
      res["controller_type"] = boost::any(*controllerType);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (imageHash) {
      res["image_hash"] = boost::any(*imageHash);
    }
    if (imageName) {
      res["image_name"] = boost::any(*imageName);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("controller_name") != m.end() && !m["controller_name"].empty()) {
      controllerName = make_shared<string>(boost::any_cast<string>(m["controller_name"]));
    }
    if (m.find("controller_type") != m.end() && !m["controller_type"].empty()) {
      controllerType = make_shared<string>(boost::any_cast<string>(m["controller_type"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("image_hash") != m.end() && !m["image_hash"].empty()) {
      imageHash = make_shared<string>(boost::any_cast<string>(m["image_hash"]));
    }
    if (m.find("image_name") != m.end() && !m["image_name"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["image_name"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["updated"]));
    }
  }


  virtual ~ListClusterImagesResponseBodyDatasData() = default;
};
class ListClusterImagesResponseBodyDatas : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<vector<ListClusterImagesResponseBodyDatasData>> data{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListClusterImagesResponseBodyDatas() {}

  explicit ListClusterImagesResponseBodyDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["current"] = boost::any(*current);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("current") != m.end() && !m["current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["current"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListClusterImagesResponseBodyDatasData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterImagesResponseBodyDatasData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListClusterImagesResponseBodyDatasData>>(expect1);
      }
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListClusterImagesResponseBodyDatas() = default;
};
class ListClusterImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListClusterImagesResponseBodyDatas> datas{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  ListClusterImagesResponseBody() {}

  explicit ListClusterImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (datas) {
      res["datas"] = datas ? boost::any(datas->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("datas") != m.end() && !m["datas"].empty()) {
      if (typeid(map<string, boost::any>) == m["datas"].type()) {
        ListClusterImagesResponseBodyDatas model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["datas"]));
        datas = make_shared<ListClusterImagesResponseBodyDatas>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListClusterImagesResponseBody() = default;
};
class ListClusterImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClusterImagesResponseBody> body{};

  ListClusterImagesResponse() {}

  explicit ListClusterImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClusterImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterImagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterImagesResponse() = default;
};
class ListUserClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> current{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> userID{};

  ListUserClustersRequest() {}

  explicit ListUserClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["current"] = boost::any(*current);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (userID) {
      res["userID"] = boost::any(*userID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("current") != m.end() && !m["current"].empty()) {
      current = make_shared<string>(boost::any_cast<string>(m["current"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
    if (m.find("userID") != m.end() && !m["userID"].empty()) {
      userID = make_shared<string>(boost::any_cast<string>(m["userID"]));
    }
  }


  virtual ~ListUserClustersRequest() = default;
};
class ListUserClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  ListUserClustersResponseBody() {}

  explicit ListUserClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListUserClustersResponseBody() = default;
};
class ListUserClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserClustersResponseBody> body{};

  ListUserClustersResponse() {}

  explicit ListUserClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUserClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserClustersResponse() = default;
};
class QueryByInstanceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<string> regionId{};

  QueryByInstanceInfoRequest() {}

  explicit QueryByInstanceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~QueryByInstanceInfoRequest() = default;
};
class QueryByInstanceInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> uid{};

  QueryByInstanceInfoResponseBodyData() {}

  explicit QueryByInstanceInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["clusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["clusterName"] = boost::any(*clusterName);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterId") != m.end() && !m["clusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["clusterId"]));
    }
    if (m.find("clusterName") != m.end() && !m["clusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["clusterName"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~QueryByInstanceInfoResponseBodyData() = default;
};
class QueryByInstanceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<QueryByInstanceInfoResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  QueryByInstanceInfoResponseBody() {}

  explicit QueryByInstanceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<QueryByInstanceInfoResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryByInstanceInfoResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryByInstanceInfoResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~QueryByInstanceInfoResponseBody() = default;
};
class QueryByInstanceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryByInstanceInfoResponseBody> body{};

  QueryByInstanceInfoResponse() {}

  explicit QueryByInstanceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryByInstanceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryByInstanceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryByInstanceInfoResponse() = default;
};
class QueryNodeInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  QueryNodeInfoRequest() {}

  explicit QueryNodeInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~QueryNodeInfoRequest() = default;
};
class QueryNodeInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cluserName{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<string> uid{};

  QueryNodeInfoResponseBodyData() {}

  explicit QueryNodeInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluserName) {
      res["cluserName"] = boost::any(*cluserName);
    }
    if (clusterId) {
      res["clusterId"] = boost::any(*clusterId);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluserName") != m.end() && !m["cluserName"].empty()) {
      cluserName = make_shared<string>(boost::any_cast<string>(m["cluserName"]));
    }
    if (m.find("clusterId") != m.end() && !m["clusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["clusterId"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~QueryNodeInfoResponseBodyData() = default;
};
class QueryNodeInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<QueryNodeInfoResponseBodyData>> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};

  QueryNodeInfoResponseBody() {}

  explicit QueryNodeInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<QueryNodeInfoResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryNodeInfoResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryNodeInfoResponseBodyData>>(expect1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~QueryNodeInfoResponseBody() = default;
};
class QueryNodeInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryNodeInfoResponseBody> body{};

  QueryNodeInfoResponse() {}

  explicit QueryNodeInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryNodeInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryNodeInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryNodeInfoResponse() = default;
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
  AICreateSessionMessageResponse aICreateSessionMessageWithOptions(shared_ptr<AICreateSessionMessageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AICreateSessionMessageResponse aICreateSessionMessage(shared_ptr<AICreateSessionMessageRequest> request);
  CreateDiagnosisResponse createDiagnosisWithOptions(shared_ptr<CreateDiagnosisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDiagnosisResponse createDiagnosis(shared_ptr<CreateDiagnosisRequest> request);
  GetClusterResponse getClusterWithOptions(shared_ptr<GetClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetClusterResponse getCluster(shared_ptr<GetClusterRequest> request);
  GetClusterWarningResponse getClusterWarningWithOptions(shared_ptr<GetClusterWarningRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetClusterWarningResponse getClusterWarning(shared_ptr<GetClusterWarningRequest> request);
  GetDiagnosisResultResponse getDiagnosisResultWithOptions(shared_ptr<GetDiagnosisResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDiagnosisResultResponse getDiagnosisResult(shared_ptr<GetDiagnosisResultRequest> request);
  GetUserClusterWarningResponse getUserClusterWarningWithOptions(shared_ptr<GetUserClusterWarningRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserClusterWarningResponse getUserClusterWarning(shared_ptr<GetUserClusterWarningRequest> request);
  GetWebshellTokenResponse getWebshellTokenWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWebshellTokenResponse getWebshellToken();
  HelloResponse helloWithOptions(shared_ptr<HelloRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HelloResponse hello(shared_ptr<HelloRequest> request);
  ListClusterDeprecatedAPIResponse listClusterDeprecatedAPIWithOptions(shared_ptr<ListClusterDeprecatedAPIRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterDeprecatedAPIResponse listClusterDeprecatedAPI(shared_ptr<ListClusterDeprecatedAPIRequest> request);
  ListClusterImagesResponse listClusterImagesWithOptions(shared_ptr<ListClusterImagesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterImagesResponse listClusterImages(shared_ptr<ListClusterImagesRequest> request);
  ListUserClustersResponse listUserClustersWithOptions(shared_ptr<ListUserClustersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserClustersResponse listUserClusters(shared_ptr<ListUserClustersRequest> request);
  QueryByInstanceInfoResponse queryByInstanceInfoWithOptions(shared_ptr<QueryByInstanceInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryByInstanceInfoResponse queryByInstanceInfo(shared_ptr<QueryByInstanceInfoRequest> request);
  QueryNodeInfoResponse queryNodeInfoWithOptions(shared_ptr<QueryNodeInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryNodeInfoResponse queryNodeInfo(shared_ptr<QueryNodeInfoRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Qianzhou20211111

#endif
