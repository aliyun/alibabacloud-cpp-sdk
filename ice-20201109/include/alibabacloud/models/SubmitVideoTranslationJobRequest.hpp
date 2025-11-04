// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOTRANSLATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOTRANSLATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitVideoTranslationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoTranslationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
      DARABONBA_PTR_TO_JSON(SignatureMehtod, signatureMehtod_);
      DARABONBA_PTR_TO_JSON(SignatureNonce, signatureNonce_);
      DARABONBA_PTR_TO_JSON(SignatureType, signatureType_);
      DARABONBA_PTR_TO_JSON(SignatureVersion, signatureVersion_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoTranslationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
      DARABONBA_PTR_FROM_JSON(SignatureMehtod, signatureMehtod_);
      DARABONBA_PTR_FROM_JSON(SignatureNonce, signatureNonce_);
      DARABONBA_PTR_FROM_JSON(SignatureType, signatureType_);
      DARABONBA_PTR_FROM_JSON(SignatureVersion, signatureVersion_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitVideoTranslationJobRequest() = default ;
    SubmitVideoTranslationJobRequest(const SubmitVideoTranslationJobRequest &) = default ;
    SubmitVideoTranslationJobRequest(SubmitVideoTranslationJobRequest &&) = default ;
    SubmitVideoTranslationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoTranslationJobRequest() = default ;
    SubmitVideoTranslationJobRequest& operator=(const SubmitVideoTranslationJobRequest &) = default ;
    SubmitVideoTranslationJobRequest& operator=(SubmitVideoTranslationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->description_ == nullptr && return this->editingConfig_ == nullptr && return this->inputConfig_ == nullptr && return this->outputConfig_ == nullptr && return this->signature_ == nullptr
        && return this->signatureMehtod_ == nullptr && return this->signatureNonce_ == nullptr && return this->signatureType_ == nullptr && return this->signatureVersion_ == nullptr && return this->title_ == nullptr
        && return this->userData_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SubmitVideoTranslationJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubmitVideoTranslationJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // editingConfig Field Functions 
    bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
    void deleteEditingConfig() { this->editingConfig_ = nullptr;};
    inline string editingConfig() const { DARABONBA_PTR_GET_DEFAULT(editingConfig_, "") };
    inline SubmitVideoTranslationJobRequest& setEditingConfig(string editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline string inputConfig() const { DARABONBA_PTR_GET_DEFAULT(inputConfig_, "") };
    inline SubmitVideoTranslationJobRequest& setInputConfig(string inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string outputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline SubmitVideoTranslationJobRequest& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline SubmitVideoTranslationJobRequest& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // signatureMehtod Field Functions 
    bool hasSignatureMehtod() const { return this->signatureMehtod_ != nullptr;};
    void deleteSignatureMehtod() { this->signatureMehtod_ = nullptr;};
    inline string signatureMehtod() const { DARABONBA_PTR_GET_DEFAULT(signatureMehtod_, "") };
    inline SubmitVideoTranslationJobRequest& setSignatureMehtod(string signatureMehtod) { DARABONBA_PTR_SET_VALUE(signatureMehtod_, signatureMehtod) };


    // signatureNonce Field Functions 
    bool hasSignatureNonce() const { return this->signatureNonce_ != nullptr;};
    void deleteSignatureNonce() { this->signatureNonce_ = nullptr;};
    inline string signatureNonce() const { DARABONBA_PTR_GET_DEFAULT(signatureNonce_, "") };
    inline SubmitVideoTranslationJobRequest& setSignatureNonce(string signatureNonce) { DARABONBA_PTR_SET_VALUE(signatureNonce_, signatureNonce) };


    // signatureType Field Functions 
    bool hasSignatureType() const { return this->signatureType_ != nullptr;};
    void deleteSignatureType() { this->signatureType_ = nullptr;};
    inline string signatureType() const { DARABONBA_PTR_GET_DEFAULT(signatureType_, "") };
    inline SubmitVideoTranslationJobRequest& setSignatureType(string signatureType) { DARABONBA_PTR_SET_VALUE(signatureType_, signatureType) };


    // signatureVersion Field Functions 
    bool hasSignatureVersion() const { return this->signatureVersion_ != nullptr;};
    void deleteSignatureVersion() { this->signatureVersion_ = nullptr;};
    inline string signatureVersion() const { DARABONBA_PTR_GET_DEFAULT(signatureVersion_, "") };
    inline SubmitVideoTranslationJobRequest& setSignatureVersion(string signatureVersion) { DARABONBA_PTR_SET_VALUE(signatureVersion_, signatureVersion) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitVideoTranslationJobRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitVideoTranslationJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // *   The client token.
    std::shared_ptr<string> clientToken_ = nullptr;
    // *   The job description.
    std::shared_ptr<string> description_ = nullptr;
    // *   The configuration parameters of the video translation job.
    // *   The value must be in the JSON format.
    std::shared_ptr<string> editingConfig_ = nullptr;
    // *   The input parameters of the video translation job.
    // *   A video translation job takes a video or subtitle file as the input.
    // *   The value must be in the JSON format.
    std::shared_ptr<string> inputConfig_ = nullptr;
    // *   The output parameters of the video translation job.
    // *   A video translation job can generate a video or subtitle file as the output.
    std::shared_ptr<string> outputConfig_ = nullptr;
    std::shared_ptr<string> signature_ = nullptr;
    std::shared_ptr<string> signatureMehtod_ = nullptr;
    std::shared_ptr<string> signatureNonce_ = nullptr;
    std::shared_ptr<string> signatureType_ = nullptr;
    std::shared_ptr<string> signatureVersion_ = nullptr;
    // *   The job title.
    std::shared_ptr<string> title_ = nullptr;
    // *   The user-defined data.
    // *   The data must be in the JSON format, and can be up to 512 characters in length.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
