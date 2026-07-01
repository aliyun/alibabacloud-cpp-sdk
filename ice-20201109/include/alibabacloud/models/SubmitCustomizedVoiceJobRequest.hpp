// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCUSTOMIZEDVOICEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCUSTOMIZEDVOICEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitCustomizedVoiceJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCustomizedVoiceJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DemoAudioMediaURL, demoAudioMediaURL_);
      DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCustomizedVoiceJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DemoAudioMediaURL, demoAudioMediaURL_);
      DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
    };
    SubmitCustomizedVoiceJobRequest() = default ;
    SubmitCustomizedVoiceJobRequest(const SubmitCustomizedVoiceJobRequest &) = default ;
    SubmitCustomizedVoiceJobRequest(SubmitCustomizedVoiceJobRequest &&) = default ;
    SubmitCustomizedVoiceJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCustomizedVoiceJobRequest() = default ;
    SubmitCustomizedVoiceJobRequest& operator=(const SubmitCustomizedVoiceJobRequest &) = default ;
    SubmitCustomizedVoiceJobRequest& operator=(SubmitCustomizedVoiceJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->demoAudioMediaURL_ == nullptr
        && this->voiceId_ == nullptr; };
    // demoAudioMediaURL Field Functions 
    bool hasDemoAudioMediaURL() const { return this->demoAudioMediaURL_ != nullptr;};
    void deleteDemoAudioMediaURL() { this->demoAudioMediaURL_ = nullptr;};
    inline string getDemoAudioMediaURL() const { DARABONBA_PTR_GET_DEFAULT(demoAudioMediaURL_, "") };
    inline SubmitCustomizedVoiceJobRequest& setDemoAudioMediaURL(string demoAudioMediaURL) { DARABONBA_PTR_SET_VALUE(demoAudioMediaURL_, demoAudioMediaURL) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline SubmitCustomizedVoiceJobRequest& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


  protected:
    // The OSS URL where the demo audio will be saved.
    // 
    // - If specified, the service generates a demo audio file at the provided OSS URL after training completes.
    // 
    // - >Notice: 
    // 
    //   The URL must be a valid public address for an OSS object in your account.
    shared_ptr<string> demoAudioMediaURL_ {};
    // The unique identifier for the voice.
    // 
    // This parameter is required.
    shared_ptr<string> voiceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
