// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_NLS-FILETRANS20180817_H_
#define ALIBABACLOUD_NLS-FILETRANS20180817_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Nls-filetrans20180817 {
class GetTaskResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetTaskResultRequest() {}

  explicit GetTaskResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTaskResultRequest() = default;
};
class GetTaskResultResponseBodyResultWords : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> word{};
  shared_ptr<long> beginTime{};
  shared_ptr<long> channelId{};

  GetTaskResultResponseBodyResultWords() {}

  explicit GetTaskResultResponseBodyResultWords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (word) {
      res["Word"] = boost::any(*word);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<long>(boost::any_cast<long>(m["ChannelId"]));
    }
  }


  virtual ~GetTaskResultResponseBodyResultWords() = default;
};
class GetTaskResultResponseBodyResultParagraphs : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> beginTime{};
  shared_ptr<long> channelId{};
  shared_ptr<string> text{};

  GetTaskResultResponseBodyResultParagraphs() {}

  explicit GetTaskResultResponseBodyResultParagraphs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<long>(boost::any_cast<long>(m["ChannelId"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetTaskResultResponseBodyResultParagraphs() = default;
};
class GetTaskResultResponseBodyResultSentences : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> beginTime{};
  shared_ptr<long> channelId{};
  shared_ptr<double> emotionValue{};
  shared_ptr<string> text{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> speakerId{};
  shared_ptr<long> silenceDuration{};

  GetTaskResultResponseBodyResultSentences() {}

  explicit GetTaskResultResponseBodyResultSentences(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (speakerId) {
      res["SpeakerId"] = boost::any(*speakerId);
    }
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<long>(boost::any_cast<long>(m["ChannelId"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<double>(boost::any_cast<double>(m["EmotionValue"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("SpeakerId") != m.end() && !m["SpeakerId"].empty()) {
      speakerId = make_shared<string>(boost::any_cast<string>(m["SpeakerId"]));
    }
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
  }


  virtual ~GetTaskResultResponseBodyResultSentences() = default;
};
class GetTaskResultResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<GetTaskResultResponseBodyResultWords>> words{};
  shared_ptr<vector<GetTaskResultResponseBodyResultParagraphs>> paragraphs{};
  shared_ptr<vector<GetTaskResultResponseBodyResultSentences>> sentences{};

  GetTaskResultResponseBodyResult() {}

  explicit GetTaskResultResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (words) {
      vector<boost::any> temp1;
      for(auto item1:*words){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Words"] = boost::any(temp1);
    }
    if (paragraphs) {
      vector<boost::any> temp1;
      for(auto item1:*paragraphs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Paragraphs"] = boost::any(temp1);
    }
    if (sentences) {
      vector<boost::any> temp1;
      for(auto item1:*sentences){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sentences"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Words") != m.end() && !m["Words"].empty()) {
      if (typeid(vector<boost::any>) == m["Words"].type()) {
        vector<GetTaskResultResponseBodyResultWords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Words"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskResultResponseBodyResultWords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        words = make_shared<vector<GetTaskResultResponseBodyResultWords>>(expect1);
      }
    }
    if (m.find("Paragraphs") != m.end() && !m["Paragraphs"].empty()) {
      if (typeid(vector<boost::any>) == m["Paragraphs"].type()) {
        vector<GetTaskResultResponseBodyResultParagraphs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Paragraphs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskResultResponseBodyResultParagraphs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paragraphs = make_shared<vector<GetTaskResultResponseBodyResultParagraphs>>(expect1);
      }
    }
    if (m.find("Sentences") != m.end() && !m["Sentences"].empty()) {
      if (typeid(vector<boost::any>) == m["Sentences"].type()) {
        vector<GetTaskResultResponseBodyResultSentences> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sentences"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskResultResponseBodyResultSentences model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sentences = make_shared<vector<GetTaskResultResponseBodyResultSentences>>(expect1);
      }
    }
  }


  virtual ~GetTaskResultResponseBodyResult() = default;
};
class GetTaskResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> statusText{};
  shared_ptr<long> bizDuration{};
  shared_ptr<long> solveTime{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskResultResponseBodyResult> result{};

  GetTaskResultResponseBody() {}

  explicit GetTaskResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statusText) {
      res["StatusText"] = boost::any(*statusText);
    }
    if (bizDuration) {
      res["BizDuration"] = boost::any(*bizDuration);
    }
    if (solveTime) {
      res["SolveTime"] = boost::any(*solveTime);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StatusText") != m.end() && !m["StatusText"].empty()) {
      statusText = make_shared<string>(boost::any_cast<string>(m["StatusText"]));
    }
    if (m.find("BizDuration") != m.end() && !m["BizDuration"].empty()) {
      bizDuration = make_shared<long>(boost::any_cast<long>(m["BizDuration"]));
    }
    if (m.find("SolveTime") != m.end() && !m["SolveTime"].empty()) {
      solveTime = make_shared<long>(boost::any_cast<long>(m["SolveTime"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetTaskResultResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetTaskResultResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetTaskResultResponseBody() = default;
};
class GetTaskResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTaskResultResponseBody> body{};

  GetTaskResultResponse() {}

  explicit GetTaskResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTaskResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskResultResponse() = default;
};
class SubmitTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> task{};

  SubmitTaskRequest() {}

  explicit SubmitTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (task) {
      res["Task"] = boost::any(*task);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<string>(boost::any_cast<string>(m["Task"]));
    }
  }


  virtual ~SubmitTaskRequest() = default;
};
class SubmitTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> statusText{};
  shared_ptr<long> statusCode{};

  SubmitTaskResponseBody() {}

  explicit SubmitTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statusText) {
      res["StatusText"] = boost::any(*statusText);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StatusText") != m.end() && !m["StatusText"].empty()) {
      statusText = make_shared<string>(boost::any_cast<string>(m["StatusText"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
  }


  virtual ~SubmitTaskResponseBody() = default;
};
class SubmitTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitTaskResponseBody> body{};

  SubmitTaskResponse() {}

  explicit SubmitTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitTaskResponse() = default;
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
  GetTaskResultResponse getTaskResultWithOptions(shared_ptr<GetTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResultResponse getTaskResult(shared_ptr<GetTaskResultRequest> request);
  SubmitTaskResponse submitTaskWithOptions(shared_ptr<SubmitTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitTaskResponse submitTask(shared_ptr<SubmitTaskRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Nls-filetrans20180817

#endif
