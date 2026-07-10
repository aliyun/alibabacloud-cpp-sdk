// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALVERIFYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALVERIFYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CredentialVerifyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialVerifyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertNum, certNum_);
      DARABONBA_PTR_TO_JSON(CredName, credName_);
      DARABONBA_PTR_TO_JSON(CredType, credType_);
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(ImageContext, imageContext_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(IsCheck, isCheck_);
      DARABONBA_PTR_TO_JSON(IsOCR, isOCR_);
      DARABONBA_PTR_TO_JSON(MerchantDetail, merchantDetailShrink_);
      DARABONBA_PTR_TO_JSON(MerchantId, merchantId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptModel, promptModel_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialVerifyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertNum, certNum_);
      DARABONBA_PTR_FROM_JSON(CredName, credName_);
      DARABONBA_PTR_FROM_JSON(CredType, credType_);
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(ImageContext, imageContext_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(IsCheck, isCheck_);
      DARABONBA_PTR_FROM_JSON(IsOCR, isOCR_);
      DARABONBA_PTR_FROM_JSON(MerchantDetail, merchantDetailShrink_);
      DARABONBA_PTR_FROM_JSON(MerchantId, merchantId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptModel, promptModel_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CredentialVerifyShrinkRequest() = default ;
    CredentialVerifyShrinkRequest(const CredentialVerifyShrinkRequest &) = default ;
    CredentialVerifyShrinkRequest(CredentialVerifyShrinkRequest &&) = default ;
    CredentialVerifyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialVerifyShrinkRequest() = default ;
    CredentialVerifyShrinkRequest& operator=(const CredentialVerifyShrinkRequest &) = default ;
    CredentialVerifyShrinkRequest& operator=(CredentialVerifyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certNum_ == nullptr
        && this->credName_ == nullptr && this->credType_ == nullptr && this->identifyNum_ == nullptr && this->imageContext_ == nullptr && this->imageUrl_ == nullptr
        && this->isCheck_ == nullptr && this->isOCR_ == nullptr && this->merchantDetailShrink_ == nullptr && this->merchantId_ == nullptr && this->productCode_ == nullptr
        && this->prompt_ == nullptr && this->promptModel_ == nullptr && this->userName_ == nullptr; };
    // certNum Field Functions 
    bool hasCertNum() const { return this->certNum_ != nullptr;};
    void deleteCertNum() { this->certNum_ = nullptr;};
    inline string getCertNum() const { DARABONBA_PTR_GET_DEFAULT(certNum_, "") };
    inline CredentialVerifyShrinkRequest& setCertNum(string certNum) { DARABONBA_PTR_SET_VALUE(certNum_, certNum) };


    // credName Field Functions 
    bool hasCredName() const { return this->credName_ != nullptr;};
    void deleteCredName() { this->credName_ = nullptr;};
    inline string getCredName() const { DARABONBA_PTR_GET_DEFAULT(credName_, "") };
    inline CredentialVerifyShrinkRequest& setCredName(string credName) { DARABONBA_PTR_SET_VALUE(credName_, credName) };


    // credType Field Functions 
    bool hasCredType() const { return this->credType_ != nullptr;};
    void deleteCredType() { this->credType_ = nullptr;};
    inline string getCredType() const { DARABONBA_PTR_GET_DEFAULT(credType_, "") };
    inline CredentialVerifyShrinkRequest& setCredType(string credType) { DARABONBA_PTR_SET_VALUE(credType_, credType) };


    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string getIdentifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline CredentialVerifyShrinkRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // imageContext Field Functions 
    bool hasImageContext() const { return this->imageContext_ != nullptr;};
    void deleteImageContext() { this->imageContext_ = nullptr;};
    inline string getImageContext() const { DARABONBA_PTR_GET_DEFAULT(imageContext_, "") };
    inline CredentialVerifyShrinkRequest& setImageContext(string imageContext) { DARABONBA_PTR_SET_VALUE(imageContext_, imageContext) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CredentialVerifyShrinkRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // isCheck Field Functions 
    bool hasIsCheck() const { return this->isCheck_ != nullptr;};
    void deleteIsCheck() { this->isCheck_ = nullptr;};
    inline string getIsCheck() const { DARABONBA_PTR_GET_DEFAULT(isCheck_, "") };
    inline CredentialVerifyShrinkRequest& setIsCheck(string isCheck) { DARABONBA_PTR_SET_VALUE(isCheck_, isCheck) };


    // isOCR Field Functions 
    bool hasIsOCR() const { return this->isOCR_ != nullptr;};
    void deleteIsOCR() { this->isOCR_ = nullptr;};
    inline string getIsOCR() const { DARABONBA_PTR_GET_DEFAULT(isOCR_, "") };
    inline CredentialVerifyShrinkRequest& setIsOCR(string isOCR) { DARABONBA_PTR_SET_VALUE(isOCR_, isOCR) };


    // merchantDetailShrink Field Functions 
    bool hasMerchantDetailShrink() const { return this->merchantDetailShrink_ != nullptr;};
    void deleteMerchantDetailShrink() { this->merchantDetailShrink_ = nullptr;};
    inline string getMerchantDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(merchantDetailShrink_, "") };
    inline CredentialVerifyShrinkRequest& setMerchantDetailShrink(string merchantDetailShrink) { DARABONBA_PTR_SET_VALUE(merchantDetailShrink_, merchantDetailShrink) };


    // merchantId Field Functions 
    bool hasMerchantId() const { return this->merchantId_ != nullptr;};
    void deleteMerchantId() { this->merchantId_ = nullptr;};
    inline string getMerchantId() const { DARABONBA_PTR_GET_DEFAULT(merchantId_, "") };
    inline CredentialVerifyShrinkRequest& setMerchantId(string merchantId) { DARABONBA_PTR_SET_VALUE(merchantId_, merchantId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CredentialVerifyShrinkRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline CredentialVerifyShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptModel Field Functions 
    bool hasPromptModel() const { return this->promptModel_ != nullptr;};
    void deletePromptModel() { this->promptModel_ = nullptr;};
    inline string getPromptModel() const { DARABONBA_PTR_GET_DEFAULT(promptModel_, "") };
    inline CredentialVerifyShrinkRequest& setPromptModel(string promptModel) { DARABONBA_PTR_SET_VALUE(promptModel_, promptModel) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CredentialVerifyShrinkRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The certificate number.
    shared_ptr<string> certNum_ {};
    // The credential name. Valid values:
    // 
    // - 01: personal card and certificate
    //   - 0101: ID card
    //   - 0102: bank card
    //   - 0104: teacher qualification certificate
    //   - 0107: student ID card
    // - 02: business scenario
    //   - 0201: storefront photo
    //   - 0202: counter photo
    //   - 0203: scene photo
    // - 03: enterprise qualification
    //   - 0301: business license.
    shared_ptr<string> credName_ {};
    // The credential type. Valid values:
    // 
    // - 01: personal card and certificate
    // - 02: business scenario
    // - 03: enterprise qualification.
    shared_ptr<string> credType_ {};
    // The ID card number.
    shared_ptr<string> identifyNum_ {};
    // The Base64-encoded image. Specify either imageUrl or imageContext.
    shared_ptr<string> imageContext_ {};
    // The image URL. Specify either imageUrl or imageContext.
    shared_ptr<string> imageUrl_ {};
    // Specifies whether to enable authoritative verification. Valid values:
    // 
    // - **0**: Disabled.
    // - **1**: Enabled.
    shared_ptr<string> isCheck_ {};
    // Specifies whether to enable optical character recognition (OCR). Valid values:
    // 
    // - **0**: Disabled.
    // - **1**: Enabled.
    // 
    // You can set **isOCR** to **1** only when **CredType** is set to **01**.
    shared_ptr<string> isOCR_ {};
    // This parameter is required when PromptModel is set to DEFAULT.
    shared_ptr<string> merchantDetailShrink_ {};
    // The merchant ID. This parameter is required when **CredName** is set to **02**.
    shared_ptr<string> merchantId_ {};
    // The call mode. Valid values:
    // 
    // * ANTI_FAKE_CHECK: image anti-forgery detection.
    // 
    // * ANTI_FAKE_VL: image anti-forgery detection and semantic understanding.
    // 
    // * IMAGE_VL_COG: image semantic understanding.
    // 
    // Default value: ANTI_FAKE_CHECK.
    // 
    // ProductCode can be set to ANTI_FAKE_VL or IMAGE_VL_COG only when CredType is set to 02.
    shared_ptr<string> productCode_ {};
    // The custom prompt content for image semantic understanding.
    // 
    // This parameter is required when PromptModel is set to CUSTOM.
    shared_ptr<string> prompt_ {};
    // The method to obtain the prompt for image semantic understanding. Valid values:
    // 
    // * DEFAULT: system default.
    // 
    // * CUSTOM: custom.
    // 
    // Note: This parameter is required when ProductCode is set to ANTI_FAKE_VL or IMAGE_VL_COG.
    shared_ptr<string> promptModel_ {};
    // The name.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
