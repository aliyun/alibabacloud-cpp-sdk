// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALVERIFYINTLADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALVERIFYINTLADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CredentialVerifyIntlAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialVerifyIntlAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredName, credName_);
      DARABONBA_PTR_TO_JSON(CredType, credType_);
      DARABONBA_TO_JSON(ImageFile, imageFileObject_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialVerifyIntlAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredName, credName_);
      DARABONBA_PTR_FROM_JSON(CredType, credType_);
      DARABONBA_FROM_JSON(ImageFile, imageFileObject_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    CredentialVerifyIntlAdvanceRequest() = default ;
    CredentialVerifyIntlAdvanceRequest(const CredentialVerifyIntlAdvanceRequest &) = default ;
    CredentialVerifyIntlAdvanceRequest(CredentialVerifyIntlAdvanceRequest &&) = default ;
    CredentialVerifyIntlAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialVerifyIntlAdvanceRequest() = default ;
    CredentialVerifyIntlAdvanceRequest& operator=(const CredentialVerifyIntlAdvanceRequest &) = default ;
    CredentialVerifyIntlAdvanceRequest& operator=(CredentialVerifyIntlAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credName_ == nullptr
        && return this->credType_ == nullptr && return this->imageFileObject_ == nullptr && return this->imageUrl_ == nullptr && return this->productCode_ == nullptr; };
    // credName Field Functions 
    bool hasCredName() const { return this->credName_ != nullptr;};
    void deleteCredName() { this->credName_ = nullptr;};
    inline string credName() const { DARABONBA_PTR_GET_DEFAULT(credName_, "") };
    inline CredentialVerifyIntlAdvanceRequest& setCredName(string credName) { DARABONBA_PTR_SET_VALUE(credName_, credName) };


    // credType Field Functions 
    bool hasCredType() const { return this->credType_ != nullptr;};
    void deleteCredType() { this->credType_ = nullptr;};
    inline string credType() const { DARABONBA_PTR_GET_DEFAULT(credType_, "") };
    inline CredentialVerifyIntlAdvanceRequest& setCredType(string credType) { DARABONBA_PTR_SET_VALUE(credType_, credType) };


    // imageFileObject Field Functions 
    bool hasImageFileObject() const { return this->imageFileObject_ != nullptr;};
    void deleteImageFileObject() { this->imageFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageFileObject() const { DARABONBA_GET(imageFileObject_) };
    inline CredentialVerifyIntlAdvanceRequest& setImageFileObject(shared_ptr<Darabonba::IStream> imageFileObject) { DARABONBA_SET_VALUE(imageFileObject_, imageFileObject) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CredentialVerifyIntlAdvanceRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CredentialVerifyIntlAdvanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // Credential name (numeric code):
    // 
    // - Starting with 03: Enterprise Qualification
    //   - 0301: Mainland China Business License
    // - Starting with 04, Transaction Voucher
    //   - 0401: Bank Statement
    //   - 0402: Pay Slip
    //   - 0403: Utility Bill
    //   - 0405: Credit Card Statement
    //   - 0499: Others
    // 
    // This parameter is required.
    std::shared_ptr<string> credName_ = nullptr;
    // Credential type:
    // 
    // - 03: Enterprise Qualification
    // - 04: Transaction Voucher
    // 
    // This parameter is required.
    std::shared_ptr<string> credType_ = nullptr;
    // Image input stream.
    // > Choose either ImageUrl or ImageFile.
    shared_ptr<Darabonba::IStream> imageFileObject_ = nullptr;
    // The URL of the image.
    // > Choose either ImageUrl or ImageFile.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // Invocation mode:
    // - ANTI_FAKE_CHECK: Image quality and tampering detection.
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
