// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTAUDIOFORCUSTOMIZEDVOICEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTAUDIOFORCUSTOMIZEDVOICEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DetectAudioForCustomizedVoiceJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectAudioForCustomizedVoiceJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioRecordId, audioRecordId_);
      DARABONBA_PTR_TO_JSON(RecordUrl, recordUrl_);
      DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectAudioForCustomizedVoiceJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioRecordId, audioRecordId_);
      DARABONBA_PTR_FROM_JSON(RecordUrl, recordUrl_);
      DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
    };
    DetectAudioForCustomizedVoiceJobRequest() = default ;
    DetectAudioForCustomizedVoiceJobRequest(const DetectAudioForCustomizedVoiceJobRequest &) = default ;
    DetectAudioForCustomizedVoiceJobRequest(DetectAudioForCustomizedVoiceJobRequest &&) = default ;
    DetectAudioForCustomizedVoiceJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectAudioForCustomizedVoiceJobRequest() = default ;
    DetectAudioForCustomizedVoiceJobRequest& operator=(const DetectAudioForCustomizedVoiceJobRequest &) = default ;
    DetectAudioForCustomizedVoiceJobRequest& operator=(DetectAudioForCustomizedVoiceJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioRecordId_ != nullptr
        && this->recordUrl_ != nullptr && this->voiceId_ != nullptr; };
    // audioRecordId Field Functions 
    bool hasAudioRecordId() const { return this->audioRecordId_ != nullptr;};
    void deleteAudioRecordId() { this->audioRecordId_ = nullptr;};
    inline int32_t audioRecordId() const { DARABONBA_PTR_GET_DEFAULT(audioRecordId_, 0) };
    inline DetectAudioForCustomizedVoiceJobRequest& setAudioRecordId(int32_t audioRecordId) { DARABONBA_PTR_SET_VALUE(audioRecordId_, audioRecordId) };


    // recordUrl Field Functions 
    bool hasRecordUrl() const { return this->recordUrl_ != nullptr;};
    void deleteRecordUrl() { this->recordUrl_ = nullptr;};
    inline string recordUrl() const { DARABONBA_PTR_GET_DEFAULT(recordUrl_, "") };
    inline DetectAudioForCustomizedVoiceJobRequest& setRecordUrl(string recordUrl) { DARABONBA_PTR_SET_VALUE(recordUrl_, recordUrl) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string voiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline DetectAudioForCustomizedVoiceJobRequest& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


  protected:
    // The sequence number of the recording file.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> audioRecordId_ = nullptr;
    // The URL of the recording file.
    // 
    // > : The URL must be an Object Storage Service (OSS) URL within your Alibaba Cloud account. The OSS bucket must be in the same region in which IMS is activated.
    // 
    // > : The audio file must be in the WAV or PCM format and must be a 16-bit mono audio file at 48000 Hz.
    // 
    // This parameter is required.
    std::shared_ptr<string> recordUrl_ = nullptr;
    // The voice ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> voiceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
