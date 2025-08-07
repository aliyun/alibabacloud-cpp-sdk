// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEPRIVATEKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEPRIVATEKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribeCertificatePrivateKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertificatePrivateKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptedCode, encryptedCode_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertificatePrivateKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptedCode, encryptedCode_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
    };
    DescribeCertificatePrivateKeyRequest() = default ;
    DescribeCertificatePrivateKeyRequest(const DescribeCertificatePrivateKeyRequest &) = default ;
    DescribeCertificatePrivateKeyRequest(DescribeCertificatePrivateKeyRequest &&) = default ;
    DescribeCertificatePrivateKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertificatePrivateKeyRequest() = default ;
    DescribeCertificatePrivateKeyRequest& operator=(const DescribeCertificatePrivateKeyRequest &) = default ;
    DescribeCertificatePrivateKeyRequest& operator=(DescribeCertificatePrivateKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encryptedCode_ != nullptr
        && this->identifier_ != nullptr; };
    // encryptedCode Field Functions 
    bool hasEncryptedCode() const { return this->encryptedCode_ != nullptr;};
    void deleteEncryptedCode() { this->encryptedCode_ = nullptr;};
    inline string encryptedCode() const { DARABONBA_PTR_GET_DEFAULT(encryptedCode_, "") };
    inline DescribeCertificatePrivateKeyRequest& setEncryptedCode(string encryptedCode) { DARABONBA_PTR_SET_VALUE(encryptedCode_, encryptedCode) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline DescribeCertificatePrivateKeyRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


  protected:
    // The password that is used to encrypt the private key. The password can contain letters, digits, and special characters, such as `, + - _ #`. The password can be up to 32 bytes in length.
    // 
    // **Warning** You must remember the password that you specify. The password is required to decrypt the encrypted private key. If you forget the password, the encrypted private key that is returned cannot be decrypted. You must call this operation again.
    // 
    // This parameter is required.
    std::shared_ptr<string> encryptedCode_ = nullptr;
    // The unique identifier of the client certificate or server certificate that you want to query.
    // 
    // >  You can call the [ListClientCertificate](https://help.aliyun.com/document_detail/330884.html) operation to query the unique identifiers of all client certificates and server certificates.
    // 
    // This parameter is required.
    std::shared_ptr<string> identifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
