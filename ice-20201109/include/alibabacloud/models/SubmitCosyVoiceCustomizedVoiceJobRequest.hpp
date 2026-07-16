// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCOSYVOICECUSTOMIZEDVOICEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCOSYVOICECUSTOMIZEDVOICEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitCosyVoiceCustomizedVoiceJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCosyVoiceCustomizedVoiceJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Audios, audios_);
      DARABONBA_PTR_TO_JSON(DemoAudioMediaURL, demoAudioMediaURL_);
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(VoiceName, voiceName_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCosyVoiceCustomizedVoiceJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Audios, audios_);
      DARABONBA_PTR_FROM_JSON(DemoAudioMediaURL, demoAudioMediaURL_);
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(VoiceName, voiceName_);
    };
    SubmitCosyVoiceCustomizedVoiceJobRequest() = default ;
    SubmitCosyVoiceCustomizedVoiceJobRequest(const SubmitCosyVoiceCustomizedVoiceJobRequest &) = default ;
    SubmitCosyVoiceCustomizedVoiceJobRequest(SubmitCosyVoiceCustomizedVoiceJobRequest &&) = default ;
    SubmitCosyVoiceCustomizedVoiceJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCosyVoiceCustomizedVoiceJobRequest() = default ;
    SubmitCosyVoiceCustomizedVoiceJobRequest& operator=(const SubmitCosyVoiceCustomizedVoiceJobRequest &) = default ;
    SubmitCosyVoiceCustomizedVoiceJobRequest& operator=(SubmitCosyVoiceCustomizedVoiceJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audios_ == nullptr
        && this->demoAudioMediaURL_ == nullptr && this->gender_ == nullptr && this->model_ == nullptr && this->voiceName_ == nullptr; };
    // audios Field Functions 
    bool hasAudios() const { return this->audios_ != nullptr;};
    void deleteAudios() { this->audios_ = nullptr;};
    inline string getAudios() const { DARABONBA_PTR_GET_DEFAULT(audios_, "") };
    inline SubmitCosyVoiceCustomizedVoiceJobRequest& setAudios(string audios) { DARABONBA_PTR_SET_VALUE(audios_, audios) };


    // demoAudioMediaURL Field Functions 
    bool hasDemoAudioMediaURL() const { return this->demoAudioMediaURL_ != nullptr;};
    void deleteDemoAudioMediaURL() { this->demoAudioMediaURL_ = nullptr;};
    inline string getDemoAudioMediaURL() const { DARABONBA_PTR_GET_DEFAULT(demoAudioMediaURL_, "") };
    inline SubmitCosyVoiceCustomizedVoiceJobRequest& setDemoAudioMediaURL(string demoAudioMediaURL) { DARABONBA_PTR_SET_VALUE(demoAudioMediaURL_, demoAudioMediaURL) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline SubmitCosyVoiceCustomizedVoiceJobRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline SubmitCosyVoiceCustomizedVoiceJobRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // voiceName Field Functions 
    bool hasVoiceName() const { return this->voiceName_ != nullptr;};
    void deleteVoiceName() { this->voiceName_ = nullptr;};
    inline string getVoiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
    inline SubmitCosyVoiceCustomizedVoiceJobRequest& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


  protected:
    // The media asset ID of the training audio material. Currently, only one audio material can be used for training.
    shared_ptr<string> audios_ {};
    // The sample audio output address.  
    // - If you specify this parameter, a sample audio file is generated at the specified OSS address after training succeeds.  
    // >Notice: The address must be a valid public OSS address under your account.
    shared_ptr<string> demoAudioMediaURL_ {};
    // The gender. Valid values:
    // - female
    // - male
    shared_ptr<string> gender_ {};
    // The voice cloning model. Valid values:
    // - **cosyvoice-v3-plus**
    // - **cosyvoice-v3-flash**
    // - **cosyvoice-v3.5-plus**
    // - **cosyvoice-v3.5-flash**
    shared_ptr<string> model_ {};
    // The voice name. The name can be up to 32 characters in length.
    shared_ptr<string> voiceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
