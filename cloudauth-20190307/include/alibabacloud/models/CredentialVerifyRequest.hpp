// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CredentialVerifyRequestMerchantDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CredentialVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertNum, certNum_);
      DARABONBA_PTR_TO_JSON(CredName, credName_);
      DARABONBA_PTR_TO_JSON(CredType, credType_);
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(ImageContext, imageContext_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(IsCheck, isCheck_);
      DARABONBA_PTR_TO_JSON(IsOCR, isOCR_);
      DARABONBA_PTR_TO_JSON(MerchantDetail, merchantDetail_);
      DARABONBA_PTR_TO_JSON(MerchantId, merchantId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptModel, promptModel_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertNum, certNum_);
      DARABONBA_PTR_FROM_JSON(CredName, credName_);
      DARABONBA_PTR_FROM_JSON(CredType, credType_);
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(ImageContext, imageContext_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(IsCheck, isCheck_);
      DARABONBA_PTR_FROM_JSON(IsOCR, isOCR_);
      DARABONBA_PTR_FROM_JSON(MerchantDetail, merchantDetail_);
      DARABONBA_PTR_FROM_JSON(MerchantId, merchantId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptModel, promptModel_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CredentialVerifyRequest() = default ;
    CredentialVerifyRequest(const CredentialVerifyRequest &) = default ;
    CredentialVerifyRequest(CredentialVerifyRequest &&) = default ;
    CredentialVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialVerifyRequest() = default ;
    CredentialVerifyRequest& operator=(const CredentialVerifyRequest &) = default ;
    CredentialVerifyRequest& operator=(CredentialVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certNum_ != nullptr
        && this->credName_ != nullptr && this->credType_ != nullptr && this->identifyNum_ != nullptr && this->imageContext_ != nullptr && this->imageUrl_ != nullptr
        && this->isCheck_ != nullptr && this->isOCR_ != nullptr && this->merchantDetail_ != nullptr && this->merchantId_ != nullptr && this->productCode_ != nullptr
        && this->prompt_ != nullptr && this->promptModel_ != nullptr && this->userName_ != nullptr; };
    // certNum Field Functions 
    bool hasCertNum() const { return this->certNum_ != nullptr;};
    void deleteCertNum() { this->certNum_ = nullptr;};
    inline string certNum() const { DARABONBA_PTR_GET_DEFAULT(certNum_, "") };
    inline CredentialVerifyRequest& setCertNum(string certNum) { DARABONBA_PTR_SET_VALUE(certNum_, certNum) };


    // credName Field Functions 
    bool hasCredName() const { return this->credName_ != nullptr;};
    void deleteCredName() { this->credName_ = nullptr;};
    inline string credName() const { DARABONBA_PTR_GET_DEFAULT(credName_, "") };
    inline CredentialVerifyRequest& setCredName(string credName) { DARABONBA_PTR_SET_VALUE(credName_, credName) };


    // credType Field Functions 
    bool hasCredType() const { return this->credType_ != nullptr;};
    void deleteCredType() { this->credType_ = nullptr;};
    inline string credType() const { DARABONBA_PTR_GET_DEFAULT(credType_, "") };
    inline CredentialVerifyRequest& setCredType(string credType) { DARABONBA_PTR_SET_VALUE(credType_, credType) };


    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string identifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline CredentialVerifyRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // imageContext Field Functions 
    bool hasImageContext() const { return this->imageContext_ != nullptr;};
    void deleteImageContext() { this->imageContext_ = nullptr;};
    inline string imageContext() const { DARABONBA_PTR_GET_DEFAULT(imageContext_, "") };
    inline CredentialVerifyRequest& setImageContext(string imageContext) { DARABONBA_PTR_SET_VALUE(imageContext_, imageContext) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline CredentialVerifyRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // isCheck Field Functions 
    bool hasIsCheck() const { return this->isCheck_ != nullptr;};
    void deleteIsCheck() { this->isCheck_ = nullptr;};
    inline string isCheck() const { DARABONBA_PTR_GET_DEFAULT(isCheck_, "") };
    inline CredentialVerifyRequest& setIsCheck(string isCheck) { DARABONBA_PTR_SET_VALUE(isCheck_, isCheck) };


    // isOCR Field Functions 
    bool hasIsOCR() const { return this->isOCR_ != nullptr;};
    void deleteIsOCR() { this->isOCR_ = nullptr;};
    inline string isOCR() const { DARABONBA_PTR_GET_DEFAULT(isOCR_, "") };
    inline CredentialVerifyRequest& setIsOCR(string isOCR) { DARABONBA_PTR_SET_VALUE(isOCR_, isOCR) };


    // merchantDetail Field Functions 
    bool hasMerchantDetail() const { return this->merchantDetail_ != nullptr;};
    void deleteMerchantDetail() { this->merchantDetail_ = nullptr;};
    inline const vector<CredentialVerifyRequestMerchantDetail> & merchantDetail() const { DARABONBA_PTR_GET_CONST(merchantDetail_, vector<CredentialVerifyRequestMerchantDetail>) };
    inline vector<CredentialVerifyRequestMerchantDetail> merchantDetail() { DARABONBA_PTR_GET(merchantDetail_, vector<CredentialVerifyRequestMerchantDetail>) };
    inline CredentialVerifyRequest& setMerchantDetail(const vector<CredentialVerifyRequestMerchantDetail> & merchantDetail) { DARABONBA_PTR_SET_VALUE(merchantDetail_, merchantDetail) };
    inline CredentialVerifyRequest& setMerchantDetail(vector<CredentialVerifyRequestMerchantDetail> && merchantDetail) { DARABONBA_PTR_SET_RVALUE(merchantDetail_, merchantDetail) };


    // merchantId Field Functions 
    bool hasMerchantId() const { return this->merchantId_ != nullptr;};
    void deleteMerchantId() { this->merchantId_ = nullptr;};
    inline string merchantId() const { DARABONBA_PTR_GET_DEFAULT(merchantId_, "") };
    inline CredentialVerifyRequest& setMerchantId(string merchantId) { DARABONBA_PTR_SET_VALUE(merchantId_, merchantId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CredentialVerifyRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline CredentialVerifyRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptModel Field Functions 
    bool hasPromptModel() const { return this->promptModel_ != nullptr;};
    void deletePromptModel() { this->promptModel_ = nullptr;};
    inline string promptModel() const { DARABONBA_PTR_GET_DEFAULT(promptModel_, "") };
    inline CredentialVerifyRequest& setPromptModel(string promptModel) { DARABONBA_PTR_SET_VALUE(promptModel_, promptModel) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CredentialVerifyRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> certNum_ = nullptr;
    std::shared_ptr<string> credName_ = nullptr;
    std::shared_ptr<string> credType_ = nullptr;
    std::shared_ptr<string> identifyNum_ = nullptr;
    std::shared_ptr<string> imageContext_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<string> isCheck_ = nullptr;
    std::shared_ptr<string> isOCR_ = nullptr;
    std::shared_ptr<vector<CredentialVerifyRequestMerchantDetail>> merchantDetail_ = nullptr;
    std::shared_ptr<string> merchantId_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> promptModel_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
