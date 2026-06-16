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
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertificatePrivateKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptedCode, encryptedCode_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
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
    virtual bool empty() const override { return this->encryptedCode_ == nullptr
        && this->identifier_ == nullptr && this->resourceGroupId_ == nullptr; };
    // encryptedCode Field Functions 
    bool hasEncryptedCode() const { return this->encryptedCode_ != nullptr;};
    void deleteEncryptedCode() { this->encryptedCode_ = nullptr;};
    inline string getEncryptedCode() const { DARABONBA_PTR_GET_DEFAULT(encryptedCode_, "") };
    inline DescribeCertificatePrivateKeyRequest& setEncryptedCode(string encryptedCode) { DARABONBA_PTR_SET_VALUE(encryptedCode_, encryptedCode) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline DescribeCertificatePrivateKeyRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCertificatePrivateKeyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The password to encrypt the private key. The password can contain uppercase letters, lowercase letters, digits, and special characters, such as `,.+-_#`. The maximum length is 32 bytes.
    // 
    // >Warning: 
    // 
    // Remember the password you set. You need this password to decrypt the encrypted private key. If you forget the password, you cannot decrypt the private key that you get from this API call. You must call this API again to get a new encrypted key.
    // 
    // This parameter is required.
    shared_ptr<string> encryptedCode_ {};
    // The unique identifier of the client or server-side certificate for which you want to get the private key.
    // 
    // > Call [ListClientCertificate](https://help.aliyun.com/document_detail/465990.html) to query the unique identifiers of all client and server-side certificates.
    // 
    // This parameter is required.
    shared_ptr<string> identifier_ {};
    // The ID of the resource group to which the certificate belongs.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
