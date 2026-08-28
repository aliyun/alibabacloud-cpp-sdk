// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EKYCVERIFYV2ADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EKYCVERIFYV2ADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class EkycVerifyV2AdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EkycVerifyV2AdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Authorize, authorize_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(DocName, docName_);
      DARABONBA_PTR_TO_JSON(DocNo, docNo_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(FacePictureBase64, facePictureBase64_);
      // facePictureFileObject_ is stream
      DARABONBA_PTR_TO_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_TO_JSON(FaceQualityCheck, faceQualityCheck_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      // idOcrPictureFileObject_ is stream
      DARABONBA_PTR_TO_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_TO_JSON(IdSpoof, idSpoof_);
      DARABONBA_PTR_TO_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, EkycVerifyV2AdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorize, authorize_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(DocName, docName_);
      DARABONBA_PTR_FROM_JSON(DocNo, docNo_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(FacePictureBase64, facePictureBase64_);
      // facePictureFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_FROM_JSON(FaceQualityCheck, faceQualityCheck_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      // idOcrPictureFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_FROM_JSON(IdSpoof, idSpoof_);
      DARABONBA_PTR_FROM_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    EkycVerifyV2AdvanceRequest() = default ;
    EkycVerifyV2AdvanceRequest(const EkycVerifyV2AdvanceRequest &) = default ;
    EkycVerifyV2AdvanceRequest(EkycVerifyV2AdvanceRequest &&) = default ;
    EkycVerifyV2AdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EkycVerifyV2AdvanceRequest() = default ;
    EkycVerifyV2AdvanceRequest& operator=(const EkycVerifyV2AdvanceRequest &) = default ;
    EkycVerifyV2AdvanceRequest& operator=(EkycVerifyV2AdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorize_ == nullptr
        && this->crop_ == nullptr && this->docName_ == nullptr && this->docNo_ == nullptr && this->docType_ == nullptr && this->facePictureBase64_ == nullptr
        && this->facePictureFileObject_ == nullptr && this->facePictureUrl_ == nullptr && this->faceQualityCheck_ == nullptr && this->idOcrPictureBase64_ == nullptr && this->idOcrPictureFileObject_ == nullptr
        && this->idOcrPictureUrl_ == nullptr && this->idSpoof_ == nullptr && this->idThreshold_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr
        && this->productCode_ == nullptr; };
    // authorize Field Functions 
    bool hasAuthorize() const { return this->authorize_ != nullptr;};
    void deleteAuthorize() { this->authorize_ = nullptr;};
    inline string getAuthorize() const { DARABONBA_PTR_GET_DEFAULT(authorize_, "") };
    inline EkycVerifyV2AdvanceRequest& setAuthorize(string authorize) { DARABONBA_PTR_SET_VALUE(authorize_, authorize) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline EkycVerifyV2AdvanceRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline EkycVerifyV2AdvanceRequest& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // docNo Field Functions 
    bool hasDocNo() const { return this->docNo_ != nullptr;};
    void deleteDocNo() { this->docNo_ = nullptr;};
    inline string getDocNo() const { DARABONBA_PTR_GET_DEFAULT(docNo_, "") };
    inline EkycVerifyV2AdvanceRequest& setDocNo(string docNo) { DARABONBA_PTR_SET_VALUE(docNo_, docNo) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline EkycVerifyV2AdvanceRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // facePictureBase64 Field Functions 
    bool hasFacePictureBase64() const { return this->facePictureBase64_ != nullptr;};
    void deleteFacePictureBase64() { this->facePictureBase64_ = nullptr;};
    inline string getFacePictureBase64() const { DARABONBA_PTR_GET_DEFAULT(facePictureBase64_, "") };
    inline EkycVerifyV2AdvanceRequest& setFacePictureBase64(string facePictureBase64) { DARABONBA_PTR_SET_VALUE(facePictureBase64_, facePictureBase64) };


    // facePictureFileObject Field Functions 
    bool hasFacePictureFileObject() const { return this->facePictureFileObject_ != nullptr;};
    void deleteFacePictureFileObject() { this->facePictureFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFacePictureFileObject() const { DARABONBA_GET(facePictureFileObject_) };
    inline EkycVerifyV2AdvanceRequest& setFacePictureFileObject(shared_ptr<Darabonba::IStream> facePictureFileObject) { DARABONBA_SET_VALUE(facePictureFileObject_, facePictureFileObject) };


    // facePictureUrl Field Functions 
    bool hasFacePictureUrl() const { return this->facePictureUrl_ != nullptr;};
    void deleteFacePictureUrl() { this->facePictureUrl_ = nullptr;};
    inline string getFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(facePictureUrl_, "") };
    inline EkycVerifyV2AdvanceRequest& setFacePictureUrl(string facePictureUrl) { DARABONBA_PTR_SET_VALUE(facePictureUrl_, facePictureUrl) };


    // faceQualityCheck Field Functions 
    bool hasFaceQualityCheck() const { return this->faceQualityCheck_ != nullptr;};
    void deleteFaceQualityCheck() { this->faceQualityCheck_ = nullptr;};
    inline string getFaceQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(faceQualityCheck_, "") };
    inline EkycVerifyV2AdvanceRequest& setFaceQualityCheck(string faceQualityCheck) { DARABONBA_PTR_SET_VALUE(faceQualityCheck_, faceQualityCheck) };


    // idOcrPictureBase64 Field Functions 
    bool hasIdOcrPictureBase64() const { return this->idOcrPictureBase64_ != nullptr;};
    void deleteIdOcrPictureBase64() { this->idOcrPictureBase64_ = nullptr;};
    inline string getIdOcrPictureBase64() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureBase64_, "") };
    inline EkycVerifyV2AdvanceRequest& setIdOcrPictureBase64(string idOcrPictureBase64) { DARABONBA_PTR_SET_VALUE(idOcrPictureBase64_, idOcrPictureBase64) };


    // idOcrPictureFileObject Field Functions 
    bool hasIdOcrPictureFileObject() const { return this->idOcrPictureFileObject_ != nullptr;};
    void deleteIdOcrPictureFileObject() { this->idOcrPictureFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getIdOcrPictureFileObject() const { DARABONBA_GET(idOcrPictureFileObject_) };
    inline EkycVerifyV2AdvanceRequest& setIdOcrPictureFileObject(shared_ptr<Darabonba::IStream> idOcrPictureFileObject) { DARABONBA_SET_VALUE(idOcrPictureFileObject_, idOcrPictureFileObject) };


    // idOcrPictureUrl Field Functions 
    bool hasIdOcrPictureUrl() const { return this->idOcrPictureUrl_ != nullptr;};
    void deleteIdOcrPictureUrl() { this->idOcrPictureUrl_ = nullptr;};
    inline string getIdOcrPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureUrl_, "") };
    inline EkycVerifyV2AdvanceRequest& setIdOcrPictureUrl(string idOcrPictureUrl) { DARABONBA_PTR_SET_VALUE(idOcrPictureUrl_, idOcrPictureUrl) };


    // idSpoof Field Functions 
    bool hasIdSpoof() const { return this->idSpoof_ != nullptr;};
    void deleteIdSpoof() { this->idSpoof_ = nullptr;};
    inline string getIdSpoof() const { DARABONBA_PTR_GET_DEFAULT(idSpoof_, "") };
    inline EkycVerifyV2AdvanceRequest& setIdSpoof(string idSpoof) { DARABONBA_PTR_SET_VALUE(idSpoof_, idSpoof) };


    // idThreshold Field Functions 
    bool hasIdThreshold() const { return this->idThreshold_ != nullptr;};
    void deleteIdThreshold() { this->idThreshold_ = nullptr;};
    inline string getIdThreshold() const { DARABONBA_PTR_GET_DEFAULT(idThreshold_, "") };
    inline EkycVerifyV2AdvanceRequest& setIdThreshold(string idThreshold) { DARABONBA_PTR_SET_VALUE(idThreshold_, idThreshold) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline EkycVerifyV2AdvanceRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline EkycVerifyV2AdvanceRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline EkycVerifyV2AdvanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // Specifies whether to enable authoritative identity verification. Currently, this parameter applies only to second-generation mainland China ID cards.
    shared_ptr<string> authorize_ {};
    // Specifies whether cropping is allowed. By default, cropping is not allowed. Valid values:
    // 
    // - T: Detection is required.
    // - F: Detection is required (default value: F).
    shared_ptr<string> crop_ {};
    // The real name of the user. When Authorize=\\"T\\" and the document type is a mainland China ID card, you must provide at least one of the following: key document information (DocName, DocNo) or document images (IdOcrPictureBase64/URL). Note: Supports a combination of Chinese characters with a minimum length of 1 character. No special characters are allowed, except for the middle dot (·) used in ethnic minority names.
    shared_ptr<string> docName_ {};
    // The document number of the user. When Authorize=\\"T\\" and the document type is a mainland China ID card, you must provide at least one of the following: key document information (DocName, DocNo) or document images (IdOcrPictureBase64/URL). Note: Supports a combination of letters and numbers with a length of 18 characters.
    shared_ptr<string> docNo_ {};
    // The document type.
    shared_ptr<string> docType_ {};
    // The Base64-encoded face image.
    // 
    // Note:
    // 
    // - If you choose this method to pass in the face image, check the photo size and do not pass in an excessively large photo.
    // - Specify one of the following parameters: FacePictureBase64, FacePictureUrl, or FacePictureFile.
    shared_ptr<string> facePictureBase64_ {};
    // The file stream of the face photo.
    shared_ptr<Darabonba::IStream> facePictureFileObject_ {};
    // The URL of the face photo.
    shared_ptr<string> facePictureUrl_ {};
    // Specifies whether to enable face quality detection.
    shared_ptr<string> faceQualityCheck_ {};
    // The Base64-encoded identity document image. Note:
    // 
    // - If you choose this method to pass in the document image, check the photo size and do not pass in an excessively large photo.
    // - Specify one of the following parameters: IdOcrPictureBase64, IdOcrPictureUrl, or IdOcrPictureFile.
    shared_ptr<string> idOcrPictureBase64_ {};
    // The file stream of the front side of the identity document image.
    shared_ptr<Darabonba::IStream> idOcrPictureFileObject_ {};
    // The URL of the front side of the identity document image.
    shared_ptr<string> idOcrPictureUrl_ {};
    // Specifies whether to enable document anti-spoofing.
    shared_ptr<string> idSpoof_ {};
    // The custom OCR quality detection threshold mode. Valid values:
    // 
    // - 0: system default.
    // - 1: strict mode.
    // - 2: loose mode.
    // - 3 (default): quality detection disabled.
    shared_ptr<string> idThreshold_ {};
    // A custom business unique identifier defined by the merchant, used for subsequent issue tracking and troubleshooting. Supports a combination of letters and numbers up to 32 characters in length. Ensure that this value is unique.
    shared_ptr<string> merchantBizId_ {};
    // A custom user ID or other identifier that can identify a specific user, such as a phone number or email address. We strongly recommend that you desensitize the value of this field in advance, for example, by hashing the value.
    shared_ptr<string> merchantUserId_ {};
    // The product code.
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
