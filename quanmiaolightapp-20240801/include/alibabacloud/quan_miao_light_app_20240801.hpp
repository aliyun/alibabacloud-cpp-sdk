// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_QUANMIAOLIGHTAPP20240801_H_
#define ALIBABACLOUD_QUANMIAOLIGHTAPP20240801_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_QuanMiaoLightApp20240801 {
class CancelAsyncTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  CancelAsyncTaskRequest() {}

  explicit CancelAsyncTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class ExportAnalysisTagDetailByTaskIdRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> category{};
  shared_ptr<string> taskId{};

  ExportAnalysisTagDetailByTaskIdRequest() {}

  explicit ExportAnalysisTagDetailByTaskIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["categories"] = boost::any(*categories);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categories") != m.end() && !m["categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~ExportAnalysisTagDetailByTaskIdRequest() = default;
};
class ExportAnalysisTagDetailByTaskIdShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoriesShrink{};
  shared_ptr<string> category{};
  shared_ptr<string> taskId{};

  ExportAnalysisTagDetailByTaskIdShrinkRequest() {}

  explicit ExportAnalysisTagDetailByTaskIdShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoriesShrink) {
      res["categories"] = boost::any(*categoriesShrink);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categories") != m.end() && !m["categories"].empty()) {
      categoriesShrink = make_shared<string>(boost::any_cast<string>(m["categories"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~ExportAnalysisTagDetailByTaskIdShrinkRequest() = default;
};
class ExportAnalysisTagDetailByTaskIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ExportAnalysisTagDetailByTaskIdResponseBody() {}

  explicit ExportAnalysisTagDetailByTaskIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ExportAnalysisTagDetailByTaskIdResponseBody() = default;
};
class ExportAnalysisTagDetailByTaskIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportAnalysisTagDetailByTaskIdResponseBody> body{};

  ExportAnalysisTagDetailByTaskIdResponse() {}

  explicit ExportAnalysisTagDetailByTaskIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExportAnalysisTagDetailByTaskIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportAnalysisTagDetailByTaskIdResponseBody>(model1);
      }
    }
  }


  virtual ~ExportAnalysisTagDetailByTaskIdResponse() = default;
};
class GenerateBroadcastNewsRequest : public Darabonba::Model {
public:
  shared_ptr<string> prompt{};

  GenerateBroadcastNewsRequest() {}

  explicit GenerateBroadcastNewsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prompt) {
      res["prompt"] = boost::any(*prompt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("prompt") != m.end() && !m["prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["prompt"]));
    }
  }


  virtual ~GenerateBroadcastNewsRequest() = default;
};
class GenerateBroadcastNewsResponseBodyDataHotTopicSummariesImages : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  GenerateBroadcastNewsResponseBodyDataHotTopicSummariesImages() {}

  explicit GenerateBroadcastNewsResponseBodyDataHotTopicSummariesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GenerateBroadcastNewsResponseBodyDataHotTopicSummariesImages() = default;
};
class GenerateBroadcastNewsResponseBodyDataHotTopicSummaries : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> hotTopic{};
  shared_ptr<string> hotTopicVersion{};
  shared_ptr<double> hotValue{};
  shared_ptr<string> id{};
  shared_ptr<vector<GenerateBroadcastNewsResponseBodyDataHotTopicSummariesImages>> images{};
  shared_ptr<string> textSummary{};

  GenerateBroadcastNewsResponseBodyDataHotTopicSummaries() {}

  explicit GenerateBroadcastNewsResponseBodyDataHotTopicSummaries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (hotTopic) {
      res["hotTopic"] = boost::any(*hotTopic);
    }
    if (hotTopicVersion) {
      res["hotTopicVersion"] = boost::any(*hotTopicVersion);
    }
    if (hotValue) {
      res["hotValue"] = boost::any(*hotValue);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["images"] = boost::any(temp1);
    }
    if (textSummary) {
      res["textSummary"] = boost::any(*textSummary);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("hotTopic") != m.end() && !m["hotTopic"].empty()) {
      hotTopic = make_shared<string>(boost::any_cast<string>(m["hotTopic"]));
    }
    if (m.find("hotTopicVersion") != m.end() && !m["hotTopicVersion"].empty()) {
      hotTopicVersion = make_shared<string>(boost::any_cast<string>(m["hotTopicVersion"]));
    }
    if (m.find("hotValue") != m.end() && !m["hotValue"].empty()) {
      hotValue = make_shared<double>(boost::any_cast<double>(m["hotValue"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("images") != m.end() && !m["images"].empty()) {
      if (typeid(vector<boost::any>) == m["images"].type()) {
        vector<GenerateBroadcastNewsResponseBodyDataHotTopicSummariesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateBroadcastNewsResponseBodyDataHotTopicSummariesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<GenerateBroadcastNewsResponseBodyDataHotTopicSummariesImages>>(expect1);
      }
    }
    if (m.find("textSummary") != m.end() && !m["textSummary"].empty()) {
      textSummary = make_shared<string>(boost::any_cast<string>(m["textSummary"]));
    }
  }


  virtual ~GenerateBroadcastNewsResponseBodyDataHotTopicSummaries() = default;
};
class GenerateBroadcastNewsResponseBodyDataUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  GenerateBroadcastNewsResponseBodyDataUsage() {}

  explicit GenerateBroadcastNewsResponseBodyDataUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~GenerateBroadcastNewsResponseBodyDataUsage() = default;
};
class GenerateBroadcastNewsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GenerateBroadcastNewsResponseBodyDataHotTopicSummaries>> hotTopicSummaries{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> text{};
  shared_ptr<GenerateBroadcastNewsResponseBodyDataUsage> usage{};

  GenerateBroadcastNewsResponseBodyData() {}

  explicit GenerateBroadcastNewsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hotTopicSummaries) {
      vector<boost::any> temp1;
      for(auto item1:*hotTopicSummaries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hotTopicSummaries"] = boost::any(temp1);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("hotTopicSummaries") != m.end() && !m["hotTopicSummaries"].empty()) {
      if (typeid(vector<boost::any>) == m["hotTopicSummaries"].type()) {
        vector<GenerateBroadcastNewsResponseBodyDataHotTopicSummaries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hotTopicSummaries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateBroadcastNewsResponseBodyDataHotTopicSummaries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hotTopicSummaries = make_shared<vector<GenerateBroadcastNewsResponseBodyDataHotTopicSummaries>>(expect1);
      }
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        GenerateBroadcastNewsResponseBodyDataUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<GenerateBroadcastNewsResponseBodyDataUsage>(model1);
      }
    }
  }


  virtual ~GenerateBroadcastNewsResponseBodyData() = default;
};
class GenerateBroadcastNewsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GenerateBroadcastNewsResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GenerateBroadcastNewsResponseBody() {}

  explicit GenerateBroadcastNewsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GenerateBroadcastNewsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GenerateBroadcastNewsResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
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


  virtual ~GenerateBroadcastNewsResponseBody() = default;
};
class GenerateBroadcastNewsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateBroadcastNewsResponseBody> body{};

  GenerateBroadcastNewsResponse() {}

  explicit GenerateBroadcastNewsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GenerateBroadcastNewsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateBroadcastNewsResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateBroadcastNewsResponse() = default;
};
class GenerateOutputFormatRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> tagDefinePrompt{};
  shared_ptr<string> tagName{};

  GenerateOutputFormatRequestTags() {}

  explicit GenerateOutputFormatRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagDefinePrompt) {
      res["tagDefinePrompt"] = boost::any(*tagDefinePrompt);
    }
    if (tagName) {
      res["tagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagDefinePrompt") != m.end() && !m["tagDefinePrompt"].empty()) {
      tagDefinePrompt = make_shared<string>(boost::any_cast<string>(m["tagDefinePrompt"]));
    }
    if (m.find("tagName") != m.end() && !m["tagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["tagName"]));
    }
  }


  virtual ~GenerateOutputFormatRequestTags() = default;
};
class GenerateOutputFormatRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> content{};
  shared_ptr<string> extraInfo{};
  shared_ptr<vector<GenerateOutputFormatRequestTags>> tags{};
  shared_ptr<string> taskDescription{};

  GenerateOutputFormatRequest() {}

  explicit GenerateOutputFormatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["businessType"] = boost::any(*businessType);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (taskDescription) {
      res["taskDescription"] = boost::any(*taskDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("businessType") != m.end() && !m["businessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["businessType"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<GenerateOutputFormatRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateOutputFormatRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GenerateOutputFormatRequestTags>>(expect1);
      }
    }
    if (m.find("taskDescription") != m.end() && !m["taskDescription"].empty()) {
      taskDescription = make_shared<string>(boost::any_cast<string>(m["taskDescription"]));
    }
  }


  virtual ~GenerateOutputFormatRequest() = default;
};
class GenerateOutputFormatShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessType{};
  shared_ptr<string> content{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> taskDescription{};

  GenerateOutputFormatShrinkRequest() {}

  explicit GenerateOutputFormatShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["businessType"] = boost::any(*businessType);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (tagsShrink) {
      res["tags"] = boost::any(*tagsShrink);
    }
    if (taskDescription) {
      res["taskDescription"] = boost::any(*taskDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("businessType") != m.end() && !m["businessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["businessType"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
    if (m.find("taskDescription") != m.end() && !m["taskDescription"].empty()) {
      taskDescription = make_shared<string>(boost::any_cast<string>(m["taskDescription"]));
    }
  }


  virtual ~GenerateOutputFormatShrinkRequest() = default;
};
class GenerateOutputFormatResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> outputFormat{};

  GenerateOutputFormatResponseBodyData() {}

  explicit GenerateOutputFormatResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outputFormat) {
      res["outputFormat"] = boost::any(*outputFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("outputFormat") != m.end() && !m["outputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["outputFormat"]));
    }
  }


  virtual ~GenerateOutputFormatResponseBodyData() = default;
};
class GenerateOutputFormatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GenerateOutputFormatResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GenerateOutputFormatResponseBody() {}

  explicit GenerateOutputFormatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GenerateOutputFormatResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GenerateOutputFormatResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
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


  virtual ~GenerateOutputFormatResponseBody() = default;
};
class GenerateOutputFormatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateOutputFormatResponseBody> body{};

  GenerateOutputFormatResponse() {}

  explicit GenerateOutputFormatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GenerateOutputFormatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateOutputFormatResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateOutputFormatResponse() = default;
};
class GetEnterpriseVocAnalysisTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetEnterpriseVocAnalysisTaskRequest() {}

  explicit GetEnterpriseVocAnalysisTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetEnterpriseVocAnalysisTaskRequest() = default;
};
class GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic : public Darabonba::Model {
public:
  shared_ptr<string> tagName{};
  shared_ptr<long> valueCount{};

  GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic() {}

  explicit GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagName) {
      res["tagName"] = boost::any(*tagName);
    }
    if (valueCount) {
      res["valueCount"] = boost::any(*valueCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagName") != m.end() && !m["tagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["tagName"]));
    }
    if (m.find("valueCount") != m.end() && !m["valueCount"].empty()) {
      valueCount = make_shared<long>(boost::any_cast<long>(m["valueCount"]));
    }
  }


  virtual ~GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic() = default;
};
class GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics : public Darabonba::Model {
public:
  shared_ptr<vector<GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic>> tagValueCountStatistic{};

  GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics() {}

  explicit GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagValueCountStatistic) {
      vector<boost::any> temp1;
      for(auto item1:*tagValueCountStatistic){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tagValueCountStatistic"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagValueCountStatistic") != m.end() && !m["tagValueCountStatistic"].empty()) {
      if (typeid(vector<boost::any>) == m["tagValueCountStatistic"].type()) {
        vector<GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tagValueCountStatistic"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagValueCountStatistic = make_shared<vector<GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatisticsTagValueCountStatistic>>(expect1);
      }
    }
  }


  virtual ~GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics() = default;
};
class GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatisticsTagValueCountStatistic : public Darabonba::Model {
public:
  shared_ptr<string> tagName{};
  shared_ptr<long> valueCount{};

  GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatisticsTagValueCountStatistic() {}

  explicit GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatisticsTagValueCountStatistic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagName) {
      res["tagName"] = boost::any(*tagName);
    }
    if (valueCount) {
      res["valueCount"] = boost::any(*valueCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagName") != m.end() && !m["tagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["tagName"]));
    }
    if (m.find("valueCount") != m.end() && !m["valueCount"].empty()) {
      valueCount = make_shared<long>(boost::any_cast<long>(m["valueCount"]));
    }
  }


  virtual ~GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatisticsTagValueCountStatistic() = default;
};
class GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics : public Darabonba::Model {
public:
  shared_ptr<vector<GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatisticsTagValueCountStatistic>> tagValueCountStatistic{};

  GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics() {}

  explicit GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagValueCountStatistic) {
      vector<boost::any> temp1;
      for(auto item1:*tagValueCountStatistic){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tagValueCountStatistic"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagValueCountStatistic") != m.end() && !m["tagValueCountStatistic"].empty()) {
      if (typeid(vector<boost::any>) == m["tagValueCountStatistic"].type()) {
        vector<GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatisticsTagValueCountStatistic> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tagValueCountStatistic"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatisticsTagValueCountStatistic model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagValueCountStatistic = make_shared<vector<GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatisticsTagValueCountStatistic>>(expect1);
      }
    }
  }


  virtual ~GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics() = default;
};
class GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics> filterDimensionStatistics{};
  shared_ptr<GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics> tagDimensionStatistics{};

  GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview() {}

  explicit GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (filterDimensionStatistics) {
      res["filterDimensionStatistics"] = filterDimensionStatistics ? boost::any(filterDimensionStatistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tagDimensionStatistics) {
      res["tagDimensionStatistics"] = tagDimensionStatistics ? boost::any(tagDimensionStatistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("filterDimensionStatistics") != m.end() && !m["filterDimensionStatistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterDimensionStatistics"].type()) {
        GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterDimensionStatistics"]));
        filterDimensionStatistics = make_shared<GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewFilterDimensionStatistics>(model1);
      }
    }
    if (m.find("tagDimensionStatistics") != m.end() && !m["tagDimensionStatistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["tagDimensionStatistics"].type()) {
        GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tagDimensionStatistics"]));
        tagDimensionStatistics = make_shared<GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverviewTagDimensionStatistics>(model1);
      }
    }
  }


  virtual ~GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview() = default;
};
class GetEnterpriseVocAnalysisTaskResponseBodyDataUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};

  GetEnterpriseVocAnalysisTaskResponseBodyDataUsage() {}

  explicit GetEnterpriseVocAnalysisTaskResponseBodyDataUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
  }


  virtual ~GetEnterpriseVocAnalysisTaskResponseBodyDataUsage() = default;
};
class GetEnterpriseVocAnalysisTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview> statisticsOverview{};
  shared_ptr<string> status{};
  shared_ptr<GetEnterpriseVocAnalysisTaskResponseBodyDataUsage> usage{};

  GetEnterpriseVocAnalysisTaskResponseBodyData() {}

  explicit GetEnterpriseVocAnalysisTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["modelName"] = boost::any(*modelName);
    }
    if (statisticsOverview) {
      res["statisticsOverview"] = statisticsOverview ? boost::any(statisticsOverview->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("modelName") != m.end() && !m["modelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["modelName"]));
    }
    if (m.find("statisticsOverview") != m.end() && !m["statisticsOverview"].empty()) {
      if (typeid(map<string, boost::any>) == m["statisticsOverview"].type()) {
        GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["statisticsOverview"]));
        statisticsOverview = make_shared<GetEnterpriseVocAnalysisTaskResponseBodyDataStatisticsOverview>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        GetEnterpriseVocAnalysisTaskResponseBodyDataUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<GetEnterpriseVocAnalysisTaskResponseBodyDataUsage>(model1);
      }
    }
  }


  virtual ~GetEnterpriseVocAnalysisTaskResponseBodyData() = default;
};
class GetEnterpriseVocAnalysisTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetEnterpriseVocAnalysisTaskResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetEnterpriseVocAnalysisTaskResponseBody() {}

  explicit GetEnterpriseVocAnalysisTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetEnterpriseVocAnalysisTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetEnterpriseVocAnalysisTaskResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
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


  virtual ~GetEnterpriseVocAnalysisTaskResponseBody() = default;
};
class GetEnterpriseVocAnalysisTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnterpriseVocAnalysisTaskResponseBody> body{};

  GetEnterpriseVocAnalysisTaskResponse() {}

  explicit GetEnterpriseVocAnalysisTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEnterpriseVocAnalysisTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnterpriseVocAnalysisTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnterpriseVocAnalysisTaskResponse() = default;
};
class GetTagMiningAnalysisTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetTagMiningAnalysisTaskRequest() {}

  explicit GetTagMiningAnalysisTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTagMiningAnalysisTaskRequest() = default;
};
class GetTagMiningAnalysisTaskResponseBodyDataResultsHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> requestId{};

  GetTagMiningAnalysisTaskResponseBodyDataResultsHeader() {}

  explicit GetTagMiningAnalysisTaskResponseBodyDataResultsHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
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
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetTagMiningAnalysisTaskResponseBodyDataResultsHeader() = default;
};
class GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput() {}

  explicit GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput() = default;
};
class GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputToken{};
  shared_ptr<long> outputToken{};
  shared_ptr<long> totalToken{};

  GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage() {}

  explicit GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputToken) {
      res["inputToken"] = boost::any(*inputToken);
    }
    if (outputToken) {
      res["outputToken"] = boost::any(*outputToken);
    }
    if (totalToken) {
      res["totalToken"] = boost::any(*totalToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputToken") != m.end() && !m["inputToken"].empty()) {
      inputToken = make_shared<long>(boost::any_cast<long>(m["inputToken"]));
    }
    if (m.find("outputToken") != m.end() && !m["outputToken"].empty()) {
      outputToken = make_shared<long>(boost::any_cast<long>(m["outputToken"]));
    }
    if (m.find("totalToken") != m.end() && !m["totalToken"].empty()) {
      totalToken = make_shared<long>(boost::any_cast<long>(m["totalToken"]));
    }
  }


  virtual ~GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage() = default;
};
class GetTagMiningAnalysisTaskResponseBodyDataResultsPayload : public Darabonba::Model {
public:
  shared_ptr<GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput> output{};
  shared_ptr<GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage> usage{};

  GetTagMiningAnalysisTaskResponseBodyDataResultsPayload() {}

  explicit GetTagMiningAnalysisTaskResponseBodyDataResultsPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage>(model1);
      }
    }
  }


  virtual ~GetTagMiningAnalysisTaskResponseBodyDataResultsPayload() = default;
};
class GetTagMiningAnalysisTaskResponseBodyDataResults : public Darabonba::Model {
public:
  shared_ptr<string> customId{};
  shared_ptr<GetTagMiningAnalysisTaskResponseBodyDataResultsHeader> header{};
  shared_ptr<GetTagMiningAnalysisTaskResponseBodyDataResultsPayload> payload{};

  GetTagMiningAnalysisTaskResponseBodyDataResults() {}

  explicit GetTagMiningAnalysisTaskResponseBodyDataResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customId) {
      res["customId"] = boost::any(*customId);
    }
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customId") != m.end() && !m["customId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["customId"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        GetTagMiningAnalysisTaskResponseBodyDataResultsHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<GetTagMiningAnalysisTaskResponseBodyDataResultsHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        GetTagMiningAnalysisTaskResponseBodyDataResultsPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<GetTagMiningAnalysisTaskResponseBodyDataResultsPayload>(model1);
      }
    }
  }


  virtual ~GetTagMiningAnalysisTaskResponseBodyDataResults() = default;
};
class GetTagMiningAnalysisTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<GetTagMiningAnalysisTaskResponseBodyDataResults>> results{};
  shared_ptr<string> status{};

  GetTagMiningAnalysisTaskResponseBodyData() {}

  explicit GetTagMiningAnalysisTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["results"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
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
    if (m.find("results") != m.end() && !m["results"].empty()) {
      if (typeid(vector<boost::any>) == m["results"].type()) {
        vector<GetTagMiningAnalysisTaskResponseBodyDataResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTagMiningAnalysisTaskResponseBodyDataResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<GetTagMiningAnalysisTaskResponseBodyDataResults>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetTagMiningAnalysisTaskResponseBodyData() = default;
};
class GetTagMiningAnalysisTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetTagMiningAnalysisTaskResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetTagMiningAnalysisTaskResponseBody() {}

  explicit GetTagMiningAnalysisTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetTagMiningAnalysisTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetTagMiningAnalysisTaskResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
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


  virtual ~GetTagMiningAnalysisTaskResponseBody() = default;
};
class GetTagMiningAnalysisTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTagMiningAnalysisTaskResponseBody> body{};

  GetTagMiningAnalysisTaskResponse() {}

  explicit GetTagMiningAnalysisTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTagMiningAnalysisTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTagMiningAnalysisTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetTagMiningAnalysisTaskResponse() = default;
};
class GetVideoAnalysisConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> asyncConcurrency{};

  GetVideoAnalysisConfigResponseBodyData() {}

  explicit GetVideoAnalysisConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asyncConcurrency) {
      res["asyncConcurrency"] = boost::any(*asyncConcurrency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("asyncConcurrency") != m.end() && !m["asyncConcurrency"].empty()) {
      asyncConcurrency = make_shared<long>(boost::any_cast<long>(m["asyncConcurrency"]));
    }
  }


  virtual ~GetVideoAnalysisConfigResponseBodyData() = default;
};
class GetVideoAnalysisConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetVideoAnalysisConfigResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetVideoAnalysisConfigResponseBody() {}

  explicit GetVideoAnalysisConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetVideoAnalysisConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetVideoAnalysisConfigResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
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


  virtual ~GetVideoAnalysisConfigResponseBody() = default;
};
class GetVideoAnalysisConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVideoAnalysisConfigResponseBody> body{};

  GetVideoAnalysisConfigResponse() {}

  explicit GetVideoAnalysisConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetVideoAnalysisConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVideoAnalysisConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetVideoAnalysisConfigResponse() = default;
};
class GetVideoAnalysisTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetVideoAnalysisTaskRequest() {}

  explicit GetVideoAnalysisTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetVideoAnalysisTaskRequest() = default;
};
class GetVideoAnalysisTaskResponseBodyDataHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  GetVideoAnalysisTaskResponseBodyDataHeader() {}

  explicit GetVideoAnalysisTaskResponseBodyDataHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
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
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataHeader() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};
  shared_ptr<string> text{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<string> text{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage> usage{};
  shared_ptr<vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults>> videoShotAnalysisResults{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoShotAnalysisResults) {
      vector<boost::any> temp1;
      for(auto item1:*videoShotAnalysisResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoShotAnalysisResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultUsage>(model1);
      }
    }
    if (m.find("videoShotAnalysisResults") != m.end() && !m["videoShotAnalysisResults"].empty()) {
      if (typeid(vector<boost::any>) == m["videoShotAnalysisResults"].type()) {
        vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoShotAnalysisResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoShotAnalysisResults = make_shared<vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResultVideoShotAnalysisResults>>(expect1);
      }
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> endTimeFormat{};
  shared_ptr<string> speaker{};
  shared_ptr<long> startTime{};
  shared_ptr<string> startTimeFormat{};
  shared_ptr<string> text{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (endTimeFormat) {
      res["endTimeFormat"] = boost::any(*endTimeFormat);
    }
    if (speaker) {
      res["speaker"] = boost::any(*speaker);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (startTimeFormat) {
      res["startTimeFormat"] = boost::any(*startTimeFormat);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("endTimeFormat") != m.end() && !m["endTimeFormat"].empty()) {
      endTimeFormat = make_shared<string>(boost::any_cast<string>(m["endTimeFormat"]));
    }
    if (m.find("speaker") != m.end() && !m["speaker"].empty()) {
      speaker = make_shared<string>(boost::any_cast<string>(m["speaker"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("startTimeFormat") != m.end() && !m["startTimeFormat"].empty()) {
      startTimeFormat = make_shared<string>(boost::any_cast<string>(m["startTimeFormat"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions>> videoCaptions{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (videoCaptions) {
      vector<boost::any> temp1;
      for(auto item1:*videoCaptions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoCaptions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("videoCaptions") != m.end() && !m["videoCaptions"].empty()) {
      if (typeid(vector<boost::any>) == m["videoCaptions"].type()) {
        vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoCaptions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoCaptions = make_shared<vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResultVideoCaptions>>(expect1);
      }
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultUsage() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultUsage() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<long> index{};
  shared_ptr<string> modelId{};
  shared_ptr<bool> modelReduce{};
  shared_ptr<string> reasonText{};
  shared_ptr<string> text{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultUsage> usage{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (modelReduce) {
      res["modelReduce"] = boost::any(*modelReduce);
    }
    if (reasonText) {
      res["reasonText"] = boost::any(*reasonText);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("modelReduce") != m.end() && !m["modelReduce"].empty()) {
      modelReduce = make_shared<bool>(boost::any_cast<bool>(m["modelReduce"]));
    }
    if (m.find("reasonText") != m.end() && !m["reasonText"].empty()) {
      reasonText = make_shared<string>(boost::any_cast<string>(m["reasonText"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultUsage>(model1);
      }
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<long> index{};
  shared_ptr<string> modelId{};
  shared_ptr<string> reasonText{};
  shared_ptr<string> text{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage> usage{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (reasonText) {
      res["reasonText"] = boost::any(*reasonText);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("reasonText") != m.end() && !m["reasonText"].empty()) {
      reasonText = make_shared<string>(boost::any_cast<string>(m["reasonText"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage>(model1);
      }
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes : public Darabonba::Model {
public:
  shared_ptr<vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes>> childNodes{};
  shared_ptr<string> name{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childNodes) {
      vector<boost::any> temp1;
      for(auto item1:*childNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["childNodes"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("childNodes") != m.end() && !m["childNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["childNodes"].type()) {
        vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["childNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        childNodes = make_shared<vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings : public Darabonba::Model {
public:
  shared_ptr<vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes>> childNodes{};
  shared_ptr<string> name{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childNodes) {
      vector<boost::any> temp1;
      for(auto item1:*childNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["childNodes"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("childNodes") != m.end() && !m["childNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["childNodes"].type()) {
        vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["childNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        childNodes = make_shared<vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<string> text{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage> usage{};
  shared_ptr<vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings>> videoMindMappings{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoMindMappings) {
      vector<boost::any> temp1;
      for(auto item1:*videoMindMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoMindMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultUsage>(model1);
      }
    }
    if (m.find("videoMindMappings") != m.end() && !m["videoMindMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["videoMindMappings"].type()) {
        vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoMindMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoMindMappings = make_shared<vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResultVideoMindMappings>>(expect1);
      }
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<string> text{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage> usage{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResultUsage>(model1);
      }
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> resultJsonFileUrl{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult> videoAnalysisResult{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult> videoCaptionResult{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult> videoGenerateResult{};
  shared_ptr<vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults>> videoGenerateResults{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult> videoMindMappingGenerateResult{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult> videoTitleGenerateResult{};

  GetVideoAnalysisTaskResponseBodyDataPayloadOutput() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultJsonFileUrl) {
      res["resultJsonFileUrl"] = boost::any(*resultJsonFileUrl);
    }
    if (videoAnalysisResult) {
      res["videoAnalysisResult"] = videoAnalysisResult ? boost::any(videoAnalysisResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoCaptionResult) {
      res["videoCaptionResult"] = videoCaptionResult ? boost::any(videoCaptionResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoGenerateResult) {
      res["videoGenerateResult"] = videoGenerateResult ? boost::any(videoGenerateResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoGenerateResults) {
      vector<boost::any> temp1;
      for(auto item1:*videoGenerateResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoGenerateResults"] = boost::any(temp1);
    }
    if (videoMindMappingGenerateResult) {
      res["videoMindMappingGenerateResult"] = videoMindMappingGenerateResult ? boost::any(videoMindMappingGenerateResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoTitleGenerateResult) {
      res["videoTitleGenerateResult"] = videoTitleGenerateResult ? boost::any(videoTitleGenerateResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resultJsonFileUrl") != m.end() && !m["resultJsonFileUrl"].empty()) {
      resultJsonFileUrl = make_shared<string>(boost::any_cast<string>(m["resultJsonFileUrl"]));
    }
    if (m.find("videoAnalysisResult") != m.end() && !m["videoAnalysisResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoAnalysisResult"].type()) {
        GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoAnalysisResult"]));
        videoAnalysisResult = make_shared<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoAnalysisResult>(model1);
      }
    }
    if (m.find("videoCaptionResult") != m.end() && !m["videoCaptionResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoCaptionResult"].type()) {
        GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoCaptionResult"]));
        videoCaptionResult = make_shared<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCaptionResult>(model1);
      }
    }
    if (m.find("videoGenerateResult") != m.end() && !m["videoGenerateResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoGenerateResult"].type()) {
        GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoGenerateResult"]));
        videoGenerateResult = make_shared<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResult>(model1);
      }
    }
    if (m.find("videoGenerateResults") != m.end() && !m["videoGenerateResults"].empty()) {
      if (typeid(vector<boost::any>) == m["videoGenerateResults"].type()) {
        vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoGenerateResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoGenerateResults = make_shared<vector<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResults>>(expect1);
      }
    }
    if (m.find("videoMindMappingGenerateResult") != m.end() && !m["videoMindMappingGenerateResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoMindMappingGenerateResult"].type()) {
        GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoMindMappingGenerateResult"]));
        videoMindMappingGenerateResult = make_shared<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoMindMappingGenerateResult>(model1);
      }
    }
    if (m.find("videoTitleGenerateResult") != m.end() && !m["videoTitleGenerateResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoTitleGenerateResult"].type()) {
        GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoTitleGenerateResult"]));
        videoTitleGenerateResult = make_shared<GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoTitleGenerateResult>(model1);
      }
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutput() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  GetVideoAnalysisTaskResponseBodyDataPayloadUsage() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadUsage() = default;
};
class GetVideoAnalysisTaskResponseBodyDataPayload : public Darabonba::Model {
public:
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataPayloadOutput> output{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataPayloadUsage> usage{};

  GetVideoAnalysisTaskResponseBodyDataPayload() {}

  explicit GetVideoAnalysisTaskResponseBodyDataPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        GetVideoAnalysisTaskResponseBodyDataPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<GetVideoAnalysisTaskResponseBodyDataPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        GetVideoAnalysisTaskResponseBodyDataPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<GetVideoAnalysisTaskResponseBodyDataPayloadUsage>(model1);
      }
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataPayload() = default;
};
class GetVideoAnalysisTaskResponseBodyDataTaskRunInfo : public Darabonba::Model {
public:
  shared_ptr<bool> concurrentChargeEnable{};
  shared_ptr<long> responseTime{};

  GetVideoAnalysisTaskResponseBodyDataTaskRunInfo() {}

  explicit GetVideoAnalysisTaskResponseBodyDataTaskRunInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (concurrentChargeEnable) {
      res["concurrentChargeEnable"] = boost::any(*concurrentChargeEnable);
    }
    if (responseTime) {
      res["responseTime"] = boost::any(*responseTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("concurrentChargeEnable") != m.end() && !m["concurrentChargeEnable"].empty()) {
      concurrentChargeEnable = make_shared<bool>(boost::any_cast<bool>(m["concurrentChargeEnable"]));
    }
    if (m.find("responseTime") != m.end() && !m["responseTime"].empty()) {
      responseTime = make_shared<long>(boost::any_cast<long>(m["responseTime"]));
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyDataTaskRunInfo() = default;
};
class GetVideoAnalysisTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataHeader> header{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataPayload> payload{};
  shared_ptr<string> taskId{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyDataTaskRunInfo> taskRunInfo{};
  shared_ptr<string> taskStatus{};

  GetVideoAnalysisTaskResponseBodyData() {}

  explicit GetVideoAnalysisTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (taskRunInfo) {
      res["taskRunInfo"] = taskRunInfo ? boost::any(taskRunInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskStatus) {
      res["taskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        GetVideoAnalysisTaskResponseBodyDataHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<GetVideoAnalysisTaskResponseBodyDataHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        GetVideoAnalysisTaskResponseBodyDataPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<GetVideoAnalysisTaskResponseBodyDataPayload>(model1);
      }
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("taskRunInfo") != m.end() && !m["taskRunInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["taskRunInfo"].type()) {
        GetVideoAnalysisTaskResponseBodyDataTaskRunInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["taskRunInfo"]));
        taskRunInfo = make_shared<GetVideoAnalysisTaskResponseBodyDataTaskRunInfo>(model1);
      }
    }
    if (m.find("taskStatus") != m.end() && !m["taskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["taskStatus"]));
    }
  }


  virtual ~GetVideoAnalysisTaskResponseBodyData() = default;
};
class GetVideoAnalysisTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetVideoAnalysisTaskResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetVideoAnalysisTaskResponseBody() {}

  explicit GetVideoAnalysisTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetVideoAnalysisTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetVideoAnalysisTaskResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
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


  virtual ~GetVideoAnalysisTaskResponseBody() = default;
};
class GetVideoAnalysisTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVideoAnalysisTaskResponseBody> body{};

  GetVideoAnalysisTaskResponse() {}

  explicit GetVideoAnalysisTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetVideoAnalysisTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVideoAnalysisTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetVideoAnalysisTaskResponse() = default;
};
class ListAnalysisTagDetailByTaskIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> taskId{};

  ListAnalysisTagDetailByTaskIdRequest() {}

  explicit ListAnalysisTagDetailByTaskIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
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
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~ListAnalysisTagDetailByTaskIdRequest() = default;
};
class ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags : public Darabonba::Model {
public:
  shared_ptr<string> tagName{};
  shared_ptr<vector<string>> tags{};

  ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags() {}

  explicit ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagName) {
      res["tagName"] = boost::any(*tagName);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagName") != m.end() && !m["tagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["tagName"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags() = default;
};
class ListAnalysisTagDetailByTaskIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<vector<ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags>> contentTags{};
  shared_ptr<string> originResponse{};

  ListAnalysisTagDetailByTaskIdResponseBodyData() {}

  explicit ListAnalysisTagDetailByTaskIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (contentTags) {
      vector<boost::any> temp1;
      for(auto item1:*contentTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["contentTags"] = boost::any(temp1);
    }
    if (originResponse) {
      res["originResponse"] = boost::any(*originResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("contentTags") != m.end() && !m["contentTags"].empty()) {
      if (typeid(vector<boost::any>) == m["contentTags"].type()) {
        vector<ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["contentTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contentTags = make_shared<vector<ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags>>(expect1);
      }
    }
    if (m.find("originResponse") != m.end() && !m["originResponse"].empty()) {
      originResponse = make_shared<string>(boost::any_cast<string>(m["originResponse"]));
    }
  }


  virtual ~ListAnalysisTagDetailByTaskIdResponseBodyData() = default;
};
class ListAnalysisTagDetailByTaskIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListAnalysisTagDetailByTaskIdResponseBodyData>> data{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListAnalysisTagDetailByTaskIdResponseBody() {}

  explicit ListAnalysisTagDetailByTaskIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListAnalysisTagDetailByTaskIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAnalysisTagDetailByTaskIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAnalysisTagDetailByTaskIdResponseBodyData>>(expect1);
      }
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListAnalysisTagDetailByTaskIdResponseBody() = default;
};
class ListAnalysisTagDetailByTaskIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAnalysisTagDetailByTaskIdResponseBody> body{};

  ListAnalysisTagDetailByTaskIdResponse() {}

  explicit ListAnalysisTagDetailByTaskIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAnalysisTagDetailByTaskIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAnalysisTagDetailByTaskIdResponseBody>(model1);
      }
    }
  }


  virtual ~ListAnalysisTagDetailByTaskIdResponse() = default;
};
class ListHotTopicSummariesRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> hotTopic{};
  shared_ptr<string> hotTopicVersion{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListHotTopicSummariesRequest() {}

  explicit ListHotTopicSummariesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (hotTopic) {
      res["hotTopic"] = boost::any(*hotTopic);
    }
    if (hotTopicVersion) {
      res["hotTopicVersion"] = boost::any(*hotTopicVersion);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("hotTopic") != m.end() && !m["hotTopic"].empty()) {
      hotTopic = make_shared<string>(boost::any_cast<string>(m["hotTopic"]));
    }
    if (m.find("hotTopicVersion") != m.end() && !m["hotTopicVersion"].empty()) {
      hotTopicVersion = make_shared<string>(boost::any_cast<string>(m["hotTopicVersion"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListHotTopicSummariesRequest() = default;
};
class ListHotTopicSummariesResponseBodyDataNewsComments : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  ListHotTopicSummariesResponseBodyDataNewsComments() {}

  explicit ListHotTopicSummariesResponseBodyDataNewsComments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~ListHotTopicSummariesResponseBodyDataNewsComments() = default;
};
class ListHotTopicSummariesResponseBodyDataNews : public Darabonba::Model {
public:
  shared_ptr<vector<ListHotTopicSummariesResponseBodyDataNewsComments>> comments{};
  shared_ptr<string> content{};
  shared_ptr<string> pubTime{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  ListHotTopicSummariesResponseBodyDataNews() {}

  explicit ListHotTopicSummariesResponseBodyDataNews(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      vector<boost::any> temp1;
      for(auto item1:*comments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["comments"] = boost::any(temp1);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (pubTime) {
      res["pubTime"] = boost::any(*pubTime);
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
    if (m.find("comments") != m.end() && !m["comments"].empty()) {
      if (typeid(vector<boost::any>) == m["comments"].type()) {
        vector<ListHotTopicSummariesResponseBodyDataNewsComments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["comments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotTopicSummariesResponseBodyDataNewsComments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        comments = make_shared<vector<ListHotTopicSummariesResponseBodyDataNewsComments>>(expect1);
      }
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("pubTime") != m.end() && !m["pubTime"].empty()) {
      pubTime = make_shared<string>(boost::any_cast<string>(m["pubTime"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~ListHotTopicSummariesResponseBodyDataNews() = default;
};
class ListHotTopicSummariesResponseBodyDataSummarySummaries : public Darabonba::Model {
public:
  shared_ptr<string> summary{};
  shared_ptr<string> title{};

  ListHotTopicSummariesResponseBodyDataSummarySummaries() {}

  explicit ListHotTopicSummariesResponseBodyDataSummarySummaries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (summary) {
      res["summary"] = boost::any(*summary);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("summary") != m.end() && !m["summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["summary"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~ListHotTopicSummariesResponseBodyDataSummarySummaries() = default;
};
class ListHotTopicSummariesResponseBodyDataSummary : public Darabonba::Model {
public:
  shared_ptr<vector<ListHotTopicSummariesResponseBodyDataSummarySummaries>> summaries{};

  ListHotTopicSummariesResponseBodyDataSummary() {}

  explicit ListHotTopicSummariesResponseBodyDataSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (summaries) {
      vector<boost::any> temp1;
      for(auto item1:*summaries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["summaries"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("summaries") != m.end() && !m["summaries"].empty()) {
      if (typeid(vector<boost::any>) == m["summaries"].type()) {
        vector<ListHotTopicSummariesResponseBodyDataSummarySummaries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["summaries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotTopicSummariesResponseBodyDataSummarySummaries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        summaries = make_shared<vector<ListHotTopicSummariesResponseBodyDataSummarySummaries>>(expect1);
      }
    }
  }


  virtual ~ListHotTopicSummariesResponseBodyDataSummary() = default;
};
class ListHotTopicSummariesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> hotTopic{};
  shared_ptr<string> hotTopicVersion{};
  shared_ptr<double> hotValue{};
  shared_ptr<string> id{};
  shared_ptr<vector<ListHotTopicSummariesResponseBodyDataNews>> news{};
  shared_ptr<ListHotTopicSummariesResponseBodyDataSummary> summary{};
  shared_ptr<string> textSummary{};

  ListHotTopicSummariesResponseBodyData() {}

  explicit ListHotTopicSummariesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (hotTopic) {
      res["hotTopic"] = boost::any(*hotTopic);
    }
    if (hotTopicVersion) {
      res["hotTopicVersion"] = boost::any(*hotTopicVersion);
    }
    if (hotValue) {
      res["hotValue"] = boost::any(*hotValue);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (news) {
      vector<boost::any> temp1;
      for(auto item1:*news){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["news"] = boost::any(temp1);
    }
    if (summary) {
      res["summary"] = summary ? boost::any(summary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (textSummary) {
      res["textSummary"] = boost::any(*textSummary);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("hotTopic") != m.end() && !m["hotTopic"].empty()) {
      hotTopic = make_shared<string>(boost::any_cast<string>(m["hotTopic"]));
    }
    if (m.find("hotTopicVersion") != m.end() && !m["hotTopicVersion"].empty()) {
      hotTopicVersion = make_shared<string>(boost::any_cast<string>(m["hotTopicVersion"]));
    }
    if (m.find("hotValue") != m.end() && !m["hotValue"].empty()) {
      hotValue = make_shared<double>(boost::any_cast<double>(m["hotValue"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("news") != m.end() && !m["news"].empty()) {
      if (typeid(vector<boost::any>) == m["news"].type()) {
        vector<ListHotTopicSummariesResponseBodyDataNews> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["news"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotTopicSummariesResponseBodyDataNews model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        news = make_shared<vector<ListHotTopicSummariesResponseBodyDataNews>>(expect1);
      }
    }
    if (m.find("summary") != m.end() && !m["summary"].empty()) {
      if (typeid(map<string, boost::any>) == m["summary"].type()) {
        ListHotTopicSummariesResponseBodyDataSummary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["summary"]));
        summary = make_shared<ListHotTopicSummariesResponseBodyDataSummary>(model1);
      }
    }
    if (m.find("textSummary") != m.end() && !m["textSummary"].empty()) {
      textSummary = make_shared<string>(boost::any_cast<string>(m["textSummary"]));
    }
  }


  virtual ~ListHotTopicSummariesResponseBodyData() = default;
};
class ListHotTopicSummariesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListHotTopicSummariesResponseBodyData>> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListHotTopicSummariesResponseBody() {}

  explicit ListHotTopicSummariesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListHotTopicSummariesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotTopicSummariesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListHotTopicSummariesResponseBodyData>>(expect1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListHotTopicSummariesResponseBody() = default;
};
class ListHotTopicSummariesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHotTopicSummariesResponseBody> body{};

  ListHotTopicSummariesResponse() {}

  explicit ListHotTopicSummariesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHotTopicSummariesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHotTopicSummariesResponseBody>(model1);
      }
    }
  }


  virtual ~ListHotTopicSummariesResponse() = default;
};
class RunEnterpriseVocAnalysisRequestFilterTags : public Darabonba::Model {
public:
  shared_ptr<string> tagDefinePrompt{};
  shared_ptr<string> tagName{};

  RunEnterpriseVocAnalysisRequestFilterTags() {}

  explicit RunEnterpriseVocAnalysisRequestFilterTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagDefinePrompt) {
      res["tagDefinePrompt"] = boost::any(*tagDefinePrompt);
    }
    if (tagName) {
      res["tagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagDefinePrompt") != m.end() && !m["tagDefinePrompt"].empty()) {
      tagDefinePrompt = make_shared<string>(boost::any_cast<string>(m["tagDefinePrompt"]));
    }
    if (m.find("tagName") != m.end() && !m["tagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["tagName"]));
    }
  }


  virtual ~RunEnterpriseVocAnalysisRequestFilterTags() = default;
};
class RunEnterpriseVocAnalysisRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> tagDefinePrompt{};
  shared_ptr<string> tagName{};

  RunEnterpriseVocAnalysisRequestTags() {}

  explicit RunEnterpriseVocAnalysisRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagDefinePrompt) {
      res["tagDefinePrompt"] = boost::any(*tagDefinePrompt);
    }
    if (tagName) {
      res["tagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagDefinePrompt") != m.end() && !m["tagDefinePrompt"].empty()) {
      tagDefinePrompt = make_shared<string>(boost::any_cast<string>(m["tagDefinePrompt"]));
    }
    if (m.find("tagName") != m.end() && !m["tagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["tagName"]));
    }
  }


  virtual ~RunEnterpriseVocAnalysisRequestTags() = default;
};
class RunEnterpriseVocAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProxy{};
  shared_ptr<string> apiKey{};
  shared_ptr<string> content{};
  shared_ptr<string> extraInfo{};
  shared_ptr<vector<RunEnterpriseVocAnalysisRequestFilterTags>> filterTags{};
  shared_ptr<string> modelId{};
  shared_ptr<string> outputFormat{};
  shared_ptr<vector<RunEnterpriseVocAnalysisRequestTags>> tags{};
  shared_ptr<string> taskDescription{};

  RunEnterpriseVocAnalysisRequest() {}

  explicit RunEnterpriseVocAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProxy) {
      res["akProxy"] = boost::any(*akProxy);
    }
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (filterTags) {
      vector<boost::any> temp1;
      for(auto item1:*filterTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["filterTags"] = boost::any(temp1);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (outputFormat) {
      res["outputFormat"] = boost::any(*outputFormat);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (taskDescription) {
      res["taskDescription"] = boost::any(*taskDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("akProxy") != m.end() && !m["akProxy"].empty()) {
      akProxy = make_shared<string>(boost::any_cast<string>(m["akProxy"]));
    }
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("filterTags") != m.end() && !m["filterTags"].empty()) {
      if (typeid(vector<boost::any>) == m["filterTags"].type()) {
        vector<RunEnterpriseVocAnalysisRequestFilterTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["filterTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunEnterpriseVocAnalysisRequestFilterTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filterTags = make_shared<vector<RunEnterpriseVocAnalysisRequestFilterTags>>(expect1);
      }
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("outputFormat") != m.end() && !m["outputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["outputFormat"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<RunEnterpriseVocAnalysisRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunEnterpriseVocAnalysisRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<RunEnterpriseVocAnalysisRequestTags>>(expect1);
      }
    }
    if (m.find("taskDescription") != m.end() && !m["taskDescription"].empty()) {
      taskDescription = make_shared<string>(boost::any_cast<string>(m["taskDescription"]));
    }
  }


  virtual ~RunEnterpriseVocAnalysisRequest() = default;
};
class RunEnterpriseVocAnalysisShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProxy{};
  shared_ptr<string> apiKey{};
  shared_ptr<string> content{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> filterTagsShrink{};
  shared_ptr<string> modelId{};
  shared_ptr<string> outputFormat{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> taskDescription{};

  RunEnterpriseVocAnalysisShrinkRequest() {}

  explicit RunEnterpriseVocAnalysisShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProxy) {
      res["akProxy"] = boost::any(*akProxy);
    }
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (filterTagsShrink) {
      res["filterTags"] = boost::any(*filterTagsShrink);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (outputFormat) {
      res["outputFormat"] = boost::any(*outputFormat);
    }
    if (tagsShrink) {
      res["tags"] = boost::any(*tagsShrink);
    }
    if (taskDescription) {
      res["taskDescription"] = boost::any(*taskDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("akProxy") != m.end() && !m["akProxy"].empty()) {
      akProxy = make_shared<string>(boost::any_cast<string>(m["akProxy"]));
    }
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("filterTags") != m.end() && !m["filterTags"].empty()) {
      filterTagsShrink = make_shared<string>(boost::any_cast<string>(m["filterTags"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("outputFormat") != m.end() && !m["outputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["outputFormat"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
    if (m.find("taskDescription") != m.end() && !m["taskDescription"].empty()) {
      taskDescription = make_shared<string>(boost::any_cast<string>(m["taskDescription"]));
    }
  }


  virtual ~RunEnterpriseVocAnalysisShrinkRequest() = default;
};
class RunEnterpriseVocAnalysisResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunEnterpriseVocAnalysisResponseBodyHeader() {}

  explicit RunEnterpriseVocAnalysisResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
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
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunEnterpriseVocAnalysisResponseBodyHeader() = default;
};
class RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults : public Darabonba::Model {
public:
  shared_ptr<bool> hit{};
  shared_ptr<string> tagName{};
  shared_ptr<string> tagValue{};

  RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults() {}

  explicit RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hit) {
      res["hit"] = boost::any(*hit);
    }
    if (tagName) {
      res["tagName"] = boost::any(*tagName);
    }
    if (tagValue) {
      res["tagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("hit") != m.end() && !m["hit"].empty()) {
      hit = make_shared<bool>(boost::any_cast<bool>(m["hit"]));
    }
    if (m.find("tagName") != m.end() && !m["tagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["tagName"]));
    }
    if (m.find("tagValue") != m.end() && !m["tagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["tagValue"]));
    }
  }


  virtual ~RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults() = default;
};
class RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult : public Darabonba::Model {
public:
  shared_ptr<vector<RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults>> filterResults{};

  RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult() {}

  explicit RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterResults) {
      vector<boost::any> temp1;
      for(auto item1:*filterResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["filterResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filterResults") != m.end() && !m["filterResults"].empty()) {
      if (typeid(vector<boost::any>) == m["filterResults"].type()) {
        vector<RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["filterResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filterResults = make_shared<vector<RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResultFilterResults>>(expect1);
      }
    }
  }


  virtual ~RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult() = default;
};
class RunEnterpriseVocAnalysisResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult> filterResult{};
  shared_ptr<string> text{};

  RunEnterpriseVocAnalysisResponseBodyPayloadOutput() {}

  explicit RunEnterpriseVocAnalysisResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterResult) {
      res["filterResult"] = filterResult ? boost::any(filterResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filterResult") != m.end() && !m["filterResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterResult"].type()) {
        RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterResult"]));
        filterResult = make_shared<RunEnterpriseVocAnalysisResponseBodyPayloadOutputFilterResult>(model1);
      }
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunEnterpriseVocAnalysisResponseBodyPayloadOutput() = default;
};
class RunEnterpriseVocAnalysisResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunEnterpriseVocAnalysisResponseBodyPayloadUsage() {}

  explicit RunEnterpriseVocAnalysisResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunEnterpriseVocAnalysisResponseBodyPayloadUsage() = default;
};
class RunEnterpriseVocAnalysisResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunEnterpriseVocAnalysisResponseBodyPayloadOutput> output{};
  shared_ptr<RunEnterpriseVocAnalysisResponseBodyPayloadUsage> usage{};

  RunEnterpriseVocAnalysisResponseBodyPayload() {}

  explicit RunEnterpriseVocAnalysisResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunEnterpriseVocAnalysisResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunEnterpriseVocAnalysisResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunEnterpriseVocAnalysisResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunEnterpriseVocAnalysisResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunEnterpriseVocAnalysisResponseBodyPayload() = default;
};
class RunEnterpriseVocAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<RunEnterpriseVocAnalysisResponseBodyHeader> header{};
  shared_ptr<RunEnterpriseVocAnalysisResponseBodyPayload> payload{};
  shared_ptr<string> requestId{};

  RunEnterpriseVocAnalysisResponseBody() {}

  explicit RunEnterpriseVocAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunEnterpriseVocAnalysisResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunEnterpriseVocAnalysisResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunEnterpriseVocAnalysisResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunEnterpriseVocAnalysisResponseBodyPayload>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~RunEnterpriseVocAnalysisResponseBody() = default;
};
class RunEnterpriseVocAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunEnterpriseVocAnalysisResponseBody> body{};

  RunEnterpriseVocAnalysisResponse() {}

  explicit RunEnterpriseVocAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunEnterpriseVocAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunEnterpriseVocAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~RunEnterpriseVocAnalysisResponse() = default;
};
class RunHotTopicChatRequestMessages : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> role{};

  RunHotTopicChatRequestMessages() {}

  explicit RunHotTopicChatRequestMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~RunHotTopicChatRequestMessages() = default;
};
class RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights : public Darabonba::Model {
public:
  shared_ptr<string> dimension{};
  shared_ptr<long> weight{};

  RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights() {}

  explicit RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimension) {
      res["dimension"] = boost::any(*dimension);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dimension") != m.end() && !m["dimension"].empty()) {
      dimension = make_shared<string>(boost::any_cast<string>(m["dimension"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights() = default;
};
class RunHotTopicChatRequestStepForBroadcastContentConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<vector<RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights>> customHotValueWeights{};
  shared_ptr<long> topicCount{};

  RunHotTopicChatRequestStepForBroadcastContentConfig() {}

  explicit RunHotTopicChatRequestStepForBroadcastContentConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["categories"] = boost::any(*categories);
    }
    if (customHotValueWeights) {
      vector<boost::any> temp1;
      for(auto item1:*customHotValueWeights){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customHotValueWeights"] = boost::any(temp1);
    }
    if (topicCount) {
      res["topicCount"] = boost::any(*topicCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categories") != m.end() && !m["categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("customHotValueWeights") != m.end() && !m["customHotValueWeights"].empty()) {
      if (typeid(vector<boost::any>) == m["customHotValueWeights"].type()) {
        vector<RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customHotValueWeights"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customHotValueWeights = make_shared<vector<RunHotTopicChatRequestStepForBroadcastContentConfigCustomHotValueWeights>>(expect1);
      }
    }
    if (m.find("topicCount") != m.end() && !m["topicCount"].empty()) {
      topicCount = make_shared<long>(boost::any_cast<long>(m["topicCount"]));
    }
  }


  virtual ~RunHotTopicChatRequestStepForBroadcastContentConfig() = default;
};
class RunHotTopicChatRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<vector<string>> generateOptions{};
  shared_ptr<string> hotTopicVersion{};
  shared_ptr<vector<string>> hotTopics{};
  shared_ptr<long> imageCount{};
  shared_ptr<vector<RunHotTopicChatRequestMessages>> messages{};
  shared_ptr<string> modelCustomPromptTemplate{};
  shared_ptr<string> modelId{};
  shared_ptr<string> originalSessionId{};
  shared_ptr<string> prompt{};
  shared_ptr<RunHotTopicChatRequestStepForBroadcastContentConfig> stepForBroadcastContentConfig{};
  shared_ptr<string> taskId{};

  RunHotTopicChatRequest() {}

  explicit RunHotTopicChatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (generateOptions) {
      res["generateOptions"] = boost::any(*generateOptions);
    }
    if (hotTopicVersion) {
      res["hotTopicVersion"] = boost::any(*hotTopicVersion);
    }
    if (hotTopics) {
      res["hotTopics"] = boost::any(*hotTopics);
    }
    if (imageCount) {
      res["imageCount"] = boost::any(*imageCount);
    }
    if (messages) {
      vector<boost::any> temp1;
      for(auto item1:*messages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["messages"] = boost::any(temp1);
    }
    if (modelCustomPromptTemplate) {
      res["modelCustomPromptTemplate"] = boost::any(*modelCustomPromptTemplate);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (originalSessionId) {
      res["originalSessionId"] = boost::any(*originalSessionId);
    }
    if (prompt) {
      res["prompt"] = boost::any(*prompt);
    }
    if (stepForBroadcastContentConfig) {
      res["stepForBroadcastContentConfig"] = stepForBroadcastContentConfig ? boost::any(stepForBroadcastContentConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("generateOptions") != m.end() && !m["generateOptions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["generateOptions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["generateOptions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      generateOptions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("hotTopicVersion") != m.end() && !m["hotTopicVersion"].empty()) {
      hotTopicVersion = make_shared<string>(boost::any_cast<string>(m["hotTopicVersion"]));
    }
    if (m.find("hotTopics") != m.end() && !m["hotTopics"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["hotTopics"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["hotTopics"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hotTopics = make_shared<vector<string>>(toVec1);
    }
    if (m.find("imageCount") != m.end() && !m["imageCount"].empty()) {
      imageCount = make_shared<long>(boost::any_cast<long>(m["imageCount"]));
    }
    if (m.find("messages") != m.end() && !m["messages"].empty()) {
      if (typeid(vector<boost::any>) == m["messages"].type()) {
        vector<RunHotTopicChatRequestMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunHotTopicChatRequestMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<RunHotTopicChatRequestMessages>>(expect1);
      }
    }
    if (m.find("modelCustomPromptTemplate") != m.end() && !m["modelCustomPromptTemplate"].empty()) {
      modelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplate"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("originalSessionId") != m.end() && !m["originalSessionId"].empty()) {
      originalSessionId = make_shared<string>(boost::any_cast<string>(m["originalSessionId"]));
    }
    if (m.find("prompt") != m.end() && !m["prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["prompt"]));
    }
    if (m.find("stepForBroadcastContentConfig") != m.end() && !m["stepForBroadcastContentConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["stepForBroadcastContentConfig"].type()) {
        RunHotTopicChatRequestStepForBroadcastContentConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["stepForBroadcastContentConfig"]));
        stepForBroadcastContentConfig = make_shared<RunHotTopicChatRequestStepForBroadcastContentConfig>(model1);
      }
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~RunHotTopicChatRequest() = default;
};
class RunHotTopicChatShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> generateOptionsShrink{};
  shared_ptr<string> hotTopicVersion{};
  shared_ptr<string> hotTopicsShrink{};
  shared_ptr<long> imageCount{};
  shared_ptr<string> messagesShrink{};
  shared_ptr<string> modelCustomPromptTemplate{};
  shared_ptr<string> modelId{};
  shared_ptr<string> originalSessionId{};
  shared_ptr<string> prompt{};
  shared_ptr<string> stepForBroadcastContentConfigShrink{};
  shared_ptr<string> taskId{};

  RunHotTopicChatShrinkRequest() {}

  explicit RunHotTopicChatShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (generateOptionsShrink) {
      res["generateOptions"] = boost::any(*generateOptionsShrink);
    }
    if (hotTopicVersion) {
      res["hotTopicVersion"] = boost::any(*hotTopicVersion);
    }
    if (hotTopicsShrink) {
      res["hotTopics"] = boost::any(*hotTopicsShrink);
    }
    if (imageCount) {
      res["imageCount"] = boost::any(*imageCount);
    }
    if (messagesShrink) {
      res["messages"] = boost::any(*messagesShrink);
    }
    if (modelCustomPromptTemplate) {
      res["modelCustomPromptTemplate"] = boost::any(*modelCustomPromptTemplate);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (originalSessionId) {
      res["originalSessionId"] = boost::any(*originalSessionId);
    }
    if (prompt) {
      res["prompt"] = boost::any(*prompt);
    }
    if (stepForBroadcastContentConfigShrink) {
      res["stepForBroadcastContentConfig"] = boost::any(*stepForBroadcastContentConfigShrink);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("generateOptions") != m.end() && !m["generateOptions"].empty()) {
      generateOptionsShrink = make_shared<string>(boost::any_cast<string>(m["generateOptions"]));
    }
    if (m.find("hotTopicVersion") != m.end() && !m["hotTopicVersion"].empty()) {
      hotTopicVersion = make_shared<string>(boost::any_cast<string>(m["hotTopicVersion"]));
    }
    if (m.find("hotTopics") != m.end() && !m["hotTopics"].empty()) {
      hotTopicsShrink = make_shared<string>(boost::any_cast<string>(m["hotTopics"]));
    }
    if (m.find("imageCount") != m.end() && !m["imageCount"].empty()) {
      imageCount = make_shared<long>(boost::any_cast<long>(m["imageCount"]));
    }
    if (m.find("messages") != m.end() && !m["messages"].empty()) {
      messagesShrink = make_shared<string>(boost::any_cast<string>(m["messages"]));
    }
    if (m.find("modelCustomPromptTemplate") != m.end() && !m["modelCustomPromptTemplate"].empty()) {
      modelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplate"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("originalSessionId") != m.end() && !m["originalSessionId"].empty()) {
      originalSessionId = make_shared<string>(boost::any_cast<string>(m["originalSessionId"]));
    }
    if (m.find("prompt") != m.end() && !m["prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["prompt"]));
    }
    if (m.find("stepForBroadcastContentConfig") != m.end() && !m["stepForBroadcastContentConfig"].empty()) {
      stepForBroadcastContentConfigShrink = make_shared<string>(boost::any_cast<string>(m["stepForBroadcastContentConfig"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~RunHotTopicChatShrinkRequest() = default;
};
class RunHotTopicChatResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunHotTopicChatResponseBodyHeader() {}

  explicit RunHotTopicChatResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
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
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunHotTopicChatResponseBodyHeader() = default;
};
class RunHotTopicChatResponseBodyPayloadOutputArticles : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> pubTime{};
  shared_ptr<double> score{};
  shared_ptr<string> searchSourceName{};
  shared_ptr<bool> select{};
  shared_ptr<string> summary{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  RunHotTopicChatResponseBodyPayloadOutputArticles() {}

  explicit RunHotTopicChatResponseBodyPayloadOutputArticles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (pubTime) {
      res["pubTime"] = boost::any(*pubTime);
    }
    if (score) {
      res["score"] = boost::any(*score);
    }
    if (searchSourceName) {
      res["searchSourceName"] = boost::any(*searchSourceName);
    }
    if (select) {
      res["select"] = boost::any(*select);
    }
    if (summary) {
      res["summary"] = boost::any(*summary);
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
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("pubTime") != m.end() && !m["pubTime"].empty()) {
      pubTime = make_shared<string>(boost::any_cast<string>(m["pubTime"]));
    }
    if (m.find("score") != m.end() && !m["score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["score"]));
    }
    if (m.find("searchSourceName") != m.end() && !m["searchSourceName"].empty()) {
      searchSourceName = make_shared<string>(boost::any_cast<string>(m["searchSourceName"]));
    }
    if (m.find("select") != m.end() && !m["select"].empty()) {
      select = make_shared<bool>(boost::any_cast<bool>(m["select"]));
    }
    if (m.find("summary") != m.end() && !m["summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["summary"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~RunHotTopicChatResponseBodyPayloadOutputArticles() = default;
};
class RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages() {}

  explicit RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages() = default;
};
class RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews() {}

  explicit RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews() = default;
};
class RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries : public Darabonba::Model {
public:
  shared_ptr<double> customHotValue{};
  shared_ptr<string> customTextSummary{};
  shared_ptr<string> hotTopic{};
  shared_ptr<string> hotTopicVersion{};
  shared_ptr<double> hotValue{};
  shared_ptr<vector<RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages>> images{};
  shared_ptr<vector<RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews>> news{};
  shared_ptr<string> textSummary{};

  RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries() {}

  explicit RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customHotValue) {
      res["customHotValue"] = boost::any(*customHotValue);
    }
    if (customTextSummary) {
      res["customTextSummary"] = boost::any(*customTextSummary);
    }
    if (hotTopic) {
      res["hotTopic"] = boost::any(*hotTopic);
    }
    if (hotTopicVersion) {
      res["hotTopicVersion"] = boost::any(*hotTopicVersion);
    }
    if (hotValue) {
      res["hotValue"] = boost::any(*hotValue);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["images"] = boost::any(temp1);
    }
    if (news) {
      vector<boost::any> temp1;
      for(auto item1:*news){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["news"] = boost::any(temp1);
    }
    if (textSummary) {
      res["textSummary"] = boost::any(*textSummary);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customHotValue") != m.end() && !m["customHotValue"].empty()) {
      customHotValue = make_shared<double>(boost::any_cast<double>(m["customHotValue"]));
    }
    if (m.find("customTextSummary") != m.end() && !m["customTextSummary"].empty()) {
      customTextSummary = make_shared<string>(boost::any_cast<string>(m["customTextSummary"]));
    }
    if (m.find("hotTopic") != m.end() && !m["hotTopic"].empty()) {
      hotTopic = make_shared<string>(boost::any_cast<string>(m["hotTopic"]));
    }
    if (m.find("hotTopicVersion") != m.end() && !m["hotTopicVersion"].empty()) {
      hotTopicVersion = make_shared<string>(boost::any_cast<string>(m["hotTopicVersion"]));
    }
    if (m.find("hotValue") != m.end() && !m["hotValue"].empty()) {
      hotValue = make_shared<double>(boost::any_cast<double>(m["hotValue"]));
    }
    if (m.find("images") != m.end() && !m["images"].empty()) {
      if (typeid(vector<boost::any>) == m["images"].type()) {
        vector<RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages>>(expect1);
      }
    }
    if (m.find("news") != m.end() && !m["news"].empty()) {
      if (typeid(vector<boost::any>) == m["news"].type()) {
        vector<RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["news"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        news = make_shared<vector<RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews>>(expect1);
      }
    }
    if (m.find("textSummary") != m.end() && !m["textSummary"].empty()) {
      textSummary = make_shared<string>(boost::any_cast<string>(m["textSummary"]));
    }
  }


  virtual ~RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries() = default;
};
class RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias : public Darabonba::Model {
public:
  shared_ptr<string> fileUrl{};
  shared_ptr<string> mediaType{};
  shared_ptr<double> sortScore{};

  RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias() {}

  explicit RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileUrl) {
      res["fileUrl"] = boost::any(*fileUrl);
    }
    if (mediaType) {
      res["mediaType"] = boost::any(*mediaType);
    }
    if (sortScore) {
      res["sortScore"] = boost::any(*sortScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["fileUrl"]));
    }
    if (m.find("mediaType") != m.end() && !m["mediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["mediaType"]));
    }
    if (m.find("sortScore") != m.end() && !m["sortScore"].empty()) {
      sortScore = make_shared<double>(boost::any_cast<double>(m["sortScore"]));
    }
  }


  virtual ~RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias() = default;
};
class RunHotTopicChatResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<vector<RunHotTopicChatResponseBodyPayloadOutputArticles>> articles{};
  shared_ptr<vector<RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries>> hotTopicSummaries{};
  shared_ptr<vector<RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias>> multimodalMedias{};
  shared_ptr<vector<string>> recommendQueries{};
  shared_ptr<string> searchQuery{};
  shared_ptr<string> text{};

  RunHotTopicChatResponseBodyPayloadOutput() {}

  explicit RunHotTopicChatResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["articles"] = boost::any(temp1);
    }
    if (hotTopicSummaries) {
      vector<boost::any> temp1;
      for(auto item1:*hotTopicSummaries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hotTopicSummaries"] = boost::any(temp1);
    }
    if (multimodalMedias) {
      vector<boost::any> temp1;
      for(auto item1:*multimodalMedias){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["multimodalMedias"] = boost::any(temp1);
    }
    if (recommendQueries) {
      res["recommendQueries"] = boost::any(*recommendQueries);
    }
    if (searchQuery) {
      res["searchQuery"] = boost::any(*searchQuery);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("articles") != m.end() && !m["articles"].empty()) {
      if (typeid(vector<boost::any>) == m["articles"].type()) {
        vector<RunHotTopicChatResponseBodyPayloadOutputArticles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["articles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunHotTopicChatResponseBodyPayloadOutputArticles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        articles = make_shared<vector<RunHotTopicChatResponseBodyPayloadOutputArticles>>(expect1);
      }
    }
    if (m.find("hotTopicSummaries") != m.end() && !m["hotTopicSummaries"].empty()) {
      if (typeid(vector<boost::any>) == m["hotTopicSummaries"].type()) {
        vector<RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hotTopicSummaries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hotTopicSummaries = make_shared<vector<RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries>>(expect1);
      }
    }
    if (m.find("multimodalMedias") != m.end() && !m["multimodalMedias"].empty()) {
      if (typeid(vector<boost::any>) == m["multimodalMedias"].type()) {
        vector<RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["multimodalMedias"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        multimodalMedias = make_shared<vector<RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias>>(expect1);
      }
    }
    if (m.find("recommendQueries") != m.end() && !m["recommendQueries"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["recommendQueries"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["recommendQueries"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      recommendQueries = make_shared<vector<string>>(toVec1);
    }
    if (m.find("searchQuery") != m.end() && !m["searchQuery"].empty()) {
      searchQuery = make_shared<string>(boost::any_cast<string>(m["searchQuery"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunHotTopicChatResponseBodyPayloadOutput() = default;
};
class RunHotTopicChatResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunHotTopicChatResponseBodyPayloadUsage() {}

  explicit RunHotTopicChatResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunHotTopicChatResponseBodyPayloadUsage() = default;
};
class RunHotTopicChatResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunHotTopicChatResponseBodyPayloadOutput> output{};
  shared_ptr<RunHotTopicChatResponseBodyPayloadUsage> usage{};

  RunHotTopicChatResponseBodyPayload() {}

  explicit RunHotTopicChatResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunHotTopicChatResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunHotTopicChatResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunHotTopicChatResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunHotTopicChatResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunHotTopicChatResponseBodyPayload() = default;
};
class RunHotTopicChatResponseBody : public Darabonba::Model {
public:
  shared_ptr<RunHotTopicChatResponseBodyHeader> header{};
  shared_ptr<RunHotTopicChatResponseBodyPayload> payload{};
  shared_ptr<string> requestId{};

  RunHotTopicChatResponseBody() {}

  explicit RunHotTopicChatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunHotTopicChatResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunHotTopicChatResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunHotTopicChatResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunHotTopicChatResponseBodyPayload>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~RunHotTopicChatResponseBody() = default;
};
class RunHotTopicChatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunHotTopicChatResponseBody> body{};

  RunHotTopicChatResponse() {}

  explicit RunHotTopicChatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunHotTopicChatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunHotTopicChatResponseBody>(model1);
      }
    }
  }


  virtual ~RunHotTopicChatResponse() = default;
};
class RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig : public Darabonba::Model {
public:
  shared_ptr<long> summaryImageCount{};
  shared_ptr<string> summaryModel{};
  shared_ptr<string> summaryPrompt{};

  RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig() {}

  explicit RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (summaryImageCount) {
      res["summaryImageCount"] = boost::any(*summaryImageCount);
    }
    if (summaryModel) {
      res["summaryModel"] = boost::any(*summaryModel);
    }
    if (summaryPrompt) {
      res["summaryPrompt"] = boost::any(*summaryPrompt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("summaryImageCount") != m.end() && !m["summaryImageCount"].empty()) {
      summaryImageCount = make_shared<long>(boost::any_cast<long>(m["summaryImageCount"]));
    }
    if (m.find("summaryModel") != m.end() && !m["summaryModel"].empty()) {
      summaryModel = make_shared<string>(boost::any_cast<string>(m["summaryModel"]));
    }
    if (m.find("summaryPrompt") != m.end() && !m["summaryPrompt"].empty()) {
      summaryPrompt = make_shared<string>(boost::any_cast<string>(m["summaryPrompt"]));
    }
  }


  virtual ~RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig() = default;
};
class RunHotTopicSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> hotTopicVersion{};
  shared_ptr<RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig> stepForCustomSummaryStyleConfig{};
  shared_ptr<vector<string>> topicIds{};

  RunHotTopicSummaryRequest() {}

  explicit RunHotTopicSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hotTopicVersion) {
      res["hotTopicVersion"] = boost::any(*hotTopicVersion);
    }
    if (stepForCustomSummaryStyleConfig) {
      res["stepForCustomSummaryStyleConfig"] = stepForCustomSummaryStyleConfig ? boost::any(stepForCustomSummaryStyleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topicIds) {
      res["topicIds"] = boost::any(*topicIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("hotTopicVersion") != m.end() && !m["hotTopicVersion"].empty()) {
      hotTopicVersion = make_shared<string>(boost::any_cast<string>(m["hotTopicVersion"]));
    }
    if (m.find("stepForCustomSummaryStyleConfig") != m.end() && !m["stepForCustomSummaryStyleConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["stepForCustomSummaryStyleConfig"].type()) {
        RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["stepForCustomSummaryStyleConfig"]));
        stepForCustomSummaryStyleConfig = make_shared<RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig>(model1);
      }
    }
    if (m.find("topicIds") != m.end() && !m["topicIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["topicIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["topicIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      topicIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RunHotTopicSummaryRequest() = default;
};
class RunHotTopicSummaryShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> hotTopicVersion{};
  shared_ptr<string> stepForCustomSummaryStyleConfigShrink{};
  shared_ptr<string> topicIdsShrink{};

  RunHotTopicSummaryShrinkRequest() {}

  explicit RunHotTopicSummaryShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hotTopicVersion) {
      res["hotTopicVersion"] = boost::any(*hotTopicVersion);
    }
    if (stepForCustomSummaryStyleConfigShrink) {
      res["stepForCustomSummaryStyleConfig"] = boost::any(*stepForCustomSummaryStyleConfigShrink);
    }
    if (topicIdsShrink) {
      res["topicIds"] = boost::any(*topicIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("hotTopicVersion") != m.end() && !m["hotTopicVersion"].empty()) {
      hotTopicVersion = make_shared<string>(boost::any_cast<string>(m["hotTopicVersion"]));
    }
    if (m.find("stepForCustomSummaryStyleConfig") != m.end() && !m["stepForCustomSummaryStyleConfig"].empty()) {
      stepForCustomSummaryStyleConfigShrink = make_shared<string>(boost::any_cast<string>(m["stepForCustomSummaryStyleConfig"]));
    }
    if (m.find("topicIds") != m.end() && !m["topicIds"].empty()) {
      topicIdsShrink = make_shared<string>(boost::any_cast<string>(m["topicIds"]));
    }
  }


  virtual ~RunHotTopicSummaryShrinkRequest() = default;
};
class RunHotTopicSummaryResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunHotTopicSummaryResponseBodyHeader() {}

  explicit RunHotTopicSummaryResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
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
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunHotTopicSummaryResponseBodyHeader() = default;
};
class RunHotTopicSummaryResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};
  shared_ptr<string> topicId{};

  RunHotTopicSummaryResponseBodyPayloadOutput() {}

  explicit RunHotTopicSummaryResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (topicId) {
      res["topicId"] = boost::any(*topicId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("topicId") != m.end() && !m["topicId"].empty()) {
      topicId = make_shared<string>(boost::any_cast<string>(m["topicId"]));
    }
  }


  virtual ~RunHotTopicSummaryResponseBodyPayloadOutput() = default;
};
class RunHotTopicSummaryResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunHotTopicSummaryResponseBodyPayloadUsage() {}

  explicit RunHotTopicSummaryResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunHotTopicSummaryResponseBodyPayloadUsage() = default;
};
class RunHotTopicSummaryResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunHotTopicSummaryResponseBodyPayloadOutput> output{};
  shared_ptr<RunHotTopicSummaryResponseBodyPayloadUsage> usage{};

  RunHotTopicSummaryResponseBodyPayload() {}

  explicit RunHotTopicSummaryResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunHotTopicSummaryResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunHotTopicSummaryResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunHotTopicSummaryResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunHotTopicSummaryResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunHotTopicSummaryResponseBodyPayload() = default;
};
class RunHotTopicSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<RunHotTopicSummaryResponseBodyHeader> header{};
  shared_ptr<RunHotTopicSummaryResponseBodyPayload> payload{};
  shared_ptr<string> requestId{};

  RunHotTopicSummaryResponseBody() {}

  explicit RunHotTopicSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunHotTopicSummaryResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunHotTopicSummaryResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunHotTopicSummaryResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunHotTopicSummaryResponseBodyPayload>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~RunHotTopicSummaryResponseBody() = default;
};
class RunHotTopicSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunHotTopicSummaryResponseBody> body{};

  RunHotTopicSummaryResponse() {}

  explicit RunHotTopicSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunHotTopicSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunHotTopicSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~RunHotTopicSummaryResponse() = default;
};
class RunMarketingInformationExtractRequest : public Darabonba::Model {
public:
  shared_ptr<string> customPrompt{};
  shared_ptr<string> extractType{};
  shared_ptr<string> modelId{};
  shared_ptr<vector<string>> sourceMaterials{};

  RunMarketingInformationExtractRequest() {}

  explicit RunMarketingInformationExtractRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customPrompt) {
      res["customPrompt"] = boost::any(*customPrompt);
    }
    if (extractType) {
      res["extractType"] = boost::any(*extractType);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (sourceMaterials) {
      res["sourceMaterials"] = boost::any(*sourceMaterials);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customPrompt") != m.end() && !m["customPrompt"].empty()) {
      customPrompt = make_shared<string>(boost::any_cast<string>(m["customPrompt"]));
    }
    if (m.find("extractType") != m.end() && !m["extractType"].empty()) {
      extractType = make_shared<string>(boost::any_cast<string>(m["extractType"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("sourceMaterials") != m.end() && !m["sourceMaterials"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sourceMaterials"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sourceMaterials"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceMaterials = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RunMarketingInformationExtractRequest() = default;
};
class RunMarketingInformationExtractShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> customPrompt{};
  shared_ptr<string> extractType{};
  shared_ptr<string> modelId{};
  shared_ptr<string> sourceMaterialsShrink{};

  RunMarketingInformationExtractShrinkRequest() {}

  explicit RunMarketingInformationExtractShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customPrompt) {
      res["customPrompt"] = boost::any(*customPrompt);
    }
    if (extractType) {
      res["extractType"] = boost::any(*extractType);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (sourceMaterialsShrink) {
      res["sourceMaterials"] = boost::any(*sourceMaterialsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customPrompt") != m.end() && !m["customPrompt"].empty()) {
      customPrompt = make_shared<string>(boost::any_cast<string>(m["customPrompt"]));
    }
    if (m.find("extractType") != m.end() && !m["extractType"].empty()) {
      extractType = make_shared<string>(boost::any_cast<string>(m["extractType"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("sourceMaterials") != m.end() && !m["sourceMaterials"].empty()) {
      sourceMaterialsShrink = make_shared<string>(boost::any_cast<string>(m["sourceMaterials"]));
    }
  }


  virtual ~RunMarketingInformationExtractShrinkRequest() = default;
};
class RunMarketingInformationExtractResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunMarketingInformationExtractResponseBodyHeader() {}

  explicit RunMarketingInformationExtractResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunMarketingInformationExtractResponseBodyHeader() = default;
};
class RunMarketingInformationExtractResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  RunMarketingInformationExtractResponseBodyPayloadOutput() {}

  explicit RunMarketingInformationExtractResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunMarketingInformationExtractResponseBodyPayloadOutput() = default;
};
class RunMarketingInformationExtractResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunMarketingInformationExtractResponseBodyPayloadUsage() {}

  explicit RunMarketingInformationExtractResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunMarketingInformationExtractResponseBodyPayloadUsage() = default;
};
class RunMarketingInformationExtractResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunMarketingInformationExtractResponseBodyPayloadOutput> output{};
  shared_ptr<RunMarketingInformationExtractResponseBodyPayloadUsage> usage{};

  RunMarketingInformationExtractResponseBodyPayload() {}

  explicit RunMarketingInformationExtractResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunMarketingInformationExtractResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunMarketingInformationExtractResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunMarketingInformationExtractResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunMarketingInformationExtractResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunMarketingInformationExtractResponseBodyPayload() = default;
};
class RunMarketingInformationExtractResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> end{};
  shared_ptr<RunMarketingInformationExtractResponseBodyHeader> header{};
  shared_ptr<RunMarketingInformationExtractResponseBodyPayload> payload{};

  RunMarketingInformationExtractResponseBody() {}

  explicit RunMarketingInformationExtractResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<bool>(boost::any_cast<bool>(m["end"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunMarketingInformationExtractResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunMarketingInformationExtractResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunMarketingInformationExtractResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunMarketingInformationExtractResponseBodyPayload>(model1);
      }
    }
  }


  virtual ~RunMarketingInformationExtractResponseBody() = default;
};
class RunMarketingInformationExtractResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunMarketingInformationExtractResponseBody> body{};

  RunMarketingInformationExtractResponse() {}

  explicit RunMarketingInformationExtractResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunMarketingInformationExtractResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunMarketingInformationExtractResponseBody>(model1);
      }
    }
  }


  virtual ~RunMarketingInformationExtractResponse() = default;
};
class RunMarketingInformationWritingRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiKey{};
  shared_ptr<string> customLimitation{};
  shared_ptr<string> customPrompt{};
  shared_ptr<string> inputExample{};
  shared_ptr<string> modelId{};
  shared_ptr<string> outputExample{};
  shared_ptr<string> sourceMaterial{};
  shared_ptr<string> writingType{};

  RunMarketingInformationWritingRequest() {}

  explicit RunMarketingInformationWritingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (customLimitation) {
      res["customLimitation"] = boost::any(*customLimitation);
    }
    if (customPrompt) {
      res["customPrompt"] = boost::any(*customPrompt);
    }
    if (inputExample) {
      res["inputExample"] = boost::any(*inputExample);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (outputExample) {
      res["outputExample"] = boost::any(*outputExample);
    }
    if (sourceMaterial) {
      res["sourceMaterial"] = boost::any(*sourceMaterial);
    }
    if (writingType) {
      res["writingType"] = boost::any(*writingType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("customLimitation") != m.end() && !m["customLimitation"].empty()) {
      customLimitation = make_shared<string>(boost::any_cast<string>(m["customLimitation"]));
    }
    if (m.find("customPrompt") != m.end() && !m["customPrompt"].empty()) {
      customPrompt = make_shared<string>(boost::any_cast<string>(m["customPrompt"]));
    }
    if (m.find("inputExample") != m.end() && !m["inputExample"].empty()) {
      inputExample = make_shared<string>(boost::any_cast<string>(m["inputExample"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("outputExample") != m.end() && !m["outputExample"].empty()) {
      outputExample = make_shared<string>(boost::any_cast<string>(m["outputExample"]));
    }
    if (m.find("sourceMaterial") != m.end() && !m["sourceMaterial"].empty()) {
      sourceMaterial = make_shared<string>(boost::any_cast<string>(m["sourceMaterial"]));
    }
    if (m.find("writingType") != m.end() && !m["writingType"].empty()) {
      writingType = make_shared<string>(boost::any_cast<string>(m["writingType"]));
    }
  }


  virtual ~RunMarketingInformationWritingRequest() = default;
};
class RunMarketingInformationWritingResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunMarketingInformationWritingResponseBodyHeader() {}

  explicit RunMarketingInformationWritingResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
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
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunMarketingInformationWritingResponseBodyHeader() = default;
};
class RunMarketingInformationWritingResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  RunMarketingInformationWritingResponseBodyPayloadOutput() {}

  explicit RunMarketingInformationWritingResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunMarketingInformationWritingResponseBodyPayloadOutput() = default;
};
class RunMarketingInformationWritingResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunMarketingInformationWritingResponseBodyPayloadUsage() {}

  explicit RunMarketingInformationWritingResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunMarketingInformationWritingResponseBodyPayloadUsage() = default;
};
class RunMarketingInformationWritingResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunMarketingInformationWritingResponseBodyPayloadOutput> output{};
  shared_ptr<RunMarketingInformationWritingResponseBodyPayloadUsage> usage{};

  RunMarketingInformationWritingResponseBodyPayload() {}

  explicit RunMarketingInformationWritingResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunMarketingInformationWritingResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunMarketingInformationWritingResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunMarketingInformationWritingResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunMarketingInformationWritingResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunMarketingInformationWritingResponseBodyPayload() = default;
};
class RunMarketingInformationWritingResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> end{};
  shared_ptr<RunMarketingInformationWritingResponseBodyHeader> header{};
  shared_ptr<RunMarketingInformationWritingResponseBodyPayload> payload{};

  RunMarketingInformationWritingResponseBody() {}

  explicit RunMarketingInformationWritingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<bool>(boost::any_cast<bool>(m["end"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunMarketingInformationWritingResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunMarketingInformationWritingResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunMarketingInformationWritingResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunMarketingInformationWritingResponseBodyPayload>(model1);
      }
    }
  }


  virtual ~RunMarketingInformationWritingResponseBody() = default;
};
class RunMarketingInformationWritingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunMarketingInformationWritingResponseBody> body{};

  RunMarketingInformationWritingResponse() {}

  explicit RunMarketingInformationWritingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunMarketingInformationWritingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunMarketingInformationWritingResponseBody>(model1);
      }
    }
  }


  virtual ~RunMarketingInformationWritingResponse() = default;
};
class RunNetworkContentAuditRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> tagDefinePrompt{};
  shared_ptr<string> tagName{};

  RunNetworkContentAuditRequestTags() {}

  explicit RunNetworkContentAuditRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagDefinePrompt) {
      res["tagDefinePrompt"] = boost::any(*tagDefinePrompt);
    }
    if (tagName) {
      res["tagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagDefinePrompt") != m.end() && !m["tagDefinePrompt"].empty()) {
      tagDefinePrompt = make_shared<string>(boost::any_cast<string>(m["tagDefinePrompt"]));
    }
    if (m.find("tagName") != m.end() && !m["tagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["tagName"]));
    }
  }


  virtual ~RunNetworkContentAuditRequestTags() = default;
};
class RunNetworkContentAuditRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiKey{};
  shared_ptr<string> businessType{};
  shared_ptr<string> content{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> modelId{};
  shared_ptr<string> outputFormat{};
  shared_ptr<vector<RunNetworkContentAuditRequestTags>> tags{};
  shared_ptr<string> taskDescription{};

  RunNetworkContentAuditRequest() {}

  explicit RunNetworkContentAuditRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (businessType) {
      res["businessType"] = boost::any(*businessType);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (outputFormat) {
      res["outputFormat"] = boost::any(*outputFormat);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (taskDescription) {
      res["taskDescription"] = boost::any(*taskDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("businessType") != m.end() && !m["businessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["businessType"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("outputFormat") != m.end() && !m["outputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["outputFormat"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<RunNetworkContentAuditRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunNetworkContentAuditRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<RunNetworkContentAuditRequestTags>>(expect1);
      }
    }
    if (m.find("taskDescription") != m.end() && !m["taskDescription"].empty()) {
      taskDescription = make_shared<string>(boost::any_cast<string>(m["taskDescription"]));
    }
  }


  virtual ~RunNetworkContentAuditRequest() = default;
};
class RunNetworkContentAuditShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiKey{};
  shared_ptr<string> businessType{};
  shared_ptr<string> content{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> modelId{};
  shared_ptr<string> outputFormat{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> taskDescription{};

  RunNetworkContentAuditShrinkRequest() {}

  explicit RunNetworkContentAuditShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (businessType) {
      res["businessType"] = boost::any(*businessType);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (outputFormat) {
      res["outputFormat"] = boost::any(*outputFormat);
    }
    if (tagsShrink) {
      res["tags"] = boost::any(*tagsShrink);
    }
    if (taskDescription) {
      res["taskDescription"] = boost::any(*taskDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("businessType") != m.end() && !m["businessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["businessType"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("outputFormat") != m.end() && !m["outputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["outputFormat"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
    if (m.find("taskDescription") != m.end() && !m["taskDescription"].empty()) {
      taskDescription = make_shared<string>(boost::any_cast<string>(m["taskDescription"]));
    }
  }


  virtual ~RunNetworkContentAuditShrinkRequest() = default;
};
class RunNetworkContentAuditResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunNetworkContentAuditResponseBodyHeader() {}

  explicit RunNetworkContentAuditResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
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
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunNetworkContentAuditResponseBodyHeader() = default;
};
class RunNetworkContentAuditResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  RunNetworkContentAuditResponseBodyPayloadOutput() {}

  explicit RunNetworkContentAuditResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunNetworkContentAuditResponseBodyPayloadOutput() = default;
};
class RunNetworkContentAuditResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunNetworkContentAuditResponseBodyPayloadUsage() {}

  explicit RunNetworkContentAuditResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunNetworkContentAuditResponseBodyPayloadUsage() = default;
};
class RunNetworkContentAuditResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunNetworkContentAuditResponseBodyPayloadOutput> output{};
  shared_ptr<RunNetworkContentAuditResponseBodyPayloadUsage> usage{};

  RunNetworkContentAuditResponseBodyPayload() {}

  explicit RunNetworkContentAuditResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunNetworkContentAuditResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunNetworkContentAuditResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunNetworkContentAuditResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunNetworkContentAuditResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunNetworkContentAuditResponseBodyPayload() = default;
};
class RunNetworkContentAuditResponseBody : public Darabonba::Model {
public:
  shared_ptr<RunNetworkContentAuditResponseBodyHeader> header{};
  shared_ptr<RunNetworkContentAuditResponseBodyPayload> payload{};
  shared_ptr<string> requestId{};

  RunNetworkContentAuditResponseBody() {}

  explicit RunNetworkContentAuditResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunNetworkContentAuditResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunNetworkContentAuditResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunNetworkContentAuditResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunNetworkContentAuditResponseBodyPayload>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~RunNetworkContentAuditResponseBody() = default;
};
class RunNetworkContentAuditResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunNetworkContentAuditResponseBody> body{};

  RunNetworkContentAuditResponse() {}

  explicit RunNetworkContentAuditResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunNetworkContentAuditResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunNetworkContentAuditResponseBody>(model1);
      }
    }
  }


  virtual ~RunNetworkContentAuditResponse() = default;
};
class RunScriptChatRequest : public Darabonba::Model {
public:
  shared_ptr<string> prompt{};
  shared_ptr<string> taskId{};

  RunScriptChatRequest() {}

  explicit RunScriptChatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prompt) {
      res["prompt"] = boost::any(*prompt);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("prompt") != m.end() && !m["prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["prompt"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~RunScriptChatRequest() = default;
};
class RunScriptChatResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunScriptChatResponseBodyHeader() {}

  explicit RunScriptChatResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
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
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunScriptChatResponseBodyHeader() = default;
};
class RunScriptChatResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  RunScriptChatResponseBodyPayloadOutput() {}

  explicit RunScriptChatResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunScriptChatResponseBodyPayloadOutput() = default;
};
class RunScriptChatResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunScriptChatResponseBodyPayloadUsage() {}

  explicit RunScriptChatResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunScriptChatResponseBodyPayloadUsage() = default;
};
class RunScriptChatResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunScriptChatResponseBodyPayloadOutput> output{};
  shared_ptr<RunScriptChatResponseBodyPayloadUsage> usage{};

  RunScriptChatResponseBodyPayload() {}

  explicit RunScriptChatResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunScriptChatResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunScriptChatResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunScriptChatResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunScriptChatResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunScriptChatResponseBodyPayload() = default;
};
class RunScriptChatResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> end{};
  shared_ptr<RunScriptChatResponseBodyHeader> header{};
  shared_ptr<RunScriptChatResponseBodyPayload> payload{};

  RunScriptChatResponseBody() {}

  explicit RunScriptChatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<bool>(boost::any_cast<bool>(m["end"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunScriptChatResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunScriptChatResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunScriptChatResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunScriptChatResponseBodyPayload>(model1);
      }
    }
  }


  virtual ~RunScriptChatResponseBody() = default;
};
class RunScriptChatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunScriptChatResponseBody> body{};

  RunScriptChatResponse() {}

  explicit RunScriptChatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunScriptChatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunScriptChatResponseBody>(model1);
      }
    }
  }


  virtual ~RunScriptChatResponse() = default;
};
class RunScriptContinueRequest : public Darabonba::Model {
public:
  shared_ptr<string> scriptSummary{};
  shared_ptr<string> scriptTypeKeyword{};
  shared_ptr<string> userProvidedContent{};

  RunScriptContinueRequest() {}

  explicit RunScriptContinueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scriptSummary) {
      res["scriptSummary"] = boost::any(*scriptSummary);
    }
    if (scriptTypeKeyword) {
      res["scriptTypeKeyword"] = boost::any(*scriptTypeKeyword);
    }
    if (userProvidedContent) {
      res["userProvidedContent"] = boost::any(*userProvidedContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("scriptSummary") != m.end() && !m["scriptSummary"].empty()) {
      scriptSummary = make_shared<string>(boost::any_cast<string>(m["scriptSummary"]));
    }
    if (m.find("scriptTypeKeyword") != m.end() && !m["scriptTypeKeyword"].empty()) {
      scriptTypeKeyword = make_shared<string>(boost::any_cast<string>(m["scriptTypeKeyword"]));
    }
    if (m.find("userProvidedContent") != m.end() && !m["userProvidedContent"].empty()) {
      userProvidedContent = make_shared<string>(boost::any_cast<string>(m["userProvidedContent"]));
    }
  }


  virtual ~RunScriptContinueRequest() = default;
};
class RunScriptContinueResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunScriptContinueResponseBodyHeader() {}

  explicit RunScriptContinueResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
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
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunScriptContinueResponseBodyHeader() = default;
};
class RunScriptContinueResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  RunScriptContinueResponseBodyPayloadOutput() {}

  explicit RunScriptContinueResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunScriptContinueResponseBodyPayloadOutput() = default;
};
class RunScriptContinueResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunScriptContinueResponseBodyPayloadUsage() {}

  explicit RunScriptContinueResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunScriptContinueResponseBodyPayloadUsage() = default;
};
class RunScriptContinueResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunScriptContinueResponseBodyPayloadOutput> output{};
  shared_ptr<RunScriptContinueResponseBodyPayloadUsage> usage{};

  RunScriptContinueResponseBodyPayload() {}

  explicit RunScriptContinueResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunScriptContinueResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunScriptContinueResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunScriptContinueResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunScriptContinueResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunScriptContinueResponseBodyPayload() = default;
};
class RunScriptContinueResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> end{};
  shared_ptr<RunScriptContinueResponseBodyHeader> header{};
  shared_ptr<RunScriptContinueResponseBodyPayload> payload{};

  RunScriptContinueResponseBody() {}

  explicit RunScriptContinueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<bool>(boost::any_cast<bool>(m["end"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunScriptContinueResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunScriptContinueResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunScriptContinueResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunScriptContinueResponseBodyPayload>(model1);
      }
    }
  }


  virtual ~RunScriptContinueResponseBody() = default;
};
class RunScriptContinueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunScriptContinueResponseBody> body{};

  RunScriptContinueResponse() {}

  explicit RunScriptContinueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunScriptContinueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunScriptContinueResponseBody>(model1);
      }
    }
  }


  virtual ~RunScriptContinueResponse() = default;
};
class RunScriptPlanningRequest : public Darabonba::Model {
public:
  shared_ptr<string> additionalNote{};
  shared_ptr<bool> dialogueInScene{};
  shared_ptr<bool> plotConflict{};
  shared_ptr<string> scriptName{};
  shared_ptr<long> scriptShotCount{};
  shared_ptr<string> scriptSummary{};
  shared_ptr<string> scriptTypeKeyword{};

  RunScriptPlanningRequest() {}

  explicit RunScriptPlanningRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalNote) {
      res["additionalNote"] = boost::any(*additionalNote);
    }
    if (dialogueInScene) {
      res["dialogueInScene"] = boost::any(*dialogueInScene);
    }
    if (plotConflict) {
      res["plotConflict"] = boost::any(*plotConflict);
    }
    if (scriptName) {
      res["scriptName"] = boost::any(*scriptName);
    }
    if (scriptShotCount) {
      res["scriptShotCount"] = boost::any(*scriptShotCount);
    }
    if (scriptSummary) {
      res["scriptSummary"] = boost::any(*scriptSummary);
    }
    if (scriptTypeKeyword) {
      res["scriptTypeKeyword"] = boost::any(*scriptTypeKeyword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("additionalNote") != m.end() && !m["additionalNote"].empty()) {
      additionalNote = make_shared<string>(boost::any_cast<string>(m["additionalNote"]));
    }
    if (m.find("dialogueInScene") != m.end() && !m["dialogueInScene"].empty()) {
      dialogueInScene = make_shared<bool>(boost::any_cast<bool>(m["dialogueInScene"]));
    }
    if (m.find("plotConflict") != m.end() && !m["plotConflict"].empty()) {
      plotConflict = make_shared<bool>(boost::any_cast<bool>(m["plotConflict"]));
    }
    if (m.find("scriptName") != m.end() && !m["scriptName"].empty()) {
      scriptName = make_shared<string>(boost::any_cast<string>(m["scriptName"]));
    }
    if (m.find("scriptShotCount") != m.end() && !m["scriptShotCount"].empty()) {
      scriptShotCount = make_shared<long>(boost::any_cast<long>(m["scriptShotCount"]));
    }
    if (m.find("scriptSummary") != m.end() && !m["scriptSummary"].empty()) {
      scriptSummary = make_shared<string>(boost::any_cast<string>(m["scriptSummary"]));
    }
    if (m.find("scriptTypeKeyword") != m.end() && !m["scriptTypeKeyword"].empty()) {
      scriptTypeKeyword = make_shared<string>(boost::any_cast<string>(m["scriptTypeKeyword"]));
    }
  }


  virtual ~RunScriptPlanningRequest() = default;
};
class RunScriptPlanningResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunScriptPlanningResponseBodyHeader() {}

  explicit RunScriptPlanningResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
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
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunScriptPlanningResponseBodyHeader() = default;
};
class RunScriptPlanningResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  RunScriptPlanningResponseBodyPayloadOutput() {}

  explicit RunScriptPlanningResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunScriptPlanningResponseBodyPayloadOutput() = default;
};
class RunScriptPlanningResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunScriptPlanningResponseBodyPayloadUsage() {}

  explicit RunScriptPlanningResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunScriptPlanningResponseBodyPayloadUsage() = default;
};
class RunScriptPlanningResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunScriptPlanningResponseBodyPayloadOutput> output{};
  shared_ptr<RunScriptPlanningResponseBodyPayloadUsage> usage{};

  RunScriptPlanningResponseBodyPayload() {}

  explicit RunScriptPlanningResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunScriptPlanningResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunScriptPlanningResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunScriptPlanningResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunScriptPlanningResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunScriptPlanningResponseBodyPayload() = default;
};
class RunScriptPlanningResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> end{};
  shared_ptr<RunScriptPlanningResponseBodyHeader> header{};
  shared_ptr<RunScriptPlanningResponseBodyPayload> payload{};

  RunScriptPlanningResponseBody() {}

  explicit RunScriptPlanningResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<bool>(boost::any_cast<bool>(m["end"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunScriptPlanningResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunScriptPlanningResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunScriptPlanningResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunScriptPlanningResponseBodyPayload>(model1);
      }
    }
  }


  virtual ~RunScriptPlanningResponseBody() = default;
};
class RunScriptPlanningResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunScriptPlanningResponseBody> body{};

  RunScriptPlanningResponse() {}

  explicit RunScriptPlanningResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunScriptPlanningResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunScriptPlanningResponseBody>(model1);
      }
    }
  }


  virtual ~RunScriptPlanningResponse() = default;
};
class RunScriptRefineRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  RunScriptRefineRequest() {}

  explicit RunScriptRefineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RunScriptRefineRequest() = default;
};
class RunScriptRefineResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunScriptRefineResponseBodyHeader() {}

  explicit RunScriptRefineResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
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
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunScriptRefineResponseBodyHeader() = default;
};
class RunScriptRefineResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, string>>> content{};
  shared_ptr<string> outline{};
  shared_ptr<string> role{};
  shared_ptr<string> scene{};
  shared_ptr<string> summary{};
  shared_ptr<string> text{};

  RunScriptRefineResponseBodyPayloadOutput() {}

  explicit RunScriptRefineResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (outline) {
      res["outline"] = boost::any(*outline);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
    if (summary) {
      res["summary"] = boost::any(*summary);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["content"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["content"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      content = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("outline") != m.end() && !m["outline"].empty()) {
      outline = make_shared<string>(boost::any_cast<string>(m["outline"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
    if (m.find("summary") != m.end() && !m["summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["summary"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunScriptRefineResponseBodyPayloadOutput() = default;
};
class RunScriptRefineResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunScriptRefineResponseBodyPayloadUsage() {}

  explicit RunScriptRefineResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunScriptRefineResponseBodyPayloadUsage() = default;
};
class RunScriptRefineResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunScriptRefineResponseBodyPayloadOutput> output{};
  shared_ptr<RunScriptRefineResponseBodyPayloadUsage> usage{};

  RunScriptRefineResponseBodyPayload() {}

  explicit RunScriptRefineResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunScriptRefineResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunScriptRefineResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunScriptRefineResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunScriptRefineResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunScriptRefineResponseBodyPayload() = default;
};
class RunScriptRefineResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> end{};
  shared_ptr<RunScriptRefineResponseBodyHeader> header{};
  shared_ptr<RunScriptRefineResponseBodyPayload> payload{};

  RunScriptRefineResponseBody() {}

  explicit RunScriptRefineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<bool>(boost::any_cast<bool>(m["end"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunScriptRefineResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunScriptRefineResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunScriptRefineResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunScriptRefineResponseBodyPayload>(model1);
      }
    }
  }


  virtual ~RunScriptRefineResponseBody() = default;
};
class RunScriptRefineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunScriptRefineResponseBody> body{};

  RunScriptRefineResponse() {}

  explicit RunScriptRefineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunScriptRefineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunScriptRefineResponseBody>(model1);
      }
    }
  }


  virtual ~RunScriptRefineResponse() = default;
};
class RunStyleWritingRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> learningSamples{};
  shared_ptr<string> processStage{};
  shared_ptr<vector<string>> referenceMaterials{};
  shared_ptr<string> styleFeature{};
  shared_ptr<bool> useSearch{};
  shared_ptr<string> writingTheme{};

  RunStyleWritingRequest() {}

  explicit RunStyleWritingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (learningSamples) {
      res["learningSamples"] = boost::any(*learningSamples);
    }
    if (processStage) {
      res["processStage"] = boost::any(*processStage);
    }
    if (referenceMaterials) {
      res["referenceMaterials"] = boost::any(*referenceMaterials);
    }
    if (styleFeature) {
      res["styleFeature"] = boost::any(*styleFeature);
    }
    if (useSearch) {
      res["useSearch"] = boost::any(*useSearch);
    }
    if (writingTheme) {
      res["writingTheme"] = boost::any(*writingTheme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("learningSamples") != m.end() && !m["learningSamples"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["learningSamples"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["learningSamples"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      learningSamples = make_shared<vector<string>>(toVec1);
    }
    if (m.find("processStage") != m.end() && !m["processStage"].empty()) {
      processStage = make_shared<string>(boost::any_cast<string>(m["processStage"]));
    }
    if (m.find("referenceMaterials") != m.end() && !m["referenceMaterials"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["referenceMaterials"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["referenceMaterials"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      referenceMaterials = make_shared<vector<string>>(toVec1);
    }
    if (m.find("styleFeature") != m.end() && !m["styleFeature"].empty()) {
      styleFeature = make_shared<string>(boost::any_cast<string>(m["styleFeature"]));
    }
    if (m.find("useSearch") != m.end() && !m["useSearch"].empty()) {
      useSearch = make_shared<bool>(boost::any_cast<bool>(m["useSearch"]));
    }
    if (m.find("writingTheme") != m.end() && !m["writingTheme"].empty()) {
      writingTheme = make_shared<string>(boost::any_cast<string>(m["writingTheme"]));
    }
  }


  virtual ~RunStyleWritingRequest() = default;
};
class RunStyleWritingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> learningSamplesShrink{};
  shared_ptr<string> processStage{};
  shared_ptr<string> referenceMaterialsShrink{};
  shared_ptr<string> styleFeature{};
  shared_ptr<bool> useSearch{};
  shared_ptr<string> writingTheme{};

  RunStyleWritingShrinkRequest() {}

  explicit RunStyleWritingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (learningSamplesShrink) {
      res["learningSamples"] = boost::any(*learningSamplesShrink);
    }
    if (processStage) {
      res["processStage"] = boost::any(*processStage);
    }
    if (referenceMaterialsShrink) {
      res["referenceMaterials"] = boost::any(*referenceMaterialsShrink);
    }
    if (styleFeature) {
      res["styleFeature"] = boost::any(*styleFeature);
    }
    if (useSearch) {
      res["useSearch"] = boost::any(*useSearch);
    }
    if (writingTheme) {
      res["writingTheme"] = boost::any(*writingTheme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("learningSamples") != m.end() && !m["learningSamples"].empty()) {
      learningSamplesShrink = make_shared<string>(boost::any_cast<string>(m["learningSamples"]));
    }
    if (m.find("processStage") != m.end() && !m["processStage"].empty()) {
      processStage = make_shared<string>(boost::any_cast<string>(m["processStage"]));
    }
    if (m.find("referenceMaterials") != m.end() && !m["referenceMaterials"].empty()) {
      referenceMaterialsShrink = make_shared<string>(boost::any_cast<string>(m["referenceMaterials"]));
    }
    if (m.find("styleFeature") != m.end() && !m["styleFeature"].empty()) {
      styleFeature = make_shared<string>(boost::any_cast<string>(m["styleFeature"]));
    }
    if (m.find("useSearch") != m.end() && !m["useSearch"].empty()) {
      useSearch = make_shared<bool>(boost::any_cast<bool>(m["useSearch"]));
    }
    if (m.find("writingTheme") != m.end() && !m["writingTheme"].empty()) {
      writingTheme = make_shared<string>(boost::any_cast<string>(m["writingTheme"]));
    }
  }


  virtual ~RunStyleWritingShrinkRequest() = default;
};
class RunStyleWritingResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunStyleWritingResponseBodyHeader() {}

  explicit RunStyleWritingResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
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
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunStyleWritingResponseBodyHeader() = default;
};
class RunStyleWritingResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  RunStyleWritingResponseBodyPayloadOutput() {}

  explicit RunStyleWritingResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunStyleWritingResponseBodyPayloadOutput() = default;
};
class RunStyleWritingResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunStyleWritingResponseBodyPayloadUsage() {}

  explicit RunStyleWritingResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunStyleWritingResponseBodyPayloadUsage() = default;
};
class RunStyleWritingResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunStyleWritingResponseBodyPayloadOutput> output{};
  shared_ptr<RunStyleWritingResponseBodyPayloadUsage> usage{};

  RunStyleWritingResponseBodyPayload() {}

  explicit RunStyleWritingResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunStyleWritingResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunStyleWritingResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunStyleWritingResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunStyleWritingResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunStyleWritingResponseBodyPayload() = default;
};
class RunStyleWritingResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> end{};
  shared_ptr<RunStyleWritingResponseBodyHeader> header{};
  shared_ptr<RunStyleWritingResponseBodyPayload> payload{};

  RunStyleWritingResponseBody() {}

  explicit RunStyleWritingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<bool>(boost::any_cast<bool>(m["end"]));
    }
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunStyleWritingResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunStyleWritingResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunStyleWritingResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunStyleWritingResponseBodyPayload>(model1);
      }
    }
  }


  virtual ~RunStyleWritingResponseBody() = default;
};
class RunStyleWritingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunStyleWritingResponseBody> body{};

  RunStyleWritingResponse() {}

  explicit RunStyleWritingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunStyleWritingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunStyleWritingResponseBody>(model1);
      }
    }
  }


  virtual ~RunStyleWritingResponse() = default;
};
class RunTagMiningAnalysisRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> tagDefinePrompt{};
  shared_ptr<string> tagName{};

  RunTagMiningAnalysisRequestTags() {}

  explicit RunTagMiningAnalysisRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagDefinePrompt) {
      res["tagDefinePrompt"] = boost::any(*tagDefinePrompt);
    }
    if (tagName) {
      res["tagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagDefinePrompt") != m.end() && !m["tagDefinePrompt"].empty()) {
      tagDefinePrompt = make_shared<string>(boost::any_cast<string>(m["tagDefinePrompt"]));
    }
    if (m.find("tagName") != m.end() && !m["tagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["tagName"]));
    }
  }


  virtual ~RunTagMiningAnalysisRequestTags() = default;
};
class RunTagMiningAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiKey{};
  shared_ptr<string> businessType{};
  shared_ptr<string> content{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> modelId{};
  shared_ptr<string> outputFormat{};
  shared_ptr<vector<RunTagMiningAnalysisRequestTags>> tags{};
  shared_ptr<string> taskDescription{};

  RunTagMiningAnalysisRequest() {}

  explicit RunTagMiningAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (businessType) {
      res["businessType"] = boost::any(*businessType);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (outputFormat) {
      res["outputFormat"] = boost::any(*outputFormat);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (taskDescription) {
      res["taskDescription"] = boost::any(*taskDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("businessType") != m.end() && !m["businessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["businessType"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("outputFormat") != m.end() && !m["outputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["outputFormat"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<RunTagMiningAnalysisRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunTagMiningAnalysisRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<RunTagMiningAnalysisRequestTags>>(expect1);
      }
    }
    if (m.find("taskDescription") != m.end() && !m["taskDescription"].empty()) {
      taskDescription = make_shared<string>(boost::any_cast<string>(m["taskDescription"]));
    }
  }


  virtual ~RunTagMiningAnalysisRequest() = default;
};
class RunTagMiningAnalysisShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiKey{};
  shared_ptr<string> businessType{};
  shared_ptr<string> content{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> modelId{};
  shared_ptr<string> outputFormat{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> taskDescription{};

  RunTagMiningAnalysisShrinkRequest() {}

  explicit RunTagMiningAnalysisShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (businessType) {
      res["businessType"] = boost::any(*businessType);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (outputFormat) {
      res["outputFormat"] = boost::any(*outputFormat);
    }
    if (tagsShrink) {
      res["tags"] = boost::any(*tagsShrink);
    }
    if (taskDescription) {
      res["taskDescription"] = boost::any(*taskDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("businessType") != m.end() && !m["businessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["businessType"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("outputFormat") != m.end() && !m["outputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["outputFormat"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
    if (m.find("taskDescription") != m.end() && !m["taskDescription"].empty()) {
      taskDescription = make_shared<string>(boost::any_cast<string>(m["taskDescription"]));
    }
  }


  virtual ~RunTagMiningAnalysisShrinkRequest() = default;
};
class RunTagMiningAnalysisResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunTagMiningAnalysisResponseBodyHeader() {}

  explicit RunTagMiningAnalysisResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
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
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunTagMiningAnalysisResponseBodyHeader() = default;
};
class RunTagMiningAnalysisResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  RunTagMiningAnalysisResponseBodyPayloadOutput() {}

  explicit RunTagMiningAnalysisResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunTagMiningAnalysisResponseBodyPayloadOutput() = default;
};
class RunTagMiningAnalysisResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunTagMiningAnalysisResponseBodyPayloadUsage() {}

  explicit RunTagMiningAnalysisResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunTagMiningAnalysisResponseBodyPayloadUsage() = default;
};
class RunTagMiningAnalysisResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunTagMiningAnalysisResponseBodyPayloadOutput> output{};
  shared_ptr<RunTagMiningAnalysisResponseBodyPayloadUsage> usage{};

  RunTagMiningAnalysisResponseBodyPayload() {}

  explicit RunTagMiningAnalysisResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunTagMiningAnalysisResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunTagMiningAnalysisResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunTagMiningAnalysisResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunTagMiningAnalysisResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunTagMiningAnalysisResponseBodyPayload() = default;
};
class RunTagMiningAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<RunTagMiningAnalysisResponseBodyHeader> header{};
  shared_ptr<RunTagMiningAnalysisResponseBodyPayload> payload{};
  shared_ptr<string> requestId{};

  RunTagMiningAnalysisResponseBody() {}

  explicit RunTagMiningAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunTagMiningAnalysisResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunTagMiningAnalysisResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunTagMiningAnalysisResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunTagMiningAnalysisResponseBodyPayload>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~RunTagMiningAnalysisResponseBody() = default;
};
class RunTagMiningAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunTagMiningAnalysisResponseBody> body{};

  RunTagMiningAnalysisResponse() {}

  explicit RunTagMiningAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunTagMiningAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunTagMiningAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~RunTagMiningAnalysisResponse() = default;
};
class RunVideoAnalysisRequestFrameSampleMethod : public Darabonba::Model {
public:
  shared_ptr<double> interval{};
  shared_ptr<string> methodName{};
  shared_ptr<long> pixel{};

  RunVideoAnalysisRequestFrameSampleMethod() {}

  explicit RunVideoAnalysisRequestFrameSampleMethod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (interval) {
      res["interval"] = boost::any(*interval);
    }
    if (methodName) {
      res["methodName"] = boost::any(*methodName);
    }
    if (pixel) {
      res["pixel"] = boost::any(*pixel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("interval") != m.end() && !m["interval"].empty()) {
      interval = make_shared<double>(boost::any_cast<double>(m["interval"]));
    }
    if (m.find("methodName") != m.end() && !m["methodName"].empty()) {
      methodName = make_shared<string>(boost::any_cast<string>(m["methodName"]));
    }
    if (m.find("pixel") != m.end() && !m["pixel"].empty()) {
      pixel = make_shared<long>(boost::any_cast<long>(m["pixel"]));
    }
  }


  virtual ~RunVideoAnalysisRequestFrameSampleMethod() = default;
};
class RunVideoAnalysisRequestTextProcessTasks : public Darabonba::Model {
public:
  shared_ptr<string> modelCustomPromptTemplate{};
  shared_ptr<string> modelCustomPromptTemplateId{};
  shared_ptr<string> modelId{};

  RunVideoAnalysisRequestTextProcessTasks() {}

  explicit RunVideoAnalysisRequestTextProcessTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelCustomPromptTemplate) {
      res["modelCustomPromptTemplate"] = boost::any(*modelCustomPromptTemplate);
    }
    if (modelCustomPromptTemplateId) {
      res["modelCustomPromptTemplateId"] = boost::any(*modelCustomPromptTemplateId);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("modelCustomPromptTemplate") != m.end() && !m["modelCustomPromptTemplate"].empty()) {
      modelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplate"]));
    }
    if (m.find("modelCustomPromptTemplateId") != m.end() && !m["modelCustomPromptTemplateId"].empty()) {
      modelCustomPromptTemplateId = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplateId"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
  }


  virtual ~RunVideoAnalysisRequestTextProcessTasks() = default;
};
class RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> speaker{};
  shared_ptr<long> startTime{};
  shared_ptr<string> text{};

  RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions() {}

  explicit RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (speaker) {
      res["speaker"] = boost::any(*speaker);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("speaker") != m.end() && !m["speaker"].empty()) {
      speaker = make_shared<string>(boost::any_cast<string>(m["speaker"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions() = default;
};
class RunVideoAnalysisRequestVideoCaptionInfo : public Darabonba::Model {
public:
  shared_ptr<string> videoCaptionFileUrl{};
  shared_ptr<vector<RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions>> videoCaptions{};

  RunVideoAnalysisRequestVideoCaptionInfo() {}

  explicit RunVideoAnalysisRequestVideoCaptionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoCaptionFileUrl) {
      res["videoCaptionFileUrl"] = boost::any(*videoCaptionFileUrl);
    }
    if (videoCaptions) {
      vector<boost::any> temp1;
      for(auto item1:*videoCaptions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoCaptions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("videoCaptionFileUrl") != m.end() && !m["videoCaptionFileUrl"].empty()) {
      videoCaptionFileUrl = make_shared<string>(boost::any_cast<string>(m["videoCaptionFileUrl"]));
    }
    if (m.find("videoCaptions") != m.end() && !m["videoCaptions"].empty()) {
      if (typeid(vector<boost::any>) == m["videoCaptions"].type()) {
        vector<RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoCaptions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoCaptions = make_shared<vector<RunVideoAnalysisRequestVideoCaptionInfoVideoCaptions>>(expect1);
      }
    }
  }


  virtual ~RunVideoAnalysisRequestVideoCaptionInfo() = default;
};
class RunVideoAnalysisRequestVideoRoles : public Darabonba::Model {
public:
  shared_ptr<string> roleInfo{};
  shared_ptr<string> roleName{};
  shared_ptr<vector<string>> urls{};

  RunVideoAnalysisRequestVideoRoles() {}

  explicit RunVideoAnalysisRequestVideoRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleInfo) {
      res["roleInfo"] = boost::any(*roleInfo);
    }
    if (roleName) {
      res["roleName"] = boost::any(*roleName);
    }
    if (urls) {
      res["urls"] = boost::any(*urls);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("roleInfo") != m.end() && !m["roleInfo"].empty()) {
      roleInfo = make_shared<string>(boost::any_cast<string>(m["roleInfo"]));
    }
    if (m.find("roleName") != m.end() && !m["roleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["roleName"]));
    }
    if (m.find("urls") != m.end() && !m["urls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["urls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["urls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      urls = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RunVideoAnalysisRequestVideoRoles() = default;
};
class RunVideoAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> excludeGenerateOptions{};
  shared_ptr<double> faceIdentitySimilarityMinScore{};
  shared_ptr<RunVideoAnalysisRequestFrameSampleMethod> frameSampleMethod{};
  shared_ptr<vector<string>> generateOptions{};
  shared_ptr<string> language{};
  shared_ptr<string> modelCustomPromptTemplate{};
  shared_ptr<string> modelCustomPromptTemplateId{};
  shared_ptr<string> modelId{};
  shared_ptr<string> originalSessionId{};
  shared_ptr<double> snapshotInterval{};
  shared_ptr<long> splitInterval{};
  shared_ptr<string> taskId{};
  shared_ptr<vector<RunVideoAnalysisRequestTextProcessTasks>> textProcessTasks{};
  shared_ptr<RunVideoAnalysisRequestVideoCaptionInfo> videoCaptionInfo{};
  shared_ptr<string> videoExtraInfo{};
  shared_ptr<string> videoModelCustomPromptTemplate{};
  shared_ptr<string> videoModelId{};
  shared_ptr<vector<RunVideoAnalysisRequestVideoRoles>> videoRoles{};
  shared_ptr<long> videoShotFaceIdentityCount{};
  shared_ptr<string> videoUrl{};

  RunVideoAnalysisRequest() {}

  explicit RunVideoAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeGenerateOptions) {
      res["excludeGenerateOptions"] = boost::any(*excludeGenerateOptions);
    }
    if (faceIdentitySimilarityMinScore) {
      res["faceIdentitySimilarityMinScore"] = boost::any(*faceIdentitySimilarityMinScore);
    }
    if (frameSampleMethod) {
      res["frameSampleMethod"] = frameSampleMethod ? boost::any(frameSampleMethod->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (generateOptions) {
      res["generateOptions"] = boost::any(*generateOptions);
    }
    if (language) {
      res["language"] = boost::any(*language);
    }
    if (modelCustomPromptTemplate) {
      res["modelCustomPromptTemplate"] = boost::any(*modelCustomPromptTemplate);
    }
    if (modelCustomPromptTemplateId) {
      res["modelCustomPromptTemplateId"] = boost::any(*modelCustomPromptTemplateId);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (originalSessionId) {
      res["originalSessionId"] = boost::any(*originalSessionId);
    }
    if (snapshotInterval) {
      res["snapshotInterval"] = boost::any(*snapshotInterval);
    }
    if (splitInterval) {
      res["splitInterval"] = boost::any(*splitInterval);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (textProcessTasks) {
      vector<boost::any> temp1;
      for(auto item1:*textProcessTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["textProcessTasks"] = boost::any(temp1);
    }
    if (videoCaptionInfo) {
      res["videoCaptionInfo"] = videoCaptionInfo ? boost::any(videoCaptionInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoExtraInfo) {
      res["videoExtraInfo"] = boost::any(*videoExtraInfo);
    }
    if (videoModelCustomPromptTemplate) {
      res["videoModelCustomPromptTemplate"] = boost::any(*videoModelCustomPromptTemplate);
    }
    if (videoModelId) {
      res["videoModelId"] = boost::any(*videoModelId);
    }
    if (videoRoles) {
      vector<boost::any> temp1;
      for(auto item1:*videoRoles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoRoles"] = boost::any(temp1);
    }
    if (videoShotFaceIdentityCount) {
      res["videoShotFaceIdentityCount"] = boost::any(*videoShotFaceIdentityCount);
    }
    if (videoUrl) {
      res["videoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("excludeGenerateOptions") != m.end() && !m["excludeGenerateOptions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["excludeGenerateOptions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeGenerateOptions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeGenerateOptions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("faceIdentitySimilarityMinScore") != m.end() && !m["faceIdentitySimilarityMinScore"].empty()) {
      faceIdentitySimilarityMinScore = make_shared<double>(boost::any_cast<double>(m["faceIdentitySimilarityMinScore"]));
    }
    if (m.find("frameSampleMethod") != m.end() && !m["frameSampleMethod"].empty()) {
      if (typeid(map<string, boost::any>) == m["frameSampleMethod"].type()) {
        RunVideoAnalysisRequestFrameSampleMethod model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["frameSampleMethod"]));
        frameSampleMethod = make_shared<RunVideoAnalysisRequestFrameSampleMethod>(model1);
      }
    }
    if (m.find("generateOptions") != m.end() && !m["generateOptions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["generateOptions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["generateOptions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      generateOptions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("language") != m.end() && !m["language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["language"]));
    }
    if (m.find("modelCustomPromptTemplate") != m.end() && !m["modelCustomPromptTemplate"].empty()) {
      modelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplate"]));
    }
    if (m.find("modelCustomPromptTemplateId") != m.end() && !m["modelCustomPromptTemplateId"].empty()) {
      modelCustomPromptTemplateId = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplateId"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("originalSessionId") != m.end() && !m["originalSessionId"].empty()) {
      originalSessionId = make_shared<string>(boost::any_cast<string>(m["originalSessionId"]));
    }
    if (m.find("snapshotInterval") != m.end() && !m["snapshotInterval"].empty()) {
      snapshotInterval = make_shared<double>(boost::any_cast<double>(m["snapshotInterval"]));
    }
    if (m.find("splitInterval") != m.end() && !m["splitInterval"].empty()) {
      splitInterval = make_shared<long>(boost::any_cast<long>(m["splitInterval"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("textProcessTasks") != m.end() && !m["textProcessTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["textProcessTasks"].type()) {
        vector<RunVideoAnalysisRequestTextProcessTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["textProcessTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisRequestTextProcessTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        textProcessTasks = make_shared<vector<RunVideoAnalysisRequestTextProcessTasks>>(expect1);
      }
    }
    if (m.find("videoCaptionInfo") != m.end() && !m["videoCaptionInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoCaptionInfo"].type()) {
        RunVideoAnalysisRequestVideoCaptionInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoCaptionInfo"]));
        videoCaptionInfo = make_shared<RunVideoAnalysisRequestVideoCaptionInfo>(model1);
      }
    }
    if (m.find("videoExtraInfo") != m.end() && !m["videoExtraInfo"].empty()) {
      videoExtraInfo = make_shared<string>(boost::any_cast<string>(m["videoExtraInfo"]));
    }
    if (m.find("videoModelCustomPromptTemplate") != m.end() && !m["videoModelCustomPromptTemplate"].empty()) {
      videoModelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["videoModelCustomPromptTemplate"]));
    }
    if (m.find("videoModelId") != m.end() && !m["videoModelId"].empty()) {
      videoModelId = make_shared<string>(boost::any_cast<string>(m["videoModelId"]));
    }
    if (m.find("videoRoles") != m.end() && !m["videoRoles"].empty()) {
      if (typeid(vector<boost::any>) == m["videoRoles"].type()) {
        vector<RunVideoAnalysisRequestVideoRoles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoRoles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisRequestVideoRoles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoRoles = make_shared<vector<RunVideoAnalysisRequestVideoRoles>>(expect1);
      }
    }
    if (m.find("videoShotFaceIdentityCount") != m.end() && !m["videoShotFaceIdentityCount"].empty()) {
      videoShotFaceIdentityCount = make_shared<long>(boost::any_cast<long>(m["videoShotFaceIdentityCount"]));
    }
    if (m.find("videoUrl") != m.end() && !m["videoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["videoUrl"]));
    }
  }


  virtual ~RunVideoAnalysisRequest() = default;
};
class RunVideoAnalysisShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> excludeGenerateOptionsShrink{};
  shared_ptr<double> faceIdentitySimilarityMinScore{};
  shared_ptr<string> frameSampleMethodShrink{};
  shared_ptr<string> generateOptionsShrink{};
  shared_ptr<string> language{};
  shared_ptr<string> modelCustomPromptTemplate{};
  shared_ptr<string> modelCustomPromptTemplateId{};
  shared_ptr<string> modelId{};
  shared_ptr<string> originalSessionId{};
  shared_ptr<double> snapshotInterval{};
  shared_ptr<long> splitInterval{};
  shared_ptr<string> taskId{};
  shared_ptr<string> textProcessTasksShrink{};
  shared_ptr<string> videoCaptionInfoShrink{};
  shared_ptr<string> videoExtraInfo{};
  shared_ptr<string> videoModelCustomPromptTemplate{};
  shared_ptr<string> videoModelId{};
  shared_ptr<string> videoRolesShrink{};
  shared_ptr<long> videoShotFaceIdentityCount{};
  shared_ptr<string> videoUrl{};

  RunVideoAnalysisShrinkRequest() {}

  explicit RunVideoAnalysisShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeGenerateOptionsShrink) {
      res["excludeGenerateOptions"] = boost::any(*excludeGenerateOptionsShrink);
    }
    if (faceIdentitySimilarityMinScore) {
      res["faceIdentitySimilarityMinScore"] = boost::any(*faceIdentitySimilarityMinScore);
    }
    if (frameSampleMethodShrink) {
      res["frameSampleMethod"] = boost::any(*frameSampleMethodShrink);
    }
    if (generateOptionsShrink) {
      res["generateOptions"] = boost::any(*generateOptionsShrink);
    }
    if (language) {
      res["language"] = boost::any(*language);
    }
    if (modelCustomPromptTemplate) {
      res["modelCustomPromptTemplate"] = boost::any(*modelCustomPromptTemplate);
    }
    if (modelCustomPromptTemplateId) {
      res["modelCustomPromptTemplateId"] = boost::any(*modelCustomPromptTemplateId);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (originalSessionId) {
      res["originalSessionId"] = boost::any(*originalSessionId);
    }
    if (snapshotInterval) {
      res["snapshotInterval"] = boost::any(*snapshotInterval);
    }
    if (splitInterval) {
      res["splitInterval"] = boost::any(*splitInterval);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (textProcessTasksShrink) {
      res["textProcessTasks"] = boost::any(*textProcessTasksShrink);
    }
    if (videoCaptionInfoShrink) {
      res["videoCaptionInfo"] = boost::any(*videoCaptionInfoShrink);
    }
    if (videoExtraInfo) {
      res["videoExtraInfo"] = boost::any(*videoExtraInfo);
    }
    if (videoModelCustomPromptTemplate) {
      res["videoModelCustomPromptTemplate"] = boost::any(*videoModelCustomPromptTemplate);
    }
    if (videoModelId) {
      res["videoModelId"] = boost::any(*videoModelId);
    }
    if (videoRolesShrink) {
      res["videoRoles"] = boost::any(*videoRolesShrink);
    }
    if (videoShotFaceIdentityCount) {
      res["videoShotFaceIdentityCount"] = boost::any(*videoShotFaceIdentityCount);
    }
    if (videoUrl) {
      res["videoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("excludeGenerateOptions") != m.end() && !m["excludeGenerateOptions"].empty()) {
      excludeGenerateOptionsShrink = make_shared<string>(boost::any_cast<string>(m["excludeGenerateOptions"]));
    }
    if (m.find("faceIdentitySimilarityMinScore") != m.end() && !m["faceIdentitySimilarityMinScore"].empty()) {
      faceIdentitySimilarityMinScore = make_shared<double>(boost::any_cast<double>(m["faceIdentitySimilarityMinScore"]));
    }
    if (m.find("frameSampleMethod") != m.end() && !m["frameSampleMethod"].empty()) {
      frameSampleMethodShrink = make_shared<string>(boost::any_cast<string>(m["frameSampleMethod"]));
    }
    if (m.find("generateOptions") != m.end() && !m["generateOptions"].empty()) {
      generateOptionsShrink = make_shared<string>(boost::any_cast<string>(m["generateOptions"]));
    }
    if (m.find("language") != m.end() && !m["language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["language"]));
    }
    if (m.find("modelCustomPromptTemplate") != m.end() && !m["modelCustomPromptTemplate"].empty()) {
      modelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplate"]));
    }
    if (m.find("modelCustomPromptTemplateId") != m.end() && !m["modelCustomPromptTemplateId"].empty()) {
      modelCustomPromptTemplateId = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplateId"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("originalSessionId") != m.end() && !m["originalSessionId"].empty()) {
      originalSessionId = make_shared<string>(boost::any_cast<string>(m["originalSessionId"]));
    }
    if (m.find("snapshotInterval") != m.end() && !m["snapshotInterval"].empty()) {
      snapshotInterval = make_shared<double>(boost::any_cast<double>(m["snapshotInterval"]));
    }
    if (m.find("splitInterval") != m.end() && !m["splitInterval"].empty()) {
      splitInterval = make_shared<long>(boost::any_cast<long>(m["splitInterval"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("textProcessTasks") != m.end() && !m["textProcessTasks"].empty()) {
      textProcessTasksShrink = make_shared<string>(boost::any_cast<string>(m["textProcessTasks"]));
    }
    if (m.find("videoCaptionInfo") != m.end() && !m["videoCaptionInfo"].empty()) {
      videoCaptionInfoShrink = make_shared<string>(boost::any_cast<string>(m["videoCaptionInfo"]));
    }
    if (m.find("videoExtraInfo") != m.end() && !m["videoExtraInfo"].empty()) {
      videoExtraInfo = make_shared<string>(boost::any_cast<string>(m["videoExtraInfo"]));
    }
    if (m.find("videoModelCustomPromptTemplate") != m.end() && !m["videoModelCustomPromptTemplate"].empty()) {
      videoModelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["videoModelCustomPromptTemplate"]));
    }
    if (m.find("videoModelId") != m.end() && !m["videoModelId"].empty()) {
      videoModelId = make_shared<string>(boost::any_cast<string>(m["videoModelId"]));
    }
    if (m.find("videoRoles") != m.end() && !m["videoRoles"].empty()) {
      videoRolesShrink = make_shared<string>(boost::any_cast<string>(m["videoRoles"]));
    }
    if (m.find("videoShotFaceIdentityCount") != m.end() && !m["videoShotFaceIdentityCount"].empty()) {
      videoShotFaceIdentityCount = make_shared<long>(boost::any_cast<long>(m["videoShotFaceIdentityCount"]));
    }
    if (m.find("videoUrl") != m.end() && !m["videoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["videoUrl"]));
    }
  }


  virtual ~RunVideoAnalysisShrinkRequest() = default;
};
class RunVideoAnalysisResponseBodyHeader : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> event{};
  shared_ptr<string> eventInfo{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> traceId{};

  RunVideoAnalysisResponseBodyHeader() {}

  explicit RunVideoAnalysisResponseBodyHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (eventInfo) {
      res["eventInfo"] = boost::any(*eventInfo);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (traceId) {
      res["traceId"] = boost::any(*traceId);
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
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("eventInfo") != m.end() && !m["eventInfo"].empty()) {
      eventInfo = make_shared<string>(boost::any_cast<string>(m["eventInfo"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("traceId") != m.end() && !m["traceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["traceId"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyHeader() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};
  shared_ptr<string> text{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<string> modelId{};
  shared_ptr<string> text{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage> usage{};
  shared_ptr<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults>> videoShotAnalysisResults{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoShotAnalysisResults) {
      vector<boost::any> temp1;
      for(auto item1:*videoShotAnalysisResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoShotAnalysisResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultUsage>(model1);
      }
    }
    if (m.find("videoShotAnalysisResults") != m.end() && !m["videoShotAnalysisResults"].empty()) {
      if (typeid(vector<boost::any>) == m["videoShotAnalysisResults"].type()) {
        vector<RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoShotAnalysisResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoShotAnalysisResults = make_shared<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResultVideoShotAnalysisResults>>(expect1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> endTimeFormat{};
  shared_ptr<string> speaker{};
  shared_ptr<long> startTime{};
  shared_ptr<string> startTimeFormat{};
  shared_ptr<string> text{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (endTimeFormat) {
      res["endTimeFormat"] = boost::any(*endTimeFormat);
    }
    if (speaker) {
      res["speaker"] = boost::any(*speaker);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (startTimeFormat) {
      res["startTimeFormat"] = boost::any(*startTimeFormat);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("endTimeFormat") != m.end() && !m["endTimeFormat"].empty()) {
      endTimeFormat = make_shared<string>(boost::any_cast<string>(m["endTimeFormat"]));
    }
    if (m.find("speaker") != m.end() && !m["speaker"].empty()) {
      speaker = make_shared<string>(boost::any_cast<string>(m["speaker"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("startTimeFormat") != m.end() && !m["startTimeFormat"].empty()) {
      startTimeFormat = make_shared<string>(boost::any_cast<string>(m["startTimeFormat"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions>> videoCaptions{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (videoCaptions) {
      vector<boost::any> temp1;
      for(auto item1:*videoCaptions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoCaptions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("videoCaptions") != m.end() && !m["videoCaptions"].empty()) {
      if (typeid(vector<boost::any>) == m["videoCaptions"].type()) {
        vector<RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoCaptions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoCaptions = make_shared<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResultVideoCaptions>>(expect1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<long> index{};
  shared_ptr<string> modelId{};
  shared_ptr<bool> modelReduce{};
  shared_ptr<string> reasonText{};
  shared_ptr<string> text{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage> usage{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (modelReduce) {
      res["modelReduce"] = boost::any(*modelReduce);
    }
    if (reasonText) {
      res["reasonText"] = boost::any(*reasonText);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("modelReduce") != m.end() && !m["modelReduce"].empty()) {
      modelReduce = make_shared<bool>(boost::any_cast<bool>(m["modelReduce"]));
    }
    if (m.find("reasonText") != m.end() && !m["reasonText"].empty()) {
      reasonText = make_shared<string>(boost::any_cast<string>(m["reasonText"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultUsage>(model1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultsUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultsUsage() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultsUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultsUsage() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<long> index{};
  shared_ptr<string> modelId{};
  shared_ptr<string> reasonText{};
  shared_ptr<string> text{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultsUsage> usage{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (reasonText) {
      res["reasonText"] = boost::any(*reasonText);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("reasonText") != m.end() && !m["reasonText"].empty()) {
      reasonText = make_shared<string>(boost::any_cast<string>(m["reasonText"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultsUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResultsUsage>(model1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultUsage() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultUsage() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes : public Darabonba::Model {
public:
  shared_ptr<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes>> childNodes{};
  shared_ptr<string> name{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childNodes) {
      vector<boost::any> temp1;
      for(auto item1:*childNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["childNodes"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("childNodes") != m.end() && !m["childNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["childNodes"].type()) {
        vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["childNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        childNodes = make_shared<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodesChildNodes>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings : public Darabonba::Model {
public:
  shared_ptr<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes>> childNodes{};
  shared_ptr<string> name{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childNodes) {
      vector<boost::any> temp1;
      for(auto item1:*childNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["childNodes"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("childNodes") != m.end() && !m["childNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["childNodes"].type()) {
        vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["childNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        childNodes = make_shared<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappingsChildNodes>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<string> modelId{};
  shared_ptr<bool> modelReduce{};
  shared_ptr<string> text{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultUsage> usage{};
  shared_ptr<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings>> videoMindMappings{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (modelReduce) {
      res["modelReduce"] = boost::any(*modelReduce);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoMindMappings) {
      vector<boost::any> temp1;
      for(auto item1:*videoMindMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoMindMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("modelReduce") != m.end() && !m["modelReduce"].empty()) {
      modelReduce = make_shared<bool>(boost::any_cast<bool>(m["modelReduce"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultUsage>(model1);
      }
    }
    if (m.find("videoMindMappings") != m.end() && !m["videoMindMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["videoMindMappings"].type()) {
        vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoMindMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoMindMappings = make_shared<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResultVideoMindMappings>>(expect1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> endTimeFormat{};
  shared_ptr<long> startTime{};
  shared_ptr<string> startTimeFormat{};
  shared_ptr<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots>> videoSnapshots{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (endTimeFormat) {
      res["endTimeFormat"] = boost::any(*endTimeFormat);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (startTimeFormat) {
      res["startTimeFormat"] = boost::any(*startTimeFormat);
    }
    if (videoSnapshots) {
      vector<boost::any> temp1;
      for(auto item1:*videoSnapshots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoSnapshots"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("endTimeFormat") != m.end() && !m["endTimeFormat"].empty()) {
      endTimeFormat = make_shared<string>(boost::any_cast<string>(m["endTimeFormat"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("startTimeFormat") != m.end() && !m["startTimeFormat"].empty()) {
      startTimeFormat = make_shared<string>(boost::any_cast<string>(m["startTimeFormat"]));
    }
    if (m.find("videoSnapshots") != m.end() && !m["videoSnapshots"].empty()) {
      if (typeid(vector<boost::any>) == m["videoSnapshots"].type()) {
        vector<RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoSnapshots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoSnapshots = make_shared<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShotsVideoSnapshots>>(expect1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult : public Darabonba::Model {
public:
  shared_ptr<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots>> videoShots{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoShots) {
      vector<boost::any> temp1;
      for(auto item1:*videoShots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoShots"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("videoShots") != m.end() && !m["videoShots"].empty()) {
      if (typeid(vector<boost::any>) == m["videoShots"].type()) {
        vector<RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoShots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoShots = make_shared<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResultVideoShots>>(expect1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult : public Darabonba::Model {
public:
  shared_ptr<bool> generateFinished{};
  shared_ptr<string> modelId{};
  shared_ptr<bool> modelReduce{};
  shared_ptr<string> text{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage> usage{};

  RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generateFinished) {
      res["generateFinished"] = boost::any(*generateFinished);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (modelReduce) {
      res["modelReduce"] = boost::any(*modelReduce);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generateFinished") != m.end() && !m["generateFinished"].empty()) {
      generateFinished = make_shared<bool>(boost::any_cast<bool>(m["generateFinished"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("modelReduce") != m.end() && !m["modelReduce"].empty()) {
      modelReduce = make_shared<bool>(boost::any_cast<bool>(m["modelReduce"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResultUsage>(model1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult() = default;
};
class RunVideoAnalysisResponseBodyPayloadOutput : public Darabonba::Model {
public:
  shared_ptr<string> resultJsonFileUrl{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult> videoAnalysisResult{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult> videoCaptionResult{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult> videoGenerateResult{};
  shared_ptr<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults>> videoGenerateResults{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult> videoMindMappingGenerateResult{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult> videoShotSnapshotResult{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult> videoTitleGenerateResult{};

  RunVideoAnalysisResponseBodyPayloadOutput() {}

  explicit RunVideoAnalysisResponseBodyPayloadOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultJsonFileUrl) {
      res["resultJsonFileUrl"] = boost::any(*resultJsonFileUrl);
    }
    if (videoAnalysisResult) {
      res["videoAnalysisResult"] = videoAnalysisResult ? boost::any(videoAnalysisResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoCaptionResult) {
      res["videoCaptionResult"] = videoCaptionResult ? boost::any(videoCaptionResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoGenerateResult) {
      res["videoGenerateResult"] = videoGenerateResult ? boost::any(videoGenerateResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoGenerateResults) {
      vector<boost::any> temp1;
      for(auto item1:*videoGenerateResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoGenerateResults"] = boost::any(temp1);
    }
    if (videoMindMappingGenerateResult) {
      res["videoMindMappingGenerateResult"] = videoMindMappingGenerateResult ? boost::any(videoMindMappingGenerateResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoShotSnapshotResult) {
      res["videoShotSnapshotResult"] = videoShotSnapshotResult ? boost::any(videoShotSnapshotResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoTitleGenerateResult) {
      res["videoTitleGenerateResult"] = videoTitleGenerateResult ? boost::any(videoTitleGenerateResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resultJsonFileUrl") != m.end() && !m["resultJsonFileUrl"].empty()) {
      resultJsonFileUrl = make_shared<string>(boost::any_cast<string>(m["resultJsonFileUrl"]));
    }
    if (m.find("videoAnalysisResult") != m.end() && !m["videoAnalysisResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoAnalysisResult"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoAnalysisResult"]));
        videoAnalysisResult = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoAnalysisResult>(model1);
      }
    }
    if (m.find("videoCaptionResult") != m.end() && !m["videoCaptionResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoCaptionResult"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoCaptionResult"]));
        videoCaptionResult = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoCaptionResult>(model1);
      }
    }
    if (m.find("videoGenerateResult") != m.end() && !m["videoGenerateResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoGenerateResult"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoGenerateResult"]));
        videoGenerateResult = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResult>(model1);
      }
    }
    if (m.find("videoGenerateResults") != m.end() && !m["videoGenerateResults"].empty()) {
      if (typeid(vector<boost::any>) == m["videoGenerateResults"].type()) {
        vector<RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoGenerateResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoGenerateResults = make_shared<vector<RunVideoAnalysisResponseBodyPayloadOutputVideoGenerateResults>>(expect1);
      }
    }
    if (m.find("videoMindMappingGenerateResult") != m.end() && !m["videoMindMappingGenerateResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoMindMappingGenerateResult"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoMindMappingGenerateResult"]));
        videoMindMappingGenerateResult = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoMindMappingGenerateResult>(model1);
      }
    }
    if (m.find("videoShotSnapshotResult") != m.end() && !m["videoShotSnapshotResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoShotSnapshotResult"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoShotSnapshotResult"]));
        videoShotSnapshotResult = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoShotSnapshotResult>(model1);
      }
    }
    if (m.find("videoTitleGenerateResult") != m.end() && !m["videoTitleGenerateResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoTitleGenerateResult"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoTitleGenerateResult"]));
        videoTitleGenerateResult = make_shared<RunVideoAnalysisResponseBodyPayloadOutputVideoTitleGenerateResult>(model1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadOutput() = default;
};
class RunVideoAnalysisResponseBodyPayloadUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunVideoAnalysisResponseBodyPayloadUsage() {}

  explicit RunVideoAnalysisResponseBodyPayloadUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["totalTokens"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayloadUsage() = default;
};
class RunVideoAnalysisResponseBodyPayload : public Darabonba::Model {
public:
  shared_ptr<RunVideoAnalysisResponseBodyPayloadOutput> output{};
  shared_ptr<RunVideoAnalysisResponseBodyPayloadUsage> usage{};

  RunVideoAnalysisResponseBodyPayload() {}

  explicit RunVideoAnalysisResponseBodyPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usage) {
      res["usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      if (typeid(map<string, boost::any>) == m["output"].type()) {
        RunVideoAnalysisResponseBodyPayloadOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["output"]));
        output = make_shared<RunVideoAnalysisResponseBodyPayloadOutput>(model1);
      }
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["usage"].type()) {
        RunVideoAnalysisResponseBodyPayloadUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["usage"]));
        usage = make_shared<RunVideoAnalysisResponseBodyPayloadUsage>(model1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponseBodyPayload() = default;
};
class RunVideoAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<RunVideoAnalysisResponseBodyHeader> header{};
  shared_ptr<RunVideoAnalysisResponseBodyPayload> payload{};
  shared_ptr<string> requestId{};

  RunVideoAnalysisResponseBody() {}

  explicit RunVideoAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (header) {
      res["header"] = header ? boost::any(header->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("header") != m.end() && !m["header"].empty()) {
      if (typeid(map<string, boost::any>) == m["header"].type()) {
        RunVideoAnalysisResponseBodyHeader model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["header"]));
        header = make_shared<RunVideoAnalysisResponseBodyHeader>(model1);
      }
    }
    if (m.find("payload") != m.end() && !m["payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["payload"].type()) {
        RunVideoAnalysisResponseBodyPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["payload"]));
        payload = make_shared<RunVideoAnalysisResponseBodyPayload>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~RunVideoAnalysisResponseBody() = default;
};
class RunVideoAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunVideoAnalysisResponseBody> body{};

  RunVideoAnalysisResponse() {}

  explicit RunVideoAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunVideoAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunVideoAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~RunVideoAnalysisResponse() = default;
};
class SubmitEnterpriseVocAnalysisTaskRequestContents : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> text{};

  SubmitEnterpriseVocAnalysisTaskRequestContents() {}

  explicit SubmitEnterpriseVocAnalysisTaskRequestContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~SubmitEnterpriseVocAnalysisTaskRequestContents() = default;
};
class SubmitEnterpriseVocAnalysisTaskRequestFilterTags : public Darabonba::Model {
public:
  shared_ptr<string> tagDefinePrompt{};
  shared_ptr<string> tagName{};

  SubmitEnterpriseVocAnalysisTaskRequestFilterTags() {}

  explicit SubmitEnterpriseVocAnalysisTaskRequestFilterTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagDefinePrompt) {
      res["tagDefinePrompt"] = boost::any(*tagDefinePrompt);
    }
    if (tagName) {
      res["tagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagDefinePrompt") != m.end() && !m["tagDefinePrompt"].empty()) {
      tagDefinePrompt = make_shared<string>(boost::any_cast<string>(m["tagDefinePrompt"]));
    }
    if (m.find("tagName") != m.end() && !m["tagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["tagName"]));
    }
  }


  virtual ~SubmitEnterpriseVocAnalysisTaskRequestFilterTags() = default;
};
class SubmitEnterpriseVocAnalysisTaskRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> tagDefinePrompt{};
  shared_ptr<string> tagName{};

  SubmitEnterpriseVocAnalysisTaskRequestTags() {}

  explicit SubmitEnterpriseVocAnalysisTaskRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagDefinePrompt) {
      res["tagDefinePrompt"] = boost::any(*tagDefinePrompt);
    }
    if (tagName) {
      res["tagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagDefinePrompt") != m.end() && !m["tagDefinePrompt"].empty()) {
      tagDefinePrompt = make_shared<string>(boost::any_cast<string>(m["tagDefinePrompt"]));
    }
    if (m.find("tagName") != m.end() && !m["tagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["tagName"]));
    }
  }


  virtual ~SubmitEnterpriseVocAnalysisTaskRequestTags() = default;
};
class SubmitEnterpriseVocAnalysisTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiKey{};
  shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequestContents>> contents{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> fileKey{};
  shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags>> filterTags{};
  shared_ptr<string> modelId{};
  shared_ptr<string> outputFormat{};
  shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequestTags>> tags{};
  shared_ptr<string> taskDescription{};
  shared_ptr<string> url{};

  SubmitEnterpriseVocAnalysisTaskRequest() {}

  explicit SubmitEnterpriseVocAnalysisTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (contents) {
      vector<boost::any> temp1;
      for(auto item1:*contents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["contents"] = boost::any(temp1);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (fileKey) {
      res["fileKey"] = boost::any(*fileKey);
    }
    if (filterTags) {
      vector<boost::any> temp1;
      for(auto item1:*filterTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["filterTags"] = boost::any(temp1);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (outputFormat) {
      res["outputFormat"] = boost::any(*outputFormat);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (taskDescription) {
      res["taskDescription"] = boost::any(*taskDescription);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("contents") != m.end() && !m["contents"].empty()) {
      if (typeid(vector<boost::any>) == m["contents"].type()) {
        vector<SubmitEnterpriseVocAnalysisTaskRequestContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["contents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitEnterpriseVocAnalysisTaskRequestContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contents = make_shared<vector<SubmitEnterpriseVocAnalysisTaskRequestContents>>(expect1);
      }
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("fileKey") != m.end() && !m["fileKey"].empty()) {
      fileKey = make_shared<string>(boost::any_cast<string>(m["fileKey"]));
    }
    if (m.find("filterTags") != m.end() && !m["filterTags"].empty()) {
      if (typeid(vector<boost::any>) == m["filterTags"].type()) {
        vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["filterTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitEnterpriseVocAnalysisTaskRequestFilterTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filterTags = make_shared<vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags>>(expect1);
      }
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("outputFormat") != m.end() && !m["outputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["outputFormat"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<SubmitEnterpriseVocAnalysisTaskRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitEnterpriseVocAnalysisTaskRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<SubmitEnterpriseVocAnalysisTaskRequestTags>>(expect1);
      }
    }
    if (m.find("taskDescription") != m.end() && !m["taskDescription"].empty()) {
      taskDescription = make_shared<string>(boost::any_cast<string>(m["taskDescription"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~SubmitEnterpriseVocAnalysisTaskRequest() = default;
};
class SubmitEnterpriseVocAnalysisTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiKey{};
  shared_ptr<string> contentsShrink{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> fileKey{};
  shared_ptr<string> filterTagsShrink{};
  shared_ptr<string> modelId{};
  shared_ptr<string> outputFormat{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> taskDescription{};
  shared_ptr<string> url{};

  SubmitEnterpriseVocAnalysisTaskShrinkRequest() {}

  explicit SubmitEnterpriseVocAnalysisTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (contentsShrink) {
      res["contents"] = boost::any(*contentsShrink);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (fileKey) {
      res["fileKey"] = boost::any(*fileKey);
    }
    if (filterTagsShrink) {
      res["filterTags"] = boost::any(*filterTagsShrink);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (outputFormat) {
      res["outputFormat"] = boost::any(*outputFormat);
    }
    if (tagsShrink) {
      res["tags"] = boost::any(*tagsShrink);
    }
    if (taskDescription) {
      res["taskDescription"] = boost::any(*taskDescription);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("contents") != m.end() && !m["contents"].empty()) {
      contentsShrink = make_shared<string>(boost::any_cast<string>(m["contents"]));
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("fileKey") != m.end() && !m["fileKey"].empty()) {
      fileKey = make_shared<string>(boost::any_cast<string>(m["fileKey"]));
    }
    if (m.find("filterTags") != m.end() && !m["filterTags"].empty()) {
      filterTagsShrink = make_shared<string>(boost::any_cast<string>(m["filterTags"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("outputFormat") != m.end() && !m["outputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["outputFormat"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
    if (m.find("taskDescription") != m.end() && !m["taskDescription"].empty()) {
      taskDescription = make_shared<string>(boost::any_cast<string>(m["taskDescription"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~SubmitEnterpriseVocAnalysisTaskShrinkRequest() = default;
};
class SubmitEnterpriseVocAnalysisTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  SubmitEnterpriseVocAnalysisTaskResponseBodyData() {}

  explicit SubmitEnterpriseVocAnalysisTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitEnterpriseVocAnalysisTaskResponseBodyData() = default;
};
class SubmitEnterpriseVocAnalysisTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitEnterpriseVocAnalysisTaskResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitEnterpriseVocAnalysisTaskResponseBody() {}

  explicit SubmitEnterpriseVocAnalysisTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        SubmitEnterpriseVocAnalysisTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<SubmitEnterpriseVocAnalysisTaskResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
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


  virtual ~SubmitEnterpriseVocAnalysisTaskResponseBody() = default;
};
class SubmitEnterpriseVocAnalysisTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitEnterpriseVocAnalysisTaskResponseBody> body{};

  SubmitEnterpriseVocAnalysisTaskResponse() {}

  explicit SubmitEnterpriseVocAnalysisTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitEnterpriseVocAnalysisTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitEnterpriseVocAnalysisTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitEnterpriseVocAnalysisTaskResponse() = default;
};
class SubmitTagMiningAnalysisTaskRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> tagDefinePrompt{};
  shared_ptr<string> tagName{};

  SubmitTagMiningAnalysisTaskRequestTags() {}

  explicit SubmitTagMiningAnalysisTaskRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagDefinePrompt) {
      res["tagDefinePrompt"] = boost::any(*tagDefinePrompt);
    }
    if (tagName) {
      res["tagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagDefinePrompt") != m.end() && !m["tagDefinePrompt"].empty()) {
      tagDefinePrompt = make_shared<string>(boost::any_cast<string>(m["tagDefinePrompt"]));
    }
    if (m.find("tagName") != m.end() && !m["tagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["tagName"]));
    }
  }


  virtual ~SubmitTagMiningAnalysisTaskRequestTags() = default;
};
class SubmitTagMiningAnalysisTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiKey{};
  shared_ptr<string> businessType{};
  shared_ptr<vector<string>> contents{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> modelId{};
  shared_ptr<string> outputFormat{};
  shared_ptr<vector<SubmitTagMiningAnalysisTaskRequestTags>> tags{};
  shared_ptr<string> taskDescription{};
  shared_ptr<string> url{};

  SubmitTagMiningAnalysisTaskRequest() {}

  explicit SubmitTagMiningAnalysisTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (businessType) {
      res["businessType"] = boost::any(*businessType);
    }
    if (contents) {
      res["contents"] = boost::any(*contents);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (outputFormat) {
      res["outputFormat"] = boost::any(*outputFormat);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (taskDescription) {
      res["taskDescription"] = boost::any(*taskDescription);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("businessType") != m.end() && !m["businessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["businessType"]));
    }
    if (m.find("contents") != m.end() && !m["contents"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["contents"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["contents"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      contents = make_shared<vector<string>>(toVec1);
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("outputFormat") != m.end() && !m["outputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["outputFormat"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<SubmitTagMiningAnalysisTaskRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitTagMiningAnalysisTaskRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<SubmitTagMiningAnalysisTaskRequestTags>>(expect1);
      }
    }
    if (m.find("taskDescription") != m.end() && !m["taskDescription"].empty()) {
      taskDescription = make_shared<string>(boost::any_cast<string>(m["taskDescription"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~SubmitTagMiningAnalysisTaskRequest() = default;
};
class SubmitTagMiningAnalysisTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiKey{};
  shared_ptr<string> businessType{};
  shared_ptr<string> contentsShrink{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> modelId{};
  shared_ptr<string> outputFormat{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> taskDescription{};
  shared_ptr<string> url{};

  SubmitTagMiningAnalysisTaskShrinkRequest() {}

  explicit SubmitTagMiningAnalysisTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKey) {
      res["apiKey"] = boost::any(*apiKey);
    }
    if (businessType) {
      res["businessType"] = boost::any(*businessType);
    }
    if (contentsShrink) {
      res["contents"] = boost::any(*contentsShrink);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (outputFormat) {
      res["outputFormat"] = boost::any(*outputFormat);
    }
    if (tagsShrink) {
      res["tags"] = boost::any(*tagsShrink);
    }
    if (taskDescription) {
      res["taskDescription"] = boost::any(*taskDescription);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiKey") != m.end() && !m["apiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["apiKey"]));
    }
    if (m.find("businessType") != m.end() && !m["businessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["businessType"]));
    }
    if (m.find("contents") != m.end() && !m["contents"].empty()) {
      contentsShrink = make_shared<string>(boost::any_cast<string>(m["contents"]));
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("outputFormat") != m.end() && !m["outputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["outputFormat"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
    if (m.find("taskDescription") != m.end() && !m["taskDescription"].empty()) {
      taskDescription = make_shared<string>(boost::any_cast<string>(m["taskDescription"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~SubmitTagMiningAnalysisTaskShrinkRequest() = default;
};
class SubmitTagMiningAnalysisTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  SubmitTagMiningAnalysisTaskResponseBodyData() {}

  explicit SubmitTagMiningAnalysisTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitTagMiningAnalysisTaskResponseBodyData() = default;
};
class SubmitTagMiningAnalysisTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitTagMiningAnalysisTaskResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitTagMiningAnalysisTaskResponseBody() {}

  explicit SubmitTagMiningAnalysisTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        SubmitTagMiningAnalysisTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<SubmitTagMiningAnalysisTaskResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
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


  virtual ~SubmitTagMiningAnalysisTaskResponseBody() = default;
};
class SubmitTagMiningAnalysisTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitTagMiningAnalysisTaskResponseBody> body{};

  SubmitTagMiningAnalysisTaskResponse() {}

  explicit SubmitTagMiningAnalysisTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitTagMiningAnalysisTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitTagMiningAnalysisTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitTagMiningAnalysisTaskResponse() = default;
};
class SubmitVideoAnalysisTaskRequestFrameSampleMethod : public Darabonba::Model {
public:
  shared_ptr<double> interval{};
  shared_ptr<string> methodName{};
  shared_ptr<long> pixel{};

  SubmitVideoAnalysisTaskRequestFrameSampleMethod() {}

  explicit SubmitVideoAnalysisTaskRequestFrameSampleMethod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (interval) {
      res["interval"] = boost::any(*interval);
    }
    if (methodName) {
      res["methodName"] = boost::any(*methodName);
    }
    if (pixel) {
      res["pixel"] = boost::any(*pixel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("interval") != m.end() && !m["interval"].empty()) {
      interval = make_shared<double>(boost::any_cast<double>(m["interval"]));
    }
    if (m.find("methodName") != m.end() && !m["methodName"].empty()) {
      methodName = make_shared<string>(boost::any_cast<string>(m["methodName"]));
    }
    if (m.find("pixel") != m.end() && !m["pixel"].empty()) {
      pixel = make_shared<long>(boost::any_cast<long>(m["pixel"]));
    }
  }


  virtual ~SubmitVideoAnalysisTaskRequestFrameSampleMethod() = default;
};
class SubmitVideoAnalysisTaskRequestTextProcessTasks : public Darabonba::Model {
public:
  shared_ptr<string> modelCustomPromptTemplate{};
  shared_ptr<string> modelCustomPromptTemplateId{};
  shared_ptr<string> modelId{};

  SubmitVideoAnalysisTaskRequestTextProcessTasks() {}

  explicit SubmitVideoAnalysisTaskRequestTextProcessTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelCustomPromptTemplate) {
      res["modelCustomPromptTemplate"] = boost::any(*modelCustomPromptTemplate);
    }
    if (modelCustomPromptTemplateId) {
      res["modelCustomPromptTemplateId"] = boost::any(*modelCustomPromptTemplateId);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("modelCustomPromptTemplate") != m.end() && !m["modelCustomPromptTemplate"].empty()) {
      modelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplate"]));
    }
    if (m.find("modelCustomPromptTemplateId") != m.end() && !m["modelCustomPromptTemplateId"].empty()) {
      modelCustomPromptTemplateId = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplateId"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
  }


  virtual ~SubmitVideoAnalysisTaskRequestTextProcessTasks() = default;
};
class SubmitVideoAnalysisTaskRequestVideoCaptionInfoVideoCaptions : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> speaker{};
  shared_ptr<long> startTime{};
  shared_ptr<string> text{};

  SubmitVideoAnalysisTaskRequestVideoCaptionInfoVideoCaptions() {}

  explicit SubmitVideoAnalysisTaskRequestVideoCaptionInfoVideoCaptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (speaker) {
      res["speaker"] = boost::any(*speaker);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("speaker") != m.end() && !m["speaker"].empty()) {
      speaker = make_shared<string>(boost::any_cast<string>(m["speaker"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~SubmitVideoAnalysisTaskRequestVideoCaptionInfoVideoCaptions() = default;
};
class SubmitVideoAnalysisTaskRequestVideoCaptionInfo : public Darabonba::Model {
public:
  shared_ptr<string> videoCaptionFileUrl{};
  shared_ptr<vector<SubmitVideoAnalysisTaskRequestVideoCaptionInfoVideoCaptions>> videoCaptions{};

  SubmitVideoAnalysisTaskRequestVideoCaptionInfo() {}

  explicit SubmitVideoAnalysisTaskRequestVideoCaptionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoCaptionFileUrl) {
      res["videoCaptionFileUrl"] = boost::any(*videoCaptionFileUrl);
    }
    if (videoCaptions) {
      vector<boost::any> temp1;
      for(auto item1:*videoCaptions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoCaptions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("videoCaptionFileUrl") != m.end() && !m["videoCaptionFileUrl"].empty()) {
      videoCaptionFileUrl = make_shared<string>(boost::any_cast<string>(m["videoCaptionFileUrl"]));
    }
    if (m.find("videoCaptions") != m.end() && !m["videoCaptions"].empty()) {
      if (typeid(vector<boost::any>) == m["videoCaptions"].type()) {
        vector<SubmitVideoAnalysisTaskRequestVideoCaptionInfoVideoCaptions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoCaptions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitVideoAnalysisTaskRequestVideoCaptionInfoVideoCaptions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoCaptions = make_shared<vector<SubmitVideoAnalysisTaskRequestVideoCaptionInfoVideoCaptions>>(expect1);
      }
    }
  }


  virtual ~SubmitVideoAnalysisTaskRequestVideoCaptionInfo() = default;
};
class SubmitVideoAnalysisTaskRequestVideoRoles : public Darabonba::Model {
public:
  shared_ptr<string> roleInfo{};
  shared_ptr<string> roleName{};
  shared_ptr<vector<string>> urls{};

  SubmitVideoAnalysisTaskRequestVideoRoles() {}

  explicit SubmitVideoAnalysisTaskRequestVideoRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleInfo) {
      res["roleInfo"] = boost::any(*roleInfo);
    }
    if (roleName) {
      res["roleName"] = boost::any(*roleName);
    }
    if (urls) {
      res["urls"] = boost::any(*urls);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("roleInfo") != m.end() && !m["roleInfo"].empty()) {
      roleInfo = make_shared<string>(boost::any_cast<string>(m["roleInfo"]));
    }
    if (m.find("roleName") != m.end() && !m["roleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["roleName"]));
    }
    if (m.find("urls") != m.end() && !m["urls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["urls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["urls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      urls = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SubmitVideoAnalysisTaskRequestVideoRoles() = default;
};
class SubmitVideoAnalysisTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> deduplicationId{};
  shared_ptr<vector<string>> excludeGenerateOptions{};
  shared_ptr<double> faceIdentitySimilarityMinScore{};
  shared_ptr<SubmitVideoAnalysisTaskRequestFrameSampleMethod> frameSampleMethod{};
  shared_ptr<vector<string>> generateOptions{};
  shared_ptr<string> language{};
  shared_ptr<string> modelCustomPromptTemplate{};
  shared_ptr<string> modelCustomPromptTemplateId{};
  shared_ptr<string> modelId{};
  shared_ptr<double> snapshotInterval{};
  shared_ptr<long> splitInterval{};
  shared_ptr<vector<SubmitVideoAnalysisTaskRequestTextProcessTasks>> textProcessTasks{};
  shared_ptr<SubmitVideoAnalysisTaskRequestVideoCaptionInfo> videoCaptionInfo{};
  shared_ptr<string> videoExtraInfo{};
  shared_ptr<string> videoModelCustomPromptTemplate{};
  shared_ptr<string> videoModelId{};
  shared_ptr<vector<SubmitVideoAnalysisTaskRequestVideoRoles>> videoRoles{};
  shared_ptr<long> videoShotFaceIdentityCount{};
  shared_ptr<string> videoUrl{};

  SubmitVideoAnalysisTaskRequest() {}

  explicit SubmitVideoAnalysisTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deduplicationId) {
      res["deduplicationId"] = boost::any(*deduplicationId);
    }
    if (excludeGenerateOptions) {
      res["excludeGenerateOptions"] = boost::any(*excludeGenerateOptions);
    }
    if (faceIdentitySimilarityMinScore) {
      res["faceIdentitySimilarityMinScore"] = boost::any(*faceIdentitySimilarityMinScore);
    }
    if (frameSampleMethod) {
      res["frameSampleMethod"] = frameSampleMethod ? boost::any(frameSampleMethod->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (generateOptions) {
      res["generateOptions"] = boost::any(*generateOptions);
    }
    if (language) {
      res["language"] = boost::any(*language);
    }
    if (modelCustomPromptTemplate) {
      res["modelCustomPromptTemplate"] = boost::any(*modelCustomPromptTemplate);
    }
    if (modelCustomPromptTemplateId) {
      res["modelCustomPromptTemplateId"] = boost::any(*modelCustomPromptTemplateId);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (snapshotInterval) {
      res["snapshotInterval"] = boost::any(*snapshotInterval);
    }
    if (splitInterval) {
      res["splitInterval"] = boost::any(*splitInterval);
    }
    if (textProcessTasks) {
      vector<boost::any> temp1;
      for(auto item1:*textProcessTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["textProcessTasks"] = boost::any(temp1);
    }
    if (videoCaptionInfo) {
      res["videoCaptionInfo"] = videoCaptionInfo ? boost::any(videoCaptionInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoExtraInfo) {
      res["videoExtraInfo"] = boost::any(*videoExtraInfo);
    }
    if (videoModelCustomPromptTemplate) {
      res["videoModelCustomPromptTemplate"] = boost::any(*videoModelCustomPromptTemplate);
    }
    if (videoModelId) {
      res["videoModelId"] = boost::any(*videoModelId);
    }
    if (videoRoles) {
      vector<boost::any> temp1;
      for(auto item1:*videoRoles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["videoRoles"] = boost::any(temp1);
    }
    if (videoShotFaceIdentityCount) {
      res["videoShotFaceIdentityCount"] = boost::any(*videoShotFaceIdentityCount);
    }
    if (videoUrl) {
      res["videoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deduplicationId") != m.end() && !m["deduplicationId"].empty()) {
      deduplicationId = make_shared<string>(boost::any_cast<string>(m["deduplicationId"]));
    }
    if (m.find("excludeGenerateOptions") != m.end() && !m["excludeGenerateOptions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["excludeGenerateOptions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["excludeGenerateOptions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeGenerateOptions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("faceIdentitySimilarityMinScore") != m.end() && !m["faceIdentitySimilarityMinScore"].empty()) {
      faceIdentitySimilarityMinScore = make_shared<double>(boost::any_cast<double>(m["faceIdentitySimilarityMinScore"]));
    }
    if (m.find("frameSampleMethod") != m.end() && !m["frameSampleMethod"].empty()) {
      if (typeid(map<string, boost::any>) == m["frameSampleMethod"].type()) {
        SubmitVideoAnalysisTaskRequestFrameSampleMethod model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["frameSampleMethod"]));
        frameSampleMethod = make_shared<SubmitVideoAnalysisTaskRequestFrameSampleMethod>(model1);
      }
    }
    if (m.find("generateOptions") != m.end() && !m["generateOptions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["generateOptions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["generateOptions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      generateOptions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("language") != m.end() && !m["language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["language"]));
    }
    if (m.find("modelCustomPromptTemplate") != m.end() && !m["modelCustomPromptTemplate"].empty()) {
      modelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplate"]));
    }
    if (m.find("modelCustomPromptTemplateId") != m.end() && !m["modelCustomPromptTemplateId"].empty()) {
      modelCustomPromptTemplateId = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplateId"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("snapshotInterval") != m.end() && !m["snapshotInterval"].empty()) {
      snapshotInterval = make_shared<double>(boost::any_cast<double>(m["snapshotInterval"]));
    }
    if (m.find("splitInterval") != m.end() && !m["splitInterval"].empty()) {
      splitInterval = make_shared<long>(boost::any_cast<long>(m["splitInterval"]));
    }
    if (m.find("textProcessTasks") != m.end() && !m["textProcessTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["textProcessTasks"].type()) {
        vector<SubmitVideoAnalysisTaskRequestTextProcessTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["textProcessTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitVideoAnalysisTaskRequestTextProcessTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        textProcessTasks = make_shared<vector<SubmitVideoAnalysisTaskRequestTextProcessTasks>>(expect1);
      }
    }
    if (m.find("videoCaptionInfo") != m.end() && !m["videoCaptionInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["videoCaptionInfo"].type()) {
        SubmitVideoAnalysisTaskRequestVideoCaptionInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["videoCaptionInfo"]));
        videoCaptionInfo = make_shared<SubmitVideoAnalysisTaskRequestVideoCaptionInfo>(model1);
      }
    }
    if (m.find("videoExtraInfo") != m.end() && !m["videoExtraInfo"].empty()) {
      videoExtraInfo = make_shared<string>(boost::any_cast<string>(m["videoExtraInfo"]));
    }
    if (m.find("videoModelCustomPromptTemplate") != m.end() && !m["videoModelCustomPromptTemplate"].empty()) {
      videoModelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["videoModelCustomPromptTemplate"]));
    }
    if (m.find("videoModelId") != m.end() && !m["videoModelId"].empty()) {
      videoModelId = make_shared<string>(boost::any_cast<string>(m["videoModelId"]));
    }
    if (m.find("videoRoles") != m.end() && !m["videoRoles"].empty()) {
      if (typeid(vector<boost::any>) == m["videoRoles"].type()) {
        vector<SubmitVideoAnalysisTaskRequestVideoRoles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["videoRoles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitVideoAnalysisTaskRequestVideoRoles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoRoles = make_shared<vector<SubmitVideoAnalysisTaskRequestVideoRoles>>(expect1);
      }
    }
    if (m.find("videoShotFaceIdentityCount") != m.end() && !m["videoShotFaceIdentityCount"].empty()) {
      videoShotFaceIdentityCount = make_shared<long>(boost::any_cast<long>(m["videoShotFaceIdentityCount"]));
    }
    if (m.find("videoUrl") != m.end() && !m["videoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["videoUrl"]));
    }
  }


  virtual ~SubmitVideoAnalysisTaskRequest() = default;
};
class SubmitVideoAnalysisTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deduplicationId{};
  shared_ptr<string> excludeGenerateOptionsShrink{};
  shared_ptr<double> faceIdentitySimilarityMinScore{};
  shared_ptr<string> frameSampleMethodShrink{};
  shared_ptr<string> generateOptionsShrink{};
  shared_ptr<string> language{};
  shared_ptr<string> modelCustomPromptTemplate{};
  shared_ptr<string> modelCustomPromptTemplateId{};
  shared_ptr<string> modelId{};
  shared_ptr<double> snapshotInterval{};
  shared_ptr<long> splitInterval{};
  shared_ptr<string> textProcessTasksShrink{};
  shared_ptr<string> videoCaptionInfoShrink{};
  shared_ptr<string> videoExtraInfo{};
  shared_ptr<string> videoModelCustomPromptTemplate{};
  shared_ptr<string> videoModelId{};
  shared_ptr<string> videoRolesShrink{};
  shared_ptr<long> videoShotFaceIdentityCount{};
  shared_ptr<string> videoUrl{};

  SubmitVideoAnalysisTaskShrinkRequest() {}

  explicit SubmitVideoAnalysisTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deduplicationId) {
      res["deduplicationId"] = boost::any(*deduplicationId);
    }
    if (excludeGenerateOptionsShrink) {
      res["excludeGenerateOptions"] = boost::any(*excludeGenerateOptionsShrink);
    }
    if (faceIdentitySimilarityMinScore) {
      res["faceIdentitySimilarityMinScore"] = boost::any(*faceIdentitySimilarityMinScore);
    }
    if (frameSampleMethodShrink) {
      res["frameSampleMethod"] = boost::any(*frameSampleMethodShrink);
    }
    if (generateOptionsShrink) {
      res["generateOptions"] = boost::any(*generateOptionsShrink);
    }
    if (language) {
      res["language"] = boost::any(*language);
    }
    if (modelCustomPromptTemplate) {
      res["modelCustomPromptTemplate"] = boost::any(*modelCustomPromptTemplate);
    }
    if (modelCustomPromptTemplateId) {
      res["modelCustomPromptTemplateId"] = boost::any(*modelCustomPromptTemplateId);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (snapshotInterval) {
      res["snapshotInterval"] = boost::any(*snapshotInterval);
    }
    if (splitInterval) {
      res["splitInterval"] = boost::any(*splitInterval);
    }
    if (textProcessTasksShrink) {
      res["textProcessTasks"] = boost::any(*textProcessTasksShrink);
    }
    if (videoCaptionInfoShrink) {
      res["videoCaptionInfo"] = boost::any(*videoCaptionInfoShrink);
    }
    if (videoExtraInfo) {
      res["videoExtraInfo"] = boost::any(*videoExtraInfo);
    }
    if (videoModelCustomPromptTemplate) {
      res["videoModelCustomPromptTemplate"] = boost::any(*videoModelCustomPromptTemplate);
    }
    if (videoModelId) {
      res["videoModelId"] = boost::any(*videoModelId);
    }
    if (videoRolesShrink) {
      res["videoRoles"] = boost::any(*videoRolesShrink);
    }
    if (videoShotFaceIdentityCount) {
      res["videoShotFaceIdentityCount"] = boost::any(*videoShotFaceIdentityCount);
    }
    if (videoUrl) {
      res["videoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deduplicationId") != m.end() && !m["deduplicationId"].empty()) {
      deduplicationId = make_shared<string>(boost::any_cast<string>(m["deduplicationId"]));
    }
    if (m.find("excludeGenerateOptions") != m.end() && !m["excludeGenerateOptions"].empty()) {
      excludeGenerateOptionsShrink = make_shared<string>(boost::any_cast<string>(m["excludeGenerateOptions"]));
    }
    if (m.find("faceIdentitySimilarityMinScore") != m.end() && !m["faceIdentitySimilarityMinScore"].empty()) {
      faceIdentitySimilarityMinScore = make_shared<double>(boost::any_cast<double>(m["faceIdentitySimilarityMinScore"]));
    }
    if (m.find("frameSampleMethod") != m.end() && !m["frameSampleMethod"].empty()) {
      frameSampleMethodShrink = make_shared<string>(boost::any_cast<string>(m["frameSampleMethod"]));
    }
    if (m.find("generateOptions") != m.end() && !m["generateOptions"].empty()) {
      generateOptionsShrink = make_shared<string>(boost::any_cast<string>(m["generateOptions"]));
    }
    if (m.find("language") != m.end() && !m["language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["language"]));
    }
    if (m.find("modelCustomPromptTemplate") != m.end() && !m["modelCustomPromptTemplate"].empty()) {
      modelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplate"]));
    }
    if (m.find("modelCustomPromptTemplateId") != m.end() && !m["modelCustomPromptTemplateId"].empty()) {
      modelCustomPromptTemplateId = make_shared<string>(boost::any_cast<string>(m["modelCustomPromptTemplateId"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("snapshotInterval") != m.end() && !m["snapshotInterval"].empty()) {
      snapshotInterval = make_shared<double>(boost::any_cast<double>(m["snapshotInterval"]));
    }
    if (m.find("splitInterval") != m.end() && !m["splitInterval"].empty()) {
      splitInterval = make_shared<long>(boost::any_cast<long>(m["splitInterval"]));
    }
    if (m.find("textProcessTasks") != m.end() && !m["textProcessTasks"].empty()) {
      textProcessTasksShrink = make_shared<string>(boost::any_cast<string>(m["textProcessTasks"]));
    }
    if (m.find("videoCaptionInfo") != m.end() && !m["videoCaptionInfo"].empty()) {
      videoCaptionInfoShrink = make_shared<string>(boost::any_cast<string>(m["videoCaptionInfo"]));
    }
    if (m.find("videoExtraInfo") != m.end() && !m["videoExtraInfo"].empty()) {
      videoExtraInfo = make_shared<string>(boost::any_cast<string>(m["videoExtraInfo"]));
    }
    if (m.find("videoModelCustomPromptTemplate") != m.end() && !m["videoModelCustomPromptTemplate"].empty()) {
      videoModelCustomPromptTemplate = make_shared<string>(boost::any_cast<string>(m["videoModelCustomPromptTemplate"]));
    }
    if (m.find("videoModelId") != m.end() && !m["videoModelId"].empty()) {
      videoModelId = make_shared<string>(boost::any_cast<string>(m["videoModelId"]));
    }
    if (m.find("videoRoles") != m.end() && !m["videoRoles"].empty()) {
      videoRolesShrink = make_shared<string>(boost::any_cast<string>(m["videoRoles"]));
    }
    if (m.find("videoShotFaceIdentityCount") != m.end() && !m["videoShotFaceIdentityCount"].empty()) {
      videoShotFaceIdentityCount = make_shared<long>(boost::any_cast<long>(m["videoShotFaceIdentityCount"]));
    }
    if (m.find("videoUrl") != m.end() && !m["videoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["videoUrl"]));
    }
  }


  virtual ~SubmitVideoAnalysisTaskShrinkRequest() = default;
};
class SubmitVideoAnalysisTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  SubmitVideoAnalysisTaskResponseBodyData() {}

  explicit SubmitVideoAnalysisTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitVideoAnalysisTaskResponseBodyData() = default;
};
class SubmitVideoAnalysisTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitVideoAnalysisTaskResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitVideoAnalysisTaskResponseBody() {}

  explicit SubmitVideoAnalysisTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        SubmitVideoAnalysisTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<SubmitVideoAnalysisTaskResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
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


  virtual ~SubmitVideoAnalysisTaskResponseBody() = default;
};
class SubmitVideoAnalysisTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitVideoAnalysisTaskResponseBody> body{};

  SubmitVideoAnalysisTaskResponse() {}

  explicit SubmitVideoAnalysisTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitVideoAnalysisTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitVideoAnalysisTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitVideoAnalysisTaskResponse() = default;
};
class UpdateVideoAnalysisConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> asyncConcurrency{};

  UpdateVideoAnalysisConfigRequest() {}

  explicit UpdateVideoAnalysisConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asyncConcurrency) {
      res["asyncConcurrency"] = boost::any(*asyncConcurrency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("asyncConcurrency") != m.end() && !m["asyncConcurrency"].empty()) {
      asyncConcurrency = make_shared<long>(boost::any_cast<long>(m["asyncConcurrency"]));
    }
  }


  virtual ~UpdateVideoAnalysisConfigRequest() = default;
};
class UpdateVideoAnalysisConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateVideoAnalysisConfigResponseBody() {}

  explicit UpdateVideoAnalysisConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
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


  virtual ~UpdateVideoAnalysisConfigResponseBody() = default;
};
class UpdateVideoAnalysisConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateVideoAnalysisConfigResponseBody> body{};

  UpdateVideoAnalysisConfigResponse() {}

  explicit UpdateVideoAnalysisConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateVideoAnalysisConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVideoAnalysisConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVideoAnalysisConfigResponse() = default;
};
class UpdateVideoAnalysisTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};

  UpdateVideoAnalysisTaskRequest() {}

  explicit UpdateVideoAnalysisTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["taskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("taskStatus") != m.end() && !m["taskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["taskStatus"]));
    }
  }


  virtual ~UpdateVideoAnalysisTaskRequest() = default;
};
class UpdateVideoAnalysisTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskErrorMessage{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};

  UpdateVideoAnalysisTaskResponseBodyData() {}

  explicit UpdateVideoAnalysisTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskErrorMessage) {
      res["taskErrorMessage"] = boost::any(*taskErrorMessage);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["taskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskErrorMessage") != m.end() && !m["taskErrorMessage"].empty()) {
      taskErrorMessage = make_shared<string>(boost::any_cast<string>(m["taskErrorMessage"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("taskStatus") != m.end() && !m["taskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["taskStatus"]));
    }
  }


  virtual ~UpdateVideoAnalysisTaskResponseBodyData() = default;
};
class UpdateVideoAnalysisTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateVideoAnalysisTaskResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateVideoAnalysisTaskResponseBody() {}

  explicit UpdateVideoAnalysisTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        UpdateVideoAnalysisTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<UpdateVideoAnalysisTaskResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
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


  virtual ~UpdateVideoAnalysisTaskResponseBody() = default;
};
class UpdateVideoAnalysisTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateVideoAnalysisTaskResponseBody> body{};

  UpdateVideoAnalysisTaskResponse() {}

  explicit UpdateVideoAnalysisTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateVideoAnalysisTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVideoAnalysisTaskResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVideoAnalysisTaskResponse() = default;
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
  CancelAsyncTaskResponse cancelAsyncTaskWithOptions(shared_ptr<string> workspaceId,
                                                     shared_ptr<CancelAsyncTaskRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelAsyncTaskResponse cancelAsyncTask(shared_ptr<string> workspaceId, shared_ptr<CancelAsyncTaskRequest> request);
  ExportAnalysisTagDetailByTaskIdResponse exportAnalysisTagDetailByTaskIdWithOptions(shared_ptr<string> workspaceId,
                                                                                     shared_ptr<ExportAnalysisTagDetailByTaskIdRequest> tmpReq,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportAnalysisTagDetailByTaskIdResponse exportAnalysisTagDetailByTaskId(shared_ptr<string> workspaceId, shared_ptr<ExportAnalysisTagDetailByTaskIdRequest> request);
  GenerateBroadcastNewsResponse generateBroadcastNewsWithOptions(shared_ptr<string> workspaceId,
                                                                 shared_ptr<GenerateBroadcastNewsRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateBroadcastNewsResponse generateBroadcastNews(shared_ptr<string> workspaceId, shared_ptr<GenerateBroadcastNewsRequest> request);
  GenerateOutputFormatResponse generateOutputFormatWithOptions(shared_ptr<string> workspaceId,
                                                               shared_ptr<GenerateOutputFormatRequest> tmpReq,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateOutputFormatResponse generateOutputFormat(shared_ptr<string> workspaceId, shared_ptr<GenerateOutputFormatRequest> request);
  GetEnterpriseVocAnalysisTaskResponse getEnterpriseVocAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                               shared_ptr<GetEnterpriseVocAnalysisTaskRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnterpriseVocAnalysisTaskResponse getEnterpriseVocAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<GetEnterpriseVocAnalysisTaskRequest> request);
  GetTagMiningAnalysisTaskResponse getTagMiningAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                       shared_ptr<GetTagMiningAnalysisTaskRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTagMiningAnalysisTaskResponse getTagMiningAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<GetTagMiningAnalysisTaskRequest> request);
  GetVideoAnalysisConfigResponse getVideoAnalysisConfigWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVideoAnalysisConfigResponse getVideoAnalysisConfig(shared_ptr<string> workspaceId);
  GetVideoAnalysisTaskResponse getVideoAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                               shared_ptr<GetVideoAnalysisTaskRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVideoAnalysisTaskResponse getVideoAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<GetVideoAnalysisTaskRequest> request);
  ListAnalysisTagDetailByTaskIdResponse listAnalysisTagDetailByTaskIdWithOptions(shared_ptr<string> workspaceId,
                                                                                 shared_ptr<ListAnalysisTagDetailByTaskIdRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAnalysisTagDetailByTaskIdResponse listAnalysisTagDetailByTaskId(shared_ptr<string> workspaceId, shared_ptr<ListAnalysisTagDetailByTaskIdRequest> request);
  ListHotTopicSummariesResponse listHotTopicSummariesWithOptions(shared_ptr<string> workspaceId,
                                                                 shared_ptr<ListHotTopicSummariesRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHotTopicSummariesResponse listHotTopicSummaries(shared_ptr<string> workspaceId, shared_ptr<ListHotTopicSummariesRequest> request);
  RunEnterpriseVocAnalysisResponse runEnterpriseVocAnalysisWithOptions(shared_ptr<string> workspaceId,
                                                                       shared_ptr<RunEnterpriseVocAnalysisRequest> tmpReq,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunEnterpriseVocAnalysisResponse runEnterpriseVocAnalysis(shared_ptr<string> workspaceId, shared_ptr<RunEnterpriseVocAnalysisRequest> request);
  RunHotTopicChatResponse runHotTopicChatWithOptions(shared_ptr<string> workspaceId,
                                                     shared_ptr<RunHotTopicChatRequest> tmpReq,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunHotTopicChatResponse runHotTopicChat(shared_ptr<string> workspaceId, shared_ptr<RunHotTopicChatRequest> request);
  RunHotTopicSummaryResponse runHotTopicSummaryWithOptions(shared_ptr<string> workspaceId,
                                                           shared_ptr<RunHotTopicSummaryRequest> tmpReq,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunHotTopicSummaryResponse runHotTopicSummary(shared_ptr<string> workspaceId, shared_ptr<RunHotTopicSummaryRequest> request);
  RunMarketingInformationExtractResponse runMarketingInformationExtractWithOptions(shared_ptr<string> workspaceId,
                                                                                   shared_ptr<RunMarketingInformationExtractRequest> tmpReq,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunMarketingInformationExtractResponse runMarketingInformationExtract(shared_ptr<string> workspaceId, shared_ptr<RunMarketingInformationExtractRequest> request);
  RunMarketingInformationWritingResponse runMarketingInformationWritingWithOptions(shared_ptr<string> workspaceId,
                                                                                   shared_ptr<RunMarketingInformationWritingRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunMarketingInformationWritingResponse runMarketingInformationWriting(shared_ptr<string> workspaceId, shared_ptr<RunMarketingInformationWritingRequest> request);
  RunNetworkContentAuditResponse runNetworkContentAuditWithOptions(shared_ptr<string> workspaceId,
                                                                   shared_ptr<RunNetworkContentAuditRequest> tmpReq,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunNetworkContentAuditResponse runNetworkContentAudit(shared_ptr<string> workspaceId, shared_ptr<RunNetworkContentAuditRequest> request);
  RunScriptChatResponse runScriptChatWithOptions(shared_ptr<string> workspaceId,
                                                 shared_ptr<RunScriptChatRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunScriptChatResponse runScriptChat(shared_ptr<string> workspaceId, shared_ptr<RunScriptChatRequest> request);
  RunScriptContinueResponse runScriptContinueWithOptions(shared_ptr<string> workspaceId,
                                                         shared_ptr<RunScriptContinueRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunScriptContinueResponse runScriptContinue(shared_ptr<string> workspaceId, shared_ptr<RunScriptContinueRequest> request);
  RunScriptPlanningResponse runScriptPlanningWithOptions(shared_ptr<string> workspaceId,
                                                         shared_ptr<RunScriptPlanningRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunScriptPlanningResponse runScriptPlanning(shared_ptr<string> workspaceId, shared_ptr<RunScriptPlanningRequest> request);
  RunScriptRefineResponse runScriptRefineWithOptions(shared_ptr<string> workspaceId,
                                                     shared_ptr<RunScriptRefineRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunScriptRefineResponse runScriptRefine(shared_ptr<string> workspaceId, shared_ptr<RunScriptRefineRequest> request);
  RunStyleWritingResponse runStyleWritingWithOptions(shared_ptr<string> workspaceId,
                                                     shared_ptr<RunStyleWritingRequest> tmpReq,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunStyleWritingResponse runStyleWriting(shared_ptr<string> workspaceId, shared_ptr<RunStyleWritingRequest> request);
  RunTagMiningAnalysisResponse runTagMiningAnalysisWithOptions(shared_ptr<string> workspaceId,
                                                               shared_ptr<RunTagMiningAnalysisRequest> tmpReq,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunTagMiningAnalysisResponse runTagMiningAnalysis(shared_ptr<string> workspaceId, shared_ptr<RunTagMiningAnalysisRequest> request);
  RunVideoAnalysisResponse runVideoAnalysisWithOptions(shared_ptr<string> workspaceId,
                                                       shared_ptr<RunVideoAnalysisRequest> tmpReq,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunVideoAnalysisResponse runVideoAnalysis(shared_ptr<string> workspaceId, shared_ptr<RunVideoAnalysisRequest> request);
  SubmitEnterpriseVocAnalysisTaskResponse submitEnterpriseVocAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                     shared_ptr<SubmitEnterpriseVocAnalysisTaskRequest> tmpReq,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitEnterpriseVocAnalysisTaskResponse submitEnterpriseVocAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<SubmitEnterpriseVocAnalysisTaskRequest> request);
  SubmitTagMiningAnalysisTaskResponse submitTagMiningAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                             shared_ptr<SubmitTagMiningAnalysisTaskRequest> tmpReq,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitTagMiningAnalysisTaskResponse submitTagMiningAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<SubmitTagMiningAnalysisTaskRequest> request);
  SubmitVideoAnalysisTaskResponse submitVideoAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                     shared_ptr<SubmitVideoAnalysisTaskRequest> tmpReq,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitVideoAnalysisTaskResponse submitVideoAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<SubmitVideoAnalysisTaskRequest> request);
  UpdateVideoAnalysisConfigResponse updateVideoAnalysisConfigWithOptions(shared_ptr<string> workspaceId,
                                                                         shared_ptr<UpdateVideoAnalysisConfigRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVideoAnalysisConfigResponse updateVideoAnalysisConfig(shared_ptr<string> workspaceId, shared_ptr<UpdateVideoAnalysisConfigRequest> request);
  UpdateVideoAnalysisTaskResponse updateVideoAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                     shared_ptr<UpdateVideoAnalysisTaskRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVideoAnalysisTaskResponse updateVideoAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<UpdateVideoAnalysisTaskRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_QuanMiaoLightApp20240801

#endif
