// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(operation, operation_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(operation, operation_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateTaskRequest() = default ;
    CreateTaskRequest(const CreateTaskRequest &) = default ;
    CreateTaskRequest(CreateTaskRequest &&) = default ;
    CreateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequest() = default ;
    CreateTaskRequest& operator=(const CreateTaskRequest &) = default ;
    CreateTaskRequest& operator=(CreateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(AutoChapters, autoChapters_);
        DARABONBA_PTR_TO_JSON(AutoChaptersEnabled, autoChaptersEnabled_);
        DARABONBA_PTR_TO_JSON(ContentExtraction, contentExtraction_);
        DARABONBA_PTR_TO_JSON(ContentExtractionEnabled, contentExtractionEnabled_);
        DARABONBA_PTR_TO_JSON(CustomPrompt, customPrompt_);
        DARABONBA_PTR_TO_JSON(CustomPromptEnabled, customPromptEnabled_);
        DARABONBA_PTR_TO_JSON(ExtraParams, extraParams_);
        DARABONBA_PTR_TO_JSON(IdentityRecognition, identityRecognition_);
        DARABONBA_PTR_TO_JSON(IdentityRecognitionEnabled, identityRecognitionEnabled_);
        DARABONBA_PTR_TO_JSON(LlmOutputLanguage, llmOutputLanguage_);
        DARABONBA_PTR_TO_JSON(MeetingAssistance, meetingAssistance_);
        DARABONBA_PTR_TO_JSON(MeetingAssistanceEnabled, meetingAssistanceEnabled_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(PptExtractionEnabled, pptExtractionEnabled_);
        DARABONBA_PTR_TO_JSON(ServiceInspection, serviceInspection_);
        DARABONBA_PTR_TO_JSON(ServiceInspectionEnabled, serviceInspectionEnabled_);
        DARABONBA_PTR_TO_JSON(Summarization, summarization_);
        DARABONBA_PTR_TO_JSON(SummarizationEnabled, summarizationEnabled_);
        DARABONBA_PTR_TO_JSON(TextPolishEnabled, textPolishEnabled_);
        DARABONBA_PTR_TO_JSON(Transcoding, transcoding_);
        DARABONBA_PTR_TO_JSON(Transcription, transcription_);
        DARABONBA_PTR_TO_JSON(Translation, translation_);
        DARABONBA_PTR_TO_JSON(TranslationEnabled, translationEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoChapters, autoChapters_);
        DARABONBA_PTR_FROM_JSON(AutoChaptersEnabled, autoChaptersEnabled_);
        DARABONBA_PTR_FROM_JSON(ContentExtraction, contentExtraction_);
        DARABONBA_PTR_FROM_JSON(ContentExtractionEnabled, contentExtractionEnabled_);
        DARABONBA_PTR_FROM_JSON(CustomPrompt, customPrompt_);
        DARABONBA_PTR_FROM_JSON(CustomPromptEnabled, customPromptEnabled_);
        DARABONBA_PTR_FROM_JSON(ExtraParams, extraParams_);
        DARABONBA_PTR_FROM_JSON(IdentityRecognition, identityRecognition_);
        DARABONBA_PTR_FROM_JSON(IdentityRecognitionEnabled, identityRecognitionEnabled_);
        DARABONBA_PTR_FROM_JSON(LlmOutputLanguage, llmOutputLanguage_);
        DARABONBA_PTR_FROM_JSON(MeetingAssistance, meetingAssistance_);
        DARABONBA_PTR_FROM_JSON(MeetingAssistanceEnabled, meetingAssistanceEnabled_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(PptExtractionEnabled, pptExtractionEnabled_);
        DARABONBA_PTR_FROM_JSON(ServiceInspection, serviceInspection_);
        DARABONBA_PTR_FROM_JSON(ServiceInspectionEnabled, serviceInspectionEnabled_);
        DARABONBA_PTR_FROM_JSON(Summarization, summarization_);
        DARABONBA_PTR_FROM_JSON(SummarizationEnabled, summarizationEnabled_);
        DARABONBA_PTR_FROM_JSON(TextPolishEnabled, textPolishEnabled_);
        DARABONBA_PTR_FROM_JSON(Transcoding, transcoding_);
        DARABONBA_PTR_FROM_JSON(Transcription, transcription_);
        DARABONBA_PTR_FROM_JSON(Translation, translation_);
        DARABONBA_PTR_FROM_JSON(TranslationEnabled, translationEnabled_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Translation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Translation& obj) { 
          DARABONBA_PTR_TO_JSON(AdditionalStreamOutputLevel, additionalStreamOutputLevel_);
          DARABONBA_PTR_TO_JSON(OutputLevel, outputLevel_);
          DARABONBA_PTR_TO_JSON(TargetLanguages, targetLanguages_);
        };
        friend void from_json(const Darabonba::Json& j, Translation& obj) { 
          DARABONBA_PTR_FROM_JSON(AdditionalStreamOutputLevel, additionalStreamOutputLevel_);
          DARABONBA_PTR_FROM_JSON(OutputLevel, outputLevel_);
          DARABONBA_PTR_FROM_JSON(TargetLanguages, targetLanguages_);
        };
        Translation() = default ;
        Translation(const Translation &) = default ;
        Translation(Translation &&) = default ;
        Translation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Translation() = default ;
        Translation& operator=(const Translation &) = default ;
        Translation& operator=(Translation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->additionalStreamOutputLevel_ == nullptr
        && this->outputLevel_ == nullptr && this->targetLanguages_ == nullptr; };
        // additionalStreamOutputLevel Field Functions 
        bool hasAdditionalStreamOutputLevel() const { return this->additionalStreamOutputLevel_ != nullptr;};
        void deleteAdditionalStreamOutputLevel() { this->additionalStreamOutputLevel_ = nullptr;};
        inline int32_t getAdditionalStreamOutputLevel() const { DARABONBA_PTR_GET_DEFAULT(additionalStreamOutputLevel_, 0) };
        inline Translation& setAdditionalStreamOutputLevel(int32_t additionalStreamOutputLevel) { DARABONBA_PTR_SET_VALUE(additionalStreamOutputLevel_, additionalStreamOutputLevel) };


        // outputLevel Field Functions 
        bool hasOutputLevel() const { return this->outputLevel_ != nullptr;};
        void deleteOutputLevel() { this->outputLevel_ = nullptr;};
        inline int32_t getOutputLevel() const { DARABONBA_PTR_GET_DEFAULT(outputLevel_, 0) };
        inline Translation& setOutputLevel(int32_t outputLevel) { DARABONBA_PTR_SET_VALUE(outputLevel_, outputLevel) };


        // targetLanguages Field Functions 
        bool hasTargetLanguages() const { return this->targetLanguages_ != nullptr;};
        void deleteTargetLanguages() { this->targetLanguages_ = nullptr;};
        inline const vector<string> & getTargetLanguages() const { DARABONBA_PTR_GET_CONST(targetLanguages_, vector<string>) };
        inline vector<string> getTargetLanguages() { DARABONBA_PTR_GET(targetLanguages_, vector<string>) };
        inline Translation& setTargetLanguages(const vector<string> & targetLanguages) { DARABONBA_PTR_SET_VALUE(targetLanguages_, targetLanguages) };
        inline Translation& setTargetLanguages(vector<string> && targetLanguages) { DARABONBA_PTR_SET_RVALUE(targetLanguages_, targetLanguages) };


      protected:
        shared_ptr<int32_t> additionalStreamOutputLevel_ {};
        shared_ptr<int32_t> outputLevel_ {};
        shared_ptr<vector<string>> targetLanguages_ {};
      };

      class Transcription : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Transcription& obj) { 
          DARABONBA_PTR_TO_JSON(AdditionalStreamOutputLevel, additionalStreamOutputLevel_);
          DARABONBA_PTR_TO_JSON(AudioEventDetectionEnabled, audioEventDetectionEnabled_);
          DARABONBA_PTR_TO_JSON(Diarization, diarization_);
          DARABONBA_PTR_TO_JSON(DiarizationEnabled, diarizationEnabled_);
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(OutputLevel, outputLevel_);
          DARABONBA_PTR_TO_JSON(PhraseId, phraseId_);
          DARABONBA_PTR_TO_JSON(ProfanityFilterEnabled, profanityFilterEnabled_);
          DARABONBA_PTR_TO_JSON(RealtimeDiarizationEnabled, realtimeDiarizationEnabled_);
        };
        friend void from_json(const Darabonba::Json& j, Transcription& obj) { 
          DARABONBA_PTR_FROM_JSON(AdditionalStreamOutputLevel, additionalStreamOutputLevel_);
          DARABONBA_PTR_FROM_JSON(AudioEventDetectionEnabled, audioEventDetectionEnabled_);
          DARABONBA_PTR_FROM_JSON(Diarization, diarization_);
          DARABONBA_PTR_FROM_JSON(DiarizationEnabled, diarizationEnabled_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(OutputLevel, outputLevel_);
          DARABONBA_PTR_FROM_JSON(PhraseId, phraseId_);
          DARABONBA_PTR_FROM_JSON(ProfanityFilterEnabled, profanityFilterEnabled_);
          DARABONBA_PTR_FROM_JSON(RealtimeDiarizationEnabled, realtimeDiarizationEnabled_);
        };
        Transcription() = default ;
        Transcription(const Transcription &) = default ;
        Transcription(Transcription &&) = default ;
        Transcription(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Transcription() = default ;
        Transcription& operator=(const Transcription &) = default ;
        Transcription& operator=(Transcription &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Diarization : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Diarization& obj) { 
            DARABONBA_PTR_TO_JSON(SpeakerCount, speakerCount_);
          };
          friend void from_json(const Darabonba::Json& j, Diarization& obj) { 
            DARABONBA_PTR_FROM_JSON(SpeakerCount, speakerCount_);
          };
          Diarization() = default ;
          Diarization(const Diarization &) = default ;
          Diarization(Diarization &&) = default ;
          Diarization(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Diarization() = default ;
          Diarization& operator=(const Diarization &) = default ;
          Diarization& operator=(Diarization &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->speakerCount_ == nullptr; };
          // speakerCount Field Functions 
          bool hasSpeakerCount() const { return this->speakerCount_ != nullptr;};
          void deleteSpeakerCount() { this->speakerCount_ = nullptr;};
          inline int32_t getSpeakerCount() const { DARABONBA_PTR_GET_DEFAULT(speakerCount_, 0) };
          inline Diarization& setSpeakerCount(int32_t speakerCount) { DARABONBA_PTR_SET_VALUE(speakerCount_, speakerCount) };


        protected:
          shared_ptr<int32_t> speakerCount_ {};
        };

        virtual bool empty() const override { return this->additionalStreamOutputLevel_ == nullptr
        && this->audioEventDetectionEnabled_ == nullptr && this->diarization_ == nullptr && this->diarizationEnabled_ == nullptr && this->model_ == nullptr && this->outputLevel_ == nullptr
        && this->phraseId_ == nullptr && this->profanityFilterEnabled_ == nullptr && this->realtimeDiarizationEnabled_ == nullptr; };
        // additionalStreamOutputLevel Field Functions 
        bool hasAdditionalStreamOutputLevel() const { return this->additionalStreamOutputLevel_ != nullptr;};
        void deleteAdditionalStreamOutputLevel() { this->additionalStreamOutputLevel_ = nullptr;};
        inline int32_t getAdditionalStreamOutputLevel() const { DARABONBA_PTR_GET_DEFAULT(additionalStreamOutputLevel_, 0) };
        inline Transcription& setAdditionalStreamOutputLevel(int32_t additionalStreamOutputLevel) { DARABONBA_PTR_SET_VALUE(additionalStreamOutputLevel_, additionalStreamOutputLevel) };


        // audioEventDetectionEnabled Field Functions 
        bool hasAudioEventDetectionEnabled() const { return this->audioEventDetectionEnabled_ != nullptr;};
        void deleteAudioEventDetectionEnabled() { this->audioEventDetectionEnabled_ = nullptr;};
        inline bool getAudioEventDetectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(audioEventDetectionEnabled_, false) };
        inline Transcription& setAudioEventDetectionEnabled(bool audioEventDetectionEnabled) { DARABONBA_PTR_SET_VALUE(audioEventDetectionEnabled_, audioEventDetectionEnabled) };


        // diarization Field Functions 
        bool hasDiarization() const { return this->diarization_ != nullptr;};
        void deleteDiarization() { this->diarization_ = nullptr;};
        inline const Transcription::Diarization & getDiarization() const { DARABONBA_PTR_GET_CONST(diarization_, Transcription::Diarization) };
        inline Transcription::Diarization getDiarization() { DARABONBA_PTR_GET(diarization_, Transcription::Diarization) };
        inline Transcription& setDiarization(const Transcription::Diarization & diarization) { DARABONBA_PTR_SET_VALUE(diarization_, diarization) };
        inline Transcription& setDiarization(Transcription::Diarization && diarization) { DARABONBA_PTR_SET_RVALUE(diarization_, diarization) };


        // diarizationEnabled Field Functions 
        bool hasDiarizationEnabled() const { return this->diarizationEnabled_ != nullptr;};
        void deleteDiarizationEnabled() { this->diarizationEnabled_ = nullptr;};
        inline bool getDiarizationEnabled() const { DARABONBA_PTR_GET_DEFAULT(diarizationEnabled_, false) };
        inline Transcription& setDiarizationEnabled(bool diarizationEnabled) { DARABONBA_PTR_SET_VALUE(diarizationEnabled_, diarizationEnabled) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline Transcription& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // outputLevel Field Functions 
        bool hasOutputLevel() const { return this->outputLevel_ != nullptr;};
        void deleteOutputLevel() { this->outputLevel_ = nullptr;};
        inline int32_t getOutputLevel() const { DARABONBA_PTR_GET_DEFAULT(outputLevel_, 0) };
        inline Transcription& setOutputLevel(int32_t outputLevel) { DARABONBA_PTR_SET_VALUE(outputLevel_, outputLevel) };


        // phraseId Field Functions 
        bool hasPhraseId() const { return this->phraseId_ != nullptr;};
        void deletePhraseId() { this->phraseId_ = nullptr;};
        inline string getPhraseId() const { DARABONBA_PTR_GET_DEFAULT(phraseId_, "") };
        inline Transcription& setPhraseId(string phraseId) { DARABONBA_PTR_SET_VALUE(phraseId_, phraseId) };


        // profanityFilterEnabled Field Functions 
        bool hasProfanityFilterEnabled() const { return this->profanityFilterEnabled_ != nullptr;};
        void deleteProfanityFilterEnabled() { this->profanityFilterEnabled_ = nullptr;};
        inline bool getProfanityFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(profanityFilterEnabled_, false) };
        inline Transcription& setProfanityFilterEnabled(bool profanityFilterEnabled) { DARABONBA_PTR_SET_VALUE(profanityFilterEnabled_, profanityFilterEnabled) };


        // realtimeDiarizationEnabled Field Functions 
        bool hasRealtimeDiarizationEnabled() const { return this->realtimeDiarizationEnabled_ != nullptr;};
        void deleteRealtimeDiarizationEnabled() { this->realtimeDiarizationEnabled_ = nullptr;};
        inline bool getRealtimeDiarizationEnabled() const { DARABONBA_PTR_GET_DEFAULT(realtimeDiarizationEnabled_, false) };
        inline Transcription& setRealtimeDiarizationEnabled(bool realtimeDiarizationEnabled) { DARABONBA_PTR_SET_VALUE(realtimeDiarizationEnabled_, realtimeDiarizationEnabled) };


      protected:
        shared_ptr<int32_t> additionalStreamOutputLevel_ {};
        shared_ptr<bool> audioEventDetectionEnabled_ {};
        shared_ptr<Transcription::Diarization> diarization_ {};
        shared_ptr<bool> diarizationEnabled_ {};
        shared_ptr<string> model_ {};
        shared_ptr<int32_t> outputLevel_ {};
        shared_ptr<string> phraseId_ {};
        shared_ptr<bool> profanityFilterEnabled_ {};
        shared_ptr<bool> realtimeDiarizationEnabled_ {};
      };

      class Transcoding : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Transcoding& obj) { 
          DARABONBA_PTR_TO_JSON(SpectrumEnabled, spectrumEnabled_);
          DARABONBA_PTR_TO_JSON(TargetAudioFormat, targetAudioFormat_);
          DARABONBA_PTR_TO_JSON(TargetVideoFormat, targetVideoFormat_);
          DARABONBA_PTR_TO_JSON(VideoThumbnailEnabled, videoThumbnailEnabled_);
        };
        friend void from_json(const Darabonba::Json& j, Transcoding& obj) { 
          DARABONBA_PTR_FROM_JSON(SpectrumEnabled, spectrumEnabled_);
          DARABONBA_PTR_FROM_JSON(TargetAudioFormat, targetAudioFormat_);
          DARABONBA_PTR_FROM_JSON(TargetVideoFormat, targetVideoFormat_);
          DARABONBA_PTR_FROM_JSON(VideoThumbnailEnabled, videoThumbnailEnabled_);
        };
        Transcoding() = default ;
        Transcoding(const Transcoding &) = default ;
        Transcoding(Transcoding &&) = default ;
        Transcoding(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Transcoding() = default ;
        Transcoding& operator=(const Transcoding &) = default ;
        Transcoding& operator=(Transcoding &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->spectrumEnabled_ == nullptr
        && this->targetAudioFormat_ == nullptr && this->targetVideoFormat_ == nullptr && this->videoThumbnailEnabled_ == nullptr; };
        // spectrumEnabled Field Functions 
        bool hasSpectrumEnabled() const { return this->spectrumEnabled_ != nullptr;};
        void deleteSpectrumEnabled() { this->spectrumEnabled_ = nullptr;};
        inline bool getSpectrumEnabled() const { DARABONBA_PTR_GET_DEFAULT(spectrumEnabled_, false) };
        inline Transcoding& setSpectrumEnabled(bool spectrumEnabled) { DARABONBA_PTR_SET_VALUE(spectrumEnabled_, spectrumEnabled) };


        // targetAudioFormat Field Functions 
        bool hasTargetAudioFormat() const { return this->targetAudioFormat_ != nullptr;};
        void deleteTargetAudioFormat() { this->targetAudioFormat_ = nullptr;};
        inline string getTargetAudioFormat() const { DARABONBA_PTR_GET_DEFAULT(targetAudioFormat_, "") };
        inline Transcoding& setTargetAudioFormat(string targetAudioFormat) { DARABONBA_PTR_SET_VALUE(targetAudioFormat_, targetAudioFormat) };


        // targetVideoFormat Field Functions 
        bool hasTargetVideoFormat() const { return this->targetVideoFormat_ != nullptr;};
        void deleteTargetVideoFormat() { this->targetVideoFormat_ = nullptr;};
        inline string getTargetVideoFormat() const { DARABONBA_PTR_GET_DEFAULT(targetVideoFormat_, "") };
        inline Transcoding& setTargetVideoFormat(string targetVideoFormat) { DARABONBA_PTR_SET_VALUE(targetVideoFormat_, targetVideoFormat) };


        // videoThumbnailEnabled Field Functions 
        bool hasVideoThumbnailEnabled() const { return this->videoThumbnailEnabled_ != nullptr;};
        void deleteVideoThumbnailEnabled() { this->videoThumbnailEnabled_ = nullptr;};
        inline bool getVideoThumbnailEnabled() const { DARABONBA_PTR_GET_DEFAULT(videoThumbnailEnabled_, false) };
        inline Transcoding& setVideoThumbnailEnabled(bool videoThumbnailEnabled) { DARABONBA_PTR_SET_VALUE(videoThumbnailEnabled_, videoThumbnailEnabled) };


      protected:
        shared_ptr<bool> spectrumEnabled_ {};
        shared_ptr<string> targetAudioFormat_ {};
        shared_ptr<string> targetVideoFormat_ {};
        shared_ptr<bool> videoThumbnailEnabled_ {};
      };

      class Summarization : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Summarization& obj) { 
          DARABONBA_PTR_TO_JSON(Types, types_);
        };
        friend void from_json(const Darabonba::Json& j, Summarization& obj) { 
          DARABONBA_PTR_FROM_JSON(Types, types_);
        };
        Summarization() = default ;
        Summarization(const Summarization &) = default ;
        Summarization(Summarization &&) = default ;
        Summarization(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Summarization() = default ;
        Summarization& operator=(const Summarization &) = default ;
        Summarization& operator=(Summarization &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->types_ == nullptr; };
        // types Field Functions 
        bool hasTypes() const { return this->types_ != nullptr;};
        void deleteTypes() { this->types_ = nullptr;};
        inline const vector<string> & getTypes() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
        inline vector<string> getTypes() { DARABONBA_PTR_GET(types_, vector<string>) };
        inline Summarization& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
        inline Summarization& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


      protected:
        shared_ptr<vector<string>> types_ {};
      };

      class ServiceInspection : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceInspection& obj) { 
          DARABONBA_PTR_TO_JSON(InspectionContents, inspectionContents_);
          DARABONBA_PTR_TO_JSON(InspectionIntroduction, inspectionIntroduction_);
          DARABONBA_PTR_TO_JSON(SceneIntroduction, sceneIntroduction_);
          DARABONBA_ANY_TO_JSON(SpeakerMap, speakerMap_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceInspection& obj) { 
          DARABONBA_PTR_FROM_JSON(InspectionContents, inspectionContents_);
          DARABONBA_PTR_FROM_JSON(InspectionIntroduction, inspectionIntroduction_);
          DARABONBA_PTR_FROM_JSON(SceneIntroduction, sceneIntroduction_);
          DARABONBA_ANY_FROM_JSON(SpeakerMap, speakerMap_);
        };
        ServiceInspection() = default ;
        ServiceInspection(const ServiceInspection &) = default ;
        ServiceInspection(ServiceInspection &&) = default ;
        ServiceInspection(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServiceInspection() = default ;
        ServiceInspection& operator=(const ServiceInspection &) = default ;
        ServiceInspection& operator=(ServiceInspection &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InspectionContents : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InspectionContents& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, InspectionContents& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          InspectionContents() = default ;
          InspectionContents(const InspectionContents &) = default ;
          InspectionContents(InspectionContents &&) = default ;
          InspectionContents(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InspectionContents() = default ;
          InspectionContents& operator=(const InspectionContents &) = default ;
          InspectionContents& operator=(InspectionContents &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->title_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline InspectionContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline InspectionContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<string> content_ {};
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->inspectionContents_ == nullptr
        && this->inspectionIntroduction_ == nullptr && this->sceneIntroduction_ == nullptr && this->speakerMap_ == nullptr; };
        // inspectionContents Field Functions 
        bool hasInspectionContents() const { return this->inspectionContents_ != nullptr;};
        void deleteInspectionContents() { this->inspectionContents_ = nullptr;};
        inline const vector<ServiceInspection::InspectionContents> & getInspectionContents() const { DARABONBA_PTR_GET_CONST(inspectionContents_, vector<ServiceInspection::InspectionContents>) };
        inline vector<ServiceInspection::InspectionContents> getInspectionContents() { DARABONBA_PTR_GET(inspectionContents_, vector<ServiceInspection::InspectionContents>) };
        inline ServiceInspection& setInspectionContents(const vector<ServiceInspection::InspectionContents> & inspectionContents) { DARABONBA_PTR_SET_VALUE(inspectionContents_, inspectionContents) };
        inline ServiceInspection& setInspectionContents(vector<ServiceInspection::InspectionContents> && inspectionContents) { DARABONBA_PTR_SET_RVALUE(inspectionContents_, inspectionContents) };


        // inspectionIntroduction Field Functions 
        bool hasInspectionIntroduction() const { return this->inspectionIntroduction_ != nullptr;};
        void deleteInspectionIntroduction() { this->inspectionIntroduction_ = nullptr;};
        inline string getInspectionIntroduction() const { DARABONBA_PTR_GET_DEFAULT(inspectionIntroduction_, "") };
        inline ServiceInspection& setInspectionIntroduction(string inspectionIntroduction) { DARABONBA_PTR_SET_VALUE(inspectionIntroduction_, inspectionIntroduction) };


        // sceneIntroduction Field Functions 
        bool hasSceneIntroduction() const { return this->sceneIntroduction_ != nullptr;};
        void deleteSceneIntroduction() { this->sceneIntroduction_ = nullptr;};
        inline string getSceneIntroduction() const { DARABONBA_PTR_GET_DEFAULT(sceneIntroduction_, "") };
        inline ServiceInspection& setSceneIntroduction(string sceneIntroduction) { DARABONBA_PTR_SET_VALUE(sceneIntroduction_, sceneIntroduction) };


        // speakerMap Field Functions 
        bool hasSpeakerMap() const { return this->speakerMap_ != nullptr;};
        void deleteSpeakerMap() { this->speakerMap_ = nullptr;};
        inline         const Darabonba::Json & getSpeakerMap() const { DARABONBA_GET(speakerMap_) };
        Darabonba::Json & getSpeakerMap() { DARABONBA_GET(speakerMap_) };
        inline ServiceInspection& setSpeakerMap(const Darabonba::Json & speakerMap) { DARABONBA_SET_VALUE(speakerMap_, speakerMap) };
        inline ServiceInspection& setSpeakerMap(Darabonba::Json && speakerMap) { DARABONBA_SET_RVALUE(speakerMap_, speakerMap) };


      protected:
        shared_ptr<vector<ServiceInspection::InspectionContents>> inspectionContents_ {};
        shared_ptr<string> inspectionIntroduction_ {};
        shared_ptr<string> sceneIntroduction_ {};
        Darabonba::Json speakerMap_ {};
      };

      class MeetingAssistance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MeetingAssistance& obj) { 
          DARABONBA_PTR_TO_JSON(Types, types_);
        };
        friend void from_json(const Darabonba::Json& j, MeetingAssistance& obj) { 
          DARABONBA_PTR_FROM_JSON(Types, types_);
        };
        MeetingAssistance() = default ;
        MeetingAssistance(const MeetingAssistance &) = default ;
        MeetingAssistance(MeetingAssistance &&) = default ;
        MeetingAssistance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MeetingAssistance() = default ;
        MeetingAssistance& operator=(const MeetingAssistance &) = default ;
        MeetingAssistance& operator=(MeetingAssistance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->types_ == nullptr; };
        // types Field Functions 
        bool hasTypes() const { return this->types_ != nullptr;};
        void deleteTypes() { this->types_ = nullptr;};
        inline const vector<string> & getTypes() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
        inline vector<string> getTypes() { DARABONBA_PTR_GET(types_, vector<string>) };
        inline MeetingAssistance& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
        inline MeetingAssistance& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


      protected:
        shared_ptr<vector<string>> types_ {};
      };

      class IdentityRecognition : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IdentityRecognition& obj) { 
          DARABONBA_PTR_TO_JSON(IdentityContents, identityContents_);
          DARABONBA_PTR_TO_JSON(SceneIntroduction, sceneIntroduction_);
        };
        friend void from_json(const Darabonba::Json& j, IdentityRecognition& obj) { 
          DARABONBA_PTR_FROM_JSON(IdentityContents, identityContents_);
          DARABONBA_PTR_FROM_JSON(SceneIntroduction, sceneIntroduction_);
        };
        IdentityRecognition() = default ;
        IdentityRecognition(const IdentityRecognition &) = default ;
        IdentityRecognition(IdentityRecognition &&) = default ;
        IdentityRecognition(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IdentityRecognition() = default ;
        IdentityRecognition& operator=(const IdentityRecognition &) = default ;
        IdentityRecognition& operator=(IdentityRecognition &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class IdentityContents : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IdentityContents& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, IdentityContents& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          IdentityContents() = default ;
          IdentityContents(const IdentityContents &) = default ;
          IdentityContents(IdentityContents &&) = default ;
          IdentityContents(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IdentityContents() = default ;
          IdentityContents& operator=(const IdentityContents &) = default ;
          IdentityContents& operator=(IdentityContents &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline IdentityContents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline IdentityContents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->identityContents_ == nullptr
        && this->sceneIntroduction_ == nullptr; };
        // identityContents Field Functions 
        bool hasIdentityContents() const { return this->identityContents_ != nullptr;};
        void deleteIdentityContents() { this->identityContents_ = nullptr;};
        inline const vector<IdentityRecognition::IdentityContents> & getIdentityContents() const { DARABONBA_PTR_GET_CONST(identityContents_, vector<IdentityRecognition::IdentityContents>) };
        inline vector<IdentityRecognition::IdentityContents> getIdentityContents() { DARABONBA_PTR_GET(identityContents_, vector<IdentityRecognition::IdentityContents>) };
        inline IdentityRecognition& setIdentityContents(const vector<IdentityRecognition::IdentityContents> & identityContents) { DARABONBA_PTR_SET_VALUE(identityContents_, identityContents) };
        inline IdentityRecognition& setIdentityContents(vector<IdentityRecognition::IdentityContents> && identityContents) { DARABONBA_PTR_SET_RVALUE(identityContents_, identityContents) };


        // sceneIntroduction Field Functions 
        bool hasSceneIntroduction() const { return this->sceneIntroduction_ != nullptr;};
        void deleteSceneIntroduction() { this->sceneIntroduction_ = nullptr;};
        inline string getSceneIntroduction() const { DARABONBA_PTR_GET_DEFAULT(sceneIntroduction_, "") };
        inline IdentityRecognition& setSceneIntroduction(string sceneIntroduction) { DARABONBA_PTR_SET_VALUE(sceneIntroduction_, sceneIntroduction) };


      protected:
        shared_ptr<vector<IdentityRecognition::IdentityContents>> identityContents_ {};
        shared_ptr<string> sceneIntroduction_ {};
      };

      class ExtraParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtraParams& obj) { 
          DARABONBA_PTR_TO_JSON(DomainEducationEnabled, domainEducationEnabled_);
          DARABONBA_PTR_TO_JSON(FullTextSummaryFormat, fullTextSummaryFormat_);
          DARABONBA_PTR_TO_JSON(MaxKeywords, maxKeywords_);
          DARABONBA_PTR_TO_JSON(NfixEnabled, nfixEnabled_);
          DARABONBA_PTR_TO_JSON(OcrAuxiliaryEnabled, ocrAuxiliaryEnabled_);
          DARABONBA_PTR_TO_JSON(TranslateLlmSceneEnabled, translateLlmSceneEnabled_);
          DARABONBA_PTR_TO_JSON(TranslationHotwordMap, translationHotwordMap_);
        };
        friend void from_json(const Darabonba::Json& j, ExtraParams& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainEducationEnabled, domainEducationEnabled_);
          DARABONBA_PTR_FROM_JSON(FullTextSummaryFormat, fullTextSummaryFormat_);
          DARABONBA_PTR_FROM_JSON(MaxKeywords, maxKeywords_);
          DARABONBA_PTR_FROM_JSON(NfixEnabled, nfixEnabled_);
          DARABONBA_PTR_FROM_JSON(OcrAuxiliaryEnabled, ocrAuxiliaryEnabled_);
          DARABONBA_PTR_FROM_JSON(TranslateLlmSceneEnabled, translateLlmSceneEnabled_);
          DARABONBA_PTR_FROM_JSON(TranslationHotwordMap, translationHotwordMap_);
        };
        ExtraParams() = default ;
        ExtraParams(const ExtraParams &) = default ;
        ExtraParams(ExtraParams &&) = default ;
        ExtraParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtraParams() = default ;
        ExtraParams& operator=(const ExtraParams &) = default ;
        ExtraParams& operator=(ExtraParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TranslationHotwordMap : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TranslationHotwordMap& obj) { 
            DARABONBA_PTR_TO_JSON(bizType, bizType_);
            DARABONBA_PTR_TO_JSON(bizUserId, bizUserId_);
          };
          friend void from_json(const Darabonba::Json& j, TranslationHotwordMap& obj) { 
            DARABONBA_PTR_FROM_JSON(bizType, bizType_);
            DARABONBA_PTR_FROM_JSON(bizUserId, bizUserId_);
          };
          TranslationHotwordMap() = default ;
          TranslationHotwordMap(const TranslationHotwordMap &) = default ;
          TranslationHotwordMap(TranslationHotwordMap &&) = default ;
          TranslationHotwordMap(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TranslationHotwordMap() = default ;
          TranslationHotwordMap& operator=(const TranslationHotwordMap &) = default ;
          TranslationHotwordMap& operator=(TranslationHotwordMap &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bizType_ == nullptr
        && this->bizUserId_ == nullptr; };
          // bizType Field Functions 
          bool hasBizType() const { return this->bizType_ != nullptr;};
          void deleteBizType() { this->bizType_ = nullptr;};
          inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
          inline TranslationHotwordMap& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


          // bizUserId Field Functions 
          bool hasBizUserId() const { return this->bizUserId_ != nullptr;};
          void deleteBizUserId() { this->bizUserId_ = nullptr;};
          inline string getBizUserId() const { DARABONBA_PTR_GET_DEFAULT(bizUserId_, "") };
          inline TranslationHotwordMap& setBizUserId(string bizUserId) { DARABONBA_PTR_SET_VALUE(bizUserId_, bizUserId) };


        protected:
          shared_ptr<string> bizType_ {};
          shared_ptr<string> bizUserId_ {};
        };

        virtual bool empty() const override { return this->domainEducationEnabled_ == nullptr
        && this->fullTextSummaryFormat_ == nullptr && this->maxKeywords_ == nullptr && this->nfixEnabled_ == nullptr && this->ocrAuxiliaryEnabled_ == nullptr && this->translateLlmSceneEnabled_ == nullptr
        && this->translationHotwordMap_ == nullptr; };
        // domainEducationEnabled Field Functions 
        bool hasDomainEducationEnabled() const { return this->domainEducationEnabled_ != nullptr;};
        void deleteDomainEducationEnabled() { this->domainEducationEnabled_ = nullptr;};
        inline bool getDomainEducationEnabled() const { DARABONBA_PTR_GET_DEFAULT(domainEducationEnabled_, false) };
        inline ExtraParams& setDomainEducationEnabled(bool domainEducationEnabled) { DARABONBA_PTR_SET_VALUE(domainEducationEnabled_, domainEducationEnabled) };


        // fullTextSummaryFormat Field Functions 
        bool hasFullTextSummaryFormat() const { return this->fullTextSummaryFormat_ != nullptr;};
        void deleteFullTextSummaryFormat() { this->fullTextSummaryFormat_ = nullptr;};
        inline string getFullTextSummaryFormat() const { DARABONBA_PTR_GET_DEFAULT(fullTextSummaryFormat_, "") };
        inline ExtraParams& setFullTextSummaryFormat(string fullTextSummaryFormat) { DARABONBA_PTR_SET_VALUE(fullTextSummaryFormat_, fullTextSummaryFormat) };


        // maxKeywords Field Functions 
        bool hasMaxKeywords() const { return this->maxKeywords_ != nullptr;};
        void deleteMaxKeywords() { this->maxKeywords_ = nullptr;};
        inline int32_t getMaxKeywords() const { DARABONBA_PTR_GET_DEFAULT(maxKeywords_, 0) };
        inline ExtraParams& setMaxKeywords(int32_t maxKeywords) { DARABONBA_PTR_SET_VALUE(maxKeywords_, maxKeywords) };


        // nfixEnabled Field Functions 
        bool hasNfixEnabled() const { return this->nfixEnabled_ != nullptr;};
        void deleteNfixEnabled() { this->nfixEnabled_ = nullptr;};
        inline bool getNfixEnabled() const { DARABONBA_PTR_GET_DEFAULT(nfixEnabled_, false) };
        inline ExtraParams& setNfixEnabled(bool nfixEnabled) { DARABONBA_PTR_SET_VALUE(nfixEnabled_, nfixEnabled) };


        // ocrAuxiliaryEnabled Field Functions 
        bool hasOcrAuxiliaryEnabled() const { return this->ocrAuxiliaryEnabled_ != nullptr;};
        void deleteOcrAuxiliaryEnabled() { this->ocrAuxiliaryEnabled_ = nullptr;};
        inline bool getOcrAuxiliaryEnabled() const { DARABONBA_PTR_GET_DEFAULT(ocrAuxiliaryEnabled_, false) };
        inline ExtraParams& setOcrAuxiliaryEnabled(bool ocrAuxiliaryEnabled) { DARABONBA_PTR_SET_VALUE(ocrAuxiliaryEnabled_, ocrAuxiliaryEnabled) };


        // translateLlmSceneEnabled Field Functions 
        bool hasTranslateLlmSceneEnabled() const { return this->translateLlmSceneEnabled_ != nullptr;};
        void deleteTranslateLlmSceneEnabled() { this->translateLlmSceneEnabled_ = nullptr;};
        inline bool getTranslateLlmSceneEnabled() const { DARABONBA_PTR_GET_DEFAULT(translateLlmSceneEnabled_, false) };
        inline ExtraParams& setTranslateLlmSceneEnabled(bool translateLlmSceneEnabled) { DARABONBA_PTR_SET_VALUE(translateLlmSceneEnabled_, translateLlmSceneEnabled) };


        // translationHotwordMap Field Functions 
        bool hasTranslationHotwordMap() const { return this->translationHotwordMap_ != nullptr;};
        void deleteTranslationHotwordMap() { this->translationHotwordMap_ = nullptr;};
        inline const ExtraParams::TranslationHotwordMap & getTranslationHotwordMap() const { DARABONBA_PTR_GET_CONST(translationHotwordMap_, ExtraParams::TranslationHotwordMap) };
        inline ExtraParams::TranslationHotwordMap getTranslationHotwordMap() { DARABONBA_PTR_GET(translationHotwordMap_, ExtraParams::TranslationHotwordMap) };
        inline ExtraParams& setTranslationHotwordMap(const ExtraParams::TranslationHotwordMap & translationHotwordMap) { DARABONBA_PTR_SET_VALUE(translationHotwordMap_, translationHotwordMap) };
        inline ExtraParams& setTranslationHotwordMap(ExtraParams::TranslationHotwordMap && translationHotwordMap) { DARABONBA_PTR_SET_RVALUE(translationHotwordMap_, translationHotwordMap) };


      protected:
        shared_ptr<bool> domainEducationEnabled_ {};
        shared_ptr<string> fullTextSummaryFormat_ {};
        shared_ptr<int32_t> maxKeywords_ {};
        shared_ptr<bool> nfixEnabled_ {};
        shared_ptr<bool> ocrAuxiliaryEnabled_ {};
        shared_ptr<bool> translateLlmSceneEnabled_ {};
        shared_ptr<ExtraParams::TranslationHotwordMap> translationHotwordMap_ {};
      };

      class CustomPrompt : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomPrompt& obj) { 
          DARABONBA_PTR_TO_JSON(Contents, contents_);
        };
        friend void from_json(const Darabonba::Json& j, CustomPrompt& obj) { 
          DARABONBA_PTR_FROM_JSON(Contents, contents_);
        };
        CustomPrompt() = default ;
        CustomPrompt(const CustomPrompt &) = default ;
        CustomPrompt(CustomPrompt &&) = default ;
        CustomPrompt(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomPrompt() = default ;
        CustomPrompt& operator=(const CustomPrompt &) = default ;
        CustomPrompt& operator=(CustomPrompt &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Contents : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Contents& obj) { 
            DARABONBA_PTR_TO_JSON(Model, model_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Prompt, prompt_);
            DARABONBA_PTR_TO_JSON(TransType, transType_);
          };
          friend void from_json(const Darabonba::Json& j, Contents& obj) { 
            DARABONBA_PTR_FROM_JSON(Model, model_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
            DARABONBA_PTR_FROM_JSON(TransType, transType_);
          };
          Contents() = default ;
          Contents(const Contents &) = default ;
          Contents(Contents &&) = default ;
          Contents(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Contents() = default ;
          Contents& operator=(const Contents &) = default ;
          Contents& operator=(Contents &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->model_ == nullptr
        && this->name_ == nullptr && this->prompt_ == nullptr && this->transType_ == nullptr; };
          // model Field Functions 
          bool hasModel() const { return this->model_ != nullptr;};
          void deleteModel() { this->model_ = nullptr;};
          inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
          inline Contents& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Contents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // prompt Field Functions 
          bool hasPrompt() const { return this->prompt_ != nullptr;};
          void deletePrompt() { this->prompt_ = nullptr;};
          inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
          inline Contents& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


          // transType Field Functions 
          bool hasTransType() const { return this->transType_ != nullptr;};
          void deleteTransType() { this->transType_ = nullptr;};
          inline string getTransType() const { DARABONBA_PTR_GET_DEFAULT(transType_, "") };
          inline Contents& setTransType(string transType) { DARABONBA_PTR_SET_VALUE(transType_, transType) };


        protected:
          shared_ptr<string> model_ {};
          // This parameter is required.
          shared_ptr<string> name_ {};
          // This parameter is required.
          shared_ptr<string> prompt_ {};
          shared_ptr<string> transType_ {};
        };

        virtual bool empty() const override { return this->contents_ == nullptr; };
        // contents Field Functions 
        bool hasContents() const { return this->contents_ != nullptr;};
        void deleteContents() { this->contents_ = nullptr;};
        inline const vector<CustomPrompt::Contents> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<CustomPrompt::Contents>) };
        inline vector<CustomPrompt::Contents> getContents() { DARABONBA_PTR_GET(contents_, vector<CustomPrompt::Contents>) };
        inline CustomPrompt& setContents(const vector<CustomPrompt::Contents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
        inline CustomPrompt& setContents(vector<CustomPrompt::Contents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


      protected:
        shared_ptr<vector<CustomPrompt::Contents>> contents_ {};
      };

      class ContentExtraction : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContentExtraction& obj) { 
          DARABONBA_PTR_TO_JSON(ExtractionContents, extractionContents_);
          DARABONBA_PTR_TO_JSON(SceneIntroduction, sceneIntroduction_);
          DARABONBA_ANY_TO_JSON(SpeakerMap, speakerMap_);
        };
        friend void from_json(const Darabonba::Json& j, ContentExtraction& obj) { 
          DARABONBA_PTR_FROM_JSON(ExtractionContents, extractionContents_);
          DARABONBA_PTR_FROM_JSON(SceneIntroduction, sceneIntroduction_);
          DARABONBA_ANY_FROM_JSON(SpeakerMap, speakerMap_);
        };
        ContentExtraction() = default ;
        ContentExtraction(const ContentExtraction &) = default ;
        ContentExtraction(ContentExtraction &&) = default ;
        ContentExtraction(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContentExtraction() = default ;
        ContentExtraction& operator=(const ContentExtraction &) = default ;
        ContentExtraction& operator=(ContentExtraction &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ExtractionContents : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExtractionContents& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Identity, identity_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, ExtractionContents& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Identity, identity_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          ExtractionContents() = default ;
          ExtractionContents(const ExtractionContents &) = default ;
          ExtractionContents(ExtractionContents &&) = default ;
          ExtractionContents(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExtractionContents() = default ;
          ExtractionContents& operator=(const ExtractionContents &) = default ;
          ExtractionContents& operator=(ExtractionContents &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->identity_ == nullptr && this->title_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline ExtractionContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // identity Field Functions 
          bool hasIdentity() const { return this->identity_ != nullptr;};
          void deleteIdentity() { this->identity_ = nullptr;};
          inline string getIdentity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
          inline ExtractionContents& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline ExtractionContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<string> content_ {};
          shared_ptr<string> identity_ {};
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->extractionContents_ == nullptr
        && this->sceneIntroduction_ == nullptr && this->speakerMap_ == nullptr; };
        // extractionContents Field Functions 
        bool hasExtractionContents() const { return this->extractionContents_ != nullptr;};
        void deleteExtractionContents() { this->extractionContents_ = nullptr;};
        inline const vector<ContentExtraction::ExtractionContents> & getExtractionContents() const { DARABONBA_PTR_GET_CONST(extractionContents_, vector<ContentExtraction::ExtractionContents>) };
        inline vector<ContentExtraction::ExtractionContents> getExtractionContents() { DARABONBA_PTR_GET(extractionContents_, vector<ContentExtraction::ExtractionContents>) };
        inline ContentExtraction& setExtractionContents(const vector<ContentExtraction::ExtractionContents> & extractionContents) { DARABONBA_PTR_SET_VALUE(extractionContents_, extractionContents) };
        inline ContentExtraction& setExtractionContents(vector<ContentExtraction::ExtractionContents> && extractionContents) { DARABONBA_PTR_SET_RVALUE(extractionContents_, extractionContents) };


        // sceneIntroduction Field Functions 
        bool hasSceneIntroduction() const { return this->sceneIntroduction_ != nullptr;};
        void deleteSceneIntroduction() { this->sceneIntroduction_ = nullptr;};
        inline string getSceneIntroduction() const { DARABONBA_PTR_GET_DEFAULT(sceneIntroduction_, "") };
        inline ContentExtraction& setSceneIntroduction(string sceneIntroduction) { DARABONBA_PTR_SET_VALUE(sceneIntroduction_, sceneIntroduction) };


        // speakerMap Field Functions 
        bool hasSpeakerMap() const { return this->speakerMap_ != nullptr;};
        void deleteSpeakerMap() { this->speakerMap_ = nullptr;};
        inline         const Darabonba::Json & getSpeakerMap() const { DARABONBA_GET(speakerMap_) };
        Darabonba::Json & getSpeakerMap() { DARABONBA_GET(speakerMap_) };
        inline ContentExtraction& setSpeakerMap(const Darabonba::Json & speakerMap) { DARABONBA_SET_VALUE(speakerMap_, speakerMap) };
        inline ContentExtraction& setSpeakerMap(Darabonba::Json && speakerMap) { DARABONBA_SET_RVALUE(speakerMap_, speakerMap) };


      protected:
        shared_ptr<vector<ContentExtraction::ExtractionContents>> extractionContents_ {};
        shared_ptr<string> sceneIntroduction_ {};
        Darabonba::Json speakerMap_ {};
      };

      class AutoChapters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoChapters& obj) { 
          DARABONBA_PTR_TO_JSON(ChapterGranularity, chapterGranularity_);
        };
        friend void from_json(const Darabonba::Json& j, AutoChapters& obj) { 
          DARABONBA_PTR_FROM_JSON(ChapterGranularity, chapterGranularity_);
        };
        AutoChapters() = default ;
        AutoChapters(const AutoChapters &) = default ;
        AutoChapters(AutoChapters &&) = default ;
        AutoChapters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoChapters() = default ;
        AutoChapters& operator=(const AutoChapters &) = default ;
        AutoChapters& operator=(AutoChapters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->chapterGranularity_ == nullptr; };
        // chapterGranularity Field Functions 
        bool hasChapterGranularity() const { return this->chapterGranularity_ != nullptr;};
        void deleteChapterGranularity() { this->chapterGranularity_ = nullptr;};
        inline string getChapterGranularity() const { DARABONBA_PTR_GET_DEFAULT(chapterGranularity_, "") };
        inline AutoChapters& setChapterGranularity(string chapterGranularity) { DARABONBA_PTR_SET_VALUE(chapterGranularity_, chapterGranularity) };


      protected:
        shared_ptr<string> chapterGranularity_ {};
      };

      virtual bool empty() const override { return this->autoChapters_ == nullptr
        && this->autoChaptersEnabled_ == nullptr && this->contentExtraction_ == nullptr && this->contentExtractionEnabled_ == nullptr && this->customPrompt_ == nullptr && this->customPromptEnabled_ == nullptr
        && this->extraParams_ == nullptr && this->identityRecognition_ == nullptr && this->identityRecognitionEnabled_ == nullptr && this->llmOutputLanguage_ == nullptr && this->meetingAssistance_ == nullptr
        && this->meetingAssistanceEnabled_ == nullptr && this->model_ == nullptr && this->pptExtractionEnabled_ == nullptr && this->serviceInspection_ == nullptr && this->serviceInspectionEnabled_ == nullptr
        && this->summarization_ == nullptr && this->summarizationEnabled_ == nullptr && this->textPolishEnabled_ == nullptr && this->transcoding_ == nullptr && this->transcription_ == nullptr
        && this->translation_ == nullptr && this->translationEnabled_ == nullptr; };
      // autoChapters Field Functions 
      bool hasAutoChapters() const { return this->autoChapters_ != nullptr;};
      void deleteAutoChapters() { this->autoChapters_ = nullptr;};
      inline const Parameters::AutoChapters & getAutoChapters() const { DARABONBA_PTR_GET_CONST(autoChapters_, Parameters::AutoChapters) };
      inline Parameters::AutoChapters getAutoChapters() { DARABONBA_PTR_GET(autoChapters_, Parameters::AutoChapters) };
      inline Parameters& setAutoChapters(const Parameters::AutoChapters & autoChapters) { DARABONBA_PTR_SET_VALUE(autoChapters_, autoChapters) };
      inline Parameters& setAutoChapters(Parameters::AutoChapters && autoChapters) { DARABONBA_PTR_SET_RVALUE(autoChapters_, autoChapters) };


      // autoChaptersEnabled Field Functions 
      bool hasAutoChaptersEnabled() const { return this->autoChaptersEnabled_ != nullptr;};
      void deleteAutoChaptersEnabled() { this->autoChaptersEnabled_ = nullptr;};
      inline bool getAutoChaptersEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoChaptersEnabled_, false) };
      inline Parameters& setAutoChaptersEnabled(bool autoChaptersEnabled) { DARABONBA_PTR_SET_VALUE(autoChaptersEnabled_, autoChaptersEnabled) };


      // contentExtraction Field Functions 
      bool hasContentExtraction() const { return this->contentExtraction_ != nullptr;};
      void deleteContentExtraction() { this->contentExtraction_ = nullptr;};
      inline const Parameters::ContentExtraction & getContentExtraction() const { DARABONBA_PTR_GET_CONST(contentExtraction_, Parameters::ContentExtraction) };
      inline Parameters::ContentExtraction getContentExtraction() { DARABONBA_PTR_GET(contentExtraction_, Parameters::ContentExtraction) };
      inline Parameters& setContentExtraction(const Parameters::ContentExtraction & contentExtraction) { DARABONBA_PTR_SET_VALUE(contentExtraction_, contentExtraction) };
      inline Parameters& setContentExtraction(Parameters::ContentExtraction && contentExtraction) { DARABONBA_PTR_SET_RVALUE(contentExtraction_, contentExtraction) };


      // contentExtractionEnabled Field Functions 
      bool hasContentExtractionEnabled() const { return this->contentExtractionEnabled_ != nullptr;};
      void deleteContentExtractionEnabled() { this->contentExtractionEnabled_ = nullptr;};
      inline bool getContentExtractionEnabled() const { DARABONBA_PTR_GET_DEFAULT(contentExtractionEnabled_, false) };
      inline Parameters& setContentExtractionEnabled(bool contentExtractionEnabled) { DARABONBA_PTR_SET_VALUE(contentExtractionEnabled_, contentExtractionEnabled) };


      // customPrompt Field Functions 
      bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
      void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
      inline const Parameters::CustomPrompt & getCustomPrompt() const { DARABONBA_PTR_GET_CONST(customPrompt_, Parameters::CustomPrompt) };
      inline Parameters::CustomPrompt getCustomPrompt() { DARABONBA_PTR_GET(customPrompt_, Parameters::CustomPrompt) };
      inline Parameters& setCustomPrompt(const Parameters::CustomPrompt & customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };
      inline Parameters& setCustomPrompt(Parameters::CustomPrompt && customPrompt) { DARABONBA_PTR_SET_RVALUE(customPrompt_, customPrompt) };


      // customPromptEnabled Field Functions 
      bool hasCustomPromptEnabled() const { return this->customPromptEnabled_ != nullptr;};
      void deleteCustomPromptEnabled() { this->customPromptEnabled_ = nullptr;};
      inline bool getCustomPromptEnabled() const { DARABONBA_PTR_GET_DEFAULT(customPromptEnabled_, false) };
      inline Parameters& setCustomPromptEnabled(bool customPromptEnabled) { DARABONBA_PTR_SET_VALUE(customPromptEnabled_, customPromptEnabled) };


      // extraParams Field Functions 
      bool hasExtraParams() const { return this->extraParams_ != nullptr;};
      void deleteExtraParams() { this->extraParams_ = nullptr;};
      inline const Parameters::ExtraParams & getExtraParams() const { DARABONBA_PTR_GET_CONST(extraParams_, Parameters::ExtraParams) };
      inline Parameters::ExtraParams getExtraParams() { DARABONBA_PTR_GET(extraParams_, Parameters::ExtraParams) };
      inline Parameters& setExtraParams(const Parameters::ExtraParams & extraParams) { DARABONBA_PTR_SET_VALUE(extraParams_, extraParams) };
      inline Parameters& setExtraParams(Parameters::ExtraParams && extraParams) { DARABONBA_PTR_SET_RVALUE(extraParams_, extraParams) };


      // identityRecognition Field Functions 
      bool hasIdentityRecognition() const { return this->identityRecognition_ != nullptr;};
      void deleteIdentityRecognition() { this->identityRecognition_ = nullptr;};
      inline const Parameters::IdentityRecognition & getIdentityRecognition() const { DARABONBA_PTR_GET_CONST(identityRecognition_, Parameters::IdentityRecognition) };
      inline Parameters::IdentityRecognition getIdentityRecognition() { DARABONBA_PTR_GET(identityRecognition_, Parameters::IdentityRecognition) };
      inline Parameters& setIdentityRecognition(const Parameters::IdentityRecognition & identityRecognition) { DARABONBA_PTR_SET_VALUE(identityRecognition_, identityRecognition) };
      inline Parameters& setIdentityRecognition(Parameters::IdentityRecognition && identityRecognition) { DARABONBA_PTR_SET_RVALUE(identityRecognition_, identityRecognition) };


      // identityRecognitionEnabled Field Functions 
      bool hasIdentityRecognitionEnabled() const { return this->identityRecognitionEnabled_ != nullptr;};
      void deleteIdentityRecognitionEnabled() { this->identityRecognitionEnabled_ = nullptr;};
      inline bool getIdentityRecognitionEnabled() const { DARABONBA_PTR_GET_DEFAULT(identityRecognitionEnabled_, false) };
      inline Parameters& setIdentityRecognitionEnabled(bool identityRecognitionEnabled) { DARABONBA_PTR_SET_VALUE(identityRecognitionEnabled_, identityRecognitionEnabled) };


      // llmOutputLanguage Field Functions 
      bool hasLlmOutputLanguage() const { return this->llmOutputLanguage_ != nullptr;};
      void deleteLlmOutputLanguage() { this->llmOutputLanguage_ = nullptr;};
      inline string getLlmOutputLanguage() const { DARABONBA_PTR_GET_DEFAULT(llmOutputLanguage_, "") };
      inline Parameters& setLlmOutputLanguage(string llmOutputLanguage) { DARABONBA_PTR_SET_VALUE(llmOutputLanguage_, llmOutputLanguage) };


      // meetingAssistance Field Functions 
      bool hasMeetingAssistance() const { return this->meetingAssistance_ != nullptr;};
      void deleteMeetingAssistance() { this->meetingAssistance_ = nullptr;};
      inline const Parameters::MeetingAssistance & getMeetingAssistance() const { DARABONBA_PTR_GET_CONST(meetingAssistance_, Parameters::MeetingAssistance) };
      inline Parameters::MeetingAssistance getMeetingAssistance() { DARABONBA_PTR_GET(meetingAssistance_, Parameters::MeetingAssistance) };
      inline Parameters& setMeetingAssistance(const Parameters::MeetingAssistance & meetingAssistance) { DARABONBA_PTR_SET_VALUE(meetingAssistance_, meetingAssistance) };
      inline Parameters& setMeetingAssistance(Parameters::MeetingAssistance && meetingAssistance) { DARABONBA_PTR_SET_RVALUE(meetingAssistance_, meetingAssistance) };


      // meetingAssistanceEnabled Field Functions 
      bool hasMeetingAssistanceEnabled() const { return this->meetingAssistanceEnabled_ != nullptr;};
      void deleteMeetingAssistanceEnabled() { this->meetingAssistanceEnabled_ = nullptr;};
      inline bool getMeetingAssistanceEnabled() const { DARABONBA_PTR_GET_DEFAULT(meetingAssistanceEnabled_, false) };
      inline Parameters& setMeetingAssistanceEnabled(bool meetingAssistanceEnabled) { DARABONBA_PTR_SET_VALUE(meetingAssistanceEnabled_, meetingAssistanceEnabled) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Parameters& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // pptExtractionEnabled Field Functions 
      bool hasPptExtractionEnabled() const { return this->pptExtractionEnabled_ != nullptr;};
      void deletePptExtractionEnabled() { this->pptExtractionEnabled_ = nullptr;};
      inline bool getPptExtractionEnabled() const { DARABONBA_PTR_GET_DEFAULT(pptExtractionEnabled_, false) };
      inline Parameters& setPptExtractionEnabled(bool pptExtractionEnabled) { DARABONBA_PTR_SET_VALUE(pptExtractionEnabled_, pptExtractionEnabled) };


      // serviceInspection Field Functions 
      bool hasServiceInspection() const { return this->serviceInspection_ != nullptr;};
      void deleteServiceInspection() { this->serviceInspection_ = nullptr;};
      inline const Parameters::ServiceInspection & getServiceInspection() const { DARABONBA_PTR_GET_CONST(serviceInspection_, Parameters::ServiceInspection) };
      inline Parameters::ServiceInspection getServiceInspection() { DARABONBA_PTR_GET(serviceInspection_, Parameters::ServiceInspection) };
      inline Parameters& setServiceInspection(const Parameters::ServiceInspection & serviceInspection) { DARABONBA_PTR_SET_VALUE(serviceInspection_, serviceInspection) };
      inline Parameters& setServiceInspection(Parameters::ServiceInspection && serviceInspection) { DARABONBA_PTR_SET_RVALUE(serviceInspection_, serviceInspection) };


      // serviceInspectionEnabled Field Functions 
      bool hasServiceInspectionEnabled() const { return this->serviceInspectionEnabled_ != nullptr;};
      void deleteServiceInspectionEnabled() { this->serviceInspectionEnabled_ = nullptr;};
      inline bool getServiceInspectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(serviceInspectionEnabled_, false) };
      inline Parameters& setServiceInspectionEnabled(bool serviceInspectionEnabled) { DARABONBA_PTR_SET_VALUE(serviceInspectionEnabled_, serviceInspectionEnabled) };


      // summarization Field Functions 
      bool hasSummarization() const { return this->summarization_ != nullptr;};
      void deleteSummarization() { this->summarization_ = nullptr;};
      inline const Parameters::Summarization & getSummarization() const { DARABONBA_PTR_GET_CONST(summarization_, Parameters::Summarization) };
      inline Parameters::Summarization getSummarization() { DARABONBA_PTR_GET(summarization_, Parameters::Summarization) };
      inline Parameters& setSummarization(const Parameters::Summarization & summarization) { DARABONBA_PTR_SET_VALUE(summarization_, summarization) };
      inline Parameters& setSummarization(Parameters::Summarization && summarization) { DARABONBA_PTR_SET_RVALUE(summarization_, summarization) };


      // summarizationEnabled Field Functions 
      bool hasSummarizationEnabled() const { return this->summarizationEnabled_ != nullptr;};
      void deleteSummarizationEnabled() { this->summarizationEnabled_ = nullptr;};
      inline bool getSummarizationEnabled() const { DARABONBA_PTR_GET_DEFAULT(summarizationEnabled_, false) };
      inline Parameters& setSummarizationEnabled(bool summarizationEnabled) { DARABONBA_PTR_SET_VALUE(summarizationEnabled_, summarizationEnabled) };


      // textPolishEnabled Field Functions 
      bool hasTextPolishEnabled() const { return this->textPolishEnabled_ != nullptr;};
      void deleteTextPolishEnabled() { this->textPolishEnabled_ = nullptr;};
      inline bool getTextPolishEnabled() const { DARABONBA_PTR_GET_DEFAULT(textPolishEnabled_, false) };
      inline Parameters& setTextPolishEnabled(bool textPolishEnabled) { DARABONBA_PTR_SET_VALUE(textPolishEnabled_, textPolishEnabled) };


      // transcoding Field Functions 
      bool hasTranscoding() const { return this->transcoding_ != nullptr;};
      void deleteTranscoding() { this->transcoding_ = nullptr;};
      inline const Parameters::Transcoding & getTranscoding() const { DARABONBA_PTR_GET_CONST(transcoding_, Parameters::Transcoding) };
      inline Parameters::Transcoding getTranscoding() { DARABONBA_PTR_GET(transcoding_, Parameters::Transcoding) };
      inline Parameters& setTranscoding(const Parameters::Transcoding & transcoding) { DARABONBA_PTR_SET_VALUE(transcoding_, transcoding) };
      inline Parameters& setTranscoding(Parameters::Transcoding && transcoding) { DARABONBA_PTR_SET_RVALUE(transcoding_, transcoding) };


      // transcription Field Functions 
      bool hasTranscription() const { return this->transcription_ != nullptr;};
      void deleteTranscription() { this->transcription_ = nullptr;};
      inline const Parameters::Transcription & getTranscription() const { DARABONBA_PTR_GET_CONST(transcription_, Parameters::Transcription) };
      inline Parameters::Transcription getTranscription() { DARABONBA_PTR_GET(transcription_, Parameters::Transcription) };
      inline Parameters& setTranscription(const Parameters::Transcription & transcription) { DARABONBA_PTR_SET_VALUE(transcription_, transcription) };
      inline Parameters& setTranscription(Parameters::Transcription && transcription) { DARABONBA_PTR_SET_RVALUE(transcription_, transcription) };


      // translation Field Functions 
      bool hasTranslation() const { return this->translation_ != nullptr;};
      void deleteTranslation() { this->translation_ = nullptr;};
      inline const Parameters::Translation & getTranslation() const { DARABONBA_PTR_GET_CONST(translation_, Parameters::Translation) };
      inline Parameters::Translation getTranslation() { DARABONBA_PTR_GET(translation_, Parameters::Translation) };
      inline Parameters& setTranslation(const Parameters::Translation & translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };
      inline Parameters& setTranslation(Parameters::Translation && translation) { DARABONBA_PTR_SET_RVALUE(translation_, translation) };


      // translationEnabled Field Functions 
      bool hasTranslationEnabled() const { return this->translationEnabled_ != nullptr;};
      void deleteTranslationEnabled() { this->translationEnabled_ = nullptr;};
      inline bool getTranslationEnabled() const { DARABONBA_PTR_GET_DEFAULT(translationEnabled_, false) };
      inline Parameters& setTranslationEnabled(bool translationEnabled) { DARABONBA_PTR_SET_VALUE(translationEnabled_, translationEnabled) };


    protected:
      shared_ptr<Parameters::AutoChapters> autoChapters_ {};
      shared_ptr<bool> autoChaptersEnabled_ {};
      shared_ptr<Parameters::ContentExtraction> contentExtraction_ {};
      shared_ptr<bool> contentExtractionEnabled_ {};
      shared_ptr<Parameters::CustomPrompt> customPrompt_ {};
      shared_ptr<bool> customPromptEnabled_ {};
      shared_ptr<Parameters::ExtraParams> extraParams_ {};
      shared_ptr<Parameters::IdentityRecognition> identityRecognition_ {};
      shared_ptr<bool> identityRecognitionEnabled_ {};
      shared_ptr<string> llmOutputLanguage_ {};
      shared_ptr<Parameters::MeetingAssistance> meetingAssistance_ {};
      shared_ptr<bool> meetingAssistanceEnabled_ {};
      shared_ptr<string> model_ {};
      shared_ptr<bool> pptExtractionEnabled_ {};
      shared_ptr<Parameters::ServiceInspection> serviceInspection_ {};
      shared_ptr<bool> serviceInspectionEnabled_ {};
      shared_ptr<Parameters::Summarization> summarization_ {};
      shared_ptr<bool> summarizationEnabled_ {};
      shared_ptr<bool> textPolishEnabled_ {};
      shared_ptr<Parameters::Transcoding> transcoding_ {};
      shared_ptr<Parameters::Transcription> transcription_ {};
      shared_ptr<Parameters::Translation> translation_ {};
      shared_ptr<bool> translationEnabled_ {};
    };

    class Input : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Input& obj) { 
        DARABONBA_PTR_TO_JSON(AudioChannelMode, audioChannelMode_);
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(LanguageHints, languageHints_);
        DARABONBA_PTR_TO_JSON(MultipleStreamsEnabled, multipleStreamsEnabled_);
        DARABONBA_PTR_TO_JSON(OutputPath, outputPath_);
        DARABONBA_PTR_TO_JSON(ProgressiveCallbacksEnabled, progressiveCallbacksEnabled_);
        DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
        DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskKey, taskKey_);
      };
      friend void from_json(const Darabonba::Json& j, Input& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioChannelMode, audioChannelMode_);
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(LanguageHints, languageHints_);
        DARABONBA_PTR_FROM_JSON(MultipleStreamsEnabled, multipleStreamsEnabled_);
        DARABONBA_PTR_FROM_JSON(OutputPath, outputPath_);
        DARABONBA_PTR_FROM_JSON(ProgressiveCallbacksEnabled, progressiveCallbacksEnabled_);
        DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
        DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskKey, taskKey_);
      };
      Input() = default ;
      Input(const Input &) = default ;
      Input(Input &&) = default ;
      Input(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Input() = default ;
      Input& operator=(const Input &) = default ;
      Input& operator=(Input &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->audioChannelMode_ == nullptr
        && this->fileUrl_ == nullptr && this->format_ == nullptr && this->languageHints_ == nullptr && this->multipleStreamsEnabled_ == nullptr && this->outputPath_ == nullptr
        && this->progressiveCallbacksEnabled_ == nullptr && this->sampleRate_ == nullptr && this->sourceLanguage_ == nullptr && this->taskId_ == nullptr && this->taskKey_ == nullptr; };
      // audioChannelMode Field Functions 
      bool hasAudioChannelMode() const { return this->audioChannelMode_ != nullptr;};
      void deleteAudioChannelMode() { this->audioChannelMode_ = nullptr;};
      inline string getAudioChannelMode() const { DARABONBA_PTR_GET_DEFAULT(audioChannelMode_, "") };
      inline Input& setAudioChannelMode(string audioChannelMode) { DARABONBA_PTR_SET_VALUE(audioChannelMode_, audioChannelMode) };


      // fileUrl Field Functions 
      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
      void deleteFileUrl() { this->fileUrl_ = nullptr;};
      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
      inline Input& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline Input& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // languageHints Field Functions 
      bool hasLanguageHints() const { return this->languageHints_ != nullptr;};
      void deleteLanguageHints() { this->languageHints_ = nullptr;};
      inline const vector<string> & getLanguageHints() const { DARABONBA_PTR_GET_CONST(languageHints_, vector<string>) };
      inline vector<string> getLanguageHints() { DARABONBA_PTR_GET(languageHints_, vector<string>) };
      inline Input& setLanguageHints(const vector<string> & languageHints) { DARABONBA_PTR_SET_VALUE(languageHints_, languageHints) };
      inline Input& setLanguageHints(vector<string> && languageHints) { DARABONBA_PTR_SET_RVALUE(languageHints_, languageHints) };


      // multipleStreamsEnabled Field Functions 
      bool hasMultipleStreamsEnabled() const { return this->multipleStreamsEnabled_ != nullptr;};
      void deleteMultipleStreamsEnabled() { this->multipleStreamsEnabled_ = nullptr;};
      inline bool getMultipleStreamsEnabled() const { DARABONBA_PTR_GET_DEFAULT(multipleStreamsEnabled_, false) };
      inline Input& setMultipleStreamsEnabled(bool multipleStreamsEnabled) { DARABONBA_PTR_SET_VALUE(multipleStreamsEnabled_, multipleStreamsEnabled) };


      // outputPath Field Functions 
      bool hasOutputPath() const { return this->outputPath_ != nullptr;};
      void deleteOutputPath() { this->outputPath_ = nullptr;};
      inline string getOutputPath() const { DARABONBA_PTR_GET_DEFAULT(outputPath_, "") };
      inline Input& setOutputPath(string outputPath) { DARABONBA_PTR_SET_VALUE(outputPath_, outputPath) };


      // progressiveCallbacksEnabled Field Functions 
      bool hasProgressiveCallbacksEnabled() const { return this->progressiveCallbacksEnabled_ != nullptr;};
      void deleteProgressiveCallbacksEnabled() { this->progressiveCallbacksEnabled_ = nullptr;};
      inline bool getProgressiveCallbacksEnabled() const { DARABONBA_PTR_GET_DEFAULT(progressiveCallbacksEnabled_, false) };
      inline Input& setProgressiveCallbacksEnabled(bool progressiveCallbacksEnabled) { DARABONBA_PTR_SET_VALUE(progressiveCallbacksEnabled_, progressiveCallbacksEnabled) };


      // sampleRate Field Functions 
      bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
      void deleteSampleRate() { this->sampleRate_ = nullptr;};
      inline int32_t getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
      inline Input& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


      // sourceLanguage Field Functions 
      bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
      void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
      inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
      inline Input& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Input& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskKey Field Functions 
      bool hasTaskKey() const { return this->taskKey_ != nullptr;};
      void deleteTaskKey() { this->taskKey_ = nullptr;};
      inline string getTaskKey() const { DARABONBA_PTR_GET_DEFAULT(taskKey_, "") };
      inline Input& setTaskKey(string taskKey) { DARABONBA_PTR_SET_VALUE(taskKey_, taskKey) };


    protected:
      shared_ptr<string> audioChannelMode_ {};
      shared_ptr<string> fileUrl_ {};
      shared_ptr<string> format_ {};
      shared_ptr<vector<string>> languageHints_ {};
      shared_ptr<bool> multipleStreamsEnabled_ {};
      shared_ptr<string> outputPath_ {};
      shared_ptr<bool> progressiveCallbacksEnabled_ {};
      shared_ptr<int32_t> sampleRate_ {};
      // This parameter is required.
      shared_ptr<string> sourceLanguage_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskKey_ {};
    };

    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->input_ == nullptr && this->parameters_ == nullptr && this->operation_ == nullptr && this->type_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline CreateTaskRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const CreateTaskRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, CreateTaskRequest::Input) };
    inline CreateTaskRequest::Input getInput() { DARABONBA_PTR_GET(input_, CreateTaskRequest::Input) };
    inline CreateTaskRequest& setInput(const CreateTaskRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline CreateTaskRequest& setInput(CreateTaskRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const CreateTaskRequest::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, CreateTaskRequest::Parameters) };
    inline CreateTaskRequest::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, CreateTaskRequest::Parameters) };
    inline CreateTaskRequest& setParameters(const CreateTaskRequest::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateTaskRequest& setParameters(CreateTaskRequest::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline CreateTaskRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> appKey_ {};
    shared_ptr<CreateTaskRequest::Input> input_ {};
    shared_ptr<CreateTaskRequest::Parameters> parameters_ {};
    shared_ptr<string> operation_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
