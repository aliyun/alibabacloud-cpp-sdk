// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALPRODUCTVERIFYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALPRODUCTVERIFYV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CredentialProductVerifyV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialProductVerifyV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(CredName, credName_);
      DARABONBA_PTR_TO_JSON(CredType, credType_);
      DARABONBA_PTR_TO_JSON(ImageFile, imageFile_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(MerchantId, merchantId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialProductVerifyV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(CredName, credName_);
      DARABONBA_PTR_FROM_JSON(CredType, credType_);
      DARABONBA_PTR_FROM_JSON(ImageFile, imageFile_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(MerchantId, merchantId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    CredentialProductVerifyV2Request() = default ;
    CredentialProductVerifyV2Request(const CredentialProductVerifyV2Request &) = default ;
    CredentialProductVerifyV2Request(CredentialProductVerifyV2Request &&) = default ;
    CredentialProductVerifyV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialProductVerifyV2Request() = default ;
    CredentialProductVerifyV2Request& operator=(const CredentialProductVerifyV2Request &) = default ;
    CredentialProductVerifyV2Request& operator=(CredentialProductVerifyV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credName_ == nullptr
        && return this->credType_ == nullptr && return this->imageFile_ == nullptr && return this->imageUrl_ == nullptr && return this->merchantId_ == nullptr && return this->productCode_ == nullptr; };
    // credName Field Functions 
    bool hasCredName() const { return this->credName_ != nullptr;};
    void deleteCredName() { this->credName_ = nullptr;};
    inline string credName() const { DARABONBA_PTR_GET_DEFAULT(credName_, "") };
    inline CredentialProductVerifyV2Request& setCredName(string credName) { DARABONBA_PTR_SET_VALUE(credName_, credName) };


    // credType Field Functions 
    bool hasCredType() const { return this->credType_ != nullptr;};
    void deleteCredType() { this->credType_ = nullptr;};
    inline string credType() const { DARABONBA_PTR_GET_DEFAULT(credType_, "") };
    inline CredentialProductVerifyV2Request& setCredType(string credType) { DARABONBA_PTR_SET_VALUE(credType_, credType) };


    // imageFile Field Functions 
    bool hasImageFile() const { return this->imageFile_ != nullptr;};
    void deleteImageFile() { this->imageFile_ = nullptr;};
    inline string imageFile() const { DARABONBA_PTR_GET_DEFAULT(imageFile_, "") };
    inline CredentialProductVerifyV2Request& setImageFile(string imageFile) { DARABONBA_PTR_SET_VALUE(imageFile_, imageFile) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CredentialProductVerifyV2Request& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // merchantId Field Functions 
    bool hasMerchantId() const { return this->merchantId_ != nullptr;};
    void deleteMerchantId() { this->merchantId_ = nullptr;};
    inline string merchantId() const { DARABONBA_PTR_GET_DEFAULT(merchantId_, "") };
    inline CredentialProductVerifyV2Request& setMerchantId(string merchantId) { DARABONBA_PTR_SET_VALUE(merchantId_, merchantId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CredentialProductVerifyV2Request& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // Credential name: Only supports value 0501 (product image).
    // 
    // This parameter is required.
    std::shared_ptr<string> credName_ = nullptr;
    // Credential type: Only supports value 05 (product image).
    // 
    // This parameter is required.
    std::shared_ptr<string> credType_ = nullptr;
    // InputStream object of the image.
    std::shared_ptr<string> imageFile_ = nullptr;
    // URL of the image.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // Merchant ID.
    std::shared_ptr<string> merchantId_ = nullptr;
    // Invocation mode:
    // Only supports value ANTI_FAKE_CHECK.
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
