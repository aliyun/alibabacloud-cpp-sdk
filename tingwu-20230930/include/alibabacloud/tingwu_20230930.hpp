// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_TINGWU20230930_H_
#define ALIBABACLOUD_TINGWU20230930_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Tingwu20230930 {
class CreateTaskRequestInput : public Darabonba::Model {
public:
  shared_ptr<string> fileUrl{};
  shared_ptr<string> format{};
  shared_ptr<bool> multipleStreamsEnabled{};
  shared_ptr<string> outputPath{};
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
    if (multipleStreamsEnabled) {
      res["MultipleStreamsEnabled"] = boost::any(*multipleStreamsEnabled);
    }
    if (outputPath) {
      res["OutputPath"] = boost::any(*outputPath);
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
    if (m.find("MultipleStreamsEnabled") != m.end() && !m["MultipleStreamsEnabled"].empty()) {
      multipleStreamsEnabled = make_shared<bool>(boost::any_cast<bool>(m["MultipleStreamsEnabled"]));
    }
    if (m.find("OutputPath") != m.end() && !m["OutputPath"].empty()) {
      outputPath = make_shared<string>(boost::any_cast<string>(m["OutputPath"]));
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
class CreateTaskRequestParametersCustomPromptContents : public Darabonba::Model {
public:
  shared_ptr<string> model{};
  shared_ptr<string> name{};
  shared_ptr<string> prompt{};
  shared_ptr<string> transType{};

  CreateTaskRequestParametersCustomPromptContents() {}

  explicit CreateTaskRequestParametersCustomPromptContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (transType) {
      res["TransType"] = boost::any(*transType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("TransType") != m.end() && !m["TransType"].empty()) {
      transType = make_shared<string>(boost::any_cast<string>(m["TransType"]));
    }
  }


  virtual ~CreateTaskRequestParametersCustomPromptContents() = default;
};
class CreateTaskRequestParametersCustomPrompt : public Darabonba::Model {
public:
  shared_ptr<vector<CreateTaskRequestParametersCustomPromptContents>> contents{};

  CreateTaskRequestParametersCustomPrompt() {}

  explicit CreateTaskRequestParametersCustomPrompt(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contents) {
      vector<boost::any> temp1;
      for(auto item1:*contents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Contents"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Contents") != m.end() && !m["Contents"].empty()) {
      if (typeid(vector<boost::any>) == m["Contents"].type()) {
        vector<CreateTaskRequestParametersCustomPromptContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Contents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTaskRequestParametersCustomPromptContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contents = make_shared<vector<CreateTaskRequestParametersCustomPromptContents>>(expect1);
      }
    }
  }


  virtual ~CreateTaskRequestParametersCustomPrompt() = default;
};
class CreateTaskRequestParametersExtraParams : public Darabonba::Model {
public:
  shared_ptr<bool> domainEducationEnabled{};
  shared_ptr<long> maxKeywords{};
  shared_ptr<bool> nfixEnabled{};
  shared_ptr<bool> ocrAuxiliaryEnabled{};
  shared_ptr<bool> translateLlmSceneEnabled{};

  CreateTaskRequestParametersExtraParams() {}

  explicit CreateTaskRequestParametersExtraParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainEducationEnabled) {
      res["DomainEducationEnabled"] = boost::any(*domainEducationEnabled);
    }
    if (maxKeywords) {
      res["MaxKeywords"] = boost::any(*maxKeywords);
    }
    if (nfixEnabled) {
      res["NfixEnabled"] = boost::any(*nfixEnabled);
    }
    if (ocrAuxiliaryEnabled) {
      res["OcrAuxiliaryEnabled"] = boost::any(*ocrAuxiliaryEnabled);
    }
    if (translateLlmSceneEnabled) {
      res["TranslateLlmSceneEnabled"] = boost::any(*translateLlmSceneEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainEducationEnabled") != m.end() && !m["DomainEducationEnabled"].empty()) {
      domainEducationEnabled = make_shared<bool>(boost::any_cast<bool>(m["DomainEducationEnabled"]));
    }
    if (m.find("MaxKeywords") != m.end() && !m["MaxKeywords"].empty()) {
      maxKeywords = make_shared<long>(boost::any_cast<long>(m["MaxKeywords"]));
    }
    if (m.find("NfixEnabled") != m.end() && !m["NfixEnabled"].empty()) {
      nfixEnabled = make_shared<bool>(boost::any_cast<bool>(m["NfixEnabled"]));
    }
    if (m.find("OcrAuxiliaryEnabled") != m.end() && !m["OcrAuxiliaryEnabled"].empty()) {
      ocrAuxiliaryEnabled = make_shared<bool>(boost::any_cast<bool>(m["OcrAuxiliaryEnabled"]));
    }
    if (m.find("TranslateLlmSceneEnabled") != m.end() && !m["TranslateLlmSceneEnabled"].empty()) {
      translateLlmSceneEnabled = make_shared<bool>(boost::any_cast<bool>(m["TranslateLlmSceneEnabled"]));
    }
  }


  virtual ~CreateTaskRequestParametersExtraParams() = default;
};
class CreateTaskRequestParametersMeetingAssistance : public Darabonba::Model {
public:
  shared_ptr<vector<string>> types{};

  CreateTaskRequestParametersMeetingAssistance() {}

  explicit CreateTaskRequestParametersMeetingAssistance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      types = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateTaskRequestParametersMeetingAssistance() = default;
};
class CreateTaskRequestParametersServiceInspectionInspectionContents : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> title{};

  CreateTaskRequestParametersServiceInspectionInspectionContents() {}

  explicit CreateTaskRequestParametersServiceInspectionInspectionContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateTaskRequestParametersServiceInspectionInspectionContents() = default;
};
class CreateTaskRequestParametersServiceInspection : public Darabonba::Model {
public:
  shared_ptr<vector<CreateTaskRequestParametersServiceInspectionInspectionContents>> inspectionContents{};
  shared_ptr<string> inspectionIntroduction{};
  shared_ptr<string> sceneIntroduction{};
  shared_ptr<map<string, boost::any>> speakerMap{};

  CreateTaskRequestParametersServiceInspection() {}

  explicit CreateTaskRequestParametersServiceInspection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inspectionContents) {
      vector<boost::any> temp1;
      for(auto item1:*inspectionContents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InspectionContents"] = boost::any(temp1);
    }
    if (inspectionIntroduction) {
      res["InspectionIntroduction"] = boost::any(*inspectionIntroduction);
    }
    if (sceneIntroduction) {
      res["SceneIntroduction"] = boost::any(*sceneIntroduction);
    }
    if (speakerMap) {
      res["SpeakerMap"] = boost::any(*speakerMap);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InspectionContents") != m.end() && !m["InspectionContents"].empty()) {
      if (typeid(vector<boost::any>) == m["InspectionContents"].type()) {
        vector<CreateTaskRequestParametersServiceInspectionInspectionContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InspectionContents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTaskRequestParametersServiceInspectionInspectionContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inspectionContents = make_shared<vector<CreateTaskRequestParametersServiceInspectionInspectionContents>>(expect1);
      }
    }
    if (m.find("InspectionIntroduction") != m.end() && !m["InspectionIntroduction"].empty()) {
      inspectionIntroduction = make_shared<string>(boost::any_cast<string>(m["InspectionIntroduction"]));
    }
    if (m.find("SceneIntroduction") != m.end() && !m["SceneIntroduction"].empty()) {
      sceneIntroduction = make_shared<string>(boost::any_cast<string>(m["SceneIntroduction"]));
    }
    if (m.find("SpeakerMap") != m.end() && !m["SpeakerMap"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["SpeakerMap"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      speakerMap = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateTaskRequestParametersServiceInspection() = default;
};
class CreateTaskRequestParametersSummarization : public Darabonba::Model {
public:
  shared_ptr<vector<string>> types{};

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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      types = make_shared<vector<string>>(toVec1);
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
  shared_ptr<long> additionalStreamOutputLevel{};
  shared_ptr<bool> audioEventDetectionEnabled{};
  shared_ptr<CreateTaskRequestParametersTranscriptionDiarization> diarization{};
  shared_ptr<bool> diarizationEnabled{};
  shared_ptr<string> model{};
  shared_ptr<long> outputLevel{};
  shared_ptr<string> phraseId{};

  CreateTaskRequestParametersTranscription() {}

  explicit CreateTaskRequestParametersTranscription(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalStreamOutputLevel) {
      res["AdditionalStreamOutputLevel"] = boost::any(*additionalStreamOutputLevel);
    }
    if (audioEventDetectionEnabled) {
      res["AudioEventDetectionEnabled"] = boost::any(*audioEventDetectionEnabled);
    }
    if (diarization) {
      res["Diarization"] = diarization ? boost::any(diarization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (diarizationEnabled) {
      res["DiarizationEnabled"] = boost::any(*diarizationEnabled);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (outputLevel) {
      res["OutputLevel"] = boost::any(*outputLevel);
    }
    if (phraseId) {
      res["PhraseId"] = boost::any(*phraseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalStreamOutputLevel") != m.end() && !m["AdditionalStreamOutputLevel"].empty()) {
      additionalStreamOutputLevel = make_shared<long>(boost::any_cast<long>(m["AdditionalStreamOutputLevel"]));
    }
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
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("OutputLevel") != m.end() && !m["OutputLevel"].empty()) {
      outputLevel = make_shared<long>(boost::any_cast<long>(m["OutputLevel"]));
    }
    if (m.find("PhraseId") != m.end() && !m["PhraseId"].empty()) {
      phraseId = make_shared<string>(boost::any_cast<string>(m["PhraseId"]));
    }
  }


  virtual ~CreateTaskRequestParametersTranscription() = default;
};
class CreateTaskRequestParametersTranslation : public Darabonba::Model {
public:
  shared_ptr<long> additionalStreamOutputLevel{};
  shared_ptr<long> outputLevel{};
  shared_ptr<vector<string>> targetLanguages{};

  CreateTaskRequestParametersTranslation() {}

  explicit CreateTaskRequestParametersTranslation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalStreamOutputLevel) {
      res["AdditionalStreamOutputLevel"] = boost::any(*additionalStreamOutputLevel);
    }
    if (outputLevel) {
      res["OutputLevel"] = boost::any(*outputLevel);
    }
    if (targetLanguages) {
      res["TargetLanguages"] = boost::any(*targetLanguages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalStreamOutputLevel") != m.end() && !m["AdditionalStreamOutputLevel"].empty()) {
      additionalStreamOutputLevel = make_shared<long>(boost::any_cast<long>(m["AdditionalStreamOutputLevel"]));
    }
    if (m.find("OutputLevel") != m.end() && !m["OutputLevel"].empty()) {
      outputLevel = make_shared<long>(boost::any_cast<long>(m["OutputLevel"]));
    }
    if (m.find("TargetLanguages") != m.end() && !m["TargetLanguages"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TargetLanguages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TargetLanguages"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      targetLanguages = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateTaskRequestParametersTranslation() = default;
};
class CreateTaskRequestParameters : public Darabonba::Model {
public:
  shared_ptr<bool> autoChaptersEnabled{};
  shared_ptr<CreateTaskRequestParametersCustomPrompt> customPrompt{};
  shared_ptr<bool> customPromptEnabled{};
  shared_ptr<CreateTaskRequestParametersExtraParams> extraParams{};
  shared_ptr<CreateTaskRequestParametersMeetingAssistance> meetingAssistance{};
  shared_ptr<bool> meetingAssistanceEnabled{};
  shared_ptr<bool> pptExtractionEnabled{};
  shared_ptr<CreateTaskRequestParametersServiceInspection> serviceInspection{};
  shared_ptr<bool> serviceInspectionEnabled{};
  shared_ptr<CreateTaskRequestParametersSummarization> summarization{};
  shared_ptr<bool> summarizationEnabled{};
  shared_ptr<bool> textPolishEnabled{};
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
    if (customPrompt) {
      res["CustomPrompt"] = customPrompt ? boost::any(customPrompt->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customPromptEnabled) {
      res["CustomPromptEnabled"] = boost::any(*customPromptEnabled);
    }
    if (extraParams) {
      res["ExtraParams"] = extraParams ? boost::any(extraParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (meetingAssistance) {
      res["MeetingAssistance"] = meetingAssistance ? boost::any(meetingAssistance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (meetingAssistanceEnabled) {
      res["MeetingAssistanceEnabled"] = boost::any(*meetingAssistanceEnabled);
    }
    if (pptExtractionEnabled) {
      res["PptExtractionEnabled"] = boost::any(*pptExtractionEnabled);
    }
    if (serviceInspection) {
      res["ServiceInspection"] = serviceInspection ? boost::any(serviceInspection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceInspectionEnabled) {
      res["ServiceInspectionEnabled"] = boost::any(*serviceInspectionEnabled);
    }
    if (summarization) {
      res["Summarization"] = summarization ? boost::any(summarization->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (summarizationEnabled) {
      res["SummarizationEnabled"] = boost::any(*summarizationEnabled);
    }
    if (textPolishEnabled) {
      res["TextPolishEnabled"] = boost::any(*textPolishEnabled);
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
    if (m.find("CustomPrompt") != m.end() && !m["CustomPrompt"].empty()) {
      if (typeid(map<string, boost::any>) == m["CustomPrompt"].type()) {
        CreateTaskRequestParametersCustomPrompt model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CustomPrompt"]));
        customPrompt = make_shared<CreateTaskRequestParametersCustomPrompt>(model1);
      }
    }
    if (m.find("CustomPromptEnabled") != m.end() && !m["CustomPromptEnabled"].empty()) {
      customPromptEnabled = make_shared<bool>(boost::any_cast<bool>(m["CustomPromptEnabled"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtraParams"].type()) {
        CreateTaskRequestParametersExtraParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtraParams"]));
        extraParams = make_shared<CreateTaskRequestParametersExtraParams>(model1);
      }
    }
    if (m.find("MeetingAssistance") != m.end() && !m["MeetingAssistance"].empty()) {
      if (typeid(map<string, boost::any>) == m["MeetingAssistance"].type()) {
        CreateTaskRequestParametersMeetingAssistance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MeetingAssistance"]));
        meetingAssistance = make_shared<CreateTaskRequestParametersMeetingAssistance>(model1);
      }
    }
    if (m.find("MeetingAssistanceEnabled") != m.end() && !m["MeetingAssistanceEnabled"].empty()) {
      meetingAssistanceEnabled = make_shared<bool>(boost::any_cast<bool>(m["MeetingAssistanceEnabled"]));
    }
    if (m.find("PptExtractionEnabled") != m.end() && !m["PptExtractionEnabled"].empty()) {
      pptExtractionEnabled = make_shared<bool>(boost::any_cast<bool>(m["PptExtractionEnabled"]));
    }
    if (m.find("ServiceInspection") != m.end() && !m["ServiceInspection"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceInspection"].type()) {
        CreateTaskRequestParametersServiceInspection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceInspection"]));
        serviceInspection = make_shared<CreateTaskRequestParametersServiceInspection>(model1);
      }
    }
    if (m.find("ServiceInspectionEnabled") != m.end() && !m["ServiceInspectionEnabled"].empty()) {
      serviceInspectionEnabled = make_shared<bool>(boost::any_cast<bool>(m["ServiceInspectionEnabled"]));
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
    if (m.find("TextPolishEnabled") != m.end() && !m["TextPolishEnabled"].empty()) {
      textPolishEnabled = make_shared<bool>(boost::any_cast<bool>(m["TextPolishEnabled"]));
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
  shared_ptr<string> meetingJoinUrl{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskKey{};
  shared_ptr<string> taskStatus{};

  CreateTaskResponseBodyData() {}

  explicit CreateTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meetingJoinUrl) {
      res["MeetingJoinUrl"] = boost::any(*meetingJoinUrl);
    }
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
    if (m.find("MeetingJoinUrl") != m.end() && !m["MeetingJoinUrl"].empty()) {
      meetingJoinUrl = make_shared<string>(boost::any_cast<string>(m["MeetingJoinUrl"]));
    }
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
        CreateTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTaskResponse() = default;
};
class CreateTranscriptionPhrasesRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> wordWeights{};

  CreateTranscriptionPhrasesRequest() {}

  explicit CreateTranscriptionPhrasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (wordWeights) {
      res["WordWeights"] = boost::any(*wordWeights);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("WordWeights") != m.end() && !m["WordWeights"].empty()) {
      wordWeights = make_shared<string>(boost::any_cast<string>(m["WordWeights"]));
    }
  }


  virtual ~CreateTranscriptionPhrasesRequest() = default;
};
class CreateTranscriptionPhrasesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> phraseId{};
  shared_ptr<string> status{};

  CreateTranscriptionPhrasesResponseBodyData() {}

  explicit CreateTranscriptionPhrasesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phraseId) {
      res["PhraseId"] = boost::any(*phraseId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("PhraseId") != m.end() && !m["PhraseId"].empty()) {
      phraseId = make_shared<string>(boost::any_cast<string>(m["PhraseId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateTranscriptionPhrasesResponseBodyData() = default;
};
class CreateTranscriptionPhrasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateTranscriptionPhrasesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateTranscriptionPhrasesResponseBody() {}

  explicit CreateTranscriptionPhrasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTranscriptionPhrasesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateTranscriptionPhrasesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateTranscriptionPhrasesResponseBody() = default;
};
class CreateTranscriptionPhrasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTranscriptionPhrasesResponseBody> body{};

  CreateTranscriptionPhrasesResponse() {}

  explicit CreateTranscriptionPhrasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTranscriptionPhrasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTranscriptionPhrasesResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTranscriptionPhrasesResponse() = default;
};
class DeleteTranscriptionPhrasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> status{};

  DeleteTranscriptionPhrasesResponseBody() {}

  explicit DeleteTranscriptionPhrasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeleteTranscriptionPhrasesResponseBody() = default;
};
class DeleteTranscriptionPhrasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTranscriptionPhrasesResponseBody> body{};

  DeleteTranscriptionPhrasesResponse() {}

  explicit DeleteTranscriptionPhrasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTranscriptionPhrasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTranscriptionPhrasesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTranscriptionPhrasesResponse() = default;
};
class GetTaskInfoResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> autoChapters{};
  shared_ptr<string> customPrompt{};
  shared_ptr<string> meetingAssistance{};
  shared_ptr<string> pptExtraction{};
  shared_ptr<string> serviceInspection{};
  shared_ptr<string> summarization{};
  shared_ptr<string> textPolish{};
  shared_ptr<string> transcription{};
  shared_ptr<string> translation{};

  GetTaskInfoResponseBodyDataResult() {}

  explicit GetTaskInfoResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoChapters) {
      res["AutoChapters"] = boost::any(*autoChapters);
    }
    if (customPrompt) {
      res["CustomPrompt"] = boost::any(*customPrompt);
    }
    if (meetingAssistance) {
      res["MeetingAssistance"] = boost::any(*meetingAssistance);
    }
    if (pptExtraction) {
      res["PptExtraction"] = boost::any(*pptExtraction);
    }
    if (serviceInspection) {
      res["ServiceInspection"] = boost::any(*serviceInspection);
    }
    if (summarization) {
      res["Summarization"] = boost::any(*summarization);
    }
    if (textPolish) {
      res["TextPolish"] = boost::any(*textPolish);
    }
    if (transcription) {
      res["Transcription"] = boost::any(*transcription);
    }
    if (translation) {
      res["Translation"] = boost::any(*translation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoChapters") != m.end() && !m["AutoChapters"].empty()) {
      autoChapters = make_shared<string>(boost::any_cast<string>(m["AutoChapters"]));
    }
    if (m.find("CustomPrompt") != m.end() && !m["CustomPrompt"].empty()) {
      customPrompt = make_shared<string>(boost::any_cast<string>(m["CustomPrompt"]));
    }
    if (m.find("MeetingAssistance") != m.end() && !m["MeetingAssistance"].empty()) {
      meetingAssistance = make_shared<string>(boost::any_cast<string>(m["MeetingAssistance"]));
    }
    if (m.find("PptExtraction") != m.end() && !m["PptExtraction"].empty()) {
      pptExtraction = make_shared<string>(boost::any_cast<string>(m["PptExtraction"]));
    }
    if (m.find("ServiceInspection") != m.end() && !m["ServiceInspection"].empty()) {
      serviceInspection = make_shared<string>(boost::any_cast<string>(m["ServiceInspection"]));
    }
    if (m.find("Summarization") != m.end() && !m["Summarization"].empty()) {
      summarization = make_shared<string>(boost::any_cast<string>(m["Summarization"]));
    }
    if (m.find("TextPolish") != m.end() && !m["TextPolish"].empty()) {
      textPolish = make_shared<string>(boost::any_cast<string>(m["TextPolish"]));
    }
    if (m.find("Transcription") != m.end() && !m["Transcription"].empty()) {
      transcription = make_shared<string>(boost::any_cast<string>(m["Transcription"]));
    }
    if (m.find("Translation") != m.end() && !m["Translation"].empty()) {
      translation = make_shared<string>(boost::any_cast<string>(m["Translation"]));
    }
  }


  virtual ~GetTaskInfoResponseBodyDataResult() = default;
};
class GetTaskInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> outputMp3Path{};
  shared_ptr<string> outputMp4Path{};
  shared_ptr<string> outputSpectrumPath{};
  shared_ptr<string> outputThumbnailPath{};
  shared_ptr<GetTaskInfoResponseBodyDataResult> result{};
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (outputMp3Path) {
      res["OutputMp3Path"] = boost::any(*outputMp3Path);
    }
    if (outputMp4Path) {
      res["OutputMp4Path"] = boost::any(*outputMp4Path);
    }
    if (outputSpectrumPath) {
      res["OutputSpectrumPath"] = boost::any(*outputSpectrumPath);
    }
    if (outputThumbnailPath) {
      res["OutputThumbnailPath"] = boost::any(*outputThumbnailPath);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("OutputMp3Path") != m.end() && !m["OutputMp3Path"].empty()) {
      outputMp3Path = make_shared<string>(boost::any_cast<string>(m["OutputMp3Path"]));
    }
    if (m.find("OutputMp4Path") != m.end() && !m["OutputMp4Path"].empty()) {
      outputMp4Path = make_shared<string>(boost::any_cast<string>(m["OutputMp4Path"]));
    }
    if (m.find("OutputSpectrumPath") != m.end() && !m["OutputSpectrumPath"].empty()) {
      outputSpectrumPath = make_shared<string>(boost::any_cast<string>(m["OutputSpectrumPath"]));
    }
    if (m.find("OutputThumbnailPath") != m.end() && !m["OutputThumbnailPath"].empty()) {
      outputThumbnailPath = make_shared<string>(boost::any_cast<string>(m["OutputThumbnailPath"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetTaskInfoResponseBodyDataResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetTaskInfoResponseBodyDataResult>(model1);
      }
    }
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
        GetTaskInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskInfoResponse() = default;
};
class GetTranscriptionPhrasesResponseBodyDataPhrases : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> phraseId{};
  shared_ptr<string> wordWeights{};

  GetTranscriptionPhrasesResponseBodyDataPhrases() {}

  explicit GetTranscriptionPhrasesResponseBodyDataPhrases(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phraseId) {
      res["PhraseId"] = boost::any(*phraseId);
    }
    if (wordWeights) {
      res["WordWeights"] = boost::any(*wordWeights);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhraseId") != m.end() && !m["PhraseId"].empty()) {
      phraseId = make_shared<string>(boost::any_cast<string>(m["PhraseId"]));
    }
    if (m.find("WordWeights") != m.end() && !m["WordWeights"].empty()) {
      wordWeights = make_shared<string>(boost::any_cast<string>(m["WordWeights"]));
    }
  }


  virtual ~GetTranscriptionPhrasesResponseBodyDataPhrases() = default;
};
class GetTranscriptionPhrasesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<GetTranscriptionPhrasesResponseBodyDataPhrases>> phrases{};
  shared_ptr<string> status{};

  GetTranscriptionPhrasesResponseBodyData() {}

  explicit GetTranscriptionPhrasesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phrases) {
      vector<boost::any> temp1;
      for(auto item1:*phrases){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Phrases"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Phrases") != m.end() && !m["Phrases"].empty()) {
      if (typeid(vector<boost::any>) == m["Phrases"].type()) {
        vector<GetTranscriptionPhrasesResponseBodyDataPhrases> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Phrases"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTranscriptionPhrasesResponseBodyDataPhrases model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        phrases = make_shared<vector<GetTranscriptionPhrasesResponseBodyDataPhrases>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetTranscriptionPhrasesResponseBodyData() = default;
};
class GetTranscriptionPhrasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetTranscriptionPhrasesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetTranscriptionPhrasesResponseBody() {}

  explicit GetTranscriptionPhrasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTranscriptionPhrasesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTranscriptionPhrasesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTranscriptionPhrasesResponseBody() = default;
};
class GetTranscriptionPhrasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTranscriptionPhrasesResponseBody> body{};

  GetTranscriptionPhrasesResponse() {}

  explicit GetTranscriptionPhrasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTranscriptionPhrasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTranscriptionPhrasesResponseBody>(model1);
      }
    }
  }


  virtual ~GetTranscriptionPhrasesResponse() = default;
};
class ListTranscriptionPhrasesResponseBodyDataPhrases : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> phraseId{};

  ListTranscriptionPhrasesResponseBodyDataPhrases() {}

  explicit ListTranscriptionPhrasesResponseBodyDataPhrases(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phraseId) {
      res["PhraseId"] = boost::any(*phraseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhraseId") != m.end() && !m["PhraseId"].empty()) {
      phraseId = make_shared<string>(boost::any_cast<string>(m["PhraseId"]));
    }
  }


  virtual ~ListTranscriptionPhrasesResponseBodyDataPhrases() = default;
};
class ListTranscriptionPhrasesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<ListTranscriptionPhrasesResponseBodyDataPhrases>> phrases{};
  shared_ptr<string> status{};

  ListTranscriptionPhrasesResponseBodyData() {}

  explicit ListTranscriptionPhrasesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phrases) {
      vector<boost::any> temp1;
      for(auto item1:*phrases){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Phrases"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Phrases") != m.end() && !m["Phrases"].empty()) {
      if (typeid(vector<boost::any>) == m["Phrases"].type()) {
        vector<ListTranscriptionPhrasesResponseBodyDataPhrases> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Phrases"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTranscriptionPhrasesResponseBodyDataPhrases model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        phrases = make_shared<vector<ListTranscriptionPhrasesResponseBodyDataPhrases>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListTranscriptionPhrasesResponseBodyData() = default;
};
class ListTranscriptionPhrasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListTranscriptionPhrasesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListTranscriptionPhrasesResponseBody() {}

  explicit ListTranscriptionPhrasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTranscriptionPhrasesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListTranscriptionPhrasesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListTranscriptionPhrasesResponseBody() = default;
};
class ListTranscriptionPhrasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTranscriptionPhrasesResponseBody> body{};

  ListTranscriptionPhrasesResponse() {}

  explicit ListTranscriptionPhrasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTranscriptionPhrasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTranscriptionPhrasesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTranscriptionPhrasesResponse() = default;
};
class UpdateTranscriptionPhrasesRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> wordWeights{};

  UpdateTranscriptionPhrasesRequest() {}

  explicit UpdateTranscriptionPhrasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (wordWeights) {
      res["WordWeights"] = boost::any(*wordWeights);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("WordWeights") != m.end() && !m["WordWeights"].empty()) {
      wordWeights = make_shared<string>(boost::any_cast<string>(m["WordWeights"]));
    }
  }


  virtual ~UpdateTranscriptionPhrasesRequest() = default;
};
class UpdateTranscriptionPhrasesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> status{};

  UpdateTranscriptionPhrasesResponseBodyData() {}

  explicit UpdateTranscriptionPhrasesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateTranscriptionPhrasesResponseBodyData() = default;
};
class UpdateTranscriptionPhrasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateTranscriptionPhrasesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateTranscriptionPhrasesResponseBody() {}

  explicit UpdateTranscriptionPhrasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTranscriptionPhrasesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateTranscriptionPhrasesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateTranscriptionPhrasesResponseBody() = default;
};
class UpdateTranscriptionPhrasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTranscriptionPhrasesResponseBody> body{};

  UpdateTranscriptionPhrasesResponse() {}

  explicit UpdateTranscriptionPhrasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTranscriptionPhrasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTranscriptionPhrasesResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTranscriptionPhrasesResponse() = default;
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
  CreateTranscriptionPhrasesResponse createTranscriptionPhrasesWithOptions(shared_ptr<CreateTranscriptionPhrasesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTranscriptionPhrasesResponse createTranscriptionPhrases(shared_ptr<CreateTranscriptionPhrasesRequest> request);
  DeleteTranscriptionPhrasesResponse deleteTranscriptionPhrasesWithOptions(shared_ptr<string> PhraseId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTranscriptionPhrasesResponse deleteTranscriptionPhrases(shared_ptr<string> PhraseId);
  GetTaskInfoResponse getTaskInfoWithOptions(shared_ptr<string> TaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskInfoResponse getTaskInfo(shared_ptr<string> TaskId);
  GetTranscriptionPhrasesResponse getTranscriptionPhrasesWithOptions(shared_ptr<string> PhraseId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTranscriptionPhrasesResponse getTranscriptionPhrases(shared_ptr<string> PhraseId);
  ListTranscriptionPhrasesResponse listTranscriptionPhrasesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTranscriptionPhrasesResponse listTranscriptionPhrases();
  UpdateTranscriptionPhrasesResponse updateTranscriptionPhrasesWithOptions(shared_ptr<string> PhraseId,
                                                                           shared_ptr<UpdateTranscriptionPhrasesRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTranscriptionPhrasesResponse updateTranscriptionPhrases(shared_ptr<string> PhraseId, shared_ptr<UpdateTranscriptionPhrasesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Tingwu20230930

#endif
