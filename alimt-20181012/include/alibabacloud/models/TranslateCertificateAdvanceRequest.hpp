// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSLATECERTIFICATEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSLATECERTIFICATEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class TranslateCertificateAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranslateCertificateAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
      DARABONBA_TO_JSON(ImageUrl, imageUrlObject_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, TranslateCertificateAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
      DARABONBA_FROM_JSON(ImageUrl, imageUrlObject_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
    };
    TranslateCertificateAdvanceRequest() = default ;
    TranslateCertificateAdvanceRequest(const TranslateCertificateAdvanceRequest &) = default ;
    TranslateCertificateAdvanceRequest(TranslateCertificateAdvanceRequest &&) = default ;
    TranslateCertificateAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranslateCertificateAdvanceRequest() = default ;
    TranslateCertificateAdvanceRequest& operator=(const TranslateCertificateAdvanceRequest &) = default ;
    TranslateCertificateAdvanceRequest& operator=(TranslateCertificateAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateType_ == nullptr
        && return this->imageUrlObject_ == nullptr && return this->resultType_ == nullptr && return this->sourceLanguage_ == nullptr && return this->targetLanguage_ == nullptr; };
    // certificateType Field Functions 
    bool hasCertificateType() const { return this->certificateType_ != nullptr;};
    void deleteCertificateType() { this->certificateType_ = nullptr;};
    inline string certificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
    inline TranslateCertificateAdvanceRequest& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


    // imageUrlObject Field Functions 
    bool hasImageUrlObject() const { return this->imageUrlObject_ != nullptr;};
    void deleteImageUrlObject() { this->imageUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageUrlObject() const { DARABONBA_GET(imageUrlObject_) };
    inline TranslateCertificateAdvanceRequest& setImageUrlObject(shared_ptr<Darabonba::IStream> imageUrlObject) { DARABONBA_SET_VALUE(imageUrlObject_, imageUrlObject) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string resultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline TranslateCertificateAdvanceRequest& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TranslateCertificateAdvanceRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string targetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TranslateCertificateAdvanceRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> certificateType_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageUrlObject_ = nullptr;
    std::shared_ptr<string> resultType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceLanguage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetLanguage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
