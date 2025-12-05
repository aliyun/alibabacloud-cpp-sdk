// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CERTIFICATEPRIVATEKEYDECRYPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CERTIFICATEPRIVATEKEYDECRYPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CertificatePrivateKeyDecryptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CertificatePrivateKeyDecryptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(CiphertextBlob, ciphertextBlob_);
    };
    friend void from_json(const Darabonba::Json& j, CertificatePrivateKeyDecryptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
    };
    CertificatePrivateKeyDecryptRequest() = default ;
    CertificatePrivateKeyDecryptRequest(const CertificatePrivateKeyDecryptRequest &) = default ;
    CertificatePrivateKeyDecryptRequest(CertificatePrivateKeyDecryptRequest &&) = default ;
    CertificatePrivateKeyDecryptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CertificatePrivateKeyDecryptRequest() = default ;
    CertificatePrivateKeyDecryptRequest& operator=(const CertificatePrivateKeyDecryptRequest &) = default ;
    CertificatePrivateKeyDecryptRequest& operator=(CertificatePrivateKeyDecryptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && return this->certificateId_ == nullptr && return this->ciphertextBlob_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CertificatePrivateKeyDecryptRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline CertificatePrivateKeyDecryptRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string ciphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline CertificatePrivateKeyDecryptRequest& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


  protected:
    // The encryption algorithm. Valid values:
    // 
    // *   RSAES_OAEP_SHA_1
    // 
    // *   RSAES_OAEP_SHA_256
    // 
    // *   SM2PKE
    // 
    // > The SM2PKE encryption algorithm is supported only in regions in mainland China. In these regions, managed hardware security modules (HSMs) are used. For more information, see [Managed HSM overview](https://help.aliyun.com/document_detail/125803.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The ID of the certificate. The ID must be globally unique in Certificates Manager.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The data that you want to decrypt.
    // 
    // The value is encoded in Base64.
    // 
    // This parameter is required.
    std::shared_ptr<string> ciphertextBlob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
