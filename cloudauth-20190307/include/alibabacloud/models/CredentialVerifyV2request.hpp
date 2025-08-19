// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALVERIFYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALVERIFYV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CredentialVerifyV2RequestMerchantDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CredentialVerifyV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialVerifyV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(CertNum, certNum_);
      DARABONBA_PTR_TO_JSON(CredName, credName_);
      DARABONBA_PTR_TO_JSON(CredType, credType_);
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(ImageContext, imageContext_);
      DARABONBA_PTR_TO_JSON(ImageFile, imageFile_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(IsCheck, isCheck_);
      DARABONBA_PTR_TO_JSON(IsOcr, isOcr_);
      DARABONBA_PTR_TO_JSON(MerchantDetail, merchantDetail_);
      DARABONBA_PTR_TO_JSON(MerchantId, merchantId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptModel, promptModel_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialVerifyV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(CertNum, certNum_);
      DARABONBA_PTR_FROM_JSON(CredName, credName_);
      DARABONBA_PTR_FROM_JSON(CredType, credType_);
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(ImageContext, imageContext_);
      DARABONBA_PTR_FROM_JSON(ImageFile, imageFile_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(IsCheck, isCheck_);
      DARABONBA_PTR_FROM_JSON(IsOcr, isOcr_);
      DARABONBA_PTR_FROM_JSON(MerchantDetail, merchantDetail_);
      DARABONBA_PTR_FROM_JSON(MerchantId, merchantId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptModel, promptModel_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CredentialVerifyV2Request() = default ;
    CredentialVerifyV2Request(const CredentialVerifyV2Request &) = default ;
    CredentialVerifyV2Request(CredentialVerifyV2Request &&) = default ;
    CredentialVerifyV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialVerifyV2Request() = default ;
    CredentialVerifyV2Request& operator=(const CredentialVerifyV2Request &) = default ;
    CredentialVerifyV2Request& operator=(CredentialVerifyV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certNum_ != nullptr
        && this->credName_ != nullptr && this->credType_ != nullptr && this->identifyNum_ != nullptr && this->imageContext_ != nullptr && this->imageFile_ != nullptr
        && this->imageUrl_ != nullptr && this->isCheck_ != nullptr && this->isOcr_ != nullptr && this->merchantDetail_ != nullptr && this->merchantId_ != nullptr
        && this->productCode_ != nullptr && this->prompt_ != nullptr && this->promptModel_ != nullptr && this->userName_ != nullptr; };
    // certNum Field Functions 
    bool hasCertNum() const { return this->certNum_ != nullptr;};
    void deleteCertNum() { this->certNum_ = nullptr;};
    inline string certNum() const { DARABONBA_PTR_GET_DEFAULT(certNum_, "") };
    inline CredentialVerifyV2Request& setCertNum(string certNum) { DARABONBA_PTR_SET_VALUE(certNum_, certNum) };


    // credName Field Functions 
    bool hasCredName() const { return this->credName_ != nullptr;};
    void deleteCredName() { this->credName_ = nullptr;};
    inline string credName() const { DARABONBA_PTR_GET_DEFAULT(credName_, "") };
    inline CredentialVerifyV2Request& setCredName(string credName) { DARABONBA_PTR_SET_VALUE(credName_, credName) };


    // credType Field Functions 
    bool hasCredType() const { return this->credType_ != nullptr;};
    void deleteCredType() { this->credType_ = nullptr;};
    inline string credType() const { DARABONBA_PTR_GET_DEFAULT(credType_, "") };
    inline CredentialVerifyV2Request& setCredType(string credType) { DARABONBA_PTR_SET_VALUE(credType_, credType) };


    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string identifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline CredentialVerifyV2Request& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // imageContext Field Functions 
    bool hasImageContext() const { return this->imageContext_ != nullptr;};
    void deleteImageContext() { this->imageContext_ = nullptr;};
    inline string imageContext() const { DARABONBA_PTR_GET_DEFAULT(imageContext_, "") };
    inline CredentialVerifyV2Request& setImageContext(string imageContext) { DARABONBA_PTR_SET_VALUE(imageContext_, imageContext) };


    // imageFile Field Functions 
    bool hasImageFile() const { return this->imageFile_ != nullptr;};
    void deleteImageFile() { this->imageFile_ = nullptr;};
    inline string imageFile() const { DARABONBA_PTR_GET_DEFAULT(imageFile_, "") };
    inline CredentialVerifyV2Request& setImageFile(string imageFile) { DARABONBA_PTR_SET_VALUE(imageFile_, imageFile) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CredentialVerifyV2Request& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // isCheck Field Functions 
    bool hasIsCheck() const { return this->isCheck_ != nullptr;};
    void deleteIsCheck() { this->isCheck_ = nullptr;};
    inline string isCheck() const { DARABONBA_PTR_GET_DEFAULT(isCheck_, "") };
    inline CredentialVerifyV2Request& setIsCheck(string isCheck) { DARABONBA_PTR_SET_VALUE(isCheck_, isCheck) };


    // isOcr Field Functions 
    bool hasIsOcr() const { return this->isOcr_ != nullptr;};
    void deleteIsOcr() { this->isOcr_ = nullptr;};
    inline string isOcr() const { DARABONBA_PTR_GET_DEFAULT(isOcr_, "") };
    inline CredentialVerifyV2Request& setIsOcr(string isOcr) { DARABONBA_PTR_SET_VALUE(isOcr_, isOcr) };


    // merchantDetail Field Functions 
    bool hasMerchantDetail() const { return this->merchantDetail_ != nullptr;};
    void deleteMerchantDetail() { this->merchantDetail_ = nullptr;};
    inline const vector<CredentialVerifyV2RequestMerchantDetail> & merchantDetail() const { DARABONBA_PTR_GET_CONST(merchantDetail_, vector<CredentialVerifyV2RequestMerchantDetail>) };
    inline vector<CredentialVerifyV2RequestMerchantDetail> merchantDetail() { DARABONBA_PTR_GET(merchantDetail_, vector<CredentialVerifyV2RequestMerchantDetail>) };
    inline CredentialVerifyV2Request& setMerchantDetail(const vector<CredentialVerifyV2RequestMerchantDetail> & merchantDetail) { DARABONBA_PTR_SET_VALUE(merchantDetail_, merchantDetail) };
    inline CredentialVerifyV2Request& setMerchantDetail(vector<CredentialVerifyV2RequestMerchantDetail> && merchantDetail) { DARABONBA_PTR_SET_RVALUE(merchantDetail_, merchantDetail) };


    // merchantId Field Functions 
    bool hasMerchantId() const { return this->merchantId_ != nullptr;};
    void deleteMerchantId() { this->merchantId_ = nullptr;};
    inline string merchantId() const { DARABONBA_PTR_GET_DEFAULT(merchantId_, "") };
    inline CredentialVerifyV2Request& setMerchantId(string merchantId) { DARABONBA_PTR_SET_VALUE(merchantId_, merchantId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CredentialVerifyV2Request& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline CredentialVerifyV2Request& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptModel Field Functions 
    bool hasPromptModel() const { return this->promptModel_ != nullptr;};
    void deletePromptModel() { this->promptModel_ = nullptr;};
    inline string promptModel() const { DARABONBA_PTR_GET_DEFAULT(promptModel_, "") };
    inline CredentialVerifyV2Request& setPromptModel(string promptModel) { DARABONBA_PTR_SET_VALUE(promptModel_, promptModel) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CredentialVerifyV2Request& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Relevant certificate number.
    std::shared_ptr<string> certNum_ = nullptr;
    // - 01: Personal ID cards
    //   - 0101: ID card
    //   - 0102: Bank card
    //   - 0104: Teacher qualification certificate
    //   - 0107: Student ID card
    // - 02: Business scenario
    //   - 0201: Storefront photo
    //   - 0202: Counter photo
    //   - 0203: Scene photo
    // - 03: Corporate qualifications
    //   - 0301: Business license
    std::shared_ptr<string> credName_ = nullptr;
    // Credential type:
    // 
    // - 01: Personal ID cards
    // - 02: Business scenario
    // - 03: Corporate qualifications
    std::shared_ptr<string> credType_ = nullptr;
    // ID number.
    std::shared_ptr<string> identifyNum_ = nullptr;
    // Base64 encoded image, choose one from `imageUrl`, `imageFile`, or `imageContext`.
    std::shared_ptr<string> imageContext_ = nullptr;
    // Image input stream, choose one from `imageUrl`, `imageFile`, or `imageContext`.
    std::shared_ptr<string> imageFile_ = nullptr;
    // Image URL, choose one from `imageUrl`, `imageFile`, or `imageContext`.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // Whether to enable authoritative authentication
    // 
    // - ****0****: No
    // - **1**: Yes
    std::shared_ptr<string> isCheck_ = nullptr;
    // Whether to use OCR
    std::shared_ptr<string> isOcr_ = nullptr;
    // Merchant details:
    // 
    // MerchantName: Merchant name
    // 
    // BusinessType: Industry information
    // 
    // BusinessContent: Business content
    // 
    // This field is required when PromptModel is set to DEFAULT.
    std::shared_ptr<vector<CredentialVerifyV2RequestMerchantDetail>> merchantDetail_ = nullptr;
    // Merchant ID. This field is required when ****CredName**** is set to **02**.
    std::shared_ptr<string> merchantId_ = nullptr;
    // Invocation mode:
    // 
    // - ANTI_FAKE_CHECK: Image anti-forgery check
    // 
    // - ANTI_FAKE_VL: Image anti-forgery check and semantic understanding
    // 
    // - IMAGE_VL_COG: Image semantic understanding
    // 
    // Default value: ANTI_FAKE_CHECK
    // 
    // When CredType is set to 02, ProductCode can only be ANTI_FAKE_VL or IMAGE_VL_COG.
    std::shared_ptr<string> productCode_ = nullptr;
    // Customer-defined prompt content for image semantic understanding.
    // 
    // This field is required when PromptModel is set to CUSTOM.
    std::shared_ptr<string> prompt_ = nullptr;
    // Prompt acquisition method for image semantic understanding:
    // 
    // - DEFAULT: System default
    // 
    // - CUSTOM: Customer-defined
    // 
    // Note: When ProductCode is set to ANTI_FAKE_VL or IMAGE_VL_COG, this parameter must be provided.
    std::shared_ptr<string> promptModel_ = nullptr;
    // Name.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
