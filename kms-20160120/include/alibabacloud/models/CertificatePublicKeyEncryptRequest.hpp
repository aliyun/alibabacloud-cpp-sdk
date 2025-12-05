// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CERTIFICATEPUBLICKEYENCRYPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CERTIFICATEPUBLICKEYENCRYPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CertificatePublicKeyEncryptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CertificatePublicKeyEncryptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(Plaintext, plaintext_);
    };
    friend void from_json(const Darabonba::Json& j, CertificatePublicKeyEncryptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(Plaintext, plaintext_);
    };
    CertificatePublicKeyEncryptRequest() = default ;
    CertificatePublicKeyEncryptRequest(const CertificatePublicKeyEncryptRequest &) = default ;
    CertificatePublicKeyEncryptRequest(CertificatePublicKeyEncryptRequest &&) = default ;
    CertificatePublicKeyEncryptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CertificatePublicKeyEncryptRequest() = default ;
    CertificatePublicKeyEncryptRequest& operator=(const CertificatePublicKeyEncryptRequest &) = default ;
    CertificatePublicKeyEncryptRequest& operator=(CertificatePublicKeyEncryptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && return this->certificateId_ == nullptr && return this->plaintext_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CertificatePublicKeyEncryptRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline CertificatePublicKeyEncryptRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // plaintext Field Functions 
    bool hasPlaintext() const { return this->plaintext_ != nullptr;};
    void deletePlaintext() { this->plaintext_ = nullptr;};
    inline string plaintext() const { DARABONBA_PTR_GET_DEFAULT(plaintext_, "") };
    inline CertificatePublicKeyEncryptRequest& setPlaintext(string plaintext) { DARABONBA_PTR_SET_VALUE(plaintext_, plaintext) };


  protected:
    // The encryption algorithm. Valid values:
    // 
    // *   RSAES_OAEP_SHA_1
    // 
    // *   RSAES_OAEP_SHA_256
    // 
    // *   SM2PKE
    // 
    // >The SM2PKE encryption algorithm is supported only in regions in mainland China. In these regions, managed hardware security modules (HSMs) are used. For more information, see [Managed HSM overview](https://help.aliyun.com/document_detail/125803.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The ID of the certificate. The ID must be globally unique in Certificates Manager.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The data that you want to encrypt.
    // 
    // The value is encoded in Base64. For example, if the hexadecimal data that you want to encrypt is `[0x31, 0x32, 0x33, 0x34]`, the Base64-encoded data is `MTIzNA==`.
    // 
    // The size of data that can be encrypted varies based on the encryption algorithm that you use:
    // 
    // *   RSAES_OAEP_SHA_1: 214 bytes
    // *   RSAES_OAEP_SHA_256: 190 bytes
    // *   SM2PKE: 6,047 bytes
    // 
    // If the size of data that you want to encrypt exceeds the preceding limits, you can call the [GenerateDataKey](https://help.aliyun.com/document_detail/28948.html) operation to generate a data key to encrypt the data. Then, call the CertificatePublicKeyEncrypt operation to encrypt the data key.
    // 
    // This parameter is required.
    std::shared_ptr<string> plaintext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
