// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_INTELLIGENTCREATION20241107_H_
#define ALIBABACLOUD_INTELLIGENTCREATION20241107_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_IntelligentCreation20241107 {
class CreateLabelTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileUrl{};
  shared_ptr<string> idempotentId{};
  shared_ptr<string> labelTemplateId{};

  CreateLabelTaskRequest() {}

  explicit CreateLabelTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileUrl) {
      res["fileUrl"] = boost::any(*fileUrl);
    }
    if (idempotentId) {
      res["idempotentId"] = boost::any(*idempotentId);
    }
    if (labelTemplateId) {
      res["labelTemplateId"] = boost::any(*labelTemplateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["fileUrl"]));
    }
    if (m.find("idempotentId") != m.end() && !m["idempotentId"].empty()) {
      idempotentId = make_shared<string>(boost::any_cast<string>(m["idempotentId"]));
    }
    if (m.find("labelTemplateId") != m.end() && !m["labelTemplateId"].empty()) {
      labelTemplateId = make_shared<string>(boost::any_cast<string>(m["labelTemplateId"]));
    }
  }


  virtual ~CreateLabelTaskRequest() = default;
};
class CreateLabelTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  CreateLabelTaskResponseBody() {}

  explicit CreateLabelTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~CreateLabelTaskResponseBody() = default;
};
class CreateLabelTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLabelTaskResponseBody> body{};

  CreateLabelTaskResponse() {}

  explicit CreateLabelTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateLabelTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLabelTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLabelTaskResponse() = default;
};
class GetLabelTaskResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetLabelTaskResultRequest() {}

  explicit GetLabelTaskResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetLabelTaskResultRequest() = default;
};
class GetLabelTaskResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resultDataUrl{};
  shared_ptr<string> status{};
  shared_ptr<long> tokens{};

  GetLabelTaskResultResponseBody() {}

  explicit GetLabelTaskResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resultDataUrl) {
      res["resultDataUrl"] = boost::any(*resultDataUrl);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tokens) {
      res["tokens"] = boost::any(*tokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resultDataUrl") != m.end() && !m["resultDataUrl"].empty()) {
      resultDataUrl = make_shared<string>(boost::any_cast<string>(m["resultDataUrl"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tokens") != m.end() && !m["tokens"].empty()) {
      tokens = make_shared<long>(boost::any_cast<long>(m["tokens"]));
    }
  }


  virtual ~GetLabelTaskResultResponseBody() = default;
};
class GetLabelTaskResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLabelTaskResultResponseBody> body{};

  GetLabelTaskResultResponse() {}

  explicit GetLabelTaskResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetLabelTaskResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLabelTaskResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetLabelTaskResultResponse() = default;
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
  CreateLabelTaskResponse createLabelTaskWithOptions(shared_ptr<CreateLabelTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLabelTaskResponse createLabelTask(shared_ptr<CreateLabelTaskRequest> request);
  GetLabelTaskResultResponse getLabelTaskResultWithOptions(shared_ptr<GetLabelTaskResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLabelTaskResultResponse getLabelTaskResult(shared_ptr<GetLabelTaskResultRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_IntelligentCreation20241107

#endif
