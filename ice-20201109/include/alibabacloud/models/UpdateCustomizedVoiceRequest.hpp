// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMIZEDVOICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMIZEDVOICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateCustomizedVoiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomizedVoiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DemoAudioMediaId, demoAudioMediaId_);
      DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomizedVoiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DemoAudioMediaId, demoAudioMediaId_);
      DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
    };
    UpdateCustomizedVoiceRequest() = default ;
    UpdateCustomizedVoiceRequest(const UpdateCustomizedVoiceRequest &) = default ;
    UpdateCustomizedVoiceRequest(UpdateCustomizedVoiceRequest &&) = default ;
    UpdateCustomizedVoiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomizedVoiceRequest() = default ;
    UpdateCustomizedVoiceRequest& operator=(const UpdateCustomizedVoiceRequest &) = default ;
    UpdateCustomizedVoiceRequest& operator=(UpdateCustomizedVoiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->demoAudioMediaId_ == nullptr
        && this->voiceId_ == nullptr; };
    // demoAudioMediaId Field Functions 
    bool hasDemoAudioMediaId() const { return this->demoAudioMediaId_ != nullptr;};
    void deleteDemoAudioMediaId() { this->demoAudioMediaId_ = nullptr;};
    inline string getDemoAudioMediaId() const { DARABONBA_PTR_GET_DEFAULT(demoAudioMediaId_, "") };
    inline UpdateCustomizedVoiceRequest& setDemoAudioMediaId(string demoAudioMediaId) { DARABONBA_PTR_SET_VALUE(demoAudioMediaId_, demoAudioMediaId) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline UpdateCustomizedVoiceRequest& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


  protected:
    // The media asset ID of the sample audio file.
    shared_ptr<string> demoAudioMediaId_ {};
    // The voice ID.
    // 
    // This parameter is required.
    shared_ptr<string> voiceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
