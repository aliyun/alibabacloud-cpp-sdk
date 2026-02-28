// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudNoteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudNoteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AutoChapters, autoChapters_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(CustomPrompt, customPrompt_);
      DARABONBA_PTR_TO_JSON(LanguageHints, languageHints_);
      DARABONBA_PTR_TO_JSON(MeetingAssistance, meetingAssistance_);
      DARABONBA_PTR_TO_JSON(RealtimeSubtitle, realtimeSubtitle_);
      DARABONBA_PTR_TO_JSON(ServiceInspection, serviceInspection_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(StorageConfig, storageConfig_);
      DARABONBA_PTR_TO_JSON(Summarization, summarization_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TextPolish, textPolish_);
      DARABONBA_PTR_TO_JSON(Transcription, transcription_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudNoteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AutoChapters, autoChapters_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(CustomPrompt, customPrompt_);
      DARABONBA_PTR_FROM_JSON(LanguageHints, languageHints_);
      DARABONBA_PTR_FROM_JSON(MeetingAssistance, meetingAssistance_);
      DARABONBA_PTR_FROM_JSON(RealtimeSubtitle, realtimeSubtitle_);
      DARABONBA_PTR_FROM_JSON(ServiceInspection, serviceInspection_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(StorageConfig, storageConfig_);
      DARABONBA_PTR_FROM_JSON(Summarization, summarization_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TextPolish, textPolish_);
      DARABONBA_PTR_FROM_JSON(Transcription, transcription_);
    };
    StartCloudNoteRequest() = default ;
    StartCloudNoteRequest(const StartCloudNoteRequest &) = default ;
    StartCloudNoteRequest(StartCloudNoteRequest &&) = default ;
    StartCloudNoteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudNoteRequest() = default ;
    StartCloudNoteRequest& operator=(const StartCloudNoteRequest &) = default ;
    StartCloudNoteRequest& operator=(StartCloudNoteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Transcription : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Transcription& obj) { 
        DARABONBA_PTR_TO_JSON(DiarizationEnabled, diarizationEnabled_);
        DARABONBA_PTR_TO_JSON(PhraseId, phraseId_);
        DARABONBA_PTR_TO_JSON(SpeakerCount, speakerCount_);
        DARABONBA_PTR_TO_JSON(TranscriptionLevel, transcriptionLevel_);
      };
      friend void from_json(const Darabonba::Json& j, Transcription& obj) { 
        DARABONBA_PTR_FROM_JSON(DiarizationEnabled, diarizationEnabled_);
        DARABONBA_PTR_FROM_JSON(PhraseId, phraseId_);
        DARABONBA_PTR_FROM_JSON(SpeakerCount, speakerCount_);
        DARABONBA_PTR_FROM_JSON(TranscriptionLevel, transcriptionLevel_);
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
      virtual bool empty() const override { return this->diarizationEnabled_ == nullptr
        && this->phraseId_ == nullptr && this->speakerCount_ == nullptr && this->transcriptionLevel_ == nullptr; };
      // diarizationEnabled Field Functions 
      bool hasDiarizationEnabled() const { return this->diarizationEnabled_ != nullptr;};
      void deleteDiarizationEnabled() { this->diarizationEnabled_ = nullptr;};
      inline bool getDiarizationEnabled() const { DARABONBA_PTR_GET_DEFAULT(diarizationEnabled_, false) };
      inline Transcription& setDiarizationEnabled(bool diarizationEnabled) { DARABONBA_PTR_SET_VALUE(diarizationEnabled_, diarizationEnabled) };


      // phraseId Field Functions 
      bool hasPhraseId() const { return this->phraseId_ != nullptr;};
      void deletePhraseId() { this->phraseId_ = nullptr;};
      inline string getPhraseId() const { DARABONBA_PTR_GET_DEFAULT(phraseId_, "") };
      inline Transcription& setPhraseId(string phraseId) { DARABONBA_PTR_SET_VALUE(phraseId_, phraseId) };


      // speakerCount Field Functions 
      bool hasSpeakerCount() const { return this->speakerCount_ != nullptr;};
      void deleteSpeakerCount() { this->speakerCount_ = nullptr;};
      inline int32_t getSpeakerCount() const { DARABONBA_PTR_GET_DEFAULT(speakerCount_, 0) };
      inline Transcription& setSpeakerCount(int32_t speakerCount) { DARABONBA_PTR_SET_VALUE(speakerCount_, speakerCount) };


      // transcriptionLevel Field Functions 
      bool hasTranscriptionLevel() const { return this->transcriptionLevel_ != nullptr;};
      void deleteTranscriptionLevel() { this->transcriptionLevel_ = nullptr;};
      inline int32_t getTranscriptionLevel() const { DARABONBA_PTR_GET_DEFAULT(transcriptionLevel_, 0) };
      inline Transcription& setTranscriptionLevel(int32_t transcriptionLevel) { DARABONBA_PTR_SET_VALUE(transcriptionLevel_, transcriptionLevel) };


    protected:
      shared_ptr<bool> diarizationEnabled_ {};
      shared_ptr<string> phraseId_ {};
      shared_ptr<int32_t> speakerCount_ {};
      shared_ptr<int32_t> transcriptionLevel_ {};
    };

    class TextPolish : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TextPolish& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      };
      friend void from_json(const Darabonba::Json& j, TextPolish& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      };
      TextPolish() = default ;
      TextPolish(const TextPolish &) = default ;
      TextPolish(TextPolish &&) = default ;
      TextPolish(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TextPolish() = default ;
      TextPolish& operator=(const TextPolish &) = default ;
      TextPolish& operator=(TextPolish &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline TextPolish& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    protected:
      shared_ptr<bool> enabled_ {};
    };

    class Summarization : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Summarization& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Summarization& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->type_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Summarization& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline const vector<string> & getType() const { DARABONBA_PTR_GET_CONST(type_, vector<string>) };
      inline vector<string> getType() { DARABONBA_PTR_GET(type_, vector<string>) };
      inline Summarization& setType(const vector<string> & type) { DARABONBA_PTR_SET_VALUE(type_, type) };
      inline Summarization& setType(vector<string> && type) { DARABONBA_PTR_SET_RVALUE(type_, type) };


    protected:
      shared_ptr<bool> enabled_ {};
      // This parameter is required.
      shared_ptr<vector<string>> type_ {};
    };

    class StorageConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StorageConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, StorageConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      StorageConfig() = default ;
      StorageConfig(const StorageConfig &) = default ;
      StorageConfig(StorageConfig &&) = default ;
      StorageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StorageConfig() = default ;
      StorageConfig& operator=(const StorageConfig &) = default ;
      StorageConfig& operator=(StorageConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->bucket_ == nullptr && this->region_ == nullptr && this->secretKey_ == nullptr && this->vendor_ == nullptr; };
      // accessKey Field Functions 
      bool hasAccessKey() const { return this->accessKey_ != nullptr;};
      void deleteAccessKey() { this->accessKey_ = nullptr;};
      inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
      inline StorageConfig& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline StorageConfig& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline int32_t getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, 0) };
      inline StorageConfig& setRegion(int32_t region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // secretKey Field Functions 
      bool hasSecretKey() const { return this->secretKey_ != nullptr;};
      void deleteSecretKey() { this->secretKey_ = nullptr;};
      inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
      inline StorageConfig& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
      inline StorageConfig& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // accessKey。
      // 
      // This parameter is required.
      shared_ptr<string> accessKey_ {};
      // This parameter is required.
      shared_ptr<string> bucket_ {};
      // This parameter is required.
      shared_ptr<int32_t> region_ {};
      // secretKey。
      // 
      // This parameter is required.
      shared_ptr<string> secretKey_ {};
      // This parameter is required.
      shared_ptr<int32_t> vendor_ {};
    };

    class ServiceInspection : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceInspection& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(InspectionContents, inspectionContents_);
        DARABONBA_PTR_TO_JSON(InspectionIntroduction, inspectionIntroduction_);
        DARABONBA_PTR_TO_JSON(SceneIntroduction, sceneIntroduction_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceInspection& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(InspectionContents, inspectionContents_);
        DARABONBA_PTR_FROM_JSON(InspectionIntroduction, inspectionIntroduction_);
        DARABONBA_PTR_FROM_JSON(SceneIntroduction, sceneIntroduction_);
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
        // This parameter is required.
        shared_ptr<string> content_ {};
        // This parameter is required.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->inspectionContents_ == nullptr && this->inspectionIntroduction_ == nullptr && this->sceneIntroduction_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline ServiceInspection& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


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


    protected:
      shared_ptr<bool> enabled_ {};
      // This parameter is required.
      shared_ptr<vector<ServiceInspection::InspectionContents>> inspectionContents_ {};
      // This parameter is required.
      shared_ptr<string> inspectionIntroduction_ {};
      // This parameter is required.
      shared_ptr<string> sceneIntroduction_ {};
    };

    class RealtimeSubtitle : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RealtimeSubtitle& obj) { 
        DARABONBA_PTR_TO_JSON(AsrCallback, asrCallback_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Translation, translation_);
      };
      friend void from_json(const Darabonba::Json& j, RealtimeSubtitle& obj) { 
        DARABONBA_PTR_FROM_JSON(AsrCallback, asrCallback_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Translation, translation_);
      };
      RealtimeSubtitle() = default ;
      RealtimeSubtitle(const RealtimeSubtitle &) = default ;
      RealtimeSubtitle(RealtimeSubtitle &&) = default ;
      RealtimeSubtitle(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RealtimeSubtitle() = default ;
      RealtimeSubtitle& operator=(const RealtimeSubtitle &) = default ;
      RealtimeSubtitle& operator=(RealtimeSubtitle &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Translation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Translation& obj) { 
          DARABONBA_PTR_TO_JSON(TranslateLevel, translateLevel_);
        };
        friend void from_json(const Darabonba::Json& j, Translation& obj) { 
          DARABONBA_PTR_FROM_JSON(TranslateLevel, translateLevel_);
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
        virtual bool empty() const override { return this->translateLevel_ == nullptr; };
        // translateLevel Field Functions 
        bool hasTranslateLevel() const { return this->translateLevel_ != nullptr;};
        void deleteTranslateLevel() { this->translateLevel_ = nullptr;};
        inline int32_t getTranslateLevel() const { DARABONBA_PTR_GET_DEFAULT(translateLevel_, 0) };
        inline Translation& setTranslateLevel(int32_t translateLevel) { DARABONBA_PTR_SET_VALUE(translateLevel_, translateLevel) };


      protected:
        shared_ptr<int32_t> translateLevel_ {};
      };

      virtual bool empty() const override { return this->asrCallback_ == nullptr
        && this->enabled_ == nullptr && this->translation_ == nullptr; };
      // asrCallback Field Functions 
      bool hasAsrCallback() const { return this->asrCallback_ != nullptr;};
      void deleteAsrCallback() { this->asrCallback_ = nullptr;};
      inline bool getAsrCallback() const { DARABONBA_PTR_GET_DEFAULT(asrCallback_, false) };
      inline RealtimeSubtitle& setAsrCallback(bool asrCallback) { DARABONBA_PTR_SET_VALUE(asrCallback_, asrCallback) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline RealtimeSubtitle& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // translation Field Functions 
      bool hasTranslation() const { return this->translation_ != nullptr;};
      void deleteTranslation() { this->translation_ = nullptr;};
      inline const RealtimeSubtitle::Translation & getTranslation() const { DARABONBA_PTR_GET_CONST(translation_, RealtimeSubtitle::Translation) };
      inline RealtimeSubtitle::Translation getTranslation() { DARABONBA_PTR_GET(translation_, RealtimeSubtitle::Translation) };
      inline RealtimeSubtitle& setTranslation(const RealtimeSubtitle::Translation & translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };
      inline RealtimeSubtitle& setTranslation(RealtimeSubtitle::Translation && translation) { DARABONBA_PTR_SET_RVALUE(translation_, translation) };


    protected:
      shared_ptr<bool> asrCallback_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<RealtimeSubtitle::Translation> translation_ {};
    };

    class MeetingAssistance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MeetingAssistance& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(MeetingAssistanceType, meetingAssistanceType_);
      };
      friend void from_json(const Darabonba::Json& j, MeetingAssistance& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(MeetingAssistanceType, meetingAssistanceType_);
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
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->meetingAssistanceType_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline MeetingAssistance& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // meetingAssistanceType Field Functions 
      bool hasMeetingAssistanceType() const { return this->meetingAssistanceType_ != nullptr;};
      void deleteMeetingAssistanceType() { this->meetingAssistanceType_ = nullptr;};
      inline const vector<string> & getMeetingAssistanceType() const { DARABONBA_PTR_GET_CONST(meetingAssistanceType_, vector<string>) };
      inline vector<string> getMeetingAssistanceType() { DARABONBA_PTR_GET(meetingAssistanceType_, vector<string>) };
      inline MeetingAssistance& setMeetingAssistanceType(const vector<string> & meetingAssistanceType) { DARABONBA_PTR_SET_VALUE(meetingAssistanceType_, meetingAssistanceType) };
      inline MeetingAssistance& setMeetingAssistanceType(vector<string> && meetingAssistanceType) { DARABONBA_PTR_SET_RVALUE(meetingAssistanceType_, meetingAssistanceType) };


    protected:
      shared_ptr<bool> enabled_ {};
      // This parameter is required.
      shared_ptr<vector<string>> meetingAssistanceType_ {};
    };

    class CustomPrompt : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomPrompt& obj) { 
        DARABONBA_PTR_TO_JSON(CustomPromptContents, customPromptContents_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      };
      friend void from_json(const Darabonba::Json& j, CustomPrompt& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomPromptContents, customPromptContents_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
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
      class CustomPromptContents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomPromptContents& obj) { 
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Prompt, prompt_);
          DARABONBA_PTR_TO_JSON(TransType, transType_);
        };
        friend void from_json(const Darabonba::Json& j, CustomPromptContents& obj) { 
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
          DARABONBA_PTR_FROM_JSON(TransType, transType_);
        };
        CustomPromptContents() = default ;
        CustomPromptContents(const CustomPromptContents &) = default ;
        CustomPromptContents(CustomPromptContents &&) = default ;
        CustomPromptContents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomPromptContents() = default ;
        CustomPromptContents& operator=(const CustomPromptContents &) = default ;
        CustomPromptContents& operator=(CustomPromptContents &&) = default ;
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
        inline CustomPromptContents& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CustomPromptContents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // prompt Field Functions 
        bool hasPrompt() const { return this->prompt_ != nullptr;};
        void deletePrompt() { this->prompt_ = nullptr;};
        inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
        inline CustomPromptContents& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


        // transType Field Functions 
        bool hasTransType() const { return this->transType_ != nullptr;};
        void deleteTransType() { this->transType_ = nullptr;};
        inline string getTransType() const { DARABONBA_PTR_GET_DEFAULT(transType_, "") };
        inline CustomPromptContents& setTransType(string transType) { DARABONBA_PTR_SET_VALUE(transType_, transType) };


      protected:
        shared_ptr<string> model_ {};
        // This parameter is required.
        shared_ptr<string> name_ {};
        // This parameter is required.
        shared_ptr<string> prompt_ {};
        shared_ptr<string> transType_ {};
      };

      virtual bool empty() const override { return this->customPromptContents_ == nullptr
        && this->enabled_ == nullptr; };
      // customPromptContents Field Functions 
      bool hasCustomPromptContents() const { return this->customPromptContents_ != nullptr;};
      void deleteCustomPromptContents() { this->customPromptContents_ = nullptr;};
      inline const vector<CustomPrompt::CustomPromptContents> & getCustomPromptContents() const { DARABONBA_PTR_GET_CONST(customPromptContents_, vector<CustomPrompt::CustomPromptContents>) };
      inline vector<CustomPrompt::CustomPromptContents> getCustomPromptContents() { DARABONBA_PTR_GET(customPromptContents_, vector<CustomPrompt::CustomPromptContents>) };
      inline CustomPrompt& setCustomPromptContents(const vector<CustomPrompt::CustomPromptContents> & customPromptContents) { DARABONBA_PTR_SET_VALUE(customPromptContents_, customPromptContents) };
      inline CustomPrompt& setCustomPromptContents(vector<CustomPrompt::CustomPromptContents> && customPromptContents) { DARABONBA_PTR_SET_RVALUE(customPromptContents_, customPromptContents) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline CustomPrompt& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    protected:
      // This parameter is required.
      shared_ptr<vector<CustomPrompt::CustomPromptContents>> customPromptContents_ {};
      shared_ptr<bool> enabled_ {};
    };

    class AutoChapters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoChapters& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      };
      friend void from_json(const Darabonba::Json& j, AutoChapters& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
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
      virtual bool empty() const override { return this->enabled_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline AutoChapters& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    protected:
      shared_ptr<bool> enabled_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->autoChapters_ == nullptr && this->channelId_ == nullptr && this->customPrompt_ == nullptr && this->languageHints_ == nullptr && this->meetingAssistance_ == nullptr
        && this->realtimeSubtitle_ == nullptr && this->serviceInspection_ == nullptr && this->sourceLanguage_ == nullptr && this->storageConfig_ == nullptr && this->summarization_ == nullptr
        && this->taskId_ == nullptr && this->textPolish_ == nullptr && this->transcription_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartCloudNoteRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // autoChapters Field Functions 
    bool hasAutoChapters() const { return this->autoChapters_ != nullptr;};
    void deleteAutoChapters() { this->autoChapters_ = nullptr;};
    inline const StartCloudNoteRequest::AutoChapters & getAutoChapters() const { DARABONBA_PTR_GET_CONST(autoChapters_, StartCloudNoteRequest::AutoChapters) };
    inline StartCloudNoteRequest::AutoChapters getAutoChapters() { DARABONBA_PTR_GET(autoChapters_, StartCloudNoteRequest::AutoChapters) };
    inline StartCloudNoteRequest& setAutoChapters(const StartCloudNoteRequest::AutoChapters & autoChapters) { DARABONBA_PTR_SET_VALUE(autoChapters_, autoChapters) };
    inline StartCloudNoteRequest& setAutoChapters(StartCloudNoteRequest::AutoChapters && autoChapters) { DARABONBA_PTR_SET_RVALUE(autoChapters_, autoChapters) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartCloudNoteRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline const StartCloudNoteRequest::CustomPrompt & getCustomPrompt() const { DARABONBA_PTR_GET_CONST(customPrompt_, StartCloudNoteRequest::CustomPrompt) };
    inline StartCloudNoteRequest::CustomPrompt getCustomPrompt() { DARABONBA_PTR_GET(customPrompt_, StartCloudNoteRequest::CustomPrompt) };
    inline StartCloudNoteRequest& setCustomPrompt(const StartCloudNoteRequest::CustomPrompt & customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };
    inline StartCloudNoteRequest& setCustomPrompt(StartCloudNoteRequest::CustomPrompt && customPrompt) { DARABONBA_PTR_SET_RVALUE(customPrompt_, customPrompt) };


    // languageHints Field Functions 
    bool hasLanguageHints() const { return this->languageHints_ != nullptr;};
    void deleteLanguageHints() { this->languageHints_ = nullptr;};
    inline const vector<string> & getLanguageHints() const { DARABONBA_PTR_GET_CONST(languageHints_, vector<string>) };
    inline vector<string> getLanguageHints() { DARABONBA_PTR_GET(languageHints_, vector<string>) };
    inline StartCloudNoteRequest& setLanguageHints(const vector<string> & languageHints) { DARABONBA_PTR_SET_VALUE(languageHints_, languageHints) };
    inline StartCloudNoteRequest& setLanguageHints(vector<string> && languageHints) { DARABONBA_PTR_SET_RVALUE(languageHints_, languageHints) };


    // meetingAssistance Field Functions 
    bool hasMeetingAssistance() const { return this->meetingAssistance_ != nullptr;};
    void deleteMeetingAssistance() { this->meetingAssistance_ = nullptr;};
    inline const StartCloudNoteRequest::MeetingAssistance & getMeetingAssistance() const { DARABONBA_PTR_GET_CONST(meetingAssistance_, StartCloudNoteRequest::MeetingAssistance) };
    inline StartCloudNoteRequest::MeetingAssistance getMeetingAssistance() { DARABONBA_PTR_GET(meetingAssistance_, StartCloudNoteRequest::MeetingAssistance) };
    inline StartCloudNoteRequest& setMeetingAssistance(const StartCloudNoteRequest::MeetingAssistance & meetingAssistance) { DARABONBA_PTR_SET_VALUE(meetingAssistance_, meetingAssistance) };
    inline StartCloudNoteRequest& setMeetingAssistance(StartCloudNoteRequest::MeetingAssistance && meetingAssistance) { DARABONBA_PTR_SET_RVALUE(meetingAssistance_, meetingAssistance) };


    // realtimeSubtitle Field Functions 
    bool hasRealtimeSubtitle() const { return this->realtimeSubtitle_ != nullptr;};
    void deleteRealtimeSubtitle() { this->realtimeSubtitle_ = nullptr;};
    inline const StartCloudNoteRequest::RealtimeSubtitle & getRealtimeSubtitle() const { DARABONBA_PTR_GET_CONST(realtimeSubtitle_, StartCloudNoteRequest::RealtimeSubtitle) };
    inline StartCloudNoteRequest::RealtimeSubtitle getRealtimeSubtitle() { DARABONBA_PTR_GET(realtimeSubtitle_, StartCloudNoteRequest::RealtimeSubtitle) };
    inline StartCloudNoteRequest& setRealtimeSubtitle(const StartCloudNoteRequest::RealtimeSubtitle & realtimeSubtitle) { DARABONBA_PTR_SET_VALUE(realtimeSubtitle_, realtimeSubtitle) };
    inline StartCloudNoteRequest& setRealtimeSubtitle(StartCloudNoteRequest::RealtimeSubtitle && realtimeSubtitle) { DARABONBA_PTR_SET_RVALUE(realtimeSubtitle_, realtimeSubtitle) };


    // serviceInspection Field Functions 
    bool hasServiceInspection() const { return this->serviceInspection_ != nullptr;};
    void deleteServiceInspection() { this->serviceInspection_ = nullptr;};
    inline const StartCloudNoteRequest::ServiceInspection & getServiceInspection() const { DARABONBA_PTR_GET_CONST(serviceInspection_, StartCloudNoteRequest::ServiceInspection) };
    inline StartCloudNoteRequest::ServiceInspection getServiceInspection() { DARABONBA_PTR_GET(serviceInspection_, StartCloudNoteRequest::ServiceInspection) };
    inline StartCloudNoteRequest& setServiceInspection(const StartCloudNoteRequest::ServiceInspection & serviceInspection) { DARABONBA_PTR_SET_VALUE(serviceInspection_, serviceInspection) };
    inline StartCloudNoteRequest& setServiceInspection(StartCloudNoteRequest::ServiceInspection && serviceInspection) { DARABONBA_PTR_SET_RVALUE(serviceInspection_, serviceInspection) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline StartCloudNoteRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // storageConfig Field Functions 
    bool hasStorageConfig() const { return this->storageConfig_ != nullptr;};
    void deleteStorageConfig() { this->storageConfig_ = nullptr;};
    inline const StartCloudNoteRequest::StorageConfig & getStorageConfig() const { DARABONBA_PTR_GET_CONST(storageConfig_, StartCloudNoteRequest::StorageConfig) };
    inline StartCloudNoteRequest::StorageConfig getStorageConfig() { DARABONBA_PTR_GET(storageConfig_, StartCloudNoteRequest::StorageConfig) };
    inline StartCloudNoteRequest& setStorageConfig(const StartCloudNoteRequest::StorageConfig & storageConfig) { DARABONBA_PTR_SET_VALUE(storageConfig_, storageConfig) };
    inline StartCloudNoteRequest& setStorageConfig(StartCloudNoteRequest::StorageConfig && storageConfig) { DARABONBA_PTR_SET_RVALUE(storageConfig_, storageConfig) };


    // summarization Field Functions 
    bool hasSummarization() const { return this->summarization_ != nullptr;};
    void deleteSummarization() { this->summarization_ = nullptr;};
    inline const StartCloudNoteRequest::Summarization & getSummarization() const { DARABONBA_PTR_GET_CONST(summarization_, StartCloudNoteRequest::Summarization) };
    inline StartCloudNoteRequest::Summarization getSummarization() { DARABONBA_PTR_GET(summarization_, StartCloudNoteRequest::Summarization) };
    inline StartCloudNoteRequest& setSummarization(const StartCloudNoteRequest::Summarization & summarization) { DARABONBA_PTR_SET_VALUE(summarization_, summarization) };
    inline StartCloudNoteRequest& setSummarization(StartCloudNoteRequest::Summarization && summarization) { DARABONBA_PTR_SET_RVALUE(summarization_, summarization) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartCloudNoteRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // textPolish Field Functions 
    bool hasTextPolish() const { return this->textPolish_ != nullptr;};
    void deleteTextPolish() { this->textPolish_ = nullptr;};
    inline const StartCloudNoteRequest::TextPolish & getTextPolish() const { DARABONBA_PTR_GET_CONST(textPolish_, StartCloudNoteRequest::TextPolish) };
    inline StartCloudNoteRequest::TextPolish getTextPolish() { DARABONBA_PTR_GET(textPolish_, StartCloudNoteRequest::TextPolish) };
    inline StartCloudNoteRequest& setTextPolish(const StartCloudNoteRequest::TextPolish & textPolish) { DARABONBA_PTR_SET_VALUE(textPolish_, textPolish) };
    inline StartCloudNoteRequest& setTextPolish(StartCloudNoteRequest::TextPolish && textPolish) { DARABONBA_PTR_SET_RVALUE(textPolish_, textPolish) };


    // transcription Field Functions 
    bool hasTranscription() const { return this->transcription_ != nullptr;};
    void deleteTranscription() { this->transcription_ = nullptr;};
    inline const StartCloudNoteRequest::Transcription & getTranscription() const { DARABONBA_PTR_GET_CONST(transcription_, StartCloudNoteRequest::Transcription) };
    inline StartCloudNoteRequest::Transcription getTranscription() { DARABONBA_PTR_GET(transcription_, StartCloudNoteRequest::Transcription) };
    inline StartCloudNoteRequest& setTranscription(const StartCloudNoteRequest::Transcription & transcription) { DARABONBA_PTR_SET_VALUE(transcription_, transcription) };
    inline StartCloudNoteRequest& setTranscription(StartCloudNoteRequest::Transcription && transcription) { DARABONBA_PTR_SET_RVALUE(transcription_, transcription) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<StartCloudNoteRequest::AutoChapters> autoChapters_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    shared_ptr<StartCloudNoteRequest::CustomPrompt> customPrompt_ {};
    shared_ptr<vector<string>> languageHints_ {};
    shared_ptr<StartCloudNoteRequest::MeetingAssistance> meetingAssistance_ {};
    shared_ptr<StartCloudNoteRequest::RealtimeSubtitle> realtimeSubtitle_ {};
    shared_ptr<StartCloudNoteRequest::ServiceInspection> serviceInspection_ {};
    shared_ptr<string> sourceLanguage_ {};
    // This parameter is required.
    shared_ptr<StartCloudNoteRequest::StorageConfig> storageConfig_ {};
    shared_ptr<StartCloudNoteRequest::Summarization> summarization_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    shared_ptr<StartCloudNoteRequest::TextPolish> textPolish_ {};
    shared_ptr<StartCloudNoteRequest::Transcription> transcription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
