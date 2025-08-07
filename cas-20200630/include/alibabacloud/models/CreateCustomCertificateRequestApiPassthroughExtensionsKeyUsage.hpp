// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUESTAPIPASSTHROUGHEXTENSIONSKEYUSAGE_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUESTAPIPASSTHROUGHEXTENSIONSKEYUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage& obj) { 
      DARABONBA_PTR_TO_JSON(ContentCommitment, contentCommitment_);
      DARABONBA_PTR_TO_JSON(DataEncipherment, dataEncipherment_);
      DARABONBA_PTR_TO_JSON(DecipherOnly, decipherOnly_);
      DARABONBA_PTR_TO_JSON(DigitalSignature, digitalSignature_);
      DARABONBA_PTR_TO_JSON(EncipherOnly, encipherOnly_);
      DARABONBA_PTR_TO_JSON(KeyAgreement, keyAgreement_);
      DARABONBA_PTR_TO_JSON(KeyEncipherment, keyEncipherment_);
      DARABONBA_PTR_TO_JSON(NonRepudiation, nonRepudiation_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentCommitment, contentCommitment_);
      DARABONBA_PTR_FROM_JSON(DataEncipherment, dataEncipherment_);
      DARABONBA_PTR_FROM_JSON(DecipherOnly, decipherOnly_);
      DARABONBA_PTR_FROM_JSON(DigitalSignature, digitalSignature_);
      DARABONBA_PTR_FROM_JSON(EncipherOnly, encipherOnly_);
      DARABONBA_PTR_FROM_JSON(KeyAgreement, keyAgreement_);
      DARABONBA_PTR_FROM_JSON(KeyEncipherment, keyEncipherment_);
      DARABONBA_PTR_FROM_JSON(NonRepudiation, nonRepudiation_);
    };
    CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage() = default ;
    CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage(const CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage &) = default ;
    CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage(CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage &&) = default ;
    CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage() = default ;
    CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage& operator=(const CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage &) = default ;
    CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage& operator=(CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contentCommitment_ != nullptr
        && this->dataEncipherment_ != nullptr && this->decipherOnly_ != nullptr && this->digitalSignature_ != nullptr && this->encipherOnly_ != nullptr && this->keyAgreement_ != nullptr
        && this->keyEncipherment_ != nullptr && this->nonRepudiation_ != nullptr; };
    // contentCommitment Field Functions 
    bool hasContentCommitment() const { return this->contentCommitment_ != nullptr;};
    void deleteContentCommitment() { this->contentCommitment_ = nullptr;};
    inline bool contentCommitment() const { DARABONBA_PTR_GET_DEFAULT(contentCommitment_, false) };
    inline CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage& setContentCommitment(bool contentCommitment) { DARABONBA_PTR_SET_VALUE(contentCommitment_, contentCommitment) };


    // dataEncipherment Field Functions 
    bool hasDataEncipherment() const { return this->dataEncipherment_ != nullptr;};
    void deleteDataEncipherment() { this->dataEncipherment_ = nullptr;};
    inline bool dataEncipherment() const { DARABONBA_PTR_GET_DEFAULT(dataEncipherment_, false) };
    inline CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage& setDataEncipherment(bool dataEncipherment) { DARABONBA_PTR_SET_VALUE(dataEncipherment_, dataEncipherment) };


    // decipherOnly Field Functions 
    bool hasDecipherOnly() const { return this->decipherOnly_ != nullptr;};
    void deleteDecipherOnly() { this->decipherOnly_ = nullptr;};
    inline bool decipherOnly() const { DARABONBA_PTR_GET_DEFAULT(decipherOnly_, false) };
    inline CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage& setDecipherOnly(bool decipherOnly) { DARABONBA_PTR_SET_VALUE(decipherOnly_, decipherOnly) };


    // digitalSignature Field Functions 
    bool hasDigitalSignature() const { return this->digitalSignature_ != nullptr;};
    void deleteDigitalSignature() { this->digitalSignature_ = nullptr;};
    inline bool digitalSignature() const { DARABONBA_PTR_GET_DEFAULT(digitalSignature_, false) };
    inline CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage& setDigitalSignature(bool digitalSignature) { DARABONBA_PTR_SET_VALUE(digitalSignature_, digitalSignature) };


    // encipherOnly Field Functions 
    bool hasEncipherOnly() const { return this->encipherOnly_ != nullptr;};
    void deleteEncipherOnly() { this->encipherOnly_ = nullptr;};
    inline bool encipherOnly() const { DARABONBA_PTR_GET_DEFAULT(encipherOnly_, false) };
    inline CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage& setEncipherOnly(bool encipherOnly) { DARABONBA_PTR_SET_VALUE(encipherOnly_, encipherOnly) };


    // keyAgreement Field Functions 
    bool hasKeyAgreement() const { return this->keyAgreement_ != nullptr;};
    void deleteKeyAgreement() { this->keyAgreement_ = nullptr;};
    inline bool keyAgreement() const { DARABONBA_PTR_GET_DEFAULT(keyAgreement_, false) };
    inline CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage& setKeyAgreement(bool keyAgreement) { DARABONBA_PTR_SET_VALUE(keyAgreement_, keyAgreement) };


    // keyEncipherment Field Functions 
    bool hasKeyEncipherment() const { return this->keyEncipherment_ != nullptr;};
    void deleteKeyEncipherment() { this->keyEncipherment_ = nullptr;};
    inline bool keyEncipherment() const { DARABONBA_PTR_GET_DEFAULT(keyEncipherment_, false) };
    inline CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage& setKeyEncipherment(bool keyEncipherment) { DARABONBA_PTR_SET_VALUE(keyEncipherment_, keyEncipherment) };


    // nonRepudiation Field Functions 
    bool hasNonRepudiation() const { return this->nonRepudiation_ != nullptr;};
    void deleteNonRepudiation() { this->nonRepudiation_ = nullptr;};
    inline bool nonRepudiation() const { DARABONBA_PTR_GET_DEFAULT(nonRepudiation_, false) };
    inline CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage& setNonRepudiation(bool nonRepudiation) { DARABONBA_PTR_SET_VALUE(nonRepudiation_, nonRepudiation) };


  protected:
    // The original name of the parameter is NonRepudiation.
    std::shared_ptr<bool> contentCommitment_ = nullptr;
    // Specifies whether the key can be used for data encryption.
    std::shared_ptr<bool> dataEncipherment_ = nullptr;
    // Specifies whether the key can be used only for data decryption.
    std::shared_ptr<bool> decipherOnly_ = nullptr;
    // Specifies whether the key can be used for digital signing. If you set this parameter to true, the private key of the certificate can be used to generate digital signatures, and the public key of the certificate can be used to verify digital signatures.
    std::shared_ptr<bool> digitalSignature_ = nullptr;
    // Specifies whether the key can be used only for data encryption.
    std::shared_ptr<bool> encipherOnly_ = nullptr;
    // Specifies whether the key can be used for key agreement.
    std::shared_ptr<bool> keyAgreement_ = nullptr;
    // Specifies whether the key can be used for data encipherment.
    std::shared_ptr<bool> keyEncipherment_ = nullptr;
    // Specifies whether the key can be used for non-repudiation. This parameter is renamed ContentCommitment in the X.509 standard.
    std::shared_ptr<bool> nonRepudiation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
