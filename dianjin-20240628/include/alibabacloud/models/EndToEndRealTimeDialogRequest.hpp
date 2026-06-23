// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENDTOENDREALTIMEDIALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENDTOENDREALTIMEDIALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class EndToEndRealTimeDialogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EndToEndRealTimeDialogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(asrModelId, asrModelId_);
      DARABONBA_PTR_TO_JSON(inputFormat, inputFormat_);
      DARABONBA_PTR_TO_JSON(outputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(pitchRate, pitchRate_);
      DARABONBA_PTR_TO_JSON(sampleRate, sampleRate_);
      DARABONBA_PTR_TO_JSON(speechRate, speechRate_);
      DARABONBA_PTR_TO_JSON(ttsModelId, ttsModelId_);
      DARABONBA_PTR_TO_JSON(voiceCode, voiceCode_);
      DARABONBA_PTR_TO_JSON(volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, EndToEndRealTimeDialogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(asrModelId, asrModelId_);
      DARABONBA_PTR_FROM_JSON(inputFormat, inputFormat_);
      DARABONBA_PTR_FROM_JSON(outputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(pitchRate, pitchRate_);
      DARABONBA_PTR_FROM_JSON(sampleRate, sampleRate_);
      DARABONBA_PTR_FROM_JSON(speechRate, speechRate_);
      DARABONBA_PTR_FROM_JSON(ttsModelId, ttsModelId_);
      DARABONBA_PTR_FROM_JSON(voiceCode, voiceCode_);
      DARABONBA_PTR_FROM_JSON(volume, volume_);
    };
    EndToEndRealTimeDialogRequest() = default ;
    EndToEndRealTimeDialogRequest(const EndToEndRealTimeDialogRequest &) = default ;
    EndToEndRealTimeDialogRequest(EndToEndRealTimeDialogRequest &&) = default ;
    EndToEndRealTimeDialogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EndToEndRealTimeDialogRequest() = default ;
    EndToEndRealTimeDialogRequest& operator=(const EndToEndRealTimeDialogRequest &) = default ;
    EndToEndRealTimeDialogRequest& operator=(EndToEndRealTimeDialogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asrModelId_ == nullptr
        && this->inputFormat_ == nullptr && this->outputFormat_ == nullptr && this->pitchRate_ == nullptr && this->sampleRate_ == nullptr && this->speechRate_ == nullptr
        && this->ttsModelId_ == nullptr && this->voiceCode_ == nullptr && this->volume_ == nullptr; };
    // asrModelId Field Functions 
    bool hasAsrModelId() const { return this->asrModelId_ != nullptr;};
    void deleteAsrModelId() { this->asrModelId_ = nullptr;};
    inline string getAsrModelId() const { DARABONBA_PTR_GET_DEFAULT(asrModelId_, "") };
    inline EndToEndRealTimeDialogRequest& setAsrModelId(string asrModelId) { DARABONBA_PTR_SET_VALUE(asrModelId_, asrModelId) };


    // inputFormat Field Functions 
    bool hasInputFormat() const { return this->inputFormat_ != nullptr;};
    void deleteInputFormat() { this->inputFormat_ = nullptr;};
    inline string getInputFormat() const { DARABONBA_PTR_GET_DEFAULT(inputFormat_, "") };
    inline EndToEndRealTimeDialogRequest& setInputFormat(string inputFormat) { DARABONBA_PTR_SET_VALUE(inputFormat_, inputFormat) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string getOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline EndToEndRealTimeDialogRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // pitchRate Field Functions 
    bool hasPitchRate() const { return this->pitchRate_ != nullptr;};
    void deletePitchRate() { this->pitchRate_ = nullptr;};
    inline int32_t getPitchRate() const { DARABONBA_PTR_GET_DEFAULT(pitchRate_, 0) };
    inline EndToEndRealTimeDialogRequest& setPitchRate(int32_t pitchRate) { DARABONBA_PTR_SET_VALUE(pitchRate_, pitchRate) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline string getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, "") };
    inline EndToEndRealTimeDialogRequest& setSampleRate(string sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // speechRate Field Functions 
    bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
    void deleteSpeechRate() { this->speechRate_ = nullptr;};
    inline int32_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
    inline EndToEndRealTimeDialogRequest& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


    // ttsModelId Field Functions 
    bool hasTtsModelId() const { return this->ttsModelId_ != nullptr;};
    void deleteTtsModelId() { this->ttsModelId_ = nullptr;};
    inline string getTtsModelId() const { DARABONBA_PTR_GET_DEFAULT(ttsModelId_, "") };
    inline EndToEndRealTimeDialogRequest& setTtsModelId(string ttsModelId) { DARABONBA_PTR_SET_VALUE(ttsModelId_, ttsModelId) };


    // voiceCode Field Functions 
    bool hasVoiceCode() const { return this->voiceCode_ != nullptr;};
    void deleteVoiceCode() { this->voiceCode_ = nullptr;};
    inline string getVoiceCode() const { DARABONBA_PTR_GET_DEFAULT(voiceCode_, "") };
    inline EndToEndRealTimeDialogRequest& setVoiceCode(string voiceCode) { DARABONBA_PTR_SET_VALUE(voiceCode_, voiceCode) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline EndToEndRealTimeDialogRequest& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    // The ID of the speech recognition model. The default value is nls-base. Supported models include paraformer-realtime-v2 and paraformer-realtime-8k-v2.
    shared_ptr<string> asrModelId_ {};
    // The input audio format. Supported formats are pcm, wav, and mp3.
    shared_ptr<string> inputFormat_ {};
    // The output audio format.
    shared_ptr<string> outputFormat_ {};
    // The pitch rate.
    // ● If \\`ttsModelId\\` is \\`nls-base\\`:
    // The value ranges from -500 to 500. The default is 0.
    // ● If \\`ttsModelId\\` is \\`cosyvoice-v2\\`: Specifies the pitch of the synthesized audio. The value ranges from 0.5 to 2.
    shared_ptr<int32_t> pitchRate_ {};
    // The sample rate.
    shared_ptr<string> sampleRate_ {};
    // The speech rate.
    // ● If \\`ttsModelId\\` is \\`nls-base\\`: The value ranges from -500 to 500. The default is 0.
    // ● If \\`ttsModelId\\` is \\`cosyvoice-v2\\`:
    // Specifies the speech rate of the synthesized audio. The value ranges from 0.5 to 2.
    // ○ 0.5: Half the default speed.
    // ○ 1: The default speed. The default speed is the model\\"s standard output speed and may vary slightly by speaker. It is about four characters per second.
    // ○ 2: Twice the default speed.
    shared_ptr<int32_t> speechRate_ {};
    // The ID of the speech synthesis model. The default value is nls-base. The cosyvoice-v2 model is supported.
    shared_ptr<string> ttsModelId_ {};
    // The voice parameter. This is available only for models that support word-level or sentence-level timestamps.
    shared_ptr<string> voiceCode_ {};
    // The volume. The value ranges from 0 to 100. This parameter is optional. The default value is 50.
    shared_ptr<int32_t> volume_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
