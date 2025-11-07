// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALPRODUCTVERIFYV2ADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALPRODUCTVERIFYV2ADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CredentialProductVerifyV2AdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialProductVerifyV2AdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredName, credName_);
      DARABONBA_PTR_TO_JSON(CredType, credType_);
      DARABONBA_TO_JSON(ImageFile, imageFileObject_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(MerchantId, merchantId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialProductVerifyV2AdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredName, credName_);
      DARABONBA_PTR_FROM_JSON(CredType, credType_);
      DARABONBA_FROM_JSON(ImageFile, imageFileObject_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(MerchantId, merchantId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    CredentialProductVerifyV2AdvanceRequest() = default ;
    CredentialProductVerifyV2AdvanceRequest(const CredentialProductVerifyV2AdvanceRequest &) = default ;
    CredentialProductVerifyV2AdvanceRequest(CredentialProductVerifyV2AdvanceRequest &&) = default ;
    CredentialProductVerifyV2AdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialProductVerifyV2AdvanceRequest() = default ;
    CredentialProductVerifyV2AdvanceRequest& operator=(const CredentialProductVerifyV2AdvanceRequest &) = default ;
    CredentialProductVerifyV2AdvanceRequest& operator=(CredentialProductVerifyV2AdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credName_ == nullptr
        && return this->credType_ == nullptr && return this->imageFileObject_ == nullptr && return this->imageUrl_ == nullptr && return this->merchantId_ == nullptr && return this->productCode_ == nullptr; };
    // credName Field Functions 
    bool hasCredName() const { return this->credName_ != nullptr;};
    void deleteCredName() { this->credName_ = nullptr;};
    inline string credName() const { DARABONBA_PTR_GET_DEFAULT(credName_, "") };
    inline CredentialProductVerifyV2AdvanceRequest& setCredName(string credName) { DARABONBA_PTR_SET_VALUE(credName_, credName) };


    // credType Field Functions 
    bool hasCredType() const { return this->credType_ != nullptr;};
    void deleteCredType() { this->credType_ = nullptr;};
    inline string credType() const { DARABONBA_PTR_GET_DEFAULT(credType_, "") };
    inline CredentialProductVerifyV2AdvanceRequest& setCredType(string credType) { DARABONBA_PTR_SET_VALUE(credType_, credType) };


    // imageFileObject Field Functions 
    bool hasImageFileObject() const { return this->imageFileObject_ != nullptr;};
    void deleteImageFileObject() { this->imageFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageFileObject() const { DARABONBA_GET(imageFileObject_) };
    inline CredentialProductVerifyV2AdvanceRequest& setImageFileObject(shared_ptr<Darabonba::IStream> imageFileObject) { DARABONBA_SET_VALUE(imageFileObject_, imageFileObject) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CredentialProductVerifyV2AdvanceRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // merchantId Field Functions 
    bool hasMerchantId() const { return this->merchantId_ != nullptr;};
    void deleteMerchantId() { this->merchantId_ = nullptr;};
    inline string merchantId() const { DARABONBA_PTR_GET_DEFAULT(merchantId_, "") };
    inline CredentialProductVerifyV2AdvanceRequest& setMerchantId(string merchantId) { DARABONBA_PTR_SET_VALUE(merchantId_, merchantId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CredentialProductVerifyV2AdvanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


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
    shared_ptr<Darabonba::IStream> imageFileObject_ = nullptr;
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
