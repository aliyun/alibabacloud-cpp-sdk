// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartCloudNoteRequestAutoChapters.hpp>
#include <alibabacloud/models/StartCloudNoteRequestCustomPrompt.hpp>
#include <vector>
#include <alibabacloud/models/StartCloudNoteRequestMeetingAssistance.hpp>
#include <alibabacloud/models/StartCloudNoteRequestRealtimeSubtitle.hpp>
#include <alibabacloud/models/StartCloudNoteRequestServiceInspection.hpp>
#include <alibabacloud/models/StartCloudNoteRequestStorageConfig.hpp>
#include <alibabacloud/models/StartCloudNoteRequestSummarization.hpp>
#include <alibabacloud/models/StartCloudNoteRequestTextPolish.hpp>
#include <alibabacloud/models/StartCloudNoteRequestTranscription.hpp>
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
    virtual bool empty() const override { this->appId_ != nullptr
        && this->autoChapters_ != nullptr && this->channelId_ != nullptr && this->customPrompt_ != nullptr && this->languageHints_ != nullptr && this->meetingAssistance_ != nullptr
        && this->realtimeSubtitle_ != nullptr && this->serviceInspection_ != nullptr && this->sourceLanguage_ != nullptr && this->storageConfig_ != nullptr && this->summarization_ != nullptr
        && this->taskId_ != nullptr && this->textPolish_ != nullptr && this->transcription_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartCloudNoteRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // autoChapters Field Functions 
    bool hasAutoChapters() const { return this->autoChapters_ != nullptr;};
    void deleteAutoChapters() { this->autoChapters_ = nullptr;};
    inline const StartCloudNoteRequestAutoChapters & autoChapters() const { DARABONBA_PTR_GET_CONST(autoChapters_, StartCloudNoteRequestAutoChapters) };
    inline StartCloudNoteRequestAutoChapters autoChapters() { DARABONBA_PTR_GET(autoChapters_, StartCloudNoteRequestAutoChapters) };
    inline StartCloudNoteRequest& setAutoChapters(const StartCloudNoteRequestAutoChapters & autoChapters) { DARABONBA_PTR_SET_VALUE(autoChapters_, autoChapters) };
    inline StartCloudNoteRequest& setAutoChapters(StartCloudNoteRequestAutoChapters && autoChapters) { DARABONBA_PTR_SET_RVALUE(autoChapters_, autoChapters) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartCloudNoteRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline const StartCloudNoteRequestCustomPrompt & customPrompt() const { DARABONBA_PTR_GET_CONST(customPrompt_, StartCloudNoteRequestCustomPrompt) };
    inline StartCloudNoteRequestCustomPrompt customPrompt() { DARABONBA_PTR_GET(customPrompt_, StartCloudNoteRequestCustomPrompt) };
    inline StartCloudNoteRequest& setCustomPrompt(const StartCloudNoteRequestCustomPrompt & customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };
    inline StartCloudNoteRequest& setCustomPrompt(StartCloudNoteRequestCustomPrompt && customPrompt) { DARABONBA_PTR_SET_RVALUE(customPrompt_, customPrompt) };


    // languageHints Field Functions 
    bool hasLanguageHints() const { return this->languageHints_ != nullptr;};
    void deleteLanguageHints() { this->languageHints_ = nullptr;};
    inline const vector<string> & languageHints() const { DARABONBA_PTR_GET_CONST(languageHints_, vector<string>) };
    inline vector<string> languageHints() { DARABONBA_PTR_GET(languageHints_, vector<string>) };
    inline StartCloudNoteRequest& setLanguageHints(const vector<string> & languageHints) { DARABONBA_PTR_SET_VALUE(languageHints_, languageHints) };
    inline StartCloudNoteRequest& setLanguageHints(vector<string> && languageHints) { DARABONBA_PTR_SET_RVALUE(languageHints_, languageHints) };


    // meetingAssistance Field Functions 
    bool hasMeetingAssistance() const { return this->meetingAssistance_ != nullptr;};
    void deleteMeetingAssistance() { this->meetingAssistance_ = nullptr;};
    inline const StartCloudNoteRequestMeetingAssistance & meetingAssistance() const { DARABONBA_PTR_GET_CONST(meetingAssistance_, StartCloudNoteRequestMeetingAssistance) };
    inline StartCloudNoteRequestMeetingAssistance meetingAssistance() { DARABONBA_PTR_GET(meetingAssistance_, StartCloudNoteRequestMeetingAssistance) };
    inline StartCloudNoteRequest& setMeetingAssistance(const StartCloudNoteRequestMeetingAssistance & meetingAssistance) { DARABONBA_PTR_SET_VALUE(meetingAssistance_, meetingAssistance) };
    inline StartCloudNoteRequest& setMeetingAssistance(StartCloudNoteRequestMeetingAssistance && meetingAssistance) { DARABONBA_PTR_SET_RVALUE(meetingAssistance_, meetingAssistance) };


    // realtimeSubtitle Field Functions 
    bool hasRealtimeSubtitle() const { return this->realtimeSubtitle_ != nullptr;};
    void deleteRealtimeSubtitle() { this->realtimeSubtitle_ = nullptr;};
    inline const StartCloudNoteRequestRealtimeSubtitle & realtimeSubtitle() const { DARABONBA_PTR_GET_CONST(realtimeSubtitle_, StartCloudNoteRequestRealtimeSubtitle) };
    inline StartCloudNoteRequestRealtimeSubtitle realtimeSubtitle() { DARABONBA_PTR_GET(realtimeSubtitle_, StartCloudNoteRequestRealtimeSubtitle) };
    inline StartCloudNoteRequest& setRealtimeSubtitle(const StartCloudNoteRequestRealtimeSubtitle & realtimeSubtitle) { DARABONBA_PTR_SET_VALUE(realtimeSubtitle_, realtimeSubtitle) };
    inline StartCloudNoteRequest& setRealtimeSubtitle(StartCloudNoteRequestRealtimeSubtitle && realtimeSubtitle) { DARABONBA_PTR_SET_RVALUE(realtimeSubtitle_, realtimeSubtitle) };


    // serviceInspection Field Functions 
    bool hasServiceInspection() const { return this->serviceInspection_ != nullptr;};
    void deleteServiceInspection() { this->serviceInspection_ = nullptr;};
    inline const StartCloudNoteRequestServiceInspection & serviceInspection() const { DARABONBA_PTR_GET_CONST(serviceInspection_, StartCloudNoteRequestServiceInspection) };
    inline StartCloudNoteRequestServiceInspection serviceInspection() { DARABONBA_PTR_GET(serviceInspection_, StartCloudNoteRequestServiceInspection) };
    inline StartCloudNoteRequest& setServiceInspection(const StartCloudNoteRequestServiceInspection & serviceInspection) { DARABONBA_PTR_SET_VALUE(serviceInspection_, serviceInspection) };
    inline StartCloudNoteRequest& setServiceInspection(StartCloudNoteRequestServiceInspection && serviceInspection) { DARABONBA_PTR_SET_RVALUE(serviceInspection_, serviceInspection) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline StartCloudNoteRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // storageConfig Field Functions 
    bool hasStorageConfig() const { return this->storageConfig_ != nullptr;};
    void deleteStorageConfig() { this->storageConfig_ = nullptr;};
    inline const StartCloudNoteRequestStorageConfig & storageConfig() const { DARABONBA_PTR_GET_CONST(storageConfig_, StartCloudNoteRequestStorageConfig) };
    inline StartCloudNoteRequestStorageConfig storageConfig() { DARABONBA_PTR_GET(storageConfig_, StartCloudNoteRequestStorageConfig) };
    inline StartCloudNoteRequest& setStorageConfig(const StartCloudNoteRequestStorageConfig & storageConfig) { DARABONBA_PTR_SET_VALUE(storageConfig_, storageConfig) };
    inline StartCloudNoteRequest& setStorageConfig(StartCloudNoteRequestStorageConfig && storageConfig) { DARABONBA_PTR_SET_RVALUE(storageConfig_, storageConfig) };


    // summarization Field Functions 
    bool hasSummarization() const { return this->summarization_ != nullptr;};
    void deleteSummarization() { this->summarization_ = nullptr;};
    inline const StartCloudNoteRequestSummarization & summarization() const { DARABONBA_PTR_GET_CONST(summarization_, StartCloudNoteRequestSummarization) };
    inline StartCloudNoteRequestSummarization summarization() { DARABONBA_PTR_GET(summarization_, StartCloudNoteRequestSummarization) };
    inline StartCloudNoteRequest& setSummarization(const StartCloudNoteRequestSummarization & summarization) { DARABONBA_PTR_SET_VALUE(summarization_, summarization) };
    inline StartCloudNoteRequest& setSummarization(StartCloudNoteRequestSummarization && summarization) { DARABONBA_PTR_SET_RVALUE(summarization_, summarization) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartCloudNoteRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // textPolish Field Functions 
    bool hasTextPolish() const { return this->textPolish_ != nullptr;};
    void deleteTextPolish() { this->textPolish_ = nullptr;};
    inline const StartCloudNoteRequestTextPolish & textPolish() const { DARABONBA_PTR_GET_CONST(textPolish_, StartCloudNoteRequestTextPolish) };
    inline StartCloudNoteRequestTextPolish textPolish() { DARABONBA_PTR_GET(textPolish_, StartCloudNoteRequestTextPolish) };
    inline StartCloudNoteRequest& setTextPolish(const StartCloudNoteRequestTextPolish & textPolish) { DARABONBA_PTR_SET_VALUE(textPolish_, textPolish) };
    inline StartCloudNoteRequest& setTextPolish(StartCloudNoteRequestTextPolish && textPolish) { DARABONBA_PTR_SET_RVALUE(textPolish_, textPolish) };


    // transcription Field Functions 
    bool hasTranscription() const { return this->transcription_ != nullptr;};
    void deleteTranscription() { this->transcription_ = nullptr;};
    inline const StartCloudNoteRequestTranscription & transcription() const { DARABONBA_PTR_GET_CONST(transcription_, StartCloudNoteRequestTranscription) };
    inline StartCloudNoteRequestTranscription transcription() { DARABONBA_PTR_GET(transcription_, StartCloudNoteRequestTranscription) };
    inline StartCloudNoteRequest& setTranscription(const StartCloudNoteRequestTranscription & transcription) { DARABONBA_PTR_SET_VALUE(transcription_, transcription) };
    inline StartCloudNoteRequest& setTranscription(StartCloudNoteRequestTranscription && transcription) { DARABONBA_PTR_SET_RVALUE(transcription_, transcription) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<StartCloudNoteRequestAutoChapters> autoChapters_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<StartCloudNoteRequestCustomPrompt> customPrompt_ = nullptr;
    std::shared_ptr<vector<string>> languageHints_ = nullptr;
    std::shared_ptr<StartCloudNoteRequestMeetingAssistance> meetingAssistance_ = nullptr;
    std::shared_ptr<StartCloudNoteRequestRealtimeSubtitle> realtimeSubtitle_ = nullptr;
    std::shared_ptr<StartCloudNoteRequestServiceInspection> serviceInspection_ = nullptr;
    std::shared_ptr<string> sourceLanguage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<StartCloudNoteRequestStorageConfig> storageConfig_ = nullptr;
    std::shared_ptr<StartCloudNoteRequestSummarization> summarization_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<StartCloudNoteRequestTextPolish> textPolish_ = nullptr;
    std::shared_ptr<StartCloudNoteRequestTranscription> transcription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
