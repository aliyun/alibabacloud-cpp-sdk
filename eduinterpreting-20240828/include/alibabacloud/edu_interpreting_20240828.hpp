// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EDUINTERPRETING20240828_H_
#define ALIBABACLOUD_EDUINTERPRETING20240828_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_EduInterpreting20240828 {
class RecognizeAudioRequest : public Darabonba::Model {
public:
  shared_ptr<string> audioFileUrl{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<bool> enableCallBack{};
  shared_ptr<string> outerBizId{};

  RecognizeAudioRequest() {}

  explicit RecognizeAudioRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioFileUrl) {
      res["AudioFileUrl"] = boost::any(*audioFileUrl);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (enableCallBack) {
      res["EnableCallBack"] = boost::any(*enableCallBack);
    }
    if (outerBizId) {
      res["OuterBizId"] = boost::any(*outerBizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioFileUrl") != m.end() && !m["AudioFileUrl"].empty()) {
      audioFileUrl = make_shared<string>(boost::any_cast<string>(m["AudioFileUrl"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("EnableCallBack") != m.end() && !m["EnableCallBack"].empty()) {
      enableCallBack = make_shared<bool>(boost::any_cast<bool>(m["EnableCallBack"]));
    }
    if (m.find("OuterBizId") != m.end() && !m["OuterBizId"].empty()) {
      outerBizId = make_shared<string>(boost::any_cast<string>(m["OuterBizId"]));
    }
  }


  virtual ~RecognizeAudioRequest() = default;
};
class RecognizeAudioResponseBodyItemList : public Darabonba::Model {
public:
  shared_ptr<string> beginTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> text{};

  RecognizeAudioResponseBodyItemList() {}

  explicit RecognizeAudioResponseBodyItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeAudioResponseBodyItemList() = default;
};
class RecognizeAudioResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeAudioResponseBodyItemList>> itemList{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  RecognizeAudioResponseBody() {}

  explicit RecognizeAudioResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemList) {
      vector<boost::any> temp1;
      for(auto item1:*itemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ItemList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemList") != m.end() && !m["ItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["ItemList"].type()) {
        vector<RecognizeAudioResponseBodyItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAudioResponseBodyItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itemList = make_shared<vector<RecognizeAudioResponseBodyItemList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~RecognizeAudioResponseBody() = default;
};
class RecognizeAudioResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeAudioResponseBody> body{};

  RecognizeAudioResponse() {}

  explicit RecognizeAudioResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeAudioResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeAudioResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeAudioResponse() = default;
};
class SubmitEvaluationTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> audioUrl{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> materialText{};
  shared_ptr<string> outerBizId{};
  shared_ptr<string> suggestedAnswer{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};

  SubmitEvaluationTaskRequest() {}

  explicit SubmitEvaluationTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioUrl) {
      res["AudioUrl"] = boost::any(*audioUrl);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (materialText) {
      res["MaterialText"] = boost::any(*materialText);
    }
    if (outerBizId) {
      res["OuterBizId"] = boost::any(*outerBizId);
    }
    if (suggestedAnswer) {
      res["SuggestedAnswer"] = boost::any(*suggestedAnswer);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioUrl") != m.end() && !m["AudioUrl"].empty()) {
      audioUrl = make_shared<string>(boost::any_cast<string>(m["AudioUrl"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("MaterialText") != m.end() && !m["MaterialText"].empty()) {
      materialText = make_shared<string>(boost::any_cast<string>(m["MaterialText"]));
    }
    if (m.find("OuterBizId") != m.end() && !m["OuterBizId"].empty()) {
      outerBizId = make_shared<string>(boost::any_cast<string>(m["OuterBizId"]));
    }
    if (m.find("SuggestedAnswer") != m.end() && !m["SuggestedAnswer"].empty()) {
      suggestedAnswer = make_shared<string>(boost::any_cast<string>(m["SuggestedAnswer"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SubmitEvaluationTaskRequest() = default;
};
class SubmitEvaluationTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  SubmitEvaluationTaskResponseBody() {}

  explicit SubmitEvaluationTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~SubmitEvaluationTaskResponseBody() = default;
};
class SubmitEvaluationTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitEvaluationTaskResponseBody> body{};

  SubmitEvaluationTaskResponse() {}

  explicit SubmitEvaluationTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitEvaluationTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitEvaluationTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitEvaluationTaskResponse() = default;
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
  RecognizeAudioResponse recognizeAudioWithOptions(shared_ptr<RecognizeAudioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeAudioResponse recognizeAudio(shared_ptr<RecognizeAudioRequest> request);
  SubmitEvaluationTaskResponse submitEvaluationTaskWithOptions(shared_ptr<SubmitEvaluationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitEvaluationTaskResponse submitEvaluationTask(shared_ptr<SubmitEvaluationTaskRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_EduInterpreting20240828

#endif
