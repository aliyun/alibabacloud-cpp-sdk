// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCOCRMAXV2ADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCOCRMAXV2ADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DocOcrMaxV2AdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocOcrMaxV2AdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Authorize, authorize_);
      DARABONBA_PTR_TO_JSON(DocPage, docPage_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      // idOcrPictureFileObject_ is stream
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
    friend void from_json(const Darabonba::Json& j, DocOcrMaxV2AdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorize, authorize_);
      DARABONBA_PTR_FROM_JSON(DocPage, docPage_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      // idOcrPictureFileObject_ is stream
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
    DocOcrMaxV2AdvanceRequest() = default ;
    DocOcrMaxV2AdvanceRequest(const DocOcrMaxV2AdvanceRequest &) = default ;
    DocOcrMaxV2AdvanceRequest(DocOcrMaxV2AdvanceRequest &&) = default ;
    DocOcrMaxV2AdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocOcrMaxV2AdvanceRequest() = default ;
    DocOcrMaxV2AdvanceRequest& operator=(const DocOcrMaxV2AdvanceRequest &) = default ;
    DocOcrMaxV2AdvanceRequest& operator=(DocOcrMaxV2AdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorize_ == nullptr
        && this->docPage_ == nullptr && this->docType_ == nullptr && this->idOcrPictureBase64_ == nullptr && this->idOcrPictureFileObject_ == nullptr && this->idOcrPictureUrl_ == nullptr
        && this->idSpoof_ == nullptr && this->idThreshold_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr && this->ocrModel_ == nullptr
        && this->ocrValueStandard_ == nullptr && this->productCode_ == nullptr && this->sceneCode_ == nullptr; };
    // authorize Field Functions 
    bool hasAuthorize() const { return this->authorize_ != nullptr;};
    void deleteAuthorize() { this->authorize_ = nullptr;};
    inline string getAuthorize() const { DARABONBA_PTR_GET_DEFAULT(authorize_, "") };
    inline DocOcrMaxV2AdvanceRequest& setAuthorize(string authorize) { DARABONBA_PTR_SET_VALUE(authorize_, authorize) };


    // docPage Field Functions 
    bool hasDocPage() const { return this->docPage_ != nullptr;};
    void deleteDocPage() { this->docPage_ = nullptr;};
    inline string getDocPage() const { DARABONBA_PTR_GET_DEFAULT(docPage_, "") };
    inline DocOcrMaxV2AdvanceRequest& setDocPage(string docPage) { DARABONBA_PTR_SET_VALUE(docPage_, docPage) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline DocOcrMaxV2AdvanceRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // idOcrPictureBase64 Field Functions 
    bool hasIdOcrPictureBase64() const { return this->idOcrPictureBase64_ != nullptr;};
    void deleteIdOcrPictureBase64() { this->idOcrPictureBase64_ = nullptr;};
    inline string getIdOcrPictureBase64() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureBase64_, "") };
    inline DocOcrMaxV2AdvanceRequest& setIdOcrPictureBase64(string idOcrPictureBase64) { DARABONBA_PTR_SET_VALUE(idOcrPictureBase64_, idOcrPictureBase64) };


    // idOcrPictureFileObject Field Functions 
    bool hasIdOcrPictureFileObject() const { return this->idOcrPictureFileObject_ != nullptr;};
    void deleteIdOcrPictureFileObject() { this->idOcrPictureFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getIdOcrPictureFileObject() const { DARABONBA_GET(idOcrPictureFileObject_) };
    inline DocOcrMaxV2AdvanceRequest& setIdOcrPictureFileObject(shared_ptr<Darabonba::IStream> idOcrPictureFileObject) { DARABONBA_SET_VALUE(idOcrPictureFileObject_, idOcrPictureFileObject) };


    // idOcrPictureUrl Field Functions 
    bool hasIdOcrPictureUrl() const { return this->idOcrPictureUrl_ != nullptr;};
    void deleteIdOcrPictureUrl() { this->idOcrPictureUrl_ = nullptr;};
    inline string getIdOcrPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureUrl_, "") };
    inline DocOcrMaxV2AdvanceRequest& setIdOcrPictureUrl(string idOcrPictureUrl) { DARABONBA_PTR_SET_VALUE(idOcrPictureUrl_, idOcrPictureUrl) };


    // idSpoof Field Functions 
    bool hasIdSpoof() const { return this->idSpoof_ != nullptr;};
    void deleteIdSpoof() { this->idSpoof_ = nullptr;};
    inline string getIdSpoof() const { DARABONBA_PTR_GET_DEFAULT(idSpoof_, "") };
    inline DocOcrMaxV2AdvanceRequest& setIdSpoof(string idSpoof) { DARABONBA_PTR_SET_VALUE(idSpoof_, idSpoof) };


    // idThreshold Field Functions 
    bool hasIdThreshold() const { return this->idThreshold_ != nullptr;};
    void deleteIdThreshold() { this->idThreshold_ = nullptr;};
    inline string getIdThreshold() const { DARABONBA_PTR_GET_DEFAULT(idThreshold_, "") };
    inline DocOcrMaxV2AdvanceRequest& setIdThreshold(string idThreshold) { DARABONBA_PTR_SET_VALUE(idThreshold_, idThreshold) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline DocOcrMaxV2AdvanceRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline DocOcrMaxV2AdvanceRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // ocrModel Field Functions 
    bool hasOcrModel() const { return this->ocrModel_ != nullptr;};
    void deleteOcrModel() { this->ocrModel_ = nullptr;};
    inline string getOcrModel() const { DARABONBA_PTR_GET_DEFAULT(ocrModel_, "") };
    inline DocOcrMaxV2AdvanceRequest& setOcrModel(string ocrModel) { DARABONBA_PTR_SET_VALUE(ocrModel_, ocrModel) };


    // ocrValueStandard Field Functions 
    bool hasOcrValueStandard() const { return this->ocrValueStandard_ != nullptr;};
    void deleteOcrValueStandard() { this->ocrValueStandard_ = nullptr;};
    inline string getOcrValueStandard() const { DARABONBA_PTR_GET_DEFAULT(ocrValueStandard_, "") };
    inline DocOcrMaxV2AdvanceRequest& setOcrValueStandard(string ocrValueStandard) { DARABONBA_PTR_SET_VALUE(ocrValueStandard_, ocrValueStandard) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DocOcrMaxV2AdvanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline DocOcrMaxV2AdvanceRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


  protected:
    // Specifies whether to enable authoritative data source verification to enhance the ID document anti-counterfeiting capability. Valid values:
    // - **T**: enabled.
    // - **F**: disabled (default).
    // 
    // > 
    // > - **Applicable ID document types**: Chinese resident identity card (CHN01001) and Chinese mainland driver\\"s license (CHN02001).
    // > - **Data transmission statement**: Enabling this parameter indicates that you agree to transmit the user\\"s name and ID document number to an authoritative data source in the Chinese mainland for consistency verification.
    // > - **Performance impact**: After this parameter is enabled, the API response time increases by about 1 to 2 seconds. Adjust the timeout settings accordingly.
    shared_ptr<string> authorize_ {};
    // The page to be recognized. Valid values:
    // - 01: the portrait side of the ID document (default).
    // - 02: the back side of the ID document.
    shared_ptr<string> docPage_ {};
    // The type of the ID document.
    // - Format: country code + ID document type abbreviation + page (optional).
    // 
    // Note
    // - If OcrModel is set to 0, DocType is required and specifies the ID document type. The existing logic remains unchanged.
    // - If OcrModel is set to 1 or 2, DocType must be left empty.
    shared_ptr<string> docType_ {};
    // The Base64-encoded image of the ID document. If you use the IdOcrPictureBase64 parameter to pass the Base64-encoded photo of the ID document, check the photo size and do not upload excessively large photos.
    shared_ptr<string> idOcrPictureBase64_ {};
    // The file stream of the ID document image.
    shared_ptr<Darabonba::IStream> idOcrPictureFileObject_ {};
    // The URL of the ID document image. The URL must be a publicly accessible HTTP or HTTPS link.
    shared_ptr<string> idOcrPictureUrl_ {};
    // Specifies whether to enable the ID document anti-counterfeiting feature. Valid values:
    // - T: enabled.
    // - F: disabled (default).
    shared_ptr<string> idSpoof_ {};
    // The custom threshold mode for OCR quality detection. Valid values:
    // - 0: system default.
    // - 1: strict mode.
    // - 2: loose mode.
    // - 3: disable quality detection (default).
    shared_ptr<string> idThreshold_ {};
    // The custom unique business identifier on the merchant side, which is used for subsequent troubleshooting. The value can be up to 32 characters in length and can contain letters and digits. Make sure that the value is unique.
    shared_ptr<string> merchantBizId_ {};
    // The custom user ID or other identifier that can identify a specific user, such as a mobile phone number or an email address. Desensitize the value of this field in advance, for example, by hashing the value.
    shared_ptr<string> merchantUserId_ {};
    // The OCR recognition mode. Valid values:
    // - 0: general ID document recognition mode (default).
    // - 1: automatic ID document classification mode.
    // - 2: automatic ID document classification and general recognition mode.
    shared_ptr<string> ocrModel_ {};
    // Specifies whether to enable standardization for key OCR fields. Valid values:
    // - 0: disabled (default).
    // - 1: enabled.
    shared_ptr<string> ocrValueStandard_ {};
    // The product solution to access. Valid value: ID_OCR_MAX.
    shared_ptr<string> productCode_ {};
    // The custom authentication scene ID, which is used to query related records by entering this scene ID in the console later. The value can be up to 10 characters in length and can contain letters, digits, and underscores.
    shared_ptr<string> sceneCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
