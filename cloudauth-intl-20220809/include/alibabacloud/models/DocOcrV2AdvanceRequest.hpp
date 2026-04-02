// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCOCRV2ADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCOCRV2ADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DocOcrV2AdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocOcrV2AdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CardSide, cardSide_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(IdFaceQuality, idFaceQuality_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      // idOcrPictureFileObject_ is stream
      DARABONBA_PTR_TO_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_TO_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(Ocr, ocr_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Spoof, spoof_);
    };
    friend void from_json(const Darabonba::Json& j, DocOcrV2AdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CardSide, cardSide_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(IdFaceQuality, idFaceQuality_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      // idOcrPictureFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_FROM_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(Ocr, ocr_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Spoof, spoof_);
    };
    DocOcrV2AdvanceRequest() = default ;
    DocOcrV2AdvanceRequest(const DocOcrV2AdvanceRequest &) = default ;
    DocOcrV2AdvanceRequest(DocOcrV2AdvanceRequest &&) = default ;
    DocOcrV2AdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocOcrV2AdvanceRequest() = default ;
    DocOcrV2AdvanceRequest& operator=(const DocOcrV2AdvanceRequest &) = default ;
    DocOcrV2AdvanceRequest& operator=(DocOcrV2AdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cardSide_ == nullptr
        && this->docType_ == nullptr && this->idFaceQuality_ == nullptr && this->idOcrPictureBase64_ == nullptr && this->idOcrPictureFileObject_ == nullptr && this->idOcrPictureUrl_ == nullptr
        && this->idThreshold_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr && this->ocr_ == nullptr && this->productCode_ == nullptr
        && this->spoof_ == nullptr; };
    // cardSide Field Functions 
    bool hasCardSide() const { return this->cardSide_ != nullptr;};
    void deleteCardSide() { this->cardSide_ = nullptr;};
    inline string getCardSide() const { DARABONBA_PTR_GET_DEFAULT(cardSide_, "") };
    inline DocOcrV2AdvanceRequest& setCardSide(string cardSide) { DARABONBA_PTR_SET_VALUE(cardSide_, cardSide) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline DocOcrV2AdvanceRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // idFaceQuality Field Functions 
    bool hasIdFaceQuality() const { return this->idFaceQuality_ != nullptr;};
    void deleteIdFaceQuality() { this->idFaceQuality_ = nullptr;};
    inline string getIdFaceQuality() const { DARABONBA_PTR_GET_DEFAULT(idFaceQuality_, "") };
    inline DocOcrV2AdvanceRequest& setIdFaceQuality(string idFaceQuality) { DARABONBA_PTR_SET_VALUE(idFaceQuality_, idFaceQuality) };


    // idOcrPictureBase64 Field Functions 
    bool hasIdOcrPictureBase64() const { return this->idOcrPictureBase64_ != nullptr;};
    void deleteIdOcrPictureBase64() { this->idOcrPictureBase64_ = nullptr;};
    inline string getIdOcrPictureBase64() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureBase64_, "") };
    inline DocOcrV2AdvanceRequest& setIdOcrPictureBase64(string idOcrPictureBase64) { DARABONBA_PTR_SET_VALUE(idOcrPictureBase64_, idOcrPictureBase64) };


    // idOcrPictureFileObject Field Functions 
    bool hasIdOcrPictureFileObject() const { return this->idOcrPictureFileObject_ != nullptr;};
    void deleteIdOcrPictureFileObject() { this->idOcrPictureFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getIdOcrPictureFileObject() const { DARABONBA_GET(idOcrPictureFileObject_) };
    inline DocOcrV2AdvanceRequest& setIdOcrPictureFileObject(shared_ptr<Darabonba::IStream> idOcrPictureFileObject) { DARABONBA_SET_VALUE(idOcrPictureFileObject_, idOcrPictureFileObject) };


    // idOcrPictureUrl Field Functions 
    bool hasIdOcrPictureUrl() const { return this->idOcrPictureUrl_ != nullptr;};
    void deleteIdOcrPictureUrl() { this->idOcrPictureUrl_ = nullptr;};
    inline string getIdOcrPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureUrl_, "") };
    inline DocOcrV2AdvanceRequest& setIdOcrPictureUrl(string idOcrPictureUrl) { DARABONBA_PTR_SET_VALUE(idOcrPictureUrl_, idOcrPictureUrl) };


    // idThreshold Field Functions 
    bool hasIdThreshold() const { return this->idThreshold_ != nullptr;};
    void deleteIdThreshold() { this->idThreshold_ = nullptr;};
    inline string getIdThreshold() const { DARABONBA_PTR_GET_DEFAULT(idThreshold_, "") };
    inline DocOcrV2AdvanceRequest& setIdThreshold(string idThreshold) { DARABONBA_PTR_SET_VALUE(idThreshold_, idThreshold) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline DocOcrV2AdvanceRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline DocOcrV2AdvanceRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // ocr Field Functions 
    bool hasOcr() const { return this->ocr_ != nullptr;};
    void deleteOcr() { this->ocr_ = nullptr;};
    inline string getOcr() const { DARABONBA_PTR_GET_DEFAULT(ocr_, "") };
    inline DocOcrV2AdvanceRequest& setOcr(string ocr) { DARABONBA_PTR_SET_VALUE(ocr_, ocr) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DocOcrV2AdvanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // spoof Field Functions 
    bool hasSpoof() const { return this->spoof_ != nullptr;};
    void deleteSpoof() { this->spoof_ = nullptr;};
    inline string getSpoof() const { DARABONBA_PTR_GET_DEFAULT(spoof_, "") };
    inline DocOcrV2AdvanceRequest& setSpoof(string spoof) { DARABONBA_PTR_SET_VALUE(spoof_, spoof) };


  protected:
    shared_ptr<string> cardSide_ {};
    shared_ptr<string> docType_ {};
    shared_ptr<string> idFaceQuality_ {};
    shared_ptr<string> idOcrPictureBase64_ {};
    shared_ptr<Darabonba::IStream> idOcrPictureFileObject_ {};
    shared_ptr<string> idOcrPictureUrl_ {};
    shared_ptr<string> idThreshold_ {};
    shared_ptr<string> merchantBizId_ {};
    shared_ptr<string> merchantUserId_ {};
    shared_ptr<string> ocr_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<string> spoof_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
