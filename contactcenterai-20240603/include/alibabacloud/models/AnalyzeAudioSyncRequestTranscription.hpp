// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZEAUDIOSYNCREQUESTTRANSCRIPTION_HPP_
#define ALIBABACLOUD_MODELS_ANALYZEAUDIOSYNCREQUESTTRANSCRIPTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class AnalyzeAudioSyncRequestTranscription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeAudioSyncRequestTranscription& obj) { 
      DARABONBA_PTR_TO_JSON(asrModelCode, asrModelCode_);
      DARABONBA_PTR_TO_JSON(autoSplit, autoSplit_);
      DARABONBA_PTR_TO_JSON(clientChannel, clientChannel_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(serviceChannel, serviceChannel_);
      DARABONBA_PTR_TO_JSON(serviceChannelKeywords, serviceChannelKeywords_);
      DARABONBA_PTR_TO_JSON(vocabularyId, vocabularyId_);
      DARABONBA_PTR_TO_JSON(voiceFileUrl, voiceFileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeAudioSyncRequestTranscription& obj) { 
      DARABONBA_PTR_FROM_JSON(asrModelCode, asrModelCode_);
      DARABONBA_PTR_FROM_JSON(autoSplit, autoSplit_);
      DARABONBA_PTR_FROM_JSON(clientChannel, clientChannel_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(serviceChannel, serviceChannel_);
      DARABONBA_PTR_FROM_JSON(serviceChannelKeywords, serviceChannelKeywords_);
      DARABONBA_PTR_FROM_JSON(vocabularyId, vocabularyId_);
      DARABONBA_PTR_FROM_JSON(voiceFileUrl, voiceFileUrl_);
    };
    AnalyzeAudioSyncRequestTranscription() = default ;
    AnalyzeAudioSyncRequestTranscription(const AnalyzeAudioSyncRequestTranscription &) = default ;
    AnalyzeAudioSyncRequestTranscription(AnalyzeAudioSyncRequestTranscription &&) = default ;
    AnalyzeAudioSyncRequestTranscription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeAudioSyncRequestTranscription() = default ;
    AnalyzeAudioSyncRequestTranscription& operator=(const AnalyzeAudioSyncRequestTranscription &) = default ;
    AnalyzeAudioSyncRequestTranscription& operator=(AnalyzeAudioSyncRequestTranscription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asrModelCode_ != nullptr
        && this->autoSplit_ != nullptr && this->clientChannel_ != nullptr && this->fileName_ != nullptr && this->level_ != nullptr && this->serviceChannel_ != nullptr
        && this->serviceChannelKeywords_ != nullptr && this->vocabularyId_ != nullptr && this->voiceFileUrl_ != nullptr; };
    // asrModelCode Field Functions 
    bool hasAsrModelCode() const { return this->asrModelCode_ != nullptr;};
    void deleteAsrModelCode() { this->asrModelCode_ = nullptr;};
    inline string asrModelCode() const { DARABONBA_PTR_GET_DEFAULT(asrModelCode_, "") };
    inline AnalyzeAudioSyncRequestTranscription& setAsrModelCode(string asrModelCode) { DARABONBA_PTR_SET_VALUE(asrModelCode_, asrModelCode) };


    // autoSplit Field Functions 
    bool hasAutoSplit() const { return this->autoSplit_ != nullptr;};
    void deleteAutoSplit() { this->autoSplit_ = nullptr;};
    inline int32_t autoSplit() const { DARABONBA_PTR_GET_DEFAULT(autoSplit_, 0) };
    inline AnalyzeAudioSyncRequestTranscription& setAutoSplit(int32_t autoSplit) { DARABONBA_PTR_SET_VALUE(autoSplit_, autoSplit) };


    // clientChannel Field Functions 
    bool hasClientChannel() const { return this->clientChannel_ != nullptr;};
    void deleteClientChannel() { this->clientChannel_ = nullptr;};
    inline int32_t clientChannel() const { DARABONBA_PTR_GET_DEFAULT(clientChannel_, 0) };
    inline AnalyzeAudioSyncRequestTranscription& setClientChannel(int32_t clientChannel) { DARABONBA_PTR_SET_VALUE(clientChannel_, clientChannel) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline AnalyzeAudioSyncRequestTranscription& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline AnalyzeAudioSyncRequestTranscription& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // serviceChannel Field Functions 
    bool hasServiceChannel() const { return this->serviceChannel_ != nullptr;};
    void deleteServiceChannel() { this->serviceChannel_ = nullptr;};
    inline int32_t serviceChannel() const { DARABONBA_PTR_GET_DEFAULT(serviceChannel_, 0) };
    inline AnalyzeAudioSyncRequestTranscription& setServiceChannel(int32_t serviceChannel) { DARABONBA_PTR_SET_VALUE(serviceChannel_, serviceChannel) };


    // serviceChannelKeywords Field Functions 
    bool hasServiceChannelKeywords() const { return this->serviceChannelKeywords_ != nullptr;};
    void deleteServiceChannelKeywords() { this->serviceChannelKeywords_ = nullptr;};
    inline const vector<string> & serviceChannelKeywords() const { DARABONBA_PTR_GET_CONST(serviceChannelKeywords_, vector<string>) };
    inline vector<string> serviceChannelKeywords() { DARABONBA_PTR_GET(serviceChannelKeywords_, vector<string>) };
    inline AnalyzeAudioSyncRequestTranscription& setServiceChannelKeywords(const vector<string> & serviceChannelKeywords) { DARABONBA_PTR_SET_VALUE(serviceChannelKeywords_, serviceChannelKeywords) };
    inline AnalyzeAudioSyncRequestTranscription& setServiceChannelKeywords(vector<string> && serviceChannelKeywords) { DARABONBA_PTR_SET_RVALUE(serviceChannelKeywords_, serviceChannelKeywords) };


    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string vocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline AnalyzeAudioSyncRequestTranscription& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


    // voiceFileUrl Field Functions 
    bool hasVoiceFileUrl() const { return this->voiceFileUrl_ != nullptr;};
    void deleteVoiceFileUrl() { this->voiceFileUrl_ = nullptr;};
    inline string voiceFileUrl() const { DARABONBA_PTR_GET_DEFAULT(voiceFileUrl_, "") };
    inline AnalyzeAudioSyncRequestTranscription& setVoiceFileUrl(string voiceFileUrl) { DARABONBA_PTR_SET_VALUE(voiceFileUrl_, voiceFileUrl) };


  protected:
    std::shared_ptr<string> asrModelCode_ = nullptr;
    std::shared_ptr<int32_t> autoSplit_ = nullptr;
    std::shared_ptr<int32_t> clientChannel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<int32_t> serviceChannel_ = nullptr;
    std::shared_ptr<vector<string>> serviceChannelKeywords_ = nullptr;
    std::shared_ptr<string> vocabularyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> voiceFileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
