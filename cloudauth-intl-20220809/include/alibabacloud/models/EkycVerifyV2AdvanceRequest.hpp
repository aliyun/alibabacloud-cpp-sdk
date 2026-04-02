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
      DARABONBA_PTR_TO_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      // idOcrPictureFileObject_ is stream
      DARABONBA_PTR_TO_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
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
      DARABONBA_PTR_FROM_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      // idOcrPictureFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
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
        && this->facePictureFileObject_ == nullptr && this->facePictureUrl_ == nullptr && this->idOcrPictureBase64_ == nullptr && this->idOcrPictureFileObject_ == nullptr && this->idOcrPictureUrl_ == nullptr
        && this->idThreshold_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr && this->productCode_ == nullptr; };
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
    shared_ptr<string> authorize_ {};
    shared_ptr<string> crop_ {};
    shared_ptr<string> docName_ {};
    shared_ptr<string> docNo_ {};
    shared_ptr<string> docType_ {};
    shared_ptr<string> facePictureBase64_ {};
    shared_ptr<Darabonba::IStream> facePictureFileObject_ {};
    shared_ptr<string> facePictureUrl_ {};
    shared_ptr<string> idOcrPictureBase64_ {};
    shared_ptr<Darabonba::IStream> idOcrPictureFileObject_ {};
    shared_ptr<string> idOcrPictureUrl_ {};
    shared_ptr<string> idThreshold_ {};
    shared_ptr<string> merchantBizId_ {};
    shared_ptr<string> merchantUserId_ {};
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
