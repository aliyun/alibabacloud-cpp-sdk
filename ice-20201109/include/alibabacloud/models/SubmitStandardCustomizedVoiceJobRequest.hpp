// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSTANDARDCUSTOMIZEDVOICEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSTANDARDCUSTOMIZEDVOICEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitStandardCustomizedVoiceJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitStandardCustomizedVoiceJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Audios, audios_);
      DARABONBA_PTR_TO_JSON(Authentication, authentication_);
      DARABONBA_PTR_TO_JSON(DemoAudioMediaURL, demoAudioMediaURL_);
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(VoiceName, voiceName_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitStandardCustomizedVoiceJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Audios, audios_);
      DARABONBA_PTR_FROM_JSON(Authentication, authentication_);
      DARABONBA_PTR_FROM_JSON(DemoAudioMediaURL, demoAudioMediaURL_);
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(VoiceName, voiceName_);
    };
    SubmitStandardCustomizedVoiceJobRequest() = default ;
    SubmitStandardCustomizedVoiceJobRequest(const SubmitStandardCustomizedVoiceJobRequest &) = default ;
    SubmitStandardCustomizedVoiceJobRequest(SubmitStandardCustomizedVoiceJobRequest &&) = default ;
    SubmitStandardCustomizedVoiceJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitStandardCustomizedVoiceJobRequest() = default ;
    SubmitStandardCustomizedVoiceJobRequest& operator=(const SubmitStandardCustomizedVoiceJobRequest &) = default ;
    SubmitStandardCustomizedVoiceJobRequest& operator=(SubmitStandardCustomizedVoiceJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audios_ == nullptr
        && return this->authentication_ == nullptr && return this->demoAudioMediaURL_ == nullptr && return this->gender_ == nullptr && return this->voiceName_ == nullptr; };
    // audios Field Functions 
    bool hasAudios() const { return this->audios_ != nullptr;};
    void deleteAudios() { this->audios_ = nullptr;};
    inline string audios() const { DARABONBA_PTR_GET_DEFAULT(audios_, "") };
    inline SubmitStandardCustomizedVoiceJobRequest& setAudios(string audios) { DARABONBA_PTR_SET_VALUE(audios_, audios) };


    // authentication Field Functions 
    bool hasAuthentication() const { return this->authentication_ != nullptr;};
    void deleteAuthentication() { this->authentication_ = nullptr;};
    inline string authentication() const { DARABONBA_PTR_GET_DEFAULT(authentication_, "") };
    inline SubmitStandardCustomizedVoiceJobRequest& setAuthentication(string authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };


    // demoAudioMediaURL Field Functions 
    bool hasDemoAudioMediaURL() const { return this->demoAudioMediaURL_ != nullptr;};
    void deleteDemoAudioMediaURL() { this->demoAudioMediaURL_ = nullptr;};
    inline string demoAudioMediaURL() const { DARABONBA_PTR_GET_DEFAULT(demoAudioMediaURL_, "") };
    inline SubmitStandardCustomizedVoiceJobRequest& setDemoAudioMediaURL(string demoAudioMediaURL) { DARABONBA_PTR_SET_VALUE(demoAudioMediaURL_, demoAudioMediaURL) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline SubmitStandardCustomizedVoiceJobRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // voiceName Field Functions 
    bool hasVoiceName() const { return this->voiceName_ != nullptr;};
    void deleteVoiceName() { this->voiceName_ = nullptr;};
    inline string voiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
    inline SubmitStandardCustomizedVoiceJobRequest& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


  protected:
    // *   The material assets IDs of the materials for training.
    // *   Separate multiple media IDs with commas (,).
    // 
    // > : The total duration of all materials must be within 15 to 30 minutes. The duration of each material must be greater than 1 minute.
    std::shared_ptr<string> audios_ = nullptr;
    // *   The media asset ID of the authentication audio.
    // 
    // *   Upload an audio file for identity authentication. If the voiceprint extracted from the uploaded file differs from that of the training file, the job fails.
    // 
    //     **
    // 
    //     **Note**: Clearly read and record the following text: I confirm to customize human voice cloning and provide audio files that contain my voice for training. I promise that I am responsible for the customized content and that the content complies with laws and regulations.
    std::shared_ptr<string> authentication_ = nullptr;
    // The URL of the sample audio file.
    // 
    // *   If this parameter is specified, a sample audio file is generated at the specified Object Storage Service (OSS) URL after the training is complete.
    // 
    // *   If this parameter is not specified, no sample audio file is generated.
    // 
    //     **
    // 
    //     **Note**: The URL must be a valid public OSS URL within your Alibaba Cloud account.
    std::shared_ptr<string> demoAudioMediaURL_ = nullptr;
    // The gender. Valid values:
    // 
    // *   female
    // *   male
    std::shared_ptr<string> gender_ = nullptr;
    // The voice name.
    // 
    // *   The name can be up to 32 characters in length.
    std::shared_ptr<string> voiceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
