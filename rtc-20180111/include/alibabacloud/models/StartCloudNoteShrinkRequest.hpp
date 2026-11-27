// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDNOTESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDNOTESHRINKREQUEST_HPP_
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
  class StartCloudNoteShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudNoteShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AutoChapters, autoChaptersShrink_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(CustomPrompt, customPromptShrink_);
      DARABONBA_PTR_TO_JSON(LanguageHints, languageHints_);
      DARABONBA_PTR_TO_JSON(MeetingAssistance, meetingAssistanceShrink_);
      DARABONBA_PTR_TO_JSON(RealtimeSubtitle, realtimeSubtitleShrink_);
      DARABONBA_PTR_TO_JSON(ServiceInspection, serviceInspectionShrink_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(StorageConfig, storageConfig_);
      DARABONBA_PTR_TO_JSON(Summarization, summarizationShrink_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TextPolish, textPolishShrink_);
      DARABONBA_PTR_TO_JSON(Transcription, transcriptionShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudNoteShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AutoChapters, autoChaptersShrink_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(CustomPrompt, customPromptShrink_);
      DARABONBA_PTR_FROM_JSON(LanguageHints, languageHints_);
      DARABONBA_PTR_FROM_JSON(MeetingAssistance, meetingAssistanceShrink_);
      DARABONBA_PTR_FROM_JSON(RealtimeSubtitle, realtimeSubtitleShrink_);
      DARABONBA_PTR_FROM_JSON(ServiceInspection, serviceInspectionShrink_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(StorageConfig, storageConfig_);
      DARABONBA_PTR_FROM_JSON(Summarization, summarizationShrink_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TextPolish, textPolishShrink_);
      DARABONBA_PTR_FROM_JSON(Transcription, transcriptionShrink_);
    };
    StartCloudNoteShrinkRequest() = default ;
    StartCloudNoteShrinkRequest(const StartCloudNoteShrinkRequest &) = default ;
    StartCloudNoteShrinkRequest(StartCloudNoteShrinkRequest &&) = default ;
    StartCloudNoteShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudNoteShrinkRequest() = default ;
    StartCloudNoteShrinkRequest& operator=(const StartCloudNoteShrinkRequest &) = default ;
    StartCloudNoteShrinkRequest& operator=(StartCloudNoteShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The AccessKey.
      // 
      // This parameter is required.
      shared_ptr<string> accessKey_ {};
      // The bucket name.
      // 
      // This parameter is required.
      shared_ptr<string> bucket_ {};
      // The storage region.
      // 
      // | Region | AliYun OSS |
      // |--------|------------|
      // | 0 | CN_Hangzhou |
      // | 1 | CN_Shanghai |
      // | 2 | CN_Qingdao |
      // | 3 | CN_Beijing |
      // | 4 | CN_Zhangjiakou |
      // | 5 | CN_Huhehaote |
      // | 6 | CN_Shenzhen |
      // | 7 | CN_Hongkong |
      // | 8 | US_West_1 |
      // | 9 | US_East_1 |
      // | 10 | AP_Southeast_1 |
      // | 11 | AP_Southeast_2 |
      // | 12 | AP_Southeast_3 |
      // | 13 | AP_Southeast_5 |
      // | 14 | AP_Northeast_1 |
      // | 15 | AP_South_1 (Offline. Do not use.) |
      // | 16 | EU_Central_1 |
      // | 17 | EU_West_1 |
      // | 18 | EU_East_1(ME_East_1) |
      // | 19 | AP_Southeast_6 |
      // | 20 | CN_Heyuan |
      // | 21 | CN_Guangzhou |
      // | 22 | CN_Chengdu |
      // | 23 | CN_Nanjing |
      // | 24 | CN_Fuzhou |
      // | 25 | CN_Wulanchabu |
      // | 26 | AP_Northeast_2 |
      // | 27 | AP_Southeast_7 |
      // 
      // This parameter is required.
      shared_ptr<int32_t> region_ {};
      // The AccessKey secret.
      // 
      // This parameter is required.
      shared_ptr<string> secretKey_ {};
      // The storage platform. Valid values:
      // 
      // | vendor | Object storage service | Remarks |
      // |--------|---------|---------|
      // | 1 | AliYun OSS | Alibaba Cloud |
      // 
      // This parameter is required.
      shared_ptr<int32_t> vendor_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->autoChaptersShrink_ == nullptr && this->channelId_ == nullptr && this->customPromptShrink_ == nullptr && this->languageHints_ == nullptr && this->meetingAssistanceShrink_ == nullptr
        && this->realtimeSubtitleShrink_ == nullptr && this->serviceInspectionShrink_ == nullptr && this->sourceLanguage_ == nullptr && this->storageConfig_ == nullptr && this->summarizationShrink_ == nullptr
        && this->taskId_ == nullptr && this->textPolishShrink_ == nullptr && this->transcriptionShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartCloudNoteShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // autoChaptersShrink Field Functions 
    bool hasAutoChaptersShrink() const { return this->autoChaptersShrink_ != nullptr;};
    void deleteAutoChaptersShrink() { this->autoChaptersShrink_ = nullptr;};
    inline string getAutoChaptersShrink() const { DARABONBA_PTR_GET_DEFAULT(autoChaptersShrink_, "") };
    inline StartCloudNoteShrinkRequest& setAutoChaptersShrink(string autoChaptersShrink) { DARABONBA_PTR_SET_VALUE(autoChaptersShrink_, autoChaptersShrink) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartCloudNoteShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // customPromptShrink Field Functions 
    bool hasCustomPromptShrink() const { return this->customPromptShrink_ != nullptr;};
    void deleteCustomPromptShrink() { this->customPromptShrink_ = nullptr;};
    inline string getCustomPromptShrink() const { DARABONBA_PTR_GET_DEFAULT(customPromptShrink_, "") };
    inline StartCloudNoteShrinkRequest& setCustomPromptShrink(string customPromptShrink) { DARABONBA_PTR_SET_VALUE(customPromptShrink_, customPromptShrink) };


    // languageHints Field Functions 
    bool hasLanguageHints() const { return this->languageHints_ != nullptr;};
    void deleteLanguageHints() { this->languageHints_ = nullptr;};
    inline const vector<string> & getLanguageHints() const { DARABONBA_PTR_GET_CONST(languageHints_, vector<string>) };
    inline vector<string> getLanguageHints() { DARABONBA_PTR_GET(languageHints_, vector<string>) };
    inline StartCloudNoteShrinkRequest& setLanguageHints(const vector<string> & languageHints) { DARABONBA_PTR_SET_VALUE(languageHints_, languageHints) };
    inline StartCloudNoteShrinkRequest& setLanguageHints(vector<string> && languageHints) { DARABONBA_PTR_SET_RVALUE(languageHints_, languageHints) };


    // meetingAssistanceShrink Field Functions 
    bool hasMeetingAssistanceShrink() const { return this->meetingAssistanceShrink_ != nullptr;};
    void deleteMeetingAssistanceShrink() { this->meetingAssistanceShrink_ = nullptr;};
    inline string getMeetingAssistanceShrink() const { DARABONBA_PTR_GET_DEFAULT(meetingAssistanceShrink_, "") };
    inline StartCloudNoteShrinkRequest& setMeetingAssistanceShrink(string meetingAssistanceShrink) { DARABONBA_PTR_SET_VALUE(meetingAssistanceShrink_, meetingAssistanceShrink) };


    // realtimeSubtitleShrink Field Functions 
    bool hasRealtimeSubtitleShrink() const { return this->realtimeSubtitleShrink_ != nullptr;};
    void deleteRealtimeSubtitleShrink() { this->realtimeSubtitleShrink_ = nullptr;};
    inline string getRealtimeSubtitleShrink() const { DARABONBA_PTR_GET_DEFAULT(realtimeSubtitleShrink_, "") };
    inline StartCloudNoteShrinkRequest& setRealtimeSubtitleShrink(string realtimeSubtitleShrink) { DARABONBA_PTR_SET_VALUE(realtimeSubtitleShrink_, realtimeSubtitleShrink) };


    // serviceInspectionShrink Field Functions 
    bool hasServiceInspectionShrink() const { return this->serviceInspectionShrink_ != nullptr;};
    void deleteServiceInspectionShrink() { this->serviceInspectionShrink_ = nullptr;};
    inline string getServiceInspectionShrink() const { DARABONBA_PTR_GET_DEFAULT(serviceInspectionShrink_, "") };
    inline StartCloudNoteShrinkRequest& setServiceInspectionShrink(string serviceInspectionShrink) { DARABONBA_PTR_SET_VALUE(serviceInspectionShrink_, serviceInspectionShrink) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline StartCloudNoteShrinkRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // storageConfig Field Functions 
    bool hasStorageConfig() const { return this->storageConfig_ != nullptr;};
    void deleteStorageConfig() { this->storageConfig_ = nullptr;};
    inline const StartCloudNoteShrinkRequest::StorageConfig & getStorageConfig() const { DARABONBA_PTR_GET_CONST(storageConfig_, StartCloudNoteShrinkRequest::StorageConfig) };
    inline StartCloudNoteShrinkRequest::StorageConfig getStorageConfig() { DARABONBA_PTR_GET(storageConfig_, StartCloudNoteShrinkRequest::StorageConfig) };
    inline StartCloudNoteShrinkRequest& setStorageConfig(const StartCloudNoteShrinkRequest::StorageConfig & storageConfig) { DARABONBA_PTR_SET_VALUE(storageConfig_, storageConfig) };
    inline StartCloudNoteShrinkRequest& setStorageConfig(StartCloudNoteShrinkRequest::StorageConfig && storageConfig) { DARABONBA_PTR_SET_RVALUE(storageConfig_, storageConfig) };


    // summarizationShrink Field Functions 
    bool hasSummarizationShrink() const { return this->summarizationShrink_ != nullptr;};
    void deleteSummarizationShrink() { this->summarizationShrink_ = nullptr;};
    inline string getSummarizationShrink() const { DARABONBA_PTR_GET_DEFAULT(summarizationShrink_, "") };
    inline StartCloudNoteShrinkRequest& setSummarizationShrink(string summarizationShrink) { DARABONBA_PTR_SET_VALUE(summarizationShrink_, summarizationShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartCloudNoteShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // textPolishShrink Field Functions 
    bool hasTextPolishShrink() const { return this->textPolishShrink_ != nullptr;};
    void deleteTextPolishShrink() { this->textPolishShrink_ = nullptr;};
    inline string getTextPolishShrink() const { DARABONBA_PTR_GET_DEFAULT(textPolishShrink_, "") };
    inline StartCloudNoteShrinkRequest& setTextPolishShrink(string textPolishShrink) { DARABONBA_PTR_SET_VALUE(textPolishShrink_, textPolishShrink) };


    // transcriptionShrink Field Functions 
    bool hasTranscriptionShrink() const { return this->transcriptionShrink_ != nullptr;};
    void deleteTranscriptionShrink() { this->transcriptionShrink_ = nullptr;};
    inline string getTranscriptionShrink() const { DARABONBA_PTR_GET_DEFAULT(transcriptionShrink_, "") };
    inline StartCloudNoteShrinkRequest& setTranscriptionShrink(string transcriptionShrink) { DARABONBA_PTR_SET_VALUE(transcriptionShrink_, transcriptionShrink) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The auto chapters feature. When enabled, chapter titles and summaries are generated.
    shared_ptr<string> autoChaptersShrink_ {};
    // The channel ID.
    // 
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // The custom prompt control parameter object.
    shared_ptr<string> customPromptShrink_ {};
    // **[Deprecated]** This parameter is deprecated. You do not need to specify it.
    shared_ptr<vector<string>> languageHints_ {};
    // The intelligent meeting minutes feature. When enabled, keywords, key content, and to-do items are generated.
    shared_ptr<string> meetingAssistanceShrink_ {};
    // The real-time subtitles.
    shared_ptr<string> realtimeSubtitleShrink_ {};
    // The service inspection feature.
    shared_ptr<string> serviceInspectionShrink_ {};
    // The source language model used by the channel. Valid values:
    // - cn: Chinese
    // - yue: Cantonese
    // - en: English
    // - multilingual: Multilingual
    // - ja: Japanese
    // - ko: Korean
    // - de: German
    // - fr: French
    // - ru: Russian
    // - es: Spanish
    // - vi: Vietnamese
    // - it: Italian
    // - sv: Swedish
    // - cs: Czech
    // - pl: Polish
    // - th: Thai
    // - fi: Finnish
    // - hi: Hindi
    // - id: Indonesian
    // - pt: Portuguese
    // - ar: Arabic
    // - fil: Filipino
    // - ms: Malay
    // - tr: Turkish
    // - hu: Hungarian
    // - lo: Lao
    // - pt-br: Portuguese (Brazil)
    // - es-ar: Spanish (Argentina)
    // - es-mx: Spanish (Mexico)
    shared_ptr<string> sourceLanguage_ {};
    // The storage configuration.
    // 
    // This parameter is required.
    shared_ptr<StartCloudNoteShrinkRequest::StorageConfig> storageConfig_ {};
    // The summarization feature. When enabled, full-text summaries and speaker summaries are generated.
    shared_ptr<string> summarizationShrink_ {};
    // The task ID.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // The text polishing feature.
    shared_ptr<string> textPolishShrink_ {};
    // The transcription feature. Enabled by default.
    shared_ptr<string> transcriptionShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
