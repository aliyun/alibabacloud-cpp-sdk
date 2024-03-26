// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_XRENGINE20230313_H_
#define ALIBABACLOUD_XRENGINE20230313_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_XrEngine20230313 {
class AuthUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};

  AuthUserRequest() {}

  explicit AuthUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
  }


  virtual ~AuthUserRequest() = default;
};
class AuthUserResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> type{};

  AuthUserResponseBodyData() {}

  explicit AuthUserResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AuthUserResponseBodyData() = default;
};
class AuthUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AuthUserResponseBodyData> data{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AuthUserResponseBody() {}

  explicit AuthUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
        AuthUserResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AuthUserResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
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


  virtual ~AuthUserResponseBody() = default;
};
class AuthUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuthUserResponseBody> body{};

  AuthUserResponse() {}

  explicit AuthUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuthUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuthUserResponseBody>(model1);
      }
    }
  }


  virtual ~AuthUserResponse() = default;
};
class BatchQueryMotionShopTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> taskId{};

  BatchQueryMotionShopTaskStatusRequest() {}

  explicit BatchQueryMotionShopTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~BatchQueryMotionShopTaskStatusRequest() = default;
};
class BatchQueryMotionShopTaskStatusResponseBodyDataTasksResult : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> shareUrl{};
  shared_ptr<string> videoUrl{};

  BatchQueryMotionShopTaskStatusResponseBodyDataTasksResult() {}

  explicit BatchQueryMotionShopTaskStatusResponseBodyDataTasksResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (shareUrl) {
      res["ShareUrl"] = boost::any(*shareUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("ShareUrl") != m.end() && !m["ShareUrl"].empty()) {
      shareUrl = make_shared<string>(boost::any_cast<string>(m["ShareUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~BatchQueryMotionShopTaskStatusResponseBodyDataTasksResult() = default;
};
class BatchQueryMotionShopTaskStatusResponseBodyDataTasks : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<BatchQueryMotionShopTaskStatusResponseBodyDataTasksResult> result{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};

  BatchQueryMotionShopTaskStatusResponseBodyDataTasks() {}

  explicit BatchQueryMotionShopTaskStatusResponseBodyDataTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        BatchQueryMotionShopTaskStatusResponseBodyDataTasksResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<BatchQueryMotionShopTaskStatusResponseBodyDataTasksResult>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~BatchQueryMotionShopTaskStatusResponseBodyDataTasks() = default;
};
class BatchQueryMotionShopTaskStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<BatchQueryMotionShopTaskStatusResponseBodyDataTasks>> tasks{};

  BatchQueryMotionShopTaskStatusResponseBodyData() {}

  explicit BatchQueryMotionShopTaskStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<BatchQueryMotionShopTaskStatusResponseBodyDataTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchQueryMotionShopTaskStatusResponseBodyDataTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<BatchQueryMotionShopTaskStatusResponseBodyDataTasks>>(expect1);
      }
    }
  }


  virtual ~BatchQueryMotionShopTaskStatusResponseBodyData() = default;
};
class BatchQueryMotionShopTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<BatchQueryMotionShopTaskStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchQueryMotionShopTaskStatusResponseBody() {}

  explicit BatchQueryMotionShopTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchQueryMotionShopTaskStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BatchQueryMotionShopTaskStatusResponseBodyData>(model1);
      }
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


  virtual ~BatchQueryMotionShopTaskStatusResponseBody() = default;
};
class BatchQueryMotionShopTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchQueryMotionShopTaskStatusResponseBody> body{};

  BatchQueryMotionShopTaskStatusResponse() {}

  explicit BatchQueryMotionShopTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchQueryMotionShopTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchQueryMotionShopTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~BatchQueryMotionShopTaskStatusResponse() = default;
};
class CreateAvatarTalkProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> avatarProjectId{};
  shared_ptr<string> jwtToken{};
  shared_ptr<string> title{};
  shared_ptr<string> ttsVoice{};
  shared_ptr<string> txtContent{};

  CreateAvatarTalkProjectRequest() {}

  explicit CreateAvatarTalkProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatarProjectId) {
      res["AvatarProjectId"] = boost::any(*avatarProjectId);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (ttsVoice) {
      res["TtsVoice"] = boost::any(*ttsVoice);
    }
    if (txtContent) {
      res["TxtContent"] = boost::any(*txtContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvatarProjectId") != m.end() && !m["AvatarProjectId"].empty()) {
      avatarProjectId = make_shared<string>(boost::any_cast<string>(m["AvatarProjectId"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("TtsVoice") != m.end() && !m["TtsVoice"].empty()) {
      ttsVoice = make_shared<string>(boost::any_cast<string>(m["TtsVoice"]));
    }
    if (m.find("TxtContent") != m.end() && !m["TxtContent"].empty()) {
      txtContent = make_shared<string>(boost::any_cast<string>(m["TxtContent"]));
    }
  }


  virtual ~CreateAvatarTalkProjectRequest() = default;
};
class CreateAvatarTalkProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  CreateAvatarTalkProjectResponseBodyData() {}

  explicit CreateAvatarTalkProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateAvatarTalkProjectResponseBodyData() = default;
};
class CreateAvatarTalkProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateAvatarTalkProjectResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAvatarTalkProjectResponseBody() {}

  explicit CreateAvatarTalkProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAvatarTalkProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateAvatarTalkProjectResponseBodyData>(model1);
      }
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


  virtual ~CreateAvatarTalkProjectResponseBody() = default;
};
class CreateAvatarTalkProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAvatarTalkProjectResponseBody> body{};

  CreateAvatarTalkProjectResponse() {}

  explicit CreateAvatarTalkProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAvatarTalkProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAvatarTalkProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAvatarTalkProjectResponse() = default;
};
class CreateDigitalHumanProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> audioId{};
  shared_ptr<string> audioUrl{};
  shared_ptr<string> backgroundId{};
  shared_ptr<string> backgroundUrl{};
  shared_ptr<string> content{};
  shared_ptr<string> foregroundId{};
  shared_ptr<string> foregroundUrl{};
  shared_ptr<string> humanLayerStyle{};
  shared_ptr<string> intro{};
  shared_ptr<string> jwtToken{};
  shared_ptr<string> mode{};
  shared_ptr<string> modelId{};
  shared_ptr<string> outputConfig{};
  shared_ptr<string> title{};
  shared_ptr<string> ttsVoiceId{};
  shared_ptr<string> watermarkImageUrl{};
  shared_ptr<string> watermarkStyle{};

  CreateDigitalHumanProjectRequest() {}

  explicit CreateDigitalHumanProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioId) {
      res["AudioId"] = boost::any(*audioId);
    }
    if (audioUrl) {
      res["AudioUrl"] = boost::any(*audioUrl);
    }
    if (backgroundId) {
      res["BackgroundId"] = boost::any(*backgroundId);
    }
    if (backgroundUrl) {
      res["BackgroundUrl"] = boost::any(*backgroundUrl);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (foregroundId) {
      res["ForegroundId"] = boost::any(*foregroundId);
    }
    if (foregroundUrl) {
      res["ForegroundUrl"] = boost::any(*foregroundUrl);
    }
    if (humanLayerStyle) {
      res["HumanLayerStyle"] = boost::any(*humanLayerStyle);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (outputConfig) {
      res["OutputConfig"] = boost::any(*outputConfig);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (ttsVoiceId) {
      res["TtsVoiceId"] = boost::any(*ttsVoiceId);
    }
    if (watermarkImageUrl) {
      res["WatermarkImageUrl"] = boost::any(*watermarkImageUrl);
    }
    if (watermarkStyle) {
      res["WatermarkStyle"] = boost::any(*watermarkStyle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioId") != m.end() && !m["AudioId"].empty()) {
      audioId = make_shared<string>(boost::any_cast<string>(m["AudioId"]));
    }
    if (m.find("AudioUrl") != m.end() && !m["AudioUrl"].empty()) {
      audioUrl = make_shared<string>(boost::any_cast<string>(m["AudioUrl"]));
    }
    if (m.find("BackgroundId") != m.end() && !m["BackgroundId"].empty()) {
      backgroundId = make_shared<string>(boost::any_cast<string>(m["BackgroundId"]));
    }
    if (m.find("BackgroundUrl") != m.end() && !m["BackgroundUrl"].empty()) {
      backgroundUrl = make_shared<string>(boost::any_cast<string>(m["BackgroundUrl"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ForegroundId") != m.end() && !m["ForegroundId"].empty()) {
      foregroundId = make_shared<string>(boost::any_cast<string>(m["ForegroundId"]));
    }
    if (m.find("ForegroundUrl") != m.end() && !m["ForegroundUrl"].empty()) {
      foregroundUrl = make_shared<string>(boost::any_cast<string>(m["ForegroundUrl"]));
    }
    if (m.find("HumanLayerStyle") != m.end() && !m["HumanLayerStyle"].empty()) {
      humanLayerStyle = make_shared<string>(boost::any_cast<string>(m["HumanLayerStyle"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["OutputConfig"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("TtsVoiceId") != m.end() && !m["TtsVoiceId"].empty()) {
      ttsVoiceId = make_shared<string>(boost::any_cast<string>(m["TtsVoiceId"]));
    }
    if (m.find("WatermarkImageUrl") != m.end() && !m["WatermarkImageUrl"].empty()) {
      watermarkImageUrl = make_shared<string>(boost::any_cast<string>(m["WatermarkImageUrl"]));
    }
    if (m.find("WatermarkStyle") != m.end() && !m["WatermarkStyle"].empty()) {
      watermarkStyle = make_shared<string>(boost::any_cast<string>(m["WatermarkStyle"]));
    }
  }


  virtual ~CreateDigitalHumanProjectRequest() = default;
};
class CreateDigitalHumanProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  CreateDigitalHumanProjectResponseBodyData() {}

  explicit CreateDigitalHumanProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateDigitalHumanProjectResponseBodyData() = default;
};
class CreateDigitalHumanProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateDigitalHumanProjectResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDigitalHumanProjectResponseBody() {}

  explicit CreateDigitalHumanProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDigitalHumanProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateDigitalHumanProjectResponseBodyData>(model1);
      }
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


  virtual ~CreateDigitalHumanProjectResponseBody() = default;
};
class CreateDigitalHumanProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDigitalHumanProjectResponseBody> body{};

  CreateDigitalHumanProjectResponse() {}

  explicit CreateDigitalHumanProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDigitalHumanProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDigitalHumanProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDigitalHumanProjectResponse() = default;
};
class CreateLivePortraitProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> audioId{};
  shared_ptr<string> audioUrl{};
  shared_ptr<string> content{};
  shared_ptr<string> customParams{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> intro{};
  shared_ptr<string> jwtToken{};
  shared_ptr<bool> lightModel{};
  shared_ptr<string> mode{};
  shared_ptr<string> outputConfig{};
  shared_ptr<string> title{};
  shared_ptr<string> ttsVoiceId{};
  shared_ptr<string> watermarkImageUrl{};
  shared_ptr<string> watermarkStyle{};

  CreateLivePortraitProjectRequest() {}

  explicit CreateLivePortraitProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioId) {
      res["AudioId"] = boost::any(*audioId);
    }
    if (audioUrl) {
      res["AudioUrl"] = boost::any(*audioUrl);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (customParams) {
      res["CustomParams"] = boost::any(*customParams);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (lightModel) {
      res["LightModel"] = boost::any(*lightModel);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (outputConfig) {
      res["OutputConfig"] = boost::any(*outputConfig);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (ttsVoiceId) {
      res["TtsVoiceId"] = boost::any(*ttsVoiceId);
    }
    if (watermarkImageUrl) {
      res["WatermarkImageUrl"] = boost::any(*watermarkImageUrl);
    }
    if (watermarkStyle) {
      res["WatermarkStyle"] = boost::any(*watermarkStyle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioId") != m.end() && !m["AudioId"].empty()) {
      audioId = make_shared<string>(boost::any_cast<string>(m["AudioId"]));
    }
    if (m.find("AudioUrl") != m.end() && !m["AudioUrl"].empty()) {
      audioUrl = make_shared<string>(boost::any_cast<string>(m["AudioUrl"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CustomParams") != m.end() && !m["CustomParams"].empty()) {
      customParams = make_shared<string>(boost::any_cast<string>(m["CustomParams"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("LightModel") != m.end() && !m["LightModel"].empty()) {
      lightModel = make_shared<bool>(boost::any_cast<bool>(m["LightModel"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("OutputConfig") != m.end() && !m["OutputConfig"].empty()) {
      outputConfig = make_shared<string>(boost::any_cast<string>(m["OutputConfig"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("TtsVoiceId") != m.end() && !m["TtsVoiceId"].empty()) {
      ttsVoiceId = make_shared<string>(boost::any_cast<string>(m["TtsVoiceId"]));
    }
    if (m.find("WatermarkImageUrl") != m.end() && !m["WatermarkImageUrl"].empty()) {
      watermarkImageUrl = make_shared<string>(boost::any_cast<string>(m["WatermarkImageUrl"]));
    }
    if (m.find("WatermarkStyle") != m.end() && !m["WatermarkStyle"].empty()) {
      watermarkStyle = make_shared<string>(boost::any_cast<string>(m["WatermarkStyle"]));
    }
  }


  virtual ~CreateLivePortraitProjectRequest() = default;
};
class CreateLivePortraitProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  CreateLivePortraitProjectResponseBodyData() {}

  explicit CreateLivePortraitProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateLivePortraitProjectResponseBodyData() = default;
};
class CreateLivePortraitProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateLivePortraitProjectResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateLivePortraitProjectResponseBody() {}

  explicit CreateLivePortraitProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLivePortraitProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateLivePortraitProjectResponseBodyData>(model1);
      }
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


  virtual ~CreateLivePortraitProjectResponseBody() = default;
};
class CreateLivePortraitProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLivePortraitProjectResponseBody> body{};

  CreateLivePortraitProjectResponse() {}

  explicit CreateLivePortraitProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLivePortraitProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLivePortraitProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLivePortraitProjectResponse() = default;
};
class GenerateMotionShopVideoUploadUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};

  GenerateMotionShopVideoUploadUrlRequest() {}

  explicit GenerateMotionShopVideoUploadUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
  }


  virtual ~GenerateMotionShopVideoUploadUrlRequest() = default;
};
class GenerateMotionShopVideoUploadUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> ossKey{};
  shared_ptr<string> uploadUrl{};

  GenerateMotionShopVideoUploadUrlResponseBodyData() {}

  explicit GenerateMotionShopVideoUploadUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (uploadUrl) {
      res["UploadUrl"] = boost::any(*uploadUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("UploadUrl") != m.end() && !m["UploadUrl"].empty()) {
      uploadUrl = make_shared<string>(boost::any_cast<string>(m["UploadUrl"]));
    }
  }


  virtual ~GenerateMotionShopVideoUploadUrlResponseBodyData() = default;
};
class GenerateMotionShopVideoUploadUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GenerateMotionShopVideoUploadUrlResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GenerateMotionShopVideoUploadUrlResponseBody() {}

  explicit GenerateMotionShopVideoUploadUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateMotionShopVideoUploadUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateMotionShopVideoUploadUrlResponseBodyData>(model1);
      }
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


  virtual ~GenerateMotionShopVideoUploadUrlResponseBody() = default;
};
class GenerateMotionShopVideoUploadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateMotionShopVideoUploadUrlResponseBody> body{};

  GenerateMotionShopVideoUploadUrlResponse() {}

  explicit GenerateMotionShopVideoUploadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateMotionShopVideoUploadUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateMotionShopVideoUploadUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateMotionShopVideoUploadUrlResponse() = default;
};
class GetMapDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> jwtToken{};

  GetMapDataRequest() {}

  explicit GetMapDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
  }


  virtual ~GetMapDataRequest() = default;
};
class GetMapDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetMapDataResponseBody() {}

  explicit GetMapDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
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
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
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


  virtual ~GetMapDataResponseBody() = default;
};
class GetMapDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMapDataResponseBody> body{};

  GetMapDataResponse() {}

  explicit GetMapDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMapDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMapDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetMapDataResponse() = default;
};
class GetMapPublishDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> jwtToken{};

  GetMapPublishDataRequest() {}

  explicit GetMapPublishDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
  }


  virtual ~GetMapPublishDataRequest() = default;
};
class GetMapPublishDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetMapPublishDataResponseBody() {}

  explicit GetMapPublishDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
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
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
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


  virtual ~GetMapPublishDataResponseBody() = default;
};
class GetMapPublishDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMapPublishDataResponseBody> body{};

  GetMapPublishDataResponse() {}

  explicit GetMapPublishDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMapPublishDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMapPublishDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetMapPublishDataResponse() = default;
};
class InitLocateRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> params{};

  InitLocateRequest() {}

  explicit InitLocateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
  }


  virtual ~InitLocateRequest() = default;
};
class InitLocateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  InitLocateResponseBody() {}

  explicit InitLocateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
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


  virtual ~InitLocateResponseBody() = default;
};
class InitLocateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitLocateResponseBody> body{};

  InitLocateResponse() {}

  explicit InitLocateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitLocateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitLocateResponseBody>(model1);
      }
    }
  }


  virtual ~InitLocateResponse() = default;
};
class ListCommonMaterialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> type{};

  ListCommonMaterialsRequest() {}

  explicit ListCommonMaterialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListCommonMaterialsRequest() = default;
};
class ListCommonMaterialsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> type{};

  ListCommonMaterialsResponseBodyData() {}

  explicit ListCommonMaterialsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListCommonMaterialsResponseBodyData() = default;
};
class ListCommonMaterialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListCommonMaterialsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListCommonMaterialsResponseBody() {}

  explicit ListCommonMaterialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListCommonMaterialsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCommonMaterialsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCommonMaterialsResponseBodyData>>(expect1);
      }
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


  virtual ~ListCommonMaterialsResponseBody() = default;
};
class ListCommonMaterialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCommonMaterialsResponseBody> body{};

  ListCommonMaterialsResponse() {}

  explicit ListCommonMaterialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCommonMaterialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCommonMaterialsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCommonMaterialsResponse() = default;
};
class ListDigitalHumanMaterialsRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<string> jwtToken{};
  shared_ptr<bool> onlyPersonalMaterials{};
  shared_ptr<long> size{};
  shared_ptr<string> types{};

  ListDigitalHumanMaterialsRequest() {}

  explicit ListDigitalHumanMaterialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (onlyPersonalMaterials) {
      res["OnlyPersonalMaterials"] = boost::any(*onlyPersonalMaterials);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (types) {
      res["Types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("OnlyPersonalMaterials") != m.end() && !m["OnlyPersonalMaterials"].empty()) {
      onlyPersonalMaterials = make_shared<bool>(boost::any_cast<bool>(m["OnlyPersonalMaterials"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      types = make_shared<string>(boost::any_cast<string>(m["Types"]));
    }
  }


  virtual ~ListDigitalHumanMaterialsRequest() = default;
};
class ListDigitalHumanMaterialsResponseBodyDataComponents : public Darabonba::Model {
public:
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<map<string, boost::any>> files{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListDigitalHumanMaterialsResponseBodyDataComponents() {}

  explicit ListDigitalHumanMaterialsResponseBodyDataComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (files) {
      res["Files"] = boost::any(*files);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Files"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      files = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListDigitalHumanMaterialsResponseBodyDataComponents() = default;
};
class ListDigitalHumanMaterialsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDigitalHumanMaterialsResponseBodyDataComponents>> components{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<map<string, boost::any>> files{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> sortOrder{};
  shared_ptr<string> type{};

  ListDigitalHumanMaterialsResponseBodyData() {}

  explicit ListDigitalHumanMaterialsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (files) {
      res["Files"] = boost::any(*files);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<ListDigitalHumanMaterialsResponseBodyDataComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDigitalHumanMaterialsResponseBodyDataComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<ListDigitalHumanMaterialsResponseBodyDataComponents>>(expect1);
      }
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Files"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      files = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<long>(boost::any_cast<long>(m["SortOrder"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListDigitalHumanMaterialsResponseBodyData() = default;
};
class ListDigitalHumanMaterialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<ListDigitalHumanMaterialsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pages{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListDigitalHumanMaterialsResponseBody() {}

  explicit ListDigitalHumanMaterialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
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
        vector<ListDigitalHumanMaterialsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDigitalHumanMaterialsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDigitalHumanMaterialsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
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


  virtual ~ListDigitalHumanMaterialsResponseBody() = default;
};
class ListDigitalHumanMaterialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDigitalHumanMaterialsResponseBody> body{};

  ListDigitalHumanMaterialsResponse() {}

  explicit ListDigitalHumanMaterialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDigitalHumanMaterialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDigitalHumanMaterialsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDigitalHumanMaterialsResponse() = default;
};
class ListLocationServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<string> jwtToken{};
  shared_ptr<long> size{};
  shared_ptr<string> sort{};
  shared_ptr<string> sortField{};

  ListLocationServiceRequest() {}

  explicit ListLocationServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (sortField) {
      res["SortField"] = boost::any(*sortField);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("SortField") != m.end() && !m["SortField"].empty()) {
      sortField = make_shared<string>(boost::any_cast<string>(m["SortField"]));
    }
  }


  virtual ~ListLocationServiceRequest() = default;
};
class ListLocationServiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> note{};
  shared_ptr<long> qps{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> svcState{};

  ListLocationServiceResponseBodyData() {}

  explicit ListLocationServiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (svcState) {
      res["SvcState"] = boost::any(*svcState);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<long>(boost::any_cast<long>(m["Qps"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SvcState") != m.end() && !m["SvcState"].empty()) {
      svcState = make_shared<string>(boost::any_cast<string>(m["SvcState"]));
    }
  }


  virtual ~ListLocationServiceResponseBodyData() = default;
};
class ListLocationServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<ListLocationServiceResponseBodyData>> data{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pages{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListLocationServiceResponseBody() {}

  explicit ListLocationServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
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
        vector<ListLocationServiceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLocationServiceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListLocationServiceResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
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


  virtual ~ListLocationServiceResponseBody() = default;
};
class ListLocationServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLocationServiceResponseBody> body{};

  ListLocationServiceResponse() {}

  explicit ListLocationServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLocationServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLocationServiceResponseBody>(model1);
      }
    }
  }


  virtual ~ListLocationServiceResponse() = default;
};
class ListMotionShopTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<string> jwtToken{};
  shared_ptr<long> size{};

  ListMotionShopTasksRequest() {}

  explicit ListMotionShopTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListMotionShopTasksRequest() = default;
};
class ListMotionShopTasksResponseBodyDataMaterial : public Darabonba::Model {
public:
  shared_ptr<string> avatarId{};
  shared_ptr<vector<double>> box{};
  shared_ptr<string> coverUrl{};

  ListMotionShopTasksResponseBodyDataMaterial() {}

  explicit ListMotionShopTasksResponseBodyDataMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatarId) {
      res["AvatarId"] = boost::any(*avatarId);
    }
    if (box) {
      res["Box"] = boost::any(*box);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvatarId") != m.end() && !m["AvatarId"].empty()) {
      avatarId = make_shared<string>(boost::any_cast<string>(m["AvatarId"]));
    }
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Box"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Box"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      box = make_shared<vector<double>>(toVec1);
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
  }


  virtual ~ListMotionShopTasksResponseBodyDataMaterial() = default;
};
class ListMotionShopTasksResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> shareUrl{};
  shared_ptr<string> videoUrl{};

  ListMotionShopTasksResponseBodyDataResult() {}

  explicit ListMotionShopTasksResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (shareUrl) {
      res["ShareUrl"] = boost::any(*shareUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("ShareUrl") != m.end() && !m["ShareUrl"].empty()) {
      shareUrl = make_shared<string>(boost::any_cast<string>(m["ShareUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~ListMotionShopTasksResponseBodyDataResult() = default;
};
class ListMotionShopTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<ListMotionShopTasksResponseBodyDataMaterial> material{};
  shared_ptr<ListMotionShopTasksResponseBodyDataResult> result{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};

  ListMotionShopTasksResponseBodyData() {}

  explicit ListMotionShopTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (material) {
      res["Material"] = material ? boost::any(material->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Material") != m.end() && !m["Material"].empty()) {
      if (typeid(map<string, boost::any>) == m["Material"].type()) {
        ListMotionShopTasksResponseBodyDataMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Material"]));
        material = make_shared<ListMotionShopTasksResponseBodyDataMaterial>(model1);
      }
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListMotionShopTasksResponseBodyDataResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListMotionShopTasksResponseBodyDataResult>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ListMotionShopTasksResponseBodyData() = default;
};
class ListMotionShopTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<ListMotionShopTasksResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pages{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  ListMotionShopTasksResponseBody() {}

  explicit ListMotionShopTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
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
        vector<ListMotionShopTasksResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMotionShopTasksResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListMotionShopTasksResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
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


  virtual ~ListMotionShopTasksResponseBody() = default;
};
class ListMotionShopTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMotionShopTasksResponseBody> body{};

  ListMotionShopTasksResponse() {}

  explicit ListMotionShopTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMotionShopTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMotionShopTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListMotionShopTasksResponse() = default;
};
class LivePortraitFaceDetectRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};
  shared_ptr<string> jwtToken{};

  LivePortraitFaceDetectRequest() {}

  explicit LivePortraitFaceDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
  }


  virtual ~LivePortraitFaceDetectRequest() = default;
};
class LivePortraitFaceDetectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};

  LivePortraitFaceDetectResponseBodyData() {}

  explicit LivePortraitFaceDetectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~LivePortraitFaceDetectResponseBodyData() = default;
};
class LivePortraitFaceDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<LivePortraitFaceDetectResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LivePortraitFaceDetectResponseBody() {}

  explicit LivePortraitFaceDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LivePortraitFaceDetectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<LivePortraitFaceDetectResponseBodyData>(model1);
      }
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


  virtual ~LivePortraitFaceDetectResponseBody() = default;
};
class LivePortraitFaceDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LivePortraitFaceDetectResponseBody> body{};

  LivePortraitFaceDetectResponse() {}

  explicit LivePortraitFaceDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LivePortraitFaceDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LivePortraitFaceDetectResponseBody>(model1);
      }
    }
  }


  virtual ~LivePortraitFaceDetectResponse() = default;
};
class LocateRequest : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> jwtToken{};
  shared_ptr<string> params{};

  LocateRequest() {}

  explicit LocateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
  }


  virtual ~LocateRequest() = default;
};
class LocateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LocateResponseBody() {}

  explicit LocateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
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


  virtual ~LocateResponseBody() = default;
};
class LocateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LocateResponseBody> body{};

  LocateResponse() {}

  explicit LocateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LocateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LocateResponseBody>(model1);
      }
    }
  }


  virtual ~LocateResponse() = default;
};
class LoginHuggingFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> token{};
  shared_ptr<string> type{};

  LoginHuggingFaceRequest() {}

  explicit LoginHuggingFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~LoginHuggingFaceRequest() = default;
};
class LoginHuggingFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> nickname{};
  shared_ptr<string> uid{};

  LoginHuggingFaceResponseBodyData() {}

  explicit LoginHuggingFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (nickname) {
      res["Nickname"] = boost::any(*nickname);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Nickname") != m.end() && !m["Nickname"].empty()) {
      nickname = make_shared<string>(boost::any_cast<string>(m["Nickname"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~LoginHuggingFaceResponseBodyData() = default;
};
class LoginHuggingFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<LoginHuggingFaceResponseBodyData> data{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LoginHuggingFaceResponseBody() {}

  explicit LoginHuggingFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
        LoginHuggingFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<LoginHuggingFaceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
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


  virtual ~LoginHuggingFaceResponseBody() = default;
};
class LoginHuggingFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LoginHuggingFaceResponseBody> body{};

  LoginHuggingFaceResponse() {}

  explicit LoginHuggingFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LoginHuggingFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LoginHuggingFaceResponseBody>(model1);
      }
    }
  }


  virtual ~LoginHuggingFaceResponse() = default;
};
class LoginModelScopeRequest : public Darabonba::Model {
public:
  shared_ptr<string> empId{};
  shared_ptr<string> empName{};
  shared_ptr<string> token{};
  shared_ptr<string> type{};

  LoginModelScopeRequest() {}

  explicit LoginModelScopeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (empId) {
      res["EmpId"] = boost::any(*empId);
    }
    if (empName) {
      res["EmpName"] = boost::any(*empName);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EmpId") != m.end() && !m["EmpId"].empty()) {
      empId = make_shared<string>(boost::any_cast<string>(m["EmpId"]));
    }
    if (m.find("EmpName") != m.end() && !m["EmpName"].empty()) {
      empName = make_shared<string>(boost::any_cast<string>(m["EmpName"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~LoginModelScopeRequest() = default;
};
class LoginModelScopeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> jwtToken{};
  shared_ptr<string> nickname{};
  shared_ptr<string> uid{};

  LoginModelScopeResponseBodyData() {}

  explicit LoginModelScopeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (nickname) {
      res["Nickname"] = boost::any(*nickname);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Nickname") != m.end() && !m["Nickname"].empty()) {
      nickname = make_shared<string>(boost::any_cast<string>(m["Nickname"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~LoginModelScopeResponseBodyData() = default;
};
class LoginModelScopeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<LoginModelScopeResponseBodyData> data{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LoginModelScopeResponseBody() {}

  explicit LoginModelScopeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
        LoginModelScopeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<LoginModelScopeResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
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


  virtual ~LoginModelScopeResponseBody() = default;
};
class LoginModelScopeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LoginModelScopeResponseBody> body{};

  LoginModelScopeResponse() {}

  explicit LoginModelScopeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LoginModelScopeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LoginModelScopeResponseBody>(model1);
      }
    }
  }


  virtual ~LoginModelScopeResponse() = default;
};
class MotionShopVideoDetectRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> ossKey{};

  MotionShopVideoDetectRequest() {}

  explicit MotionShopVideoDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
  }


  virtual ~MotionShopVideoDetectRequest() = default;
};
class MotionShopVideoDetectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  MotionShopVideoDetectResponseBodyData() {}

  explicit MotionShopVideoDetectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~MotionShopVideoDetectResponseBodyData() = default;
};
class MotionShopVideoDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<MotionShopVideoDetectResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  MotionShopVideoDetectResponseBody() {}

  explicit MotionShopVideoDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MotionShopVideoDetectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<MotionShopVideoDetectResponseBodyData>(model1);
      }
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


  virtual ~MotionShopVideoDetectResponseBody() = default;
};
class MotionShopVideoDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MotionShopVideoDetectResponseBody> body{};

  MotionShopVideoDetectResponse() {}

  explicit MotionShopVideoDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MotionShopVideoDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MotionShopVideoDetectResponseBody>(model1);
      }
    }
  }


  virtual ~MotionShopVideoDetectResponse() = default;
};
class PopBatchQueryObjectGenerationProjectStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> projectIds{};

  PopBatchQueryObjectGenerationProjectStatusRequest() {}

  explicit PopBatchQueryObjectGenerationProjectStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (projectIds) {
      res["ProjectIds"] = boost::any(*projectIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("ProjectIds") != m.end() && !m["ProjectIds"].empty()) {
      projectIds = make_shared<string>(boost::any_cast<string>(m["ProjectIds"]));
    }
  }


  virtual ~PopBatchQueryObjectGenerationProjectStatusRequest() = default;
};
class PopBatchQueryObjectGenerationProjectStatusResponseBodyDataDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};

  PopBatchQueryObjectGenerationProjectStatusResponseBodyDataDataset() {}

  explicit PopBatchQueryObjectGenerationProjectStatusResponseBodyDataDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~PopBatchQueryObjectGenerationProjectStatusResponseBodyDataDataset() = default;
};
class PopBatchQueryObjectGenerationProjectStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bizUsage{};
  shared_ptr<PopBatchQueryObjectGenerationProjectStatusResponseBodyDataDataset> dataset{};
  shared_ptr<string> id{};
  shared_ptr<string> status{};

  PopBatchQueryObjectGenerationProjectStatusResponseBodyData() {}

  explicit PopBatchQueryObjectGenerationProjectStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopBatchQueryObjectGenerationProjectStatusResponseBodyDataDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopBatchQueryObjectGenerationProjectStatusResponseBodyDataDataset>(model1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PopBatchQueryObjectGenerationProjectStatusResponseBodyData() = default;
};
class PopBatchQueryObjectGenerationProjectStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<PopBatchQueryObjectGenerationProjectStatusResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopBatchQueryObjectGenerationProjectStatusResponseBody() {}

  explicit PopBatchQueryObjectGenerationProjectStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<PopBatchQueryObjectGenerationProjectStatusResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopBatchQueryObjectGenerationProjectStatusResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PopBatchQueryObjectGenerationProjectStatusResponseBodyData>>(expect1);
      }
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


  virtual ~PopBatchQueryObjectGenerationProjectStatusResponseBody() = default;
};
class PopBatchQueryObjectGenerationProjectStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopBatchQueryObjectGenerationProjectStatusResponseBody> body{};

  PopBatchQueryObjectGenerationProjectStatusResponse() {}

  explicit PopBatchQueryObjectGenerationProjectStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopBatchQueryObjectGenerationProjectStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopBatchQueryObjectGenerationProjectStatusResponseBody>(model1);
      }
    }
  }


  virtual ~PopBatchQueryObjectGenerationProjectStatusResponse() = default;
};
class PopBatchQueryObjectProjectStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> projectIds{};

  PopBatchQueryObjectProjectStatusRequest() {}

  explicit PopBatchQueryObjectProjectStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (projectIds) {
      res["ProjectIds"] = boost::any(*projectIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("ProjectIds") != m.end() && !m["ProjectIds"].empty()) {
      projectIds = make_shared<string>(boost::any_cast<string>(m["ProjectIds"]));
    }
  }


  virtual ~PopBatchQueryObjectProjectStatusRequest() = default;
};
class PopBatchQueryObjectProjectStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> id{};
  shared_ptr<string> status{};

  PopBatchQueryObjectProjectStatusResponseBodyData() {}

  explicit PopBatchQueryObjectProjectStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PopBatchQueryObjectProjectStatusResponseBodyData() = default;
};
class PopBatchQueryObjectProjectStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<PopBatchQueryObjectProjectStatusResponseBodyData>> data{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopBatchQueryObjectProjectStatusResponseBody() {}

  explicit PopBatchQueryObjectProjectStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
        vector<PopBatchQueryObjectProjectStatusResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopBatchQueryObjectProjectStatusResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PopBatchQueryObjectProjectStatusResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
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


  virtual ~PopBatchQueryObjectProjectStatusResponseBody() = default;
};
class PopBatchQueryObjectProjectStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopBatchQueryObjectProjectStatusResponseBody> body{};

  PopBatchQueryObjectProjectStatusResponse() {}

  explicit PopBatchQueryObjectProjectStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopBatchQueryObjectProjectStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopBatchQueryObjectProjectStatusResponseBody>(model1);
      }
    }
  }


  virtual ~PopBatchQueryObjectProjectStatusResponse() = default;
};
class PopBuildFeatureToAvatarProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  PopBuildFeatureToAvatarProjectRequest() {}

  explicit PopBuildFeatureToAvatarProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~PopBuildFeatureToAvatarProjectRequest() = default;
};
class PopBuildFeatureToAvatarProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopBuildFeatureToAvatarProjectResponseBody() {}

  explicit PopBuildFeatureToAvatarProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PopBuildFeatureToAvatarProjectResponseBody() = default;
};
class PopBuildFeatureToAvatarProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopBuildFeatureToAvatarProjectResponseBody> body{};

  PopBuildFeatureToAvatarProjectResponse() {}

  explicit PopBuildFeatureToAvatarProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopBuildFeatureToAvatarProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopBuildFeatureToAvatarProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopBuildFeatureToAvatarProjectResponse() = default;
};
class PopBuildLivePortraitModelScopeProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  PopBuildLivePortraitModelScopeProjectRequest() {}

  explicit PopBuildLivePortraitModelScopeProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~PopBuildLivePortraitModelScopeProjectRequest() = default;
};
class PopBuildLivePortraitModelScopeProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopBuildLivePortraitModelScopeProjectResponseBody() {}

  explicit PopBuildLivePortraitModelScopeProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PopBuildLivePortraitModelScopeProjectResponseBody() = default;
};
class PopBuildLivePortraitModelScopeProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopBuildLivePortraitModelScopeProjectResponseBody> body{};

  PopBuildLivePortraitModelScopeProjectResponse() {}

  explicit PopBuildLivePortraitModelScopeProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopBuildLivePortraitModelScopeProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopBuildLivePortraitModelScopeProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopBuildLivePortraitModelScopeProjectResponse() = default;
};
class PopBuildObjectGenerationProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> projectId{};

  PopBuildObjectGenerationProjectRequest() {}

  explicit PopBuildObjectGenerationProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~PopBuildObjectGenerationProjectRequest() = default;
};
class PopBuildObjectGenerationProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopBuildObjectGenerationProjectResponseBody() {}

  explicit PopBuildObjectGenerationProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PopBuildObjectGenerationProjectResponseBody() = default;
};
class PopBuildObjectGenerationProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopBuildObjectGenerationProjectResponseBody> body{};

  PopBuildObjectGenerationProjectResponse() {}

  explicit PopBuildObjectGenerationProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopBuildObjectGenerationProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopBuildObjectGenerationProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopBuildObjectGenerationProjectResponse() = default;
};
class PopBuildObjectProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> projectId{};

  PopBuildObjectProjectRequest() {}

  explicit PopBuildObjectProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~PopBuildObjectProjectRequest() = default;
};
class PopBuildObjectProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopBuildObjectProjectResponseBody() {}

  explicit PopBuildObjectProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
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


  virtual ~PopBuildObjectProjectResponseBody() = default;
};
class PopBuildObjectProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopBuildObjectProjectResponseBody> body{};

  PopBuildObjectProjectResponse() {}

  explicit PopBuildObjectProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopBuildObjectProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopBuildObjectProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopBuildObjectProjectResponse() = default;
};
class PopBuildPakRenderProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  PopBuildPakRenderProjectRequest() {}

  explicit PopBuildPakRenderProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~PopBuildPakRenderProjectRequest() = default;
};
class PopBuildPakRenderProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopBuildPakRenderProjectResponseBody() {}

  explicit PopBuildPakRenderProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PopBuildPakRenderProjectResponseBody() = default;
};
class PopBuildPakRenderProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopBuildPakRenderProjectResponseBody> body{};

  PopBuildPakRenderProjectResponse() {}

  explicit PopBuildPakRenderProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopBuildPakRenderProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopBuildPakRenderProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopBuildPakRenderProjectResponse() = default;
};
class PopBuildTextToAvatarProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> projectId{};

  PopBuildTextToAvatarProjectRequest() {}

  explicit PopBuildTextToAvatarProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~PopBuildTextToAvatarProjectRequest() = default;
};
class PopBuildTextToAvatarProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopBuildTextToAvatarProjectResponseBody() {}

  explicit PopBuildTextToAvatarProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PopBuildTextToAvatarProjectResponseBody() = default;
};
class PopBuildTextToAvatarProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopBuildTextToAvatarProjectResponseBody> body{};

  PopBuildTextToAvatarProjectResponse() {}

  explicit PopBuildTextToAvatarProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopBuildTextToAvatarProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopBuildTextToAvatarProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopBuildTextToAvatarProjectResponse() = default;
};
class PopCreateFeatureToAvatarProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> extInfo{};
  shared_ptr<string> intro{};
  shared_ptr<string> title{};

  PopCreateFeatureToAvatarProjectRequest() {}

  explicit PopCreateFeatureToAvatarProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PopCreateFeatureToAvatarProjectRequest() = default;
};
class PopCreateFeatureToAvatarProjectResponseBodyDataBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submitTime{};

  PopCreateFeatureToAvatarProjectResponseBodyDataBuildDetail() {}

  explicit PopCreateFeatureToAvatarProjectResponseBodyDataBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~PopCreateFeatureToAvatarProjectResponseBodyDataBuildDetail() = default;
};
class PopCreateFeatureToAvatarProjectResponseBodyDataDatasetPolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopCreateFeatureToAvatarProjectResponseBodyDataDatasetPolicy() {}

  explicit PopCreateFeatureToAvatarProjectResponseBodyDataDatasetPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopCreateFeatureToAvatarProjectResponseBodyDataDatasetPolicy() = default;
};
class PopCreateFeatureToAvatarProjectResponseBodyDataDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> glbModelUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> modelUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> originResultUrl{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopCreateFeatureToAvatarProjectResponseBodyDataDatasetPolicy> policy{};
  shared_ptr<string> poseUrl{};
  shared_ptr<string> previewUrl{};

  PopCreateFeatureToAvatarProjectResponseBodyDataDataset() {}

  explicit PopCreateFeatureToAvatarProjectResponseBodyDataDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (glbModelUrl) {
      res["GlbModelUrl"] = boost::any(*glbModelUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modelUrl) {
      res["ModelUrl"] = boost::any(*modelUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (originResultUrl) {
      res["OriginResultUrl"] = boost::any(*originResultUrl);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (poseUrl) {
      res["PoseUrl"] = boost::any(*poseUrl);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("GlbModelUrl") != m.end() && !m["GlbModelUrl"].empty()) {
      glbModelUrl = make_shared<string>(boost::any_cast<string>(m["GlbModelUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModelUrl") != m.end() && !m["ModelUrl"].empty()) {
      modelUrl = make_shared<string>(boost::any_cast<string>(m["ModelUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OriginResultUrl") != m.end() && !m["OriginResultUrl"].empty()) {
      originResultUrl = make_shared<string>(boost::any_cast<string>(m["OriginResultUrl"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopCreateFeatureToAvatarProjectResponseBodyDataDatasetPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopCreateFeatureToAvatarProjectResponseBodyDataDatasetPolicy>(model1);
      }
    }
    if (m.find("PoseUrl") != m.end() && !m["PoseUrl"].empty()) {
      poseUrl = make_shared<string>(boost::any_cast<string>(m["PoseUrl"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
  }


  virtual ~PopCreateFeatureToAvatarProjectResponseBodyDataDataset() = default;
};
class PopCreateFeatureToAvatarProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bizUsage{};
  shared_ptr<PopCreateFeatureToAvatarProjectResponseBodyDataBuildDetail> buildDetail{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> createMode{};
  shared_ptr<string> createTime{};
  shared_ptr<PopCreateFeatureToAvatarProjectResponseBodyDataDataset> dataset{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> materialCoverUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopCreateFeatureToAvatarProjectResponseBodyData() {}

  explicit PopCreateFeatureToAvatarProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (materialCoverUrl) {
      res["MaterialCoverUrl"] = boost::any(*materialCoverUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopCreateFeatureToAvatarProjectResponseBodyDataBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopCreateFeatureToAvatarProjectResponseBodyDataBuildDetail>(model1);
      }
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopCreateFeatureToAvatarProjectResponseBodyDataDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopCreateFeatureToAvatarProjectResponseBodyDataDataset>(model1);
      }
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("MaterialCoverUrl") != m.end() && !m["MaterialCoverUrl"].empty()) {
      materialCoverUrl = make_shared<string>(boost::any_cast<string>(m["MaterialCoverUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopCreateFeatureToAvatarProjectResponseBodyData() = default;
};
class PopCreateFeatureToAvatarProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopCreateFeatureToAvatarProjectResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopCreateFeatureToAvatarProjectResponseBody() {}

  explicit PopCreateFeatureToAvatarProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopCreateFeatureToAvatarProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopCreateFeatureToAvatarProjectResponseBodyData>(model1);
      }
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


  virtual ~PopCreateFeatureToAvatarProjectResponseBody() = default;
};
class PopCreateFeatureToAvatarProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopCreateFeatureToAvatarProjectResponseBody> body{};

  PopCreateFeatureToAvatarProjectResponse() {}

  explicit PopCreateFeatureToAvatarProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopCreateFeatureToAvatarProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopCreateFeatureToAvatarProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopCreateFeatureToAvatarProjectResponse() = default;
};
class PopCreateLivePortraitModelScopeProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> extInfo{};
  shared_ptr<string> intro{};
  shared_ptr<string> title{};

  PopCreateLivePortraitModelScopeProjectRequest() {}

  explicit PopCreateLivePortraitModelScopeProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PopCreateLivePortraitModelScopeProjectRequest() = default;
};
class PopCreateLivePortraitModelScopeProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  PopCreateLivePortraitModelScopeProjectResponseBodyData() {}

  explicit PopCreateLivePortraitModelScopeProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~PopCreateLivePortraitModelScopeProjectResponseBodyData() = default;
};
class PopCreateLivePortraitModelScopeProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopCreateLivePortraitModelScopeProjectResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopCreateLivePortraitModelScopeProjectResponseBody() {}

  explicit PopCreateLivePortraitModelScopeProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopCreateLivePortraitModelScopeProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopCreateLivePortraitModelScopeProjectResponseBodyData>(model1);
      }
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


  virtual ~PopCreateLivePortraitModelScopeProjectResponseBody() = default;
};
class PopCreateLivePortraitModelScopeProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopCreateLivePortraitModelScopeProjectResponseBody> body{};

  PopCreateLivePortraitModelScopeProjectResponse() {}

  explicit PopCreateLivePortraitModelScopeProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopCreateLivePortraitModelScopeProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopCreateLivePortraitModelScopeProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopCreateLivePortraitModelScopeProjectResponse() = default;
};
class PopCreateMaterialRequest : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<string> ext{};
  shared_ptr<string> intro{};
  shared_ptr<string> jwtToken{};
  shared_ptr<string> listStatus{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> type{};

  PopCreateMaterialRequest() {}

  explicit PopCreateMaterialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopCreateMaterialRequest() = default;
};
class PopCreateMaterialResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<bool> common{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> listStatus{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> previewUrl{};
  shared_ptr<string> type{};

  PopCreateMaterialResponseBodyData() {}

  explicit PopCreateMaterialResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<bool>(boost::any_cast<bool>(m["Common"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopCreateMaterialResponseBodyData() = default;
};
class PopCreateMaterialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopCreateMaterialResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopCreateMaterialResponseBody() {}

  explicit PopCreateMaterialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopCreateMaterialResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopCreateMaterialResponseBodyData>(model1);
      }
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


  virtual ~PopCreateMaterialResponseBody() = default;
};
class PopCreateMaterialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopCreateMaterialResponseBody> body{};

  PopCreateMaterialResponse() {}

  explicit PopCreateMaterialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopCreateMaterialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopCreateMaterialResponseBody>(model1);
      }
    }
  }


  virtual ~PopCreateMaterialResponse() = default;
};
class PopCreateObjectGenerationProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizUsage{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> intro{};
  shared_ptr<string> jwtToken{};
  shared_ptr<string> title{};

  PopCreateObjectGenerationProjectRequest() {}

  explicit PopCreateObjectGenerationProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PopCreateObjectGenerationProjectRequest() = default;
};
class PopCreateObjectGenerationProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  PopCreateObjectGenerationProjectResponseBodyData() {}

  explicit PopCreateObjectGenerationProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~PopCreateObjectGenerationProjectResponseBodyData() = default;
};
class PopCreateObjectGenerationProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopCreateObjectGenerationProjectResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopCreateObjectGenerationProjectResponseBody() {}

  explicit PopCreateObjectGenerationProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopCreateObjectGenerationProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopCreateObjectGenerationProjectResponseBodyData>(model1);
      }
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


  virtual ~PopCreateObjectGenerationProjectResponseBody() = default;
};
class PopCreateObjectGenerationProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopCreateObjectGenerationProjectResponseBody> body{};

  PopCreateObjectGenerationProjectResponse() {}

  explicit PopCreateObjectGenerationProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopCreateObjectGenerationProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopCreateObjectGenerationProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopCreateObjectGenerationProjectResponse() = default;
};
class PopCreateObjectProjectRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuild{};
  shared_ptr<string> bizUsage{};
  shared_ptr<string> customSource{};
  shared_ptr<string> dependencies{};
  shared_ptr<string> foreignUid{};
  shared_ptr<string> intro{};
  shared_ptr<string> jwtToken{};
  shared_ptr<string> mode{};
  shared_ptr<string> recommendStatus{};
  shared_ptr<string> title{};

  PopCreateObjectProjectRequest() {}

  explicit PopCreateObjectProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (customSource) {
      res["CustomSource"] = boost::any(*customSource);
    }
    if (dependencies) {
      res["Dependencies"] = boost::any(*dependencies);
    }
    if (foreignUid) {
      res["ForeignUid"] = boost::any(*foreignUid);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (recommendStatus) {
      res["RecommendStatus"] = boost::any(*recommendStatus);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<bool>(boost::any_cast<bool>(m["AutoBuild"]));
    }
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("CustomSource") != m.end() && !m["CustomSource"].empty()) {
      customSource = make_shared<string>(boost::any_cast<string>(m["CustomSource"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      dependencies = make_shared<string>(boost::any_cast<string>(m["Dependencies"]));
    }
    if (m.find("ForeignUid") != m.end() && !m["ForeignUid"].empty()) {
      foreignUid = make_shared<string>(boost::any_cast<string>(m["ForeignUid"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("RecommendStatus") != m.end() && !m["RecommendStatus"].empty()) {
      recommendStatus = make_shared<string>(boost::any_cast<string>(m["RecommendStatus"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PopCreateObjectProjectRequest() = default;
};
class PopCreateObjectProjectResponseBodyDataBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> submitTime{};

  PopCreateObjectProjectResponseBodyDataBuildDetail() {}

  explicit PopCreateObjectProjectResponseBodyDataBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~PopCreateObjectProjectResponseBodyDataBuildDetail() = default;
};
class PopCreateObjectProjectResponseBodyDataDatasetPolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopCreateObjectProjectResponseBodyDataDatasetPolicy() {}

  explicit PopCreateObjectProjectResponseBodyDataDatasetPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopCreateObjectProjectResponseBodyDataDatasetPolicy() = default;
};
class PopCreateObjectProjectResponseBodyDataDatasetToken : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> dir{};
  shared_ptr<string> expiration{};
  shared_ptr<string> host{};
  shared_ptr<string> securityToken{};

  PopCreateObjectProjectResponseBodyDataDatasetToken() {}

  explicit PopCreateObjectProjectResponseBodyDataDatasetToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~PopCreateObjectProjectResponseBodyDataDatasetToken() = default;
};
class PopCreateObjectProjectResponseBodyDataDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> glbModelUrl{};
  shared_ptr<string> modelUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> originResultUrl{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopCreateObjectProjectResponseBodyDataDatasetPolicy> policy{};
  shared_ptr<string> poseUrl{};
  shared_ptr<string> previewUrl{};
  shared_ptr<PopCreateObjectProjectResponseBodyDataDatasetToken> token{};

  PopCreateObjectProjectResponseBodyDataDataset() {}

  explicit PopCreateObjectProjectResponseBodyDataDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (glbModelUrl) {
      res["GlbModelUrl"] = boost::any(*glbModelUrl);
    }
    if (modelUrl) {
      res["ModelUrl"] = boost::any(*modelUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (originResultUrl) {
      res["OriginResultUrl"] = boost::any(*originResultUrl);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (poseUrl) {
      res["PoseUrl"] = boost::any(*poseUrl);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (token) {
      res["Token"] = token ? boost::any(token->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("GlbModelUrl") != m.end() && !m["GlbModelUrl"].empty()) {
      glbModelUrl = make_shared<string>(boost::any_cast<string>(m["GlbModelUrl"]));
    }
    if (m.find("ModelUrl") != m.end() && !m["ModelUrl"].empty()) {
      modelUrl = make_shared<string>(boost::any_cast<string>(m["ModelUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OriginResultUrl") != m.end() && !m["OriginResultUrl"].empty()) {
      originResultUrl = make_shared<string>(boost::any_cast<string>(m["OriginResultUrl"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopCreateObjectProjectResponseBodyDataDatasetPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopCreateObjectProjectResponseBodyDataDatasetPolicy>(model1);
      }
    }
    if (m.find("PoseUrl") != m.end() && !m["PoseUrl"].empty()) {
      poseUrl = make_shared<string>(boost::any_cast<string>(m["PoseUrl"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      if (typeid(map<string, boost::any>) == m["Token"].type()) {
        PopCreateObjectProjectResponseBodyDataDatasetToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Token"]));
        token = make_shared<PopCreateObjectProjectResponseBodyDataDatasetToken>(model1);
      }
    }
  }


  virtual ~PopCreateObjectProjectResponseBodyDataDataset() = default;
};
class PopCreateObjectProjectResponseBodyDataSourceClothes : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> type{};

  PopCreateObjectProjectResponseBodyDataSourceClothes() {}

  explicit PopCreateObjectProjectResponseBodyDataSourceClothes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopCreateObjectProjectResponseBodyDataSourceClothes() = default;
};
class PopCreateObjectProjectResponseBodyDataSourcePolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopCreateObjectProjectResponseBodyDataSourcePolicy() {}

  explicit PopCreateObjectProjectResponseBodyDataSourcePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopCreateObjectProjectResponseBodyDataSourcePolicy() = default;
};
class PopCreateObjectProjectResponseBodyDataSourceSourceFiles : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> fileName{};
  shared_ptr<long> filesize{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  PopCreateObjectProjectResponseBodyDataSourceSourceFiles() {}

  explicit PopCreateObjectProjectResponseBodyDataSourceSourceFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filesize) {
      res["Filesize"] = boost::any(*filesize);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Filesize") != m.end() && !m["Filesize"].empty()) {
      filesize = make_shared<long>(boost::any_cast<long>(m["Filesize"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~PopCreateObjectProjectResponseBodyDataSourceSourceFiles() = default;
};
class PopCreateObjectProjectResponseBodyDataSourceToken : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> dir{};
  shared_ptr<string> expiration{};
  shared_ptr<string> host{};
  shared_ptr<string> securityToken{};

  PopCreateObjectProjectResponseBodyDataSourceToken() {}

  explicit PopCreateObjectProjectResponseBodyDataSourceToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~PopCreateObjectProjectResponseBodyDataSourceToken() = default;
};
class PopCreateObjectProjectResponseBodyDataSource : public Darabonba::Model {
public:
  shared_ptr<vector<PopCreateObjectProjectResponseBodyDataSourceClothes>> clothes{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopCreateObjectProjectResponseBodyDataSourcePolicy> policy{};
  shared_ptr<vector<PopCreateObjectProjectResponseBodyDataSourceSourceFiles>> sourceFiles{};
  shared_ptr<PopCreateObjectProjectResponseBodyDataSourceToken> token{};

  PopCreateObjectProjectResponseBodyDataSource() {}

  explicit PopCreateObjectProjectResponseBodyDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clothes) {
      vector<boost::any> temp1;
      for(auto item1:*clothes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clothes"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceFiles) {
      vector<boost::any> temp1;
      for(auto item1:*sourceFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceFiles"] = boost::any(temp1);
    }
    if (token) {
      res["Token"] = token ? boost::any(token->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clothes") != m.end() && !m["Clothes"].empty()) {
      if (typeid(vector<boost::any>) == m["Clothes"].type()) {
        vector<PopCreateObjectProjectResponseBodyDataSourceClothes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clothes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopCreateObjectProjectResponseBodyDataSourceClothes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clothes = make_shared<vector<PopCreateObjectProjectResponseBodyDataSourceClothes>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopCreateObjectProjectResponseBodyDataSourcePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopCreateObjectProjectResponseBodyDataSourcePolicy>(model1);
      }
    }
    if (m.find("SourceFiles") != m.end() && !m["SourceFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceFiles"].type()) {
        vector<PopCreateObjectProjectResponseBodyDataSourceSourceFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopCreateObjectProjectResponseBodyDataSourceSourceFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceFiles = make_shared<vector<PopCreateObjectProjectResponseBodyDataSourceSourceFiles>>(expect1);
      }
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      if (typeid(map<string, boost::any>) == m["Token"].type()) {
        PopCreateObjectProjectResponseBodyDataSourceToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Token"]));
        token = make_shared<PopCreateObjectProjectResponseBodyDataSourceToken>(model1);
      }
    }
  }


  virtual ~PopCreateObjectProjectResponseBodyDataSource() = default;
};
class PopCreateObjectProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<bool> autoBuild{};
  shared_ptr<string> bizUsage{};
  shared_ptr<PopCreateObjectProjectResponseBodyDataBuildDetail> buildDetail{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> createMode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> customSource{};
  shared_ptr<PopCreateObjectProjectResponseBodyDataDataset> dataset{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> dependencies{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> recommendStatus{};
  shared_ptr<PopCreateObjectProjectResponseBodyDataSource> source{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopCreateObjectProjectResponseBodyData() {}

  explicit PopCreateObjectProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customSource) {
      res["CustomSource"] = boost::any(*customSource);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (dependencies) {
      res["Dependencies"] = boost::any(*dependencies);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (recommendStatus) {
      res["RecommendStatus"] = boost::any(*recommendStatus);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<bool>(boost::any_cast<bool>(m["AutoBuild"]));
    }
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopCreateObjectProjectResponseBodyDataBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopCreateObjectProjectResponseBodyDataBuildDetail>(model1);
      }
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CustomSource") != m.end() && !m["CustomSource"].empty()) {
      customSource = make_shared<string>(boost::any_cast<string>(m["CustomSource"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopCreateObjectProjectResponseBodyDataDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopCreateObjectProjectResponseBodyDataDataset>(model1);
      }
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      dependencies = make_shared<string>(boost::any_cast<string>(m["Dependencies"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RecommendStatus") != m.end() && !m["RecommendStatus"].empty()) {
      recommendStatus = make_shared<string>(boost::any_cast<string>(m["RecommendStatus"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        PopCreateObjectProjectResponseBodyDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<PopCreateObjectProjectResponseBodyDataSource>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopCreateObjectProjectResponseBodyData() = default;
};
class PopCreateObjectProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopCreateObjectProjectResponseBodyData> data{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopCreateObjectProjectResponseBody() {}

  explicit PopCreateObjectProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
        PopCreateObjectProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopCreateObjectProjectResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
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


  virtual ~PopCreateObjectProjectResponseBody() = default;
};
class PopCreateObjectProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopCreateObjectProjectResponseBody> body{};

  PopCreateObjectProjectResponse() {}

  explicit PopCreateObjectProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopCreateObjectProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopCreateObjectProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopCreateObjectProjectResponse() = default;
};
class PopCreatePakRenderProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> extInfo{};
  shared_ptr<string> intro{};
  shared_ptr<string> title{};

  PopCreatePakRenderProjectRequest() {}

  explicit PopCreatePakRenderProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PopCreatePakRenderProjectRequest() = default;
};
class PopCreatePakRenderProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuild{};
  shared_ptr<string> bizUsage{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> createMode{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> dependencies{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> materialCoverUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopCreatePakRenderProjectResponseBodyData() {}

  explicit PopCreatePakRenderProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (dependencies) {
      res["Dependencies"] = boost::any(*dependencies);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (materialCoverUrl) {
      res["MaterialCoverUrl"] = boost::any(*materialCoverUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<bool>(boost::any_cast<bool>(m["AutoBuild"]));
    }
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      dependencies = make_shared<string>(boost::any_cast<string>(m["Dependencies"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("MaterialCoverUrl") != m.end() && !m["MaterialCoverUrl"].empty()) {
      materialCoverUrl = make_shared<string>(boost::any_cast<string>(m["MaterialCoverUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopCreatePakRenderProjectResponseBodyData() = default;
};
class PopCreatePakRenderProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopCreatePakRenderProjectResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopCreatePakRenderProjectResponseBody() {}

  explicit PopCreatePakRenderProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopCreatePakRenderProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopCreatePakRenderProjectResponseBodyData>(model1);
      }
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


  virtual ~PopCreatePakRenderProjectResponseBody() = default;
};
class PopCreatePakRenderProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopCreatePakRenderProjectResponseBody> body{};

  PopCreatePakRenderProjectResponse() {}

  explicit PopCreatePakRenderProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopCreatePakRenderProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopCreatePakRenderProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopCreatePakRenderProjectResponse() = default;
};
class PopCreateTextToAvatarProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> extInfo{};
  shared_ptr<string> intro{};
  shared_ptr<string> jwtToken{};
  shared_ptr<string> title{};

  PopCreateTextToAvatarProjectRequest() {}

  explicit PopCreateTextToAvatarProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PopCreateTextToAvatarProjectRequest() = default;
};
class PopCreateTextToAvatarProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuild{};
  shared_ptr<string> bizUsage{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> createMode{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> dependencies{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> materialCoverUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopCreateTextToAvatarProjectResponseBodyData() {}

  explicit PopCreateTextToAvatarProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (dependencies) {
      res["Dependencies"] = boost::any(*dependencies);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (materialCoverUrl) {
      res["MaterialCoverUrl"] = boost::any(*materialCoverUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<bool>(boost::any_cast<bool>(m["AutoBuild"]));
    }
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      dependencies = make_shared<string>(boost::any_cast<string>(m["Dependencies"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("MaterialCoverUrl") != m.end() && !m["MaterialCoverUrl"].empty()) {
      materialCoverUrl = make_shared<string>(boost::any_cast<string>(m["MaterialCoverUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopCreateTextToAvatarProjectResponseBodyData() = default;
};
class PopCreateTextToAvatarProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopCreateTextToAvatarProjectResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopCreateTextToAvatarProjectResponseBody() {}

  explicit PopCreateTextToAvatarProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopCreateTextToAvatarProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopCreateTextToAvatarProjectResponseBodyData>(model1);
      }
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


  virtual ~PopCreateTextToAvatarProjectResponseBody() = default;
};
class PopCreateTextToAvatarProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopCreateTextToAvatarProjectResponseBody> body{};

  PopCreateTextToAvatarProjectResponse() {}

  explicit PopCreateTextToAvatarProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopCreateTextToAvatarProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopCreateTextToAvatarProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopCreateTextToAvatarProjectResponse() = default;
};
class PopDeleteMaterialRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> materialId{};

  PopDeleteMaterialRequest() {}

  explicit PopDeleteMaterialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (materialId) {
      res["MaterialId"] = boost::any(*materialId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("MaterialId") != m.end() && !m["MaterialId"].empty()) {
      materialId = make_shared<string>(boost::any_cast<string>(m["MaterialId"]));
    }
  }


  virtual ~PopDeleteMaterialRequest() = default;
};
class PopDeleteMaterialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopDeleteMaterialResponseBody() {}

  explicit PopDeleteMaterialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PopDeleteMaterialResponseBody() = default;
};
class PopDeleteMaterialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopDeleteMaterialResponseBody> body{};

  PopDeleteMaterialResponse() {}

  explicit PopDeleteMaterialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopDeleteMaterialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopDeleteMaterialResponseBody>(model1);
      }
    }
  }


  virtual ~PopDeleteMaterialResponse() = default;
};
class PopGetAITryOnJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> projectId{};
  shared_ptr<bool> withMaterial{};
  shared_ptr<bool> withResult{};

  PopGetAITryOnJobRequest() {}

  explicit PopGetAITryOnJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (withMaterial) {
      res["WithMaterial"] = boost::any(*withMaterial);
    }
    if (withResult) {
      res["WithResult"] = boost::any(*withResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("WithMaterial") != m.end() && !m["WithMaterial"].empty()) {
      withMaterial = make_shared<bool>(boost::any_cast<bool>(m["WithMaterial"]));
    }
    if (m.find("WithResult") != m.end() && !m["WithResult"].empty()) {
      withResult = make_shared<bool>(boost::any_cast<bool>(m["WithResult"]));
    }
  }


  virtual ~PopGetAITryOnJobRequest() = default;
};
class PopGetAITryOnJobResponseBodyDataDummyProjectInfoBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submitTime{};

  PopGetAITryOnJobResponseBodyDataDummyProjectInfoBuildDetail() {}

  explicit PopGetAITryOnJobResponseBodyDataDummyProjectInfoBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataDummyProjectInfoBuildDetail() = default;
};
class PopGetAITryOnJobResponseBodyDataDummyProjectInfoDatasetPolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopGetAITryOnJobResponseBodyDataDummyProjectInfoDatasetPolicy() {}

  explicit PopGetAITryOnJobResponseBodyDataDummyProjectInfoDatasetPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataDummyProjectInfoDatasetPolicy() = default;
};
class PopGetAITryOnJobResponseBodyDataDummyProjectInfoDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> glbModelUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> modelUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> originResultUrl{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataDummyProjectInfoDatasetPolicy> policy{};
  shared_ptr<string> poseUrl{};
  shared_ptr<string> previewUrl{};

  PopGetAITryOnJobResponseBodyDataDummyProjectInfoDataset() {}

  explicit PopGetAITryOnJobResponseBodyDataDummyProjectInfoDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (glbModelUrl) {
      res["GlbModelUrl"] = boost::any(*glbModelUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modelUrl) {
      res["ModelUrl"] = boost::any(*modelUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (originResultUrl) {
      res["OriginResultUrl"] = boost::any(*originResultUrl);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (poseUrl) {
      res["PoseUrl"] = boost::any(*poseUrl);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("GlbModelUrl") != m.end() && !m["GlbModelUrl"].empty()) {
      glbModelUrl = make_shared<string>(boost::any_cast<string>(m["GlbModelUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModelUrl") != m.end() && !m["ModelUrl"].empty()) {
      modelUrl = make_shared<string>(boost::any_cast<string>(m["ModelUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OriginResultUrl") != m.end() && !m["OriginResultUrl"].empty()) {
      originResultUrl = make_shared<string>(boost::any_cast<string>(m["OriginResultUrl"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopGetAITryOnJobResponseBodyDataDummyProjectInfoDatasetPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopGetAITryOnJobResponseBodyDataDummyProjectInfoDatasetPolicy>(model1);
      }
    }
    if (m.find("PoseUrl") != m.end() && !m["PoseUrl"].empty()) {
      poseUrl = make_shared<string>(boost::any_cast<string>(m["PoseUrl"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataDummyProjectInfoDataset() = default;
};
class PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkuProps : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> options{};

  PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkuProps() {}

  explicit PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkuProps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Options"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Options"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      options = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkuProps() = default;
};
class PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkus : public Darabonba::Model {
public:
  shared_ptr<string> color{};
  shared_ptr<string> cover{};
  shared_ptr<string> size{};
  shared_ptr<string> status{};

  PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkus() {}

  explicit PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (cover) {
      res["Cover"] = boost::any(*cover);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      cover = make_shared<string>(boost::any_cast<string>(m["Cover"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkus() = default;
};
class PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothes : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> part{};
  shared_ptr<string> size{};
  shared_ptr<vector<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkuProps>> skuProps{};
  shared_ptr<vector<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkus>> skus{};
  shared_ptr<map<string, string>> status{};
  shared_ptr<string> type{};
  shared_ptr<long> version{};

  PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothes() {}

  explicit PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (part) {
      res["Part"] = boost::any(*part);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (skuProps) {
      vector<boost::any> temp1;
      for(auto item1:*skuProps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkuProps"] = boost::any(temp1);
    }
    if (skus) {
      vector<boost::any> temp1;
      for(auto item1:*skus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Skus"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Part") != m.end() && !m["Part"].empty()) {
      part = make_shared<string>(boost::any_cast<string>(m["Part"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("SkuProps") != m.end() && !m["SkuProps"].empty()) {
      if (typeid(vector<boost::any>) == m["SkuProps"].type()) {
        vector<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkuProps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkuProps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkuProps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuProps = make_shared<vector<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkuProps>>(expect1);
      }
    }
    if (m.find("Skus") != m.end() && !m["Skus"].empty()) {
      if (typeid(vector<boost::any>) == m["Skus"].type()) {
        vector<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Skus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skus = make_shared<vector<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothesSkus>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Status"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      status = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothes() = default;
};
class PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourcePolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourcePolicy() {}

  explicit PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourcePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourcePolicy() = default;
};
class PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceSourceFiles : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> fileName{};
  shared_ptr<long> filesize{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceSourceFiles() {}

  explicit PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceSourceFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filesize) {
      res["Filesize"] = boost::any(*filesize);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Filesize") != m.end() && !m["Filesize"].empty()) {
      filesize = make_shared<long>(boost::any_cast<long>(m["Filesize"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceSourceFiles() = default;
};
class PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceToken : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> dir{};
  shared_ptr<string> expiration{};
  shared_ptr<string> host{};
  shared_ptr<string> securityToken{};

  PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceToken() {}

  explicit PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceToken() = default;
};
class PopGetAITryOnJobResponseBodyDataDummyProjectInfoSource : public Darabonba::Model {
public:
  shared_ptr<vector<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothes>> clothes{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourcePolicy> policy{};
  shared_ptr<vector<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceSourceFiles>> sourceFiles{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceToken> token{};

  PopGetAITryOnJobResponseBodyDataDummyProjectInfoSource() {}

  explicit PopGetAITryOnJobResponseBodyDataDummyProjectInfoSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clothes) {
      vector<boost::any> temp1;
      for(auto item1:*clothes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clothes"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceFiles) {
      vector<boost::any> temp1;
      for(auto item1:*sourceFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceFiles"] = boost::any(temp1);
    }
    if (token) {
      res["Token"] = token ? boost::any(token->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clothes") != m.end() && !m["Clothes"].empty()) {
      if (typeid(vector<boost::any>) == m["Clothes"].type()) {
        vector<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clothes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clothes = make_shared<vector<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceClothes>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourcePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourcePolicy>(model1);
      }
    }
    if (m.find("SourceFiles") != m.end() && !m["SourceFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceFiles"].type()) {
        vector<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceSourceFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceSourceFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceFiles = make_shared<vector<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceSourceFiles>>(expect1);
      }
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      if (typeid(map<string, boost::any>) == m["Token"].type()) {
        PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Token"]));
        token = make_shared<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSourceToken>(model1);
      }
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataDummyProjectInfoSource() = default;
};
class PopGetAITryOnJobResponseBodyDataDummyProjectInfo : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<bool> autoBuild{};
  shared_ptr<string> bizUsage{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataDummyProjectInfoBuildDetail> buildDetail{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> createMode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> customSource{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataDummyProjectInfoDataset> dataset{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> dependencies{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> materialCoverUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSource> source{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopGetAITryOnJobResponseBodyDataDummyProjectInfo() {}

  explicit PopGetAITryOnJobResponseBodyDataDummyProjectInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customSource) {
      res["CustomSource"] = boost::any(*customSource);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (dependencies) {
      res["Dependencies"] = boost::any(*dependencies);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (materialCoverUrl) {
      res["MaterialCoverUrl"] = boost::any(*materialCoverUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<bool>(boost::any_cast<bool>(m["AutoBuild"]));
    }
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopGetAITryOnJobResponseBodyDataDummyProjectInfoBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopGetAITryOnJobResponseBodyDataDummyProjectInfoBuildDetail>(model1);
      }
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CustomSource") != m.end() && !m["CustomSource"].empty()) {
      customSource = make_shared<string>(boost::any_cast<string>(m["CustomSource"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopGetAITryOnJobResponseBodyDataDummyProjectInfoDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopGetAITryOnJobResponseBodyDataDummyProjectInfoDataset>(model1);
      }
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      dependencies = make_shared<string>(boost::any_cast<string>(m["Dependencies"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("MaterialCoverUrl") != m.end() && !m["MaterialCoverUrl"].empty()) {
      materialCoverUrl = make_shared<string>(boost::any_cast<string>(m["MaterialCoverUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        PopGetAITryOnJobResponseBodyDataDummyProjectInfoSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<PopGetAITryOnJobResponseBodyDataDummyProjectInfoSource>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataDummyProjectInfo() = default;
};
class PopGetAITryOnJobResponseBodyDataMaterialInfoBottoms : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<bool> common{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> listStatus{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> previewUrl{};
  shared_ptr<string> type{};

  PopGetAITryOnJobResponseBodyDataMaterialInfoBottoms() {}

  explicit PopGetAITryOnJobResponseBodyDataMaterialInfoBottoms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<bool>(boost::any_cast<bool>(m["Common"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataMaterialInfoBottoms() = default;
};
class PopGetAITryOnJobResponseBodyDataMaterialInfoModel : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<bool> common{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> listStatus{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> previewUrl{};
  shared_ptr<string> type{};

  PopGetAITryOnJobResponseBodyDataMaterialInfoModel() {}

  explicit PopGetAITryOnJobResponseBodyDataMaterialInfoModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<bool>(boost::any_cast<bool>(m["Common"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataMaterialInfoModel() = default;
};
class PopGetAITryOnJobResponseBodyDataMaterialInfoSuit : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<bool> common{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> listStatus{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> previewUrl{};
  shared_ptr<string> type{};

  PopGetAITryOnJobResponseBodyDataMaterialInfoSuit() {}

  explicit PopGetAITryOnJobResponseBodyDataMaterialInfoSuit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<bool>(boost::any_cast<bool>(m["Common"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataMaterialInfoSuit() = default;
};
class PopGetAITryOnJobResponseBodyDataMaterialInfoTops : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<bool> common{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> listStatus{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> previewUrl{};
  shared_ptr<string> type{};

  PopGetAITryOnJobResponseBodyDataMaterialInfoTops() {}

  explicit PopGetAITryOnJobResponseBodyDataMaterialInfoTops(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<bool>(boost::any_cast<bool>(m["Common"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataMaterialInfoTops() = default;
};
class PopGetAITryOnJobResponseBodyDataMaterialInfo : public Darabonba::Model {
public:
  shared_ptr<PopGetAITryOnJobResponseBodyDataMaterialInfoBottoms> bottoms{};
  shared_ptr<string> clothingType{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataMaterialInfoModel> model{};
  shared_ptr<string> shoeType{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataMaterialInfoSuit> suit{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataMaterialInfoTops> tops{};

  PopGetAITryOnJobResponseBodyDataMaterialInfo() {}

  explicit PopGetAITryOnJobResponseBodyDataMaterialInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bottoms) {
      res["Bottoms"] = bottoms ? boost::any(bottoms->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clothingType) {
      res["ClothingType"] = boost::any(*clothingType);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (shoeType) {
      res["ShoeType"] = boost::any(*shoeType);
    }
    if (suit) {
      res["Suit"] = suit ? boost::any(suit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tops) {
      res["Tops"] = tops ? boost::any(tops->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bottoms") != m.end() && !m["Bottoms"].empty()) {
      if (typeid(map<string, boost::any>) == m["Bottoms"].type()) {
        PopGetAITryOnJobResponseBodyDataMaterialInfoBottoms model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Bottoms"]));
        bottoms = make_shared<PopGetAITryOnJobResponseBodyDataMaterialInfoBottoms>(model1);
      }
    }
    if (m.find("ClothingType") != m.end() && !m["ClothingType"].empty()) {
      clothingType = make_shared<string>(boost::any_cast<string>(m["ClothingType"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        PopGetAITryOnJobResponseBodyDataMaterialInfoModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<PopGetAITryOnJobResponseBodyDataMaterialInfoModel>(model1);
      }
    }
    if (m.find("ShoeType") != m.end() && !m["ShoeType"].empty()) {
      shoeType = make_shared<string>(boost::any_cast<string>(m["ShoeType"]));
    }
    if (m.find("Suit") != m.end() && !m["Suit"].empty()) {
      if (typeid(map<string, boost::any>) == m["Suit"].type()) {
        PopGetAITryOnJobResponseBodyDataMaterialInfoSuit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Suit"]));
        suit = make_shared<PopGetAITryOnJobResponseBodyDataMaterialInfoSuit>(model1);
      }
    }
    if (m.find("Tops") != m.end() && !m["Tops"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tops"].type()) {
        PopGetAITryOnJobResponseBodyDataMaterialInfoTops model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tops"]));
        tops = make_shared<PopGetAITryOnJobResponseBodyDataMaterialInfoTops>(model1);
      }
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataMaterialInfo() = default;
};
class PopGetAITryOnJobResponseBodyDataSubTasksFeedback : public Darabonba::Model {
public:
  shared_ptr<vector<long>> dislikeTags{};
  shared_ptr<string> otherReason{};
  shared_ptr<long> projectId{};
  shared_ptr<long> rating{};

  PopGetAITryOnJobResponseBodyDataSubTasksFeedback() {}

  explicit PopGetAITryOnJobResponseBodyDataSubTasksFeedback(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dislikeTags) {
      res["DislikeTags"] = boost::any(*dislikeTags);
    }
    if (otherReason) {
      res["OtherReason"] = boost::any(*otherReason);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (rating) {
      res["Rating"] = boost::any(*rating);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DislikeTags") != m.end() && !m["DislikeTags"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DislikeTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DislikeTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      dislikeTags = make_shared<vector<long>>(toVec1);
    }
    if (m.find("OtherReason") != m.end() && !m["OtherReason"].empty()) {
      otherReason = make_shared<string>(boost::any_cast<string>(m["OtherReason"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("Rating") != m.end() && !m["Rating"].empty()) {
      rating = make_shared<long>(boost::any_cast<long>(m["Rating"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataSubTasksFeedback() = default;
};
class PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submitTime{};

  PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoBuildDetail() {}

  explicit PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoBuildDetail() = default;
};
class PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoDatasetPolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoDatasetPolicy() {}

  explicit PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoDatasetPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoDatasetPolicy() = default;
};
class PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> glbModelUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> modelUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> originResultUrl{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoDatasetPolicy> policy{};
  shared_ptr<string> poseUrl{};
  shared_ptr<string> previewUrl{};

  PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoDataset() {}

  explicit PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (glbModelUrl) {
      res["GlbModelUrl"] = boost::any(*glbModelUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modelUrl) {
      res["ModelUrl"] = boost::any(*modelUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (originResultUrl) {
      res["OriginResultUrl"] = boost::any(*originResultUrl);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (poseUrl) {
      res["PoseUrl"] = boost::any(*poseUrl);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("GlbModelUrl") != m.end() && !m["GlbModelUrl"].empty()) {
      glbModelUrl = make_shared<string>(boost::any_cast<string>(m["GlbModelUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModelUrl") != m.end() && !m["ModelUrl"].empty()) {
      modelUrl = make_shared<string>(boost::any_cast<string>(m["ModelUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OriginResultUrl") != m.end() && !m["OriginResultUrl"].empty()) {
      originResultUrl = make_shared<string>(boost::any_cast<string>(m["OriginResultUrl"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoDatasetPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoDatasetPolicy>(model1);
      }
    }
    if (m.find("PoseUrl") != m.end() && !m["PoseUrl"].empty()) {
      poseUrl = make_shared<string>(boost::any_cast<string>(m["PoseUrl"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoDataset() = default;
};
class PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> options{};

  PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps() {}

  explicit PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Options"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Options"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      options = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps() = default;
};
class PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus : public Darabonba::Model {
public:
  shared_ptr<string> color{};
  shared_ptr<string> cover{};
  shared_ptr<string> size{};
  shared_ptr<string> status{};

  PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus() {}

  explicit PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (cover) {
      res["Cover"] = boost::any(*cover);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      cover = make_shared<string>(boost::any_cast<string>(m["Cover"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus() = default;
};
class PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothes : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> part{};
  shared_ptr<string> size{};
  shared_ptr<vector<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps>> skuProps{};
  shared_ptr<vector<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus>> skus{};
  shared_ptr<map<string, string>> status{};
  shared_ptr<string> type{};
  shared_ptr<long> version{};

  PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothes() {}

  explicit PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (part) {
      res["Part"] = boost::any(*part);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (skuProps) {
      vector<boost::any> temp1;
      for(auto item1:*skuProps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkuProps"] = boost::any(temp1);
    }
    if (skus) {
      vector<boost::any> temp1;
      for(auto item1:*skus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Skus"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Part") != m.end() && !m["Part"].empty()) {
      part = make_shared<string>(boost::any_cast<string>(m["Part"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("SkuProps") != m.end() && !m["SkuProps"].empty()) {
      if (typeid(vector<boost::any>) == m["SkuProps"].type()) {
        vector<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkuProps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuProps = make_shared<vector<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps>>(expect1);
      }
    }
    if (m.find("Skus") != m.end() && !m["Skus"].empty()) {
      if (typeid(vector<boost::any>) == m["Skus"].type()) {
        vector<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Skus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skus = make_shared<vector<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Status"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      status = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothes() = default;
};
class PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourcePolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourcePolicy() {}

  explicit PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourcePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourcePolicy() = default;
};
class PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> fileName{};
  shared_ptr<long> filesize{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles() {}

  explicit PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filesize) {
      res["Filesize"] = boost::any(*filesize);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Filesize") != m.end() && !m["Filesize"].empty()) {
      filesize = make_shared<long>(boost::any_cast<long>(m["Filesize"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles() = default;
};
class PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceToken : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> dir{};
  shared_ptr<string> expiration{};
  shared_ptr<string> host{};
  shared_ptr<string> securityToken{};

  PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceToken() {}

  explicit PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceToken() = default;
};
class PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSource : public Darabonba::Model {
public:
  shared_ptr<vector<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothes>> clothes{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourcePolicy> policy{};
  shared_ptr<vector<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles>> sourceFiles{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceToken> token{};

  PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSource() {}

  explicit PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clothes) {
      vector<boost::any> temp1;
      for(auto item1:*clothes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clothes"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceFiles) {
      vector<boost::any> temp1;
      for(auto item1:*sourceFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceFiles"] = boost::any(temp1);
    }
    if (token) {
      res["Token"] = token ? boost::any(token->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clothes") != m.end() && !m["Clothes"].empty()) {
      if (typeid(vector<boost::any>) == m["Clothes"].type()) {
        vector<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clothes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clothes = make_shared<vector<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceClothes>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourcePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourcePolicy>(model1);
      }
    }
    if (m.find("SourceFiles") != m.end() && !m["SourceFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceFiles"].type()) {
        vector<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceFiles = make_shared<vector<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles>>(expect1);
      }
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      if (typeid(map<string, boost::any>) == m["Token"].type()) {
        PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Token"]));
        token = make_shared<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSourceToken>(model1);
      }
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSource() = default;
};
class PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfo : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<bool> autoBuild{};
  shared_ptr<string> bizUsage{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoBuildDetail> buildDetail{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> createMode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> customSource{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoDataset> dataset{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> dependencies{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> materialCoverUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSource> source{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfo() {}

  explicit PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customSource) {
      res["CustomSource"] = boost::any(*customSource);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (dependencies) {
      res["Dependencies"] = boost::any(*dependencies);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (materialCoverUrl) {
      res["MaterialCoverUrl"] = boost::any(*materialCoverUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<bool>(boost::any_cast<bool>(m["AutoBuild"]));
    }
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoBuildDetail>(model1);
      }
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CustomSource") != m.end() && !m["CustomSource"].empty()) {
      customSource = make_shared<string>(boost::any_cast<string>(m["CustomSource"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoDataset>(model1);
      }
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      dependencies = make_shared<string>(boost::any_cast<string>(m["Dependencies"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("MaterialCoverUrl") != m.end() && !m["MaterialCoverUrl"].empty()) {
      materialCoverUrl = make_shared<string>(boost::any_cast<string>(m["MaterialCoverUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfoSource>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfo() = default;
};
class PopGetAITryOnJobResponseBodyDataSubTasks : public Darabonba::Model {
public:
  shared_ptr<PopGetAITryOnJobResponseBodyDataSubTasksFeedback> feedback{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfo> subProjectInfo{};

  PopGetAITryOnJobResponseBodyDataSubTasks() {}

  explicit PopGetAITryOnJobResponseBodyDataSubTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feedback) {
      res["Feedback"] = feedback ? boost::any(feedback->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subProjectInfo) {
      res["SubProjectInfo"] = subProjectInfo ? boost::any(subProjectInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      if (typeid(map<string, boost::any>) == m["Feedback"].type()) {
        PopGetAITryOnJobResponseBodyDataSubTasksFeedback model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Feedback"]));
        feedback = make_shared<PopGetAITryOnJobResponseBodyDataSubTasksFeedback>(model1);
      }
    }
    if (m.find("SubProjectInfo") != m.end() && !m["SubProjectInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubProjectInfo"].type()) {
        PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubProjectInfo"]));
        subProjectInfo = make_shared<PopGetAITryOnJobResponseBodyDataSubTasksSubProjectInfo>(model1);
      }
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyDataSubTasks() = default;
};
class PopGetAITryOnJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<PopGetAITryOnJobResponseBodyDataDummyProjectInfo> dummyProjectInfo{};
  shared_ptr<PopGetAITryOnJobResponseBodyDataMaterialInfo> materialInfo{};
  shared_ptr<vector<PopGetAITryOnJobResponseBodyDataSubTasks>> subTasks{};

  PopGetAITryOnJobResponseBodyData() {}

  explicit PopGetAITryOnJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dummyProjectInfo) {
      res["DummyProjectInfo"] = dummyProjectInfo ? boost::any(dummyProjectInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (materialInfo) {
      res["MaterialInfo"] = materialInfo ? boost::any(materialInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subTasks) {
      vector<boost::any> temp1;
      for(auto item1:*subTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubTasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DummyProjectInfo") != m.end() && !m["DummyProjectInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DummyProjectInfo"].type()) {
        PopGetAITryOnJobResponseBodyDataDummyProjectInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DummyProjectInfo"]));
        dummyProjectInfo = make_shared<PopGetAITryOnJobResponseBodyDataDummyProjectInfo>(model1);
      }
    }
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MaterialInfo"].type()) {
        PopGetAITryOnJobResponseBodyDataMaterialInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MaterialInfo"]));
        materialInfo = make_shared<PopGetAITryOnJobResponseBodyDataMaterialInfo>(model1);
      }
    }
    if (m.find("SubTasks") != m.end() && !m["SubTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["SubTasks"].type()) {
        vector<PopGetAITryOnJobResponseBodyDataSubTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopGetAITryOnJobResponseBodyDataSubTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subTasks = make_shared<vector<PopGetAITryOnJobResponseBodyDataSubTasks>>(expect1);
      }
    }
  }


  virtual ~PopGetAITryOnJobResponseBodyData() = default;
};
class PopGetAITryOnJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopGetAITryOnJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopGetAITryOnJobResponseBody() {}

  explicit PopGetAITryOnJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopGetAITryOnJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopGetAITryOnJobResponseBodyData>(model1);
      }
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


  virtual ~PopGetAITryOnJobResponseBody() = default;
};
class PopGetAITryOnJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopGetAITryOnJobResponseBody> body{};

  PopGetAITryOnJobResponse() {}

  explicit PopGetAITryOnJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopGetAITryOnJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopGetAITryOnJobResponseBody>(model1);
      }
    }
  }


  virtual ~PopGetAITryOnJobResponse() = default;
};
class PopListAITryOnJobsRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<string> jwtToken{};
  shared_ptr<long> size{};

  PopListAITryOnJobsRequest() {}

  explicit PopListAITryOnJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~PopListAITryOnJobsRequest() = default;
};
class PopListAITryOnJobsResponseBodyDataDummyProjectInfoBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submitTime{};

  PopListAITryOnJobsResponseBodyDataDummyProjectInfoBuildDetail() {}

  explicit PopListAITryOnJobsResponseBodyDataDummyProjectInfoBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataDummyProjectInfoBuildDetail() = default;
};
class PopListAITryOnJobsResponseBodyDataDummyProjectInfoDatasetPolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopListAITryOnJobsResponseBodyDataDummyProjectInfoDatasetPolicy() {}

  explicit PopListAITryOnJobsResponseBodyDataDummyProjectInfoDatasetPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataDummyProjectInfoDatasetPolicy() = default;
};
class PopListAITryOnJobsResponseBodyDataDummyProjectInfoDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> glbModelUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> modelUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> originResultUrl{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataDummyProjectInfoDatasetPolicy> policy{};
  shared_ptr<string> poseUrl{};
  shared_ptr<string> previewUrl{};

  PopListAITryOnJobsResponseBodyDataDummyProjectInfoDataset() {}

  explicit PopListAITryOnJobsResponseBodyDataDummyProjectInfoDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (glbModelUrl) {
      res["GlbModelUrl"] = boost::any(*glbModelUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modelUrl) {
      res["ModelUrl"] = boost::any(*modelUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (originResultUrl) {
      res["OriginResultUrl"] = boost::any(*originResultUrl);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (poseUrl) {
      res["PoseUrl"] = boost::any(*poseUrl);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("GlbModelUrl") != m.end() && !m["GlbModelUrl"].empty()) {
      glbModelUrl = make_shared<string>(boost::any_cast<string>(m["GlbModelUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModelUrl") != m.end() && !m["ModelUrl"].empty()) {
      modelUrl = make_shared<string>(boost::any_cast<string>(m["ModelUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OriginResultUrl") != m.end() && !m["OriginResultUrl"].empty()) {
      originResultUrl = make_shared<string>(boost::any_cast<string>(m["OriginResultUrl"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopListAITryOnJobsResponseBodyDataDummyProjectInfoDatasetPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopListAITryOnJobsResponseBodyDataDummyProjectInfoDatasetPolicy>(model1);
      }
    }
    if (m.find("PoseUrl") != m.end() && !m["PoseUrl"].empty()) {
      poseUrl = make_shared<string>(boost::any_cast<string>(m["PoseUrl"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataDummyProjectInfoDataset() = default;
};
class PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkuProps : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> options{};

  PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkuProps() {}

  explicit PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkuProps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Options"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Options"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      options = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkuProps() = default;
};
class PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkus : public Darabonba::Model {
public:
  shared_ptr<string> color{};
  shared_ptr<string> cover{};
  shared_ptr<string> size{};
  shared_ptr<string> status{};

  PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkus() {}

  explicit PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (cover) {
      res["Cover"] = boost::any(*cover);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      cover = make_shared<string>(boost::any_cast<string>(m["Cover"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkus() = default;
};
class PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothes : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> part{};
  shared_ptr<string> size{};
  shared_ptr<vector<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkuProps>> skuProps{};
  shared_ptr<vector<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkus>> skus{};
  shared_ptr<map<string, string>> status{};
  shared_ptr<string> type{};
  shared_ptr<long> version{};

  PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothes() {}

  explicit PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (part) {
      res["Part"] = boost::any(*part);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (skuProps) {
      vector<boost::any> temp1;
      for(auto item1:*skuProps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkuProps"] = boost::any(temp1);
    }
    if (skus) {
      vector<boost::any> temp1;
      for(auto item1:*skus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Skus"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Part") != m.end() && !m["Part"].empty()) {
      part = make_shared<string>(boost::any_cast<string>(m["Part"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("SkuProps") != m.end() && !m["SkuProps"].empty()) {
      if (typeid(vector<boost::any>) == m["SkuProps"].type()) {
        vector<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkuProps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkuProps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkuProps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuProps = make_shared<vector<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkuProps>>(expect1);
      }
    }
    if (m.find("Skus") != m.end() && !m["Skus"].empty()) {
      if (typeid(vector<boost::any>) == m["Skus"].type()) {
        vector<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Skus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skus = make_shared<vector<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothesSkus>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Status"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      status = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothes() = default;
};
class PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourcePolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourcePolicy() {}

  explicit PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourcePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourcePolicy() = default;
};
class PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceSourceFiles : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> fileName{};
  shared_ptr<long> filesize{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceSourceFiles() {}

  explicit PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceSourceFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filesize) {
      res["Filesize"] = boost::any(*filesize);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Filesize") != m.end() && !m["Filesize"].empty()) {
      filesize = make_shared<long>(boost::any_cast<long>(m["Filesize"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceSourceFiles() = default;
};
class PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceToken : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> dir{};
  shared_ptr<string> expiration{};
  shared_ptr<string> host{};
  shared_ptr<string> securityToken{};

  PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceToken() {}

  explicit PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceToken() = default;
};
class PopListAITryOnJobsResponseBodyDataDummyProjectInfoSource : public Darabonba::Model {
public:
  shared_ptr<vector<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothes>> clothes{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourcePolicy> policy{};
  shared_ptr<vector<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceSourceFiles>> sourceFiles{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceToken> token{};

  PopListAITryOnJobsResponseBodyDataDummyProjectInfoSource() {}

  explicit PopListAITryOnJobsResponseBodyDataDummyProjectInfoSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clothes) {
      vector<boost::any> temp1;
      for(auto item1:*clothes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clothes"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceFiles) {
      vector<boost::any> temp1;
      for(auto item1:*sourceFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceFiles"] = boost::any(temp1);
    }
    if (token) {
      res["Token"] = token ? boost::any(token->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clothes") != m.end() && !m["Clothes"].empty()) {
      if (typeid(vector<boost::any>) == m["Clothes"].type()) {
        vector<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clothes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clothes = make_shared<vector<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceClothes>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourcePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourcePolicy>(model1);
      }
    }
    if (m.find("SourceFiles") != m.end() && !m["SourceFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceFiles"].type()) {
        vector<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceSourceFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceSourceFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceFiles = make_shared<vector<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceSourceFiles>>(expect1);
      }
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      if (typeid(map<string, boost::any>) == m["Token"].type()) {
        PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Token"]));
        token = make_shared<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSourceToken>(model1);
      }
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataDummyProjectInfoSource() = default;
};
class PopListAITryOnJobsResponseBodyDataDummyProjectInfo : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<bool> autoBuild{};
  shared_ptr<string> bizUsage{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataDummyProjectInfoBuildDetail> buildDetail{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> createMode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> customSource{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataDummyProjectInfoDataset> dataset{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> dependencies{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> materialCoverUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSource> source{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopListAITryOnJobsResponseBodyDataDummyProjectInfo() {}

  explicit PopListAITryOnJobsResponseBodyDataDummyProjectInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customSource) {
      res["CustomSource"] = boost::any(*customSource);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (dependencies) {
      res["Dependencies"] = boost::any(*dependencies);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (materialCoverUrl) {
      res["MaterialCoverUrl"] = boost::any(*materialCoverUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<bool>(boost::any_cast<bool>(m["AutoBuild"]));
    }
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopListAITryOnJobsResponseBodyDataDummyProjectInfoBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopListAITryOnJobsResponseBodyDataDummyProjectInfoBuildDetail>(model1);
      }
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CustomSource") != m.end() && !m["CustomSource"].empty()) {
      customSource = make_shared<string>(boost::any_cast<string>(m["CustomSource"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopListAITryOnJobsResponseBodyDataDummyProjectInfoDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopListAITryOnJobsResponseBodyDataDummyProjectInfoDataset>(model1);
      }
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      dependencies = make_shared<string>(boost::any_cast<string>(m["Dependencies"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("MaterialCoverUrl") != m.end() && !m["MaterialCoverUrl"].empty()) {
      materialCoverUrl = make_shared<string>(boost::any_cast<string>(m["MaterialCoverUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        PopListAITryOnJobsResponseBodyDataDummyProjectInfoSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<PopListAITryOnJobsResponseBodyDataDummyProjectInfoSource>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataDummyProjectInfo() = default;
};
class PopListAITryOnJobsResponseBodyDataMaterialInfoBottoms : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<bool> common{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> listStatus{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> previewUrl{};
  shared_ptr<string> type{};

  PopListAITryOnJobsResponseBodyDataMaterialInfoBottoms() {}

  explicit PopListAITryOnJobsResponseBodyDataMaterialInfoBottoms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<bool>(boost::any_cast<bool>(m["Common"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataMaterialInfoBottoms() = default;
};
class PopListAITryOnJobsResponseBodyDataMaterialInfoModel : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<bool> common{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> listStatus{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> previewUrl{};
  shared_ptr<string> type{};

  PopListAITryOnJobsResponseBodyDataMaterialInfoModel() {}

  explicit PopListAITryOnJobsResponseBodyDataMaterialInfoModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<bool>(boost::any_cast<bool>(m["Common"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataMaterialInfoModel() = default;
};
class PopListAITryOnJobsResponseBodyDataMaterialInfoSuit : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<bool> common{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> listStatus{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> previewUrl{};
  shared_ptr<string> type{};

  PopListAITryOnJobsResponseBodyDataMaterialInfoSuit() {}

  explicit PopListAITryOnJobsResponseBodyDataMaterialInfoSuit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<bool>(boost::any_cast<bool>(m["Common"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataMaterialInfoSuit() = default;
};
class PopListAITryOnJobsResponseBodyDataMaterialInfoTops : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<bool> common{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> listStatus{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> previewUrl{};
  shared_ptr<string> type{};

  PopListAITryOnJobsResponseBodyDataMaterialInfoTops() {}

  explicit PopListAITryOnJobsResponseBodyDataMaterialInfoTops(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<bool>(boost::any_cast<bool>(m["Common"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataMaterialInfoTops() = default;
};
class PopListAITryOnJobsResponseBodyDataMaterialInfo : public Darabonba::Model {
public:
  shared_ptr<PopListAITryOnJobsResponseBodyDataMaterialInfoBottoms> bottoms{};
  shared_ptr<string> clothingType{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataMaterialInfoModel> model{};
  shared_ptr<string> shoeType{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataMaterialInfoSuit> suit{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataMaterialInfoTops> tops{};

  PopListAITryOnJobsResponseBodyDataMaterialInfo() {}

  explicit PopListAITryOnJobsResponseBodyDataMaterialInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bottoms) {
      res["Bottoms"] = bottoms ? boost::any(bottoms->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clothingType) {
      res["ClothingType"] = boost::any(*clothingType);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (shoeType) {
      res["ShoeType"] = boost::any(*shoeType);
    }
    if (suit) {
      res["Suit"] = suit ? boost::any(suit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tops) {
      res["Tops"] = tops ? boost::any(tops->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bottoms") != m.end() && !m["Bottoms"].empty()) {
      if (typeid(map<string, boost::any>) == m["Bottoms"].type()) {
        PopListAITryOnJobsResponseBodyDataMaterialInfoBottoms model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Bottoms"]));
        bottoms = make_shared<PopListAITryOnJobsResponseBodyDataMaterialInfoBottoms>(model1);
      }
    }
    if (m.find("ClothingType") != m.end() && !m["ClothingType"].empty()) {
      clothingType = make_shared<string>(boost::any_cast<string>(m["ClothingType"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        PopListAITryOnJobsResponseBodyDataMaterialInfoModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<PopListAITryOnJobsResponseBodyDataMaterialInfoModel>(model1);
      }
    }
    if (m.find("ShoeType") != m.end() && !m["ShoeType"].empty()) {
      shoeType = make_shared<string>(boost::any_cast<string>(m["ShoeType"]));
    }
    if (m.find("Suit") != m.end() && !m["Suit"].empty()) {
      if (typeid(map<string, boost::any>) == m["Suit"].type()) {
        PopListAITryOnJobsResponseBodyDataMaterialInfoSuit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Suit"]));
        suit = make_shared<PopListAITryOnJobsResponseBodyDataMaterialInfoSuit>(model1);
      }
    }
    if (m.find("Tops") != m.end() && !m["Tops"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tops"].type()) {
        PopListAITryOnJobsResponseBodyDataMaterialInfoTops model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tops"]));
        tops = make_shared<PopListAITryOnJobsResponseBodyDataMaterialInfoTops>(model1);
      }
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataMaterialInfo() = default;
};
class PopListAITryOnJobsResponseBodyDataSubTasksFeedback : public Darabonba::Model {
public:
  shared_ptr<vector<long>> dislikeTags{};
  shared_ptr<string> otherReason{};
  shared_ptr<long> projectId{};
  shared_ptr<long> rating{};

  PopListAITryOnJobsResponseBodyDataSubTasksFeedback() {}

  explicit PopListAITryOnJobsResponseBodyDataSubTasksFeedback(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dislikeTags) {
      res["DislikeTags"] = boost::any(*dislikeTags);
    }
    if (otherReason) {
      res["OtherReason"] = boost::any(*otherReason);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (rating) {
      res["Rating"] = boost::any(*rating);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DislikeTags") != m.end() && !m["DislikeTags"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DislikeTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DislikeTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      dislikeTags = make_shared<vector<long>>(toVec1);
    }
    if (m.find("OtherReason") != m.end() && !m["OtherReason"].empty()) {
      otherReason = make_shared<string>(boost::any_cast<string>(m["OtherReason"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("Rating") != m.end() && !m["Rating"].empty()) {
      rating = make_shared<long>(boost::any_cast<long>(m["Rating"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataSubTasksFeedback() = default;
};
class PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submitTime{};

  PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoBuildDetail() {}

  explicit PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoBuildDetail() = default;
};
class PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoDatasetPolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoDatasetPolicy() {}

  explicit PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoDatasetPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoDatasetPolicy() = default;
};
class PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> glbModelUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> modelUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> originResultUrl{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoDatasetPolicy> policy{};
  shared_ptr<string> poseUrl{};
  shared_ptr<string> previewUrl{};

  PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoDataset() {}

  explicit PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (glbModelUrl) {
      res["GlbModelUrl"] = boost::any(*glbModelUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modelUrl) {
      res["ModelUrl"] = boost::any(*modelUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (originResultUrl) {
      res["OriginResultUrl"] = boost::any(*originResultUrl);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (poseUrl) {
      res["PoseUrl"] = boost::any(*poseUrl);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("GlbModelUrl") != m.end() && !m["GlbModelUrl"].empty()) {
      glbModelUrl = make_shared<string>(boost::any_cast<string>(m["GlbModelUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModelUrl") != m.end() && !m["ModelUrl"].empty()) {
      modelUrl = make_shared<string>(boost::any_cast<string>(m["ModelUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OriginResultUrl") != m.end() && !m["OriginResultUrl"].empty()) {
      originResultUrl = make_shared<string>(boost::any_cast<string>(m["OriginResultUrl"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoDatasetPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoDatasetPolicy>(model1);
      }
    }
    if (m.find("PoseUrl") != m.end() && !m["PoseUrl"].empty()) {
      poseUrl = make_shared<string>(boost::any_cast<string>(m["PoseUrl"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoDataset() = default;
};
class PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> options{};

  PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps() {}

  explicit PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Options"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Options"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      options = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps() = default;
};
class PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus : public Darabonba::Model {
public:
  shared_ptr<string> color{};
  shared_ptr<string> cover{};
  shared_ptr<string> size{};
  shared_ptr<string> status{};

  PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus() {}

  explicit PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (cover) {
      res["Cover"] = boost::any(*cover);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      cover = make_shared<string>(boost::any_cast<string>(m["Cover"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus() = default;
};
class PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothes : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> part{};
  shared_ptr<string> size{};
  shared_ptr<vector<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps>> skuProps{};
  shared_ptr<vector<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus>> skus{};
  shared_ptr<map<string, string>> status{};
  shared_ptr<string> type{};
  shared_ptr<long> version{};

  PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothes() {}

  explicit PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (part) {
      res["Part"] = boost::any(*part);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (skuProps) {
      vector<boost::any> temp1;
      for(auto item1:*skuProps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkuProps"] = boost::any(temp1);
    }
    if (skus) {
      vector<boost::any> temp1;
      for(auto item1:*skus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Skus"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Part") != m.end() && !m["Part"].empty()) {
      part = make_shared<string>(boost::any_cast<string>(m["Part"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("SkuProps") != m.end() && !m["SkuProps"].empty()) {
      if (typeid(vector<boost::any>) == m["SkuProps"].type()) {
        vector<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkuProps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuProps = make_shared<vector<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkuProps>>(expect1);
      }
    }
    if (m.find("Skus") != m.end() && !m["Skus"].empty()) {
      if (typeid(vector<boost::any>) == m["Skus"].type()) {
        vector<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Skus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skus = make_shared<vector<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothesSkus>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Status"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      status = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothes() = default;
};
class PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourcePolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourcePolicy() {}

  explicit PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourcePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourcePolicy() = default;
};
class PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> fileName{};
  shared_ptr<long> filesize{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles() {}

  explicit PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filesize) {
      res["Filesize"] = boost::any(*filesize);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Filesize") != m.end() && !m["Filesize"].empty()) {
      filesize = make_shared<long>(boost::any_cast<long>(m["Filesize"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles() = default;
};
class PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceToken : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> dir{};
  shared_ptr<string> expiration{};
  shared_ptr<string> host{};
  shared_ptr<string> securityToken{};

  PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceToken() {}

  explicit PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceToken() = default;
};
class PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSource : public Darabonba::Model {
public:
  shared_ptr<vector<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothes>> clothes{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourcePolicy> policy{};
  shared_ptr<vector<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles>> sourceFiles{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceToken> token{};

  PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSource() {}

  explicit PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clothes) {
      vector<boost::any> temp1;
      for(auto item1:*clothes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clothes"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceFiles) {
      vector<boost::any> temp1;
      for(auto item1:*sourceFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceFiles"] = boost::any(temp1);
    }
    if (token) {
      res["Token"] = token ? boost::any(token->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clothes") != m.end() && !m["Clothes"].empty()) {
      if (typeid(vector<boost::any>) == m["Clothes"].type()) {
        vector<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clothes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clothes = make_shared<vector<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceClothes>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourcePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourcePolicy>(model1);
      }
    }
    if (m.find("SourceFiles") != m.end() && !m["SourceFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceFiles"].type()) {
        vector<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceFiles = make_shared<vector<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceSourceFiles>>(expect1);
      }
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      if (typeid(map<string, boost::any>) == m["Token"].type()) {
        PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Token"]));
        token = make_shared<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSourceToken>(model1);
      }
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSource() = default;
};
class PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfo : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<bool> autoBuild{};
  shared_ptr<string> bizUsage{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoBuildDetail> buildDetail{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> createMode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> customSource{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoDataset> dataset{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> dependencies{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> materialCoverUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSource> source{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfo() {}

  explicit PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customSource) {
      res["CustomSource"] = boost::any(*customSource);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (dependencies) {
      res["Dependencies"] = boost::any(*dependencies);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (materialCoverUrl) {
      res["MaterialCoverUrl"] = boost::any(*materialCoverUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<bool>(boost::any_cast<bool>(m["AutoBuild"]));
    }
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoBuildDetail>(model1);
      }
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CustomSource") != m.end() && !m["CustomSource"].empty()) {
      customSource = make_shared<string>(boost::any_cast<string>(m["CustomSource"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoDataset>(model1);
      }
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      dependencies = make_shared<string>(boost::any_cast<string>(m["Dependencies"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("MaterialCoverUrl") != m.end() && !m["MaterialCoverUrl"].empty()) {
      materialCoverUrl = make_shared<string>(boost::any_cast<string>(m["MaterialCoverUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfoSource>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfo() = default;
};
class PopListAITryOnJobsResponseBodyDataSubTasks : public Darabonba::Model {
public:
  shared_ptr<PopListAITryOnJobsResponseBodyDataSubTasksFeedback> feedback{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfo> subProjectInfo{};

  PopListAITryOnJobsResponseBodyDataSubTasks() {}

  explicit PopListAITryOnJobsResponseBodyDataSubTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feedback) {
      res["Feedback"] = feedback ? boost::any(feedback->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subProjectInfo) {
      res["SubProjectInfo"] = subProjectInfo ? boost::any(subProjectInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      if (typeid(map<string, boost::any>) == m["Feedback"].type()) {
        PopListAITryOnJobsResponseBodyDataSubTasksFeedback model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Feedback"]));
        feedback = make_shared<PopListAITryOnJobsResponseBodyDataSubTasksFeedback>(model1);
      }
    }
    if (m.find("SubProjectInfo") != m.end() && !m["SubProjectInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubProjectInfo"].type()) {
        PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubProjectInfo"]));
        subProjectInfo = make_shared<PopListAITryOnJobsResponseBodyDataSubTasksSubProjectInfo>(model1);
      }
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyDataSubTasks() = default;
};
class PopListAITryOnJobsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<PopListAITryOnJobsResponseBodyDataDummyProjectInfo> dummyProjectInfo{};
  shared_ptr<PopListAITryOnJobsResponseBodyDataMaterialInfo> materialInfo{};
  shared_ptr<vector<PopListAITryOnJobsResponseBodyDataSubTasks>> subTasks{};

  PopListAITryOnJobsResponseBodyData() {}

  explicit PopListAITryOnJobsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dummyProjectInfo) {
      res["DummyProjectInfo"] = dummyProjectInfo ? boost::any(dummyProjectInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (materialInfo) {
      res["MaterialInfo"] = materialInfo ? boost::any(materialInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subTasks) {
      vector<boost::any> temp1;
      for(auto item1:*subTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubTasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DummyProjectInfo") != m.end() && !m["DummyProjectInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DummyProjectInfo"].type()) {
        PopListAITryOnJobsResponseBodyDataDummyProjectInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DummyProjectInfo"]));
        dummyProjectInfo = make_shared<PopListAITryOnJobsResponseBodyDataDummyProjectInfo>(model1);
      }
    }
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MaterialInfo"].type()) {
        PopListAITryOnJobsResponseBodyDataMaterialInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MaterialInfo"]));
        materialInfo = make_shared<PopListAITryOnJobsResponseBodyDataMaterialInfo>(model1);
      }
    }
    if (m.find("SubTasks") != m.end() && !m["SubTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["SubTasks"].type()) {
        vector<PopListAITryOnJobsResponseBodyDataSubTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListAITryOnJobsResponseBodyDataSubTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subTasks = make_shared<vector<PopListAITryOnJobsResponseBodyDataSubTasks>>(expect1);
      }
    }
  }


  virtual ~PopListAITryOnJobsResponseBodyData() = default;
};
class PopListAITryOnJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<PopListAITryOnJobsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pages{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  PopListAITryOnJobsResponseBody() {}

  explicit PopListAITryOnJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
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
        vector<PopListAITryOnJobsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListAITryOnJobsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PopListAITryOnJobsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
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


  virtual ~PopListAITryOnJobsResponseBody() = default;
};
class PopListAITryOnJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopListAITryOnJobsResponseBody> body{};

  PopListAITryOnJobsResponse() {}

  explicit PopListAITryOnJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopListAITryOnJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopListAITryOnJobsResponseBody>(model1);
      }
    }
  }


  virtual ~PopListAITryOnJobsResponse() = default;
};
class PopListCommonMaterialsAllRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<string> jwtToken{};
  shared_ptr<string> listStatus{};
  shared_ptr<string> name{};
  shared_ptr<long> size{};
  shared_ptr<string> tags{};
  shared_ptr<string> type{};

  PopListCommonMaterialsAllRequest() {}

  explicit PopListCommonMaterialsAllRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListCommonMaterialsAllRequest() = default;
};
class PopListCommonMaterialsAllResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<bool> common{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> listStatus{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> previewUrl{};
  shared_ptr<string> type{};

  PopListCommonMaterialsAllResponseBodyData() {}

  explicit PopListCommonMaterialsAllResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<bool>(boost::any_cast<bool>(m["Common"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListCommonMaterialsAllResponseBodyData() = default;
};
class PopListCommonMaterialsAllResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<PopListCommonMaterialsAllResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopListCommonMaterialsAllResponseBody() {}

  explicit PopListCommonMaterialsAllResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<PopListCommonMaterialsAllResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListCommonMaterialsAllResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PopListCommonMaterialsAllResponseBodyData>>(expect1);
      }
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


  virtual ~PopListCommonMaterialsAllResponseBody() = default;
};
class PopListCommonMaterialsAllResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopListCommonMaterialsAllResponseBody> body{};

  PopListCommonMaterialsAllResponse() {}

  explicit PopListCommonMaterialsAllResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopListCommonMaterialsAllResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopListCommonMaterialsAllResponseBody>(model1);
      }
    }
  }


  virtual ~PopListCommonMaterialsAllResponse() = default;
};
class PopListFeatureToAvatarMaterialsRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<string> listStatus{};
  shared_ptr<long> size{};
  shared_ptr<string> tags{};

  PopListFeatureToAvatarMaterialsRequest() {}

  explicit PopListFeatureToAvatarMaterialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~PopListFeatureToAvatarMaterialsRequest() = default;
};
class PopListFeatureToAvatarMaterialsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> checkStatus{};
  shared_ptr<bool> common{};
  shared_ptr<string> coverUrl{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> listStatus{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  PopListFeatureToAvatarMaterialsResponseBodyData() {}

  explicit PopListFeatureToAvatarMaterialsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<bool>(boost::any_cast<bool>(m["Common"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListFeatureToAvatarMaterialsResponseBodyData() = default;
};
class PopListFeatureToAvatarMaterialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<PopListFeatureToAvatarMaterialsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pages{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  PopListFeatureToAvatarMaterialsResponseBody() {}

  explicit PopListFeatureToAvatarMaterialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
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
        vector<PopListFeatureToAvatarMaterialsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListFeatureToAvatarMaterialsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PopListFeatureToAvatarMaterialsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
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


  virtual ~PopListFeatureToAvatarMaterialsResponseBody() = default;
};
class PopListFeatureToAvatarMaterialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopListFeatureToAvatarMaterialsResponseBody> body{};

  PopListFeatureToAvatarMaterialsResponse() {}

  explicit PopListFeatureToAvatarMaterialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopListFeatureToAvatarMaterialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopListFeatureToAvatarMaterialsResponseBody>(model1);
      }
    }
  }


  virtual ~PopListFeatureToAvatarMaterialsResponse() = default;
};
class PopListFeatureToAvatarProjectRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<long> size{};
  shared_ptr<string> sortField{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};

  PopListFeatureToAvatarProjectRequest() {}

  explicit PopListFeatureToAvatarProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (sortField) {
      res["SortField"] = boost::any(*sortField);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SortField") != m.end() && !m["SortField"].empty()) {
      sortField = make_shared<string>(boost::any_cast<string>(m["SortField"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PopListFeatureToAvatarProjectRequest() = default;
};
class PopListFeatureToAvatarProjectResponseBodyDataBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submitTime{};

  PopListFeatureToAvatarProjectResponseBodyDataBuildDetail() {}

  explicit PopListFeatureToAvatarProjectResponseBodyDataBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~PopListFeatureToAvatarProjectResponseBodyDataBuildDetail() = default;
};
class PopListFeatureToAvatarProjectResponseBodyDataDatasetPolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopListFeatureToAvatarProjectResponseBodyDataDatasetPolicy() {}

  explicit PopListFeatureToAvatarProjectResponseBodyDataDatasetPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopListFeatureToAvatarProjectResponseBodyDataDatasetPolicy() = default;
};
class PopListFeatureToAvatarProjectResponseBodyDataDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> glbModelUrl{};
  shared_ptr<string> modelUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> originResultUrl{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopListFeatureToAvatarProjectResponseBodyDataDatasetPolicy> policy{};
  shared_ptr<string> poseUrl{};
  shared_ptr<string> previewUrl{};

  PopListFeatureToAvatarProjectResponseBodyDataDataset() {}

  explicit PopListFeatureToAvatarProjectResponseBodyDataDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (glbModelUrl) {
      res["GlbModelUrl"] = boost::any(*glbModelUrl);
    }
    if (modelUrl) {
      res["ModelUrl"] = boost::any(*modelUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (originResultUrl) {
      res["OriginResultUrl"] = boost::any(*originResultUrl);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (poseUrl) {
      res["PoseUrl"] = boost::any(*poseUrl);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("GlbModelUrl") != m.end() && !m["GlbModelUrl"].empty()) {
      glbModelUrl = make_shared<string>(boost::any_cast<string>(m["GlbModelUrl"]));
    }
    if (m.find("ModelUrl") != m.end() && !m["ModelUrl"].empty()) {
      modelUrl = make_shared<string>(boost::any_cast<string>(m["ModelUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OriginResultUrl") != m.end() && !m["OriginResultUrl"].empty()) {
      originResultUrl = make_shared<string>(boost::any_cast<string>(m["OriginResultUrl"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopListFeatureToAvatarProjectResponseBodyDataDatasetPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopListFeatureToAvatarProjectResponseBodyDataDatasetPolicy>(model1);
      }
    }
    if (m.find("PoseUrl") != m.end() && !m["PoseUrl"].empty()) {
      poseUrl = make_shared<string>(boost::any_cast<string>(m["PoseUrl"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
  }


  virtual ~PopListFeatureToAvatarProjectResponseBodyDataDataset() = default;
};
class PopListFeatureToAvatarProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bizUsage{};
  shared_ptr<PopListFeatureToAvatarProjectResponseBodyDataBuildDetail> buildDetail{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> createMode{};
  shared_ptr<string> createTime{};
  shared_ptr<PopListFeatureToAvatarProjectResponseBodyDataDataset> dataset{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> materialCoverUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopListFeatureToAvatarProjectResponseBodyData() {}

  explicit PopListFeatureToAvatarProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (materialCoverUrl) {
      res["MaterialCoverUrl"] = boost::any(*materialCoverUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopListFeatureToAvatarProjectResponseBodyDataBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopListFeatureToAvatarProjectResponseBodyDataBuildDetail>(model1);
      }
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopListFeatureToAvatarProjectResponseBodyDataDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopListFeatureToAvatarProjectResponseBodyDataDataset>(model1);
      }
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("MaterialCoverUrl") != m.end() && !m["MaterialCoverUrl"].empty()) {
      materialCoverUrl = make_shared<string>(boost::any_cast<string>(m["MaterialCoverUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListFeatureToAvatarProjectResponseBodyData() = default;
};
class PopListFeatureToAvatarProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<PopListFeatureToAvatarProjectResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pages{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  PopListFeatureToAvatarProjectResponseBody() {}

  explicit PopListFeatureToAvatarProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
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
        vector<PopListFeatureToAvatarProjectResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListFeatureToAvatarProjectResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PopListFeatureToAvatarProjectResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
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


  virtual ~PopListFeatureToAvatarProjectResponseBody() = default;
};
class PopListFeatureToAvatarProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopListFeatureToAvatarProjectResponseBody> body{};

  PopListFeatureToAvatarProjectResponse() {}

  explicit PopListFeatureToAvatarProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopListFeatureToAvatarProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopListFeatureToAvatarProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopListFeatureToAvatarProjectResponse() = default;
};
class PopListLivePortraitModelScopeMaterialsRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<long> size{};
  shared_ptr<string> types{};

  PopListLivePortraitModelScopeMaterialsRequest() {}

  explicit PopListLivePortraitModelScopeMaterialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (types) {
      res["Types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      types = make_shared<string>(boost::any_cast<string>(m["Types"]));
    }
  }


  virtual ~PopListLivePortraitModelScopeMaterialsRequest() = default;
};
class PopListLivePortraitModelScopeMaterialsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  PopListLivePortraitModelScopeMaterialsResponseBodyData() {}

  explicit PopListLivePortraitModelScopeMaterialsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListLivePortraitModelScopeMaterialsResponseBodyData() = default;
};
class PopListLivePortraitModelScopeMaterialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<PopListLivePortraitModelScopeMaterialsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pages{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  PopListLivePortraitModelScopeMaterialsResponseBody() {}

  explicit PopListLivePortraitModelScopeMaterialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
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
        vector<PopListLivePortraitModelScopeMaterialsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListLivePortraitModelScopeMaterialsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PopListLivePortraitModelScopeMaterialsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
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


  virtual ~PopListLivePortraitModelScopeMaterialsResponseBody() = default;
};
class PopListLivePortraitModelScopeMaterialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopListLivePortraitModelScopeMaterialsResponseBody> body{};

  PopListLivePortraitModelScopeMaterialsResponse() {}

  explicit PopListLivePortraitModelScopeMaterialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopListLivePortraitModelScopeMaterialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopListLivePortraitModelScopeMaterialsResponseBody>(model1);
      }
    }
  }


  virtual ~PopListLivePortraitModelScopeMaterialsResponse() = default;
};
class PopListObjectCaseRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<string> jwtToken{};
  shared_ptr<long> size{};

  PopListObjectCaseRequest() {}

  explicit PopListObjectCaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~PopListObjectCaseRequest() = default;
};
class PopListObjectCaseResponseBodyDataBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> submitTime{};

  PopListObjectCaseResponseBodyDataBuildDetail() {}

  explicit PopListObjectCaseResponseBodyDataBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~PopListObjectCaseResponseBodyDataBuildDetail() = default;
};
class PopListObjectCaseResponseBodyDataDatasetPolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopListObjectCaseResponseBodyDataDatasetPolicy() {}

  explicit PopListObjectCaseResponseBodyDataDatasetPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopListObjectCaseResponseBodyDataDatasetPolicy() = default;
};
class PopListObjectCaseResponseBodyDataDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> glbModelUrl{};
  shared_ptr<string> modelUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> originResultUrl{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopListObjectCaseResponseBodyDataDatasetPolicy> policy{};
  shared_ptr<string> poseUrl{};
  shared_ptr<string> previewUrl{};

  PopListObjectCaseResponseBodyDataDataset() {}

  explicit PopListObjectCaseResponseBodyDataDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (glbModelUrl) {
      res["GlbModelUrl"] = boost::any(*glbModelUrl);
    }
    if (modelUrl) {
      res["ModelUrl"] = boost::any(*modelUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (originResultUrl) {
      res["OriginResultUrl"] = boost::any(*originResultUrl);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (poseUrl) {
      res["PoseUrl"] = boost::any(*poseUrl);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("GlbModelUrl") != m.end() && !m["GlbModelUrl"].empty()) {
      glbModelUrl = make_shared<string>(boost::any_cast<string>(m["GlbModelUrl"]));
    }
    if (m.find("ModelUrl") != m.end() && !m["ModelUrl"].empty()) {
      modelUrl = make_shared<string>(boost::any_cast<string>(m["ModelUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OriginResultUrl") != m.end() && !m["OriginResultUrl"].empty()) {
      originResultUrl = make_shared<string>(boost::any_cast<string>(m["OriginResultUrl"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopListObjectCaseResponseBodyDataDatasetPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopListObjectCaseResponseBodyDataDatasetPolicy>(model1);
      }
    }
    if (m.find("PoseUrl") != m.end() && !m["PoseUrl"].empty()) {
      poseUrl = make_shared<string>(boost::any_cast<string>(m["PoseUrl"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
  }


  virtual ~PopListObjectCaseResponseBodyDataDataset() = default;
};
class PopListObjectCaseResponseBodyDataSourceClothes : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> type{};

  PopListObjectCaseResponseBodyDataSourceClothes() {}

  explicit PopListObjectCaseResponseBodyDataSourceClothes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListObjectCaseResponseBodyDataSourceClothes() = default;
};
class PopListObjectCaseResponseBodyDataSourcePolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopListObjectCaseResponseBodyDataSourcePolicy() {}

  explicit PopListObjectCaseResponseBodyDataSourcePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopListObjectCaseResponseBodyDataSourcePolicy() = default;
};
class PopListObjectCaseResponseBodyDataSourceSourceFiles : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> fileName{};
  shared_ptr<long> filesize{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  PopListObjectCaseResponseBodyDataSourceSourceFiles() {}

  explicit PopListObjectCaseResponseBodyDataSourceSourceFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filesize) {
      res["Filesize"] = boost::any(*filesize);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Filesize") != m.end() && !m["Filesize"].empty()) {
      filesize = make_shared<long>(boost::any_cast<long>(m["Filesize"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~PopListObjectCaseResponseBodyDataSourceSourceFiles() = default;
};
class PopListObjectCaseResponseBodyDataSource : public Darabonba::Model {
public:
  shared_ptr<vector<PopListObjectCaseResponseBodyDataSourceClothes>> clothes{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopListObjectCaseResponseBodyDataSourcePolicy> policy{};
  shared_ptr<vector<PopListObjectCaseResponseBodyDataSourceSourceFiles>> sourceFiles{};

  PopListObjectCaseResponseBodyDataSource() {}

  explicit PopListObjectCaseResponseBodyDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clothes) {
      vector<boost::any> temp1;
      for(auto item1:*clothes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clothes"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceFiles) {
      vector<boost::any> temp1;
      for(auto item1:*sourceFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceFiles"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clothes") != m.end() && !m["Clothes"].empty()) {
      if (typeid(vector<boost::any>) == m["Clothes"].type()) {
        vector<PopListObjectCaseResponseBodyDataSourceClothes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clothes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListObjectCaseResponseBodyDataSourceClothes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clothes = make_shared<vector<PopListObjectCaseResponseBodyDataSourceClothes>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopListObjectCaseResponseBodyDataSourcePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopListObjectCaseResponseBodyDataSourcePolicy>(model1);
      }
    }
    if (m.find("SourceFiles") != m.end() && !m["SourceFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceFiles"].type()) {
        vector<PopListObjectCaseResponseBodyDataSourceSourceFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListObjectCaseResponseBodyDataSourceSourceFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceFiles = make_shared<vector<PopListObjectCaseResponseBodyDataSourceSourceFiles>>(expect1);
      }
    }
  }


  virtual ~PopListObjectCaseResponseBodyDataSource() = default;
};
class PopListObjectCaseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<bool> autoBuild{};
  shared_ptr<string> bizUsage{};
  shared_ptr<PopListObjectCaseResponseBodyDataBuildDetail> buildDetail{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> createMode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> customSource{};
  shared_ptr<PopListObjectCaseResponseBodyDataDataset> dataset{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> dependencies{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<PopListObjectCaseResponseBodyDataSource> source{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopListObjectCaseResponseBodyData() {}

  explicit PopListObjectCaseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customSource) {
      res["CustomSource"] = boost::any(*customSource);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (dependencies) {
      res["Dependencies"] = boost::any(*dependencies);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<bool>(boost::any_cast<bool>(m["AutoBuild"]));
    }
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopListObjectCaseResponseBodyDataBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopListObjectCaseResponseBodyDataBuildDetail>(model1);
      }
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CustomSource") != m.end() && !m["CustomSource"].empty()) {
      customSource = make_shared<string>(boost::any_cast<string>(m["CustomSource"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopListObjectCaseResponseBodyDataDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopListObjectCaseResponseBodyDataDataset>(model1);
      }
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      dependencies = make_shared<string>(boost::any_cast<string>(m["Dependencies"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        PopListObjectCaseResponseBodyDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<PopListObjectCaseResponseBodyDataSource>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListObjectCaseResponseBodyData() = default;
};
class PopListObjectCaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<PopListObjectCaseResponseBodyData>> data{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pages{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  PopListObjectCaseResponseBody() {}

  explicit PopListObjectCaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
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
        vector<PopListObjectCaseResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListObjectCaseResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PopListObjectCaseResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
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


  virtual ~PopListObjectCaseResponseBody() = default;
};
class PopListObjectCaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopListObjectCaseResponseBody> body{};

  PopListObjectCaseResponse() {}

  explicit PopListObjectCaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopListObjectCaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopListObjectCaseResponseBody>(model1);
      }
    }
  }


  virtual ~PopListObjectCaseResponse() = default;
};
class PopListObjectGenerationProjectRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<string> jwtToken{};
  shared_ptr<long> size{};

  PopListObjectGenerationProjectRequest() {}

  explicit PopListObjectGenerationProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~PopListObjectGenerationProjectRequest() = default;
};
class PopListObjectGenerationProjectResponseBodyDataBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> submitTime{};

  PopListObjectGenerationProjectResponseBodyDataBuildDetail() {}

  explicit PopListObjectGenerationProjectResponseBodyDataBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~PopListObjectGenerationProjectResponseBodyDataBuildDetail() = default;
};
class PopListObjectGenerationProjectResponseBodyDataDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};

  PopListObjectGenerationProjectResponseBodyDataDataset() {}

  explicit PopListObjectGenerationProjectResponseBodyDataDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~PopListObjectGenerationProjectResponseBodyDataDataset() = default;
};
class PopListObjectGenerationProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bizUsage{};
  shared_ptr<PopListObjectGenerationProjectResponseBodyDataBuildDetail> buildDetail{};
  shared_ptr<PopListObjectGenerationProjectResponseBodyDataDataset> dataset{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};

  PopListObjectGenerationProjectResponseBodyData() {}

  explicit PopListObjectGenerationProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopListObjectGenerationProjectResponseBodyDataBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopListObjectGenerationProjectResponseBodyDataBuildDetail>(model1);
      }
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopListObjectGenerationProjectResponseBodyDataDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopListObjectGenerationProjectResponseBodyDataDataset>(model1);
      }
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PopListObjectGenerationProjectResponseBodyData() = default;
};
class PopListObjectGenerationProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<PopListObjectGenerationProjectResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pages{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  PopListObjectGenerationProjectResponseBody() {}

  explicit PopListObjectGenerationProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
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
        vector<PopListObjectGenerationProjectResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListObjectGenerationProjectResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PopListObjectGenerationProjectResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
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


  virtual ~PopListObjectGenerationProjectResponseBody() = default;
};
class PopListObjectGenerationProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopListObjectGenerationProjectResponseBody> body{};

  PopListObjectGenerationProjectResponse() {}

  explicit PopListObjectGenerationProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopListObjectGenerationProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopListObjectGenerationProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopListObjectGenerationProjectResponse() = default;
};
class PopListObjectProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<long> current{};
  shared_ptr<string> customSource{};
  shared_ptr<string> jwtToken{};
  shared_ptr<long> size{};
  shared_ptr<string> sortField{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<bool> withSource{};

  PopListObjectProjectRequest() {}

  explicit PopListObjectProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (customSource) {
      res["CustomSource"] = boost::any(*customSource);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (sortField) {
      res["SortField"] = boost::any(*sortField);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (withSource) {
      res["WithSource"] = boost::any(*withSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("CustomSource") != m.end() && !m["CustomSource"].empty()) {
      customSource = make_shared<string>(boost::any_cast<string>(m["CustomSource"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SortField") != m.end() && !m["SortField"].empty()) {
      sortField = make_shared<string>(boost::any_cast<string>(m["SortField"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("WithSource") != m.end() && !m["WithSource"].empty()) {
      withSource = make_shared<bool>(boost::any_cast<bool>(m["WithSource"]));
    }
  }


  virtual ~PopListObjectProjectRequest() = default;
};
class PopListObjectProjectResponseBodyDataBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> submitTime{};

  PopListObjectProjectResponseBodyDataBuildDetail() {}

  explicit PopListObjectProjectResponseBodyDataBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~PopListObjectProjectResponseBodyDataBuildDetail() = default;
};
class PopListObjectProjectResponseBodyDataDatasetPolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopListObjectProjectResponseBodyDataDatasetPolicy() {}

  explicit PopListObjectProjectResponseBodyDataDatasetPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopListObjectProjectResponseBodyDataDatasetPolicy() = default;
};
class PopListObjectProjectResponseBodyDataDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> glbModelUrl{};
  shared_ptr<string> modelUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> originResultUrl{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopListObjectProjectResponseBodyDataDatasetPolicy> policy{};
  shared_ptr<string> poseUrl{};
  shared_ptr<string> previewUrl{};

  PopListObjectProjectResponseBodyDataDataset() {}

  explicit PopListObjectProjectResponseBodyDataDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (glbModelUrl) {
      res["GlbModelUrl"] = boost::any(*glbModelUrl);
    }
    if (modelUrl) {
      res["ModelUrl"] = boost::any(*modelUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (originResultUrl) {
      res["OriginResultUrl"] = boost::any(*originResultUrl);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (poseUrl) {
      res["PoseUrl"] = boost::any(*poseUrl);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("GlbModelUrl") != m.end() && !m["GlbModelUrl"].empty()) {
      glbModelUrl = make_shared<string>(boost::any_cast<string>(m["GlbModelUrl"]));
    }
    if (m.find("ModelUrl") != m.end() && !m["ModelUrl"].empty()) {
      modelUrl = make_shared<string>(boost::any_cast<string>(m["ModelUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OriginResultUrl") != m.end() && !m["OriginResultUrl"].empty()) {
      originResultUrl = make_shared<string>(boost::any_cast<string>(m["OriginResultUrl"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopListObjectProjectResponseBodyDataDatasetPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopListObjectProjectResponseBodyDataDatasetPolicy>(model1);
      }
    }
    if (m.find("PoseUrl") != m.end() && !m["PoseUrl"].empty()) {
      poseUrl = make_shared<string>(boost::any_cast<string>(m["PoseUrl"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
  }


  virtual ~PopListObjectProjectResponseBodyDataDataset() = default;
};
class PopListObjectProjectResponseBodyDataSourceClothes : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> type{};

  PopListObjectProjectResponseBodyDataSourceClothes() {}

  explicit PopListObjectProjectResponseBodyDataSourceClothes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListObjectProjectResponseBodyDataSourceClothes() = default;
};
class PopListObjectProjectResponseBodyDataSourcePolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopListObjectProjectResponseBodyDataSourcePolicy() {}

  explicit PopListObjectProjectResponseBodyDataSourcePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopListObjectProjectResponseBodyDataSourcePolicy() = default;
};
class PopListObjectProjectResponseBodyDataSourceSourceFiles : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> fileName{};
  shared_ptr<long> filesize{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  PopListObjectProjectResponseBodyDataSourceSourceFiles() {}

  explicit PopListObjectProjectResponseBodyDataSourceSourceFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filesize) {
      res["Filesize"] = boost::any(*filesize);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Filesize") != m.end() && !m["Filesize"].empty()) {
      filesize = make_shared<long>(boost::any_cast<long>(m["Filesize"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~PopListObjectProjectResponseBodyDataSourceSourceFiles() = default;
};
class PopListObjectProjectResponseBodyDataSource : public Darabonba::Model {
public:
  shared_ptr<vector<PopListObjectProjectResponseBodyDataSourceClothes>> clothes{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopListObjectProjectResponseBodyDataSourcePolicy> policy{};
  shared_ptr<vector<PopListObjectProjectResponseBodyDataSourceSourceFiles>> sourceFiles{};

  PopListObjectProjectResponseBodyDataSource() {}

  explicit PopListObjectProjectResponseBodyDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clothes) {
      vector<boost::any> temp1;
      for(auto item1:*clothes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clothes"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceFiles) {
      vector<boost::any> temp1;
      for(auto item1:*sourceFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceFiles"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clothes") != m.end() && !m["Clothes"].empty()) {
      if (typeid(vector<boost::any>) == m["Clothes"].type()) {
        vector<PopListObjectProjectResponseBodyDataSourceClothes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clothes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListObjectProjectResponseBodyDataSourceClothes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clothes = make_shared<vector<PopListObjectProjectResponseBodyDataSourceClothes>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopListObjectProjectResponseBodyDataSourcePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopListObjectProjectResponseBodyDataSourcePolicy>(model1);
      }
    }
    if (m.find("SourceFiles") != m.end() && !m["SourceFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceFiles"].type()) {
        vector<PopListObjectProjectResponseBodyDataSourceSourceFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListObjectProjectResponseBodyDataSourceSourceFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceFiles = make_shared<vector<PopListObjectProjectResponseBodyDataSourceSourceFiles>>(expect1);
      }
    }
  }


  virtual ~PopListObjectProjectResponseBodyDataSource() = default;
};
class PopListObjectProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<bool> autoBuild{};
  shared_ptr<string> bizUsage{};
  shared_ptr<PopListObjectProjectResponseBodyDataBuildDetail> buildDetail{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> createMode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> customSource{};
  shared_ptr<PopListObjectProjectResponseBodyDataDataset> dataset{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> dependencies{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<PopListObjectProjectResponseBodyDataSource> source{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopListObjectProjectResponseBodyData() {}

  explicit PopListObjectProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customSource) {
      res["CustomSource"] = boost::any(*customSource);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (dependencies) {
      res["Dependencies"] = boost::any(*dependencies);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<bool>(boost::any_cast<bool>(m["AutoBuild"]));
    }
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopListObjectProjectResponseBodyDataBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopListObjectProjectResponseBodyDataBuildDetail>(model1);
      }
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CustomSource") != m.end() && !m["CustomSource"].empty()) {
      customSource = make_shared<string>(boost::any_cast<string>(m["CustomSource"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopListObjectProjectResponseBodyDataDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopListObjectProjectResponseBodyDataDataset>(model1);
      }
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      dependencies = make_shared<string>(boost::any_cast<string>(m["Dependencies"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        PopListObjectProjectResponseBodyDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<PopListObjectProjectResponseBodyDataSource>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListObjectProjectResponseBodyData() = default;
};
class PopListObjectProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<PopListObjectProjectResponseBodyData>> data{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<long> pages{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  PopListObjectProjectResponseBody() {}

  explicit PopListObjectProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
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
        vector<PopListObjectProjectResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListObjectProjectResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PopListObjectProjectResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
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


  virtual ~PopListObjectProjectResponseBody() = default;
};
class PopListObjectProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopListObjectProjectResponseBody> body{};

  PopListObjectProjectResponse() {}

  explicit PopListObjectProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopListObjectProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopListObjectProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopListObjectProjectResponse() = default;
};
class PopListPakRenderExpressionRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<string> listStatus{};
  shared_ptr<long> size{};

  PopListPakRenderExpressionRequest() {}

  explicit PopListPakRenderExpressionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (listStatus) {
      res["ListStatus"] = boost::any(*listStatus);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("ListStatus") != m.end() && !m["ListStatus"].empty()) {
      listStatus = make_shared<string>(boost::any_cast<string>(m["ListStatus"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~PopListPakRenderExpressionRequest() = default;
};
class PopListPakRenderExpressionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> ext{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> name{};

  PopListPakRenderExpressionResponseBodyData() {}

  explicit PopListPakRenderExpressionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~PopListPakRenderExpressionResponseBodyData() = default;
};
class PopListPakRenderExpressionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<PopListPakRenderExpressionResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pages{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  PopListPakRenderExpressionResponseBody() {}

  explicit PopListPakRenderExpressionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
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
        vector<PopListPakRenderExpressionResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListPakRenderExpressionResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PopListPakRenderExpressionResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
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


  virtual ~PopListPakRenderExpressionResponseBody() = default;
};
class PopListPakRenderExpressionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopListPakRenderExpressionResponseBody> body{};

  PopListPakRenderExpressionResponse() {}

  explicit PopListPakRenderExpressionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopListPakRenderExpressionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopListPakRenderExpressionResponseBody>(model1);
      }
    }
  }


  virtual ~PopListPakRenderExpressionResponse() = default;
};
class PopListTextToAvatarProjectRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<string> jwtToken{};
  shared_ptr<long> size{};
  shared_ptr<string> sortField{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};

  PopListTextToAvatarProjectRequest() {}

  explicit PopListTextToAvatarProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (sortField) {
      res["SortField"] = boost::any(*sortField);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["Current"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SortField") != m.end() && !m["SortField"].empty()) {
      sortField = make_shared<string>(boost::any_cast<string>(m["SortField"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PopListTextToAvatarProjectRequest() = default;
};
class PopListTextToAvatarProjectResponseBodyDataBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submitTime{};

  PopListTextToAvatarProjectResponseBodyDataBuildDetail() {}

  explicit PopListTextToAvatarProjectResponseBodyDataBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~PopListTextToAvatarProjectResponseBodyDataBuildDetail() = default;
};
class PopListTextToAvatarProjectResponseBodyDataDatasetPolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopListTextToAvatarProjectResponseBodyDataDatasetPolicy() {}

  explicit PopListTextToAvatarProjectResponseBodyDataDatasetPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopListTextToAvatarProjectResponseBodyDataDatasetPolicy() = default;
};
class PopListTextToAvatarProjectResponseBodyDataDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopListTextToAvatarProjectResponseBodyDataDatasetPolicy> policy{};

  PopListTextToAvatarProjectResponseBodyDataDataset() {}

  explicit PopListTextToAvatarProjectResponseBodyDataDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopListTextToAvatarProjectResponseBodyDataDatasetPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopListTextToAvatarProjectResponseBodyDataDatasetPolicy>(model1);
      }
    }
  }


  virtual ~PopListTextToAvatarProjectResponseBodyDataDataset() = default;
};
class PopListTextToAvatarProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuild{};
  shared_ptr<string> bizUsage{};
  shared_ptr<PopListTextToAvatarProjectResponseBodyDataBuildDetail> buildDetail{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> createMode{};
  shared_ptr<string> createTime{};
  shared_ptr<PopListTextToAvatarProjectResponseBodyDataDataset> dataset{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> dependencies{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> materialCoverUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopListTextToAvatarProjectResponseBodyData() {}

  explicit PopListTextToAvatarProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (dependencies) {
      res["Dependencies"] = boost::any(*dependencies);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (materialCoverUrl) {
      res["MaterialCoverUrl"] = boost::any(*materialCoverUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<bool>(boost::any_cast<bool>(m["AutoBuild"]));
    }
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopListTextToAvatarProjectResponseBodyDataBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopListTextToAvatarProjectResponseBodyDataBuildDetail>(model1);
      }
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopListTextToAvatarProjectResponseBodyDataDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopListTextToAvatarProjectResponseBodyDataDataset>(model1);
      }
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      dependencies = make_shared<string>(boost::any_cast<string>(m["Dependencies"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("MaterialCoverUrl") != m.end() && !m["MaterialCoverUrl"].empty()) {
      materialCoverUrl = make_shared<string>(boost::any_cast<string>(m["MaterialCoverUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopListTextToAvatarProjectResponseBodyData() = default;
};
class PopListTextToAvatarProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> current{};
  shared_ptr<vector<PopListTextToAvatarProjectResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> pages{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  PopListTextToAvatarProjectResponseBody() {}

  explicit PopListTextToAvatarProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
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
        vector<PopListTextToAvatarProjectResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopListTextToAvatarProjectResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PopListTextToAvatarProjectResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["Pages"]));
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


  virtual ~PopListTextToAvatarProjectResponseBody() = default;
};
class PopListTextToAvatarProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopListTextToAvatarProjectResponseBody> body{};

  PopListTextToAvatarProjectResponse() {}

  explicit PopListTextToAvatarProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopListTextToAvatarProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopListTextToAvatarProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PopListTextToAvatarProjectResponse() = default;
};
class PopObjectProjectDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> projectId{};

  PopObjectProjectDetailRequest() {}

  explicit PopObjectProjectDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~PopObjectProjectDetailRequest() = default;
};
class PopObjectProjectDetailResponseBodyDataBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> submitTime{};

  PopObjectProjectDetailResponseBodyDataBuildDetail() {}

  explicit PopObjectProjectDetailResponseBodyDataBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~PopObjectProjectDetailResponseBodyDataBuildDetail() = default;
};
class PopObjectProjectDetailResponseBodyDataDatasetPolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopObjectProjectDetailResponseBodyDataDatasetPolicy() {}

  explicit PopObjectProjectDetailResponseBodyDataDatasetPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopObjectProjectDetailResponseBodyDataDatasetPolicy() = default;
};
class PopObjectProjectDetailResponseBodyDataDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> glbModelUrl{};
  shared_ptr<string> modelUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> originResultUrl{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopObjectProjectDetailResponseBodyDataDatasetPolicy> policy{};
  shared_ptr<string> poseUrl{};
  shared_ptr<string> previewUrl{};

  PopObjectProjectDetailResponseBodyDataDataset() {}

  explicit PopObjectProjectDetailResponseBodyDataDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (glbModelUrl) {
      res["GlbModelUrl"] = boost::any(*glbModelUrl);
    }
    if (modelUrl) {
      res["ModelUrl"] = boost::any(*modelUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (originResultUrl) {
      res["OriginResultUrl"] = boost::any(*originResultUrl);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (poseUrl) {
      res["PoseUrl"] = boost::any(*poseUrl);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("GlbModelUrl") != m.end() && !m["GlbModelUrl"].empty()) {
      glbModelUrl = make_shared<string>(boost::any_cast<string>(m["GlbModelUrl"]));
    }
    if (m.find("ModelUrl") != m.end() && !m["ModelUrl"].empty()) {
      modelUrl = make_shared<string>(boost::any_cast<string>(m["ModelUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OriginResultUrl") != m.end() && !m["OriginResultUrl"].empty()) {
      originResultUrl = make_shared<string>(boost::any_cast<string>(m["OriginResultUrl"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopObjectProjectDetailResponseBodyDataDatasetPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopObjectProjectDetailResponseBodyDataDatasetPolicy>(model1);
      }
    }
    if (m.find("PoseUrl") != m.end() && !m["PoseUrl"].empty()) {
      poseUrl = make_shared<string>(boost::any_cast<string>(m["PoseUrl"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
  }


  virtual ~PopObjectProjectDetailResponseBodyDataDataset() = default;
};
class PopObjectProjectDetailResponseBodyDataSourceClothes : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> type{};

  PopObjectProjectDetailResponseBodyDataSourceClothes() {}

  explicit PopObjectProjectDetailResponseBodyDataSourceClothes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopObjectProjectDetailResponseBodyDataSourceClothes() = default;
};
class PopObjectProjectDetailResponseBodyDataSourcePolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopObjectProjectDetailResponseBodyDataSourcePolicy() {}

  explicit PopObjectProjectDetailResponseBodyDataSourcePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopObjectProjectDetailResponseBodyDataSourcePolicy() = default;
};
class PopObjectProjectDetailResponseBodyDataSourceSourceFiles : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> fileName{};
  shared_ptr<long> filesize{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  PopObjectProjectDetailResponseBodyDataSourceSourceFiles() {}

  explicit PopObjectProjectDetailResponseBodyDataSourceSourceFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filesize) {
      res["Filesize"] = boost::any(*filesize);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Filesize") != m.end() && !m["Filesize"].empty()) {
      filesize = make_shared<long>(boost::any_cast<long>(m["Filesize"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~PopObjectProjectDetailResponseBodyDataSourceSourceFiles() = default;
};
class PopObjectProjectDetailResponseBodyDataSource : public Darabonba::Model {
public:
  shared_ptr<vector<PopObjectProjectDetailResponseBodyDataSourceClothes>> clothes{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> ossKey{};
  shared_ptr<PopObjectProjectDetailResponseBodyDataSourcePolicy> policy{};
  shared_ptr<vector<PopObjectProjectDetailResponseBodyDataSourceSourceFiles>> sourceFiles{};

  PopObjectProjectDetailResponseBodyDataSource() {}

  explicit PopObjectProjectDetailResponseBodyDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clothes) {
      vector<boost::any> temp1;
      for(auto item1:*clothes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clothes"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceFiles) {
      vector<boost::any> temp1;
      for(auto item1:*sourceFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceFiles"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clothes") != m.end() && !m["Clothes"].empty()) {
      if (typeid(vector<boost::any>) == m["Clothes"].type()) {
        vector<PopObjectProjectDetailResponseBodyDataSourceClothes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clothes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopObjectProjectDetailResponseBodyDataSourceClothes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clothes = make_shared<vector<PopObjectProjectDetailResponseBodyDataSourceClothes>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopObjectProjectDetailResponseBodyDataSourcePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopObjectProjectDetailResponseBodyDataSourcePolicy>(model1);
      }
    }
    if (m.find("SourceFiles") != m.end() && !m["SourceFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceFiles"].type()) {
        vector<PopObjectProjectDetailResponseBodyDataSourceSourceFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopObjectProjectDetailResponseBodyDataSourceSourceFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceFiles = make_shared<vector<PopObjectProjectDetailResponseBodyDataSourceSourceFiles>>(expect1);
      }
    }
  }


  virtual ~PopObjectProjectDetailResponseBodyDataSource() = default;
};
class PopObjectProjectDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuild{};
  shared_ptr<string> bizUsage{};
  shared_ptr<PopObjectProjectDetailResponseBodyDataBuildDetail> buildDetail{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> createMode{};
  shared_ptr<string> createTime{};
  shared_ptr<PopObjectProjectDetailResponseBodyDataDataset> dataset{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> dependencies{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<PopObjectProjectDetailResponseBodyDataSource> source{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopObjectProjectDetailResponseBodyData() {}

  explicit PopObjectProjectDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (dependencies) {
      res["Dependencies"] = boost::any(*dependencies);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<bool>(boost::any_cast<bool>(m["AutoBuild"]));
    }
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopObjectProjectDetailResponseBodyDataBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopObjectProjectDetailResponseBodyDataBuildDetail>(model1);
      }
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopObjectProjectDetailResponseBodyDataDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopObjectProjectDetailResponseBodyDataDataset>(model1);
      }
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      dependencies = make_shared<string>(boost::any_cast<string>(m["Dependencies"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        PopObjectProjectDetailResponseBodyDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<PopObjectProjectDetailResponseBodyDataSource>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopObjectProjectDetailResponseBodyData() = default;
};
class PopObjectProjectDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopObjectProjectDetailResponseBodyData> data{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopObjectProjectDetailResponseBody() {}

  explicit PopObjectProjectDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
        PopObjectProjectDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopObjectProjectDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
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


  virtual ~PopObjectProjectDetailResponseBody() = default;
};
class PopObjectProjectDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopObjectProjectDetailResponseBody> body{};

  PopObjectProjectDetailResponse() {}

  explicit PopObjectProjectDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopObjectProjectDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopObjectProjectDetailResponseBody>(model1);
      }
    }
  }


  virtual ~PopObjectProjectDetailResponse() = default;
};
class PopObjectRetrievalRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> jwtToken{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> topK{};

  PopObjectRetrievalRequest() {}

  explicit PopObjectRetrievalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (topK) {
      res["TopK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TopK") != m.end() && !m["TopK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["TopK"]));
    }
  }


  virtual ~PopObjectRetrievalRequest() = default;
};
class PopObjectRetrievalResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> coverUrl{};
  shared_ptr<string> glbUrl{};
  shared_ptr<string> id{};
  shared_ptr<string> modelUrl{};
  shared_ptr<string> previewUrl{};
  shared_ptr<string> title{};

  PopObjectRetrievalResponseBodyData() {}

  explicit PopObjectRetrievalResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (glbUrl) {
      res["GlbUrl"] = boost::any(*glbUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modelUrl) {
      res["ModelUrl"] = boost::any(*modelUrl);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("GlbUrl") != m.end() && !m["GlbUrl"].empty()) {
      glbUrl = make_shared<string>(boost::any_cast<string>(m["GlbUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModelUrl") != m.end() && !m["ModelUrl"].empty()) {
      modelUrl = make_shared<string>(boost::any_cast<string>(m["ModelUrl"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PopObjectRetrievalResponseBodyData() = default;
};
class PopObjectRetrievalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<PopObjectRetrievalResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopObjectRetrievalResponseBody() {}

  explicit PopObjectRetrievalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<PopObjectRetrievalResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PopObjectRetrievalResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PopObjectRetrievalResponseBodyData>>(expect1);
      }
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


  virtual ~PopObjectRetrievalResponseBody() = default;
};
class PopObjectRetrievalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopObjectRetrievalResponseBody> body{};

  PopObjectRetrievalResponse() {}

  explicit PopObjectRetrievalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopObjectRetrievalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopObjectRetrievalResponseBody>(model1);
      }
    }
  }


  virtual ~PopObjectRetrievalResponse() = default;
};
class PopObjectRetrievalUploadDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};

  PopObjectRetrievalUploadDataRequest() {}

  explicit PopObjectRetrievalUploadDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
  }


  virtual ~PopObjectRetrievalUploadDataRequest() = default;
};
class PopObjectRetrievalUploadDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopObjectRetrievalUploadDataResponseBodyData() {}

  explicit PopObjectRetrievalUploadDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopObjectRetrievalUploadDataResponseBodyData() = default;
};
class PopObjectRetrievalUploadDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopObjectRetrievalUploadDataResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopObjectRetrievalUploadDataResponseBody() {}

  explicit PopObjectRetrievalUploadDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopObjectRetrievalUploadDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopObjectRetrievalUploadDataResponseBodyData>(model1);
      }
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


  virtual ~PopObjectRetrievalUploadDataResponseBody() = default;
};
class PopObjectRetrievalUploadDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopObjectRetrievalUploadDataResponseBody> body{};

  PopObjectRetrievalUploadDataResponse() {}

  explicit PopObjectRetrievalUploadDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopObjectRetrievalUploadDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopObjectRetrievalUploadDataResponseBody>(model1);
      }
    }
  }


  virtual ~PopObjectRetrievalUploadDataResponse() = default;
};
class PopQueryAvatarProjectDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  PopQueryAvatarProjectDetailRequest() {}

  explicit PopQueryAvatarProjectDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~PopQueryAvatarProjectDetailRequest() = default;
};
class PopQueryAvatarProjectDetailResponseBodyDataBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submitTime{};

  PopQueryAvatarProjectDetailResponseBodyDataBuildDetail() {}

  explicit PopQueryAvatarProjectDetailResponseBodyDataBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~PopQueryAvatarProjectDetailResponseBodyDataBuildDetail() = default;
};
class PopQueryAvatarProjectDetailResponseBodyDataDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> glbModelUrl{};
  shared_ptr<string> modelUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> originResultUrl{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> poseUrl{};
  shared_ptr<string> previewUrl{};

  PopQueryAvatarProjectDetailResponseBodyDataDataset() {}

  explicit PopQueryAvatarProjectDetailResponseBodyDataDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (glbModelUrl) {
      res["GlbModelUrl"] = boost::any(*glbModelUrl);
    }
    if (modelUrl) {
      res["ModelUrl"] = boost::any(*modelUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (originResultUrl) {
      res["OriginResultUrl"] = boost::any(*originResultUrl);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (poseUrl) {
      res["PoseUrl"] = boost::any(*poseUrl);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("GlbModelUrl") != m.end() && !m["GlbModelUrl"].empty()) {
      glbModelUrl = make_shared<string>(boost::any_cast<string>(m["GlbModelUrl"]));
    }
    if (m.find("ModelUrl") != m.end() && !m["ModelUrl"].empty()) {
      modelUrl = make_shared<string>(boost::any_cast<string>(m["ModelUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OriginResultUrl") != m.end() && !m["OriginResultUrl"].empty()) {
      originResultUrl = make_shared<string>(boost::any_cast<string>(m["OriginResultUrl"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("PoseUrl") != m.end() && !m["PoseUrl"].empty()) {
      poseUrl = make_shared<string>(boost::any_cast<string>(m["PoseUrl"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
  }


  virtual ~PopQueryAvatarProjectDetailResponseBodyDataDataset() = default;
};
class PopQueryAvatarProjectDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuild{};
  shared_ptr<string> bizUsage{};
  shared_ptr<PopQueryAvatarProjectDetailResponseBodyDataBuildDetail> buildDetail{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> createMode{};
  shared_ptr<string> createTime{};
  shared_ptr<PopQueryAvatarProjectDetailResponseBodyDataDataset> dataset{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> dependencies{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> materialCoverUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopQueryAvatarProjectDetailResponseBodyData() {}

  explicit PopQueryAvatarProjectDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuild) {
      res["AutoBuild"] = boost::any(*autoBuild);
    }
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (dependencies) {
      res["Dependencies"] = boost::any(*dependencies);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (materialCoverUrl) {
      res["MaterialCoverUrl"] = boost::any(*materialCoverUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoBuild") != m.end() && !m["AutoBuild"].empty()) {
      autoBuild = make_shared<bool>(boost::any_cast<bool>(m["AutoBuild"]));
    }
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopQueryAvatarProjectDetailResponseBodyDataBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopQueryAvatarProjectDetailResponseBodyDataBuildDetail>(model1);
      }
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopQueryAvatarProjectDetailResponseBodyDataDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopQueryAvatarProjectDetailResponseBodyDataDataset>(model1);
      }
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Dependencies") != m.end() && !m["Dependencies"].empty()) {
      dependencies = make_shared<string>(boost::any_cast<string>(m["Dependencies"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("MaterialCoverUrl") != m.end() && !m["MaterialCoverUrl"].empty()) {
      materialCoverUrl = make_shared<string>(boost::any_cast<string>(m["MaterialCoverUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopQueryAvatarProjectDetailResponseBodyData() = default;
};
class PopQueryAvatarProjectDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopQueryAvatarProjectDetailResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopQueryAvatarProjectDetailResponseBody() {}

  explicit PopQueryAvatarProjectDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopQueryAvatarProjectDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopQueryAvatarProjectDetailResponseBodyData>(model1);
      }
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


  virtual ~PopQueryAvatarProjectDetailResponseBody() = default;
};
class PopQueryAvatarProjectDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopQueryAvatarProjectDetailResponseBody> body{};

  PopQueryAvatarProjectDetailResponse() {}

  explicit PopQueryAvatarProjectDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopQueryAvatarProjectDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopQueryAvatarProjectDetailResponseBody>(model1);
      }
    }
  }


  virtual ~PopQueryAvatarProjectDetailResponse() = default;
};
class PopQueryLatestAvatarProjectDetailByUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};

  PopQueryLatestAvatarProjectDetailByUserRequest() {}

  explicit PopQueryLatestAvatarProjectDetailByUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
  }


  virtual ~PopQueryLatestAvatarProjectDetailByUserRequest() = default;
};
class PopQueryLatestAvatarProjectDetailByUserResponseBodyDataBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> runningTime{};
  shared_ptr<string> status{};

  PopQueryLatestAvatarProjectDetailByUserResponseBodyDataBuildDetail() {}

  explicit PopQueryLatestAvatarProjectDetailByUserResponseBodyDataBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PopQueryLatestAvatarProjectDetailByUserResponseBodyDataBuildDetail() = default;
};
class PopQueryLatestAvatarProjectDetailByUserResponseBodyDataDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  PopQueryLatestAvatarProjectDetailByUserResponseBodyDataDataset() {}

  explicit PopQueryLatestAvatarProjectDetailByUserResponseBodyDataDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
  }


  virtual ~PopQueryLatestAvatarProjectDetailByUserResponseBodyDataDataset() = default;
};
class PopQueryLatestAvatarProjectDetailByUserResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bizUsage{};
  shared_ptr<PopQueryLatestAvatarProjectDetailByUserResponseBodyDataBuildDetail> buildDetail{};
  shared_ptr<string> createTime{};
  shared_ptr<PopQueryLatestAvatarProjectDetailByUserResponseBodyDataDataset> dataset{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};

  PopQueryLatestAvatarProjectDetailByUserResponseBodyData() {}

  explicit PopQueryLatestAvatarProjectDetailByUserResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopQueryLatestAvatarProjectDetailByUserResponseBodyDataBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopQueryLatestAvatarProjectDetailByUserResponseBodyDataBuildDetail>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopQueryLatestAvatarProjectDetailByUserResponseBodyDataDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopQueryLatestAvatarProjectDetailByUserResponseBodyDataDataset>(model1);
      }
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PopQueryLatestAvatarProjectDetailByUserResponseBodyData() = default;
};
class PopQueryLatestAvatarProjectDetailByUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopQueryLatestAvatarProjectDetailByUserResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopQueryLatestAvatarProjectDetailByUserResponseBody() {}

  explicit PopQueryLatestAvatarProjectDetailByUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopQueryLatestAvatarProjectDetailByUserResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopQueryLatestAvatarProjectDetailByUserResponseBodyData>(model1);
      }
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


  virtual ~PopQueryLatestAvatarProjectDetailByUserResponseBody() = default;
};
class PopQueryLatestAvatarProjectDetailByUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopQueryLatestAvatarProjectDetailByUserResponseBody> body{};

  PopQueryLatestAvatarProjectDetailByUserResponse() {}

  explicit PopQueryLatestAvatarProjectDetailByUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopQueryLatestAvatarProjectDetailByUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopQueryLatestAvatarProjectDetailByUserResponseBody>(model1);
      }
    }
  }


  virtual ~PopQueryLatestAvatarProjectDetailByUserResponse() = default;
};
class PopQueryLivePortraitModelScopeProjectDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  PopQueryLivePortraitModelScopeProjectDetailRequest() {}

  explicit PopQueryLivePortraitModelScopeProjectDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~PopQueryLivePortraitModelScopeProjectDetailRequest() = default;
};
class PopQueryLivePortraitModelScopeProjectDetailResponseBodyDataDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  PopQueryLivePortraitModelScopeProjectDetailResponseBodyDataDataset() {}

  explicit PopQueryLivePortraitModelScopeProjectDetailResponseBodyDataDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
  }


  virtual ~PopQueryLivePortraitModelScopeProjectDetailResponseBodyDataDataset() = default;
};
class PopQueryLivePortraitModelScopeProjectDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bizUsage{};
  shared_ptr<PopQueryLivePortraitModelScopeProjectDetailResponseBodyDataDataset> dataset{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> materialCoverUrl{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  PopQueryLivePortraitModelScopeProjectDetailResponseBodyData() {}

  explicit PopQueryLivePortraitModelScopeProjectDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (materialCoverUrl) {
      res["MaterialCoverUrl"] = boost::any(*materialCoverUrl);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopQueryLivePortraitModelScopeProjectDetailResponseBodyDataDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopQueryLivePortraitModelScopeProjectDetailResponseBodyDataDataset>(model1);
      }
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("MaterialCoverUrl") != m.end() && !m["MaterialCoverUrl"].empty()) {
      materialCoverUrl = make_shared<string>(boost::any_cast<string>(m["MaterialCoverUrl"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PopQueryLivePortraitModelScopeProjectDetailResponseBodyData() = default;
};
class PopQueryLivePortraitModelScopeProjectDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopQueryLivePortraitModelScopeProjectDetailResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopQueryLivePortraitModelScopeProjectDetailResponseBody() {}

  explicit PopQueryLivePortraitModelScopeProjectDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopQueryLivePortraitModelScopeProjectDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopQueryLivePortraitModelScopeProjectDetailResponseBodyData>(model1);
      }
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


  virtual ~PopQueryLivePortraitModelScopeProjectDetailResponseBody() = default;
};
class PopQueryLivePortraitModelScopeProjectDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopQueryLivePortraitModelScopeProjectDetailResponseBody> body{};

  PopQueryLivePortraitModelScopeProjectDetailResponse() {}

  explicit PopQueryLivePortraitModelScopeProjectDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopQueryLivePortraitModelScopeProjectDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopQueryLivePortraitModelScopeProjectDetailResponseBody>(model1);
      }
    }
  }


  virtual ~PopQueryLivePortraitModelScopeProjectDetailResponse() = default;
};
class PopQueryObjectGenerationProjectDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> projectId{};

  PopQueryObjectGenerationProjectDetailRequest() {}

  explicit PopQueryObjectGenerationProjectDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~PopQueryObjectGenerationProjectDetailRequest() = default;
};
class PopQueryObjectGenerationProjectDetailResponseBodyDataBuildDetail : public Darabonba::Model {
public:
  shared_ptr<string> completedTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> submitTime{};

  PopQueryObjectGenerationProjectDetailResponseBodyDataBuildDetail() {}

  explicit PopQueryObjectGenerationProjectDetailResponseBodyDataBuildDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTime) {
      res["CompletedTime"] = boost::any(*completedTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTime") != m.end() && !m["CompletedTime"].empty()) {
      completedTime = make_shared<string>(boost::any_cast<string>(m["CompletedTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~PopQueryObjectGenerationProjectDetailResponseBodyDataBuildDetail() = default;
};
class PopQueryObjectGenerationProjectDetailResponseBodyDataDataset : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> buildResultUrl{};

  PopQueryObjectGenerationProjectDetailResponseBodyDataDataset() {}

  explicit PopQueryObjectGenerationProjectDetailResponseBodyDataDataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildResultUrl) {
      res["BuildResultUrl"] = boost::any(*buildResultUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildResultUrl") != m.end() && !m["BuildResultUrl"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BuildResultUrl"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      buildResultUrl = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~PopQueryObjectGenerationProjectDetailResponseBodyDataDataset() = default;
};
class PopQueryObjectGenerationProjectDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bizUsage{};
  shared_ptr<PopQueryObjectGenerationProjectDetailResponseBodyDataBuildDetail> buildDetail{};
  shared_ptr<PopQueryObjectGenerationProjectDetailResponseBodyDataDataset> dataset{};
  shared_ptr<string> ext{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};

  PopQueryObjectGenerationProjectDetailResponseBodyData() {}

  explicit PopQueryObjectGenerationProjectDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizUsage) {
      res["BizUsage"] = boost::any(*bizUsage);
    }
    if (buildDetail) {
      res["BuildDetail"] = buildDetail ? boost::any(buildDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizUsage") != m.end() && !m["BizUsage"].empty()) {
      bizUsage = make_shared<string>(boost::any_cast<string>(m["BizUsage"]));
    }
    if (m.find("BuildDetail") != m.end() && !m["BuildDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BuildDetail"].type()) {
        PopQueryObjectGenerationProjectDetailResponseBodyDataBuildDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BuildDetail"]));
        buildDetail = make_shared<PopQueryObjectGenerationProjectDetailResponseBodyDataBuildDetail>(model1);
      }
    }
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        PopQueryObjectGenerationProjectDetailResponseBodyDataDataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<PopQueryObjectGenerationProjectDetailResponseBodyDataDataset>(model1);
      }
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PopQueryObjectGenerationProjectDetailResponseBodyData() = default;
};
class PopQueryObjectGenerationProjectDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopQueryObjectGenerationProjectDetailResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopQueryObjectGenerationProjectDetailResponseBody() {}

  explicit PopQueryObjectGenerationProjectDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopQueryObjectGenerationProjectDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopQueryObjectGenerationProjectDetailResponseBodyData>(model1);
      }
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


  virtual ~PopQueryObjectGenerationProjectDetailResponseBody() = default;
};
class PopQueryObjectGenerationProjectDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopQueryObjectGenerationProjectDetailResponseBody> body{};

  PopQueryObjectGenerationProjectDetailResponse() {}

  explicit PopQueryObjectGenerationProjectDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopQueryObjectGenerationProjectDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopQueryObjectGenerationProjectDetailResponseBody>(model1);
      }
    }
  }


  virtual ~PopQueryObjectGenerationProjectDetailResponse() = default;
};
class PopRetryAITryOnTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> projectId{};

  PopRetryAITryOnTaskRequest() {}

  explicit PopRetryAITryOnTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~PopRetryAITryOnTaskRequest() = default;
};
class PopRetryAITryOnTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopRetryAITryOnTaskResponseBody() {}

  explicit PopRetryAITryOnTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PopRetryAITryOnTaskResponseBody() = default;
};
class PopRetryAITryOnTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopRetryAITryOnTaskResponseBody> body{};

  PopRetryAITryOnTaskResponse() {}

  explicit PopRetryAITryOnTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopRetryAITryOnTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopRetryAITryOnTaskResponseBody>(model1);
      }
    }
  }


  virtual ~PopRetryAITryOnTaskResponse() = default;
};
class PopSubmitAITryOnJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> bottomsId{};
  shared_ptr<string> clothingType{};
  shared_ptr<long> generatePictureNum{};
  shared_ptr<string> jwtToken{};
  shared_ptr<string> modelId{};
  shared_ptr<string> shoeType{};
  shared_ptr<string> suitId{};
  shared_ptr<string> topsId{};

  PopSubmitAITryOnJobRequest() {}

  explicit PopSubmitAITryOnJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bottomsId) {
      res["BottomsId"] = boost::any(*bottomsId);
    }
    if (clothingType) {
      res["ClothingType"] = boost::any(*clothingType);
    }
    if (generatePictureNum) {
      res["GeneratePictureNum"] = boost::any(*generatePictureNum);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (shoeType) {
      res["ShoeType"] = boost::any(*shoeType);
    }
    if (suitId) {
      res["SuitId"] = boost::any(*suitId);
    }
    if (topsId) {
      res["TopsId"] = boost::any(*topsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BottomsId") != m.end() && !m["BottomsId"].empty()) {
      bottomsId = make_shared<string>(boost::any_cast<string>(m["BottomsId"]));
    }
    if (m.find("ClothingType") != m.end() && !m["ClothingType"].empty()) {
      clothingType = make_shared<string>(boost::any_cast<string>(m["ClothingType"]));
    }
    if (m.find("GeneratePictureNum") != m.end() && !m["GeneratePictureNum"].empty()) {
      generatePictureNum = make_shared<long>(boost::any_cast<long>(m["GeneratePictureNum"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ShoeType") != m.end() && !m["ShoeType"].empty()) {
      shoeType = make_shared<string>(boost::any_cast<string>(m["ShoeType"]));
    }
    if (m.find("SuitId") != m.end() && !m["SuitId"].empty()) {
      suitId = make_shared<string>(boost::any_cast<string>(m["SuitId"]));
    }
    if (m.find("TopsId") != m.end() && !m["TopsId"].empty()) {
      topsId = make_shared<string>(boost::any_cast<string>(m["TopsId"]));
    }
  }


  virtual ~PopSubmitAITryOnJobRequest() = default;
};
class PopSubmitAITryOnJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  PopSubmitAITryOnJobResponseBodyData() {}

  explicit PopSubmitAITryOnJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~PopSubmitAITryOnJobResponseBodyData() = default;
};
class PopSubmitAITryOnJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopSubmitAITryOnJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopSubmitAITryOnJobResponseBody() {}

  explicit PopSubmitAITryOnJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopSubmitAITryOnJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopSubmitAITryOnJobResponseBodyData>(model1);
      }
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


  virtual ~PopSubmitAITryOnJobResponseBody() = default;
};
class PopSubmitAITryOnJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopSubmitAITryOnJobResponseBody> body{};

  PopSubmitAITryOnJobResponse() {}

  explicit PopSubmitAITryOnJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopSubmitAITryOnJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopSubmitAITryOnJobResponseBody>(model1);
      }
    }
  }


  virtual ~PopSubmitAITryOnJobResponse() = default;
};
class PopUploadMaterialRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};

  PopUploadMaterialRequest() {}

  explicit PopUploadMaterialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
  }


  virtual ~PopUploadMaterialRequest() = default;
};
class PopUploadMaterialResponseBodyDataPolicy : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};

  PopUploadMaterialResponseBodyDataPolicy() {}

  explicit PopUploadMaterialResponseBodyDataPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~PopUploadMaterialResponseBodyDataPolicy() = default;
};
class PopUploadMaterialResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> ossKey{};
  shared_ptr<PopUploadMaterialResponseBodyDataPolicy> policy{};

  PopUploadMaterialResponseBodyData() {}

  explicit PopUploadMaterialResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        PopUploadMaterialResponseBodyDataPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<PopUploadMaterialResponseBodyDataPolicy>(model1);
      }
    }
  }


  virtual ~PopUploadMaterialResponseBodyData() = default;
};
class PopUploadMaterialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PopUploadMaterialResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopUploadMaterialResponseBody() {}

  explicit PopUploadMaterialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopUploadMaterialResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PopUploadMaterialResponseBodyData>(model1);
      }
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


  virtual ~PopUploadMaterialResponseBody() = default;
};
class PopUploadMaterialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopUploadMaterialResponseBody> body{};

  PopUploadMaterialResponse() {}

  explicit PopUploadMaterialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopUploadMaterialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopUploadMaterialResponseBody>(model1);
      }
    }
  }


  virtual ~PopUploadMaterialResponse() = default;
};
class PopVideoSaveSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sourceType{};

  PopVideoSaveSourceRequest() {}

  explicit PopVideoSaveSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~PopVideoSaveSourceRequest() = default;
};
class PopVideoSaveSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PopVideoSaveSourceResponseBody() {}

  explicit PopVideoSaveSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
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


  virtual ~PopVideoSaveSourceResponseBody() = default;
};
class PopVideoSaveSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PopVideoSaveSourceResponseBody> body{};

  PopVideoSaveSourceResponse() {}

  explicit PopVideoSaveSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PopVideoSaveSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PopVideoSaveSourceResponseBody>(model1);
      }
    }
  }


  virtual ~PopVideoSaveSourceResponse() = default;
};
class QueryDigitalHumanProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<string> jwtToken{};

  QueryDigitalHumanProjectRequest() {}

  explicit QueryDigitalHumanProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
  }


  virtual ~QueryDigitalHumanProjectRequest() = default;
};
class QueryDigitalHumanProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> estimatedDuration{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> id{};
  shared_ptr<string> intro{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> status{};
  shared_ptr<string> subtitleUrl{};
  shared_ptr<string> title{};
  shared_ptr<long> videoLength{};
  shared_ptr<long> waitingTime{};

  QueryDigitalHumanProjectResponseBodyData() {}

  explicit QueryDigitalHumanProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (estimatedDuration) {
      res["EstimatedDuration"] = boost::any(*estimatedDuration);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (intro) {
      res["Intro"] = boost::any(*intro);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subtitleUrl) {
      res["SubtitleUrl"] = boost::any(*subtitleUrl);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (videoLength) {
      res["VideoLength"] = boost::any(*videoLength);
    }
    if (waitingTime) {
      res["WaitingTime"] = boost::any(*waitingTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EstimatedDuration") != m.end() && !m["EstimatedDuration"].empty()) {
      estimatedDuration = make_shared<long>(boost::any_cast<long>(m["EstimatedDuration"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Intro") != m.end() && !m["Intro"].empty()) {
      intro = make_shared<string>(boost::any_cast<string>(m["Intro"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubtitleUrl") != m.end() && !m["SubtitleUrl"].empty()) {
      subtitleUrl = make_shared<string>(boost::any_cast<string>(m["SubtitleUrl"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("VideoLength") != m.end() && !m["VideoLength"].empty()) {
      videoLength = make_shared<long>(boost::any_cast<long>(m["VideoLength"]));
    }
    if (m.find("WaitingTime") != m.end() && !m["WaitingTime"].empty()) {
      waitingTime = make_shared<long>(boost::any_cast<long>(m["WaitingTime"]));
    }
  }


  virtual ~QueryDigitalHumanProjectResponseBodyData() = default;
};
class QueryDigitalHumanProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QueryDigitalHumanProjectResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryDigitalHumanProjectResponseBody() {}

  explicit QueryDigitalHumanProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<QueryDigitalHumanProjectResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDigitalHumanProjectResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryDigitalHumanProjectResponseBodyData>>(expect1);
      }
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


  virtual ~QueryDigitalHumanProjectResponseBody() = default;
};
class QueryDigitalHumanProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDigitalHumanProjectResponseBody> body{};

  QueryDigitalHumanProjectResponse() {}

  explicit QueryDigitalHumanProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDigitalHumanProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDigitalHumanProjectResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDigitalHumanProjectResponse() = default;
};
class QueryLongTtsResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> jwtToken{};

  QueryLongTtsResultRequest() {}

  explicit QueryLongTtsResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
  }


  virtual ~QueryLongTtsResultRequest() = default;
};
class QueryLongTtsResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> audioUrl{};
  shared_ptr<double> duration{};
  shared_ptr<string> status{};

  QueryLongTtsResultResponseBodyData() {}

  explicit QueryLongTtsResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioUrl) {
      res["AudioUrl"] = boost::any(*audioUrl);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioUrl") != m.end() && !m["AudioUrl"].empty()) {
      audioUrl = make_shared<string>(boost::any_cast<string>(m["AudioUrl"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryLongTtsResultResponseBodyData() = default;
};
class QueryLongTtsResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryLongTtsResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryLongTtsResultResponseBody() {}

  explicit QueryLongTtsResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryLongTtsResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryLongTtsResultResponseBodyData>(model1);
      }
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


  virtual ~QueryLongTtsResultResponseBody() = default;
};
class QueryLongTtsResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryLongTtsResultResponseBody> body{};

  QueryLongTtsResultResponse() {}

  explicit QueryLongTtsResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryLongTtsResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryLongTtsResultResponseBody>(model1);
      }
    }
  }


  virtual ~QueryLongTtsResultResponse() = default;
};
class QueryMotionShopVideoDetectResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> jwtToken{};

  QueryMotionShopVideoDetectResultRequest() {}

  explicit QueryMotionShopVideoDetectResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
  }


  virtual ~QueryMotionShopVideoDetectResultRequest() = default;
};
class QueryMotionShopVideoDetectResultResponseBodyDataDetectResult : public Darabonba::Model {
public:
  shared_ptr<vector<double>> box{};
  shared_ptr<long> code{};
  shared_ptr<string> coverUrl{};
  shared_ptr<string> message{};
  shared_ptr<long> selectedFrameIndex{};

  QueryMotionShopVideoDetectResultResponseBodyDataDetectResult() {}

  explicit QueryMotionShopVideoDetectResultResponseBodyDataDetectResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (box) {
      res["Box"] = boost::any(*box);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (selectedFrameIndex) {
      res["SelectedFrameIndex"] = boost::any(*selectedFrameIndex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Box"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Box"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      box = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("SelectedFrameIndex") != m.end() && !m["SelectedFrameIndex"].empty()) {
      selectedFrameIndex = make_shared<long>(boost::any_cast<long>(m["SelectedFrameIndex"]));
    }
  }


  virtual ~QueryMotionShopVideoDetectResultResponseBodyDataDetectResult() = default;
};
class QueryMotionShopVideoDetectResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<QueryMotionShopVideoDetectResultResponseBodyDataDetectResult> detectResult{};
  shared_ptr<string> status{};
  shared_ptr<string> videoId{};

  QueryMotionShopVideoDetectResultResponseBodyData() {}

  explicit QueryMotionShopVideoDetectResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detectResult) {
      res["DetectResult"] = detectResult ? boost::any(detectResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (videoId) {
      res["VideoId"] = boost::any(*videoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetectResult") != m.end() && !m["DetectResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetectResult"].type()) {
        QueryMotionShopVideoDetectResultResponseBodyDataDetectResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetectResult"]));
        detectResult = make_shared<QueryMotionShopVideoDetectResultResponseBodyDataDetectResult>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VideoId") != m.end() && !m["VideoId"].empty()) {
      videoId = make_shared<string>(boost::any_cast<string>(m["VideoId"]));
    }
  }


  virtual ~QueryMotionShopVideoDetectResultResponseBodyData() = default;
};
class QueryMotionShopVideoDetectResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryMotionShopVideoDetectResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryMotionShopVideoDetectResultResponseBody() {}

  explicit QueryMotionShopVideoDetectResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMotionShopVideoDetectResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryMotionShopVideoDetectResultResponseBodyData>(model1);
      }
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


  virtual ~QueryMotionShopVideoDetectResultResponseBody() = default;
};
class QueryMotionShopVideoDetectResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMotionShopVideoDetectResultResponseBody> body{};

  QueryMotionShopVideoDetectResultResponse() {}

  explicit QueryMotionShopVideoDetectResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMotionShopVideoDetectResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMotionShopVideoDetectResultResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMotionShopVideoDetectResultResponse() = default;
};
class SubmitLongTtsTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> jwtToken{};
  shared_ptr<string> ttsVoiceId{};

  SubmitLongTtsTaskRequest() {}

  explicit SubmitLongTtsTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (ttsVoiceId) {
      res["TtsVoiceId"] = boost::any(*ttsVoiceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("TtsVoiceId") != m.end() && !m["TtsVoiceId"].empty()) {
      ttsVoiceId = make_shared<string>(boost::any_cast<string>(m["TtsVoiceId"]));
    }
  }


  virtual ~SubmitLongTtsTaskRequest() = default;
};
class SubmitLongTtsTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitLongTtsTaskResponseBody() {}

  explicit SubmitLongTtsTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitLongTtsTaskResponseBody() = default;
};
class SubmitLongTtsTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitLongTtsTaskResponseBody> body{};

  SubmitLongTtsTaskResponse() {}

  explicit SubmitLongTtsTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitLongTtsTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitLongTtsTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitLongTtsTaskResponse() = default;
};
class SubmitMotionShopTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> avatarId{};
  shared_ptr<string> jwtToken{};
  shared_ptr<string> title{};
  shared_ptr<string> videoId{};

  SubmitMotionShopTaskRequest() {}

  explicit SubmitMotionShopTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatarId) {
      res["AvatarId"] = boost::any(*avatarId);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (videoId) {
      res["VideoId"] = boost::any(*videoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvatarId") != m.end() && !m["AvatarId"].empty()) {
      avatarId = make_shared<string>(boost::any_cast<string>(m["AvatarId"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("VideoId") != m.end() && !m["VideoId"].empty()) {
      videoId = make_shared<string>(boost::any_cast<string>(m["VideoId"]));
    }
  }


  virtual ~SubmitMotionShopTaskRequest() = default;
};
class SubmitMotionShopTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  SubmitMotionShopTaskResponseBodyData() {}

  explicit SubmitMotionShopTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~SubmitMotionShopTaskResponseBodyData() = default;
};
class SubmitMotionShopTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitMotionShopTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitMotionShopTaskResponseBody() {}

  explicit SubmitMotionShopTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitMotionShopTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitMotionShopTaskResponseBodyData>(model1);
      }
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


  virtual ~SubmitMotionShopTaskResponseBody() = default;
};
class SubmitMotionShopTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitMotionShopTaskResponseBody> body{};

  SubmitMotionShopTaskResponse() {}

  explicit SubmitMotionShopTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitMotionShopTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitMotionShopTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitMotionShopTaskResponse() = default;
};
class UpdateUserEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> jwtToken{};

  UpdateUserEmailRequest() {}

  explicit UpdateUserEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
  }


  virtual ~UpdateUserEmailRequest() = default;
};
class UpdateUserEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateUserEmailResponseBody() {}

  explicit UpdateUserEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorName) {
      res["ErrorName"] = boost::any(*errorName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
    if (m.find("ErrorName") != m.end() && !m["ErrorName"].empty()) {
      errorName = make_shared<string>(boost::any_cast<string>(m["ErrorName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
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


  virtual ~UpdateUserEmailResponseBody() = default;
};
class UpdateUserEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserEmailResponseBody> body{};

  UpdateUserEmailResponse() {}

  explicit UpdateUserEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserEmailResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserEmailResponse() = default;
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
  AuthUserResponse authUserWithOptions(shared_ptr<AuthUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuthUserResponse authUser(shared_ptr<AuthUserRequest> request);
  BatchQueryMotionShopTaskStatusResponse batchQueryMotionShopTaskStatusWithOptions(shared_ptr<BatchQueryMotionShopTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchQueryMotionShopTaskStatusResponse batchQueryMotionShopTaskStatus(shared_ptr<BatchQueryMotionShopTaskStatusRequest> request);
  CreateAvatarTalkProjectResponse createAvatarTalkProjectWithOptions(shared_ptr<CreateAvatarTalkProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAvatarTalkProjectResponse createAvatarTalkProject(shared_ptr<CreateAvatarTalkProjectRequest> request);
  CreateDigitalHumanProjectResponse createDigitalHumanProjectWithOptions(shared_ptr<CreateDigitalHumanProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDigitalHumanProjectResponse createDigitalHumanProject(shared_ptr<CreateDigitalHumanProjectRequest> request);
  CreateLivePortraitProjectResponse createLivePortraitProjectWithOptions(shared_ptr<CreateLivePortraitProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLivePortraitProjectResponse createLivePortraitProject(shared_ptr<CreateLivePortraitProjectRequest> request);
  GenerateMotionShopVideoUploadUrlResponse generateMotionShopVideoUploadUrlWithOptions(shared_ptr<GenerateMotionShopVideoUploadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateMotionShopVideoUploadUrlResponse generateMotionShopVideoUploadUrl(shared_ptr<GenerateMotionShopVideoUploadUrlRequest> request);
  GetMapDataResponse getMapDataWithOptions(shared_ptr<GetMapDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMapDataResponse getMapData(shared_ptr<GetMapDataRequest> request);
  GetMapPublishDataResponse getMapPublishDataWithOptions(shared_ptr<GetMapPublishDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMapPublishDataResponse getMapPublishData(shared_ptr<GetMapPublishDataRequest> request);
  InitLocateResponse initLocateWithOptions(shared_ptr<InitLocateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitLocateResponse initLocate(shared_ptr<InitLocateRequest> request);
  ListCommonMaterialsResponse listCommonMaterialsWithOptions(shared_ptr<ListCommonMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCommonMaterialsResponse listCommonMaterials(shared_ptr<ListCommonMaterialsRequest> request);
  ListDigitalHumanMaterialsResponse listDigitalHumanMaterialsWithOptions(shared_ptr<ListDigitalHumanMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDigitalHumanMaterialsResponse listDigitalHumanMaterials(shared_ptr<ListDigitalHumanMaterialsRequest> request);
  ListLocationServiceResponse listLocationServiceWithOptions(shared_ptr<ListLocationServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLocationServiceResponse listLocationService(shared_ptr<ListLocationServiceRequest> request);
  ListMotionShopTasksResponse listMotionShopTasksWithOptions(shared_ptr<ListMotionShopTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMotionShopTasksResponse listMotionShopTasks(shared_ptr<ListMotionShopTasksRequest> request);
  LivePortraitFaceDetectResponse livePortraitFaceDetectWithOptions(shared_ptr<LivePortraitFaceDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LivePortraitFaceDetectResponse livePortraitFaceDetect(shared_ptr<LivePortraitFaceDetectRequest> request);
  LocateResponse locateWithOptions(shared_ptr<LocateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LocateResponse locate(shared_ptr<LocateRequest> request);
  LoginHuggingFaceResponse loginHuggingFaceWithOptions(shared_ptr<LoginHuggingFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LoginHuggingFaceResponse loginHuggingFace(shared_ptr<LoginHuggingFaceRequest> request);
  LoginModelScopeResponse loginModelScopeWithOptions(shared_ptr<LoginModelScopeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LoginModelScopeResponse loginModelScope(shared_ptr<LoginModelScopeRequest> request);
  MotionShopVideoDetectResponse motionShopVideoDetectWithOptions(shared_ptr<MotionShopVideoDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MotionShopVideoDetectResponse motionShopVideoDetect(shared_ptr<MotionShopVideoDetectRequest> request);
  PopBatchQueryObjectGenerationProjectStatusResponse popBatchQueryObjectGenerationProjectStatusWithOptions(shared_ptr<PopBatchQueryObjectGenerationProjectStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopBatchQueryObjectGenerationProjectStatusResponse popBatchQueryObjectGenerationProjectStatus(shared_ptr<PopBatchQueryObjectGenerationProjectStatusRequest> request);
  PopBatchQueryObjectProjectStatusResponse popBatchQueryObjectProjectStatusWithOptions(shared_ptr<PopBatchQueryObjectProjectStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopBatchQueryObjectProjectStatusResponse popBatchQueryObjectProjectStatus(shared_ptr<PopBatchQueryObjectProjectStatusRequest> request);
  PopBuildFeatureToAvatarProjectResponse popBuildFeatureToAvatarProjectWithOptions(shared_ptr<PopBuildFeatureToAvatarProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopBuildFeatureToAvatarProjectResponse popBuildFeatureToAvatarProject(shared_ptr<PopBuildFeatureToAvatarProjectRequest> request);
  PopBuildLivePortraitModelScopeProjectResponse popBuildLivePortraitModelScopeProjectWithOptions(shared_ptr<PopBuildLivePortraitModelScopeProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopBuildLivePortraitModelScopeProjectResponse popBuildLivePortraitModelScopeProject(shared_ptr<PopBuildLivePortraitModelScopeProjectRequest> request);
  PopBuildObjectGenerationProjectResponse popBuildObjectGenerationProjectWithOptions(shared_ptr<PopBuildObjectGenerationProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopBuildObjectGenerationProjectResponse popBuildObjectGenerationProject(shared_ptr<PopBuildObjectGenerationProjectRequest> request);
  PopBuildObjectProjectResponse popBuildObjectProjectWithOptions(shared_ptr<PopBuildObjectProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopBuildObjectProjectResponse popBuildObjectProject(shared_ptr<PopBuildObjectProjectRequest> request);
  PopBuildPakRenderProjectResponse popBuildPakRenderProjectWithOptions(shared_ptr<PopBuildPakRenderProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopBuildPakRenderProjectResponse popBuildPakRenderProject(shared_ptr<PopBuildPakRenderProjectRequest> request);
  PopBuildTextToAvatarProjectResponse popBuildTextToAvatarProjectWithOptions(shared_ptr<PopBuildTextToAvatarProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopBuildTextToAvatarProjectResponse popBuildTextToAvatarProject(shared_ptr<PopBuildTextToAvatarProjectRequest> request);
  PopCreateFeatureToAvatarProjectResponse popCreateFeatureToAvatarProjectWithOptions(shared_ptr<PopCreateFeatureToAvatarProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopCreateFeatureToAvatarProjectResponse popCreateFeatureToAvatarProject(shared_ptr<PopCreateFeatureToAvatarProjectRequest> request);
  PopCreateLivePortraitModelScopeProjectResponse popCreateLivePortraitModelScopeProjectWithOptions(shared_ptr<PopCreateLivePortraitModelScopeProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopCreateLivePortraitModelScopeProjectResponse popCreateLivePortraitModelScopeProject(shared_ptr<PopCreateLivePortraitModelScopeProjectRequest> request);
  PopCreateMaterialResponse popCreateMaterialWithOptions(shared_ptr<PopCreateMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopCreateMaterialResponse popCreateMaterial(shared_ptr<PopCreateMaterialRequest> request);
  PopCreateObjectGenerationProjectResponse popCreateObjectGenerationProjectWithOptions(shared_ptr<PopCreateObjectGenerationProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopCreateObjectGenerationProjectResponse popCreateObjectGenerationProject(shared_ptr<PopCreateObjectGenerationProjectRequest> request);
  PopCreateObjectProjectResponse popCreateObjectProjectWithOptions(shared_ptr<PopCreateObjectProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopCreateObjectProjectResponse popCreateObjectProject(shared_ptr<PopCreateObjectProjectRequest> request);
  PopCreatePakRenderProjectResponse popCreatePakRenderProjectWithOptions(shared_ptr<PopCreatePakRenderProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopCreatePakRenderProjectResponse popCreatePakRenderProject(shared_ptr<PopCreatePakRenderProjectRequest> request);
  PopCreateTextToAvatarProjectResponse popCreateTextToAvatarProjectWithOptions(shared_ptr<PopCreateTextToAvatarProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopCreateTextToAvatarProjectResponse popCreateTextToAvatarProject(shared_ptr<PopCreateTextToAvatarProjectRequest> request);
  PopDeleteMaterialResponse popDeleteMaterialWithOptions(shared_ptr<PopDeleteMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopDeleteMaterialResponse popDeleteMaterial(shared_ptr<PopDeleteMaterialRequest> request);
  PopGetAITryOnJobResponse popGetAITryOnJobWithOptions(shared_ptr<PopGetAITryOnJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopGetAITryOnJobResponse popGetAITryOnJob(shared_ptr<PopGetAITryOnJobRequest> request);
  PopListAITryOnJobsResponse popListAITryOnJobsWithOptions(shared_ptr<PopListAITryOnJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopListAITryOnJobsResponse popListAITryOnJobs(shared_ptr<PopListAITryOnJobsRequest> request);
  PopListCommonMaterialsAllResponse popListCommonMaterialsAllWithOptions(shared_ptr<PopListCommonMaterialsAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopListCommonMaterialsAllResponse popListCommonMaterialsAll(shared_ptr<PopListCommonMaterialsAllRequest> request);
  PopListFeatureToAvatarMaterialsResponse popListFeatureToAvatarMaterialsWithOptions(shared_ptr<PopListFeatureToAvatarMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopListFeatureToAvatarMaterialsResponse popListFeatureToAvatarMaterials(shared_ptr<PopListFeatureToAvatarMaterialsRequest> request);
  PopListFeatureToAvatarProjectResponse popListFeatureToAvatarProjectWithOptions(shared_ptr<PopListFeatureToAvatarProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopListFeatureToAvatarProjectResponse popListFeatureToAvatarProject(shared_ptr<PopListFeatureToAvatarProjectRequest> request);
  PopListLivePortraitModelScopeMaterialsResponse popListLivePortraitModelScopeMaterialsWithOptions(shared_ptr<PopListLivePortraitModelScopeMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopListLivePortraitModelScopeMaterialsResponse popListLivePortraitModelScopeMaterials(shared_ptr<PopListLivePortraitModelScopeMaterialsRequest> request);
  PopListObjectCaseResponse popListObjectCaseWithOptions(shared_ptr<PopListObjectCaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopListObjectCaseResponse popListObjectCase(shared_ptr<PopListObjectCaseRequest> request);
  PopListObjectGenerationProjectResponse popListObjectGenerationProjectWithOptions(shared_ptr<PopListObjectGenerationProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopListObjectGenerationProjectResponse popListObjectGenerationProject(shared_ptr<PopListObjectGenerationProjectRequest> request);
  PopListObjectProjectResponse popListObjectProjectWithOptions(shared_ptr<PopListObjectProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopListObjectProjectResponse popListObjectProject(shared_ptr<PopListObjectProjectRequest> request);
  PopListPakRenderExpressionResponse popListPakRenderExpressionWithOptions(shared_ptr<PopListPakRenderExpressionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopListPakRenderExpressionResponse popListPakRenderExpression(shared_ptr<PopListPakRenderExpressionRequest> request);
  PopListTextToAvatarProjectResponse popListTextToAvatarProjectWithOptions(shared_ptr<PopListTextToAvatarProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopListTextToAvatarProjectResponse popListTextToAvatarProject(shared_ptr<PopListTextToAvatarProjectRequest> request);
  PopObjectProjectDetailResponse popObjectProjectDetailWithOptions(shared_ptr<PopObjectProjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopObjectProjectDetailResponse popObjectProjectDetail(shared_ptr<PopObjectProjectDetailRequest> request);
  PopObjectRetrievalResponse popObjectRetrievalWithOptions(shared_ptr<PopObjectRetrievalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopObjectRetrievalResponse popObjectRetrieval(shared_ptr<PopObjectRetrievalRequest> request);
  PopObjectRetrievalUploadDataResponse popObjectRetrievalUploadDataWithOptions(shared_ptr<PopObjectRetrievalUploadDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopObjectRetrievalUploadDataResponse popObjectRetrievalUploadData(shared_ptr<PopObjectRetrievalUploadDataRequest> request);
  PopQueryAvatarProjectDetailResponse popQueryAvatarProjectDetailWithOptions(shared_ptr<PopQueryAvatarProjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopQueryAvatarProjectDetailResponse popQueryAvatarProjectDetail(shared_ptr<PopQueryAvatarProjectDetailRequest> request);
  PopQueryLatestAvatarProjectDetailByUserResponse popQueryLatestAvatarProjectDetailByUserWithOptions(shared_ptr<PopQueryLatestAvatarProjectDetailByUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopQueryLatestAvatarProjectDetailByUserResponse popQueryLatestAvatarProjectDetailByUser(shared_ptr<PopQueryLatestAvatarProjectDetailByUserRequest> request);
  PopQueryLivePortraitModelScopeProjectDetailResponse popQueryLivePortraitModelScopeProjectDetailWithOptions(shared_ptr<PopQueryLivePortraitModelScopeProjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopQueryLivePortraitModelScopeProjectDetailResponse popQueryLivePortraitModelScopeProjectDetail(shared_ptr<PopQueryLivePortraitModelScopeProjectDetailRequest> request);
  PopQueryObjectGenerationProjectDetailResponse popQueryObjectGenerationProjectDetailWithOptions(shared_ptr<PopQueryObjectGenerationProjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopQueryObjectGenerationProjectDetailResponse popQueryObjectGenerationProjectDetail(shared_ptr<PopQueryObjectGenerationProjectDetailRequest> request);
  PopRetryAITryOnTaskResponse popRetryAITryOnTaskWithOptions(shared_ptr<PopRetryAITryOnTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopRetryAITryOnTaskResponse popRetryAITryOnTask(shared_ptr<PopRetryAITryOnTaskRequest> request);
  PopSubmitAITryOnJobResponse popSubmitAITryOnJobWithOptions(shared_ptr<PopSubmitAITryOnJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopSubmitAITryOnJobResponse popSubmitAITryOnJob(shared_ptr<PopSubmitAITryOnJobRequest> request);
  PopUploadMaterialResponse popUploadMaterialWithOptions(shared_ptr<PopUploadMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopUploadMaterialResponse popUploadMaterial(shared_ptr<PopUploadMaterialRequest> request);
  PopVideoSaveSourceResponse popVideoSaveSourceWithOptions(shared_ptr<PopVideoSaveSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PopVideoSaveSourceResponse popVideoSaveSource(shared_ptr<PopVideoSaveSourceRequest> request);
  QueryDigitalHumanProjectResponse queryDigitalHumanProjectWithOptions(shared_ptr<QueryDigitalHumanProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDigitalHumanProjectResponse queryDigitalHumanProject(shared_ptr<QueryDigitalHumanProjectRequest> request);
  QueryLongTtsResultResponse queryLongTtsResultWithOptions(shared_ptr<QueryLongTtsResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryLongTtsResultResponse queryLongTtsResult(shared_ptr<QueryLongTtsResultRequest> request);
  QueryMotionShopVideoDetectResultResponse queryMotionShopVideoDetectResultWithOptions(shared_ptr<QueryMotionShopVideoDetectResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMotionShopVideoDetectResultResponse queryMotionShopVideoDetectResult(shared_ptr<QueryMotionShopVideoDetectResultRequest> request);
  SubmitLongTtsTaskResponse submitLongTtsTaskWithOptions(shared_ptr<SubmitLongTtsTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitLongTtsTaskResponse submitLongTtsTask(shared_ptr<SubmitLongTtsTaskRequest> request);
  SubmitMotionShopTaskResponse submitMotionShopTaskWithOptions(shared_ptr<SubmitMotionShopTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitMotionShopTaskResponse submitMotionShopTask(shared_ptr<SubmitMotionShopTaskRequest> request);
  UpdateUserEmailResponse updateUserEmailWithOptions(shared_ptr<UpdateUserEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserEmailResponse updateUserEmail(shared_ptr<UpdateUserEmailRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_XrEngine20230313

#endif
