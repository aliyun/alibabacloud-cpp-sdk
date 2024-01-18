// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AIMIAOBI20230801_H_
#define ALIBABACLOUD_AIMIAOBI20230801_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_AiMiaoBi20230801 {
class CancelAsyncTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> taskId{};

  CancelAsyncTaskRequest() {}

  explicit CancelAsyncTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CancelAsyncTaskRequest() = default;
};
class CancelAsyncTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CancelAsyncTaskResponseBody() {}

  explicit CancelAsyncTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CancelAsyncTaskResponseBody() = default;
};
class CancelAsyncTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelAsyncTaskResponseBody> body{};

  CancelAsyncTaskResponse() {}

  explicit CancelAsyncTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelAsyncTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelAsyncTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelAsyncTaskResponse() = default;
};
class CreateGeneratedContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> content{};
  shared_ptr<string> contentDomain{};
  shared_ptr<string> contentText{};
  shared_ptr<vector<string>> keywords{};
  shared_ptr<string> prompt{};
  shared_ptr<string> taskId{};
  shared_ptr<string> title{};
  shared_ptr<string> uuid{};

  CreateGeneratedContentRequest() {}

  explicit CreateGeneratedContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentDomain) {
      res["ContentDomain"] = boost::any(*contentDomain);
    }
    if (contentText) {
      res["ContentText"] = boost::any(*contentText);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentDomain") != m.end() && !m["ContentDomain"].empty()) {
      contentDomain = make_shared<string>(boost::any_cast<string>(m["ContentDomain"]));
    }
    if (m.find("ContentText") != m.end() && !m["ContentText"].empty()) {
      contentText = make_shared<string>(boost::any_cast<string>(m["ContentText"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~CreateGeneratedContentRequest() = default;
};
class CreateGeneratedContentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> content{};
  shared_ptr<string> contentDomain{};
  shared_ptr<string> contentText{};
  shared_ptr<string> keywordsShrink{};
  shared_ptr<string> prompt{};
  shared_ptr<string> taskId{};
  shared_ptr<string> title{};
  shared_ptr<string> uuid{};

  CreateGeneratedContentShrinkRequest() {}

  explicit CreateGeneratedContentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentDomain) {
      res["ContentDomain"] = boost::any(*contentDomain);
    }
    if (contentText) {
      res["ContentText"] = boost::any(*contentText);
    }
    if (keywordsShrink) {
      res["Keywords"] = boost::any(*keywordsShrink);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentDomain") != m.end() && !m["ContentDomain"].empty()) {
      contentDomain = make_shared<string>(boost::any_cast<string>(m["ContentDomain"]));
    }
    if (m.find("ContentText") != m.end() && !m["ContentText"].empty()) {
      contentText = make_shared<string>(boost::any_cast<string>(m["ContentText"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywordsShrink = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~CreateGeneratedContentShrinkRequest() = default;
};
class CreateGeneratedContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateGeneratedContentResponseBody() {}

  explicit CreateGeneratedContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateGeneratedContentResponseBody() = default;
};
class CreateGeneratedContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGeneratedContentResponseBody> body{};

  CreateGeneratedContentResponse() {}

  explicit CreateGeneratedContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGeneratedContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGeneratedContentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGeneratedContentResponse() = default;
};
class CreateTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};

  CreateTokenRequest() {}

  explicit CreateTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
  }


  virtual ~CreateTokenRequest() = default;
};
class CreateTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> expiredTime{};
  shared_ptr<string> token{};

  CreateTokenResponseBodyData() {}

  explicit CreateTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~CreateTokenResponseBodyData() = default;
};
class CreateTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateTokenResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateTokenResponseBody() {}

  explicit CreateTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateTokenResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateTokenResponseBody() = default;
};
class CreateTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTokenResponseBody> body{};

  CreateTokenResponse() {}

  explicit CreateTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTokenResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTokenResponse() = default;
};
class DeleteGeneratedContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> id{};

  DeleteGeneratedContentRequest() {}

  explicit DeleteGeneratedContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteGeneratedContentRequest() = default;
};
class DeleteGeneratedContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteGeneratedContentResponseBody() {}

  explicit DeleteGeneratedContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteGeneratedContentResponseBody() = default;
};
class DeleteGeneratedContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGeneratedContentResponseBody> body{};

  DeleteGeneratedContentResponse() {}

  explicit DeleteGeneratedContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGeneratedContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGeneratedContentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGeneratedContentResponse() = default;
};
class DeleteMaterialByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> id{};

  DeleteMaterialByIdRequest() {}

  explicit DeleteMaterialByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteMaterialByIdRequest() = default;
};
class DeleteMaterialByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteMaterialByIdResponseBody() {}

  explicit DeleteMaterialByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteMaterialByIdResponseBody() = default;
};
class DeleteMaterialByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMaterialByIdResponseBody> body{};

  DeleteMaterialByIdResponse() {}

  explicit DeleteMaterialByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMaterialByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMaterialByIdResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMaterialByIdResponse() = default;
};
class ExportGeneratedContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> id{};

  ExportGeneratedContentRequest() {}

  explicit ExportGeneratedContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ExportGeneratedContentRequest() = default;
};
class ExportGeneratedContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExportGeneratedContentResponseBody() {}

  explicit ExportGeneratedContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExportGeneratedContentResponseBody() = default;
};
class ExportGeneratedContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportGeneratedContentResponseBody> body{};

  ExportGeneratedContentResponse() {}

  explicit ExportGeneratedContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportGeneratedContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportGeneratedContentResponseBody>(model1);
      }
    }
  }


  virtual ~ExportGeneratedContentResponse() = default;
};
class FeedbackDialogueRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> customerResponse{};
  shared_ptr<string> goodText{};
  shared_ptr<string> modifiedResponse{};
  shared_ptr<string> rating{};
  shared_ptr<vector<string>> ratingTags{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};

  FeedbackDialogueRequest() {}

  explicit FeedbackDialogueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (customerResponse) {
      res["CustomerResponse"] = boost::any(*customerResponse);
    }
    if (goodText) {
      res["GoodText"] = boost::any(*goodText);
    }
    if (modifiedResponse) {
      res["ModifiedResponse"] = boost::any(*modifiedResponse);
    }
    if (rating) {
      res["Rating"] = boost::any(*rating);
    }
    if (ratingTags) {
      res["RatingTags"] = boost::any(*ratingTags);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CustomerResponse") != m.end() && !m["CustomerResponse"].empty()) {
      customerResponse = make_shared<string>(boost::any_cast<string>(m["CustomerResponse"]));
    }
    if (m.find("GoodText") != m.end() && !m["GoodText"].empty()) {
      goodText = make_shared<string>(boost::any_cast<string>(m["GoodText"]));
    }
    if (m.find("ModifiedResponse") != m.end() && !m["ModifiedResponse"].empty()) {
      modifiedResponse = make_shared<string>(boost::any_cast<string>(m["ModifiedResponse"]));
    }
    if (m.find("Rating") != m.end() && !m["Rating"].empty()) {
      rating = make_shared<string>(boost::any_cast<string>(m["Rating"]));
    }
    if (m.find("RatingTags") != m.end() && !m["RatingTags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RatingTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RatingTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ratingTags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~FeedbackDialogueRequest() = default;
};
class FeedbackDialogueShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> customerResponse{};
  shared_ptr<string> goodText{};
  shared_ptr<string> modifiedResponse{};
  shared_ptr<string> rating{};
  shared_ptr<string> ratingTagsShrink{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};

  FeedbackDialogueShrinkRequest() {}

  explicit FeedbackDialogueShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (customerResponse) {
      res["CustomerResponse"] = boost::any(*customerResponse);
    }
    if (goodText) {
      res["GoodText"] = boost::any(*goodText);
    }
    if (modifiedResponse) {
      res["ModifiedResponse"] = boost::any(*modifiedResponse);
    }
    if (rating) {
      res["Rating"] = boost::any(*rating);
    }
    if (ratingTagsShrink) {
      res["RatingTags"] = boost::any(*ratingTagsShrink);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CustomerResponse") != m.end() && !m["CustomerResponse"].empty()) {
      customerResponse = make_shared<string>(boost::any_cast<string>(m["CustomerResponse"]));
    }
    if (m.find("GoodText") != m.end() && !m["GoodText"].empty()) {
      goodText = make_shared<string>(boost::any_cast<string>(m["GoodText"]));
    }
    if (m.find("ModifiedResponse") != m.end() && !m["ModifiedResponse"].empty()) {
      modifiedResponse = make_shared<string>(boost::any_cast<string>(m["ModifiedResponse"]));
    }
    if (m.find("Rating") != m.end() && !m["Rating"].empty()) {
      rating = make_shared<string>(boost::any_cast<string>(m["Rating"]));
    }
    if (m.find("RatingTags") != m.end() && !m["RatingTags"].empty()) {
      ratingTagsShrink = make_shared<string>(boost::any_cast<string>(m["RatingTags"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~FeedbackDialogueShrinkRequest() = default;
};
class FeedbackDialogueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FeedbackDialogueResponseBody() {}

  explicit FeedbackDialogueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FeedbackDialogueResponseBody() = default;
};
class FeedbackDialogueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FeedbackDialogueResponseBody> body{};

  FeedbackDialogueResponse() {}

  explicit FeedbackDialogueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FeedbackDialogueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FeedbackDialogueResponseBody>(model1);
      }
    }
  }


  virtual ~FeedbackDialogueResponse() = default;
};
class FetchImageTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> articleTaskId{};
  shared_ptr<vector<string>> taskIdList{};

  FetchImageTaskRequest() {}

  explicit FetchImageTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (articleTaskId) {
      res["ArticleTaskId"] = boost::any(*articleTaskId);
    }
    if (taskIdList) {
      res["TaskIdList"] = boost::any(*taskIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ArticleTaskId") != m.end() && !m["ArticleTaskId"].empty()) {
      articleTaskId = make_shared<string>(boost::any_cast<string>(m["ArticleTaskId"]));
    }
    if (m.find("TaskIdList") != m.end() && !m["TaskIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~FetchImageTaskRequest() = default;
};
class FetchImageTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> articleTaskId{};
  shared_ptr<string> taskIdListShrink{};

  FetchImageTaskShrinkRequest() {}

  explicit FetchImageTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (articleTaskId) {
      res["ArticleTaskId"] = boost::any(*articleTaskId);
    }
    if (taskIdListShrink) {
      res["TaskIdList"] = boost::any(*taskIdListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ArticleTaskId") != m.end() && !m["ArticleTaskId"].empty()) {
      articleTaskId = make_shared<string>(boost::any_cast<string>(m["ArticleTaskId"]));
    }
    if (m.find("TaskIdList") != m.end() && !m["TaskIdList"].empty()) {
      taskIdListShrink = make_shared<string>(boost::any_cast<string>(m["TaskIdList"]));
    }
  }


  virtual ~FetchImageTaskShrinkRequest() = default;
};
class FetchImageTaskResponseBodyDataTaskInfoListImageList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> url{};

  FetchImageTaskResponseBodyDataTaskInfoListImageList() {}

  explicit FetchImageTaskResponseBodyDataTaskInfoListImageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~FetchImageTaskResponseBodyDataTaskInfoListImageList() = default;
};
class FetchImageTaskResponseBodyDataTaskInfoList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<vector<FetchImageTaskResponseBodyDataTaskInfoListImageList>> imageList{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};

  FetchImageTaskResponseBodyDataTaskInfoList() {}

  explicit FetchImageTaskResponseBodyDataTaskInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imageList) {
      vector<boost::any> temp1;
      for(auto item1:*imageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageList"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ImageList") != m.end() && !m["ImageList"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageList"].type()) {
        vector<FetchImageTaskResponseBodyDataTaskInfoListImageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FetchImageTaskResponseBodyDataTaskInfoListImageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageList = make_shared<vector<FetchImageTaskResponseBodyDataTaskInfoListImageList>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~FetchImageTaskResponseBodyDataTaskInfoList() = default;
};
class FetchImageTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<FetchImageTaskResponseBodyDataTaskInfoList>> taskInfoList{};

  FetchImageTaskResponseBodyData() {}

  explicit FetchImageTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*taskInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskInfoList") != m.end() && !m["TaskInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskInfoList"].type()) {
        vector<FetchImageTaskResponseBodyDataTaskInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FetchImageTaskResponseBodyDataTaskInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskInfoList = make_shared<vector<FetchImageTaskResponseBodyDataTaskInfoList>>(expect1);
      }
    }
  }


  virtual ~FetchImageTaskResponseBodyData() = default;
};
class FetchImageTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<FetchImageTaskResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FetchImageTaskResponseBody() {}

  explicit FetchImageTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        FetchImageTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<FetchImageTaskResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FetchImageTaskResponseBody() = default;
};
class FetchImageTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FetchImageTaskResponseBody> body{};

  FetchImageTaskResponse() {}

  explicit FetchImageTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FetchImageTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FetchImageTaskResponseBody>(model1);
      }
    }
  }


  virtual ~FetchImageTaskResponse() = default;
};
class GenerateImageTaskRequestParagraphList : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> id{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};

  GenerateImageTaskRequestParagraphList() {}

  explicit GenerateImageTaskRequestParagraphList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~GenerateImageTaskRequestParagraphList() = default;
};
class GenerateImageTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> articleTaskId{};
  shared_ptr<vector<GenerateImageTaskRequestParagraphList>> paragraphList{};
  shared_ptr<string> size{};
  shared_ptr<string> style{};

  GenerateImageTaskRequest() {}

  explicit GenerateImageTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (articleTaskId) {
      res["ArticleTaskId"] = boost::any(*articleTaskId);
    }
    if (paragraphList) {
      vector<boost::any> temp1;
      for(auto item1:*paragraphList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParagraphList"] = boost::any(temp1);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (style) {
      res["Style"] = boost::any(*style);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ArticleTaskId") != m.end() && !m["ArticleTaskId"].empty()) {
      articleTaskId = make_shared<string>(boost::any_cast<string>(m["ArticleTaskId"]));
    }
    if (m.find("ParagraphList") != m.end() && !m["ParagraphList"].empty()) {
      if (typeid(vector<boost::any>) == m["ParagraphList"].type()) {
        vector<GenerateImageTaskRequestParagraphList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParagraphList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateImageTaskRequestParagraphList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paragraphList = make_shared<vector<GenerateImageTaskRequestParagraphList>>(expect1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Style") != m.end() && !m["Style"].empty()) {
      style = make_shared<string>(boost::any_cast<string>(m["Style"]));
    }
  }


  virtual ~GenerateImageTaskRequest() = default;
};
class GenerateImageTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> articleTaskId{};
  shared_ptr<string> paragraphListShrink{};
  shared_ptr<string> size{};
  shared_ptr<string> style{};

  GenerateImageTaskShrinkRequest() {}

  explicit GenerateImageTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (articleTaskId) {
      res["ArticleTaskId"] = boost::any(*articleTaskId);
    }
    if (paragraphListShrink) {
      res["ParagraphList"] = boost::any(*paragraphListShrink);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (style) {
      res["Style"] = boost::any(*style);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ArticleTaskId") != m.end() && !m["ArticleTaskId"].empty()) {
      articleTaskId = make_shared<string>(boost::any_cast<string>(m["ArticleTaskId"]));
    }
    if (m.find("ParagraphList") != m.end() && !m["ParagraphList"].empty()) {
      paragraphListShrink = make_shared<string>(boost::any_cast<string>(m["ParagraphList"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Style") != m.end() && !m["Style"].empty()) {
      style = make_shared<string>(boost::any_cast<string>(m["Style"]));
    }
  }


  virtual ~GenerateImageTaskShrinkRequest() = default;
};
class GenerateImageTaskResponseBodyDataTaskList : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> id{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};

  GenerateImageTaskResponseBodyDataTaskList() {}

  explicit GenerateImageTaskResponseBodyDataTaskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~GenerateImageTaskResponseBodyDataTaskList() = default;
};
class GenerateImageTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GenerateImageTaskResponseBodyDataTaskList>> taskList{};

  GenerateImageTaskResponseBodyData() {}

  explicit GenerateImageTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskList) {
      vector<boost::any> temp1;
      for(auto item1:*taskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskList") != m.end() && !m["TaskList"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskList"].type()) {
        vector<GenerateImageTaskResponseBodyDataTaskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateImageTaskResponseBodyDataTaskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskList = make_shared<vector<GenerateImageTaskResponseBodyDataTaskList>>(expect1);
      }
    }
  }


  virtual ~GenerateImageTaskResponseBodyData() = default;
};
class GenerateImageTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GenerateImageTaskResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GenerateImageTaskResponseBody() {}

  explicit GenerateImageTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GenerateImageTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateImageTaskResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GenerateImageTaskResponseBody() = default;
};
class GenerateImageTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateImageTaskResponseBody> body{};

  GenerateImageTaskResponse() {}

  explicit GenerateImageTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateImageTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateImageTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateImageTaskResponse() = default;
};
class GenerateViewPointRequestReferenceData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> miniDoc{};

  GenerateViewPointRequestReferenceData() {}

  explicit GenerateViewPointRequestReferenceData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (miniDoc) {
      res["MiniDoc"] = boost::any(*miniDoc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MiniDoc") != m.end() && !m["MiniDoc"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MiniDoc"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MiniDoc"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      miniDoc = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GenerateViewPointRequestReferenceData() = default;
};
class GenerateViewPointRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<GenerateViewPointRequestReferenceData> referenceData{};

  GenerateViewPointRequest() {}

  explicit GenerateViewPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (referenceData) {
      res["ReferenceData"] = referenceData ? boost::any(referenceData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ReferenceData") != m.end() && !m["ReferenceData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReferenceData"].type()) {
        GenerateViewPointRequestReferenceData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReferenceData"]));
        referenceData = make_shared<GenerateViewPointRequestReferenceData>(model1);
      }
    }
  }


  virtual ~GenerateViewPointRequest() = default;
};
class GenerateViewPointShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> referenceDataShrink{};

  GenerateViewPointShrinkRequest() {}

  explicit GenerateViewPointShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (referenceDataShrink) {
      res["ReferenceData"] = boost::any(*referenceDataShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ReferenceData") != m.end() && !m["ReferenceData"].empty()) {
      referenceDataShrink = make_shared<string>(boost::any_cast<string>(m["ReferenceData"]));
    }
  }


  virtual ~GenerateViewPointShrinkRequest() = default;
};
class GenerateViewPointResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> point{};

  GenerateViewPointResponseBodyData() {}

  explicit GenerateViewPointResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (point) {
      res["Point"] = boost::any(*point);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Point") != m.end() && !m["Point"].empty()) {
      point = make_shared<string>(boost::any_cast<string>(m["Point"]));
    }
  }


  virtual ~GenerateViewPointResponseBodyData() = default;
};
class GenerateViewPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GenerateViewPointResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GenerateViewPointResponseBody() {}

  explicit GenerateViewPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GenerateViewPointResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateViewPointResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GenerateViewPointResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GenerateViewPointResponseBody() = default;
};
class GenerateViewPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateViewPointResponseBody> body{};

  GenerateViewPointResponse() {}

  explicit GenerateViewPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateViewPointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateViewPointResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateViewPointResponse() = default;
};
class GetDataSourceOrderConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> productCode{};

  GetDataSourceOrderConfigRequest() {}

  explicit GetDataSourceOrderConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~GetDataSourceOrderConfigRequest() = default;
};
class GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};
  shared_ptr<long> number{};
  shared_ptr<string> type{};

  GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList() {}

  explicit GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["Number"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList() = default;
};
class GetDataSourceOrderConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList>> userConfigDataSourceList{};

  GetDataSourceOrderConfigResponseBodyData() {}

  explicit GetDataSourceOrderConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userConfigDataSourceList) {
      vector<boost::any> temp1;
      for(auto item1:*userConfigDataSourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserConfigDataSourceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserConfigDataSourceList") != m.end() && !m["UserConfigDataSourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserConfigDataSourceList"].type()) {
        vector<GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserConfigDataSourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userConfigDataSourceList = make_shared<vector<GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList>>(expect1);
      }
    }
  }


  virtual ~GetDataSourceOrderConfigResponseBodyData() = default;
};
class GetDataSourceOrderConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDataSourceOrderConfigResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDataSourceOrderConfigResponseBody() {}

  explicit GetDataSourceOrderConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDataSourceOrderConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDataSourceOrderConfigResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetDataSourceOrderConfigResponseBody() = default;
};
class GetDataSourceOrderConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataSourceOrderConfigResponseBody> body{};

  GetDataSourceOrderConfigResponse() {}

  explicit GetDataSourceOrderConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataSourceOrderConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataSourceOrderConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataSourceOrderConfigResponse() = default;
};
class GetGeneratedContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> id{};

  GetGeneratedContentRequest() {}

  explicit GetGeneratedContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetGeneratedContentRequest() = default;
};
class GetGeneratedContentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentDomain{};
  shared_ptr<string> contentText{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<string> deviceId{};
  shared_ptr<long> id{};
  shared_ptr<vector<string>> keywordList{};
  shared_ptr<string> keywords{};
  shared_ptr<string> prompt{};
  shared_ptr<string> taskId{};
  shared_ptr<string> title{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> updateUser{};
  shared_ptr<string> uuid{};

  GetGeneratedContentResponseBodyData() {}

  explicit GetGeneratedContentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentDomain) {
      res["ContentDomain"] = boost::any(*contentDomain);
    }
    if (contentText) {
      res["ContentText"] = boost::any(*contentText);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (keywordList) {
      res["KeywordList"] = boost::any(*keywordList);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateUser) {
      res["UpdateUser"] = boost::any(*updateUser);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentDomain") != m.end() && !m["ContentDomain"].empty()) {
      contentDomain = make_shared<string>(boost::any_cast<string>(m["ContentDomain"]));
    }
    if (m.find("ContentText") != m.end() && !m["ContentText"].empty()) {
      contentText = make_shared<string>(boost::any_cast<string>(m["ContentText"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("KeywordList") != m.end() && !m["KeywordList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeywordList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeywordList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keywordList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateUser") != m.end() && !m["UpdateUser"].empty()) {
      updateUser = make_shared<string>(boost::any_cast<string>(m["UpdateUser"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetGeneratedContentResponseBodyData() = default;
};
class GetGeneratedContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetGeneratedContentResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetGeneratedContentResponseBody() {}

  explicit GetGeneratedContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetGeneratedContentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetGeneratedContentResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetGeneratedContentResponseBody() = default;
};
class GetGeneratedContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGeneratedContentResponseBody> body{};

  GetGeneratedContentResponse() {}

  explicit GetGeneratedContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGeneratedContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGeneratedContentResponseBody>(model1);
      }
    }
  }


  virtual ~GetGeneratedContentResponse() = default;
};
class GetMaterialByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> id{};

  GetMaterialByIdRequest() {}

  explicit GetMaterialByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetMaterialByIdRequest() = default;
};
class GetMaterialByIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> author{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<vector<string>> docKeywords{};
  shared_ptr<string> docType{};
  shared_ptr<string> externalUrl{};
  shared_ptr<string> htmlContent{};
  shared_ptr<long> id{};
  shared_ptr<string> pubTime{};
  shared_ptr<string> publicUrl{};
  shared_ptr<long> shareAttr{};
  shared_ptr<string> srcFrom{};
  shared_ptr<string> summary{};
  shared_ptr<string> textContent{};
  shared_ptr<string> thumbnailInBase64{};
  shared_ptr<string> title{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> updateUser{};
  shared_ptr<string> url{};

  GetMaterialByIdResponseBodyData() {}

  explicit GetMaterialByIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (author) {
      res["Author"] = boost::any(*author);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (docKeywords) {
      res["DocKeywords"] = boost::any(*docKeywords);
    }
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (externalUrl) {
      res["ExternalUrl"] = boost::any(*externalUrl);
    }
    if (htmlContent) {
      res["HtmlContent"] = boost::any(*htmlContent);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pubTime) {
      res["PubTime"] = boost::any(*pubTime);
    }
    if (publicUrl) {
      res["PublicUrl"] = boost::any(*publicUrl);
    }
    if (shareAttr) {
      res["ShareAttr"] = boost::any(*shareAttr);
    }
    if (srcFrom) {
      res["SrcFrom"] = boost::any(*srcFrom);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (textContent) {
      res["TextContent"] = boost::any(*textContent);
    }
    if (thumbnailInBase64) {
      res["ThumbnailInBase64"] = boost::any(*thumbnailInBase64);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateUser) {
      res["UpdateUser"] = boost::any(*updateUser);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["Author"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("DocKeywords") != m.end() && !m["DocKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DocKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      docKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("ExternalUrl") != m.end() && !m["ExternalUrl"].empty()) {
      externalUrl = make_shared<string>(boost::any_cast<string>(m["ExternalUrl"]));
    }
    if (m.find("HtmlContent") != m.end() && !m["HtmlContent"].empty()) {
      htmlContent = make_shared<string>(boost::any_cast<string>(m["HtmlContent"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PubTime") != m.end() && !m["PubTime"].empty()) {
      pubTime = make_shared<string>(boost::any_cast<string>(m["PubTime"]));
    }
    if (m.find("PublicUrl") != m.end() && !m["PublicUrl"].empty()) {
      publicUrl = make_shared<string>(boost::any_cast<string>(m["PublicUrl"]));
    }
    if (m.find("ShareAttr") != m.end() && !m["ShareAttr"].empty()) {
      shareAttr = make_shared<long>(boost::any_cast<long>(m["ShareAttr"]));
    }
    if (m.find("SrcFrom") != m.end() && !m["SrcFrom"].empty()) {
      srcFrom = make_shared<string>(boost::any_cast<string>(m["SrcFrom"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("TextContent") != m.end() && !m["TextContent"].empty()) {
      textContent = make_shared<string>(boost::any_cast<string>(m["TextContent"]));
    }
    if (m.find("ThumbnailInBase64") != m.end() && !m["ThumbnailInBase64"].empty()) {
      thumbnailInBase64 = make_shared<string>(boost::any_cast<string>(m["ThumbnailInBase64"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateUser") != m.end() && !m["UpdateUser"].empty()) {
      updateUser = make_shared<string>(boost::any_cast<string>(m["UpdateUser"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetMaterialByIdResponseBodyData() = default;
};
class GetMaterialByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetMaterialByIdResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetMaterialByIdResponseBody() {}

  explicit GetMaterialByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetMaterialByIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetMaterialByIdResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetMaterialByIdResponseBody() = default;
};
class GetMaterialByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMaterialByIdResponseBody> body{};

  GetMaterialByIdResponse() {}

  explicit GetMaterialByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMaterialByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMaterialByIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetMaterialByIdResponse() = default;
};
class GetPropertiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};

  GetPropertiesRequest() {}

  explicit GetPropertiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
  }


  virtual ~GetPropertiesRequest() = default;
};
class GetPropertiesResponseBodyDataConsoleConfig : public Darabonba::Model {
public:
  shared_ptr<string> tipContent{};
  shared_ptr<string> title{};

  GetPropertiesResponseBodyDataConsoleConfig() {}

  explicit GetPropertiesResponseBodyDataConsoleConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tipContent) {
      res["TipContent"] = boost::any(*tipContent);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TipContent") != m.end() && !m["TipContent"].empty()) {
      tipContent = make_shared<string>(boost::any_cast<string>(m["TipContent"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetPropertiesResponseBodyDataConsoleConfig() = default;
};
class GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles : public Darabonba::Model {
public:
  shared_ptr<bool> select{};
  shared_ptr<bool> stared{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles() {}

  explicit GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (select) {
      res["Select"] = boost::any(*select);
    }
    if (stared) {
      res["Stared"] = boost::any(*stared);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Select") != m.end() && !m["Select"].empty()) {
      select = make_shared<bool>(boost::any_cast<bool>(m["Select"]));
    }
    if (m.find("Stared") != m.end() && !m["Stared"].empty()) {
      stared = make_shared<bool>(boost::any_cast<bool>(m["Stared"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles() = default;
};
class GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples : public Darabonba::Model {
public:
  shared_ptr<vector<GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles>> articles{};
  shared_ptr<string> prompt{};
  shared_ptr<string> text{};

  GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples() {}

  explicit GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (articles) {
      vector<boost::any> temp1;
      for(auto item1:*articles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Articles"] = boost::any(temp1);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Articles") != m.end() && !m["Articles"].empty()) {
      if (typeid(vector<boost::any>) == m["Articles"].type()) {
        vector<GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Articles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        articles = make_shared<vector<GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles>>(expect1);
      }
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples() = default;
};
class GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> name{};

  GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources() {}

  explicit GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources() = default;
};
class GetPropertiesResponseBodyDataIntelligentSearchConfig : public Darabonba::Model {
public:
  shared_ptr<string> productDescription{};
  shared_ptr<vector<GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples>> searchSamples{};
  shared_ptr<vector<GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources>> searchSources{};

  GetPropertiesResponseBodyDataIntelligentSearchConfig() {}

  explicit GetPropertiesResponseBodyDataIntelligentSearchConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productDescription) {
      res["ProductDescription"] = boost::any(*productDescription);
    }
    if (searchSamples) {
      vector<boost::any> temp1;
      for(auto item1:*searchSamples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SearchSamples"] = boost::any(temp1);
    }
    if (searchSources) {
      vector<boost::any> temp1;
      for(auto item1:*searchSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SearchSources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductDescription") != m.end() && !m["ProductDescription"].empty()) {
      productDescription = make_shared<string>(boost::any_cast<string>(m["ProductDescription"]));
    }
    if (m.find("SearchSamples") != m.end() && !m["SearchSamples"].empty()) {
      if (typeid(vector<boost::any>) == m["SearchSamples"].type()) {
        vector<GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SearchSamples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        searchSamples = make_shared<vector<GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamples>>(expect1);
      }
    }
    if (m.find("SearchSources") != m.end() && !m["SearchSources"].empty()) {
      if (typeid(vector<boost::any>) == m["SearchSources"].type()) {
        vector<GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SearchSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        searchSources = make_shared<vector<GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSources>>(expect1);
      }
    }
  }


  virtual ~GetPropertiesResponseBodyDataIntelligentSearchConfig() = default;
};
class GetPropertiesResponseBodyDataSearchSources : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<string> value{};

  GetPropertiesResponseBodyDataSearchSources() {}

  explicit GetPropertiesResponseBodyDataSearchSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetPropertiesResponseBodyDataSearchSources() = default;
};
class GetPropertiesResponseBodyDataUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userId{};
  shared_ptr<string> username{};

  GetPropertiesResponseBodyDataUserInfo() {}

  explicit GetPropertiesResponseBodyDataUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["AgentId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~GetPropertiesResponseBodyDataUserInfo() = default;
};
class GetPropertiesResponseBodyDataWanxiangImageSizeConfig : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetPropertiesResponseBodyDataWanxiangImageSizeConfig() {}

  explicit GetPropertiesResponseBodyDataWanxiangImageSizeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetPropertiesResponseBodyDataWanxiangImageSizeConfig() = default;
};
class GetPropertiesResponseBodyDataWanxiangImageStyleConfig : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> pic{};
  shared_ptr<string> value{};

  GetPropertiesResponseBodyDataWanxiangImageStyleConfig() {}

  explicit GetPropertiesResponseBodyDataWanxiangImageStyleConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pic) {
      res["Pic"] = boost::any(*pic);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Pic") != m.end() && !m["Pic"].empty()) {
      pic = make_shared<string>(boost::any_cast<string>(m["Pic"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetPropertiesResponseBodyDataWanxiangImageStyleConfig() = default;
};
class GetPropertiesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> chatConfig{};
  shared_ptr<GetPropertiesResponseBodyDataConsoleConfig> consoleConfig{};
  shared_ptr<map<string, boost::any>> generalConfigMap{};
  shared_ptr<GetPropertiesResponseBodyDataIntelligentSearchConfig> intelligentSearchConfig{};
  shared_ptr<vector<GetPropertiesResponseBodyDataSearchSources>> searchSources{};
  shared_ptr<bool> slrAuthorized{};
  shared_ptr<GetPropertiesResponseBodyDataUserInfo> userInfo{};
  shared_ptr<vector<GetPropertiesResponseBodyDataWanxiangImageSizeConfig>> wanxiangImageSizeConfig{};
  shared_ptr<vector<GetPropertiesResponseBodyDataWanxiangImageStyleConfig>> wanxiangImageStyleConfig{};

  GetPropertiesResponseBodyData() {}

  explicit GetPropertiesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatConfig) {
      res["ChatConfig"] = boost::any(*chatConfig);
    }
    if (consoleConfig) {
      res["ConsoleConfig"] = consoleConfig ? boost::any(consoleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (generalConfigMap) {
      res["GeneralConfigMap"] = boost::any(*generalConfigMap);
    }
    if (intelligentSearchConfig) {
      res["IntelligentSearchConfig"] = intelligentSearchConfig ? boost::any(intelligentSearchConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (searchSources) {
      vector<boost::any> temp1;
      for(auto item1:*searchSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SearchSources"] = boost::any(temp1);
    }
    if (slrAuthorized) {
      res["SlrAuthorized"] = boost::any(*slrAuthorized);
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wanxiangImageSizeConfig) {
      vector<boost::any> temp1;
      for(auto item1:*wanxiangImageSizeConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WanxiangImageSizeConfig"] = boost::any(temp1);
    }
    if (wanxiangImageStyleConfig) {
      vector<boost::any> temp1;
      for(auto item1:*wanxiangImageStyleConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WanxiangImageStyleConfig"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChatConfig") != m.end() && !m["ChatConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ChatConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      chatConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ConsoleConfig") != m.end() && !m["ConsoleConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConsoleConfig"].type()) {
        GetPropertiesResponseBodyDataConsoleConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConsoleConfig"]));
        consoleConfig = make_shared<GetPropertiesResponseBodyDataConsoleConfig>(model1);
      }
    }
    if (m.find("GeneralConfigMap") != m.end() && !m["GeneralConfigMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["GeneralConfigMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      generalConfigMap = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("IntelligentSearchConfig") != m.end() && !m["IntelligentSearchConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["IntelligentSearchConfig"].type()) {
        GetPropertiesResponseBodyDataIntelligentSearchConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IntelligentSearchConfig"]));
        intelligentSearchConfig = make_shared<GetPropertiesResponseBodyDataIntelligentSearchConfig>(model1);
      }
    }
    if (m.find("SearchSources") != m.end() && !m["SearchSources"].empty()) {
      if (typeid(vector<boost::any>) == m["SearchSources"].type()) {
        vector<GetPropertiesResponseBodyDataSearchSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SearchSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPropertiesResponseBodyDataSearchSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        searchSources = make_shared<vector<GetPropertiesResponseBodyDataSearchSources>>(expect1);
      }
    }
    if (m.find("SlrAuthorized") != m.end() && !m["SlrAuthorized"].empty()) {
      slrAuthorized = make_shared<bool>(boost::any_cast<bool>(m["SlrAuthorized"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        GetPropertiesResponseBodyDataUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<GetPropertiesResponseBodyDataUserInfo>(model1);
      }
    }
    if (m.find("WanxiangImageSizeConfig") != m.end() && !m["WanxiangImageSizeConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["WanxiangImageSizeConfig"].type()) {
        vector<GetPropertiesResponseBodyDataWanxiangImageSizeConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WanxiangImageSizeConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPropertiesResponseBodyDataWanxiangImageSizeConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wanxiangImageSizeConfig = make_shared<vector<GetPropertiesResponseBodyDataWanxiangImageSizeConfig>>(expect1);
      }
    }
    if (m.find("WanxiangImageStyleConfig") != m.end() && !m["WanxiangImageStyleConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["WanxiangImageStyleConfig"].type()) {
        vector<GetPropertiesResponseBodyDataWanxiangImageStyleConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WanxiangImageStyleConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPropertiesResponseBodyDataWanxiangImageStyleConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wanxiangImageStyleConfig = make_shared<vector<GetPropertiesResponseBodyDataWanxiangImageStyleConfig>>(expect1);
      }
    }
  }


  virtual ~GetPropertiesResponseBodyData() = default;
};
class GetPropertiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetPropertiesResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPropertiesResponseBody() {}

  explicit GetPropertiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetPropertiesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPropertiesResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetPropertiesResponseBody() = default;
};
class GetPropertiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPropertiesResponseBody> body{};

  GetPropertiesResponse() {}

  explicit GetPropertiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPropertiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPropertiesResponseBody>(model1);
      }
    }
  }


  virtual ~GetPropertiesResponse() = default;
};
class ListAsyncTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> createTimeEnd{};
  shared_ptr<string> createTimeStart{};
  shared_ptr<long> current{};
  shared_ptr<long> size{};
  shared_ptr<string> taskCode{};
  shared_ptr<string> taskName{};
  shared_ptr<long> taskStatus{};
  shared_ptr<vector<long>> taskStatusList{};
  shared_ptr<string> taskType{};
  shared_ptr<vector<string>> taskTypeList{};

  ListAsyncTasksRequest() {}

  explicit ListAsyncTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (createTimeEnd) {
      res["CreateTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (createTimeStart) {
      res["CreateTimeStart"] = boost::any(*createTimeStart);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (taskCode) {
      res["TaskCode"] = boost::any(*taskCode);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskStatusList) {
      res["TaskStatusList"] = boost::any(*taskStatusList);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeList) {
      res["TaskTypeList"] = boost::any(*taskTypeList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CreateTimeEnd") != m.end() && !m["CreateTimeEnd"].empty()) {
      createTimeEnd = make_shared<string>(boost::any_cast<string>(m["CreateTimeEnd"]));
    }
    if (m.find("CreateTimeStart") != m.end() && !m["CreateTimeStart"].empty()) {
      createTimeStart = make_shared<string>(boost::any_cast<string>(m["CreateTimeStart"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("TaskCode") != m.end() && !m["TaskCode"].empty()) {
      taskCode = make_shared<string>(boost::any_cast<string>(m["TaskCode"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("TaskStatusList") != m.end() && !m["TaskStatusList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["TaskStatusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskStatusList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      taskStatusList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeList") != m.end() && !m["TaskTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskTypeList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListAsyncTasksRequest() = default;
};
class ListAsyncTasksShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> createTimeEnd{};
  shared_ptr<string> createTimeStart{};
  shared_ptr<long> current{};
  shared_ptr<long> size{};
  shared_ptr<string> taskCode{};
  shared_ptr<string> taskName{};
  shared_ptr<long> taskStatus{};
  shared_ptr<string> taskStatusListShrink{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeListShrink{};

  ListAsyncTasksShrinkRequest() {}

  explicit ListAsyncTasksShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (createTimeEnd) {
      res["CreateTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (createTimeStart) {
      res["CreateTimeStart"] = boost::any(*createTimeStart);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (taskCode) {
      res["TaskCode"] = boost::any(*taskCode);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskStatusListShrink) {
      res["TaskStatusList"] = boost::any(*taskStatusListShrink);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeListShrink) {
      res["TaskTypeList"] = boost::any(*taskTypeListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CreateTimeEnd") != m.end() && !m["CreateTimeEnd"].empty()) {
      createTimeEnd = make_shared<string>(boost::any_cast<string>(m["CreateTimeEnd"]));
    }
    if (m.find("CreateTimeStart") != m.end() && !m["CreateTimeStart"].empty()) {
      createTimeStart = make_shared<string>(boost::any_cast<string>(m["CreateTimeStart"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("TaskCode") != m.end() && !m["TaskCode"].empty()) {
      taskCode = make_shared<string>(boost::any_cast<string>(m["TaskCode"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("TaskStatusList") != m.end() && !m["TaskStatusList"].empty()) {
      taskStatusListShrink = make_shared<string>(boost::any_cast<string>(m["TaskStatusList"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeList") != m.end() && !m["TaskTypeList"].empty()) {
      taskTypeListShrink = make_shared<string>(boost::any_cast<string>(m["TaskTypeList"]));
    }
  }


  virtual ~ListAsyncTasksShrinkRequest() = default;
};
class ListAsyncTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<long> id{};
  shared_ptr<string> taskCode{};
  shared_ptr<string> taskDefinition{};
  shared_ptr<string> taskEndTime{};
  shared_ptr<string> taskErrorMessage{};
  shared_ptr<string> taskExecuteTime{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskInnerErrorMessage{};
  shared_ptr<string> taskIntermediateResult{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskParam{};
  shared_ptr<string> taskProgressMessage{};
  shared_ptr<string> taskResult{};
  shared_ptr<string> taskRetryCount{};
  shared_ptr<string> taskStartTime{};
  shared_ptr<long> taskStatus{};
  shared_ptr<string> taskType{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> updateUser{};

  ListAsyncTasksResponseBodyData() {}

  explicit ListAsyncTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (taskCode) {
      res["TaskCode"] = boost::any(*taskCode);
    }
    if (taskDefinition) {
      res["TaskDefinition"] = boost::any(*taskDefinition);
    }
    if (taskEndTime) {
      res["TaskEndTime"] = boost::any(*taskEndTime);
    }
    if (taskErrorMessage) {
      res["TaskErrorMessage"] = boost::any(*taskErrorMessage);
    }
    if (taskExecuteTime) {
      res["TaskExecuteTime"] = boost::any(*taskExecuteTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskInnerErrorMessage) {
      res["TaskInnerErrorMessage"] = boost::any(*taskInnerErrorMessage);
    }
    if (taskIntermediateResult) {
      res["TaskIntermediateResult"] = boost::any(*taskIntermediateResult);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskParam) {
      res["TaskParam"] = boost::any(*taskParam);
    }
    if (taskProgressMessage) {
      res["TaskProgressMessage"] = boost::any(*taskProgressMessage);
    }
    if (taskResult) {
      res["TaskResult"] = boost::any(*taskResult);
    }
    if (taskRetryCount) {
      res["TaskRetryCount"] = boost::any(*taskRetryCount);
    }
    if (taskStartTime) {
      res["TaskStartTime"] = boost::any(*taskStartTime);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateUser) {
      res["UpdateUser"] = boost::any(*updateUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("TaskCode") != m.end() && !m["TaskCode"].empty()) {
      taskCode = make_shared<string>(boost::any_cast<string>(m["TaskCode"]));
    }
    if (m.find("TaskDefinition") != m.end() && !m["TaskDefinition"].empty()) {
      taskDefinition = make_shared<string>(boost::any_cast<string>(m["TaskDefinition"]));
    }
    if (m.find("TaskEndTime") != m.end() && !m["TaskEndTime"].empty()) {
      taskEndTime = make_shared<string>(boost::any_cast<string>(m["TaskEndTime"]));
    }
    if (m.find("TaskErrorMessage") != m.end() && !m["TaskErrorMessage"].empty()) {
      taskErrorMessage = make_shared<string>(boost::any_cast<string>(m["TaskErrorMessage"]));
    }
    if (m.find("TaskExecuteTime") != m.end() && !m["TaskExecuteTime"].empty()) {
      taskExecuteTime = make_shared<string>(boost::any_cast<string>(m["TaskExecuteTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskInnerErrorMessage") != m.end() && !m["TaskInnerErrorMessage"].empty()) {
      taskInnerErrorMessage = make_shared<string>(boost::any_cast<string>(m["TaskInnerErrorMessage"]));
    }
    if (m.find("TaskIntermediateResult") != m.end() && !m["TaskIntermediateResult"].empty()) {
      taskIntermediateResult = make_shared<string>(boost::any_cast<string>(m["TaskIntermediateResult"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskParam") != m.end() && !m["TaskParam"].empty()) {
      taskParam = make_shared<string>(boost::any_cast<string>(m["TaskParam"]));
    }
    if (m.find("TaskProgressMessage") != m.end() && !m["TaskProgressMessage"].empty()) {
      taskProgressMessage = make_shared<string>(boost::any_cast<string>(m["TaskProgressMessage"]));
    }
    if (m.find("TaskResult") != m.end() && !m["TaskResult"].empty()) {
      taskResult = make_shared<string>(boost::any_cast<string>(m["TaskResult"]));
    }
    if (m.find("TaskRetryCount") != m.end() && !m["TaskRetryCount"].empty()) {
      taskRetryCount = make_shared<string>(boost::any_cast<string>(m["TaskRetryCount"]));
    }
    if (m.find("TaskStartTime") != m.end() && !m["TaskStartTime"].empty()) {
      taskStartTime = make_shared<string>(boost::any_cast<string>(m["TaskStartTime"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateUser") != m.end() && !m["UpdateUser"].empty()) {
      updateUser = make_shared<string>(boost::any_cast<string>(m["UpdateUser"]));
    }
  }


  virtual ~ListAsyncTasksResponseBodyData() = default;
};
class ListAsyncTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<ListAsyncTasksResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListAsyncTasksResponseBody() {}

  explicit ListAsyncTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAsyncTasksResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAsyncTasksResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAsyncTasksResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListAsyncTasksResponseBody() = default;
};
class ListAsyncTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAsyncTasksResponseBody> body{};

  ListAsyncTasksResponse() {}

  explicit ListAsyncTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAsyncTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAsyncTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListAsyncTasksResponse() = default;
};
class ListBuildConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> type{};

  ListBuildConfigsRequest() {}

  explicit ListBuildConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListBuildConfigsRequest() = default;
};
class ListBuildConfigsResponseBodyDataKeywords : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> key{};

  ListBuildConfigsResponseBodyDataKeywords() {}

  explicit ListBuildConfigsResponseBodyDataKeywords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~ListBuildConfigsResponseBodyDataKeywords() = default;
};
class ListBuildConfigsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> buildIn{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<long> id{};
  shared_ptr<vector<ListBuildConfigsResponseBodyDataKeywords>> keywords{};
  shared_ptr<string> tag{};
  shared_ptr<string> tagDescription{};
  shared_ptr<string> type{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> updateUser{};

  ListBuildConfigsResponseBodyData() {}

  explicit ListBuildConfigsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildIn) {
      res["BuildIn"] = boost::any(*buildIn);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (keywords) {
      vector<boost::any> temp1;
      for(auto item1:*keywords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Keywords"] = boost::any(temp1);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (tagDescription) {
      res["TagDescription"] = boost::any(*tagDescription);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateUser) {
      res["UpdateUser"] = boost::any(*updateUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildIn") != m.end() && !m["BuildIn"].empty()) {
      buildIn = make_shared<bool>(boost::any_cast<bool>(m["BuildIn"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      if (typeid(vector<boost::any>) == m["Keywords"].type()) {
        vector<ListBuildConfigsResponseBodyDataKeywords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Keywords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBuildConfigsResponseBodyDataKeywords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keywords = make_shared<vector<ListBuildConfigsResponseBodyDataKeywords>>(expect1);
      }
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TagDescription") != m.end() && !m["TagDescription"].empty()) {
      tagDescription = make_shared<string>(boost::any_cast<string>(m["TagDescription"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateUser") != m.end() && !m["UpdateUser"].empty()) {
      updateUser = make_shared<string>(boost::any_cast<string>(m["UpdateUser"]));
    }
  }


  virtual ~ListBuildConfigsResponseBodyData() = default;
};
class ListBuildConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListBuildConfigsResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListBuildConfigsResponseBody() {}

  explicit ListBuildConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListBuildConfigsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBuildConfigsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListBuildConfigsResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListBuildConfigsResponseBody() = default;
};
class ListBuildConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBuildConfigsResponseBody> body{};

  ListBuildConfigsResponse() {}

  explicit ListBuildConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBuildConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBuildConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListBuildConfigsResponse() = default;
};
class ListDialoguesRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> current{};
  shared_ptr<long> dialogueType{};
  shared_ptr<string> endTime{};
  shared_ptr<long> size{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskId{};

  ListDialoguesRequest() {}

  explicit ListDialoguesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (dialogueType) {
      res["DialogueType"] = boost::any(*dialogueType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("DialogueType") != m.end() && !m["DialogueType"].empty()) {
      dialogueType = make_shared<long>(boost::any_cast<long>(m["DialogueType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ListDialoguesRequest() = default;
};
class ListDialoguesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bot{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<long> dialogueType{};
  shared_ptr<string> taskId{};
  shared_ptr<string> user{};

  ListDialoguesResponseBodyData() {}

  explicit ListDialoguesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bot) {
      res["Bot"] = boost::any(*bot);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (dialogueType) {
      res["DialogueType"] = boost::any(*dialogueType);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bot") != m.end() && !m["Bot"].empty()) {
      bot = make_shared<string>(boost::any_cast<string>(m["Bot"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("DialogueType") != m.end() && !m["DialogueType"].empty()) {
      dialogueType = make_shared<long>(boost::any_cast<long>(m["DialogueType"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~ListDialoguesResponseBodyData() = default;
};
class ListDialoguesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<ListDialoguesResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListDialoguesResponseBody() {}

  explicit ListDialoguesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListDialoguesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDialoguesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDialoguesResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListDialoguesResponseBody() = default;
};
class ListDialoguesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDialoguesResponseBody> body{};

  ListDialoguesResponse() {}

  explicit ListDialoguesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDialoguesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDialoguesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDialoguesResponse() = default;
};
class ListGeneratedContentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> contentDomain{};
  shared_ptr<long> current{};
  shared_ptr<string> endTime{};
  shared_ptr<long> size{};
  shared_ptr<string> startTime{};
  shared_ptr<string> title{};

  ListGeneratedContentsRequest() {}

  explicit ListGeneratedContentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (contentDomain) {
      res["ContentDomain"] = boost::any(*contentDomain);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ContentDomain") != m.end() && !m["ContentDomain"].empty()) {
      contentDomain = make_shared<string>(boost::any_cast<string>(m["ContentDomain"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListGeneratedContentsRequest() = default;
};
class ListGeneratedContentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentDomain{};
  shared_ptr<string> contentText{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<string> deviceId{};
  shared_ptr<long> id{};
  shared_ptr<vector<string>> keywordList{};
  shared_ptr<string> keywords{};
  shared_ptr<string> prompt{};
  shared_ptr<string> taskId{};
  shared_ptr<string> title{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> updateUser{};
  shared_ptr<string> uuid{};

  ListGeneratedContentsResponseBodyData() {}

  explicit ListGeneratedContentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentDomain) {
      res["ContentDomain"] = boost::any(*contentDomain);
    }
    if (contentText) {
      res["ContentText"] = boost::any(*contentText);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (keywordList) {
      res["KeywordList"] = boost::any(*keywordList);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateUser) {
      res["UpdateUser"] = boost::any(*updateUser);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentDomain") != m.end() && !m["ContentDomain"].empty()) {
      contentDomain = make_shared<string>(boost::any_cast<string>(m["ContentDomain"]));
    }
    if (m.find("ContentText") != m.end() && !m["ContentText"].empty()) {
      contentText = make_shared<string>(boost::any_cast<string>(m["ContentText"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("KeywordList") != m.end() && !m["KeywordList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeywordList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeywordList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keywordList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateUser") != m.end() && !m["UpdateUser"].empty()) {
      updateUser = make_shared<string>(boost::any_cast<string>(m["UpdateUser"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ListGeneratedContentsResponseBodyData() = default;
};
class ListGeneratedContentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<ListGeneratedContentsResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListGeneratedContentsResponseBody() {}

  explicit ListGeneratedContentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListGeneratedContentsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGeneratedContentsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListGeneratedContentsResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListGeneratedContentsResponseBody() = default;
};
class ListGeneratedContentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGeneratedContentsResponseBody> body{};

  ListGeneratedContentsResponse() {}

  explicit ListGeneratedContentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGeneratedContentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGeneratedContentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListGeneratedContentsResponse() = default;
};
class ListHotNewsWithTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> current{};
  shared_ptr<string> newsType{};
  shared_ptr<vector<string>> newsTypes{};
  shared_ptr<long> size{};

  ListHotNewsWithTypeRequest() {}

  explicit ListHotNewsWithTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (newsType) {
      res["NewsType"] = boost::any(*newsType);
    }
    if (newsTypes) {
      res["NewsTypes"] = boost::any(*newsTypes);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("NewsType") != m.end() && !m["NewsType"].empty()) {
      newsType = make_shared<string>(boost::any_cast<string>(m["NewsType"]));
    }
    if (m.find("NewsTypes") != m.end() && !m["NewsTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NewsTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NewsTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      newsTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListHotNewsWithTypeRequest() = default;
};
class ListHotNewsWithTypeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> current{};
  shared_ptr<string> newsType{};
  shared_ptr<string> newsTypesShrink{};
  shared_ptr<long> size{};

  ListHotNewsWithTypeShrinkRequest() {}

  explicit ListHotNewsWithTypeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (newsType) {
      res["NewsType"] = boost::any(*newsType);
    }
    if (newsTypesShrink) {
      res["NewsTypes"] = boost::any(*newsTypesShrink);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("NewsType") != m.end() && !m["NewsType"].empty()) {
      newsType = make_shared<string>(boost::any_cast<string>(m["NewsType"]));
    }
    if (m.find("NewsTypes") != m.end() && !m["NewsTypes"].empty()) {
      newsTypesShrink = make_shared<string>(boost::any_cast<string>(m["NewsTypes"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListHotNewsWithTypeShrinkRequest() = default;
};
class ListHotNewsWithTypeResponseBodyDataNews : public Darabonba::Model {
public:
  shared_ptr<string> author{};
  shared_ptr<string> content{};
  shared_ptr<string> docUuid{};
  shared_ptr<vector<string>> imageUrls{};
  shared_ptr<string> pubTime{};
  shared_ptr<string> searchSource{};
  shared_ptr<string> searchSourceName{};
  shared_ptr<string> source{};
  shared_ptr<string> summary{};
  shared_ptr<string> tag{};
  shared_ptr<string> title{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> url{};

  ListHotNewsWithTypeResponseBodyDataNews() {}

  explicit ListHotNewsWithTypeResponseBodyDataNews(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (author) {
      res["Author"] = boost::any(*author);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (docUuid) {
      res["DocUuid"] = boost::any(*docUuid);
    }
    if (imageUrls) {
      res["ImageUrls"] = boost::any(*imageUrls);
    }
    if (pubTime) {
      res["PubTime"] = boost::any(*pubTime);
    }
    if (searchSource) {
      res["SearchSource"] = boost::any(*searchSource);
    }
    if (searchSourceName) {
      res["SearchSourceName"] = boost::any(*searchSourceName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["Author"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DocUuid") != m.end() && !m["DocUuid"].empty()) {
      docUuid = make_shared<string>(boost::any_cast<string>(m["DocUuid"]));
    }
    if (m.find("ImageUrls") != m.end() && !m["ImageUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageUrls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PubTime") != m.end() && !m["PubTime"].empty()) {
      pubTime = make_shared<string>(boost::any_cast<string>(m["PubTime"]));
    }
    if (m.find("SearchSource") != m.end() && !m["SearchSource"].empty()) {
      searchSource = make_shared<string>(boost::any_cast<string>(m["SearchSource"]));
    }
    if (m.find("SearchSourceName") != m.end() && !m["SearchSourceName"].empty()) {
      searchSourceName = make_shared<string>(boost::any_cast<string>(m["SearchSourceName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ListHotNewsWithTypeResponseBodyDataNews() = default;
};
class ListHotNewsWithTypeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListHotNewsWithTypeResponseBodyDataNews>> news{};
  shared_ptr<string> newsType{};
  shared_ptr<string> newsTypeName{};
  shared_ptr<long> totalPages{};

  ListHotNewsWithTypeResponseBodyData() {}

  explicit ListHotNewsWithTypeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (news) {
      vector<boost::any> temp1;
      for(auto item1:*news){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["News"] = boost::any(temp1);
    }
    if (newsType) {
      res["NewsType"] = boost::any(*newsType);
    }
    if (newsTypeName) {
      res["NewsTypeName"] = boost::any(*newsTypeName);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("News") != m.end() && !m["News"].empty()) {
      if (typeid(vector<boost::any>) == m["News"].type()) {
        vector<ListHotNewsWithTypeResponseBodyDataNews> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["News"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotNewsWithTypeResponseBodyDataNews model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        news = make_shared<vector<ListHotNewsWithTypeResponseBodyDataNews>>(expect1);
      }
    }
    if (m.find("NewsType") != m.end() && !m["NewsType"].empty()) {
      newsType = make_shared<string>(boost::any_cast<string>(m["NewsType"]));
    }
    if (m.find("NewsTypeName") != m.end() && !m["NewsTypeName"].empty()) {
      newsTypeName = make_shared<string>(boost::any_cast<string>(m["NewsTypeName"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListHotNewsWithTypeResponseBodyData() = default;
};
class ListHotNewsWithTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListHotNewsWithTypeResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListHotNewsWithTypeResponseBody() {}

  explicit ListHotNewsWithTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListHotNewsWithTypeResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotNewsWithTypeResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListHotNewsWithTypeResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListHotNewsWithTypeResponseBody() = default;
};
class ListHotNewsWithTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHotNewsWithTypeResponseBody> body{};

  ListHotNewsWithTypeResponse() {}

  explicit ListHotNewsWithTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHotNewsWithTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHotNewsWithTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ListHotNewsWithTypeResponse() = default;
};
class ListMaterialDocumentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> content{};
  shared_ptr<string> createTimeEnd{};
  shared_ptr<string> createTimeStart{};
  shared_ptr<long> current{};
  shared_ptr<string> docType{};
  shared_ptr<vector<string>> docTypeList{};
  shared_ptr<bool> generatePublicUrl{};
  shared_ptr<long> id{};
  shared_ptr<vector<string>> keywords{};
  shared_ptr<string> query{};
  shared_ptr<long> shareAttr{};
  shared_ptr<long> size{};
  shared_ptr<string> title{};
  shared_ptr<string> updateTimeEnd{};
  shared_ptr<string> updateTimeStart{};

  ListMaterialDocumentsRequest() {}

  explicit ListMaterialDocumentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTimeEnd) {
      res["CreateTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (createTimeStart) {
      res["CreateTimeStart"] = boost::any(*createTimeStart);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (docTypeList) {
      res["DocTypeList"] = boost::any(*docTypeList);
    }
    if (generatePublicUrl) {
      res["GeneratePublicUrl"] = boost::any(*generatePublicUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (shareAttr) {
      res["ShareAttr"] = boost::any(*shareAttr);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (updateTimeEnd) {
      res["UpdateTimeEnd"] = boost::any(*updateTimeEnd);
    }
    if (updateTimeStart) {
      res["UpdateTimeStart"] = boost::any(*updateTimeStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreateTimeEnd") != m.end() && !m["CreateTimeEnd"].empty()) {
      createTimeEnd = make_shared<string>(boost::any_cast<string>(m["CreateTimeEnd"]));
    }
    if (m.find("CreateTimeStart") != m.end() && !m["CreateTimeStart"].empty()) {
      createTimeStart = make_shared<string>(boost::any_cast<string>(m["CreateTimeStart"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("DocTypeList") != m.end() && !m["DocTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DocTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      docTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GeneratePublicUrl") != m.end() && !m["GeneratePublicUrl"].empty()) {
      generatePublicUrl = make_shared<bool>(boost::any_cast<bool>(m["GeneratePublicUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("ShareAttr") != m.end() && !m["ShareAttr"].empty()) {
      shareAttr = make_shared<long>(boost::any_cast<long>(m["ShareAttr"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UpdateTimeEnd") != m.end() && !m["UpdateTimeEnd"].empty()) {
      updateTimeEnd = make_shared<string>(boost::any_cast<string>(m["UpdateTimeEnd"]));
    }
    if (m.find("UpdateTimeStart") != m.end() && !m["UpdateTimeStart"].empty()) {
      updateTimeStart = make_shared<string>(boost::any_cast<string>(m["UpdateTimeStart"]));
    }
  }


  virtual ~ListMaterialDocumentsRequest() = default;
};
class ListMaterialDocumentsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> content{};
  shared_ptr<string> createTimeEnd{};
  shared_ptr<string> createTimeStart{};
  shared_ptr<long> current{};
  shared_ptr<string> docType{};
  shared_ptr<string> docTypeListShrink{};
  shared_ptr<bool> generatePublicUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> keywordsShrink{};
  shared_ptr<string> query{};
  shared_ptr<long> shareAttr{};
  shared_ptr<long> size{};
  shared_ptr<string> title{};
  shared_ptr<string> updateTimeEnd{};
  shared_ptr<string> updateTimeStart{};

  ListMaterialDocumentsShrinkRequest() {}

  explicit ListMaterialDocumentsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTimeEnd) {
      res["CreateTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (createTimeStart) {
      res["CreateTimeStart"] = boost::any(*createTimeStart);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (docTypeListShrink) {
      res["DocTypeList"] = boost::any(*docTypeListShrink);
    }
    if (generatePublicUrl) {
      res["GeneratePublicUrl"] = boost::any(*generatePublicUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (keywordsShrink) {
      res["Keywords"] = boost::any(*keywordsShrink);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (shareAttr) {
      res["ShareAttr"] = boost::any(*shareAttr);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (updateTimeEnd) {
      res["UpdateTimeEnd"] = boost::any(*updateTimeEnd);
    }
    if (updateTimeStart) {
      res["UpdateTimeStart"] = boost::any(*updateTimeStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreateTimeEnd") != m.end() && !m["CreateTimeEnd"].empty()) {
      createTimeEnd = make_shared<string>(boost::any_cast<string>(m["CreateTimeEnd"]));
    }
    if (m.find("CreateTimeStart") != m.end() && !m["CreateTimeStart"].empty()) {
      createTimeStart = make_shared<string>(boost::any_cast<string>(m["CreateTimeStart"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("DocTypeList") != m.end() && !m["DocTypeList"].empty()) {
      docTypeListShrink = make_shared<string>(boost::any_cast<string>(m["DocTypeList"]));
    }
    if (m.find("GeneratePublicUrl") != m.end() && !m["GeneratePublicUrl"].empty()) {
      generatePublicUrl = make_shared<bool>(boost::any_cast<bool>(m["GeneratePublicUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywordsShrink = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("ShareAttr") != m.end() && !m["ShareAttr"].empty()) {
      shareAttr = make_shared<long>(boost::any_cast<long>(m["ShareAttr"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UpdateTimeEnd") != m.end() && !m["UpdateTimeEnd"].empty()) {
      updateTimeEnd = make_shared<string>(boost::any_cast<string>(m["UpdateTimeEnd"]));
    }
    if (m.find("UpdateTimeStart") != m.end() && !m["UpdateTimeStart"].empty()) {
      updateTimeStart = make_shared<string>(boost::any_cast<string>(m["UpdateTimeStart"]));
    }
  }


  virtual ~ListMaterialDocumentsShrinkRequest() = default;
};
class ListMaterialDocumentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> author{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<string> createUserName{};
  shared_ptr<vector<string>> docKeywords{};
  shared_ptr<string> docType{};
  shared_ptr<string> externalUrl{};
  shared_ptr<string> htmlContent{};
  shared_ptr<long> id{};
  shared_ptr<string> pubTime{};
  shared_ptr<string> publicUrl{};
  shared_ptr<long> shareAttr{};
  shared_ptr<string> srcFrom{};
  shared_ptr<string> summary{};
  shared_ptr<string> textContent{};
  shared_ptr<string> thumbnailInBase64{};
  shared_ptr<string> title{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> updateUser{};
  shared_ptr<string> updateUserName{};
  shared_ptr<string> url{};

  ListMaterialDocumentsResponseBodyData() {}

  explicit ListMaterialDocumentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (author) {
      res["Author"] = boost::any(*author);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (docKeywords) {
      res["DocKeywords"] = boost::any(*docKeywords);
    }
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (externalUrl) {
      res["ExternalUrl"] = boost::any(*externalUrl);
    }
    if (htmlContent) {
      res["HtmlContent"] = boost::any(*htmlContent);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pubTime) {
      res["PubTime"] = boost::any(*pubTime);
    }
    if (publicUrl) {
      res["PublicUrl"] = boost::any(*publicUrl);
    }
    if (shareAttr) {
      res["ShareAttr"] = boost::any(*shareAttr);
    }
    if (srcFrom) {
      res["SrcFrom"] = boost::any(*srcFrom);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (textContent) {
      res["TextContent"] = boost::any(*textContent);
    }
    if (thumbnailInBase64) {
      res["ThumbnailInBase64"] = boost::any(*thumbnailInBase64);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateUser) {
      res["UpdateUser"] = boost::any(*updateUser);
    }
    if (updateUserName) {
      res["UpdateUserName"] = boost::any(*updateUserName);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["Author"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("DocKeywords") != m.end() && !m["DocKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DocKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      docKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("ExternalUrl") != m.end() && !m["ExternalUrl"].empty()) {
      externalUrl = make_shared<string>(boost::any_cast<string>(m["ExternalUrl"]));
    }
    if (m.find("HtmlContent") != m.end() && !m["HtmlContent"].empty()) {
      htmlContent = make_shared<string>(boost::any_cast<string>(m["HtmlContent"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PubTime") != m.end() && !m["PubTime"].empty()) {
      pubTime = make_shared<string>(boost::any_cast<string>(m["PubTime"]));
    }
    if (m.find("PublicUrl") != m.end() && !m["PublicUrl"].empty()) {
      publicUrl = make_shared<string>(boost::any_cast<string>(m["PublicUrl"]));
    }
    if (m.find("ShareAttr") != m.end() && !m["ShareAttr"].empty()) {
      shareAttr = make_shared<long>(boost::any_cast<long>(m["ShareAttr"]));
    }
    if (m.find("SrcFrom") != m.end() && !m["SrcFrom"].empty()) {
      srcFrom = make_shared<string>(boost::any_cast<string>(m["SrcFrom"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("TextContent") != m.end() && !m["TextContent"].empty()) {
      textContent = make_shared<string>(boost::any_cast<string>(m["TextContent"]));
    }
    if (m.find("ThumbnailInBase64") != m.end() && !m["ThumbnailInBase64"].empty()) {
      thumbnailInBase64 = make_shared<string>(boost::any_cast<string>(m["ThumbnailInBase64"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateUser") != m.end() && !m["UpdateUser"].empty()) {
      updateUser = make_shared<string>(boost::any_cast<string>(m["UpdateUser"]));
    }
    if (m.find("UpdateUserName") != m.end() && !m["UpdateUserName"].empty()) {
      updateUserName = make_shared<string>(boost::any_cast<string>(m["UpdateUserName"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ListMaterialDocumentsResponseBodyData() = default;
};
class ListMaterialDocumentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<ListMaterialDocumentsResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListMaterialDocumentsResponseBody() {}

  explicit ListMaterialDocumentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListMaterialDocumentsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMaterialDocumentsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListMaterialDocumentsResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListMaterialDocumentsResponseBody() = default;
};
class ListMaterialDocumentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMaterialDocumentsResponseBody> body{};

  ListMaterialDocumentsResponse() {}

  explicit ListMaterialDocumentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMaterialDocumentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMaterialDocumentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMaterialDocumentsResponse() = default;
};
class ListVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};

  ListVersionsRequest() {}

  explicit ListVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
  }


  virtual ~ListVersionsRequest() = default;
};
class ListVersionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> concurrentCount{};
  shared_ptr<string> endTime{};
  shared_ptr<long> instanceCount{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> productType{};
  shared_ptr<long> quota{};
  shared_ptr<string> startTime{};
  shared_ptr<long> useQuota{};
  shared_ptr<string> versionDetail{};
  shared_ptr<string> versionName{};
  shared_ptr<long> versionStatus{};

  ListVersionsResponseBodyData() {}

  explicit ListVersionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (concurrentCount) {
      res["ConcurrentCount"] = boost::any(*concurrentCount);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (useQuota) {
      res["UseQuota"] = boost::any(*useQuota);
    }
    if (versionDetail) {
      res["VersionDetail"] = boost::any(*versionDetail);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    if (versionStatus) {
      res["VersionStatus"] = boost::any(*versionStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConcurrentCount") != m.end() && !m["ConcurrentCount"].empty()) {
      concurrentCount = make_shared<long>(boost::any_cast<long>(m["ConcurrentCount"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<long>(boost::any_cast<long>(m["Quota"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("UseQuota") != m.end() && !m["UseQuota"].empty()) {
      useQuota = make_shared<long>(boost::any_cast<long>(m["UseQuota"]));
    }
    if (m.find("VersionDetail") != m.end() && !m["VersionDetail"].empty()) {
      versionDetail = make_shared<string>(boost::any_cast<string>(m["VersionDetail"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
    if (m.find("VersionStatus") != m.end() && !m["VersionStatus"].empty()) {
      versionStatus = make_shared<long>(boost::any_cast<long>(m["VersionStatus"]));
    }
  }


  virtual ~ListVersionsResponseBodyData() = default;
};
class ListVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListVersionsResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListVersionsResponseBody() {}

  explicit ListVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListVersionsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVersionsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVersionsResponseBodyData>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListVersionsResponseBody() = default;
};
class ListVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVersionsResponseBody> body{};

  ListVersionsResponse() {}

  explicit ListVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVersionsResponse() = default;
};
class QueryAsyncTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> taskId{};

  QueryAsyncTaskRequest() {}

  explicit QueryAsyncTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~QueryAsyncTaskRequest() = default;
};
class QueryAsyncTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<string> taskCode{};
  shared_ptr<string> taskErrorMessage{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskIntermediateResult{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskParam{};
  shared_ptr<string> taskProgressMessage{};
  shared_ptr<string> taskResult{};
  shared_ptr<string> taskRetryCount{};
  shared_ptr<long> taskStatus{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> updateUser{};

  QueryAsyncTaskResponseBodyData() {}

  explicit QueryAsyncTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (taskCode) {
      res["TaskCode"] = boost::any(*taskCode);
    }
    if (taskErrorMessage) {
      res["TaskErrorMessage"] = boost::any(*taskErrorMessage);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskIntermediateResult) {
      res["TaskIntermediateResult"] = boost::any(*taskIntermediateResult);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskParam) {
      res["TaskParam"] = boost::any(*taskParam);
    }
    if (taskProgressMessage) {
      res["TaskProgressMessage"] = boost::any(*taskProgressMessage);
    }
    if (taskResult) {
      res["TaskResult"] = boost::any(*taskResult);
    }
    if (taskRetryCount) {
      res["TaskRetryCount"] = boost::any(*taskRetryCount);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (updateUser) {
      res["UpdateUser"] = boost::any(*updateUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("TaskCode") != m.end() && !m["TaskCode"].empty()) {
      taskCode = make_shared<string>(boost::any_cast<string>(m["TaskCode"]));
    }
    if (m.find("TaskErrorMessage") != m.end() && !m["TaskErrorMessage"].empty()) {
      taskErrorMessage = make_shared<string>(boost::any_cast<string>(m["TaskErrorMessage"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskIntermediateResult") != m.end() && !m["TaskIntermediateResult"].empty()) {
      taskIntermediateResult = make_shared<string>(boost::any_cast<string>(m["TaskIntermediateResult"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskParam") != m.end() && !m["TaskParam"].empty()) {
      taskParam = make_shared<string>(boost::any_cast<string>(m["TaskParam"]));
    }
    if (m.find("TaskProgressMessage") != m.end() && !m["TaskProgressMessage"].empty()) {
      taskProgressMessage = make_shared<string>(boost::any_cast<string>(m["TaskProgressMessage"]));
    }
    if (m.find("TaskResult") != m.end() && !m["TaskResult"].empty()) {
      taskResult = make_shared<string>(boost::any_cast<string>(m["TaskResult"]));
    }
    if (m.find("TaskRetryCount") != m.end() && !m["TaskRetryCount"].empty()) {
      taskRetryCount = make_shared<string>(boost::any_cast<string>(m["TaskRetryCount"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UpdateUser") != m.end() && !m["UpdateUser"].empty()) {
      updateUser = make_shared<string>(boost::any_cast<string>(m["UpdateUser"]));
    }
  }


  virtual ~QueryAsyncTaskResponseBodyData() = default;
};
class QueryAsyncTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryAsyncTaskResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryAsyncTaskResponseBody() {}

  explicit QueryAsyncTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryAsyncTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryAsyncTaskResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryAsyncTaskResponseBody() = default;
};
class QueryAsyncTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAsyncTaskResponseBody> body{};

  QueryAsyncTaskResponse() {}

  explicit QueryAsyncTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAsyncTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAsyncTaskResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAsyncTaskResponse() = default;
};
class SaveDataSourceOrderConfigRequestUserConfigDataSourceList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};
  shared_ptr<long> number{};
  shared_ptr<string> type{};

  SaveDataSourceOrderConfigRequestUserConfigDataSourceList() {}

  explicit SaveDataSourceOrderConfigRequestUserConfigDataSourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["Number"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SaveDataSourceOrderConfigRequestUserConfigDataSourceList() = default;
};
class SaveDataSourceOrderConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> productCode{};
  shared_ptr<vector<SaveDataSourceOrderConfigRequestUserConfigDataSourceList>> userConfigDataSourceList{};

  SaveDataSourceOrderConfigRequest() {}

  explicit SaveDataSourceOrderConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (userConfigDataSourceList) {
      vector<boost::any> temp1;
      for(auto item1:*userConfigDataSourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserConfigDataSourceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("UserConfigDataSourceList") != m.end() && !m["UserConfigDataSourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserConfigDataSourceList"].type()) {
        vector<SaveDataSourceOrderConfigRequestUserConfigDataSourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserConfigDataSourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SaveDataSourceOrderConfigRequestUserConfigDataSourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userConfigDataSourceList = make_shared<vector<SaveDataSourceOrderConfigRequestUserConfigDataSourceList>>(expect1);
      }
    }
  }


  virtual ~SaveDataSourceOrderConfigRequest() = default;
};
class SaveDataSourceOrderConfigShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> productCode{};
  shared_ptr<string> userConfigDataSourceListShrink{};

  SaveDataSourceOrderConfigShrinkRequest() {}

  explicit SaveDataSourceOrderConfigShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (userConfigDataSourceListShrink) {
      res["UserConfigDataSourceList"] = boost::any(*userConfigDataSourceListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("UserConfigDataSourceList") != m.end() && !m["UserConfigDataSourceList"].empty()) {
      userConfigDataSourceListShrink = make_shared<string>(boost::any_cast<string>(m["UserConfigDataSourceList"]));
    }
  }


  virtual ~SaveDataSourceOrderConfigShrinkRequest() = default;
};
class SaveDataSourceOrderConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SaveDataSourceOrderConfigResponseBody() {}

  explicit SaveDataSourceOrderConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SaveDataSourceOrderConfigResponseBody() = default;
};
class SaveDataSourceOrderConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveDataSourceOrderConfigResponseBody> body{};

  SaveDataSourceOrderConfigResponse() {}

  explicit SaveDataSourceOrderConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveDataSourceOrderConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveDataSourceOrderConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SaveDataSourceOrderConfigResponse() = default;
};
class SaveMaterialDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> author{};
  shared_ptr<bool> bothSavePrivateAndShare{};
  shared_ptr<vector<string>> docKeywords{};
  shared_ptr<string> docType{};
  shared_ptr<string> externalUrl{};
  shared_ptr<string> htmlContent{};
  shared_ptr<string> pubTime{};
  shared_ptr<long> shareAttr{};
  shared_ptr<string> srcFrom{};
  shared_ptr<string> summary{};
  shared_ptr<string> textContent{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  SaveMaterialDocumentRequest() {}

  explicit SaveMaterialDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (author) {
      res["Author"] = boost::any(*author);
    }
    if (bothSavePrivateAndShare) {
      res["BothSavePrivateAndShare"] = boost::any(*bothSavePrivateAndShare);
    }
    if (docKeywords) {
      res["DocKeywords"] = boost::any(*docKeywords);
    }
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (externalUrl) {
      res["ExternalUrl"] = boost::any(*externalUrl);
    }
    if (htmlContent) {
      res["HtmlContent"] = boost::any(*htmlContent);
    }
    if (pubTime) {
      res["PubTime"] = boost::any(*pubTime);
    }
    if (shareAttr) {
      res["ShareAttr"] = boost::any(*shareAttr);
    }
    if (srcFrom) {
      res["SrcFrom"] = boost::any(*srcFrom);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (textContent) {
      res["TextContent"] = boost::any(*textContent);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["Author"]));
    }
    if (m.find("BothSavePrivateAndShare") != m.end() && !m["BothSavePrivateAndShare"].empty()) {
      bothSavePrivateAndShare = make_shared<bool>(boost::any_cast<bool>(m["BothSavePrivateAndShare"]));
    }
    if (m.find("DocKeywords") != m.end() && !m["DocKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DocKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      docKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("ExternalUrl") != m.end() && !m["ExternalUrl"].empty()) {
      externalUrl = make_shared<string>(boost::any_cast<string>(m["ExternalUrl"]));
    }
    if (m.find("HtmlContent") != m.end() && !m["HtmlContent"].empty()) {
      htmlContent = make_shared<string>(boost::any_cast<string>(m["HtmlContent"]));
    }
    if (m.find("PubTime") != m.end() && !m["PubTime"].empty()) {
      pubTime = make_shared<string>(boost::any_cast<string>(m["PubTime"]));
    }
    if (m.find("ShareAttr") != m.end() && !m["ShareAttr"].empty()) {
      shareAttr = make_shared<long>(boost::any_cast<long>(m["ShareAttr"]));
    }
    if (m.find("SrcFrom") != m.end() && !m["SrcFrom"].empty()) {
      srcFrom = make_shared<string>(boost::any_cast<string>(m["SrcFrom"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("TextContent") != m.end() && !m["TextContent"].empty()) {
      textContent = make_shared<string>(boost::any_cast<string>(m["TextContent"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~SaveMaterialDocumentRequest() = default;
};
class SaveMaterialDocumentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> author{};
  shared_ptr<bool> bothSavePrivateAndShare{};
  shared_ptr<string> docKeywordsShrink{};
  shared_ptr<string> docType{};
  shared_ptr<string> externalUrl{};
  shared_ptr<string> htmlContent{};
  shared_ptr<string> pubTime{};
  shared_ptr<long> shareAttr{};
  shared_ptr<string> srcFrom{};
  shared_ptr<string> summary{};
  shared_ptr<string> textContent{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  SaveMaterialDocumentShrinkRequest() {}

  explicit SaveMaterialDocumentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (author) {
      res["Author"] = boost::any(*author);
    }
    if (bothSavePrivateAndShare) {
      res["BothSavePrivateAndShare"] = boost::any(*bothSavePrivateAndShare);
    }
    if (docKeywordsShrink) {
      res["DocKeywords"] = boost::any(*docKeywordsShrink);
    }
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (externalUrl) {
      res["ExternalUrl"] = boost::any(*externalUrl);
    }
    if (htmlContent) {
      res["HtmlContent"] = boost::any(*htmlContent);
    }
    if (pubTime) {
      res["PubTime"] = boost::any(*pubTime);
    }
    if (shareAttr) {
      res["ShareAttr"] = boost::any(*shareAttr);
    }
    if (srcFrom) {
      res["SrcFrom"] = boost::any(*srcFrom);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (textContent) {
      res["TextContent"] = boost::any(*textContent);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["Author"]));
    }
    if (m.find("BothSavePrivateAndShare") != m.end() && !m["BothSavePrivateAndShare"].empty()) {
      bothSavePrivateAndShare = make_shared<bool>(boost::any_cast<bool>(m["BothSavePrivateAndShare"]));
    }
    if (m.find("DocKeywords") != m.end() && !m["DocKeywords"].empty()) {
      docKeywordsShrink = make_shared<string>(boost::any_cast<string>(m["DocKeywords"]));
    }
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("ExternalUrl") != m.end() && !m["ExternalUrl"].empty()) {
      externalUrl = make_shared<string>(boost::any_cast<string>(m["ExternalUrl"]));
    }
    if (m.find("HtmlContent") != m.end() && !m["HtmlContent"].empty()) {
      htmlContent = make_shared<string>(boost::any_cast<string>(m["HtmlContent"]));
    }
    if (m.find("PubTime") != m.end() && !m["PubTime"].empty()) {
      pubTime = make_shared<string>(boost::any_cast<string>(m["PubTime"]));
    }
    if (m.find("ShareAttr") != m.end() && !m["ShareAttr"].empty()) {
      shareAttr = make_shared<long>(boost::any_cast<long>(m["ShareAttr"]));
    }
    if (m.find("SrcFrom") != m.end() && !m["SrcFrom"].empty()) {
      srcFrom = make_shared<string>(boost::any_cast<string>(m["SrcFrom"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("TextContent") != m.end() && !m["TextContent"].empty()) {
      textContent = make_shared<string>(boost::any_cast<string>(m["TextContent"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~SaveMaterialDocumentShrinkRequest() = default;
};
class SaveMaterialDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SaveMaterialDocumentResponseBody() {}

  explicit SaveMaterialDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SaveMaterialDocumentResponseBody() = default;
};
class SaveMaterialDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveMaterialDocumentResponseBody> body{};

  SaveMaterialDocumentResponse() {}

  explicit SaveMaterialDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveMaterialDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveMaterialDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~SaveMaterialDocumentResponse() = default;
};
class SubmitAsyncTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> taskCode{};
  shared_ptr<string> taskExecuteTime{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskParam{};

  SubmitAsyncTaskRequest() {}

  explicit SubmitAsyncTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (taskCode) {
      res["TaskCode"] = boost::any(*taskCode);
    }
    if (taskExecuteTime) {
      res["TaskExecuteTime"] = boost::any(*taskExecuteTime);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskParam) {
      res["TaskParam"] = boost::any(*taskParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("TaskCode") != m.end() && !m["TaskCode"].empty()) {
      taskCode = make_shared<string>(boost::any_cast<string>(m["TaskCode"]));
    }
    if (m.find("TaskExecuteTime") != m.end() && !m["TaskExecuteTime"].empty()) {
      taskExecuteTime = make_shared<string>(boost::any_cast<string>(m["TaskExecuteTime"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskParam") != m.end() && !m["TaskParam"].empty()) {
      taskParam = make_shared<string>(boost::any_cast<string>(m["TaskParam"]));
    }
  }


  virtual ~SubmitAsyncTaskRequest() = default;
};
class SubmitAsyncTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<boost::any> taskIntermediateResult{};
  shared_ptr<string> taskName{};

  SubmitAsyncTaskResponseBodyData() {}

  explicit SubmitAsyncTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskIntermediateResult) {
      res["TaskIntermediateResult"] = boost::any(*taskIntermediateResult);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskIntermediateResult") != m.end() && !m["TaskIntermediateResult"].empty()) {
      taskIntermediateResult = make_shared<boost::any>(boost::any_cast<boost::any>(m["TaskIntermediateResult"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~SubmitAsyncTaskResponseBodyData() = default;
};
class SubmitAsyncTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitAsyncTaskResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitAsyncTaskResponseBody() {}

  explicit SubmitAsyncTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitAsyncTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitAsyncTaskResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SubmitAsyncTaskResponseBody() = default;
};
class SubmitAsyncTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitAsyncTaskResponseBody> body{};

  SubmitAsyncTaskResponse() {}

  explicit SubmitAsyncTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitAsyncTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitAsyncTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitAsyncTaskResponse() = default;
};
class UpdateGeneratedContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> content{};
  shared_ptr<string> contentText{};
  shared_ptr<long> id{};
  shared_ptr<vector<string>> keywords{};
  shared_ptr<string> prompt{};
  shared_ptr<string> title{};

  UpdateGeneratedContentRequest() {}

  explicit UpdateGeneratedContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentText) {
      res["ContentText"] = boost::any(*contentText);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentText") != m.end() && !m["ContentText"].empty()) {
      contentText = make_shared<string>(boost::any_cast<string>(m["ContentText"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateGeneratedContentRequest() = default;
};
class UpdateGeneratedContentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> content{};
  shared_ptr<string> contentText{};
  shared_ptr<long> id{};
  shared_ptr<string> keywordsShrink{};
  shared_ptr<string> prompt{};
  shared_ptr<string> title{};

  UpdateGeneratedContentShrinkRequest() {}

  explicit UpdateGeneratedContentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentText) {
      res["ContentText"] = boost::any(*contentText);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (keywordsShrink) {
      res["Keywords"] = boost::any(*keywordsShrink);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentText") != m.end() && !m["ContentText"].empty()) {
      contentText = make_shared<string>(boost::any_cast<string>(m["ContentText"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywordsShrink = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateGeneratedContentShrinkRequest() = default;
};
class UpdateGeneratedContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateGeneratedContentResponseBody() {}

  explicit UpdateGeneratedContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateGeneratedContentResponseBody() = default;
};
class UpdateGeneratedContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGeneratedContentResponseBody> body{};

  UpdateGeneratedContentResponse() {}

  explicit UpdateGeneratedContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateGeneratedContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGeneratedContentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGeneratedContentResponse() = default;
};
class UpdateMaterialDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> author{};
  shared_ptr<vector<string>> docKeywords{};
  shared_ptr<string> docType{};
  shared_ptr<string> externalUrl{};
  shared_ptr<string> htmlContent{};
  shared_ptr<long> id{};
  shared_ptr<string> pubTime{};
  shared_ptr<long> shareAttr{};
  shared_ptr<string> srcFrom{};
  shared_ptr<string> summary{};
  shared_ptr<string> textContent{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  UpdateMaterialDocumentRequest() {}

  explicit UpdateMaterialDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (author) {
      res["Author"] = boost::any(*author);
    }
    if (docKeywords) {
      res["DocKeywords"] = boost::any(*docKeywords);
    }
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (externalUrl) {
      res["ExternalUrl"] = boost::any(*externalUrl);
    }
    if (htmlContent) {
      res["HtmlContent"] = boost::any(*htmlContent);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pubTime) {
      res["PubTime"] = boost::any(*pubTime);
    }
    if (shareAttr) {
      res["ShareAttr"] = boost::any(*shareAttr);
    }
    if (srcFrom) {
      res["SrcFrom"] = boost::any(*srcFrom);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (textContent) {
      res["TextContent"] = boost::any(*textContent);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["Author"]));
    }
    if (m.find("DocKeywords") != m.end() && !m["DocKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DocKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      docKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("ExternalUrl") != m.end() && !m["ExternalUrl"].empty()) {
      externalUrl = make_shared<string>(boost::any_cast<string>(m["ExternalUrl"]));
    }
    if (m.find("HtmlContent") != m.end() && !m["HtmlContent"].empty()) {
      htmlContent = make_shared<string>(boost::any_cast<string>(m["HtmlContent"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PubTime") != m.end() && !m["PubTime"].empty()) {
      pubTime = make_shared<string>(boost::any_cast<string>(m["PubTime"]));
    }
    if (m.find("ShareAttr") != m.end() && !m["ShareAttr"].empty()) {
      shareAttr = make_shared<long>(boost::any_cast<long>(m["ShareAttr"]));
    }
    if (m.find("SrcFrom") != m.end() && !m["SrcFrom"].empty()) {
      srcFrom = make_shared<string>(boost::any_cast<string>(m["SrcFrom"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("TextContent") != m.end() && !m["TextContent"].empty()) {
      textContent = make_shared<string>(boost::any_cast<string>(m["TextContent"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~UpdateMaterialDocumentRequest() = default;
};
class UpdateMaterialDocumentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> author{};
  shared_ptr<string> docKeywordsShrink{};
  shared_ptr<string> docType{};
  shared_ptr<string> externalUrl{};
  shared_ptr<string> htmlContent{};
  shared_ptr<long> id{};
  shared_ptr<string> pubTime{};
  shared_ptr<long> shareAttr{};
  shared_ptr<string> srcFrom{};
  shared_ptr<string> summary{};
  shared_ptr<string> textContent{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  UpdateMaterialDocumentShrinkRequest() {}

  explicit UpdateMaterialDocumentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (author) {
      res["Author"] = boost::any(*author);
    }
    if (docKeywordsShrink) {
      res["DocKeywords"] = boost::any(*docKeywordsShrink);
    }
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (externalUrl) {
      res["ExternalUrl"] = boost::any(*externalUrl);
    }
    if (htmlContent) {
      res["HtmlContent"] = boost::any(*htmlContent);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pubTime) {
      res["PubTime"] = boost::any(*pubTime);
    }
    if (shareAttr) {
      res["ShareAttr"] = boost::any(*shareAttr);
    }
    if (srcFrom) {
      res["SrcFrom"] = boost::any(*srcFrom);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (textContent) {
      res["TextContent"] = boost::any(*textContent);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["Author"]));
    }
    if (m.find("DocKeywords") != m.end() && !m["DocKeywords"].empty()) {
      docKeywordsShrink = make_shared<string>(boost::any_cast<string>(m["DocKeywords"]));
    }
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("ExternalUrl") != m.end() && !m["ExternalUrl"].empty()) {
      externalUrl = make_shared<string>(boost::any_cast<string>(m["ExternalUrl"]));
    }
    if (m.find("HtmlContent") != m.end() && !m["HtmlContent"].empty()) {
      htmlContent = make_shared<string>(boost::any_cast<string>(m["HtmlContent"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PubTime") != m.end() && !m["PubTime"].empty()) {
      pubTime = make_shared<string>(boost::any_cast<string>(m["PubTime"]));
    }
    if (m.find("ShareAttr") != m.end() && !m["ShareAttr"].empty()) {
      shareAttr = make_shared<long>(boost::any_cast<long>(m["ShareAttr"]));
    }
    if (m.find("SrcFrom") != m.end() && !m["SrcFrom"].empty()) {
      srcFrom = make_shared<string>(boost::any_cast<string>(m["SrcFrom"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("TextContent") != m.end() && !m["TextContent"].empty()) {
      textContent = make_shared<string>(boost::any_cast<string>(m["TextContent"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~UpdateMaterialDocumentShrinkRequest() = default;
};
class UpdateMaterialDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateMaterialDocumentResponseBody() {}

  explicit UpdateMaterialDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateMaterialDocumentResponseBody() = default;
};
class UpdateMaterialDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateMaterialDocumentResponseBody> body{};

  UpdateMaterialDocumentResponse() {}

  explicit UpdateMaterialDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMaterialDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMaterialDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMaterialDocumentResponse() = default;
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
  CancelAsyncTaskResponse cancelAsyncTaskWithOptions(shared_ptr<CancelAsyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelAsyncTaskResponse cancelAsyncTask(shared_ptr<CancelAsyncTaskRequest> request);
  CreateGeneratedContentResponse createGeneratedContentWithOptions(shared_ptr<CreateGeneratedContentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGeneratedContentResponse createGeneratedContent(shared_ptr<CreateGeneratedContentRequest> request);
  CreateTokenResponse createTokenWithOptions(shared_ptr<CreateTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTokenResponse createToken(shared_ptr<CreateTokenRequest> request);
  DeleteGeneratedContentResponse deleteGeneratedContentWithOptions(shared_ptr<DeleteGeneratedContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGeneratedContentResponse deleteGeneratedContent(shared_ptr<DeleteGeneratedContentRequest> request);
  DeleteMaterialByIdResponse deleteMaterialByIdWithOptions(shared_ptr<DeleteMaterialByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMaterialByIdResponse deleteMaterialById(shared_ptr<DeleteMaterialByIdRequest> request);
  ExportGeneratedContentResponse exportGeneratedContentWithOptions(shared_ptr<ExportGeneratedContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportGeneratedContentResponse exportGeneratedContent(shared_ptr<ExportGeneratedContentRequest> request);
  FeedbackDialogueResponse feedbackDialogueWithOptions(shared_ptr<FeedbackDialogueRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FeedbackDialogueResponse feedbackDialogue(shared_ptr<FeedbackDialogueRequest> request);
  FetchImageTaskResponse fetchImageTaskWithOptions(shared_ptr<FetchImageTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FetchImageTaskResponse fetchImageTask(shared_ptr<FetchImageTaskRequest> request);
  GenerateImageTaskResponse generateImageTaskWithOptions(shared_ptr<GenerateImageTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateImageTaskResponse generateImageTask(shared_ptr<GenerateImageTaskRequest> request);
  GenerateViewPointResponse generateViewPointWithOptions(shared_ptr<GenerateViewPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateViewPointResponse generateViewPoint(shared_ptr<GenerateViewPointRequest> request);
  GetDataSourceOrderConfigResponse getDataSourceOrderConfigWithOptions(shared_ptr<GetDataSourceOrderConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataSourceOrderConfigResponse getDataSourceOrderConfig(shared_ptr<GetDataSourceOrderConfigRequest> request);
  GetGeneratedContentResponse getGeneratedContentWithOptions(shared_ptr<GetGeneratedContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGeneratedContentResponse getGeneratedContent(shared_ptr<GetGeneratedContentRequest> request);
  GetMaterialByIdResponse getMaterialByIdWithOptions(shared_ptr<GetMaterialByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMaterialByIdResponse getMaterialById(shared_ptr<GetMaterialByIdRequest> request);
  GetPropertiesResponse getPropertiesWithOptions(shared_ptr<GetPropertiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPropertiesResponse getProperties(shared_ptr<GetPropertiesRequest> request);
  ListAsyncTasksResponse listAsyncTasksWithOptions(shared_ptr<ListAsyncTasksRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAsyncTasksResponse listAsyncTasks(shared_ptr<ListAsyncTasksRequest> request);
  ListBuildConfigsResponse listBuildConfigsWithOptions(shared_ptr<ListBuildConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBuildConfigsResponse listBuildConfigs(shared_ptr<ListBuildConfigsRequest> request);
  ListDialoguesResponse listDialoguesWithOptions(shared_ptr<ListDialoguesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDialoguesResponse listDialogues(shared_ptr<ListDialoguesRequest> request);
  ListGeneratedContentsResponse listGeneratedContentsWithOptions(shared_ptr<ListGeneratedContentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGeneratedContentsResponse listGeneratedContents(shared_ptr<ListGeneratedContentsRequest> request);
  ListHotNewsWithTypeResponse listHotNewsWithTypeWithOptions(shared_ptr<ListHotNewsWithTypeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHotNewsWithTypeResponse listHotNewsWithType(shared_ptr<ListHotNewsWithTypeRequest> request);
  ListMaterialDocumentsResponse listMaterialDocumentsWithOptions(shared_ptr<ListMaterialDocumentsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMaterialDocumentsResponse listMaterialDocuments(shared_ptr<ListMaterialDocumentsRequest> request);
  ListVersionsResponse listVersionsWithOptions(shared_ptr<ListVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVersionsResponse listVersions(shared_ptr<ListVersionsRequest> request);
  QueryAsyncTaskResponse queryAsyncTaskWithOptions(shared_ptr<QueryAsyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAsyncTaskResponse queryAsyncTask(shared_ptr<QueryAsyncTaskRequest> request);
  SaveDataSourceOrderConfigResponse saveDataSourceOrderConfigWithOptions(shared_ptr<SaveDataSourceOrderConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveDataSourceOrderConfigResponse saveDataSourceOrderConfig(shared_ptr<SaveDataSourceOrderConfigRequest> request);
  SaveMaterialDocumentResponse saveMaterialDocumentWithOptions(shared_ptr<SaveMaterialDocumentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveMaterialDocumentResponse saveMaterialDocument(shared_ptr<SaveMaterialDocumentRequest> request);
  SubmitAsyncTaskResponse submitAsyncTaskWithOptions(shared_ptr<SubmitAsyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitAsyncTaskResponse submitAsyncTask(shared_ptr<SubmitAsyncTaskRequest> request);
  UpdateGeneratedContentResponse updateGeneratedContentWithOptions(shared_ptr<UpdateGeneratedContentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGeneratedContentResponse updateGeneratedContent(shared_ptr<UpdateGeneratedContentRequest> request);
  UpdateMaterialDocumentResponse updateMaterialDocumentWithOptions(shared_ptr<UpdateMaterialDocumentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMaterialDocumentResponse updateMaterialDocument(shared_ptr<UpdateMaterialDocumentRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AiMiaoBi20230801

#endif
