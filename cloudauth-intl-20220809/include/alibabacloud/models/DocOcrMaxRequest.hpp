// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCOCRMAXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCOCRMAXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DocOcrMaxRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocOcrMaxRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Authorize, authorize_);
      DARABONBA_PTR_TO_JSON(DocPage, docPage_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_TO_JSON(IdSpoof, idSpoof_);
      DARABONBA_PTR_TO_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(OcrModel, ocrModel_);
      DARABONBA_PTR_TO_JSON(OcrValueStandard, ocrValueStandard_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(Spoof, spoof_);
    };
    friend void from_json(const Darabonba::Json& j, DocOcrMaxRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorize, authorize_);
      DARABONBA_PTR_FROM_JSON(DocPage, docPage_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_FROM_JSON(IdSpoof, idSpoof_);
      DARABONBA_PTR_FROM_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(OcrModel, ocrModel_);
      DARABONBA_PTR_FROM_JSON(OcrValueStandard, ocrValueStandard_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(Spoof, spoof_);
    };
    DocOcrMaxRequest() = default ;
    DocOcrMaxRequest(const DocOcrMaxRequest &) = default ;
    DocOcrMaxRequest(DocOcrMaxRequest &&) = default ;
    DocOcrMaxRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocOcrMaxRequest() = default ;
    DocOcrMaxRequest& operator=(const DocOcrMaxRequest &) = default ;
    DocOcrMaxRequest& operator=(DocOcrMaxRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorize_ == nullptr
        && return this->docPage_ == nullptr && return this->docType_ == nullptr && return this->idOcrPictureBase64_ == nullptr && return this->idOcrPictureUrl_ == nullptr && return this->idSpoof_ == nullptr
        && return this->idThreshold_ == nullptr && return this->merchantBizId_ == nullptr && return this->merchantUserId_ == nullptr && return this->ocrModel_ == nullptr && return this->ocrValueStandard_ == nullptr
        && return this->productCode_ == nullptr && return this->prompt_ == nullptr && return this->sceneCode_ == nullptr && return this->spoof_ == nullptr; };
    // authorize Field Functions 
    bool hasAuthorize() const { return this->authorize_ != nullptr;};
    void deleteAuthorize() { this->authorize_ = nullptr;};
    inline string authorize() const { DARABONBA_PTR_GET_DEFAULT(authorize_, "") };
    inline DocOcrMaxRequest& setAuthorize(string authorize) { DARABONBA_PTR_SET_VALUE(authorize_, authorize) };


    // docPage Field Functions 
    bool hasDocPage() const { return this->docPage_ != nullptr;};
    void deleteDocPage() { this->docPage_ = nullptr;};
    inline string docPage() const { DARABONBA_PTR_GET_DEFAULT(docPage_, "") };
    inline DocOcrMaxRequest& setDocPage(string docPage) { DARABONBA_PTR_SET_VALUE(docPage_, docPage) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string docType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline DocOcrMaxRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // idOcrPictureBase64 Field Functions 
    bool hasIdOcrPictureBase64() const { return this->idOcrPictureBase64_ != nullptr;};
    void deleteIdOcrPictureBase64() { this->idOcrPictureBase64_ = nullptr;};
    inline string idOcrPictureBase64() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureBase64_, "") };
    inline DocOcrMaxRequest& setIdOcrPictureBase64(string idOcrPictureBase64) { DARABONBA_PTR_SET_VALUE(idOcrPictureBase64_, idOcrPictureBase64) };


    // idOcrPictureUrl Field Functions 
    bool hasIdOcrPictureUrl() const { return this->idOcrPictureUrl_ != nullptr;};
    void deleteIdOcrPictureUrl() { this->idOcrPictureUrl_ = nullptr;};
    inline string idOcrPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureUrl_, "") };
    inline DocOcrMaxRequest& setIdOcrPictureUrl(string idOcrPictureUrl) { DARABONBA_PTR_SET_VALUE(idOcrPictureUrl_, idOcrPictureUrl) };


    // idSpoof Field Functions 
    bool hasIdSpoof() const { return this->idSpoof_ != nullptr;};
    void deleteIdSpoof() { this->idSpoof_ = nullptr;};
    inline string idSpoof() const { DARABONBA_PTR_GET_DEFAULT(idSpoof_, "") };
    inline DocOcrMaxRequest& setIdSpoof(string idSpoof) { DARABONBA_PTR_SET_VALUE(idSpoof_, idSpoof) };


    // idThreshold Field Functions 
    bool hasIdThreshold() const { return this->idThreshold_ != nullptr;};
    void deleteIdThreshold() { this->idThreshold_ = nullptr;};
    inline string idThreshold() const { DARABONBA_PTR_GET_DEFAULT(idThreshold_, "") };
    inline DocOcrMaxRequest& setIdThreshold(string idThreshold) { DARABONBA_PTR_SET_VALUE(idThreshold_, idThreshold) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string merchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline DocOcrMaxRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string merchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline DocOcrMaxRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // ocrModel Field Functions 
    bool hasOcrModel() const { return this->ocrModel_ != nullptr;};
    void deleteOcrModel() { this->ocrModel_ = nullptr;};
    inline string ocrModel() const { DARABONBA_PTR_GET_DEFAULT(ocrModel_, "") };
    inline DocOcrMaxRequest& setOcrModel(string ocrModel) { DARABONBA_PTR_SET_VALUE(ocrModel_, ocrModel) };


    // ocrValueStandard Field Functions 
    bool hasOcrValueStandard() const { return this->ocrValueStandard_ != nullptr;};
    void deleteOcrValueStandard() { this->ocrValueStandard_ = nullptr;};
    inline string ocrValueStandard() const { DARABONBA_PTR_GET_DEFAULT(ocrValueStandard_, "") };
    inline DocOcrMaxRequest& setOcrValueStandard(string ocrValueStandard) { DARABONBA_PTR_SET_VALUE(ocrValueStandard_, ocrValueStandard) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DocOcrMaxRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline DocOcrMaxRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline DocOcrMaxRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // spoof Field Functions 
    bool hasSpoof() const { return this->spoof_ != nullptr;};
    void deleteSpoof() { this->spoof_ = nullptr;};
    inline string spoof() const { DARABONBA_PTR_GET_DEFAULT(spoof_, "") };
    inline DocOcrMaxRequest& setSpoof(string spoof) { DARABONBA_PTR_SET_VALUE(spoof_, spoof) };


  protected:
    // Specifies whether to enable verification with an authoritative data source to enhance document anti-spoofing capabilities.
    // 
    // - **T**: Enable
    // 
    // - **F**: Disable (default)
    // 
    // > 
    // > - **Applicable document types**: Chinese resident ID cards (CHN01001) and Chinese mainland driver\\"s licenses (CHN02001).
    // > - **Data transfer declaration**: If you enable this parameter, you agree to transfer the user\\"s name and certificate number to an authoritative data source in the Chinese mainland for consistency verification.
    // > - **Performance impact:** After you enable this feature, the response time of the API operation increases by 1 to 2 seconds. Adjust the timeout setting.
    std::shared_ptr<string> authorize_ = nullptr;
    // Page expected to be recognized
    // 
    // - 01 (default): ID portrait.
    // 
    // - 02: Back of the certificate
    std::shared_ptr<string> docPage_ = nullptr;
    // Document type.
    // Format: Country (region) code + document type abbreviation + page (optional)
    // Note: If provided, it will automatically check if it matches the model recognition result; if empty, the document type will be returned after model recognition.
    std::shared_ptr<string> docType_ = nullptr;
    // Document image, base64 encoded binary stream
    std::shared_ptr<string> idOcrPictureBase64_ = nullptr;
    // Document image URL
    std::shared_ptr<string> idOcrPictureUrl_ = nullptr;
    // Whether to turn on the certificate anti-counterfeiting function:
    // 
    // - T: open
    // 
    // - F (default): not turned on.
    std::shared_ptr<string> idSpoof_ = nullptr;
    // Custom OCR quality detection threshold mode:
    // 
    // - 0: System default
    // - 1: Strict mode
    // - 2: Lenient mode
    // - 3 (default): Disable quality detection
    std::shared_ptr<string> idThreshold_ = nullptr;
    // A unique business identifier defined by the merchant, used for subsequent problem localization and troubleshooting. It supports a combination of letters and numbers, with a maximum length of 32 characters. Please ensure its uniqueness.
    std::shared_ptr<string> merchantBizId_ = nullptr;
    // Your custom user ID or other identifiers that can uniquely identify a specific user, such as a phone number or email address. It is strongly recommended to pre-desensitize the value of this field, for example, by hashing it.
    std::shared_ptr<string> merchantUserId_ = nullptr;
    // OCR recognition mode.
    // 0: General document mode.
    // 1: Custom mode.
    std::shared_ptr<string> ocrModel_ = nullptr;
    // Specifies whether to return additional OCR fields in a standardized format:
    // 
    // - **0**: No (default)
    // 
    // - **1**: Yes
    std::shared_ptr<string> ocrValueStandard_ = nullptr;
    // The product solution to be integrated.
    // 
    // Value: ID_OCR_MAX
    std::shared_ptr<string> productCode_ = nullptr;
    // Prompt (for custom mode)
    std::shared_ptr<string> prompt_ = nullptr;
    // Custom scene code, used to distinguish business scenarios, a 10-digit number.
    std::shared_ptr<string> sceneCode_ = nullptr;
    // Whether to enable document anti-counterfeiting function, default is not enabled.
    // 
    // - T: Enable document anti-counterfeiting function.
    // - F: Do not enable.
    std::shared_ptr<string> spoof_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
