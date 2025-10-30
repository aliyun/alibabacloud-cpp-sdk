// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETASRDETAILRESPONSEBODYDATASENTENCES_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETASRDETAILRESPONSEBODYDATASENTENCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class GetSecretAsrDetailResponseBodyDataSentences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretAsrDetailResponseBodyDataSentences& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(SilenceDuration, silenceDuration_);
      DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretAsrDetailResponseBodyDataSentences& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(SilenceDuration, silenceDuration_);
      DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    GetSecretAsrDetailResponseBodyDataSentences() = default ;
    GetSecretAsrDetailResponseBodyDataSentences(const GetSecretAsrDetailResponseBodyDataSentences &) = default ;
    GetSecretAsrDetailResponseBodyDataSentences(GetSecretAsrDetailResponseBodyDataSentences &&) = default ;
    GetSecretAsrDetailResponseBodyDataSentences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretAsrDetailResponseBodyDataSentences() = default ;
    GetSecretAsrDetailResponseBodyDataSentences& operator=(const GetSecretAsrDetailResponseBodyDataSentences &) = default ;
    GetSecretAsrDetailResponseBodyDataSentences& operator=(GetSecretAsrDetailResponseBodyDataSentences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && return this->channelId_ == nullptr && return this->emotionValue_ == nullptr && return this->endTime_ == nullptr && return this->silenceDuration_ == nullptr && return this->speechRate_ == nullptr
        && return this->text_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetSecretAsrDetailResponseBodyDataSentences& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline int32_t channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, 0) };
    inline GetSecretAsrDetailResponseBodyDataSentences& setChannelId(int32_t channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // emotionValue Field Functions 
    bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
    void deleteEmotionValue() { this->emotionValue_ = nullptr;};
    inline string emotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, "") };
    inline GetSecretAsrDetailResponseBodyDataSentences& setEmotionValue(string emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetSecretAsrDetailResponseBodyDataSentences& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // silenceDuration Field Functions 
    bool hasSilenceDuration() const { return this->silenceDuration_ != nullptr;};
    void deleteSilenceDuration() { this->silenceDuration_ = nullptr;};
    inline int64_t silenceDuration() const { DARABONBA_PTR_GET_DEFAULT(silenceDuration_, 0L) };
    inline GetSecretAsrDetailResponseBodyDataSentences& setSilenceDuration(int64_t silenceDuration) { DARABONBA_PTR_SET_VALUE(silenceDuration_, silenceDuration) };


    // speechRate Field Functions 
    bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
    void deleteSpeechRate() { this->speechRate_ = nullptr;};
    inline int32_t speechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
    inline GetSecretAsrDetailResponseBodyDataSentences& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetSecretAsrDetailResponseBodyDataSentences& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // The start time offset of the sentence. Unit: milliseconds.
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    // The ID of the audio track to which the sentence belongs.
    std::shared_ptr<int32_t> channelId_ = nullptr;
    // The emotion value. Value range: 1 to 10. The higher the value, the stronger the emotion.
    std::shared_ptr<string> emotionValue_ = nullptr;
    // The end time offset of the sentence. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The silence duration between the current sentence and the previous sentence. Unit: seconds.
    std::shared_ptr<int64_t> silenceDuration_ = nullptr;
    // The average speech rate of the sentence. Unit: number of words per minute.
    std::shared_ptr<int32_t> speechRate_ = nullptr;
    // The recognition result of the sentence.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
