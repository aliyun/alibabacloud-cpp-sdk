// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_TINGWU20230930_H_
#define ALIBABACLOUD_TINGWU20230930_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Tingwu20230930 {
class CreateTaskRequestInput : public Darabonba::Model {
public:
  shared_ptr<string> fileUrl{};
  shared_ptr<string> format{};
  shared_ptr<bool> progressiveCallbacksEnabled{};
  shared_ptr<long> sampleRate{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskKey{};

  CreateTaskRequestInput() {}

  explicit CreateTaskRequestInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (progressiveCallbacksEnabled) {
      res["ProgressiveCallbacksEnabled"] = boost::any(*progressiveCallbacksEnabled);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (sourceLanguage) {
      res["SourceLanguage"] = boost::any(*sourceLanguage);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskKey) {
      res["TaskKey"] = boost::any(*taskKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("ProgressiveCallbacksEnabled") != m.end() && !m["ProgressiveCallbacksEnabled"].empty()) {
      progressiveCallbacksEnabled = make_shared<bool>(boost::any_cast<bool>(m["ProgressiveCallbacksEnabled"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<long>(boost::any_cast<long>(m["SampleRate"]));
    }
    if (m.find("SourceLanguage") != m.end() && !m["SourceLanguage"].empty()) {
      sourceLanguage = make_shared<string>(boost::any_cast<string>(m["SourceLanguage"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskKey") != m.end() && !m["TaskKey"].empty()) {
      taskKey = make_shared<string>(boost::any_cast<string>(m["TaskKey"]));
    }
  }


  virtual ~CreateTaskRequestInput() = default;
};
class CreateTaskRequestParametersSummarization : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> types{};

  CreateTaskRequestParametersSummarization() {}

  explicit CreateTaskRequestParametersSummarization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (types) {
      res["Types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Types"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      types = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateTaskRequestParametersSummarization() = default;
};
class CreateTaskRequestParametersTranscoding : public Darabonba::Model {
public:
  shared_ptr<bool> spectrumEnabled{};
  shared_ptr<string> targetAudioFormat{};
  shared_ptr<string> targetVideoFormat{};
  shared_ptr<bool> videoThumbnailEnabled{};

  CreateTaskRequestParametersTranscoding() {}

  explicit CreateTaskRequestParametersTranscoding(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spectrumEnabled) {
      res["SpectrumEnabled"] = boost::any(*spectrumEnabled);
    }
    if (targetAudioFormat) {
      res["TargetAudioFormat"] = boost::any(*targetAudioFormat);
    }
    if (targetVideoFormat) {
      res["TargetVideoFormat"] = boost::any(*targetVideoFormat);
    }
    if (videoThumbnailEnabled) {
      res["VideoThumbnailEnabled"] = boost::any(*videoThumbnailEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpectrumEnabled") != m.end() && !m["SpectrumEnabled"].empty()) {
      spectrumEnabled = make_shared<bool>(boost::any_cast<bool>(m["SpectrumEnabled"]));
    }
    if (m.find("TargetAudioFormat") != m.end() && !m["TargetAudioFormat"].empty()) {
      targetAudioFormat = make_shared<string>(boost::any_cast<string>(m["TargetAudioFormat"]));
    }
    if (m.find("TargetVideoFormat") != m.end() && !m["TargetVideoFormat"].empty()) {
      targetVideoFormat = make_shared<string>(boost::any_cast<string>(m["TargetVideoFormat"]));
    }
    if (m.find("VideoThumbnailEnabled") != m.end() && !m["VideoThumbnailEnabled"].empty()) {
      videoThumbnailEnabled = make_shared<bool>(boost::any_cast<bool>(m["VideoThumbnailEnabled"]));
    }
  }


  virtual ~CreateTaskRequestParametersTranscoding() = default;
};
class CreateTaskRequestParametersTranscriptionDiarization : public Darabonba::Model {
public:
  shared_ptr<long> speakerCount{};

  CreateTaskRequestParametersTranscriptionDiarization() {}

  explicit CreateTaskRequestParametersTranscriptionDiarization(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (speakerCount) {
      res["SpeakerCount"] = boost::any(*speakerCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpeakerCount") != m.end() && !m["SpeakerCount"].empty()) {
      speakerCount = make_shared<long>(boost::any_cast<long>(m["SpeakerCount"]));
    }
  }


  virtual ~CreateTaskRequestParametersTranscriptionDiarization() = default;
};
class CreateTaskRequestParametersTranscription : public Darabonba::Model {
public:
  shared_ptr<bool> audioEventDetectionEnabled{};
  shared_ptr<CreateTaskRequestParametersTranscriptionDiarization> diarization{};
  shared_ptr<bool> diarizationEnabled{};
  shared_ptr<long> outputLevel{};

  CreateTaskRequestParametersTranscription() {}

  explicit CreateTaskRequestParametersTranscription(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioEventDetectionEnabled) {
      res["AudioEventDetectionEnabled"] = boost::any(*audioEventDetectionEnabled);
    }
    if (diarization) {
      res["Diarization"] = diarization ? boost::any(diarization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (diarizationEnabled) {
      res["DiarizationEnabled"] = boost::any(*diarizationEnabled);
    }
    if (outputLevel) {
      res["OutputLevel"] = boost::any(*outputLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioEventDetectionEnabled") != m.end() && !m["AudioEventDetectionEnabled"].empty()) {
      audioEventDetectionEnabled = make_shared<bool>(boost::any_cast<bool>(m["AudioEventDetectionEnabled"]));
    }
    if (m.find("Diarization") != m.end() && !m["Diarization"].empty()) {
      if (typeid(map<string, boost::any>) == m["Diarization"].type()) {
        CreateTaskRequestParametersTranscriptionDiarization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Diarization"]));
        diarization = make_shared<CreateTaskRequestParametersTranscriptionDiarization>(model1);
      }
    }
    if (m.find("DiarizationEnabled") != m.end() && !m["DiarizationEnabled"].empty()) {
      diarizationEnabled = make_shared<bool>(boost::any_cast<bool>(m["DiarizationEnabled"]));
    }
    if (m.find("OutputLevel") != m.end() && !m["OutputLevel"].empty()) {
      outputLevel = make_shared<long>(boost::any_cast<long>(m["OutputLevel"]));
    }
  }


  virtual ~CreateTaskRequestParametersTranscription() = default;
};
class CreateTaskRequestParametersTranslation : public Darabonba::Model {
public:
  shared_ptr<long> outputLevel{};
  shared_ptr<map<string, boost::any>> targetLanguages{};

  CreateTaskRequestParametersTranslation() {}

  explicit CreateTaskRequestParametersTranslation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outputLevel) {
      res["OutputLevel"] = boost::any(*outputLevel);
    }
    if (targetLanguages) {
      res["TargetLanguages"] = boost::any(*targetLanguages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutputLevel") != m.end() && !m["OutputLevel"].empty()) {
      outputLevel = make_shared<long>(boost::any_cast<long>(m["OutputLevel"]));
    }
    if (m.find("TargetLanguages") != m.end() && !m["TargetLanguages"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TargetLanguages"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      targetLanguages = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateTaskRequestParametersTranslation() = default;
};
class CreateTaskRequestParameters : public Darabonba::Model {
public:
  shared_ptr<bool> autoChaptersEnabled{};
  shared_ptr<bool> meetingAssistanceEnabled{};
  shared_ptr<bool> pptExtractionEnabled{};
  shared_ptr<CreateTaskRequestParametersSummarization> summarization{};
  shared_ptr<bool> summarizationEnabled{};
  shared_ptr<CreateTaskRequestParametersTranscoding> transcoding{};
  shared_ptr<CreateTaskRequestParametersTranscription> transcription{};
  shared_ptr<CreateTaskRequestParametersTranslation> translation{};
  shared_ptr<bool> translationEnabled{};

  CreateTaskRequestParameters() {}

  explicit CreateTaskRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoChaptersEnabled) {
      res["AutoChaptersEnabled"] = boost::any(*autoChaptersEnabled);
    }
    if (meetingAssistanceEnabled) {
      res["MeetingAssistanceEnabled"] = boost::any(*meetingAssistanceEnabled);
    }
    if (pptExtractionEnabled) {
      res["PptExtractionEnabled"] = boost::any(*pptExtractionEnabled);
    }
    if (summarization) {
      res["Summarization"] = summarization ? boost::any(summarization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (summarizationEnabled) {
      res["SummarizationEnabled"] = boost::any(*summarizationEnabled);
    }
    if (transcoding) {
      res["Transcoding"] = transcoding ? boost::any(transcoding->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (transcription) {
      res["Transcription"] = transcription ? boost::any(transcription->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (translation) {
      res["Translation"] = translation ? boost::any(translation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (translationEnabled) {
      res["TranslationEnabled"] = boost::any(*translationEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoChaptersEnabled") != m.end() && !m["AutoChaptersEnabled"].empty()) {
      autoChaptersEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoChaptersEnabled"]));
    }
    if (m.find("MeetingAssistanceEnabled") != m.end() && !m["MeetingAssistanceEnabled"].empty()) {
      meetingAssistanceEnabled = make_shared<bool>(boost::any_cast<bool>(m["MeetingAssistanceEnabled"]));
    }
    if (m.find("PptExtractionEnabled") != m.end() && !m["PptExtractionEnabled"].empty()) {
      pptExtractionEnabled = make_shared<bool>(boost::any_cast<bool>(m["PptExtractionEnabled"]));
    }
    if (m.find("Summarization") != m.end() && !m["Summarization"].empty()) {
      if (typeid(map<string, boost::any>) == m["Summarization"].type()) {
        CreateTaskRequestParametersSummarization model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Summarization"]));
        summarization = make_shared<CreateTaskRequestParametersSummarization>(model1);
      }
    }
    if (m.find("SummarizationEnabled") != m.end() && !m["SummarizationEnabled"].empty()) {
      summarizationEnabled = make_shared<bool>(boost::any_cast<bool>(m["SummarizationEnabled"]));
    }
    if (m.find("Transcoding") != m.end() && !m["Transcoding"].empty()) {
      if (typeid(map<string, boost::any>) == m["Transcoding"].type()) {
        CreateTaskRequestParametersTranscoding model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Transcoding"]));
        transcoding = make_shared<CreateTaskRequestParametersTranscoding>(model1);
      }
    }
    if (m.find("Transcription") != m.end() && !m["Transcription"].empty()) {
      if (typeid(map<string, boost::any>) == m["Transcription"].type()) {
        CreateTaskRequestParametersTranscription model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Transcription"]));
        transcription = make_shared<CreateTaskRequestParametersTranscription>(model1);
      }
    }
    if (m.find("Translation") != m.end() && !m["Translation"].empty()) {
      if (typeid(map<string, boost::any>) == m["Translation"].type()) {
        CreateTaskRequestParametersTranslation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Translation"]));
        translation = make_shared<CreateTaskRequestParametersTranslation>(model1);
      }
    }
    if (m.find("TranslationEnabled") != m.end() && !m["TranslationEnabled"].empty()) {
      translationEnabled = make_shared<bool>(boost::any_cast<bool>(m["TranslationEnabled"]));
    }
  }


  virtual ~CreateTaskRequestParameters() = default;
};
class CreateTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<CreateTaskRequestInput> input{};
  shared_ptr<CreateTaskRequestParameters> parameters{};
  shared_ptr<string> operation{};
  shared_ptr<string> type{};

  CreateTaskRequest() {}

  explicit CreateTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (input) {
      res["Input"] = input ? boost::any(input->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameters) {
      res["Parameters"] = parameters ? boost::any(parameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operation) {
      res["operation"] = boost::any(*operation);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      if (typeid(map<string, boost::any>) == m["Input"].type()) {
        CreateTaskRequestInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Input"]));
        input = make_shared<CreateTaskRequestInput>(model1);
      }
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["Parameters"].type()) {
        CreateTaskRequestParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parameters"]));
        parameters = make_shared<CreateTaskRequestParameters>(model1);
      }
    }
    if (m.find("operation") != m.end() && !m["operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["operation"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateTaskRequest() = default;
};
class CreateTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> taskKey{};

  CreateTaskResponseBodyData() {}

  explicit CreateTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskKey) {
      res["TaskKey"] = boost::any(*taskKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskKey") != m.end() && !m["TaskKey"].empty()) {
      taskKey = make_shared<string>(boost::any_cast<string>(m["TaskKey"]));
    }
  }


  virtual ~CreateTaskResponseBodyData() = default;
};
class CreateTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateTaskResponseBody() {}

  explicit CreateTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateTaskResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateTaskResponseBody() = default;
};
class CreateTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTaskResponseBody> body{};

  CreateTaskResponse() {}

  explicit CreateTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTaskResponse() = default;
};
class GetTaskInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> taskKey{};
  shared_ptr<string> taskStatus{};

  GetTaskInfoResponseBodyData() {}

  explicit GetTaskInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskKey) {
      res["TaskKey"] = boost::any(*taskKey);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskKey") != m.end() && !m["TaskKey"].empty()) {
      taskKey = make_shared<string>(boost::any_cast<string>(m["TaskKey"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~GetTaskInfoResponseBodyData() = default;
};
class GetTaskInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetTaskInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetTaskInfoResponseBody() {}

  explicit GetTaskInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTaskInfoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTaskInfoResponseBody() = default;
};
class GetTaskInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskInfoResponseBody> body{};

  GetTaskInfoResponse() {}

  explicit GetTaskInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskInfoResponse() = default;
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
  CreateTaskResponse createTaskWithOptions(shared_ptr<CreateTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskResponse createTask(shared_ptr<CreateTaskRequest> request);
  GetTaskInfoResponse getTaskInfoWithOptions(shared_ptr<string> TaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskInfoResponse getTaskInfo(shared_ptr<string> TaskId);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Tingwu20230930

#endif
