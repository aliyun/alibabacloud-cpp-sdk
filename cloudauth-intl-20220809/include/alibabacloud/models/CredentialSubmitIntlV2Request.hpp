// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALSUBMITINTLV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALSUBMITINTLV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CredentialSubmitIntlV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialSubmitIntlV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(CheckRuleConfig, checkRuleConfig_);
      DARABONBA_PTR_TO_JSON(CredentialOcrPictureBase64, credentialOcrPictureBase64_);
      DARABONBA_PTR_TO_JSON(CredentialOcrPictureFile, credentialOcrPictureFile_);
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
    friend void from_json(const Darabonba::Json& j, CredentialSubmitIntlV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRuleConfig, checkRuleConfig_);
      DARABONBA_PTR_FROM_JSON(CredentialOcrPictureBase64, credentialOcrPictureBase64_);
      DARABONBA_PTR_FROM_JSON(CredentialOcrPictureFile, credentialOcrPictureFile_);
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
    CredentialSubmitIntlV2Request() = default ;
    CredentialSubmitIntlV2Request(const CredentialSubmitIntlV2Request &) = default ;
    CredentialSubmitIntlV2Request(CredentialSubmitIntlV2Request &&) = default ;
    CredentialSubmitIntlV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialSubmitIntlV2Request() = default ;
    CredentialSubmitIntlV2Request& operator=(const CredentialSubmitIntlV2Request &) = default ;
    CredentialSubmitIntlV2Request& operator=(CredentialSubmitIntlV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkRuleConfig_ == nullptr
        && this->credentialOcrPictureBase64_ == nullptr && this->credentialOcrPictureFile_ == nullptr && this->credentialOcrPictureUrl_ == nullptr && this->docType_ == nullptr && this->fileInputType_ == nullptr
        && this->fraudCheck_ == nullptr && this->idQuality_ == nullptr && this->merchantBizId_ == nullptr && this->ocrArea_ == nullptr && this->ocrTranslation_ == nullptr
        && this->ocrValueStandard_ == nullptr && this->productCode_ == nullptr && this->sceneCode_ == nullptr; };
    // checkRuleConfig Field Functions 
    bool hasCheckRuleConfig() const { return this->checkRuleConfig_ != nullptr;};
    void deleteCheckRuleConfig() { this->checkRuleConfig_ = nullptr;};
    inline string getCheckRuleConfig() const { DARABONBA_PTR_GET_DEFAULT(checkRuleConfig_, "") };
    inline CredentialSubmitIntlV2Request& setCheckRuleConfig(string checkRuleConfig) { DARABONBA_PTR_SET_VALUE(checkRuleConfig_, checkRuleConfig) };


    // credentialOcrPictureBase64 Field Functions 
    bool hasCredentialOcrPictureBase64() const { return this->credentialOcrPictureBase64_ != nullptr;};
    void deleteCredentialOcrPictureBase64() { this->credentialOcrPictureBase64_ = nullptr;};
    inline string getCredentialOcrPictureBase64() const { DARABONBA_PTR_GET_DEFAULT(credentialOcrPictureBase64_, "") };
    inline CredentialSubmitIntlV2Request& setCredentialOcrPictureBase64(string credentialOcrPictureBase64) { DARABONBA_PTR_SET_VALUE(credentialOcrPictureBase64_, credentialOcrPictureBase64) };


    // credentialOcrPictureFile Field Functions 
    bool hasCredentialOcrPictureFile() const { return this->credentialOcrPictureFile_ != nullptr;};
    void deleteCredentialOcrPictureFile() { this->credentialOcrPictureFile_ = nullptr;};
    inline string getCredentialOcrPictureFile() const { DARABONBA_PTR_GET_DEFAULT(credentialOcrPictureFile_, "") };
    inline CredentialSubmitIntlV2Request& setCredentialOcrPictureFile(string credentialOcrPictureFile) { DARABONBA_PTR_SET_VALUE(credentialOcrPictureFile_, credentialOcrPictureFile) };


    // credentialOcrPictureUrl Field Functions 
    bool hasCredentialOcrPictureUrl() const { return this->credentialOcrPictureUrl_ != nullptr;};
    void deleteCredentialOcrPictureUrl() { this->credentialOcrPictureUrl_ = nullptr;};
    inline string getCredentialOcrPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(credentialOcrPictureUrl_, "") };
    inline CredentialSubmitIntlV2Request& setCredentialOcrPictureUrl(string credentialOcrPictureUrl) { DARABONBA_PTR_SET_VALUE(credentialOcrPictureUrl_, credentialOcrPictureUrl) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline CredentialSubmitIntlV2Request& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // fileInputType Field Functions 
    bool hasFileInputType() const { return this->fileInputType_ != nullptr;};
    void deleteFileInputType() { this->fileInputType_ = nullptr;};
    inline string getFileInputType() const { DARABONBA_PTR_GET_DEFAULT(fileInputType_, "") };
    inline CredentialSubmitIntlV2Request& setFileInputType(string fileInputType) { DARABONBA_PTR_SET_VALUE(fileInputType_, fileInputType) };


    // fraudCheck Field Functions 
    bool hasFraudCheck() const { return this->fraudCheck_ != nullptr;};
    void deleteFraudCheck() { this->fraudCheck_ = nullptr;};
    inline string getFraudCheck() const { DARABONBA_PTR_GET_DEFAULT(fraudCheck_, "") };
    inline CredentialSubmitIntlV2Request& setFraudCheck(string fraudCheck) { DARABONBA_PTR_SET_VALUE(fraudCheck_, fraudCheck) };


    // idQuality Field Functions 
    bool hasIdQuality() const { return this->idQuality_ != nullptr;};
    void deleteIdQuality() { this->idQuality_ = nullptr;};
    inline string getIdQuality() const { DARABONBA_PTR_GET_DEFAULT(idQuality_, "") };
    inline CredentialSubmitIntlV2Request& setIdQuality(string idQuality) { DARABONBA_PTR_SET_VALUE(idQuality_, idQuality) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline CredentialSubmitIntlV2Request& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // ocrArea Field Functions 
    bool hasOcrArea() const { return this->ocrArea_ != nullptr;};
    void deleteOcrArea() { this->ocrArea_ = nullptr;};
    inline string getOcrArea() const { DARABONBA_PTR_GET_DEFAULT(ocrArea_, "") };
    inline CredentialSubmitIntlV2Request& setOcrArea(string ocrArea) { DARABONBA_PTR_SET_VALUE(ocrArea_, ocrArea) };


    // ocrTranslation Field Functions 
    bool hasOcrTranslation() const { return this->ocrTranslation_ != nullptr;};
    void deleteOcrTranslation() { this->ocrTranslation_ = nullptr;};
    inline string getOcrTranslation() const { DARABONBA_PTR_GET_DEFAULT(ocrTranslation_, "") };
    inline CredentialSubmitIntlV2Request& setOcrTranslation(string ocrTranslation) { DARABONBA_PTR_SET_VALUE(ocrTranslation_, ocrTranslation) };


    // ocrValueStandard Field Functions 
    bool hasOcrValueStandard() const { return this->ocrValueStandard_ != nullptr;};
    void deleteOcrValueStandard() { this->ocrValueStandard_ = nullptr;};
    inline string getOcrValueStandard() const { DARABONBA_PTR_GET_DEFAULT(ocrValueStandard_, "") };
    inline CredentialSubmitIntlV2Request& setOcrValueStandard(string ocrValueStandard) { DARABONBA_PTR_SET_VALUE(ocrValueStandard_, ocrValueStandard) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CredentialSubmitIntlV2Request& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline CredentialSubmitIntlV2Request& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


  protected:
    // The field validation rule configuration. The value is a JSON string.
    shared_ptr<string> checkRuleConfig_ {};
    // The Base64-encoded image. If you choose this method to submit a photo, check the photo size and do not submit an excessively large photo.
    shared_ptr<string> credentialOcrPictureBase64_ {};
    // The image file stream.
    shared_ptr<string> credentialOcrPictureFile_ {};
    // The URL of the image. The URL must be a publicly accessible HTTP or HTTPS link.
    shared_ptr<string> credentialOcrPictureUrl_ {};
    // The credential type. Valid values:
    // 
    // - 01: Transaction voucher, which includes electronic bill images for utilities such as water, electricity, gas, and credit cards.
    // - 02: Vehicle registration certificate.
    // - 03: Transfer transaction record.
    // - 04: Proof of address (POA).
    // 
    // This parameter is required.
    shared_ptr<string> docType_ {};
    // The type of the input material. Valid values:
    // 
    // - IMAGE (default): image.
    // - PDF: PDF format.
    shared_ptr<string> fileInputType_ {};
    // Specifies whether to enable tampering detection. Valid values:
    // - true: Enabled.
    // - false: Disabled.
    // 
    // This parameter is required.
    shared_ptr<string> fraudCheck_ {};
    // Specifies whether to enable quality detection. Valid values: Y (enabled) and N (disabled).
    shared_ptr<string> idQuality_ {};
    // The unique identifier of the merchant request. The value is a 32-character alphanumeric string.
    // 
    // The first few characters consist of a custom abbreviation defined by the merchant, the middle part can contain a time segment, and the last part can use a random or incremental sequence.
    // 
    // This parameter is required.
    shared_ptr<string> merchantBizId_ {};
    // The extraction type. Valid values:
    // 0101: electronic bill address and name module (extracts address and name modules through intelligent analysis).
    // 0201: 
    // 0301: transfer transaction amount information.
    // 0401: POA credential extraction information.
    // 
    // This parameter is required.
    shared_ptr<string> ocrArea_ {};
    // Specifies whether to enable translation. Valid values: 0 (disabled) and 1 (enabled).
    shared_ptr<string> ocrTranslation_ {};
    // Specifies whether to enable standardization of key fields recognized by OCR. Valid values:
    // - 0: Disabled (default). 
    // - 1: Enabled.
    shared_ptr<string> ocrValueStandard_ {};
    // The product solution to use. Set the value to CREDENTIAL_RECOGNITION.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The custom verification scenario ID. You can use this scenario ID to query related records in the console. The value is a combination of up to 10 letters, digits, or underscores.
    // 
    // This parameter is required.
    shared_ptr<string> sceneCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
