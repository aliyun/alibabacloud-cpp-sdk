// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARDOCRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CARDOCRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CardOcrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CardOcrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(IdFaceQuality, idFaceQuality_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(Ocr, ocr_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Spoof, spoof_);
    };
    friend void from_json(const Darabonba::Json& j, CardOcrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(IdFaceQuality, idFaceQuality_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(Ocr, ocr_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Spoof, spoof_);
    };
    CardOcrRequest() = default ;
    CardOcrRequest(const CardOcrRequest &) = default ;
    CardOcrRequest(CardOcrRequest &&) = default ;
    CardOcrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CardOcrRequest() = default ;
    CardOcrRequest& operator=(const CardOcrRequest &) = default ;
    CardOcrRequest& operator=(CardOcrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docType_ == nullptr
        && this->idFaceQuality_ == nullptr && this->idOcrPictureBase64_ == nullptr && this->idOcrPictureUrl_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr
        && this->ocr_ == nullptr && this->productCode_ == nullptr && this->spoof_ == nullptr; };
    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline CardOcrRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // idFaceQuality Field Functions 
    bool hasIdFaceQuality() const { return this->idFaceQuality_ != nullptr;};
    void deleteIdFaceQuality() { this->idFaceQuality_ = nullptr;};
    inline string getIdFaceQuality() const { DARABONBA_PTR_GET_DEFAULT(idFaceQuality_, "") };
    inline CardOcrRequest& setIdFaceQuality(string idFaceQuality) { DARABONBA_PTR_SET_VALUE(idFaceQuality_, idFaceQuality) };


    // idOcrPictureBase64 Field Functions 
    bool hasIdOcrPictureBase64() const { return this->idOcrPictureBase64_ != nullptr;};
    void deleteIdOcrPictureBase64() { this->idOcrPictureBase64_ = nullptr;};
    inline string getIdOcrPictureBase64() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureBase64_, "") };
    inline CardOcrRequest& setIdOcrPictureBase64(string idOcrPictureBase64) { DARABONBA_PTR_SET_VALUE(idOcrPictureBase64_, idOcrPictureBase64) };


    // idOcrPictureUrl Field Functions 
    bool hasIdOcrPictureUrl() const { return this->idOcrPictureUrl_ != nullptr;};
    void deleteIdOcrPictureUrl() { this->idOcrPictureUrl_ = nullptr;};
    inline string getIdOcrPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureUrl_, "") };
    inline CardOcrRequest& setIdOcrPictureUrl(string idOcrPictureUrl) { DARABONBA_PTR_SET_VALUE(idOcrPictureUrl_, idOcrPictureUrl) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline CardOcrRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline CardOcrRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // ocr Field Functions 
    bool hasOcr() const { return this->ocr_ != nullptr;};
    void deleteOcr() { this->ocr_ = nullptr;};
    inline string getOcr() const { DARABONBA_PTR_GET_DEFAULT(ocr_, "") };
    inline CardOcrRequest& setOcr(string ocr) { DARABONBA_PTR_SET_VALUE(ocr_, ocr) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CardOcrRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // spoof Field Functions 
    bool hasSpoof() const { return this->spoof_ != nullptr;};
    void deleteSpoof() { this->spoof_ = nullptr;};
    inline string getSpoof() const { DARABONBA_PTR_GET_DEFAULT(spoof_, "") };
    inline CardOcrRequest& setSpoof(string spoof) { DARABONBA_PTR_SET_VALUE(spoof_, spoof) };


  protected:
    // The document type.
    shared_ptr<string> docType_ {};
    // Specifies whether to perform face quality detection on the ID document. Valid values:
    // - T: Perform face quality detection.
    // - F: Do not perform face quality detection. This is the default value.
    shared_ptr<string> idFaceQuality_ {};
    // The Base64-encoded image of the front side of the ID document. The value is a Base64 encoding of the image.
    shared_ptr<string> idOcrPictureBase64_ {};
    // The URL of the front-side image of the ID document.
    shared_ptr<string> idOcrPictureUrl_ {};
    // The merchant-defined unique business ID used for subsequent troubleshooting. The value can be a combination of letters and digits with a maximum length of 32 characters. Ensure that the value is unique.
    shared_ptr<string> merchantBizId_ {};
    // The merchant user ID or another identifier that can be used to identify a specific user, such as a phone number or email address. We strongly recommend that you pre-desensitize the value of the userId field, for example, by hashing the value.
    shared_ptr<string> merchantUserId_ {};
    // Specifies whether to perform OCR on the ID document. Valid values:
    // - T: Perform OCR on the ID document. This is the default value.
    // - F: Do not perform OCR.
    shared_ptr<string> ocr_ {};
    // The product code.
    shared_ptr<string> productCode_ {};
    // Specifies whether to enable anti-spoofing detection. Valid values:
    // - T: Enable anti-spoofing detection.
    // - F: Disable anti-spoofing detection. This is the default value.
    shared_ptr<string> spoof_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
