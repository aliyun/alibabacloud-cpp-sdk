// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EKYCVERIFYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_EKYCVERIFYV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class EkycVerifyV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EkycVerifyV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(Authorize, authorize_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(DocName, docName_);
      DARABONBA_PTR_TO_JSON(DocNo, docNo_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(FacePictureBase64, facePictureBase64_);
      DARABONBA_PTR_TO_JSON(FacePictureFile, facePictureFile_);
      DARABONBA_PTR_TO_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureFile, idOcrPictureFile_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_TO_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, EkycVerifyV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorize, authorize_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(DocName, docName_);
      DARABONBA_PTR_FROM_JSON(DocNo, docNo_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(FacePictureBase64, facePictureBase64_);
      DARABONBA_PTR_FROM_JSON(FacePictureFile, facePictureFile_);
      DARABONBA_PTR_FROM_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureFile, idOcrPictureFile_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_FROM_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    EkycVerifyV2Request() = default ;
    EkycVerifyV2Request(const EkycVerifyV2Request &) = default ;
    EkycVerifyV2Request(EkycVerifyV2Request &&) = default ;
    EkycVerifyV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EkycVerifyV2Request() = default ;
    EkycVerifyV2Request& operator=(const EkycVerifyV2Request &) = default ;
    EkycVerifyV2Request& operator=(EkycVerifyV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorize_ == nullptr
        && this->crop_ == nullptr && this->docName_ == nullptr && this->docNo_ == nullptr && this->docType_ == nullptr && this->facePictureBase64_ == nullptr
        && this->facePictureFile_ == nullptr && this->facePictureUrl_ == nullptr && this->idOcrPictureBase64_ == nullptr && this->idOcrPictureFile_ == nullptr && this->idOcrPictureUrl_ == nullptr
        && this->idThreshold_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr && this->productCode_ == nullptr; };
    // authorize Field Functions 
    bool hasAuthorize() const { return this->authorize_ != nullptr;};
    void deleteAuthorize() { this->authorize_ = nullptr;};
    inline string getAuthorize() const { DARABONBA_PTR_GET_DEFAULT(authorize_, "") };
    inline EkycVerifyV2Request& setAuthorize(string authorize) { DARABONBA_PTR_SET_VALUE(authorize_, authorize) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline EkycVerifyV2Request& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline EkycVerifyV2Request& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // docNo Field Functions 
    bool hasDocNo() const { return this->docNo_ != nullptr;};
    void deleteDocNo() { this->docNo_ = nullptr;};
    inline string getDocNo() const { DARABONBA_PTR_GET_DEFAULT(docNo_, "") };
    inline EkycVerifyV2Request& setDocNo(string docNo) { DARABONBA_PTR_SET_VALUE(docNo_, docNo) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline EkycVerifyV2Request& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // facePictureBase64 Field Functions 
    bool hasFacePictureBase64() const { return this->facePictureBase64_ != nullptr;};
    void deleteFacePictureBase64() { this->facePictureBase64_ = nullptr;};
    inline string getFacePictureBase64() const { DARABONBA_PTR_GET_DEFAULT(facePictureBase64_, "") };
    inline EkycVerifyV2Request& setFacePictureBase64(string facePictureBase64) { DARABONBA_PTR_SET_VALUE(facePictureBase64_, facePictureBase64) };


    // facePictureFile Field Functions 
    bool hasFacePictureFile() const { return this->facePictureFile_ != nullptr;};
    void deleteFacePictureFile() { this->facePictureFile_ = nullptr;};
    inline string getFacePictureFile() const { DARABONBA_PTR_GET_DEFAULT(facePictureFile_, "") };
    inline EkycVerifyV2Request& setFacePictureFile(string facePictureFile) { DARABONBA_PTR_SET_VALUE(facePictureFile_, facePictureFile) };


    // facePictureUrl Field Functions 
    bool hasFacePictureUrl() const { return this->facePictureUrl_ != nullptr;};
    void deleteFacePictureUrl() { this->facePictureUrl_ = nullptr;};
    inline string getFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(facePictureUrl_, "") };
    inline EkycVerifyV2Request& setFacePictureUrl(string facePictureUrl) { DARABONBA_PTR_SET_VALUE(facePictureUrl_, facePictureUrl) };


    // idOcrPictureBase64 Field Functions 
    bool hasIdOcrPictureBase64() const { return this->idOcrPictureBase64_ != nullptr;};
    void deleteIdOcrPictureBase64() { this->idOcrPictureBase64_ = nullptr;};
    inline string getIdOcrPictureBase64() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureBase64_, "") };
    inline EkycVerifyV2Request& setIdOcrPictureBase64(string idOcrPictureBase64) { DARABONBA_PTR_SET_VALUE(idOcrPictureBase64_, idOcrPictureBase64) };


    // idOcrPictureFile Field Functions 
    bool hasIdOcrPictureFile() const { return this->idOcrPictureFile_ != nullptr;};
    void deleteIdOcrPictureFile() { this->idOcrPictureFile_ = nullptr;};
    inline string getIdOcrPictureFile() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureFile_, "") };
    inline EkycVerifyV2Request& setIdOcrPictureFile(string idOcrPictureFile) { DARABONBA_PTR_SET_VALUE(idOcrPictureFile_, idOcrPictureFile) };


    // idOcrPictureUrl Field Functions 
    bool hasIdOcrPictureUrl() const { return this->idOcrPictureUrl_ != nullptr;};
    void deleteIdOcrPictureUrl() { this->idOcrPictureUrl_ = nullptr;};
    inline string getIdOcrPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureUrl_, "") };
    inline EkycVerifyV2Request& setIdOcrPictureUrl(string idOcrPictureUrl) { DARABONBA_PTR_SET_VALUE(idOcrPictureUrl_, idOcrPictureUrl) };


    // idThreshold Field Functions 
    bool hasIdThreshold() const { return this->idThreshold_ != nullptr;};
    void deleteIdThreshold() { this->idThreshold_ = nullptr;};
    inline string getIdThreshold() const { DARABONBA_PTR_GET_DEFAULT(idThreshold_, "") };
    inline EkycVerifyV2Request& setIdThreshold(string idThreshold) { DARABONBA_PTR_SET_VALUE(idThreshold_, idThreshold) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline EkycVerifyV2Request& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline EkycVerifyV2Request& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline EkycVerifyV2Request& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    shared_ptr<string> authorize_ {};
    shared_ptr<string> crop_ {};
    shared_ptr<string> docName_ {};
    shared_ptr<string> docNo_ {};
    shared_ptr<string> docType_ {};
    shared_ptr<string> facePictureBase64_ {};
    shared_ptr<string> facePictureFile_ {};
    shared_ptr<string> facePictureUrl_ {};
    shared_ptr<string> idOcrPictureBase64_ {};
    shared_ptr<string> idOcrPictureFile_ {};
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
