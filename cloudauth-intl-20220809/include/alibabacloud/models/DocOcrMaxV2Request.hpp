// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCOCRMAXV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCOCRMAXV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DocOcrMaxV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocOcrMaxV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(Authorize, authorize_);
      DARABONBA_PTR_TO_JSON(DocPage, docPage_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureFile, idOcrPictureFile_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_TO_JSON(IdSpoof, idSpoof_);
      DARABONBA_PTR_TO_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(OcrModel, ocrModel_);
      DARABONBA_PTR_TO_JSON(OcrValueStandard, ocrValueStandard_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
    };
    friend void from_json(const Darabonba::Json& j, DocOcrMaxV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorize, authorize_);
      DARABONBA_PTR_FROM_JSON(DocPage, docPage_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureFile, idOcrPictureFile_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_FROM_JSON(IdSpoof, idSpoof_);
      DARABONBA_PTR_FROM_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(OcrModel, ocrModel_);
      DARABONBA_PTR_FROM_JSON(OcrValueStandard, ocrValueStandard_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
    };
    DocOcrMaxV2Request() = default ;
    DocOcrMaxV2Request(const DocOcrMaxV2Request &) = default ;
    DocOcrMaxV2Request(DocOcrMaxV2Request &&) = default ;
    DocOcrMaxV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocOcrMaxV2Request() = default ;
    DocOcrMaxV2Request& operator=(const DocOcrMaxV2Request &) = default ;
    DocOcrMaxV2Request& operator=(DocOcrMaxV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorize_ == nullptr
        && this->docPage_ == nullptr && this->docType_ == nullptr && this->idOcrPictureBase64_ == nullptr && this->idOcrPictureFile_ == nullptr && this->idOcrPictureUrl_ == nullptr
        && this->idSpoof_ == nullptr && this->idThreshold_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr && this->ocrModel_ == nullptr
        && this->ocrValueStandard_ == nullptr && this->productCode_ == nullptr && this->sceneCode_ == nullptr; };
    // authorize Field Functions 
    bool hasAuthorize() const { return this->authorize_ != nullptr;};
    void deleteAuthorize() { this->authorize_ = nullptr;};
    inline string getAuthorize() const { DARABONBA_PTR_GET_DEFAULT(authorize_, "") };
    inline DocOcrMaxV2Request& setAuthorize(string authorize) { DARABONBA_PTR_SET_VALUE(authorize_, authorize) };


    // docPage Field Functions 
    bool hasDocPage() const { return this->docPage_ != nullptr;};
    void deleteDocPage() { this->docPage_ = nullptr;};
    inline string getDocPage() const { DARABONBA_PTR_GET_DEFAULT(docPage_, "") };
    inline DocOcrMaxV2Request& setDocPage(string docPage) { DARABONBA_PTR_SET_VALUE(docPage_, docPage) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline DocOcrMaxV2Request& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // idOcrPictureBase64 Field Functions 
    bool hasIdOcrPictureBase64() const { return this->idOcrPictureBase64_ != nullptr;};
    void deleteIdOcrPictureBase64() { this->idOcrPictureBase64_ = nullptr;};
    inline string getIdOcrPictureBase64() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureBase64_, "") };
    inline DocOcrMaxV2Request& setIdOcrPictureBase64(string idOcrPictureBase64) { DARABONBA_PTR_SET_VALUE(idOcrPictureBase64_, idOcrPictureBase64) };


    // idOcrPictureFile Field Functions 
    bool hasIdOcrPictureFile() const { return this->idOcrPictureFile_ != nullptr;};
    void deleteIdOcrPictureFile() { this->idOcrPictureFile_ = nullptr;};
    inline string getIdOcrPictureFile() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureFile_, "") };
    inline DocOcrMaxV2Request& setIdOcrPictureFile(string idOcrPictureFile) { DARABONBA_PTR_SET_VALUE(idOcrPictureFile_, idOcrPictureFile) };


    // idOcrPictureUrl Field Functions 
    bool hasIdOcrPictureUrl() const { return this->idOcrPictureUrl_ != nullptr;};
    void deleteIdOcrPictureUrl() { this->idOcrPictureUrl_ = nullptr;};
    inline string getIdOcrPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureUrl_, "") };
    inline DocOcrMaxV2Request& setIdOcrPictureUrl(string idOcrPictureUrl) { DARABONBA_PTR_SET_VALUE(idOcrPictureUrl_, idOcrPictureUrl) };


    // idSpoof Field Functions 
    bool hasIdSpoof() const { return this->idSpoof_ != nullptr;};
    void deleteIdSpoof() { this->idSpoof_ = nullptr;};
    inline string getIdSpoof() const { DARABONBA_PTR_GET_DEFAULT(idSpoof_, "") };
    inline DocOcrMaxV2Request& setIdSpoof(string idSpoof) { DARABONBA_PTR_SET_VALUE(idSpoof_, idSpoof) };


    // idThreshold Field Functions 
    bool hasIdThreshold() const { return this->idThreshold_ != nullptr;};
    void deleteIdThreshold() { this->idThreshold_ = nullptr;};
    inline string getIdThreshold() const { DARABONBA_PTR_GET_DEFAULT(idThreshold_, "") };
    inline DocOcrMaxV2Request& setIdThreshold(string idThreshold) { DARABONBA_PTR_SET_VALUE(idThreshold_, idThreshold) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline DocOcrMaxV2Request& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline DocOcrMaxV2Request& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // ocrModel Field Functions 
    bool hasOcrModel() const { return this->ocrModel_ != nullptr;};
    void deleteOcrModel() { this->ocrModel_ = nullptr;};
    inline string getOcrModel() const { DARABONBA_PTR_GET_DEFAULT(ocrModel_, "") };
    inline DocOcrMaxV2Request& setOcrModel(string ocrModel) { DARABONBA_PTR_SET_VALUE(ocrModel_, ocrModel) };


    // ocrValueStandard Field Functions 
    bool hasOcrValueStandard() const { return this->ocrValueStandard_ != nullptr;};
    void deleteOcrValueStandard() { this->ocrValueStandard_ = nullptr;};
    inline string getOcrValueStandard() const { DARABONBA_PTR_GET_DEFAULT(ocrValueStandard_, "") };
    inline DocOcrMaxV2Request& setOcrValueStandard(string ocrValueStandard) { DARABONBA_PTR_SET_VALUE(ocrValueStandard_, ocrValueStandard) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DocOcrMaxV2Request& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline DocOcrMaxV2Request& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


  protected:
    // Specifies whether to enable authoritative data source verification to enhance document anti-forgery capabilities. Valid values:
    // 
    // - **T**: enabled.
    // 
    // - **F** (default): disabled.
    // 
    // > 
    // > - **Applicable document types**: China resident identity card (CHN01001) and China mainland driver\\"s license (CHN02001).
    // > - **Data transmission statement**: Enabling this parameter indicates consent to transmit the user\\"s name and document number to an authoritative data source in the Chinese mainland for consistency verification.
    // > - **Performance impact**: Enabling this parameter increases the API response time by approximately 1 to 2 seconds. Adjust the timeout settings accordingly.
    shared_ptr<string> authorize_ {};
    // The expected page to recognize. Valid values:
    // 
    // - 01 (default): the portrait side of the document.
    // 
    // - 02: the back side of the document.
    shared_ptr<string> docPage_ {};
    // The document type.
    // - Format: country code + document type abbreviation + page (optional).
    // 
    // Note:
    // - OcrModel = 0: DocType is required. Specify the document type. The existing logic remains unchanged.
    // - OcrModel = 1 or 2: DocType must be left empty.
    shared_ptr<string> docType_ {};
    // The Base64-encoded image of the identity document.
    // 
    // If you use IdOcrPictureBase64 to pass in the document image, check the image size and do not pass in an excessively large image.
    shared_ptr<string> idOcrPictureBase64_ {};
    // The file stream of the document image.
    shared_ptr<string> idOcrPictureFile_ {};
    // The URL of the identity document image. The URL must be a publicly accessible HTTP or HTTPS link.
    shared_ptr<string> idOcrPictureUrl_ {};
    // Specifies whether to enable the document anti-forgery feature. Valid values:
    // 
    // - T: enabled.
    // 
    // - F (default): disabled.
    shared_ptr<string> idSpoof_ {};
    // The custom OCR quality detection threshold mode. Valid values:
    // 
    // - 0: system default.
    // - 1: strict mode.
    // - 2: loose mode.
    // - 3 (default): quality detection disabled.
    shared_ptr<string> idThreshold_ {};
    // The merchant-defined unique business identifier, used for subsequent troubleshooting. The value can contain letters and digits, with a maximum length of 32 characters. Make sure the value is unique.
    shared_ptr<string> merchantBizId_ {};
    // The custom user ID, or another identifier that can identify a specific user, such as a phone number or email address.
    // 
    // Hash or otherwise desensitize this field value before passing it in.
    shared_ptr<string> merchantUserId_ {};
    // The OCR recognition mode. Valid values:
    // 
    // - 0: general document recognition mode (default).
    // 
    // - 1: automatic document classification mode.
    // 
    // - 2: automatic document classification and general recognition mode.
    shared_ptr<string> ocrModel_ {};
    // Specifies whether to enable OCR key field standardization. Valid values:
    // 
    // - 0 (default): disabled.
    // - 1: enabled.
    shared_ptr<string> ocrValueStandard_ {};
    // The product solution to use.
    // 
    // Set this parameter to ID_OCR_MAX.
    shared_ptr<string> productCode_ {};
    // The custom verification scenario ID. You can use this scenario ID to query related records in the console.
    // 
    // The value can contain letters, digits, and underscores, with a maximum length of 10 characters.
    shared_ptr<string> sceneCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
