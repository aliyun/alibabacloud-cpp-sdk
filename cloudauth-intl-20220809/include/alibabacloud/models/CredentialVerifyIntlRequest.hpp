// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALVERIFYINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALVERIFYINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CredentialVerifyIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialVerifyIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredName, credName_);
      DARABONBA_PTR_TO_JSON(CredType, credType_);
      DARABONBA_PTR_TO_JSON(ImageFile, imageFile_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialVerifyIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredName, credName_);
      DARABONBA_PTR_FROM_JSON(CredType, credType_);
      DARABONBA_PTR_FROM_JSON(ImageFile, imageFile_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    CredentialVerifyIntlRequest() = default ;
    CredentialVerifyIntlRequest(const CredentialVerifyIntlRequest &) = default ;
    CredentialVerifyIntlRequest(CredentialVerifyIntlRequest &&) = default ;
    CredentialVerifyIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialVerifyIntlRequest() = default ;
    CredentialVerifyIntlRequest& operator=(const CredentialVerifyIntlRequest &) = default ;
    CredentialVerifyIntlRequest& operator=(CredentialVerifyIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credName_ == nullptr
        && this->credType_ == nullptr && this->imageFile_ == nullptr && this->imageUrl_ == nullptr && this->productCode_ == nullptr; };
    // credName Field Functions 
    bool hasCredName() const { return this->credName_ != nullptr;};
    void deleteCredName() { this->credName_ = nullptr;};
    inline string getCredName() const { DARABONBA_PTR_GET_DEFAULT(credName_, "") };
    inline CredentialVerifyIntlRequest& setCredName(string credName) { DARABONBA_PTR_SET_VALUE(credName_, credName) };


    // credType Field Functions 
    bool hasCredType() const { return this->credType_ != nullptr;};
    void deleteCredType() { this->credType_ = nullptr;};
    inline string getCredType() const { DARABONBA_PTR_GET_DEFAULT(credType_, "") };
    inline CredentialVerifyIntlRequest& setCredType(string credType) { DARABONBA_PTR_SET_VALUE(credType_, credType) };


    // imageFile Field Functions 
    bool hasImageFile() const { return this->imageFile_ != nullptr;};
    void deleteImageFile() { this->imageFile_ = nullptr;};
    inline string getImageFile() const { DARABONBA_PTR_GET_DEFAULT(imageFile_, "") };
    inline CredentialVerifyIntlRequest& setImageFile(string imageFile) { DARABONBA_PTR_SET_VALUE(imageFile_, imageFile) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CredentialVerifyIntlRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CredentialVerifyIntlRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // The credential name (specified as a numeric code). Valid values:
    // 
    // - Codes starting with 03: enterprise qualification
    //   - 0301: business license issued in the Chinese mainland
    // - Codes starting with 04: transaction voucher
    //   - 0401: bank statement
    //   - 0402: payslip
    //   - 0403: utility bill
    //   - 0405: credit card statement
    //   - 0499: other.
    // 
    // This parameter is required.
    shared_ptr<string> credName_ {};
    // The credential type. Valid values:
    // 
    // - 03: enterprise qualification
    // - 04: transaction voucher.
    // 
    // This parameter is required.
    shared_ptr<string> credType_ {};
    // The image input stream.
    // > Specify either ImageUrl or ImageFile.
    shared_ptr<string> imageFile_ {};
    // The URL of the image.
    // > Specify either ImageUrl or ImageFile.
    shared_ptr<string> imageUrl_ {};
    // The call mode. Valid values:
    // - ANTI_FAKE_CHECK: image quality and tampering detection.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
