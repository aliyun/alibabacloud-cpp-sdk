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
    virtual bool empty() const override { this->demoAudioMediaURL_ != nullptr
        && this->voiceId_ != nullptr; };
    // demoAudioMediaURL Field Functions 
    bool hasDemoAudioMediaURL() const { return this->demoAudioMediaURL_ != nullptr;};
    void deleteDemoAudioMediaURL() { this->demoAudioMediaURL_ = nullptr;};
    inline string demoAudioMediaURL() const { DARABONBA_PTR_GET_DEFAULT(demoAudioMediaURL_, "") };
    inline SubmitCustomizedVoiceJobRequest& setDemoAudioMediaURL(string demoAudioMediaURL) { DARABONBA_PTR_SET_VALUE(demoAudioMediaURL_, demoAudioMediaURL) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string voiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline SubmitCustomizedVoiceJobRequest& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


  protected:
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
    // The voice ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> voiceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
