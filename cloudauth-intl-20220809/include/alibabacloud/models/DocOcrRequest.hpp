// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCOCRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCOCRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DocOcrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocOcrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CardSide, cardSide_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(IdFaceQuality, idFaceQuality_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_TO_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(Ocr, ocr_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Spoof, spoof_);
    };
    friend void from_json(const Darabonba::Json& j, DocOcrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CardSide, cardSide_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(IdFaceQuality, idFaceQuality_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_FROM_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(Ocr, ocr_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Spoof, spoof_);
    };
    DocOcrRequest() = default ;
    DocOcrRequest(const DocOcrRequest &) = default ;
    DocOcrRequest(DocOcrRequest &&) = default ;
    DocOcrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocOcrRequest() = default ;
    DocOcrRequest& operator=(const DocOcrRequest &) = default ;
    DocOcrRequest& operator=(DocOcrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cardSide_ != nullptr
        && this->docType_ != nullptr && this->idFaceQuality_ != nullptr && this->idOcrPictureBase64_ != nullptr && this->idOcrPictureUrl_ != nullptr && this->idThreshold_ != nullptr
        && this->merchantBizId_ != nullptr && this->merchantUserId_ != nullptr && this->ocr_ != nullptr && this->productCode_ != nullptr && this->spoof_ != nullptr; };
    // cardSide Field Functions 
    bool hasCardSide() const { return this->cardSide_ != nullptr;};
    void deleteCardSide() { this->cardSide_ = nullptr;};
    inline string cardSide() const { DARABONBA_PTR_GET_DEFAULT(cardSide_, "") };
    inline DocOcrRequest& setCardSide(string cardSide) { DARABONBA_PTR_SET_VALUE(cardSide_, cardSide) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string docType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline DocOcrRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // idFaceQuality Field Functions 
    bool hasIdFaceQuality() const { return this->idFaceQuality_ != nullptr;};
    void deleteIdFaceQuality() { this->idFaceQuality_ = nullptr;};
    inline string idFaceQuality() const { DARABONBA_PTR_GET_DEFAULT(idFaceQuality_, "") };
    inline DocOcrRequest& setIdFaceQuality(string idFaceQuality) { DARABONBA_PTR_SET_VALUE(idFaceQuality_, idFaceQuality) };


    // idOcrPictureBase64 Field Functions 
    bool hasIdOcrPictureBase64() const { return this->idOcrPictureBase64_ != nullptr;};
    void deleteIdOcrPictureBase64() { this->idOcrPictureBase64_ = nullptr;};
    inline string idOcrPictureBase64() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureBase64_, "") };
    inline DocOcrRequest& setIdOcrPictureBase64(string idOcrPictureBase64) { DARABONBA_PTR_SET_VALUE(idOcrPictureBase64_, idOcrPictureBase64) };


    // idOcrPictureUrl Field Functions 
    bool hasIdOcrPictureUrl() const { return this->idOcrPictureUrl_ != nullptr;};
    void deleteIdOcrPictureUrl() { this->idOcrPictureUrl_ = nullptr;};
    inline string idOcrPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureUrl_, "") };
    inline DocOcrRequest& setIdOcrPictureUrl(string idOcrPictureUrl) { DARABONBA_PTR_SET_VALUE(idOcrPictureUrl_, idOcrPictureUrl) };


    // idThreshold Field Functions 
    bool hasIdThreshold() const { return this->idThreshold_ != nullptr;};
    void deleteIdThreshold() { this->idThreshold_ = nullptr;};
    inline string idThreshold() const { DARABONBA_PTR_GET_DEFAULT(idThreshold_, "") };
    inline DocOcrRequest& setIdThreshold(string idThreshold) { DARABONBA_PTR_SET_VALUE(idThreshold_, idThreshold) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string merchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline DocOcrRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string merchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline DocOcrRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // ocr Field Functions 
    bool hasOcr() const { return this->ocr_ != nullptr;};
    void deleteOcr() { this->ocr_ = nullptr;};
    inline string ocr() const { DARABONBA_PTR_GET_DEFAULT(ocr_, "") };
    inline DocOcrRequest& setOcr(string ocr) { DARABONBA_PTR_SET_VALUE(ocr_, ocr) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DocOcrRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // spoof Field Functions 
    bool hasSpoof() const { return this->spoof_ != nullptr;};
    void deleteSpoof() { this->spoof_ = nullptr;};
    inline string spoof() const { DARABONBA_PTR_GET_DEFAULT(spoof_, "") };
    inline DocOcrRequest& setSpoof(string spoof) { DARABONBA_PTR_SET_VALUE(spoof_, spoof) };


  protected:
    // CardSide
    std::shared_ptr<string> cardSide_ = nullptr;
    // Document type
    std::shared_ptr<string> docType_ = nullptr;
    // Whether to perform ID face quality detection
    // - T: Indicates that detection is required
    // - F: Indicates that detection is not required (default F)
    std::shared_ptr<string> idFaceQuality_ = nullptr;
    // Base64 of the front side of the document image
    std::shared_ptr<string> idOcrPictureBase64_ = nullptr;
    // URL of the front side of the document image
    std::shared_ptr<string> idOcrPictureUrl_ = nullptr;
    // IdThreshold
    std::shared_ptr<string> idThreshold_ = nullptr;
    // A unique business identifier defined by the merchant, used for subsequent troubleshooting. It supports a combination of letters and numbers, with a maximum length of 32 characters. Please ensure uniqueness.
    std::shared_ptr<string> merchantBizId_ = nullptr;
    // A custom user ID in the business, please keep it unique.
    std::shared_ptr<string> merchantUserId_ = nullptr;
    // Whether to perform document OCR
    // - T: Indicates that document OCR is required
    // - F: Indicates that document OCR is not required
    std::shared_ptr<string> ocr_ = nullptr;
    // Product code
    std::shared_ptr<string> productCode_ = nullptr;
    // Whether to enable anti-counterfeiting detection
    // - T: Indicates that anti-counterfeiting is enabled
    // - F: Indicates that anti-counterfeiting is disabled
    std::shared_ptr<string> spoof_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
