// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALSUBMITINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALSUBMITINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CredentialSubmitIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialSubmitIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckRuleConfig, checkRuleConfig_);
      DARABONBA_PTR_TO_JSON(CredentialOcrPictureBase64, credentialOcrPictureBase64_);
      DARABONBA_PTR_TO_JSON(CredentialOcrPictureUrl, credentialOcrPictureUrl_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(FileInputType, fileInputType_);
      DARABONBA_PTR_TO_JSON(FraudCheck, fraudCheck_);
      DARABONBA_PTR_TO_JSON(IdQuality, idQuality_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(OcrArea, ocrArea_);
      DARABONBA_PTR_TO_JSON(OcrTranslation, ocrTranslation_);
      DARABONBA_PTR_TO_JSON(OcrValueStandard, ocrValueStandard_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialSubmitIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRuleConfig, checkRuleConfig_);
      DARABONBA_PTR_FROM_JSON(CredentialOcrPictureBase64, credentialOcrPictureBase64_);
      DARABONBA_PTR_FROM_JSON(CredentialOcrPictureUrl, credentialOcrPictureUrl_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(FileInputType, fileInputType_);
      DARABONBA_PTR_FROM_JSON(FraudCheck, fraudCheck_);
      DARABONBA_PTR_FROM_JSON(IdQuality, idQuality_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(OcrArea, ocrArea_);
      DARABONBA_PTR_FROM_JSON(OcrTranslation, ocrTranslation_);
      DARABONBA_PTR_FROM_JSON(OcrValueStandard, ocrValueStandard_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
    };
    CredentialSubmitIntlRequest() = default ;
    CredentialSubmitIntlRequest(const CredentialSubmitIntlRequest &) = default ;
    CredentialSubmitIntlRequest(CredentialSubmitIntlRequest &&) = default ;
    CredentialSubmitIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialSubmitIntlRequest() = default ;
    CredentialSubmitIntlRequest& operator=(const CredentialSubmitIntlRequest &) = default ;
    CredentialSubmitIntlRequest& operator=(CredentialSubmitIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkRuleConfig_ == nullptr
        && this->credentialOcrPictureBase64_ == nullptr && this->credentialOcrPictureUrl_ == nullptr && this->docType_ == nullptr && this->fileInputType_ == nullptr && this->fraudCheck_ == nullptr
        && this->idQuality_ == nullptr && this->merchantBizId_ == nullptr && this->ocrArea_ == nullptr && this->ocrTranslation_ == nullptr && this->ocrValueStandard_ == nullptr
        && this->productCode_ == nullptr && this->sceneCode_ == nullptr; };
    // checkRuleConfig Field Functions 
    bool hasCheckRuleConfig() const { return this->checkRuleConfig_ != nullptr;};
    void deleteCheckRuleConfig() { this->checkRuleConfig_ = nullptr;};
    inline string getCheckRuleConfig() const { DARABONBA_PTR_GET_DEFAULT(checkRuleConfig_, "") };
    inline CredentialSubmitIntlRequest& setCheckRuleConfig(string checkRuleConfig) { DARABONBA_PTR_SET_VALUE(checkRuleConfig_, checkRuleConfig) };


    // credentialOcrPictureBase64 Field Functions 
    bool hasCredentialOcrPictureBase64() const { return this->credentialOcrPictureBase64_ != nullptr;};
    void deleteCredentialOcrPictureBase64() { this->credentialOcrPictureBase64_ = nullptr;};
    inline string getCredentialOcrPictureBase64() const { DARABONBA_PTR_GET_DEFAULT(credentialOcrPictureBase64_, "") };
    inline CredentialSubmitIntlRequest& setCredentialOcrPictureBase64(string credentialOcrPictureBase64) { DARABONBA_PTR_SET_VALUE(credentialOcrPictureBase64_, credentialOcrPictureBase64) };


    // credentialOcrPictureUrl Field Functions 
    bool hasCredentialOcrPictureUrl() const { return this->credentialOcrPictureUrl_ != nullptr;};
    void deleteCredentialOcrPictureUrl() { this->credentialOcrPictureUrl_ = nullptr;};
    inline string getCredentialOcrPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(credentialOcrPictureUrl_, "") };
    inline CredentialSubmitIntlRequest& setCredentialOcrPictureUrl(string credentialOcrPictureUrl) { DARABONBA_PTR_SET_VALUE(credentialOcrPictureUrl_, credentialOcrPictureUrl) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline CredentialSubmitIntlRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // fileInputType Field Functions 
    bool hasFileInputType() const { return this->fileInputType_ != nullptr;};
    void deleteFileInputType() { this->fileInputType_ = nullptr;};
    inline string getFileInputType() const { DARABONBA_PTR_GET_DEFAULT(fileInputType_, "") };
    inline CredentialSubmitIntlRequest& setFileInputType(string fileInputType) { DARABONBA_PTR_SET_VALUE(fileInputType_, fileInputType) };


    // fraudCheck Field Functions 
    bool hasFraudCheck() const { return this->fraudCheck_ != nullptr;};
    void deleteFraudCheck() { this->fraudCheck_ = nullptr;};
    inline string getFraudCheck() const { DARABONBA_PTR_GET_DEFAULT(fraudCheck_, "") };
    inline CredentialSubmitIntlRequest& setFraudCheck(string fraudCheck) { DARABONBA_PTR_SET_VALUE(fraudCheck_, fraudCheck) };


    // idQuality Field Functions 
    bool hasIdQuality() const { return this->idQuality_ != nullptr;};
    void deleteIdQuality() { this->idQuality_ = nullptr;};
    inline string getIdQuality() const { DARABONBA_PTR_GET_DEFAULT(idQuality_, "") };
    inline CredentialSubmitIntlRequest& setIdQuality(string idQuality) { DARABONBA_PTR_SET_VALUE(idQuality_, idQuality) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline CredentialSubmitIntlRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // ocrArea Field Functions 
    bool hasOcrArea() const { return this->ocrArea_ != nullptr;};
    void deleteOcrArea() { this->ocrArea_ = nullptr;};
    inline string getOcrArea() const { DARABONBA_PTR_GET_DEFAULT(ocrArea_, "") };
    inline CredentialSubmitIntlRequest& setOcrArea(string ocrArea) { DARABONBA_PTR_SET_VALUE(ocrArea_, ocrArea) };


    // ocrTranslation Field Functions 
    bool hasOcrTranslation() const { return this->ocrTranslation_ != nullptr;};
    void deleteOcrTranslation() { this->ocrTranslation_ = nullptr;};
    inline string getOcrTranslation() const { DARABONBA_PTR_GET_DEFAULT(ocrTranslation_, "") };
    inline CredentialSubmitIntlRequest& setOcrTranslation(string ocrTranslation) { DARABONBA_PTR_SET_VALUE(ocrTranslation_, ocrTranslation) };


    // ocrValueStandard Field Functions 
    bool hasOcrValueStandard() const { return this->ocrValueStandard_ != nullptr;};
    void deleteOcrValueStandard() { this->ocrValueStandard_ = nullptr;};
    inline string getOcrValueStandard() const { DARABONBA_PTR_GET_DEFAULT(ocrValueStandard_, "") };
    inline CredentialSubmitIntlRequest& setOcrValueStandard(string ocrValueStandard) { DARABONBA_PTR_SET_VALUE(ocrValueStandard_, ocrValueStandard) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CredentialSubmitIntlRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline CredentialSubmitIntlRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


  protected:
    // The field validation rule configuration, which is a JSON string.
    shared_ptr<string> checkRuleConfig_ {};
    // The Base64-encoded image. If you choose this method to upload the image, check the image size and do not upload an excessively large image.
    shared_ptr<string> credentialOcrPictureBase64_ {};
    // The image URL, which must be a publicly accessible HTTP or HTTPS link.
    shared_ptr<string> credentialOcrPictureUrl_ {};
    // The credential type. Valid values:
    // - 02: Vehicle registration certificate.
    // 
    // This parameter is required.
    shared_ptr<string> docType_ {};
    // The material input type. Valid values:
    // 
    // - IMAGE: Image. This is the default value.
    // 
    // - PDF: PDF format.
    shared_ptr<string> fileInputType_ {};
    // Specifies whether to enable tampering detection. Valid values:
    // - true: Enabled.
    // - false: Disabled.
    // 
    // This parameter is required.
    shared_ptr<string> fraudCheck_ {};
    // Specifies whether to enable quality detection. Valid values: Y: Enabled. N: Disabled.
    shared_ptr<string> idQuality_ {};
    // The custom unique business identifier on the merchant side, which is used for subsequent troubleshooting. The identifier can be up to 32 characters in length and can contain letters and digits. Make sure that the identifier is unique.
    // 
    // This parameter is required.
    shared_ptr<string> merchantBizId_ {};
    // The extraction type. Valid values:
    // 
    // - 0201: Thailand vehicle registration certificate.
    // 
    // This parameter is required.
    shared_ptr<string> ocrArea_ {};
    // Specifies whether to enable translation. Valid values: 0: Disabled. 1: Enabled.
    shared_ptr<string> ocrTranslation_ {};
    // Specifies whether to enable OCR result standardization. Valid values: 0: Disabled. 1: Enabled.
    shared_ptr<string> ocrValueStandard_ {};
    // The product solution to be integrated. Valid value: CREDENTIAL_RECOGNITION.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The custom authentication scene ID, which is used to query related records in the console. The ID can be up to 10 characters in length and can contain letters, digits, and underscores (_).
    // 
    // This parameter is required.
    shared_ptr<string> sceneCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
