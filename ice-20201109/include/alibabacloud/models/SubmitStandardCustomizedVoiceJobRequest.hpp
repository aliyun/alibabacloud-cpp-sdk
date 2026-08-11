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
        && this->authentication_ == nullptr && this->demoAudioMediaURL_ == nullptr && this->gender_ == nullptr && this->voiceName_ == nullptr; };
    // audios Field Functions 
    bool hasAudios() const { return this->audios_ != nullptr;};
    void deleteAudios() { this->audios_ = nullptr;};
    inline string getAudios() const { DARABONBA_PTR_GET_DEFAULT(audios_, "") };
    inline SubmitStandardCustomizedVoiceJobRequest& setAudios(string audios) { DARABONBA_PTR_SET_VALUE(audios_, audios) };


    // authentication Field Functions 
    bool hasAuthentication() const { return this->authentication_ != nullptr;};
    void deleteAuthentication() { this->authentication_ = nullptr;};
    inline string getAuthentication() const { DARABONBA_PTR_GET_DEFAULT(authentication_, "") };
    inline SubmitStandardCustomizedVoiceJobRequest& setAuthentication(string authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };


    // demoAudioMediaURL Field Functions 
    bool hasDemoAudioMediaURL() const { return this->demoAudioMediaURL_ != nullptr;};
    void deleteDemoAudioMediaURL() { this->demoAudioMediaURL_ = nullptr;};
    inline string getDemoAudioMediaURL() const { DARABONBA_PTR_GET_DEFAULT(demoAudioMediaURL_, "") };
    inline SubmitStandardCustomizedVoiceJobRequest& setDemoAudioMediaURL(string demoAudioMediaURL) { DARABONBA_PTR_SET_VALUE(demoAudioMediaURL_, demoAudioMediaURL) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline SubmitStandardCustomizedVoiceJobRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // voiceName Field Functions 
    bool hasVoiceName() const { return this->voiceName_ != nullptr;};
    void deleteVoiceName() { this->voiceName_ = nullptr;};
    inline string getVoiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
    inline SubmitStandardCustomizedVoiceJobRequest& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


  protected:
    // The list of media asset IDs for training audio materials. Separate multiple media asset IDs with commas (,).
    // 
    // >Notice: The total duration of all materials must be between 15 and 30 minutes, and the duration of each individual material must be greater than 1 minute.
    shared_ptr<string> audios_ {};
    // The media asset ID of the authentication audio. Upload an audio clip to verify your identity. The task fails if the voiceprint does not match the training audio.
    // >Notice: Read and record the following statement clearly: I confirm that I am initiating voice cloning customization. The training audio is provided by me. I commit to being responsible for the customized content and guarantee that no illegal or non-compliant content will be created.
    shared_ptr<string> authentication_ {};
    // The audio output address for the sample.  
    // - If you specify this parameter, a sample audio file is generated at the specified OSS address after training succeeds.  
    // - If you do not specify this parameter, no sample audio is generated.
    // >Notice: The address must be a valid public OSS URL under your account.
    shared_ptr<string> demoAudioMediaURL_ {};
    // The gender. Valid values:
    // 
    // - female
    // - male
    shared_ptr<string> gender_ {};
    // The voice name. The name can be up to 32 characters in length.
    shared_ptr<string> voiceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
