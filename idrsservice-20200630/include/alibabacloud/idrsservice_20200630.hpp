// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IDRSSERVICE20200630_H_
#define ALIBABACLOUD_IDRSSERVICE20200630_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Idrsservice20200630 {
class AsrRealtimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> customizationId{};
  shared_ptr<bool> disfluency{};
  shared_ptr<bool> enableIgnoreSentenceTimeout{};
  shared_ptr<bool> enableIntermediateResult{};
  shared_ptr<bool> enableInverseTextNormalization{};
  shared_ptr<bool> enablePunctuationPrediction{};
  shared_ptr<bool> enableSemanticSentenceDetection{};
  shared_ptr<bool> enableWords{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> format{};
  shared_ptr<long> maxSentenceSilence{};
  shared_ptr<long> sampleRate{};
  shared_ptr<double> speechNoiseThreshold{};
  shared_ptr<string> vocabularyId{};

  AsrRealtimeRequest() {}

  explicit AsrRealtimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (customizationId) {
      res["CustomizationId"] = boost::any(*customizationId);
    }
    if (disfluency) {
      res["Disfluency"] = boost::any(*disfluency);
    }
    if (enableIgnoreSentenceTimeout) {
      res["EnableIgnoreSentenceTimeout"] = boost::any(*enableIgnoreSentenceTimeout);
    }
    if (enableIntermediateResult) {
      res["EnableIntermediateResult"] = boost::any(*enableIntermediateResult);
    }
    if (enableInverseTextNormalization) {
      res["EnableInverseTextNormalization"] = boost::any(*enableInverseTextNormalization);
    }
    if (enablePunctuationPrediction) {
      res["EnablePunctuationPrediction"] = boost::any(*enablePunctuationPrediction);
    }
    if (enableSemanticSentenceDetection) {
      res["EnableSemanticSentenceDetection"] = boost::any(*enableSemanticSentenceDetection);
    }
    if (enableWords) {
      res["EnableWords"] = boost::any(*enableWords);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (maxSentenceSilence) {
      res["MaxSentenceSilence"] = boost::any(*maxSentenceSilence);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (speechNoiseThreshold) {
      res["SpeechNoiseThreshold"] = boost::any(*speechNoiseThreshold);
    }
    if (vocabularyId) {
      res["VocabularyId"] = boost::any(*vocabularyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CustomizationId") != m.end() && !m["CustomizationId"].empty()) {
      customizationId = make_shared<string>(boost::any_cast<string>(m["CustomizationId"]));
    }
    if (m.find("Disfluency") != m.end() && !m["Disfluency"].empty()) {
      disfluency = make_shared<bool>(boost::any_cast<bool>(m["Disfluency"]));
    }
    if (m.find("EnableIgnoreSentenceTimeout") != m.end() && !m["EnableIgnoreSentenceTimeout"].empty()) {
      enableIgnoreSentenceTimeout = make_shared<bool>(boost::any_cast<bool>(m["EnableIgnoreSentenceTimeout"]));
    }
    if (m.find("EnableIntermediateResult") != m.end() && !m["EnableIntermediateResult"].empty()) {
      enableIntermediateResult = make_shared<bool>(boost::any_cast<bool>(m["EnableIntermediateResult"]));
    }
    if (m.find("EnableInverseTextNormalization") != m.end() && !m["EnableInverseTextNormalization"].empty()) {
      enableInverseTextNormalization = make_shared<bool>(boost::any_cast<bool>(m["EnableInverseTextNormalization"]));
    }
    if (m.find("EnablePunctuationPrediction") != m.end() && !m["EnablePunctuationPrediction"].empty()) {
      enablePunctuationPrediction = make_shared<bool>(boost::any_cast<bool>(m["EnablePunctuationPrediction"]));
    }
    if (m.find("EnableSemanticSentenceDetection") != m.end() && !m["EnableSemanticSentenceDetection"].empty()) {
      enableSemanticSentenceDetection = make_shared<bool>(boost::any_cast<bool>(m["EnableSemanticSentenceDetection"]));
    }
    if (m.find("EnableWords") != m.end() && !m["EnableWords"].empty()) {
      enableWords = make_shared<bool>(boost::any_cast<bool>(m["EnableWords"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("MaxSentenceSilence") != m.end() && !m["MaxSentenceSilence"].empty()) {
      maxSentenceSilence = make_shared<long>(boost::any_cast<long>(m["MaxSentenceSilence"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<long>(boost::any_cast<long>(m["SampleRate"]));
    }
    if (m.find("SpeechNoiseThreshold") != m.end() && !m["SpeechNoiseThreshold"].empty()) {
      speechNoiseThreshold = make_shared<double>(boost::any_cast<double>(m["SpeechNoiseThreshold"]));
    }
    if (m.find("VocabularyId") != m.end() && !m["VocabularyId"].empty()) {
      vocabularyId = make_shared<string>(boost::any_cast<string>(m["VocabularyId"]));
    }
  }


  virtual ~AsrRealtimeRequest() = default;
};
class AsrRealtimeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> code{};
  shared_ptr<double> confidence{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> result{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<long> time{};

  AsrRealtimeResponseBodyData() {}

  explicit AsrRealtimeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
  }


  virtual ~AsrRealtimeResponseBodyData() = default;
};
class AsrRealtimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<AsrRealtimeResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AsrRealtimeResponseBody() {}

  explicit AsrRealtimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AsrRealtimeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AsrRealtimeResponseBodyData>(model1);
      }
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


  virtual ~AsrRealtimeResponseBody() = default;
};
class AsrRealtimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AsrRealtimeResponseBody> body{};

  AsrRealtimeResponse() {}

  explicit AsrRealtimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AsrRealtimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AsrRealtimeResponseBody>(model1);
      }
    }
  }


  virtual ~AsrRealtimeResponse() = default;
};
class AsrSentenceRequestAsrRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<bool> enableInverseTextNormalization{};
  shared_ptr<bool> enablePunctuationPrediction{};
  shared_ptr<bool> enableVoiceDetection{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> format{};
  shared_ptr<long> sampleRate{};

  AsrSentenceRequestAsrRequest() {}

  explicit AsrSentenceRequestAsrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (enableInverseTextNormalization) {
      res["EnableInverseTextNormalization"] = boost::any(*enableInverseTextNormalization);
    }
    if (enablePunctuationPrediction) {
      res["EnablePunctuationPrediction"] = boost::any(*enablePunctuationPrediction);
    }
    if (enableVoiceDetection) {
      res["EnableVoiceDetection"] = boost::any(*enableVoiceDetection);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EnableInverseTextNormalization") != m.end() && !m["EnableInverseTextNormalization"].empty()) {
      enableInverseTextNormalization = make_shared<bool>(boost::any_cast<bool>(m["EnableInverseTextNormalization"]));
    }
    if (m.find("EnablePunctuationPrediction") != m.end() && !m["EnablePunctuationPrediction"].empty()) {
      enablePunctuationPrediction = make_shared<bool>(boost::any_cast<bool>(m["EnablePunctuationPrediction"]));
    }
    if (m.find("EnableVoiceDetection") != m.end() && !m["EnableVoiceDetection"].empty()) {
      enableVoiceDetection = make_shared<bool>(boost::any_cast<bool>(m["EnableVoiceDetection"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<long>(boost::any_cast<long>(m["SampleRate"]));
    }
  }


  virtual ~AsrSentenceRequestAsrRequest() = default;
};
class AsrSentenceRequest : public Darabonba::Model {
public:
  shared_ptr<AsrSentenceRequestAsrRequest> asrRequest{};

  AsrSentenceRequest() {}

  explicit AsrSentenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asrRequest) {
      res["AsrRequest"] = asrRequest ? boost::any(asrRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsrRequest") != m.end() && !m["AsrRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["AsrRequest"].type()) {
        AsrSentenceRequestAsrRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AsrRequest"]));
        asrRequest = make_shared<AsrSentenceRequestAsrRequest>(model1);
      }
    }
  }


  virtual ~AsrSentenceRequest() = default;
};
class AsrSentenceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> asrRequestShrink{};

  AsrSentenceShrinkRequest() {}

  explicit AsrSentenceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asrRequestShrink) {
      res["AsrRequest"] = boost::any(*asrRequestShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsrRequest") != m.end() && !m["AsrRequest"].empty()) {
      asrRequestShrink = make_shared<string>(boost::any_cast<string>(m["AsrRequest"]));
    }
  }


  virtual ~AsrSentenceShrinkRequest() = default;
};
class AsrSentenceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> result{};
  shared_ptr<string> taskId{};

  AsrSentenceResponseBodyData() {}

  explicit AsrSentenceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~AsrSentenceResponseBodyData() = default;
};
class AsrSentenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<AsrSentenceResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AsrSentenceResponseBody() {}

  explicit AsrSentenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AsrSentenceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AsrSentenceResponseBodyData>(model1);
      }
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


  virtual ~AsrSentenceResponseBody() = default;
};
class AsrSentenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AsrSentenceResponseBody> body{};

  AsrSentenceResponse() {}

  explicit AsrSentenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AsrSentenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AsrSentenceResponseBody>(model1);
      }
    }
  }


  virtual ~AsrSentenceResponse() = default;
};
class AsrTaskRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> asrTaskId{};
  shared_ptr<string> event{};
  shared_ptr<string> roomId{};
  shared_ptr<long> timestamp{};

  AsrTaskRequestRequest() {}

  explicit AsrTaskRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (asrTaskId) {
      res["AsrTaskId"] = boost::any(*asrTaskId);
    }
    if (event) {
      res["Event"] = boost::any(*event);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AsrTaskId") != m.end() && !m["AsrTaskId"].empty()) {
      asrTaskId = make_shared<string>(boost::any_cast<string>(m["AsrTaskId"]));
    }
    if (m.find("Event") != m.end() && !m["Event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["Event"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~AsrTaskRequestRequest() = default;
};
class AsrTaskRequest : public Darabonba::Model {
public:
  shared_ptr<AsrTaskRequestRequest> request{};

  AsrTaskRequest() {}

  explicit AsrTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        AsrTaskRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<AsrTaskRequestRequest>(model1);
      }
    }
  }


  virtual ~AsrTaskRequest() = default;
};
class AsrTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestShrink{};

  AsrTaskShrinkRequest() {}

  explicit AsrTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestShrink) {
      res["Request"] = boost::any(*requestShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      requestShrink = make_shared<string>(boost::any_cast<string>(m["Request"]));
    }
  }


  virtual ~AsrTaskShrinkRequest() = default;
};
class AsrTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> result{};

  AsrTaskResponseBodyData() {}

  explicit AsrTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~AsrTaskResponseBodyData() = default;
};
class AsrTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<AsrTaskResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AsrTaskResponseBody() {}

  explicit AsrTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AsrTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AsrTaskResponseBodyData>(model1);
      }
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


  virtual ~AsrTaskResponseBody() = default;
};
class AsrTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AsrTaskResponseBody> body{};

  AsrTaskResponse() {}

  explicit AsrTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AsrTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AsrTaskResponseBody>(model1);
      }
    }
  }


  virtual ~AsrTaskResponse() = default;
};
class AssociateRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> departmentId{};
  shared_ptr<string> roomId{};

  AssociateRoomRequest() {}

  explicit AssociateRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~AssociateRoomRequest() = default;
};
class AssociateRoomResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  AssociateRoomResponseBodyErrors() {}

  explicit AssociateRoomResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~AssociateRoomResponseBodyErrors() = default;
};
class AssociateRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<vector<AssociateRoomResponseBodyErrors>> errors{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AssociateRoomResponseBody() {}

  explicit AssociateRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
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
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<AssociateRoomResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AssociateRoomResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<AssociateRoomResponseBodyErrors>>(expect1);
      }
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


  virtual ~AssociateRoomResponseBody() = default;
};
class AssociateRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateRoomResponseBody> body{};

  AssociateRoomResponse() {}

  explicit AssociateRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateRoomResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateRoomResponse() = default;
};
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> departmentId{};
  shared_ptr<string> name{};
  shared_ptr<string> packageName{};

  CreateAppRequest() {}

  explicit CreateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
  }


  virtual ~CreateAppRequest() = default;
};
class CreateAppResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> creatorName{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  CreateAppResponseBodyData() {}

  explicit CreateAppResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateAppResponseBodyData() = default;
};
class CreateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateAppResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateAppResponseBody() {}

  explicit CreateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateAppResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateAppResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppResponseBody() = default;
};
class CreateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppResponseBody> body{};

  CreateAppResponse() {}

  explicit CreateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppResponse() = default;
};
class CreateDepartmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};

  CreateDepartmentRequest() {}

  explicit CreateDepartmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateDepartmentRequest() = default;
};
class CreateDepartmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  CreateDepartmentResponseBodyData() {}

  explicit CreateDepartmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateDepartmentResponseBodyData() = default;
};
class CreateDepartmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateDepartmentResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateDepartmentResponseBody() {}

  explicit CreateDepartmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateDepartmentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateDepartmentResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDepartmentResponseBody() = default;
};
class CreateDepartmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDepartmentResponseBody> body{};

  CreateDepartmentResponse() {}

  explicit CreateDepartmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDepartmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDepartmentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDepartmentResponse() = default;
};
class CreateDetectProcessRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> draft{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateDetectProcessRequest() {}

  explicit CreateDetectProcessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (draft) {
      res["Draft"] = boost::any(*draft);
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Draft") != m.end() && !m["Draft"].empty()) {
      draft = make_shared<string>(boost::any_cast<string>(m["Draft"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateDetectProcessRequest() = default;
};
class CreateDetectProcessResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createdAt{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> draft{};
  shared_ptr<string> id{};
  shared_ptr<string> md5{};
  shared_ptr<string> name{};

  CreateDetectProcessResponseBodyData() {}

  explicit CreateDetectProcessResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (draft) {
      res["Draft"] = boost::any(*draft);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("Draft") != m.end() && !m["Draft"].empty()) {
      draft = make_shared<string>(boost::any_cast<string>(m["Draft"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateDetectProcessResponseBodyData() = default;
};
class CreateDetectProcessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateDetectProcessResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateDetectProcessResponseBody() {}

  explicit CreateDetectProcessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateDetectProcessResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateDetectProcessResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDetectProcessResponseBody() = default;
};
class CreateDetectProcessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDetectProcessResponseBody> body{};

  CreateDetectProcessResponse() {}

  explicit CreateDetectProcessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDetectProcessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDetectProcessResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDetectProcessResponse() = default;
};
class CreateRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> content{};
  shared_ptr<string> name{};

  CreateRuleRequest() {}

  explicit CreateRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateRuleRequest() = default;
};
class CreateRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  CreateRuleResponseBodyData() {}

  explicit CreateRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateRuleResponseBodyData() = default;
};
class CreateRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateRuleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateRuleResponseBody() {}

  explicit CreateRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateRuleResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRuleResponseBody() = default;
};
class CreateRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRuleResponseBody> body{};

  CreateRuleResponse() {}

  explicit CreateRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRuleResponse() = default;
};
class CreateSignatureRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> clientVersion{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> uid{};

  CreateSignatureRequest() {}

  explicit CreateSignatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~CreateSignatureRequest() = default;
};
class CreateSignatureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> expireTime{};
  shared_ptr<string> rtcAppId{};
  shared_ptr<string> rtcBizName{};
  shared_ptr<string> rtcSign{};
  shared_ptr<string> rtcWorkspaceId{};

  CreateSignatureResponseBodyData() {}

  explicit CreateSignatureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (rtcAppId) {
      res["RtcAppId"] = boost::any(*rtcAppId);
    }
    if (rtcBizName) {
      res["RtcBizName"] = boost::any(*rtcBizName);
    }
    if (rtcSign) {
      res["RtcSign"] = boost::any(*rtcSign);
    }
    if (rtcWorkspaceId) {
      res["RtcWorkspaceId"] = boost::any(*rtcWorkspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("RtcAppId") != m.end() && !m["RtcAppId"].empty()) {
      rtcAppId = make_shared<string>(boost::any_cast<string>(m["RtcAppId"]));
    }
    if (m.find("RtcBizName") != m.end() && !m["RtcBizName"].empty()) {
      rtcBizName = make_shared<string>(boost::any_cast<string>(m["RtcBizName"]));
    }
    if (m.find("RtcSign") != m.end() && !m["RtcSign"].empty()) {
      rtcSign = make_shared<string>(boost::any_cast<string>(m["RtcSign"]));
    }
    if (m.find("RtcWorkspaceId") != m.end() && !m["RtcWorkspaceId"].empty()) {
      rtcWorkspaceId = make_shared<string>(boost::any_cast<string>(m["RtcWorkspaceId"]));
    }
  }


  virtual ~CreateSignatureResponseBodyData() = default;
};
class CreateSignatureResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  CreateSignatureResponseBodyErrors() {}

  explicit CreateSignatureResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~CreateSignatureResponseBodyErrors() = default;
};
class CreateSignatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateSignatureResponseBodyData> data{};
  shared_ptr<vector<CreateSignatureResponseBodyErrors>> errors{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateSignatureResponseBody() {}

  explicit CreateSignatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
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
        CreateSignatureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateSignatureResponseBodyData>(model1);
      }
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<CreateSignatureResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateSignatureResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<CreateSignatureResponseBodyErrors>>(expect1);
      }
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


  virtual ~CreateSignatureResponseBody() = default;
};
class CreateSignatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSignatureResponseBody> body{};

  CreateSignatureResponse() {}

  explicit CreateSignatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSignatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSignatureResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSignatureResponse() = default;
};
class CreateTaskGroupRequestVideoInfo : public Darabonba::Model {
public:
  shared_ptr<string> ruleId{};
  shared_ptr<string> videoMetaUrl{};
  shared_ptr<string> videoUrl{};

  CreateTaskGroupRequestVideoInfo() {}

  explicit CreateTaskGroupRequestVideoInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (videoMetaUrl) {
      res["VideoMetaUrl"] = boost::any(*videoMetaUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("VideoMetaUrl") != m.end() && !m["VideoMetaUrl"].empty()) {
      videoMetaUrl = make_shared<string>(boost::any_cast<string>(m["VideoMetaUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~CreateTaskGroupRequestVideoInfo() = default;
};
class CreateTaskGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<long>> day{};
  shared_ptr<string> expireAt{};
  shared_ptr<string> groupName{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> runnableTimeFrom{};
  shared_ptr<string> runnableTimeTo{};
  shared_ptr<string> triggerPeriod{};
  shared_ptr<vector<CreateTaskGroupRequestVideoInfo>> videoInfo{};

  CreateTaskGroupRequest() {}

  explicit CreateTaskGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (expireAt) {
      res["ExpireAt"] = boost::any(*expireAt);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (runnableTimeFrom) {
      res["RunnableTimeFrom"] = boost::any(*runnableTimeFrom);
    }
    if (runnableTimeTo) {
      res["RunnableTimeTo"] = boost::any(*runnableTimeTo);
    }
    if (triggerPeriod) {
      res["TriggerPeriod"] = boost::any(*triggerPeriod);
    }
    if (videoInfo) {
      vector<boost::any> temp1;
      for(auto item1:*videoInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VideoInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Day"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Day"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      day = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ExpireAt") != m.end() && !m["ExpireAt"].empty()) {
      expireAt = make_shared<string>(boost::any_cast<string>(m["ExpireAt"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RunnableTimeFrom") != m.end() && !m["RunnableTimeFrom"].empty()) {
      runnableTimeFrom = make_shared<string>(boost::any_cast<string>(m["RunnableTimeFrom"]));
    }
    if (m.find("RunnableTimeTo") != m.end() && !m["RunnableTimeTo"].empty()) {
      runnableTimeTo = make_shared<string>(boost::any_cast<string>(m["RunnableTimeTo"]));
    }
    if (m.find("TriggerPeriod") != m.end() && !m["TriggerPeriod"].empty()) {
      triggerPeriod = make_shared<string>(boost::any_cast<string>(m["TriggerPeriod"]));
    }
    if (m.find("VideoInfo") != m.end() && !m["VideoInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["VideoInfo"].type()) {
        vector<CreateTaskGroupRequestVideoInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VideoInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTaskGroupRequestVideoInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoInfo = make_shared<vector<CreateTaskGroupRequestVideoInfo>>(expect1);
      }
    }
  }


  virtual ~CreateTaskGroupRequest() = default;
};
class CreateTaskGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> completedTasks{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> taskIds{};
  shared_ptr<long> totalTasks{};

  CreateTaskGroupResponseBodyData() {}

  explicit CreateTaskGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTasks) {
      res["CompletedTasks"] = boost::any(*completedTasks);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskIds) {
      res["TaskIds"] = boost::any(*taskIds);
    }
    if (totalTasks) {
      res["TotalTasks"] = boost::any(*totalTasks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTasks") != m.end() && !m["CompletedTasks"].empty()) {
      completedTasks = make_shared<long>(boost::any_cast<long>(m["CompletedTasks"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskIds") != m.end() && !m["TaskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TotalTasks") != m.end() && !m["TotalTasks"].empty()) {
      totalTasks = make_shared<long>(boost::any_cast<long>(m["TotalTasks"]));
    }
  }


  virtual ~CreateTaskGroupResponseBodyData() = default;
};
class CreateTaskGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateTaskGroupResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateTaskGroupResponseBody() {}

  explicit CreateTaskGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateTaskGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateTaskGroupResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateTaskGroupResponseBody() = default;
};
class CreateTaskGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTaskGroupResponseBody> body{};

  CreateTaskGroupResponse() {}

  explicit CreateTaskGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTaskGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTaskGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTaskGroupResponse() = default;
};
class CreateTtsQuestionRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> answer{};
  shared_ptr<string> question{};
  shared_ptr<string> questionGroupId{};

  CreateTtsQuestionRequestRequest() {}

  explicit CreateTtsQuestionRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["Answer"] = boost::any(*answer);
    }
    if (question) {
      res["Question"] = boost::any(*question);
    }
    if (questionGroupId) {
      res["QuestionGroupId"] = boost::any(*questionGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Answer") != m.end() && !m["Answer"].empty()) {
      answer = make_shared<string>(boost::any_cast<string>(m["Answer"]));
    }
    if (m.find("Question") != m.end() && !m["Question"].empty()) {
      question = make_shared<string>(boost::any_cast<string>(m["Question"]));
    }
    if (m.find("QuestionGroupId") != m.end() && !m["QuestionGroupId"].empty()) {
      questionGroupId = make_shared<string>(boost::any_cast<string>(m["QuestionGroupId"]));
    }
  }


  virtual ~CreateTtsQuestionRequestRequest() = default;
};
class CreateTtsQuestionRequest : public Darabonba::Model {
public:
  shared_ptr<CreateTtsQuestionRequestRequest> request{};

  CreateTtsQuestionRequest() {}

  explicit CreateTtsQuestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        CreateTtsQuestionRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<CreateTtsQuestionRequestRequest>(model1);
      }
    }
  }


  virtual ~CreateTtsQuestionRequest() = default;
};
class CreateTtsQuestionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestShrink{};

  CreateTtsQuestionShrinkRequest() {}

  explicit CreateTtsQuestionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestShrink) {
      res["Request"] = boost::any(*requestShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      requestShrink = make_shared<string>(boost::any_cast<string>(m["Request"]));
    }
  }


  virtual ~CreateTtsQuestionShrinkRequest() = default;
};
class CreateTtsQuestionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  CreateTtsQuestionResponseBodyData() {}

  explicit CreateTtsQuestionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateTtsQuestionResponseBodyData() = default;
};
class CreateTtsQuestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateTtsQuestionResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateTtsQuestionResponseBody() {}

  explicit CreateTtsQuestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateTtsQuestionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateTtsQuestionResponseBodyData>(model1);
      }
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


  virtual ~CreateTtsQuestionResponseBody() = default;
};
class CreateTtsQuestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTtsQuestionResponseBody> body{};

  CreateTtsQuestionResponse() {}

  explicit CreateTtsQuestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTtsQuestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTtsQuestionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTtsQuestionResponse() = default;
};
class CreateTtsQuestionGroupRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<long> pitchRate{};
  shared_ptr<long> sampleRate{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> voice{};
  shared_ptr<long> volume{};

  CreateTtsQuestionGroupRequestRequest() {}

  explicit CreateTtsQuestionGroupRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (pitchRate) {
      res["PitchRate"] = boost::any(*pitchRate);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (voice) {
      res["Voice"] = boost::any(*voice);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("PitchRate") != m.end() && !m["PitchRate"].empty()) {
      pitchRate = make_shared<long>(boost::any_cast<long>(m["PitchRate"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<long>(boost::any_cast<long>(m["SampleRate"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Voice") != m.end() && !m["Voice"].empty()) {
      voice = make_shared<string>(boost::any_cast<string>(m["Voice"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~CreateTtsQuestionGroupRequestRequest() = default;
};
class CreateTtsQuestionGroupRequest : public Darabonba::Model {
public:
  shared_ptr<CreateTtsQuestionGroupRequestRequest> request{};

  CreateTtsQuestionGroupRequest() {}

  explicit CreateTtsQuestionGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        CreateTtsQuestionGroupRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<CreateTtsQuestionGroupRequestRequest>(model1);
      }
    }
  }


  virtual ~CreateTtsQuestionGroupRequest() = default;
};
class CreateTtsQuestionGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestShrink{};

  CreateTtsQuestionGroupShrinkRequest() {}

  explicit CreateTtsQuestionGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestShrink) {
      res["Request"] = boost::any(*requestShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      requestShrink = make_shared<string>(boost::any_cast<string>(m["Request"]));
    }
  }


  virtual ~CreateTtsQuestionGroupShrinkRequest() = default;
};
class CreateTtsQuestionGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  CreateTtsQuestionGroupResponseBodyData() {}

  explicit CreateTtsQuestionGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateTtsQuestionGroupResponseBodyData() = default;
};
class CreateTtsQuestionGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateTtsQuestionGroupResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateTtsQuestionGroupResponseBody() {}

  explicit CreateTtsQuestionGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateTtsQuestionGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateTtsQuestionGroupResponseBodyData>(model1);
      }
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


  virtual ~CreateTtsQuestionGroupResponseBody() = default;
};
class CreateTtsQuestionGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTtsQuestionGroupResponseBody> body{};

  CreateTtsQuestionGroupResponse() {}

  explicit CreateTtsQuestionGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTtsQuestionGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTtsQuestionGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTtsQuestionGroupResponse() = default;
};
class CreateUserDepartmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> departmentId{};
  shared_ptr<vector<string>> userId{};

  CreateUserDepartmentsRequest() {}

  explicit CreateUserDepartmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DepartmentId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepartmentId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      departmentId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateUserDepartmentsRequest() = default;
};
class CreateUserDepartmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateUserDepartmentsResponseBody() {}

  explicit CreateUserDepartmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateUserDepartmentsResponseBody() = default;
};
class CreateUserDepartmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUserDepartmentsResponseBody> body{};

  CreateUserDepartmentsResponse() {}

  explicit CreateUserDepartmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserDepartmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserDepartmentsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserDepartmentsResponse() = default;
};
class CreateVideoMergeTaskRequestVideoMergeRequestLayoutStylesVideoStyles : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<long> height{};
  shared_ptr<long> positionX{};
  shared_ptr<long> positionY{};
  shared_ptr<long> width{};

  CreateVideoMergeTaskRequestVideoMergeRequestLayoutStylesVideoStyles() {}

  explicit CreateVideoMergeTaskRequestVideoMergeRequestLayoutStylesVideoStyles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (positionX) {
      res["PositionX"] = boost::any(*positionX);
    }
    if (positionY) {
      res["PositionY"] = boost::any(*positionY);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("PositionX") != m.end() && !m["PositionX"].empty()) {
      positionX = make_shared<long>(boost::any_cast<long>(m["PositionX"]));
    }
    if (m.find("PositionY") != m.end() && !m["PositionY"].empty()) {
      positionY = make_shared<long>(boost::any_cast<long>(m["PositionY"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~CreateVideoMergeTaskRequestVideoMergeRequestLayoutStylesVideoStyles() = default;
};
class CreateVideoMergeTaskRequestVideoMergeRequestLayoutStyles : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> inputNum{};
  shared_ptr<vector<CreateVideoMergeTaskRequestVideoMergeRequestLayoutStylesVideoStyles>> videoStyles{};
  shared_ptr<long> width{};

  CreateVideoMergeTaskRequestVideoMergeRequestLayoutStyles() {}

  explicit CreateVideoMergeTaskRequestVideoMergeRequestLayoutStyles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (inputNum) {
      res["InputNum"] = boost::any(*inputNum);
    }
    if (videoStyles) {
      vector<boost::any> temp1;
      for(auto item1:*videoStyles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VideoStyles"] = boost::any(temp1);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("InputNum") != m.end() && !m["InputNum"].empty()) {
      inputNum = make_shared<long>(boost::any_cast<long>(m["InputNum"]));
    }
    if (m.find("VideoStyles") != m.end() && !m["VideoStyles"].empty()) {
      if (typeid(vector<boost::any>) == m["VideoStyles"].type()) {
        vector<CreateVideoMergeTaskRequestVideoMergeRequestLayoutStylesVideoStyles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VideoStyles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVideoMergeTaskRequestVideoMergeRequestLayoutStylesVideoStyles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoStyles = make_shared<vector<CreateVideoMergeTaskRequestVideoMergeRequestLayoutStylesVideoStyles>>(expect1);
      }
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~CreateVideoMergeTaskRequestVideoMergeRequestLayoutStyles() = default;
};
class CreateVideoMergeTaskRequestVideoMergeRequestVideoList : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<long> mergeBeginTime{};
  shared_ptr<long> mergeEndTime{};
  shared_ptr<bool> primeVideo{};
  shared_ptr<long> startTime{};

  CreateVideoMergeTaskRequestVideoMergeRequestVideoList() {}

  explicit CreateVideoMergeTaskRequestVideoMergeRequestVideoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (mergeBeginTime) {
      res["MergeBeginTime"] = boost::any(*mergeBeginTime);
    }
    if (mergeEndTime) {
      res["MergeEndTime"] = boost::any(*mergeEndTime);
    }
    if (primeVideo) {
      res["PrimeVideo"] = boost::any(*primeVideo);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("MergeBeginTime") != m.end() && !m["MergeBeginTime"].empty()) {
      mergeBeginTime = make_shared<long>(boost::any_cast<long>(m["MergeBeginTime"]));
    }
    if (m.find("MergeEndTime") != m.end() && !m["MergeEndTime"].empty()) {
      mergeEndTime = make_shared<long>(boost::any_cast<long>(m["MergeEndTime"]));
    }
    if (m.find("PrimeVideo") != m.end() && !m["PrimeVideo"].empty()) {
      primeVideo = make_shared<bool>(boost::any_cast<bool>(m["PrimeVideo"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~CreateVideoMergeTaskRequestVideoMergeRequestVideoList() = default;
};
class CreateVideoMergeTaskRequestVideoMergeRequestWatermark : public Darabonba::Model {
public:
  shared_ptr<string> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> positionX{};
  shared_ptr<long> positionY{};
  shared_ptr<string> text{};
  shared_ptr<long> timestamp{};

  CreateVideoMergeTaskRequestVideoMergeRequestWatermark() {}

  explicit CreateVideoMergeTaskRequestVideoMergeRequestWatermark(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (positionX) {
      res["PositionX"] = boost::any(*positionX);
    }
    if (positionY) {
      res["PositionY"] = boost::any(*positionY);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<string>(boost::any_cast<string>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("PositionX") != m.end() && !m["PositionX"].empty()) {
      positionX = make_shared<long>(boost::any_cast<long>(m["PositionX"]));
    }
    if (m.find("PositionY") != m.end() && !m["PositionY"].empty()) {
      positionY = make_shared<long>(boost::any_cast<long>(m["PositionY"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~CreateVideoMergeTaskRequestVideoMergeRequestWatermark() = default;
};
class CreateVideoMergeTaskRequestVideoMergeRequest : public Darabonba::Model {
public:
  shared_ptr<string> callbackUrl{};
  shared_ptr<vector<CreateVideoMergeTaskRequestVideoMergeRequestLayoutStyles>> layoutStyles{};
  shared_ptr<vector<CreateVideoMergeTaskRequestVideoMergeRequestVideoList>> videoList{};
  shared_ptr<CreateVideoMergeTaskRequestVideoMergeRequestWatermark> watermark{};

  CreateVideoMergeTaskRequestVideoMergeRequest() {}

  explicit CreateVideoMergeTaskRequestVideoMergeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (layoutStyles) {
      vector<boost::any> temp1;
      for(auto item1:*layoutStyles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LayoutStyles"] = boost::any(temp1);
    }
    if (videoList) {
      vector<boost::any> temp1;
      for(auto item1:*videoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VideoList"] = boost::any(temp1);
    }
    if (watermark) {
      res["Watermark"] = watermark ? boost::any(watermark->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("LayoutStyles") != m.end() && !m["LayoutStyles"].empty()) {
      if (typeid(vector<boost::any>) == m["LayoutStyles"].type()) {
        vector<CreateVideoMergeTaskRequestVideoMergeRequestLayoutStyles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LayoutStyles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVideoMergeTaskRequestVideoMergeRequestLayoutStyles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layoutStyles = make_shared<vector<CreateVideoMergeTaskRequestVideoMergeRequestLayoutStyles>>(expect1);
      }
    }
    if (m.find("VideoList") != m.end() && !m["VideoList"].empty()) {
      if (typeid(vector<boost::any>) == m["VideoList"].type()) {
        vector<CreateVideoMergeTaskRequestVideoMergeRequestVideoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VideoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVideoMergeTaskRequestVideoMergeRequestVideoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoList = make_shared<vector<CreateVideoMergeTaskRequestVideoMergeRequestVideoList>>(expect1);
      }
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      if (typeid(map<string, boost::any>) == m["Watermark"].type()) {
        CreateVideoMergeTaskRequestVideoMergeRequestWatermark model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Watermark"]));
        watermark = make_shared<CreateVideoMergeTaskRequestVideoMergeRequestWatermark>(model1);
      }
    }
  }


  virtual ~CreateVideoMergeTaskRequestVideoMergeRequest() = default;
};
class CreateVideoMergeTaskRequest : public Darabonba::Model {
public:
  shared_ptr<CreateVideoMergeTaskRequestVideoMergeRequest> videoMergeRequest{};

  CreateVideoMergeTaskRequest() {}

  explicit CreateVideoMergeTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoMergeRequest) {
      res["VideoMergeRequest"] = videoMergeRequest ? boost::any(videoMergeRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoMergeRequest") != m.end() && !m["VideoMergeRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["VideoMergeRequest"].type()) {
        CreateVideoMergeTaskRequestVideoMergeRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VideoMergeRequest"]));
        videoMergeRequest = make_shared<CreateVideoMergeTaskRequestVideoMergeRequest>(model1);
      }
    }
  }


  virtual ~CreateVideoMergeTaskRequest() = default;
};
class CreateVideoMergeTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoMergeRequestShrink{};

  CreateVideoMergeTaskShrinkRequest() {}

  explicit CreateVideoMergeTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoMergeRequestShrink) {
      res["VideoMergeRequest"] = boost::any(*videoMergeRequestShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoMergeRequest") != m.end() && !m["VideoMergeRequest"].empty()) {
      videoMergeRequestShrink = make_shared<string>(boost::any_cast<string>(m["VideoMergeRequest"]));
    }
  }


  virtual ~CreateVideoMergeTaskShrinkRequest() = default;
};
class CreateVideoMergeTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> status{};

  CreateVideoMergeTaskResponseBody() {}

  explicit CreateVideoMergeTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~CreateVideoMergeTaskResponseBody() = default;
};
class CreateVideoMergeTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVideoMergeTaskResponseBody> body{};

  CreateVideoMergeTaskResponse() {}

  explicit CreateVideoMergeTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVideoMergeTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVideoMergeTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVideoMergeTaskResponse() = default;
};
class CreateWatermarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateWatermarkRequest() {}

  explicit CreateWatermarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateWatermarkRequest() = default;
};
class CreateWatermarkResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateWatermarkResponseBodyData() {}

  explicit CreateWatermarkResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateWatermarkResponseBodyData() = default;
};
class CreateWatermarkResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  CreateWatermarkResponseBodyErrors() {}

  explicit CreateWatermarkResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~CreateWatermarkResponseBodyErrors() = default;
};
class CreateWatermarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateWatermarkResponseBodyData> data{};
  shared_ptr<vector<CreateWatermarkResponseBodyErrors>> errors{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateWatermarkResponseBody() {}

  explicit CreateWatermarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
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
        CreateWatermarkResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateWatermarkResponseBodyData>(model1);
      }
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<CreateWatermarkResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateWatermarkResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<CreateWatermarkResponseBodyErrors>>(expect1);
      }
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


  virtual ~CreateWatermarkResponseBody() = default;
};
class CreateWatermarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWatermarkResponseBody> body{};

  CreateWatermarkResponse() {}

  explicit CreateWatermarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWatermarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWatermarkResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWatermarkResponse() = default;
};
class DeleteAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DeleteAppRequest() {}

  explicit DeleteAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAppRequest() = default;
};
class DeleteAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteAppResponseBody() {}

  explicit DeleteAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAppResponseBody() = default;
};
class DeleteAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppResponseBody> body{};

  DeleteAppResponse() {}

  explicit DeleteAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppResponse() = default;
};
class DeleteDepartmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DeleteDepartmentRequest() {}

  explicit DeleteDepartmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDepartmentRequest() = default;
};
class DeleteDepartmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteDepartmentResponseBody() {}

  explicit DeleteDepartmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDepartmentResponseBody() = default;
};
class DeleteDepartmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDepartmentResponseBody> body{};

  DeleteDepartmentResponse() {}

  explicit DeleteDepartmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDepartmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDepartmentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDepartmentResponse() = default;
};
class DeleteDetectProcessRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DeleteDetectProcessRequest() {}

  explicit DeleteDetectProcessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDetectProcessRequest() = default;
};
class DeleteDetectProcessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteDetectProcessResponseBody() {}

  explicit DeleteDetectProcessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDetectProcessResponseBody() = default;
};
class DeleteDetectProcessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDetectProcessResponseBody> body{};

  DeleteDetectProcessResponse() {}

  explicit DeleteDetectProcessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDetectProcessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDetectProcessResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDetectProcessResponse() = default;
};
class DeleteRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DeleteRuleRequest() {}

  explicit DeleteRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteRuleRequest() = default;
};
class DeleteRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  DeleteRuleResponseBodyData() {}

  explicit DeleteRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DeleteRuleResponseBodyData() = default;
};
class DeleteRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteRuleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteRuleResponseBody() {}

  explicit DeleteRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteRuleResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRuleResponseBody() = default;
};
class DeleteRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRuleResponseBody> body{};

  DeleteRuleResponse() {}

  explicit DeleteRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRuleResponse() = default;
};
class DeleteUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DeleteUserRequest() {}

  explicit DeleteUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserRequest() = default;
};
class DeleteUserResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  DeleteUserResponseBodyErrors() {}

  explicit DeleteUserResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~DeleteUserResponseBodyErrors() = default;
};
class DeleteUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<vector<DeleteUserResponseBodyErrors>> errors{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteUserResponseBody() {}

  explicit DeleteUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<DeleteUserResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteUserResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<DeleteUserResponseBodyErrors>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteUserResponseBody() = default;
};
class DeleteUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserResponseBody> body{};

  DeleteUserResponse() {}

  explicit DeleteUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserResponse() = default;
};
class DeleteUserDepartmentsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> departmentId{};
  shared_ptr<vector<string>> userId{};

  DeleteUserDepartmentsRequest() {}

  explicit DeleteUserDepartmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DepartmentId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DepartmentId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      departmentId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteUserDepartmentsRequest() = default;
};
class DeleteUserDepartmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteUserDepartmentsResponseBody() {}

  explicit DeleteUserDepartmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteUserDepartmentsResponseBody() = default;
};
class DeleteUserDepartmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserDepartmentsResponseBody> body{};

  DeleteUserDepartmentsResponse() {}

  explicit DeleteUserDepartmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserDepartmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserDepartmentsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserDepartmentsResponse() = default;
};
class DeleteWatermarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> watermarkId{};

  DeleteWatermarkRequest() {}

  explicit DeleteWatermarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (watermarkId) {
      res["WatermarkId"] = boost::any(*watermarkId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WatermarkId") != m.end() && !m["WatermarkId"].empty()) {
      watermarkId = make_shared<string>(boost::any_cast<string>(m["WatermarkId"]));
    }
  }


  virtual ~DeleteWatermarkRequest() = default;
};
class DeleteWatermarkResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  DeleteWatermarkResponseBodyData() {}

  explicit DeleteWatermarkResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DeleteWatermarkResponseBodyData() = default;
};
class DeleteWatermarkResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  DeleteWatermarkResponseBodyErrors() {}

  explicit DeleteWatermarkResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~DeleteWatermarkResponseBodyErrors() = default;
};
class DeleteWatermarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteWatermarkResponseBodyData> data{};
  shared_ptr<vector<DeleteWatermarkResponseBodyErrors>> errors{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteWatermarkResponseBody() {}

  explicit DeleteWatermarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
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
        DeleteWatermarkResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteWatermarkResponseBodyData>(model1);
      }
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<DeleteWatermarkResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteWatermarkResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<DeleteWatermarkResponseBodyErrors>>(expect1);
      }
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


  virtual ~DeleteWatermarkResponseBody() = default;
};
class DeleteWatermarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWatermarkResponseBody> body{};

  DeleteWatermarkResponse() {}

  explicit DeleteWatermarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteWatermarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWatermarkResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWatermarkResponse() = default;
};
class FaceCompareRequestFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> sourceImage{};
  shared_ptr<string> targetImage{};

  FaceCompareRequestFaceRequest() {}

  explicit FaceCompareRequestFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (sourceImage) {
      res["SourceImage"] = boost::any(*sourceImage);
    }
    if (targetImage) {
      res["TargetImage"] = boost::any(*targetImage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("SourceImage") != m.end() && !m["SourceImage"].empty()) {
      sourceImage = make_shared<string>(boost::any_cast<string>(m["SourceImage"]));
    }
    if (m.find("TargetImage") != m.end() && !m["TargetImage"].empty()) {
      targetImage = make_shared<string>(boost::any_cast<string>(m["TargetImage"]));
    }
  }


  virtual ~FaceCompareRequestFaceRequest() = default;
};
class FaceCompareRequest : public Darabonba::Model {
public:
  shared_ptr<FaceCompareRequestFaceRequest> faceRequest{};

  FaceCompareRequest() {}

  explicit FaceCompareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceRequest) {
      res["FaceRequest"] = faceRequest ? boost::any(faceRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceRequest") != m.end() && !m["FaceRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceRequest"].type()) {
        FaceCompareRequestFaceRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceRequest"]));
        faceRequest = make_shared<FaceCompareRequestFaceRequest>(model1);
      }
    }
  }


  virtual ~FaceCompareRequest() = default;
};
class FaceCompareShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> faceRequestShrink{};

  FaceCompareShrinkRequest() {}

  explicit FaceCompareShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceRequestShrink) {
      res["FaceRequest"] = boost::any(*faceRequestShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceRequest") != m.end() && !m["FaceRequest"].empty()) {
      faceRequestShrink = make_shared<string>(boost::any_cast<string>(m["FaceRequest"]));
    }
  }


  virtual ~FaceCompareShrinkRequest() = default;
};
class FaceCompareResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};
  shared_ptr<string> passed{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<double> verifyScore{};

  FaceCompareResponseBodyData() {}

  explicit FaceCompareResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (verifyScore) {
      res["VerifyScore"] = boost::any(*verifyScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VerifyScore") != m.end() && !m["VerifyScore"].empty()) {
      verifyScore = make_shared<double>(boost::any_cast<double>(m["VerifyScore"]));
    }
  }


  virtual ~FaceCompareResponseBodyData() = default;
};
class FaceCompareResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<FaceCompareResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FaceCompareResponseBody() {}

  explicit FaceCompareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        FaceCompareResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<FaceCompareResponseBodyData>(model1);
      }
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


  virtual ~FaceCompareResponseBody() = default;
};
class FaceCompareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FaceCompareResponseBody> body{};

  FaceCompareResponse() {}

  explicit FaceCompareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceCompareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FaceCompareResponseBody>(model1);
      }
    }
  }


  virtual ~FaceCompareResponse() = default;
};
class FaceLivenessRequestFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> sourceImage{};

  FaceLivenessRequestFaceRequest() {}

  explicit FaceLivenessRequestFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (sourceImage) {
      res["SourceImage"] = boost::any(*sourceImage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("SourceImage") != m.end() && !m["SourceImage"].empty()) {
      sourceImage = make_shared<string>(boost::any_cast<string>(m["SourceImage"]));
    }
  }


  virtual ~FaceLivenessRequestFaceRequest() = default;
};
class FaceLivenessRequest : public Darabonba::Model {
public:
  shared_ptr<FaceLivenessRequestFaceRequest> faceRequest{};

  FaceLivenessRequest() {}

  explicit FaceLivenessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceRequest) {
      res["FaceRequest"] = faceRequest ? boost::any(faceRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceRequest") != m.end() && !m["FaceRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceRequest"].type()) {
        FaceLivenessRequestFaceRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceRequest"]));
        faceRequest = make_shared<FaceLivenessRequestFaceRequest>(model1);
      }
    }
  }


  virtual ~FaceLivenessRequest() = default;
};
class FaceLivenessShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> faceRequestShrink{};

  FaceLivenessShrinkRequest() {}

  explicit FaceLivenessShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceRequestShrink) {
      res["FaceRequest"] = boost::any(*faceRequestShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceRequest") != m.end() && !m["FaceRequest"].empty()) {
      faceRequestShrink = make_shared<string>(boost::any_cast<string>(m["FaceRequest"]));
    }
  }


  virtual ~FaceLivenessShrinkRequest() = default;
};
class FaceLivenessResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> passed{};
  shared_ptr<string> publicId{};
  shared_ptr<double> score{};
  shared_ptr<string> status{};

  FaceLivenessResponseBodyData() {}

  explicit FaceLivenessResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (publicId) {
      res["PublicId"] = boost::any(*publicId);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("PublicId") != m.end() && !m["PublicId"].empty()) {
      publicId = make_shared<string>(boost::any_cast<string>(m["PublicId"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~FaceLivenessResponseBodyData() = default;
};
class FaceLivenessResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<FaceLivenessResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FaceLivenessResponseBody() {}

  explicit FaceLivenessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        FaceLivenessResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<FaceLivenessResponseBodyData>(model1);
      }
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


  virtual ~FaceLivenessResponseBody() = default;
};
class FaceLivenessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FaceLivenessResponseBody> body{};

  FaceLivenessResponse() {}

  explicit FaceLivenessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceLivenessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FaceLivenessResponseBody>(model1);
      }
    }
  }


  virtual ~FaceLivenessResponse() = default;
};
class FaceRecognizeRequestFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<bool> liveness{};
  shared_ptr<string> sourceImage{};
  shared_ptr<string> targetImage{};

  FaceRecognizeRequestFaceRequest() {}

  explicit FaceRecognizeRequestFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (liveness) {
      res["Liveness"] = boost::any(*liveness);
    }
    if (sourceImage) {
      res["SourceImage"] = boost::any(*sourceImage);
    }
    if (targetImage) {
      res["TargetImage"] = boost::any(*targetImage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Liveness") != m.end() && !m["Liveness"].empty()) {
      liveness = make_shared<bool>(boost::any_cast<bool>(m["Liveness"]));
    }
    if (m.find("SourceImage") != m.end() && !m["SourceImage"].empty()) {
      sourceImage = make_shared<string>(boost::any_cast<string>(m["SourceImage"]));
    }
    if (m.find("TargetImage") != m.end() && !m["TargetImage"].empty()) {
      targetImage = make_shared<string>(boost::any_cast<string>(m["TargetImage"]));
    }
  }


  virtual ~FaceRecognizeRequestFaceRequest() = default;
};
class FaceRecognizeRequest : public Darabonba::Model {
public:
  shared_ptr<FaceRecognizeRequestFaceRequest> faceRequest{};

  FaceRecognizeRequest() {}

  explicit FaceRecognizeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceRequest) {
      res["FaceRequest"] = faceRequest ? boost::any(faceRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceRequest") != m.end() && !m["FaceRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceRequest"].type()) {
        FaceRecognizeRequestFaceRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceRequest"]));
        faceRequest = make_shared<FaceRecognizeRequestFaceRequest>(model1);
      }
    }
  }


  virtual ~FaceRecognizeRequest() = default;
};
class FaceRecognizeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> faceRequestShrink{};

  FaceRecognizeShrinkRequest() {}

  explicit FaceRecognizeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceRequestShrink) {
      res["FaceRequest"] = boost::any(*faceRequestShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceRequest") != m.end() && !m["FaceRequest"].empty()) {
      faceRequestShrink = make_shared<string>(boost::any_cast<string>(m["FaceRequest"]));
    }
  }


  virtual ~FaceRecognizeShrinkRequest() = default;
};
class FaceRecognizeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> comparePassed{};
  shared_ptr<double> compareScore{};
  shared_ptr<string> livenessPassed{};
  shared_ptr<double> livenessScore{};

  FaceRecognizeResponseBodyData() {}

  explicit FaceRecognizeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comparePassed) {
      res["ComparePassed"] = boost::any(*comparePassed);
    }
    if (compareScore) {
      res["CompareScore"] = boost::any(*compareScore);
    }
    if (livenessPassed) {
      res["LivenessPassed"] = boost::any(*livenessPassed);
    }
    if (livenessScore) {
      res["LivenessScore"] = boost::any(*livenessScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComparePassed") != m.end() && !m["ComparePassed"].empty()) {
      comparePassed = make_shared<string>(boost::any_cast<string>(m["ComparePassed"]));
    }
    if (m.find("CompareScore") != m.end() && !m["CompareScore"].empty()) {
      compareScore = make_shared<double>(boost::any_cast<double>(m["CompareScore"]));
    }
    if (m.find("LivenessPassed") != m.end() && !m["LivenessPassed"].empty()) {
      livenessPassed = make_shared<string>(boost::any_cast<string>(m["LivenessPassed"]));
    }
    if (m.find("LivenessScore") != m.end() && !m["LivenessScore"].empty()) {
      livenessScore = make_shared<double>(boost::any_cast<double>(m["LivenessScore"]));
    }
  }


  virtual ~FaceRecognizeResponseBodyData() = default;
};
class FaceRecognizeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<FaceRecognizeResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FaceRecognizeResponseBody() {}

  explicit FaceRecognizeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        FaceRecognizeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<FaceRecognizeResponseBodyData>(model1);
      }
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


  virtual ~FaceRecognizeResponseBody() = default;
};
class FaceRecognizeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FaceRecognizeResponseBody> body{};

  FaceRecognizeResponse() {}

  explicit FaceRecognizeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceRecognizeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FaceRecognizeResponseBody>(model1);
      }
    }
  }


  virtual ~FaceRecognizeResponse() = default;
};
class GetAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> id{};
  shared_ptr<string> packageName{};

  GetAppRequest() {}

  explicit GetAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
  }


  virtual ~GetAppRequest() = default;
};
class GetAppResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> disabled{};
  shared_ptr<string> feeId{};
  shared_ptr<string> name{};

  GetAppResponseBodyData() {}

  explicit GetAppResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (feeId) {
      res["FeeId"] = boost::any(*feeId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<string>(boost::any_cast<string>(m["Disabled"]));
    }
    if (m.find("FeeId") != m.end() && !m["FeeId"].empty()) {
      feeId = make_shared<string>(boost::any_cast<string>(m["FeeId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetAppResponseBodyData() = default;
};
class GetAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetAppResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetAppResponseBody() {}

  explicit GetAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAppResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAppResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAppResponseBody() = default;
};
class GetAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppResponseBody> body{};

  GetAppResponse() {}

  explicit GetAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppResponse() = default;
};
class GetAsrResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> asrTaskId{};

  GetAsrResultRequest() {}

  explicit GetAsrResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asrTaskId) {
      res["AsrTaskId"] = boost::any(*asrTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsrTaskId") != m.end() && !m["AsrTaskId"].empty()) {
      asrTaskId = make_shared<string>(boost::any_cast<string>(m["AsrTaskId"]));
    }
  }


  virtual ~GetAsrResultRequest() = default;
};
class GetAsrResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> result{};

  GetAsrResultResponseBodyData() {}

  explicit GetAsrResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~GetAsrResultResponseBodyData() = default;
};
class GetAsrResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetAsrResultResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAsrResultResponseBody() {}

  explicit GetAsrResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAsrResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAsrResultResponseBodyData>(model1);
      }
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


  virtual ~GetAsrResultResponseBody() = default;
};
class GetAsrResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAsrResultResponseBody> body{};

  GetAsrResultResponse() {}

  explicit GetAsrResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsrResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsrResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsrResultResponse() = default;
};
class GetDepartmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> id{};

  GetDepartmentRequest() {}

  explicit GetDepartmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetDepartmentRequest() = default;
};
class GetDepartmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> updatedAt{};

  GetDepartmentResponseBodyData() {}

  explicit GetDepartmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
  }


  virtual ~GetDepartmentResponseBodyData() = default;
};
class GetDepartmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDepartmentResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDepartmentResponseBody() {}

  explicit GetDepartmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDepartmentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDepartmentResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDepartmentResponseBody() = default;
};
class GetDepartmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDepartmentResponseBody> body{};

  GetDepartmentResponse() {}

  explicit GetDepartmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDepartmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDepartmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetDepartmentResponse() = default;
};
class GetDetectProcessRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> id{};

  GetDetectProcessRequest() {}

  explicit GetDetectProcessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetDetectProcessRequest() = default;
};
class GetDetectProcessResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> draft{};
  shared_ptr<string> id{};
  shared_ptr<string> md5{};
  shared_ptr<string> name{};
  shared_ptr<bool> newVersion{};
  shared_ptr<string> updatedAt{};

  GetDetectProcessResponseBodyData() {}

  explicit GetDetectProcessResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (draft) {
      res["Draft"] = boost::any(*draft);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (newVersion) {
      res["NewVersion"] = boost::any(*newVersion);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Draft") != m.end() && !m["Draft"].empty()) {
      draft = make_shared<string>(boost::any_cast<string>(m["Draft"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NewVersion") != m.end() && !m["NewVersion"].empty()) {
      newVersion = make_shared<bool>(boost::any_cast<bool>(m["NewVersion"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
  }


  virtual ~GetDetectProcessResponseBodyData() = default;
};
class GetDetectProcessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDetectProcessResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDetectProcessResponseBody() {}

  explicit GetDetectProcessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDetectProcessResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDetectProcessResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDetectProcessResponseBody() = default;
};
class GetDetectProcessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDetectProcessResponseBody> body{};

  GetDetectProcessResponse() {}

  explicit GetDetectProcessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDetectProcessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDetectProcessResponseBody>(model1);
      }
    }
  }


  virtual ~GetDetectProcessResponse() = default;
};
class GetDetectProcessJsonFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> id{};

  GetDetectProcessJsonFileRequest() {}

  explicit GetDetectProcessJsonFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetDetectProcessJsonFileRequest() = default;
};
class GetDetectProcessJsonFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDetectProcessJsonFileResponseBody() {}

  explicit GetDetectProcessJsonFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~GetDetectProcessJsonFileResponseBody() = default;
};
class GetDetectProcessJsonFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDetectProcessJsonFileResponseBody> body{};

  GetDetectProcessJsonFileResponse() {}

  explicit GetDetectProcessJsonFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDetectProcessJsonFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDetectProcessJsonFileResponseBody>(model1);
      }
    }
  }


  virtual ~GetDetectProcessJsonFileResponse() = default;
};
class GetDetectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> id{};

  GetDetectionRequest() {}

  explicit GetDetectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetDetectionRequest() = default;
};
class GetDetectionResponseBodyDataTasks : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> status{};
  shared_ptr<string> videoMetaUrl{};
  shared_ptr<string> videoUrl{};

  GetDetectionResponseBodyDataTasks() {}

  explicit GetDetectionResponseBodyDataTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (videoMetaUrl) {
      res["VideoMetaUrl"] = boost::any(*videoMetaUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VideoMetaUrl") != m.end() && !m["VideoMetaUrl"].empty()) {
      videoMetaUrl = make_shared<string>(boost::any_cast<string>(m["VideoMetaUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~GetDetectionResponseBodyDataTasks() = default;
};
class GetDetectionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> departmentId{};
  shared_ptr<string> departmentName{};
  shared_ptr<string> id{};
  shared_ptr<string> recordingType{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetDetectionResponseBodyDataTasks>> tasks{};

  GetDetectionResponseBodyData() {}

  explicit GetDetectionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (departmentName) {
      res["DepartmentName"] = boost::any(*departmentName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (recordingType) {
      res["RecordingType"] = boost::any(*recordingType);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
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
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("DepartmentName") != m.end() && !m["DepartmentName"].empty()) {
      departmentName = make_shared<string>(boost::any_cast<string>(m["DepartmentName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RecordingType") != m.end() && !m["RecordingType"].empty()) {
      recordingType = make_shared<string>(boost::any_cast<string>(m["RecordingType"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<GetDetectionResponseBodyDataTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDetectionResponseBodyDataTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<GetDetectionResponseBodyDataTasks>>(expect1);
      }
    }
  }


  virtual ~GetDetectionResponseBodyData() = default;
};
class GetDetectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDetectionResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDetectionResponseBody() {}

  explicit GetDetectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDetectionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDetectionResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDetectionResponseBody() = default;
};
class GetDetectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDetectionResponseBody> body{};

  GetDetectionResponse() {}

  explicit GetDetectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDetectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDetectionResponseBody>(model1);
      }
    }
  }


  virtual ~GetDetectionResponse() = default;
};
class GetPreSignedUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> prefix{};

  GetPreSignedUrlRequest() {}

  explicit GetPreSignedUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
  }


  virtual ~GetPreSignedUrlRequest() = default;
};
class GetPreSignedUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetPreSignedUrlResponseBody() {}

  explicit GetPreSignedUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~GetPreSignedUrlResponseBody() = default;
};
class GetPreSignedUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPreSignedUrlResponseBody> body{};

  GetPreSignedUrlResponse() {}

  explicit GetPreSignedUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPreSignedUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPreSignedUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetPreSignedUrlResponse() = default;
};
class GetRecordResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> recordId{};

  GetRecordResultRequest() {}

  explicit GetRecordResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
  }


  virtual ~GetRecordResultRequest() = default;
};
class GetRecordResultResponseBodyDataRecordRoomList : public Darabonba::Model {
public:
  shared_ptr<string> outerBusinessId{};
  shared_ptr<string> recordType{};
  shared_ptr<string> role{};
  shared_ptr<string> roomMetaUrl{};
  shared_ptr<string> roomRecordAt{};
  shared_ptr<string> roomResultUrl{};
  shared_ptr<string> roomStatus{};
  shared_ptr<string> roomVideoUrl{};
  shared_ptr<string> rtcRecordId{};

  GetRecordResultResponseBodyDataRecordRoomList() {}

  explicit GetRecordResultResponseBodyDataRecordRoomList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outerBusinessId) {
      res["OuterBusinessId"] = boost::any(*outerBusinessId);
    }
    if (recordType) {
      res["RecordType"] = boost::any(*recordType);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (roomMetaUrl) {
      res["RoomMetaUrl"] = boost::any(*roomMetaUrl);
    }
    if (roomRecordAt) {
      res["RoomRecordAt"] = boost::any(*roomRecordAt);
    }
    if (roomResultUrl) {
      res["RoomResultUrl"] = boost::any(*roomResultUrl);
    }
    if (roomStatus) {
      res["RoomStatus"] = boost::any(*roomStatus);
    }
    if (roomVideoUrl) {
      res["RoomVideoUrl"] = boost::any(*roomVideoUrl);
    }
    if (rtcRecordId) {
      res["RtcRecordId"] = boost::any(*rtcRecordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OuterBusinessId") != m.end() && !m["OuterBusinessId"].empty()) {
      outerBusinessId = make_shared<string>(boost::any_cast<string>(m["OuterBusinessId"]));
    }
    if (m.find("RecordType") != m.end() && !m["RecordType"].empty()) {
      recordType = make_shared<string>(boost::any_cast<string>(m["RecordType"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("RoomMetaUrl") != m.end() && !m["RoomMetaUrl"].empty()) {
      roomMetaUrl = make_shared<string>(boost::any_cast<string>(m["RoomMetaUrl"]));
    }
    if (m.find("RoomRecordAt") != m.end() && !m["RoomRecordAt"].empty()) {
      roomRecordAt = make_shared<string>(boost::any_cast<string>(m["RoomRecordAt"]));
    }
    if (m.find("RoomResultUrl") != m.end() && !m["RoomResultUrl"].empty()) {
      roomResultUrl = make_shared<string>(boost::any_cast<string>(m["RoomResultUrl"]));
    }
    if (m.find("RoomStatus") != m.end() && !m["RoomStatus"].empty()) {
      roomStatus = make_shared<string>(boost::any_cast<string>(m["RoomStatus"]));
    }
    if (m.find("RoomVideoUrl") != m.end() && !m["RoomVideoUrl"].empty()) {
      roomVideoUrl = make_shared<string>(boost::any_cast<string>(m["RoomVideoUrl"]));
    }
    if (m.find("RtcRecordId") != m.end() && !m["RtcRecordId"].empty()) {
      rtcRecordId = make_shared<string>(boost::any_cast<string>(m["RtcRecordId"]));
    }
  }


  virtual ~GetRecordResultResponseBodyDataRecordRoomList() = default;
};
class GetRecordResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> departmentName{};
  shared_ptr<string> detectProcessName{};
  shared_ptr<long> duration{};
  shared_ptr<string> id{};
  shared_ptr<string> metaUrl{};
  shared_ptr<string> outerBusinessId{};
  shared_ptr<string> recordAt{};
  shared_ptr<vector<GetRecordResultResponseBodyDataRecordRoomList>> recordRoomList{};
  shared_ptr<string> resultUrl{};
  shared_ptr<string> roomId{};
  shared_ptr<string> status{};
  shared_ptr<string> videoUrl{};

  GetRecordResultResponseBodyData() {}

  explicit GetRecordResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (departmentName) {
      res["DepartmentName"] = boost::any(*departmentName);
    }
    if (detectProcessName) {
      res["DetectProcessName"] = boost::any(*detectProcessName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (metaUrl) {
      res["MetaUrl"] = boost::any(*metaUrl);
    }
    if (outerBusinessId) {
      res["OuterBusinessId"] = boost::any(*outerBusinessId);
    }
    if (recordAt) {
      res["RecordAt"] = boost::any(*recordAt);
    }
    if (recordRoomList) {
      vector<boost::any> temp1;
      for(auto item1:*recordRoomList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecordRoomList"] = boost::any(temp1);
    }
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("DepartmentName") != m.end() && !m["DepartmentName"].empty()) {
      departmentName = make_shared<string>(boost::any_cast<string>(m["DepartmentName"]));
    }
    if (m.find("DetectProcessName") != m.end() && !m["DetectProcessName"].empty()) {
      detectProcessName = make_shared<string>(boost::any_cast<string>(m["DetectProcessName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MetaUrl") != m.end() && !m["MetaUrl"].empty()) {
      metaUrl = make_shared<string>(boost::any_cast<string>(m["MetaUrl"]));
    }
    if (m.find("OuterBusinessId") != m.end() && !m["OuterBusinessId"].empty()) {
      outerBusinessId = make_shared<string>(boost::any_cast<string>(m["OuterBusinessId"]));
    }
    if (m.find("RecordAt") != m.end() && !m["RecordAt"].empty()) {
      recordAt = make_shared<string>(boost::any_cast<string>(m["RecordAt"]));
    }
    if (m.find("RecordRoomList") != m.end() && !m["RecordRoomList"].empty()) {
      if (typeid(vector<boost::any>) == m["RecordRoomList"].type()) {
        vector<GetRecordResultResponseBodyDataRecordRoomList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecordRoomList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRecordResultResponseBodyDataRecordRoomList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recordRoomList = make_shared<vector<GetRecordResultResponseBodyDataRecordRoomList>>(expect1);
      }
    }
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~GetRecordResultResponseBodyData() = default;
};
class GetRecordResultResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  GetRecordResultResponseBodyErrors() {}

  explicit GetRecordResultResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~GetRecordResultResponseBodyErrors() = default;
};
class GetRecordResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetRecordResultResponseBodyData> data{};
  shared_ptr<vector<GetRecordResultResponseBodyErrors>> errors{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRecordResultResponseBody() {}

  explicit GetRecordResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
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
        GetRecordResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRecordResultResponseBodyData>(model1);
      }
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<GetRecordResultResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRecordResultResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<GetRecordResultResponseBodyErrors>>(expect1);
      }
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


  virtual ~GetRecordResultResponseBody() = default;
};
class GetRecordResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRecordResultResponseBody> body{};

  GetRecordResultResponse() {}

  explicit GetRecordResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRecordResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRecordResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetRecordResultResponse() = default;
};
class GetRecordsByFeeIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> feeId{};

  GetRecordsByFeeIdRequest() {}

  explicit GetRecordsByFeeIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feeId) {
      res["FeeId"] = boost::any(*feeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeeId") != m.end() && !m["FeeId"].empty()) {
      feeId = make_shared<string>(boost::any_cast<string>(m["FeeId"]));
    }
  }


  virtual ~GetRecordsByFeeIdRequest() = default;
};
class GetRecordsByFeeIdResponseBodyDataRecordRoomList : public Darabonba::Model {
public:
  shared_ptr<string> outerBusinessId{};
  shared_ptr<string> recordType{};
  shared_ptr<string> role{};
  shared_ptr<string> roomMetaUrl{};
  shared_ptr<string> roomRecordAt{};
  shared_ptr<string> roomResultUrl{};
  shared_ptr<string> roomStatus{};
  shared_ptr<string> roomVideoUrl{};
  shared_ptr<string> rtcRecordId{};

  GetRecordsByFeeIdResponseBodyDataRecordRoomList() {}

  explicit GetRecordsByFeeIdResponseBodyDataRecordRoomList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outerBusinessId) {
      res["OuterBusinessId"] = boost::any(*outerBusinessId);
    }
    if (recordType) {
      res["RecordType"] = boost::any(*recordType);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (roomMetaUrl) {
      res["RoomMetaUrl"] = boost::any(*roomMetaUrl);
    }
    if (roomRecordAt) {
      res["RoomRecordAt"] = boost::any(*roomRecordAt);
    }
    if (roomResultUrl) {
      res["RoomResultUrl"] = boost::any(*roomResultUrl);
    }
    if (roomStatus) {
      res["RoomStatus"] = boost::any(*roomStatus);
    }
    if (roomVideoUrl) {
      res["RoomVideoUrl"] = boost::any(*roomVideoUrl);
    }
    if (rtcRecordId) {
      res["RtcRecordId"] = boost::any(*rtcRecordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OuterBusinessId") != m.end() && !m["OuterBusinessId"].empty()) {
      outerBusinessId = make_shared<string>(boost::any_cast<string>(m["OuterBusinessId"]));
    }
    if (m.find("RecordType") != m.end() && !m["RecordType"].empty()) {
      recordType = make_shared<string>(boost::any_cast<string>(m["RecordType"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("RoomMetaUrl") != m.end() && !m["RoomMetaUrl"].empty()) {
      roomMetaUrl = make_shared<string>(boost::any_cast<string>(m["RoomMetaUrl"]));
    }
    if (m.find("RoomRecordAt") != m.end() && !m["RoomRecordAt"].empty()) {
      roomRecordAt = make_shared<string>(boost::any_cast<string>(m["RoomRecordAt"]));
    }
    if (m.find("RoomResultUrl") != m.end() && !m["RoomResultUrl"].empty()) {
      roomResultUrl = make_shared<string>(boost::any_cast<string>(m["RoomResultUrl"]));
    }
    if (m.find("RoomStatus") != m.end() && !m["RoomStatus"].empty()) {
      roomStatus = make_shared<string>(boost::any_cast<string>(m["RoomStatus"]));
    }
    if (m.find("RoomVideoUrl") != m.end() && !m["RoomVideoUrl"].empty()) {
      roomVideoUrl = make_shared<string>(boost::any_cast<string>(m["RoomVideoUrl"]));
    }
    if (m.find("RtcRecordId") != m.end() && !m["RtcRecordId"].empty()) {
      rtcRecordId = make_shared<string>(boost::any_cast<string>(m["RtcRecordId"]));
    }
  }


  virtual ~GetRecordsByFeeIdResponseBodyDataRecordRoomList() = default;
};
class GetRecordsByFeeIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> departmentName{};
  shared_ptr<string> detectProcessName{};
  shared_ptr<long> duration{};
  shared_ptr<string> id{};
  shared_ptr<string> metaUrl{};
  shared_ptr<string> outerBusinessId{};
  shared_ptr<string> recordAt{};
  shared_ptr<vector<GetRecordsByFeeIdResponseBodyDataRecordRoomList>> recordRoomList{};
  shared_ptr<string> resultUrl{};
  shared_ptr<string> roomId{};
  shared_ptr<string> status{};
  shared_ptr<string> videoUrl{};

  GetRecordsByFeeIdResponseBodyData() {}

  explicit GetRecordsByFeeIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (departmentName) {
      res["DepartmentName"] = boost::any(*departmentName);
    }
    if (detectProcessName) {
      res["DetectProcessName"] = boost::any(*detectProcessName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (metaUrl) {
      res["MetaUrl"] = boost::any(*metaUrl);
    }
    if (outerBusinessId) {
      res["OuterBusinessId"] = boost::any(*outerBusinessId);
    }
    if (recordAt) {
      res["RecordAt"] = boost::any(*recordAt);
    }
    if (recordRoomList) {
      vector<boost::any> temp1;
      for(auto item1:*recordRoomList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecordRoomList"] = boost::any(temp1);
    }
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("DepartmentName") != m.end() && !m["DepartmentName"].empty()) {
      departmentName = make_shared<string>(boost::any_cast<string>(m["DepartmentName"]));
    }
    if (m.find("DetectProcessName") != m.end() && !m["DetectProcessName"].empty()) {
      detectProcessName = make_shared<string>(boost::any_cast<string>(m["DetectProcessName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MetaUrl") != m.end() && !m["MetaUrl"].empty()) {
      metaUrl = make_shared<string>(boost::any_cast<string>(m["MetaUrl"]));
    }
    if (m.find("OuterBusinessId") != m.end() && !m["OuterBusinessId"].empty()) {
      outerBusinessId = make_shared<string>(boost::any_cast<string>(m["OuterBusinessId"]));
    }
    if (m.find("RecordAt") != m.end() && !m["RecordAt"].empty()) {
      recordAt = make_shared<string>(boost::any_cast<string>(m["RecordAt"]));
    }
    if (m.find("RecordRoomList") != m.end() && !m["RecordRoomList"].empty()) {
      if (typeid(vector<boost::any>) == m["RecordRoomList"].type()) {
        vector<GetRecordsByFeeIdResponseBodyDataRecordRoomList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecordRoomList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRecordsByFeeIdResponseBodyDataRecordRoomList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recordRoomList = make_shared<vector<GetRecordsByFeeIdResponseBodyDataRecordRoomList>>(expect1);
      }
    }
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~GetRecordsByFeeIdResponseBodyData() = default;
};
class GetRecordsByFeeIdResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  GetRecordsByFeeIdResponseBodyErrors() {}

  explicit GetRecordsByFeeIdResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~GetRecordsByFeeIdResponseBodyErrors() = default;
};
class GetRecordsByFeeIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetRecordsByFeeIdResponseBodyData>> data{};
  shared_ptr<vector<GetRecordsByFeeIdResponseBodyErrors>> errors{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRecordsByFeeIdResponseBody() {}

  explicit GetRecordsByFeeIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
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
        vector<GetRecordsByFeeIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRecordsByFeeIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetRecordsByFeeIdResponseBodyData>>(expect1);
      }
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<GetRecordsByFeeIdResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRecordsByFeeIdResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<GetRecordsByFeeIdResponseBodyErrors>>(expect1);
      }
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


  virtual ~GetRecordsByFeeIdResponseBody() = default;
};
class GetRecordsByFeeIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRecordsByFeeIdResponseBody> body{};

  GetRecordsByFeeIdResponse() {}

  explicit GetRecordsByFeeIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRecordsByFeeIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRecordsByFeeIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetRecordsByFeeIdResponse() = default;
};
class GetRecordsByOuterBusinessIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> outerBusinessId{};

  GetRecordsByOuterBusinessIdRequest() {}

  explicit GetRecordsByOuterBusinessIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outerBusinessId) {
      res["OuterBusinessId"] = boost::any(*outerBusinessId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OuterBusinessId") != m.end() && !m["OuterBusinessId"].empty()) {
      outerBusinessId = make_shared<string>(boost::any_cast<string>(m["OuterBusinessId"]));
    }
  }


  virtual ~GetRecordsByOuterBusinessIdRequest() = default;
};
class GetRecordsByOuterBusinessIdResponseBodyDataRecordRoomList : public Darabonba::Model {
public:
  shared_ptr<string> outerBusinessId{};
  shared_ptr<string> recordType{};
  shared_ptr<string> role{};
  shared_ptr<string> roomMetaUrl{};
  shared_ptr<string> roomRecordAt{};
  shared_ptr<string> roomResultUrl{};
  shared_ptr<string> roomStatus{};
  shared_ptr<string> roomVideoUrl{};
  shared_ptr<string> rtcRecordId{};

  GetRecordsByOuterBusinessIdResponseBodyDataRecordRoomList() {}

  explicit GetRecordsByOuterBusinessIdResponseBodyDataRecordRoomList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outerBusinessId) {
      res["OuterBusinessId"] = boost::any(*outerBusinessId);
    }
    if (recordType) {
      res["RecordType"] = boost::any(*recordType);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (roomMetaUrl) {
      res["RoomMetaUrl"] = boost::any(*roomMetaUrl);
    }
    if (roomRecordAt) {
      res["RoomRecordAt"] = boost::any(*roomRecordAt);
    }
    if (roomResultUrl) {
      res["RoomResultUrl"] = boost::any(*roomResultUrl);
    }
    if (roomStatus) {
      res["RoomStatus"] = boost::any(*roomStatus);
    }
    if (roomVideoUrl) {
      res["RoomVideoUrl"] = boost::any(*roomVideoUrl);
    }
    if (rtcRecordId) {
      res["RtcRecordId"] = boost::any(*rtcRecordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OuterBusinessId") != m.end() && !m["OuterBusinessId"].empty()) {
      outerBusinessId = make_shared<string>(boost::any_cast<string>(m["OuterBusinessId"]));
    }
    if (m.find("RecordType") != m.end() && !m["RecordType"].empty()) {
      recordType = make_shared<string>(boost::any_cast<string>(m["RecordType"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("RoomMetaUrl") != m.end() && !m["RoomMetaUrl"].empty()) {
      roomMetaUrl = make_shared<string>(boost::any_cast<string>(m["RoomMetaUrl"]));
    }
    if (m.find("RoomRecordAt") != m.end() && !m["RoomRecordAt"].empty()) {
      roomRecordAt = make_shared<string>(boost::any_cast<string>(m["RoomRecordAt"]));
    }
    if (m.find("RoomResultUrl") != m.end() && !m["RoomResultUrl"].empty()) {
      roomResultUrl = make_shared<string>(boost::any_cast<string>(m["RoomResultUrl"]));
    }
    if (m.find("RoomStatus") != m.end() && !m["RoomStatus"].empty()) {
      roomStatus = make_shared<string>(boost::any_cast<string>(m["RoomStatus"]));
    }
    if (m.find("RoomVideoUrl") != m.end() && !m["RoomVideoUrl"].empty()) {
      roomVideoUrl = make_shared<string>(boost::any_cast<string>(m["RoomVideoUrl"]));
    }
    if (m.find("RtcRecordId") != m.end() && !m["RtcRecordId"].empty()) {
      rtcRecordId = make_shared<string>(boost::any_cast<string>(m["RtcRecordId"]));
    }
  }


  virtual ~GetRecordsByOuterBusinessIdResponseBodyDataRecordRoomList() = default;
};
class GetRecordsByOuterBusinessIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> departmentName{};
  shared_ptr<string> detectProcessName{};
  shared_ptr<long> duration{};
  shared_ptr<string> id{};
  shared_ptr<string> metaUrl{};
  shared_ptr<string> outerBusinessId{};
  shared_ptr<string> recordAt{};
  shared_ptr<vector<GetRecordsByOuterBusinessIdResponseBodyDataRecordRoomList>> recordRoomList{};
  shared_ptr<string> resultUrl{};
  shared_ptr<string> roomId{};
  shared_ptr<string> status{};
  shared_ptr<string> videoUrl{};

  GetRecordsByOuterBusinessIdResponseBodyData() {}

  explicit GetRecordsByOuterBusinessIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (departmentName) {
      res["DepartmentName"] = boost::any(*departmentName);
    }
    if (detectProcessName) {
      res["DetectProcessName"] = boost::any(*detectProcessName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (metaUrl) {
      res["MetaUrl"] = boost::any(*metaUrl);
    }
    if (outerBusinessId) {
      res["OuterBusinessId"] = boost::any(*outerBusinessId);
    }
    if (recordAt) {
      res["RecordAt"] = boost::any(*recordAt);
    }
    if (recordRoomList) {
      vector<boost::any> temp1;
      for(auto item1:*recordRoomList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecordRoomList"] = boost::any(temp1);
    }
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("DepartmentName") != m.end() && !m["DepartmentName"].empty()) {
      departmentName = make_shared<string>(boost::any_cast<string>(m["DepartmentName"]));
    }
    if (m.find("DetectProcessName") != m.end() && !m["DetectProcessName"].empty()) {
      detectProcessName = make_shared<string>(boost::any_cast<string>(m["DetectProcessName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MetaUrl") != m.end() && !m["MetaUrl"].empty()) {
      metaUrl = make_shared<string>(boost::any_cast<string>(m["MetaUrl"]));
    }
    if (m.find("OuterBusinessId") != m.end() && !m["OuterBusinessId"].empty()) {
      outerBusinessId = make_shared<string>(boost::any_cast<string>(m["OuterBusinessId"]));
    }
    if (m.find("RecordAt") != m.end() && !m["RecordAt"].empty()) {
      recordAt = make_shared<string>(boost::any_cast<string>(m["RecordAt"]));
    }
    if (m.find("RecordRoomList") != m.end() && !m["RecordRoomList"].empty()) {
      if (typeid(vector<boost::any>) == m["RecordRoomList"].type()) {
        vector<GetRecordsByOuterBusinessIdResponseBodyDataRecordRoomList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecordRoomList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRecordsByOuterBusinessIdResponseBodyDataRecordRoomList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recordRoomList = make_shared<vector<GetRecordsByOuterBusinessIdResponseBodyDataRecordRoomList>>(expect1);
      }
    }
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~GetRecordsByOuterBusinessIdResponseBodyData() = default;
};
class GetRecordsByOuterBusinessIdResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  GetRecordsByOuterBusinessIdResponseBodyErrors() {}

  explicit GetRecordsByOuterBusinessIdResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~GetRecordsByOuterBusinessIdResponseBodyErrors() = default;
};
class GetRecordsByOuterBusinessIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetRecordsByOuterBusinessIdResponseBodyData>> data{};
  shared_ptr<vector<GetRecordsByOuterBusinessIdResponseBodyErrors>> errors{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRecordsByOuterBusinessIdResponseBody() {}

  explicit GetRecordsByOuterBusinessIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
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
        vector<GetRecordsByOuterBusinessIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRecordsByOuterBusinessIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetRecordsByOuterBusinessIdResponseBodyData>>(expect1);
      }
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<GetRecordsByOuterBusinessIdResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRecordsByOuterBusinessIdResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<GetRecordsByOuterBusinessIdResponseBodyErrors>>(expect1);
      }
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


  virtual ~GetRecordsByOuterBusinessIdResponseBody() = default;
};
class GetRecordsByOuterBusinessIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRecordsByOuterBusinessIdResponseBody> body{};

  GetRecordsByOuterBusinessIdResponse() {}

  explicit GetRecordsByOuterBusinessIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRecordsByOuterBusinessIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRecordsByOuterBusinessIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetRecordsByOuterBusinessIdResponse() = default;
};
class GetRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> id{};

  GetRuleRequest() {}

  explicit GetRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetRuleRequest() = default;
};
class GetRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetRuleResponseBodyData() {}

  explicit GetRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetRuleResponseBodyData() = default;
};
class GetRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetRuleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetRuleResponseBody() {}

  explicit GetRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRuleResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRuleResponseBody() = default;
};
class GetRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRuleResponseBody> body{};

  GetRuleResponse() {}

  explicit GetRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetRuleResponse() = default;
};
class GetStatisticsRecordsByFeeIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> feeId{};

  GetStatisticsRecordsByFeeIdRequest() {}

  explicit GetStatisticsRecordsByFeeIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feeId) {
      res["FeeId"] = boost::any(*feeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeeId") != m.end() && !m["FeeId"].empty()) {
      feeId = make_shared<string>(boost::any_cast<string>(m["FeeId"]));
    }
  }


  virtual ~GetStatisticsRecordsByFeeIdRequest() = default;
};
class GetStatisticsRecordsByFeeIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> beginAt{};
  shared_ptr<long> chargeDuration{};
  shared_ptr<string> createdAt{};
  shared_ptr<long> departmentId{};
  shared_ptr<long> detectionDuration{};
  shared_ptr<string> deviceId{};
  shared_ptr<long> deviceType{};
  shared_ptr<string> endAt{};
  shared_ptr<string> feeId{};
  shared_ptr<long> hour{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedAt{};

  GetStatisticsRecordsByFeeIdResponseBodyData() {}

  explicit GetStatisticsRecordsByFeeIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (beginAt) {
      res["BeginAt"] = boost::any(*beginAt);
    }
    if (chargeDuration) {
      res["ChargeDuration"] = boost::any(*chargeDuration);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (detectionDuration) {
      res["DetectionDuration"] = boost::any(*detectionDuration);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (endAt) {
      res["EndAt"] = boost::any(*endAt);
    }
    if (feeId) {
      res["FeeId"] = boost::any(*feeId);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("BeginAt") != m.end() && !m["BeginAt"].empty()) {
      beginAt = make_shared<string>(boost::any_cast<string>(m["BeginAt"]));
    }
    if (m.find("ChargeDuration") != m.end() && !m["ChargeDuration"].empty()) {
      chargeDuration = make_shared<long>(boost::any_cast<long>(m["ChargeDuration"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<long>(boost::any_cast<long>(m["DepartmentId"]));
    }
    if (m.find("DetectionDuration") != m.end() && !m["DetectionDuration"].empty()) {
      detectionDuration = make_shared<long>(boost::any_cast<long>(m["DetectionDuration"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<long>(boost::any_cast<long>(m["DeviceType"]));
    }
    if (m.find("EndAt") != m.end() && !m["EndAt"].empty()) {
      endAt = make_shared<string>(boost::any_cast<string>(m["EndAt"]));
    }
    if (m.find("FeeId") != m.end() && !m["FeeId"].empty()) {
      feeId = make_shared<string>(boost::any_cast<string>(m["FeeId"]));
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
  }


  virtual ~GetStatisticsRecordsByFeeIdResponseBodyData() = default;
};
class GetStatisticsRecordsByFeeIdResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  GetStatisticsRecordsByFeeIdResponseBodyErrors() {}

  explicit GetStatisticsRecordsByFeeIdResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~GetStatisticsRecordsByFeeIdResponseBodyErrors() = default;
};
class GetStatisticsRecordsByFeeIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetStatisticsRecordsByFeeIdResponseBodyData>> data{};
  shared_ptr<vector<GetStatisticsRecordsByFeeIdResponseBodyErrors>> errors{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetStatisticsRecordsByFeeIdResponseBody() {}

  explicit GetStatisticsRecordsByFeeIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
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
        vector<GetStatisticsRecordsByFeeIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStatisticsRecordsByFeeIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetStatisticsRecordsByFeeIdResponseBodyData>>(expect1);
      }
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<GetStatisticsRecordsByFeeIdResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStatisticsRecordsByFeeIdResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<GetStatisticsRecordsByFeeIdResponseBodyErrors>>(expect1);
      }
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


  virtual ~GetStatisticsRecordsByFeeIdResponseBody() = default;
};
class GetStatisticsRecordsByFeeIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStatisticsRecordsByFeeIdResponseBody> body{};

  GetStatisticsRecordsByFeeIdResponse() {}

  explicit GetStatisticsRecordsByFeeIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStatisticsRecordsByFeeIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStatisticsRecordsByFeeIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetStatisticsRecordsByFeeIdResponse() = default;
};
class GetTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> taskId{};

  GetTaskRequest() {}

  explicit GetTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetTaskRequest() = default;
};
class GetTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> status{};
  shared_ptr<string> videoUrl{};

  GetTaskResponseBodyData() {}

  explicit GetTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~GetTaskResponseBodyData() = default;
};
class GetTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetTaskResponseBody() {}

  explicit GetTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTaskResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTaskResponseBody() = default;
};
class GetTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskResponseBody> body{};

  GetTaskResponse() {}

  explicit GetTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskResponse() = default;
};
class GetTaskGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> id{};

  GetTaskGroupRequest() {}

  explicit GetTaskGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetTaskGroupRequest() = default;
};
class GetTaskGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> completedTasks{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> taskIds{};
  shared_ptr<long> totalTasks{};

  GetTaskGroupResponseBodyData() {}

  explicit GetTaskGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTasks) {
      res["CompletedTasks"] = boost::any(*completedTasks);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskIds) {
      res["TaskIds"] = boost::any(*taskIds);
    }
    if (totalTasks) {
      res["TotalTasks"] = boost::any(*totalTasks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTasks") != m.end() && !m["CompletedTasks"].empty()) {
      completedTasks = make_shared<long>(boost::any_cast<long>(m["CompletedTasks"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskIds") != m.end() && !m["TaskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TotalTasks") != m.end() && !m["TotalTasks"].empty()) {
      totalTasks = make_shared<long>(boost::any_cast<long>(m["TotalTasks"]));
    }
  }


  virtual ~GetTaskGroupResponseBodyData() = default;
};
class GetTaskGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetTaskGroupResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetTaskGroupResponseBody() {}

  explicit GetTaskGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTaskGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTaskGroupResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTaskGroupResponseBody() = default;
};
class GetTaskGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskGroupResponseBody> body{};

  GetTaskGroupResponse() {}

  explicit GetTaskGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskGroupResponse() = default;
};
class GetTtsQuestionByGroupIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};

  GetTtsQuestionByGroupIdRequest() {}

  explicit GetTtsQuestionByGroupIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~GetTtsQuestionByGroupIdRequest() = default;
};
class GetTtsQuestionByGroupIdResponseBodyDataQuestions : public Darabonba::Model {
public:
  shared_ptr<string> answer{};
  shared_ptr<double> duration{};
  shared_ptr<long> id{};
  shared_ptr<string> ossUrl{};
  shared_ptr<string> question{};
  shared_ptr<long> questionGroupId{};
  shared_ptr<string> questionKey{};
  shared_ptr<long> tenantId{};

  GetTtsQuestionByGroupIdResponseBodyDataQuestions() {}

  explicit GetTtsQuestionByGroupIdResponseBodyDataQuestions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["Answer"] = boost::any(*answer);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ossUrl) {
      res["OssUrl"] = boost::any(*ossUrl);
    }
    if (question) {
      res["Question"] = boost::any(*question);
    }
    if (questionGroupId) {
      res["QuestionGroupId"] = boost::any(*questionGroupId);
    }
    if (questionKey) {
      res["QuestionKey"] = boost::any(*questionKey);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Answer") != m.end() && !m["Answer"].empty()) {
      answer = make_shared<string>(boost::any_cast<string>(m["Answer"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("OssUrl") != m.end() && !m["OssUrl"].empty()) {
      ossUrl = make_shared<string>(boost::any_cast<string>(m["OssUrl"]));
    }
    if (m.find("Question") != m.end() && !m["Question"].empty()) {
      question = make_shared<string>(boost::any_cast<string>(m["Question"]));
    }
    if (m.find("QuestionGroupId") != m.end() && !m["QuestionGroupId"].empty()) {
      questionGroupId = make_shared<long>(boost::any_cast<long>(m["QuestionGroupId"]));
    }
    if (m.find("QuestionKey") != m.end() && !m["QuestionKey"].empty()) {
      questionKey = make_shared<string>(boost::any_cast<string>(m["QuestionKey"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~GetTtsQuestionByGroupIdResponseBodyDataQuestions() = default;
};
class GetTtsQuestionByGroupIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<vector<GetTtsQuestionByGroupIdResponseBodyDataQuestions>> questions{};

  GetTtsQuestionByGroupIdResponseBodyData() {}

  explicit GetTtsQuestionByGroupIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (questions) {
      vector<boost::any> temp1;
      for(auto item1:*questions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Questions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Questions") != m.end() && !m["Questions"].empty()) {
      if (typeid(vector<boost::any>) == m["Questions"].type()) {
        vector<GetTtsQuestionByGroupIdResponseBodyDataQuestions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Questions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTtsQuestionByGroupIdResponseBodyDataQuestions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        questions = make_shared<vector<GetTtsQuestionByGroupIdResponseBodyDataQuestions>>(expect1);
      }
    }
  }


  virtual ~GetTtsQuestionByGroupIdResponseBodyData() = default;
};
class GetTtsQuestionByGroupIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetTtsQuestionByGroupIdResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetTtsQuestionByGroupIdResponseBody() {}

  explicit GetTtsQuestionByGroupIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTtsQuestionByGroupIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTtsQuestionByGroupIdResponseBodyData>(model1);
      }
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


  virtual ~GetTtsQuestionByGroupIdResponseBody() = default;
};
class GetTtsQuestionByGroupIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTtsQuestionByGroupIdResponseBody> body{};

  GetTtsQuestionByGroupIdResponse() {}

  explicit GetTtsQuestionByGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTtsQuestionByGroupIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTtsQuestionByGroupIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetTtsQuestionByGroupIdResponse() = default;
};
class GetUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> id{};

  GetUserRequest() {}

  explicit GetUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetUserRequest() = default;
};
class GetUserResponseBodyDataDepartments : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetUserResponseBodyDataDepartments() {}

  explicit GetUserResponseBodyDataDepartments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetUserResponseBodyDataDepartments() = default;
};
class GetUserResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<vector<GetUserResponseBodyDataDepartments>> departments{};
  shared_ptr<string> email{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> role{};
  shared_ptr<string> source{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> username{};

  GetUserResponseBodyData() {}

  explicit GetUserResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (departments) {
      vector<boost::any> temp1;
      for(auto item1:*departments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Departments"] = boost::any(temp1);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Departments") != m.end() && !m["Departments"].empty()) {
      if (typeid(vector<boost::any>) == m["Departments"].type()) {
        vector<GetUserResponseBodyDataDepartments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Departments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserResponseBodyDataDepartments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        departments = make_shared<vector<GetUserResponseBodyDataDepartments>>(expect1);
      }
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~GetUserResponseBodyData() = default;
};
class GetUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetUserResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetUserResponseBody() {}

  explicit GetUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetUserResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetUserResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetUserResponseBody() = default;
};
class GetUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserResponseBody> body{};

  GetUserResponse() {}

  explicit GetUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserResponse() = default;
};
class GetVideoMergeTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetVideoMergeTaskRequest() {}

  explicit GetVideoMergeTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetVideoMergeTaskRequest() = default;
};
class GetVideoMergeTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clientTraceId{};
  shared_ptr<double> duration{};
  shared_ptr<long> height{};
  shared_ptr<string> mergeFileId{};
  shared_ptr<string> taskId{};
  shared_ptr<long> width{};

  GetVideoMergeTaskResponseBodyData() {}

  explicit GetVideoMergeTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientTraceId) {
      res["ClientTraceId"] = boost::any(*clientTraceId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (mergeFileId) {
      res["MergeFileId"] = boost::any(*mergeFileId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientTraceId") != m.end() && !m["ClientTraceId"].empty()) {
      clientTraceId = make_shared<string>(boost::any_cast<string>(m["ClientTraceId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("MergeFileId") != m.end() && !m["MergeFileId"].empty()) {
      mergeFileId = make_shared<string>(boost::any_cast<string>(m["MergeFileId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~GetVideoMergeTaskResponseBodyData() = default;
};
class GetVideoMergeTaskResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  GetVideoMergeTaskResponseBodyErrors() {}

  explicit GetVideoMergeTaskResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~GetVideoMergeTaskResponseBodyErrors() = default;
};
class GetVideoMergeTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetVideoMergeTaskResponseBodyData> data{};
  shared_ptr<vector<GetVideoMergeTaskResponseBodyErrors>> errors{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetVideoMergeTaskResponseBody() {}

  explicit GetVideoMergeTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
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
        GetVideoMergeTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetVideoMergeTaskResponseBodyData>(model1);
      }
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<GetVideoMergeTaskResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVideoMergeTaskResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<GetVideoMergeTaskResponseBodyErrors>>(expect1);
      }
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


  virtual ~GetVideoMergeTaskResponseBody() = default;
};
class GetVideoMergeTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVideoMergeTaskResponseBody> body{};

  GetVideoMergeTaskResponse() {}

  explicit GetVideoMergeTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVideoMergeTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVideoMergeTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetVideoMergeTaskResponse() = default;
};
class GetWatermarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> watermarkId{};

  GetWatermarkRequest() {}

  explicit GetWatermarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (watermarkId) {
      res["WatermarkId"] = boost::any(*watermarkId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("WatermarkId") != m.end() && !m["WatermarkId"].empty()) {
      watermarkId = make_shared<string>(boost::any_cast<string>(m["WatermarkId"]));
    }
  }


  virtual ~GetWatermarkRequest() = default;
};
class GetWatermarkResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetWatermarkResponseBodyData() {}

  explicit GetWatermarkResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetWatermarkResponseBodyData() = default;
};
class GetWatermarkResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  GetWatermarkResponseBodyErrors() {}

  explicit GetWatermarkResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~GetWatermarkResponseBodyErrors() = default;
};
class GetWatermarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetWatermarkResponseBodyData> data{};
  shared_ptr<vector<GetWatermarkResponseBodyErrors>> errors{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetWatermarkResponseBody() {}

  explicit GetWatermarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
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
        GetWatermarkResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetWatermarkResponseBodyData>(model1);
      }
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<GetWatermarkResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWatermarkResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<GetWatermarkResponseBodyErrors>>(expect1);
      }
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


  virtual ~GetWatermarkResponseBody() = default;
};
class GetWatermarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWatermarkResponseBody> body{};

  GetWatermarkResponse() {}

  explicit GetWatermarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWatermarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWatermarkResponseBody>(model1);
      }
    }
  }


  virtual ~GetWatermarkResponse() = default;
};
class JoinRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> roomToken{};
  shared_ptr<string> streamId{};

  JoinRoomRequest() {}

  explicit JoinRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (roomToken) {
      res["RoomToken"] = boost::any(*roomToken);
    }
    if (streamId) {
      res["StreamId"] = boost::any(*streamId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RoomToken") != m.end() && !m["RoomToken"].empty()) {
      roomToken = make_shared<string>(boost::any_cast<string>(m["RoomToken"]));
    }
    if (m.find("StreamId") != m.end() && !m["StreamId"].empty()) {
      streamId = make_shared<string>(boost::any_cast<string>(m["StreamId"]));
    }
  }


  virtual ~JoinRoomRequest() = default;
};
class JoinRoomResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> roomId{};
  shared_ptr<string> streamId{};

  JoinRoomResponseBodyData() {}

  explicit JoinRoomResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (streamId) {
      res["StreamId"] = boost::any(*streamId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("StreamId") != m.end() && !m["StreamId"].empty()) {
      streamId = make_shared<string>(boost::any_cast<string>(m["StreamId"]));
    }
  }


  virtual ~JoinRoomResponseBodyData() = default;
};
class JoinRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<JoinRoomResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  JoinRoomResponseBody() {}

  explicit JoinRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        JoinRoomResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<JoinRoomResponseBodyData>(model1);
      }
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


  virtual ~JoinRoomResponseBody() = default;
};
class JoinRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<JoinRoomResponseBody> body{};

  JoinRoomResponse() {}

  explicit JoinRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        JoinRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<JoinRoomResponseBody>(model1);
      }
    }
  }


  virtual ~JoinRoomResponse() = default;
};
class LeaveRoomRequest : public Darabonba::Model {
public:
  shared_ptr<string> roomId{};

  LeaveRoomRequest() {}

  explicit LeaveRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~LeaveRoomRequest() = default;
};
class LeaveRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LeaveRoomResponseBody() {}

  explicit LeaveRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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


  virtual ~LeaveRoomResponseBody() = default;
};
class LeaveRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LeaveRoomResponseBody> body{};

  LeaveRoomResponse() {}

  explicit LeaveRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LeaveRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LeaveRoomResponseBody>(model1);
      }
    }
  }


  virtual ~LeaveRoomResponse() = default;
};
class ListAppsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};

  ListAppsRequest() {}

  explicit ListAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAppsRequest() = default;
};
class ListAppsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> departmentId{};
  shared_ptr<string> departmentName{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> packageName{};

  ListAppsResponseBodyDataItems() {}

  explicit ListAppsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (departmentName) {
      res["DepartmentName"] = boost::any(*departmentName);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("DepartmentName") != m.end() && !m["DepartmentName"].empty()) {
      departmentName = make_shared<string>(boost::any_cast<string>(m["DepartmentName"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
  }


  virtual ~ListAppsResponseBodyDataItems() = default;
};
class ListAppsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppsResponseBodyDataItems>> items{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  ListAppsResponseBodyData() {}

  explicit ListAppsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Items"] = boost::any(temp1);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListAppsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListAppsResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListAppsResponseBodyData() = default;
};
class ListAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListAppsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListAppsResponseBody() {}

  explicit ListAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListAppsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAppsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAppsResponseBody() = default;
};
class ListAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppsResponseBody> body{};

  ListAppsResponse() {}

  explicit ListAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppsResponse() = default;
};
class ListDepartmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userId{};

  ListDepartmentsRequest() {}

  explicit ListDepartmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListDepartmentsRequest() = default;
};
class ListDepartmentsResponseBodyDataItemsAdministrators : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ListDepartmentsResponseBodyDataItemsAdministrators() {}

  explicit ListDepartmentsResponseBodyDataItemsAdministrators(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListDepartmentsResponseBodyDataItemsAdministrators() = default;
};
class ListDepartmentsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<ListDepartmentsResponseBodyDataItemsAdministrators>> administrators{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> updatedAt{};

  ListDepartmentsResponseBodyDataItems() {}

  explicit ListDepartmentsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (administrators) {
      vector<boost::any> temp1;
      for(auto item1:*administrators){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Administrators"] = boost::any(temp1);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Administrators") != m.end() && !m["Administrators"].empty()) {
      if (typeid(vector<boost::any>) == m["Administrators"].type()) {
        vector<ListDepartmentsResponseBodyDataItemsAdministrators> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Administrators"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDepartmentsResponseBodyDataItemsAdministrators model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        administrators = make_shared<vector<ListDepartmentsResponseBodyDataItemsAdministrators>>(expect1);
      }
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
  }


  virtual ~ListDepartmentsResponseBodyDataItems() = default;
};
class ListDepartmentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDepartmentsResponseBodyDataItems>> items{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  ListDepartmentsResponseBodyData() {}

  explicit ListDepartmentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Items"] = boost::any(temp1);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListDepartmentsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDepartmentsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListDepartmentsResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListDepartmentsResponseBodyData() = default;
};
class ListDepartmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListDepartmentsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListDepartmentsResponseBody() {}

  explicit ListDepartmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDepartmentsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDepartmentsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDepartmentsResponseBody() = default;
};
class ListDepartmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDepartmentsResponseBody> body{};

  ListDepartmentsResponse() {}

  explicit ListDepartmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDepartmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDepartmentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDepartmentsResponse() = default;
};
class ListDetectProcessesRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> publishStatus{};
  shared_ptr<string> sort{};
  shared_ptr<string> sortKey{};
  shared_ptr<string> type{};

  ListDetectProcessesRequest() {}

  explicit ListDetectProcessesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (publishStatus) {
      res["PublishStatus"] = boost::any(*publishStatus);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (sortKey) {
      res["SortKey"] = boost::any(*sortKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PublishStatus") != m.end() && !m["PublishStatus"].empty()) {
      publishStatus = make_shared<bool>(boost::any_cast<bool>(m["PublishStatus"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("SortKey") != m.end() && !m["SortKey"].empty()) {
      sortKey = make_shared<string>(boost::any_cast<string>(m["SortKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListDetectProcessesRequest() = default;
};
class ListDetectProcessesResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentAt{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> draft{};
  shared_ptr<string> draftAt{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> id{};
  shared_ptr<string> md5{};
  shared_ptr<string> name{};
  shared_ptr<bool> newVersion{};
  shared_ptr<bool> published{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedAt{};

  ListDetectProcessesResponseBodyDataItems() {}

  explicit ListDetectProcessesResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentAt) {
      res["ContentAt"] = boost::any(*contentAt);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (draft) {
      res["Draft"] = boost::any(*draft);
    }
    if (draftAt) {
      res["DraftAt"] = boost::any(*draftAt);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (newVersion) {
      res["NewVersion"] = boost::any(*newVersion);
    }
    if (published) {
      res["Published"] = boost::any(*published);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentAt") != m.end() && !m["ContentAt"].empty()) {
      contentAt = make_shared<string>(boost::any_cast<string>(m["ContentAt"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Draft") != m.end() && !m["Draft"].empty()) {
      draft = make_shared<string>(boost::any_cast<string>(m["Draft"]));
    }
    if (m.find("DraftAt") != m.end() && !m["DraftAt"].empty()) {
      draftAt = make_shared<string>(boost::any_cast<string>(m["DraftAt"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NewVersion") != m.end() && !m["NewVersion"].empty()) {
      newVersion = make_shared<bool>(boost::any_cast<bool>(m["NewVersion"]));
    }
    if (m.find("Published") != m.end() && !m["Published"].empty()) {
      published = make_shared<bool>(boost::any_cast<bool>(m["Published"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
  }


  virtual ~ListDetectProcessesResponseBodyDataItems() = default;
};
class ListDetectProcessesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDetectProcessesResponseBodyDataItems>> items{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  ListDetectProcessesResponseBodyData() {}

  explicit ListDetectProcessesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Items"] = boost::any(temp1);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListDetectProcessesResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDetectProcessesResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListDetectProcessesResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListDetectProcessesResponseBodyData() = default;
};
class ListDetectProcessesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListDetectProcessesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListDetectProcessesResponseBody() {}

  explicit ListDetectProcessesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDetectProcessesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDetectProcessesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDetectProcessesResponseBody() = default;
};
class ListDetectProcessesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDetectProcessesResponseBody> body{};

  ListDetectProcessesResponse() {}

  explicit ListDetectProcessesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDetectProcessesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDetectProcessesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDetectProcessesResponse() = default;
};
class ListDetectionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> createDateFrom{};
  shared_ptr<string> createDateTo{};
  shared_ptr<string> departmentId{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> recordingType{};
  shared_ptr<string> ruleId{};

  ListDetectionsRequest() {}

  explicit ListDetectionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDateFrom) {
      res["CreateDateFrom"] = boost::any(*createDateFrom);
    }
    if (createDateTo) {
      res["CreateDateTo"] = boost::any(*createDateTo);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (recordingType) {
      res["RecordingType"] = boost::any(*recordingType);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDateFrom") != m.end() && !m["CreateDateFrom"].empty()) {
      createDateFrom = make_shared<string>(boost::any_cast<string>(m["CreateDateFrom"]));
    }
    if (m.find("CreateDateTo") != m.end() && !m["CreateDateTo"].empty()) {
      createDateTo = make_shared<string>(boost::any_cast<string>(m["CreateDateTo"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RecordingType") != m.end() && !m["RecordingType"].empty()) {
      recordingType = make_shared<string>(boost::any_cast<string>(m["RecordingType"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~ListDetectionsRequest() = default;
};
class ListDetectionsResponseBodyDataItemsTasks : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> status{};
  shared_ptr<string> videoMetaUrl{};
  shared_ptr<string> videoUrl{};

  ListDetectionsResponseBodyDataItemsTasks() {}

  explicit ListDetectionsResponseBodyDataItemsTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (videoMetaUrl) {
      res["VideoMetaUrl"] = boost::any(*videoMetaUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VideoMetaUrl") != m.end() && !m["VideoMetaUrl"].empty()) {
      videoMetaUrl = make_shared<string>(boost::any_cast<string>(m["VideoMetaUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~ListDetectionsResponseBodyDataItemsTasks() = default;
};
class ListDetectionsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> departmentId{};
  shared_ptr<string> departmentName{};
  shared_ptr<string> id{};
  shared_ptr<string> recordingType{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListDetectionsResponseBodyDataItemsTasks>> tasks{};

  ListDetectionsResponseBodyDataItems() {}

  explicit ListDetectionsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (departmentName) {
      res["DepartmentName"] = boost::any(*departmentName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (recordingType) {
      res["RecordingType"] = boost::any(*recordingType);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
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
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("DepartmentName") != m.end() && !m["DepartmentName"].empty()) {
      departmentName = make_shared<string>(boost::any_cast<string>(m["DepartmentName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RecordingType") != m.end() && !m["RecordingType"].empty()) {
      recordingType = make_shared<string>(boost::any_cast<string>(m["RecordingType"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<ListDetectionsResponseBodyDataItemsTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDetectionsResponseBodyDataItemsTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ListDetectionsResponseBodyDataItemsTasks>>(expect1);
      }
    }
  }


  virtual ~ListDetectionsResponseBodyDataItems() = default;
};
class ListDetectionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDetectionsResponseBodyDataItems>> items{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  ListDetectionsResponseBodyData() {}

  explicit ListDetectionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Items"] = boost::any(temp1);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListDetectionsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDetectionsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListDetectionsResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListDetectionsResponseBodyData() = default;
};
class ListDetectionsResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  ListDetectionsResponseBodyErrors() {}

  explicit ListDetectionsResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~ListDetectionsResponseBodyErrors() = default;
};
class ListDetectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListDetectionsResponseBodyData> data{};
  shared_ptr<vector<ListDetectionsResponseBodyErrors>> errors{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListDetectionsResponseBody() {}

  explicit ListDetectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDetectionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDetectionsResponseBodyData>(model1);
      }
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<ListDetectionsResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDetectionsResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<ListDetectionsResponseBodyErrors>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDetectionsResponseBody() = default;
};
class ListDetectionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDetectionsResponseBody> body{};

  ListDetectionsResponse() {}

  explicit ListDetectionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDetectionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDetectionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDetectionsResponse() = default;
};
class ListFilesRequest : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<string> prefix{};

  ListFilesRequest() {}

  explicit ListFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
  }


  virtual ~ListFilesRequest() = default;
};
class ListFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListFilesResponseBody() {}

  explicit ListFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~ListFilesResponseBody() = default;
};
class ListFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFilesResponseBody> body{};

  ListFilesResponse() {}

  explicit ListFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFilesResponseBody>(model1);
      }
    }
  }


  virtual ~ListFilesResponse() = default;
};
class ListRecordResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> createDateFrom{};
  shared_ptr<string> createDateTo{};
  shared_ptr<string> departmentId{};
  shared_ptr<string> outerBusinessId{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> recordId{};
  shared_ptr<string> type{};

  ListRecordResultsRequest() {}

  explicit ListRecordResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDateFrom) {
      res["CreateDateFrom"] = boost::any(*createDateFrom);
    }
    if (createDateTo) {
      res["CreateDateTo"] = boost::any(*createDateTo);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (outerBusinessId) {
      res["OuterBusinessId"] = boost::any(*outerBusinessId);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDateFrom") != m.end() && !m["CreateDateFrom"].empty()) {
      createDateFrom = make_shared<string>(boost::any_cast<string>(m["CreateDateFrom"]));
    }
    if (m.find("CreateDateTo") != m.end() && !m["CreateDateTo"].empty()) {
      createDateTo = make_shared<string>(boost::any_cast<string>(m["CreateDateTo"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("OuterBusinessId") != m.end() && !m["OuterBusinessId"].empty()) {
      outerBusinessId = make_shared<string>(boost::any_cast<string>(m["OuterBusinessId"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListRecordResultsRequest() = default;
};
class ListRecordResultsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> departmentName{};
  shared_ptr<string> detectProcessName{};
  shared_ptr<long> duration{};
  shared_ptr<string> id{};
  shared_ptr<string> metaUrl{};
  shared_ptr<string> outerBusinessId{};
  shared_ptr<string> recordAt{};
  shared_ptr<string> resultUrl{};
  shared_ptr<string> roomId{};
  shared_ptr<string> rtcRecordId{};
  shared_ptr<string> status{};
  shared_ptr<string> videoUrl{};

  ListRecordResultsResponseBodyDataItems() {}

  explicit ListRecordResultsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (departmentName) {
      res["DepartmentName"] = boost::any(*departmentName);
    }
    if (detectProcessName) {
      res["DetectProcessName"] = boost::any(*detectProcessName);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (metaUrl) {
      res["MetaUrl"] = boost::any(*metaUrl);
    }
    if (outerBusinessId) {
      res["OuterBusinessId"] = boost::any(*outerBusinessId);
    }
    if (recordAt) {
      res["RecordAt"] = boost::any(*recordAt);
    }
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (rtcRecordId) {
      res["RtcRecordId"] = boost::any(*rtcRecordId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("DepartmentName") != m.end() && !m["DepartmentName"].empty()) {
      departmentName = make_shared<string>(boost::any_cast<string>(m["DepartmentName"]));
    }
    if (m.find("DetectProcessName") != m.end() && !m["DetectProcessName"].empty()) {
      detectProcessName = make_shared<string>(boost::any_cast<string>(m["DetectProcessName"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MetaUrl") != m.end() && !m["MetaUrl"].empty()) {
      metaUrl = make_shared<string>(boost::any_cast<string>(m["MetaUrl"]));
    }
    if (m.find("OuterBusinessId") != m.end() && !m["OuterBusinessId"].empty()) {
      outerBusinessId = make_shared<string>(boost::any_cast<string>(m["OuterBusinessId"]));
    }
    if (m.find("RecordAt") != m.end() && !m["RecordAt"].empty()) {
      recordAt = make_shared<string>(boost::any_cast<string>(m["RecordAt"]));
    }
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RtcRecordId") != m.end() && !m["RtcRecordId"].empty()) {
      rtcRecordId = make_shared<string>(boost::any_cast<string>(m["RtcRecordId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~ListRecordResultsResponseBodyDataItems() = default;
};
class ListRecordResultsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListRecordResultsResponseBodyDataItems>> items{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  ListRecordResultsResponseBodyData() {}

  explicit ListRecordResultsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Items"] = boost::any(temp1);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListRecordResultsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRecordResultsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListRecordResultsResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListRecordResultsResponseBodyData() = default;
};
class ListRecordResultsResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  ListRecordResultsResponseBodyErrors() {}

  explicit ListRecordResultsResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~ListRecordResultsResponseBodyErrors() = default;
};
class ListRecordResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListRecordResultsResponseBodyData> data{};
  shared_ptr<vector<ListRecordResultsResponseBodyErrors>> errors{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListRecordResultsResponseBody() {}

  explicit ListRecordResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
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
        ListRecordResultsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListRecordResultsResponseBodyData>(model1);
      }
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<ListRecordResultsResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRecordResultsResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<ListRecordResultsResponseBodyErrors>>(expect1);
      }
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


  virtual ~ListRecordResultsResponseBody() = default;
};
class ListRecordResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRecordResultsResponseBody> body{};

  ListRecordResultsResponse() {}

  explicit ListRecordResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRecordResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRecordResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRecordResultsResponse() = default;
};
class ListRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};

  ListRulesRequest() {}

  explicit ListRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListRulesRequest() = default;
};
class ListRulesResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ListRulesResponseBodyDataItems() {}

  explicit ListRulesResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListRulesResponseBodyDataItems() = default;
};
class ListRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListRulesResponseBodyDataItems>> items{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  ListRulesResponseBodyData() {}

  explicit ListRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Items"] = boost::any(temp1);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListRulesResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRulesResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListRulesResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListRulesResponseBodyData() = default;
};
class ListRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListRulesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListRulesResponseBody() {}

  explicit ListRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListRulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListRulesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRulesResponseBody() = default;
};
class ListRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRulesResponseBody> body{};

  ListRulesResponse() {}

  explicit ListRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRulesResponse() = default;
};
class ListTaskGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListTaskGroupsRequest() {}

  explicit ListTaskGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListTaskGroupsRequest() = default;
};
class ListTaskGroupsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<long> completedTasks{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> taskIds{};
  shared_ptr<long> totalTasks{};

  ListTaskGroupsResponseBodyDataItems() {}

  explicit ListTaskGroupsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completedTasks) {
      res["CompletedTasks"] = boost::any(*completedTasks);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskIds) {
      res["TaskIds"] = boost::any(*taskIds);
    }
    if (totalTasks) {
      res["TotalTasks"] = boost::any(*totalTasks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompletedTasks") != m.end() && !m["CompletedTasks"].empty()) {
      completedTasks = make_shared<long>(boost::any_cast<long>(m["CompletedTasks"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskIds") != m.end() && !m["TaskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TotalTasks") != m.end() && !m["TotalTasks"].empty()) {
      totalTasks = make_shared<long>(boost::any_cast<long>(m["TotalTasks"]));
    }
  }


  virtual ~ListTaskGroupsResponseBodyDataItems() = default;
};
class ListTaskGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListTaskGroupsResponseBodyDataItems>> items{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  ListTaskGroupsResponseBodyData() {}

  explicit ListTaskGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Items"] = boost::any(temp1);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListTaskGroupsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTaskGroupsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListTaskGroupsResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListTaskGroupsResponseBodyData() = default;
};
class ListTaskGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListTaskGroupsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListTaskGroupsResponseBody() {}

  explicit ListTaskGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListTaskGroupsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListTaskGroupsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListTaskGroupsResponseBody() = default;
};
class ListTaskGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTaskGroupsResponseBody> body{};

  ListTaskGroupsResponse() {}

  explicit ListTaskGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTaskGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTaskGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTaskGroupsResponse() = default;
};
class ListTaskItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  ListTaskItemsRequest() {}

  explicit ListTaskItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTaskItemsRequest() = default;
};
class ListTaskItemsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> output{};
  shared_ptr<long> segmentSeq{};
  shared_ptr<string> status{};

  ListTaskItemsResponseBodyData() {}

  explicit ListTaskItemsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (segmentSeq) {
      res["SegmentSeq"] = boost::any(*segmentSeq);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("SegmentSeq") != m.end() && !m["SegmentSeq"].empty()) {
      segmentSeq = make_shared<long>(boost::any_cast<long>(m["SegmentSeq"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListTaskItemsResponseBodyData() = default;
};
class ListTaskItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListTaskItemsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListTaskItemsResponseBody() {}

  explicit ListTaskItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListTaskItemsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTaskItemsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListTaskItemsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListTaskItemsResponseBody() = default;
};
class ListTaskItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTaskItemsResponseBody> body{};

  ListTaskItemsResponse() {}

  explicit ListTaskItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTaskItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTaskItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTaskItemsResponse() = default;
};
class ListTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> taskGroupId{};

  ListTasksRequest() {}

  explicit ListTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (taskGroupId) {
      res["TaskGroupId"] = boost::any(*taskGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TaskGroupId") != m.end() && !m["TaskGroupId"].empty()) {
      taskGroupId = make_shared<string>(boost::any_cast<string>(m["TaskGroupId"]));
    }
  }


  virtual ~ListTasksRequest() = default;
};
class ListTasksResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> status{};
  shared_ptr<string> videoMetaUrl{};
  shared_ptr<string> videoUrl{};

  ListTasksResponseBodyDataItems() {}

  explicit ListTasksResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (videoMetaUrl) {
      res["VideoMetaUrl"] = boost::any(*videoMetaUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VideoMetaUrl") != m.end() && !m["VideoMetaUrl"].empty()) {
      videoMetaUrl = make_shared<string>(boost::any_cast<string>(m["VideoMetaUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~ListTasksResponseBodyDataItems() = default;
};
class ListTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListTasksResponseBodyDataItems>> items{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  ListTasksResponseBodyData() {}

  explicit ListTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Items"] = boost::any(temp1);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListTasksResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTasksResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListTasksResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListTasksResponseBodyData() = default;
};
class ListTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListTasksResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListTasksResponseBody() {}

  explicit ListTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListTasksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListTasksResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListTasksResponseBody() = default;
};
class ListTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTasksResponseBody> body{};

  ListTasksResponse() {}

  explicit ListTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListTasksResponse() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> departmentId{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> username{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyDataItemsDepartments : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> updatedAt{};

  ListUsersResponseBodyDataItemsDepartments() {}

  explicit ListUsersResponseBodyDataItemsDepartments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
  }


  virtual ~ListUsersResponseBodyDataItemsDepartments() = default;
};
class ListUsersResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<vector<ListUsersResponseBodyDataItemsDepartments>> departments{};
  shared_ptr<string> email{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> ramUsername{};
  shared_ptr<string> role{};
  shared_ptr<string> source{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> username{};

  ListUsersResponseBodyDataItems() {}

  explicit ListUsersResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (departments) {
      vector<boost::any> temp1;
      for(auto item1:*departments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Departments"] = boost::any(temp1);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (ramUsername) {
      res["RamUsername"] = boost::any(*ramUsername);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Departments") != m.end() && !m["Departments"].empty()) {
      if (typeid(vector<boost::any>) == m["Departments"].type()) {
        vector<ListUsersResponseBodyDataItemsDepartments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Departments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyDataItemsDepartments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        departments = make_shared<vector<ListUsersResponseBodyDataItemsDepartments>>(expect1);
      }
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("RamUsername") != m.end() && !m["RamUsername"].empty()) {
      ramUsername = make_shared<string>(boost::any_cast<string>(m["RamUsername"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~ListUsersResponseBodyDataItems() = default;
};
class ListUsersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListUsersResponseBodyDataItems>> items{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  ListUsersResponseBodyData() {}

  explicit ListUsersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Items"] = boost::any(temp1);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListUsersResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListUsersResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListUsersResponseBodyData() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListUsersResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListUsersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListUsersResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListUsersResponseBody() = default;
};
class ListUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersResponseBody> body{};

  ListUsersResponse() {}

  explicit ListUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersResponse() = default;
};
class ListWatermarksRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};

  ListWatermarksRequest() {}

  explicit ListWatermarksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListWatermarksRequest() = default;
};
class ListWatermarksResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ListWatermarksResponseBodyDataItems() {}

  explicit ListWatermarksResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListWatermarksResponseBodyDataItems() = default;
};
class ListWatermarksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListWatermarksResponseBodyDataItems>> items{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  ListWatermarksResponseBodyData() {}

  explicit ListWatermarksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Items"] = boost::any(temp1);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListWatermarksResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWatermarksResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListWatermarksResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListWatermarksResponseBodyData() = default;
};
class ListWatermarksResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  ListWatermarksResponseBodyErrors() {}

  explicit ListWatermarksResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~ListWatermarksResponseBodyErrors() = default;
};
class ListWatermarksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListWatermarksResponseBodyData> data{};
  shared_ptr<vector<ListWatermarksResponseBodyErrors>> errors{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListWatermarksResponseBody() {}

  explicit ListWatermarksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
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
        ListWatermarksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListWatermarksResponseBodyData>(model1);
      }
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<ListWatermarksResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWatermarksResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<ListWatermarksResponseBodyErrors>>(expect1);
      }
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


  virtual ~ListWatermarksResponseBody() = default;
};
class ListWatermarksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWatermarksResponseBody> body{};

  ListWatermarksResponse() {}

  explicit ListWatermarksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWatermarksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWatermarksResponseBody>(model1);
      }
    }
  }


  virtual ~ListWatermarksResponse() = default;
};
class RenameDetectProcessRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  RenameDetectProcessRequest() {}

  explicit RenameDetectProcessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~RenameDetectProcessRequest() = default;
};
class RenameDetectProcessResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> draft{};
  shared_ptr<string> id{};
  shared_ptr<string> md5{};
  shared_ptr<string> name{};

  RenameDetectProcessResponseBodyData() {}

  explicit RenameDetectProcessResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (draft) {
      res["Draft"] = boost::any(*draft);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Draft") != m.end() && !m["Draft"].empty()) {
      draft = make_shared<string>(boost::any_cast<string>(m["Draft"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~RenameDetectProcessResponseBodyData() = default;
};
class RenameDetectProcessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RenameDetectProcessResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RenameDetectProcessResponseBody() {}

  explicit RenameDetectProcessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RenameDetectProcessResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RenameDetectProcessResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RenameDetectProcessResponseBody() = default;
};
class RenameDetectProcessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenameDetectProcessResponseBody> body{};

  RenameDetectProcessResponse() {}

  explicit RenameDetectProcessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenameDetectProcessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenameDetectProcessResponseBody>(model1);
      }
    }
  }


  virtual ~RenameDetectProcessResponse() = default;
};
class TtsCommonRequestTtsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> format{};
  shared_ptr<long> pitchRate{};
  shared_ptr<long> sampleRate{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> text{};
  shared_ptr<string> voice{};
  shared_ptr<long> volume{};

  TtsCommonRequestTtsRequest() {}

  explicit TtsCommonRequestTtsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (pitchRate) {
      res["PitchRate"] = boost::any(*pitchRate);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (voice) {
      res["Voice"] = boost::any(*voice);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("PitchRate") != m.end() && !m["PitchRate"].empty()) {
      pitchRate = make_shared<long>(boost::any_cast<long>(m["PitchRate"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<long>(boost::any_cast<long>(m["SampleRate"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Voice") != m.end() && !m["Voice"].empty()) {
      voice = make_shared<string>(boost::any_cast<string>(m["Voice"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~TtsCommonRequestTtsRequest() = default;
};
class TtsCommonRequest : public Darabonba::Model {
public:
  shared_ptr<TtsCommonRequestTtsRequest> ttsRequest{};

  TtsCommonRequest() {}

  explicit TtsCommonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ttsRequest) {
      res["TtsRequest"] = ttsRequest ? boost::any(ttsRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TtsRequest") != m.end() && !m["TtsRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["TtsRequest"].type()) {
        TtsCommonRequestTtsRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TtsRequest"]));
        ttsRequest = make_shared<TtsCommonRequestTtsRequest>(model1);
      }
    }
  }


  virtual ~TtsCommonRequest() = default;
};
class TtsCommonShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ttsRequestShrink{};

  TtsCommonShrinkRequest() {}

  explicit TtsCommonShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ttsRequestShrink) {
      res["TtsRequest"] = boost::any(*ttsRequestShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TtsRequest") != m.end() && !m["TtsRequest"].empty()) {
      ttsRequestShrink = make_shared<string>(boost::any_cast<string>(m["TtsRequest"]));
    }
  }


  virtual ~TtsCommonShrinkRequest() = default;
};
class TtsCommonResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> publicUrl{};
  shared_ptr<string> taskId{};

  TtsCommonResponseBodyData() {}

  explicit TtsCommonResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (publicUrl) {
      res["PublicUrl"] = boost::any(*publicUrl);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PublicUrl") != m.end() && !m["PublicUrl"].empty()) {
      publicUrl = make_shared<string>(boost::any_cast<string>(m["PublicUrl"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~TtsCommonResponseBodyData() = default;
};
class TtsCommonResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<TtsCommonResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  TtsCommonResponseBody() {}

  explicit TtsCommonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TtsCommonResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TtsCommonResponseBodyData>(model1);
      }
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


  virtual ~TtsCommonResponseBody() = default;
};
class TtsCommonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TtsCommonResponseBody> body{};

  TtsCommonResponse() {}

  explicit TtsCommonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TtsCommonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TtsCommonResponseBody>(model1);
      }
    }
  }


  virtual ~TtsCommonResponse() = default;
};
class TtsTaskRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> roomId{};
  shared_ptr<long> timestamp{};

  TtsTaskRequestRequest() {}

  explicit TtsTaskRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~TtsTaskRequestRequest() = default;
};
class TtsTaskRequest : public Darabonba::Model {
public:
  shared_ptr<TtsTaskRequestRequest> request{};

  TtsTaskRequest() {}

  explicit TtsTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        TtsTaskRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<TtsTaskRequestRequest>(model1);
      }
    }
  }


  virtual ~TtsTaskRequest() = default;
};
class TtsTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestShrink{};

  TtsTaskShrinkRequest() {}

  explicit TtsTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestShrink) {
      res["Request"] = boost::any(*requestShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      requestShrink = make_shared<string>(boost::any_cast<string>(m["Request"]));
    }
  }


  virtual ~TtsTaskShrinkRequest() = default;
};
class TtsTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> answer{};
  shared_ptr<double> duration{};
  shared_ptr<string> question{};
  shared_ptr<long> speechRate{};

  TtsTaskResponseBodyData() {}

  explicit TtsTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["Answer"] = boost::any(*answer);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (question) {
      res["Question"] = boost::any(*question);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Answer") != m.end() && !m["Answer"].empty()) {
      answer = make_shared<string>(boost::any_cast<string>(m["Answer"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Question") != m.end() && !m["Question"].empty()) {
      question = make_shared<string>(boost::any_cast<string>(m["Question"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
  }


  virtual ~TtsTaskResponseBodyData() = default;
};
class TtsTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<TtsTaskResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  TtsTaskResponseBody() {}

  explicit TtsTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TtsTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TtsTaskResponseBodyData>(model1);
      }
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


  virtual ~TtsTaskResponseBody() = default;
};
class TtsTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TtsTaskResponseBody> body{};

  TtsTaskResponse() {}

  explicit TtsTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TtsTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TtsTaskResponseBody>(model1);
      }
    }
  }


  virtual ~TtsTaskResponse() = default;
};
class UpdateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> departmentId{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> packageName{};

  UpdateAppRequest() {}

  explicit UpdateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
  }


  virtual ~UpdateAppRequest() = default;
};
class UpdateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateAppResponseBody() {}

  explicit UpdateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAppResponseBody() = default;
};
class UpdateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAppResponseBody> body{};

  UpdateAppResponse() {}

  explicit UpdateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppResponse() = default;
};
class UpdateDepartmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};

  UpdateDepartmentRequest() {}

  explicit UpdateDepartmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateDepartmentRequest() = default;
};
class UpdateDepartmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateDepartmentResponseBody() {}

  explicit UpdateDepartmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDepartmentResponseBody() = default;
};
class UpdateDepartmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDepartmentResponseBody> body{};

  UpdateDepartmentResponse() {}

  explicit UpdateDepartmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDepartmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDepartmentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDepartmentResponse() = default;
};
class UpdateDetectProcessRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> draft{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  UpdateDetectProcessRequest() {}

  explicit UpdateDetectProcessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (draft) {
      res["Draft"] = boost::any(*draft);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Draft") != m.end() && !m["Draft"].empty()) {
      draft = make_shared<string>(boost::any_cast<string>(m["Draft"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateDetectProcessRequest() = default;
};
class UpdateDetectProcessResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> draft{};
  shared_ptr<string> id{};
  shared_ptr<string> md5{};
  shared_ptr<string> name{};

  UpdateDetectProcessResponseBodyData() {}

  explicit UpdateDetectProcessResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (draft) {
      res["Draft"] = boost::any(*draft);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Draft") != m.end() && !m["Draft"].empty()) {
      draft = make_shared<string>(boost::any_cast<string>(m["Draft"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateDetectProcessResponseBodyData() = default;
};
class UpdateDetectProcessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateDetectProcessResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateDetectProcessResponseBody() {}

  explicit UpdateDetectProcessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateDetectProcessResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateDetectProcessResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDetectProcessResponseBody() = default;
};
class UpdateDetectProcessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDetectProcessResponseBody> body{};

  UpdateDetectProcessResponse() {}

  explicit UpdateDetectProcessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDetectProcessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDetectProcessResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDetectProcessResponse() = default;
};
class UpdateRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  UpdateRuleRequest() {}

  explicit UpdateRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateRuleRequest() = default;
};
class UpdateRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  UpdateRuleResponseBodyData() {}

  explicit UpdateRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateRuleResponseBodyData() = default;
};
class UpdateRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateRuleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateRuleResponseBody() {}

  explicit UpdateRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateRuleResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateRuleResponseBody() = default;
};
class UpdateRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRuleResponseBody> body{};

  UpdateRuleResponse() {}

  explicit UpdateRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRuleResponse() = default;
};
class UpdateUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> role{};

  UpdateUserRequest() {}

  explicit UpdateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~UpdateUserRequest() = default;
};
class UpdateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateUserResponseBody() {}

  explicit UpdateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateUserResponseBody() = default;
};
class UpdateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserResponseBody> body{};

  UpdateUserResponse() {}

  explicit UpdateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserResponse() = default;
};
class UpdateWatermarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};
  shared_ptr<string> watermarkId{};

  UpdateWatermarkRequest() {}

  explicit UpdateWatermarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (watermarkId) {
      res["WatermarkId"] = boost::any(*watermarkId);
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
    if (m.find("WatermarkId") != m.end() && !m["WatermarkId"].empty()) {
      watermarkId = make_shared<string>(boost::any_cast<string>(m["WatermarkId"]));
    }
  }


  virtual ~UpdateWatermarkRequest() = default;
};
class UpdateWatermarkResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  UpdateWatermarkResponseBodyData() {}

  explicit UpdateWatermarkResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateWatermarkResponseBodyData() = default;
};
class UpdateWatermarkResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  UpdateWatermarkResponseBodyErrors() {}

  explicit UpdateWatermarkResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~UpdateWatermarkResponseBodyErrors() = default;
};
class UpdateWatermarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateWatermarkResponseBodyData> data{};
  shared_ptr<vector<UpdateWatermarkResponseBodyErrors>> errors{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateWatermarkResponseBody() {}

  explicit UpdateWatermarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
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
        UpdateWatermarkResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateWatermarkResponseBodyData>(model1);
      }
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<UpdateWatermarkResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateWatermarkResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<UpdateWatermarkResponseBodyErrors>>(expect1);
      }
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


  virtual ~UpdateWatermarkResponseBody() = default;
};
class UpdateWatermarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWatermarkResponseBody> body{};

  UpdateWatermarkResponse() {}

  explicit UpdateWatermarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWatermarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWatermarkResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWatermarkResponse() = default;
};
class UploadReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientBaseParam{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> departmentId{};
  shared_ptr<string> detectProcessId{};
  shared_ptr<long> duration{};
  shared_ptr<string> feeId{};
  shared_ptr<string> metaUrl{};
  shared_ptr<string> outerBusinessId{};
  shared_ptr<string> recordAt{};
  shared_ptr<string> resultUrl{};
  shared_ptr<string> role{};
  shared_ptr<string> roomId{};
  shared_ptr<string> rtcRecordId{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};
  shared_ptr<string> videoType{};
  shared_ptr<string> videoUrl{};

  UploadReportRequest() {}

  explicit UploadReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientBaseParam) {
      res["ClientBaseParam"] = boost::any(*clientBaseParam);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (detectProcessId) {
      res["DetectProcessId"] = boost::any(*detectProcessId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (feeId) {
      res["FeeId"] = boost::any(*feeId);
    }
    if (metaUrl) {
      res["MetaUrl"] = boost::any(*metaUrl);
    }
    if (outerBusinessId) {
      res["OuterBusinessId"] = boost::any(*outerBusinessId);
    }
    if (recordAt) {
      res["RecordAt"] = boost::any(*recordAt);
    }
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (rtcRecordId) {
      res["RtcRecordId"] = boost::any(*rtcRecordId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (videoType) {
      res["VideoType"] = boost::any(*videoType);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientBaseParam") != m.end() && !m["ClientBaseParam"].empty()) {
      clientBaseParam = make_shared<string>(boost::any_cast<string>(m["ClientBaseParam"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<string>(boost::any_cast<string>(m["DepartmentId"]));
    }
    if (m.find("DetectProcessId") != m.end() && !m["DetectProcessId"].empty()) {
      detectProcessId = make_shared<string>(boost::any_cast<string>(m["DetectProcessId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("FeeId") != m.end() && !m["FeeId"].empty()) {
      feeId = make_shared<string>(boost::any_cast<string>(m["FeeId"]));
    }
    if (m.find("MetaUrl") != m.end() && !m["MetaUrl"].empty()) {
      metaUrl = make_shared<string>(boost::any_cast<string>(m["MetaUrl"]));
    }
    if (m.find("OuterBusinessId") != m.end() && !m["OuterBusinessId"].empty()) {
      outerBusinessId = make_shared<string>(boost::any_cast<string>(m["OuterBusinessId"]));
    }
    if (m.find("RecordAt") != m.end() && !m["RecordAt"].empty()) {
      recordAt = make_shared<string>(boost::any_cast<string>(m["RecordAt"]));
    }
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("RtcRecordId") != m.end() && !m["RtcRecordId"].empty()) {
      rtcRecordId = make_shared<string>(boost::any_cast<string>(m["RtcRecordId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VideoType") != m.end() && !m["VideoType"].empty()) {
      videoType = make_shared<string>(boost::any_cast<string>(m["VideoType"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~UploadReportRequest() = default;
};
class UploadReportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<long> duration{};
  shared_ptr<string> id{};
  shared_ptr<string> metaUrl{};
  shared_ptr<string> outerBusinessId{};
  shared_ptr<string> recordAt{};
  shared_ptr<string> resultUrl{};
  shared_ptr<string> rtcRecordId{};
  shared_ptr<string> videoUrl{};

  UploadReportResponseBodyData() {}

  explicit UploadReportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (metaUrl) {
      res["MetaUrl"] = boost::any(*metaUrl);
    }
    if (outerBusinessId) {
      res["OuterBusinessId"] = boost::any(*outerBusinessId);
    }
    if (recordAt) {
      res["RecordAt"] = boost::any(*recordAt);
    }
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    if (rtcRecordId) {
      res["RtcRecordId"] = boost::any(*rtcRecordId);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MetaUrl") != m.end() && !m["MetaUrl"].empty()) {
      metaUrl = make_shared<string>(boost::any_cast<string>(m["MetaUrl"]));
    }
    if (m.find("OuterBusinessId") != m.end() && !m["OuterBusinessId"].empty()) {
      outerBusinessId = make_shared<string>(boost::any_cast<string>(m["OuterBusinessId"]));
    }
    if (m.find("RecordAt") != m.end() && !m["RecordAt"].empty()) {
      recordAt = make_shared<string>(boost::any_cast<string>(m["RecordAt"]));
    }
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
    if (m.find("RtcRecordId") != m.end() && !m["RtcRecordId"].empty()) {
      rtcRecordId = make_shared<string>(boost::any_cast<string>(m["RtcRecordId"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~UploadReportResponseBodyData() = default;
};
class UploadReportResponseBodyErrors : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> message{};

  UploadReportResponseBodyErrors() {}

  explicit UploadReportResponseBodyErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~UploadReportResponseBodyErrors() = default;
};
class UploadReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UploadReportResponseBodyData> data{};
  shared_ptr<vector<UploadReportResponseBodyErrors>> errors{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UploadReportResponseBody() {}

  explicit UploadReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errors) {
      vector<boost::any> temp1;
      for(auto item1:*errors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Errors"] = boost::any(temp1);
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
        UploadReportResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UploadReportResponseBodyData>(model1);
      }
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      if (typeid(vector<boost::any>) == m["Errors"].type()) {
        vector<UploadReportResponseBodyErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Errors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UploadReportResponseBodyErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errors = make_shared<vector<UploadReportResponseBodyErrors>>(expect1);
      }
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


  virtual ~UploadReportResponseBody() = default;
};
class UploadReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadReportResponseBody> body{};

  UploadReportResponse() {}

  explicit UploadReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadReportResponseBody>(model1);
      }
    }
  }


  virtual ~UploadReportResponse() = default;
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
  AsrRealtimeResponse asrRealtimeWithOptions(shared_ptr<AsrRealtimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AsrRealtimeResponse asrRealtime(shared_ptr<AsrRealtimeRequest> request);
  AsrSentenceResponse asrSentenceWithOptions(shared_ptr<AsrSentenceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AsrSentenceResponse asrSentence(shared_ptr<AsrSentenceRequest> request);
  AsrTaskResponse asrTaskWithOptions(shared_ptr<AsrTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AsrTaskResponse asrTask(shared_ptr<AsrTaskRequest> request);
  AssociateRoomResponse associateRoomWithOptions(shared_ptr<AssociateRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateRoomResponse associateRoom(shared_ptr<AssociateRoomRequest> request);
  CreateAppResponse createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<CreateAppRequest> request);
  CreateDepartmentResponse createDepartmentWithOptions(shared_ptr<CreateDepartmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDepartmentResponse createDepartment(shared_ptr<CreateDepartmentRequest> request);
  CreateDetectProcessResponse createDetectProcessWithOptions(shared_ptr<CreateDetectProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDetectProcessResponse createDetectProcess(shared_ptr<CreateDetectProcessRequest> request);
  CreateRuleResponse createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRuleResponse createRule(shared_ptr<CreateRuleRequest> request);
  CreateSignatureResponse createSignatureWithOptions(shared_ptr<CreateSignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSignatureResponse createSignature(shared_ptr<CreateSignatureRequest> request);
  CreateTaskGroupResponse createTaskGroupWithOptions(shared_ptr<CreateTaskGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskGroupResponse createTaskGroup(shared_ptr<CreateTaskGroupRequest> request);
  CreateTtsQuestionResponse createTtsQuestionWithOptions(shared_ptr<CreateTtsQuestionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTtsQuestionResponse createTtsQuestion(shared_ptr<CreateTtsQuestionRequest> request);
  CreateTtsQuestionGroupResponse createTtsQuestionGroupWithOptions(shared_ptr<CreateTtsQuestionGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTtsQuestionGroupResponse createTtsQuestionGroup(shared_ptr<CreateTtsQuestionGroupRequest> request);
  CreateUserDepartmentsResponse createUserDepartmentsWithOptions(shared_ptr<CreateUserDepartmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserDepartmentsResponse createUserDepartments(shared_ptr<CreateUserDepartmentsRequest> request);
  CreateVideoMergeTaskResponse createVideoMergeTaskWithOptions(shared_ptr<CreateVideoMergeTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVideoMergeTaskResponse createVideoMergeTask(shared_ptr<CreateVideoMergeTaskRequest> request);
  CreateWatermarkResponse createWatermarkWithOptions(shared_ptr<CreateWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWatermarkResponse createWatermark(shared_ptr<CreateWatermarkRequest> request);
  DeleteAppResponse deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppResponse deleteApp(shared_ptr<DeleteAppRequest> request);
  DeleteDepartmentResponse deleteDepartmentWithOptions(shared_ptr<DeleteDepartmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDepartmentResponse deleteDepartment(shared_ptr<DeleteDepartmentRequest> request);
  DeleteDetectProcessResponse deleteDetectProcessWithOptions(shared_ptr<DeleteDetectProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDetectProcessResponse deleteDetectProcess(shared_ptr<DeleteDetectProcessRequest> request);
  DeleteRuleResponse deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRuleResponse deleteRule(shared_ptr<DeleteRuleRequest> request);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<DeleteUserRequest> request);
  DeleteUserDepartmentsResponse deleteUserDepartmentsWithOptions(shared_ptr<DeleteUserDepartmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserDepartmentsResponse deleteUserDepartments(shared_ptr<DeleteUserDepartmentsRequest> request);
  DeleteWatermarkResponse deleteWatermarkWithOptions(shared_ptr<DeleteWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWatermarkResponse deleteWatermark(shared_ptr<DeleteWatermarkRequest> request);
  FaceCompareResponse faceCompareWithOptions(shared_ptr<FaceCompareRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceCompareResponse faceCompare(shared_ptr<FaceCompareRequest> request);
  FaceLivenessResponse faceLivenessWithOptions(shared_ptr<FaceLivenessRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceLivenessResponse faceLiveness(shared_ptr<FaceLivenessRequest> request);
  FaceRecognizeResponse faceRecognizeWithOptions(shared_ptr<FaceRecognizeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceRecognizeResponse faceRecognize(shared_ptr<FaceRecognizeRequest> request);
  GetAppResponse getAppWithOptions(shared_ptr<GetAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppResponse getApp(shared_ptr<GetAppRequest> request);
  GetAsrResultResponse getAsrResultWithOptions(shared_ptr<GetAsrResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsrResultResponse getAsrResult(shared_ptr<GetAsrResultRequest> request);
  GetDepartmentResponse getDepartmentWithOptions(shared_ptr<GetDepartmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDepartmentResponse getDepartment(shared_ptr<GetDepartmentRequest> request);
  GetDetectProcessResponse getDetectProcessWithOptions(shared_ptr<GetDetectProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDetectProcessResponse getDetectProcess(shared_ptr<GetDetectProcessRequest> request);
  GetDetectProcessJsonFileResponse getDetectProcessJsonFileWithOptions(shared_ptr<GetDetectProcessJsonFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDetectProcessJsonFileResponse getDetectProcessJsonFile(shared_ptr<GetDetectProcessJsonFileRequest> request);
  GetDetectionResponse getDetectionWithOptions(shared_ptr<GetDetectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDetectionResponse getDetection(shared_ptr<GetDetectionRequest> request);
  GetPreSignedUrlResponse getPreSignedUrlWithOptions(shared_ptr<GetPreSignedUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPreSignedUrlResponse getPreSignedUrl(shared_ptr<GetPreSignedUrlRequest> request);
  GetRecordResultResponse getRecordResultWithOptions(shared_ptr<GetRecordResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRecordResultResponse getRecordResult(shared_ptr<GetRecordResultRequest> request);
  GetRecordsByFeeIdResponse getRecordsByFeeIdWithOptions(shared_ptr<GetRecordsByFeeIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRecordsByFeeIdResponse getRecordsByFeeId(shared_ptr<GetRecordsByFeeIdRequest> request);
  GetRecordsByOuterBusinessIdResponse getRecordsByOuterBusinessIdWithOptions(shared_ptr<GetRecordsByOuterBusinessIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRecordsByOuterBusinessIdResponse getRecordsByOuterBusinessId(shared_ptr<GetRecordsByOuterBusinessIdRequest> request);
  GetRuleResponse getRuleWithOptions(shared_ptr<GetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRuleResponse getRule(shared_ptr<GetRuleRequest> request);
  GetStatisticsRecordsByFeeIdResponse getStatisticsRecordsByFeeIdWithOptions(shared_ptr<GetStatisticsRecordsByFeeIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStatisticsRecordsByFeeIdResponse getStatisticsRecordsByFeeId(shared_ptr<GetStatisticsRecordsByFeeIdRequest> request);
  GetTaskResponse getTaskWithOptions(shared_ptr<GetTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResponse getTask(shared_ptr<GetTaskRequest> request);
  GetTaskGroupResponse getTaskGroupWithOptions(shared_ptr<GetTaskGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskGroupResponse getTaskGroup(shared_ptr<GetTaskGroupRequest> request);
  GetTtsQuestionByGroupIdResponse getTtsQuestionByGroupIdWithOptions(shared_ptr<GetTtsQuestionByGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTtsQuestionByGroupIdResponse getTtsQuestionByGroupId(shared_ptr<GetTtsQuestionByGroupIdRequest> request);
  GetUserResponse getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<GetUserRequest> request);
  GetVideoMergeTaskResponse getVideoMergeTaskWithOptions(shared_ptr<GetVideoMergeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVideoMergeTaskResponse getVideoMergeTask(shared_ptr<GetVideoMergeTaskRequest> request);
  GetWatermarkResponse getWatermarkWithOptions(shared_ptr<GetWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWatermarkResponse getWatermark(shared_ptr<GetWatermarkRequest> request);
  JoinRoomResponse joinRoomWithOptions(shared_ptr<JoinRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  JoinRoomResponse joinRoom(shared_ptr<JoinRoomRequest> request);
  LeaveRoomResponse leaveRoomWithOptions(shared_ptr<LeaveRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LeaveRoomResponse leaveRoom(shared_ptr<LeaveRoomRequest> request);
  ListAppsResponse listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppsResponse listApps(shared_ptr<ListAppsRequest> request);
  ListDepartmentsResponse listDepartmentsWithOptions(shared_ptr<ListDepartmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDepartmentsResponse listDepartments(shared_ptr<ListDepartmentsRequest> request);
  ListDetectProcessesResponse listDetectProcessesWithOptions(shared_ptr<ListDetectProcessesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDetectProcessesResponse listDetectProcesses(shared_ptr<ListDetectProcessesRequest> request);
  ListDetectionsResponse listDetectionsWithOptions(shared_ptr<ListDetectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDetectionsResponse listDetections(shared_ptr<ListDetectionsRequest> request);
  ListFilesResponse listFilesWithOptions(shared_ptr<ListFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFilesResponse listFiles(shared_ptr<ListFilesRequest> request);
  ListRecordResultsResponse listRecordResultsWithOptions(shared_ptr<ListRecordResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRecordResultsResponse listRecordResults(shared_ptr<ListRecordResultsRequest> request);
  ListRulesResponse listRulesWithOptions(shared_ptr<ListRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRulesResponse listRules(shared_ptr<ListRulesRequest> request);
  ListTaskGroupsResponse listTaskGroupsWithOptions(shared_ptr<ListTaskGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTaskGroupsResponse listTaskGroups(shared_ptr<ListTaskGroupsRequest> request);
  ListTaskItemsResponse listTaskItemsWithOptions(shared_ptr<ListTaskItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTaskItemsResponse listTaskItems(shared_ptr<ListTaskItemsRequest> request);
  ListTasksResponse listTasksWithOptions(shared_ptr<ListTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTasksResponse listTasks(shared_ptr<ListTasksRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  ListWatermarksResponse listWatermarksWithOptions(shared_ptr<ListWatermarksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWatermarksResponse listWatermarks(shared_ptr<ListWatermarksRequest> request);
  RenameDetectProcessResponse renameDetectProcessWithOptions(shared_ptr<RenameDetectProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenameDetectProcessResponse renameDetectProcess(shared_ptr<RenameDetectProcessRequest> request);
  TtsCommonResponse ttsCommonWithOptions(shared_ptr<TtsCommonRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TtsCommonResponse ttsCommon(shared_ptr<TtsCommonRequest> request);
  TtsTaskResponse ttsTaskWithOptions(shared_ptr<TtsTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TtsTaskResponse ttsTask(shared_ptr<TtsTaskRequest> request);
  UpdateAppResponse updateAppWithOptions(shared_ptr<UpdateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppResponse updateApp(shared_ptr<UpdateAppRequest> request);
  UpdateDepartmentResponse updateDepartmentWithOptions(shared_ptr<UpdateDepartmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDepartmentResponse updateDepartment(shared_ptr<UpdateDepartmentRequest> request);
  UpdateDetectProcessResponse updateDetectProcessWithOptions(shared_ptr<UpdateDetectProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDetectProcessResponse updateDetectProcess(shared_ptr<UpdateDetectProcessRequest> request);
  UpdateRuleResponse updateRuleWithOptions(shared_ptr<UpdateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRuleResponse updateRule(shared_ptr<UpdateRuleRequest> request);
  UpdateUserResponse updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserResponse updateUser(shared_ptr<UpdateUserRequest> request);
  UpdateWatermarkResponse updateWatermarkWithOptions(shared_ptr<UpdateWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWatermarkResponse updateWatermark(shared_ptr<UpdateWatermarkRequest> request);
  UploadReportResponse uploadReportWithOptions(shared_ptr<UploadReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadReportResponse uploadReport(shared_ptr<UploadReportRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Idrsservice20200630

#endif
