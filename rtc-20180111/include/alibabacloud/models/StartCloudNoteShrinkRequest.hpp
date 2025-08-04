// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDNOTESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDNOTESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartCloudNoteShrinkRequestStorageConfig.hpp>
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
    virtual bool empty() const override { this->appId_ != nullptr
        && this->autoChaptersShrink_ != nullptr && this->channelId_ != nullptr && this->customPromptShrink_ != nullptr && this->languageHints_ != nullptr && this->meetingAssistanceShrink_ != nullptr
        && this->realtimeSubtitleShrink_ != nullptr && this->serviceInspectionShrink_ != nullptr && this->sourceLanguage_ != nullptr && this->storageConfig_ != nullptr && this->summarizationShrink_ != nullptr
        && this->taskId_ != nullptr && this->textPolishShrink_ != nullptr && this->transcriptionShrink_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartCloudNoteShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // autoChaptersShrink Field Functions 
    bool hasAutoChaptersShrink() const { return this->autoChaptersShrink_ != nullptr;};
    void deleteAutoChaptersShrink() { this->autoChaptersShrink_ = nullptr;};
    inline string autoChaptersShrink() const { DARABONBA_PTR_GET_DEFAULT(autoChaptersShrink_, "") };
    inline StartCloudNoteShrinkRequest& setAutoChaptersShrink(string autoChaptersShrink) { DARABONBA_PTR_SET_VALUE(autoChaptersShrink_, autoChaptersShrink) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartCloudNoteShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // customPromptShrink Field Functions 
    bool hasCustomPromptShrink() const { return this->customPromptShrink_ != nullptr;};
    void deleteCustomPromptShrink() { this->customPromptShrink_ = nullptr;};
    inline string customPromptShrink() const { DARABONBA_PTR_GET_DEFAULT(customPromptShrink_, "") };
    inline StartCloudNoteShrinkRequest& setCustomPromptShrink(string customPromptShrink) { DARABONBA_PTR_SET_VALUE(customPromptShrink_, customPromptShrink) };


    // languageHints Field Functions 
    bool hasLanguageHints() const { return this->languageHints_ != nullptr;};
    void deleteLanguageHints() { this->languageHints_ = nullptr;};
    inline const vector<string> & languageHints() const { DARABONBA_PTR_GET_CONST(languageHints_, vector<string>) };
    inline vector<string> languageHints() { DARABONBA_PTR_GET(languageHints_, vector<string>) };
    inline StartCloudNoteShrinkRequest& setLanguageHints(const vector<string> & languageHints) { DARABONBA_PTR_SET_VALUE(languageHints_, languageHints) };
    inline StartCloudNoteShrinkRequest& setLanguageHints(vector<string> && languageHints) { DARABONBA_PTR_SET_RVALUE(languageHints_, languageHints) };


    // meetingAssistanceShrink Field Functions 
    bool hasMeetingAssistanceShrink() const { return this->meetingAssistanceShrink_ != nullptr;};
    void deleteMeetingAssistanceShrink() { this->meetingAssistanceShrink_ = nullptr;};
    inline string meetingAssistanceShrink() const { DARABONBA_PTR_GET_DEFAULT(meetingAssistanceShrink_, "") };
    inline StartCloudNoteShrinkRequest& setMeetingAssistanceShrink(string meetingAssistanceShrink) { DARABONBA_PTR_SET_VALUE(meetingAssistanceShrink_, meetingAssistanceShrink) };


    // realtimeSubtitleShrink Field Functions 
    bool hasRealtimeSubtitleShrink() const { return this->realtimeSubtitleShrink_ != nullptr;};
    void deleteRealtimeSubtitleShrink() { this->realtimeSubtitleShrink_ = nullptr;};
    inline string realtimeSubtitleShrink() const { DARABONBA_PTR_GET_DEFAULT(realtimeSubtitleShrink_, "") };
    inline StartCloudNoteShrinkRequest& setRealtimeSubtitleShrink(string realtimeSubtitleShrink) { DARABONBA_PTR_SET_VALUE(realtimeSubtitleShrink_, realtimeSubtitleShrink) };


    // serviceInspectionShrink Field Functions 
    bool hasServiceInspectionShrink() const { return this->serviceInspectionShrink_ != nullptr;};
    void deleteServiceInspectionShrink() { this->serviceInspectionShrink_ = nullptr;};
    inline string serviceInspectionShrink() const { DARABONBA_PTR_GET_DEFAULT(serviceInspectionShrink_, "") };
    inline StartCloudNoteShrinkRequest& setServiceInspectionShrink(string serviceInspectionShrink) { DARABONBA_PTR_SET_VALUE(serviceInspectionShrink_, serviceInspectionShrink) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline StartCloudNoteShrinkRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // storageConfig Field Functions 
    bool hasStorageConfig() const { return this->storageConfig_ != nullptr;};
    void deleteStorageConfig() { this->storageConfig_ = nullptr;};
    inline const StartCloudNoteShrinkRequestStorageConfig & storageConfig() const { DARABONBA_PTR_GET_CONST(storageConfig_, StartCloudNoteShrinkRequestStorageConfig) };
    inline StartCloudNoteShrinkRequestStorageConfig storageConfig() { DARABONBA_PTR_GET(storageConfig_, StartCloudNoteShrinkRequestStorageConfig) };
    inline StartCloudNoteShrinkRequest& setStorageConfig(const StartCloudNoteShrinkRequestStorageConfig & storageConfig) { DARABONBA_PTR_SET_VALUE(storageConfig_, storageConfig) };
    inline StartCloudNoteShrinkRequest& setStorageConfig(StartCloudNoteShrinkRequestStorageConfig && storageConfig) { DARABONBA_PTR_SET_RVALUE(storageConfig_, storageConfig) };


    // summarizationShrink Field Functions 
    bool hasSummarizationShrink() const { return this->summarizationShrink_ != nullptr;};
    void deleteSummarizationShrink() { this->summarizationShrink_ = nullptr;};
    inline string summarizationShrink() const { DARABONBA_PTR_GET_DEFAULT(summarizationShrink_, "") };
    inline StartCloudNoteShrinkRequest& setSummarizationShrink(string summarizationShrink) { DARABONBA_PTR_SET_VALUE(summarizationShrink_, summarizationShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartCloudNoteShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // textPolishShrink Field Functions 
    bool hasTextPolishShrink() const { return this->textPolishShrink_ != nullptr;};
    void deleteTextPolishShrink() { this->textPolishShrink_ = nullptr;};
    inline string textPolishShrink() const { DARABONBA_PTR_GET_DEFAULT(textPolishShrink_, "") };
    inline StartCloudNoteShrinkRequest& setTextPolishShrink(string textPolishShrink) { DARABONBA_PTR_SET_VALUE(textPolishShrink_, textPolishShrink) };


    // transcriptionShrink Field Functions 
    bool hasTranscriptionShrink() const { return this->transcriptionShrink_ != nullptr;};
    void deleteTranscriptionShrink() { this->transcriptionShrink_ = nullptr;};
    inline string transcriptionShrink() const { DARABONBA_PTR_GET_DEFAULT(transcriptionShrink_, "") };
    inline StartCloudNoteShrinkRequest& setTranscriptionShrink(string transcriptionShrink) { DARABONBA_PTR_SET_VALUE(transcriptionShrink_, transcriptionShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> autoChaptersShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> customPromptShrink_ = nullptr;
    std::shared_ptr<vector<string>> languageHints_ = nullptr;
    std::shared_ptr<string> meetingAssistanceShrink_ = nullptr;
    std::shared_ptr<string> realtimeSubtitleShrink_ = nullptr;
    std::shared_ptr<string> serviceInspectionShrink_ = nullptr;
    std::shared_ptr<string> sourceLanguage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<StartCloudNoteShrinkRequestStorageConfig> storageConfig_ = nullptr;
    std::shared_ptr<string> summarizationShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> textPolishShrink_ = nullptr;
    std::shared_ptr<string> transcriptionShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
