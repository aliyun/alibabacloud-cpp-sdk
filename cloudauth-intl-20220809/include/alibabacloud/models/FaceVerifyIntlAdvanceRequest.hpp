// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEVERIFYINTLADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FACEVERIFYINTLADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceVerifyIntlAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceVerifyIntlAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRegistration, autoRegistration_);
      DARABONBA_PTR_TO_JSON(FaceGroupCodes, faceGroupCodes_);
      DARABONBA_PTR_TO_JSON(FaceQualityCheck, faceQualityCheck_);
      DARABONBA_PTR_TO_JSON(FaceRegisterGroupCode, faceRegisterGroupCode_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ReturnFaces, returnFaces_);
      DARABONBA_PTR_TO_JSON(SourceFacePicture, sourceFacePicture_);
      // sourceFacePictureFileObject_ is stream
      DARABONBA_PTR_TO_JSON(SourceFacePictureUrl, sourceFacePictureUrl_);
      DARABONBA_PTR_TO_JSON(TargetFacePicture, targetFacePicture_);
      // targetFacePictureFileObject_ is stream
      DARABONBA_PTR_TO_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
      DARABONBA_PTR_TO_JSON(VerifyModel, verifyModel_);
    };
    friend void from_json(const Darabonba::Json& j, FaceVerifyIntlAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRegistration, autoRegistration_);
      DARABONBA_PTR_FROM_JSON(FaceGroupCodes, faceGroupCodes_);
      DARABONBA_PTR_FROM_JSON(FaceQualityCheck, faceQualityCheck_);
      DARABONBA_PTR_FROM_JSON(FaceRegisterGroupCode, faceRegisterGroupCode_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ReturnFaces, returnFaces_);
      DARABONBA_PTR_FROM_JSON(SourceFacePicture, sourceFacePicture_);
      // sourceFacePictureFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(SourceFacePictureUrl, sourceFacePictureUrl_);
      DARABONBA_PTR_FROM_JSON(TargetFacePicture, targetFacePicture_);
      // targetFacePictureFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
      DARABONBA_PTR_FROM_JSON(VerifyModel, verifyModel_);
    };
    FaceVerifyIntlAdvanceRequest() = default ;
    FaceVerifyIntlAdvanceRequest(const FaceVerifyIntlAdvanceRequest &) = default ;
    FaceVerifyIntlAdvanceRequest(FaceVerifyIntlAdvanceRequest &&) = default ;
    FaceVerifyIntlAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceVerifyIntlAdvanceRequest() = default ;
    FaceVerifyIntlAdvanceRequest& operator=(const FaceVerifyIntlAdvanceRequest &) = default ;
    FaceVerifyIntlAdvanceRequest& operator=(FaceVerifyIntlAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRegistration_ == nullptr
        && this->faceGroupCodes_ == nullptr && this->faceQualityCheck_ == nullptr && this->faceRegisterGroupCode_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr
        && this->productCode_ == nullptr && this->returnFaces_ == nullptr && this->sourceFacePicture_ == nullptr && this->sourceFacePictureFileObject_ == nullptr && this->sourceFacePictureUrl_ == nullptr
        && this->targetFacePicture_ == nullptr && this->targetFacePictureFileObject_ == nullptr && this->targetFacePictureUrl_ == nullptr && this->verifyModel_ == nullptr; };
    // autoRegistration Field Functions 
    bool hasAutoRegistration() const { return this->autoRegistration_ != nullptr;};
    void deleteAutoRegistration() { this->autoRegistration_ = nullptr;};
    inline string getAutoRegistration() const { DARABONBA_PTR_GET_DEFAULT(autoRegistration_, "") };
    inline FaceVerifyIntlAdvanceRequest& setAutoRegistration(string autoRegistration) { DARABONBA_PTR_SET_VALUE(autoRegistration_, autoRegistration) };


    // faceGroupCodes Field Functions 
    bool hasFaceGroupCodes() const { return this->faceGroupCodes_ != nullptr;};
    void deleteFaceGroupCodes() { this->faceGroupCodes_ = nullptr;};
    inline string getFaceGroupCodes() const { DARABONBA_PTR_GET_DEFAULT(faceGroupCodes_, "") };
    inline FaceVerifyIntlAdvanceRequest& setFaceGroupCodes(string faceGroupCodes) { DARABONBA_PTR_SET_VALUE(faceGroupCodes_, faceGroupCodes) };


    // faceQualityCheck Field Functions 
    bool hasFaceQualityCheck() const { return this->faceQualityCheck_ != nullptr;};
    void deleteFaceQualityCheck() { this->faceQualityCheck_ = nullptr;};
    inline string getFaceQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(faceQualityCheck_, "") };
    inline FaceVerifyIntlAdvanceRequest& setFaceQualityCheck(string faceQualityCheck) { DARABONBA_PTR_SET_VALUE(faceQualityCheck_, faceQualityCheck) };


    // faceRegisterGroupCode Field Functions 
    bool hasFaceRegisterGroupCode() const { return this->faceRegisterGroupCode_ != nullptr;};
    void deleteFaceRegisterGroupCode() { this->faceRegisterGroupCode_ = nullptr;};
    inline string getFaceRegisterGroupCode() const { DARABONBA_PTR_GET_DEFAULT(faceRegisterGroupCode_, "") };
    inline FaceVerifyIntlAdvanceRequest& setFaceRegisterGroupCode(string faceRegisterGroupCode) { DARABONBA_PTR_SET_VALUE(faceRegisterGroupCode_, faceRegisterGroupCode) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline FaceVerifyIntlAdvanceRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline FaceVerifyIntlAdvanceRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline FaceVerifyIntlAdvanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // returnFaces Field Functions 
    bool hasReturnFaces() const { return this->returnFaces_ != nullptr;};
    void deleteReturnFaces() { this->returnFaces_ = nullptr;};
    inline string getReturnFaces() const { DARABONBA_PTR_GET_DEFAULT(returnFaces_, "") };
    inline FaceVerifyIntlAdvanceRequest& setReturnFaces(string returnFaces) { DARABONBA_PTR_SET_VALUE(returnFaces_, returnFaces) };


    // sourceFacePicture Field Functions 
    bool hasSourceFacePicture() const { return this->sourceFacePicture_ != nullptr;};
    void deleteSourceFacePicture() { this->sourceFacePicture_ = nullptr;};
    inline string getSourceFacePicture() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePicture_, "") };
    inline FaceVerifyIntlAdvanceRequest& setSourceFacePicture(string sourceFacePicture) { DARABONBA_PTR_SET_VALUE(sourceFacePicture_, sourceFacePicture) };


    // sourceFacePictureFileObject Field Functions 
    bool hasSourceFacePictureFileObject() const { return this->sourceFacePictureFileObject_ != nullptr;};
    void deleteSourceFacePictureFileObject() { this->sourceFacePictureFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getSourceFacePictureFileObject() const { DARABONBA_GET(sourceFacePictureFileObject_) };
    inline FaceVerifyIntlAdvanceRequest& setSourceFacePictureFileObject(shared_ptr<Darabonba::IStream> sourceFacePictureFileObject) { DARABONBA_SET_VALUE(sourceFacePictureFileObject_, sourceFacePictureFileObject) };


    // sourceFacePictureUrl Field Functions 
    bool hasSourceFacePictureUrl() const { return this->sourceFacePictureUrl_ != nullptr;};
    void deleteSourceFacePictureUrl() { this->sourceFacePictureUrl_ = nullptr;};
    inline string getSourceFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePictureUrl_, "") };
    inline FaceVerifyIntlAdvanceRequest& setSourceFacePictureUrl(string sourceFacePictureUrl) { DARABONBA_PTR_SET_VALUE(sourceFacePictureUrl_, sourceFacePictureUrl) };


    // targetFacePicture Field Functions 
    bool hasTargetFacePicture() const { return this->targetFacePicture_ != nullptr;};
    void deleteTargetFacePicture() { this->targetFacePicture_ = nullptr;};
    inline string getTargetFacePicture() const { DARABONBA_PTR_GET_DEFAULT(targetFacePicture_, "") };
    inline FaceVerifyIntlAdvanceRequest& setTargetFacePicture(string targetFacePicture) { DARABONBA_PTR_SET_VALUE(targetFacePicture_, targetFacePicture) };


    // targetFacePictureFileObject Field Functions 
    bool hasTargetFacePictureFileObject() const { return this->targetFacePictureFileObject_ != nullptr;};
    void deleteTargetFacePictureFileObject() { this->targetFacePictureFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getTargetFacePictureFileObject() const { DARABONBA_GET(targetFacePictureFileObject_) };
    inline FaceVerifyIntlAdvanceRequest& setTargetFacePictureFileObject(shared_ptr<Darabonba::IStream> targetFacePictureFileObject) { DARABONBA_SET_VALUE(targetFacePictureFileObject_, targetFacePictureFileObject) };


    // targetFacePictureUrl Field Functions 
    bool hasTargetFacePictureUrl() const { return this->targetFacePictureUrl_ != nullptr;};
    void deleteTargetFacePictureUrl() { this->targetFacePictureUrl_ = nullptr;};
    inline string getTargetFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(targetFacePictureUrl_, "") };
    inline FaceVerifyIntlAdvanceRequest& setTargetFacePictureUrl(string targetFacePictureUrl) { DARABONBA_PTR_SET_VALUE(targetFacePictureUrl_, targetFacePictureUrl) };


    // verifyModel Field Functions 
    bool hasVerifyModel() const { return this->verifyModel_ != nullptr;};
    void deleteVerifyModel() { this->verifyModel_ = nullptr;};
    inline string getVerifyModel() const { DARABONBA_PTR_GET_DEFAULT(verifyModel_, "") };
    inline FaceVerifyIntlAdvanceRequest& setVerifyModel(string verifyModel) { DARABONBA_PTR_SET_VALUE(verifyModel_, verifyModel) };


  protected:
    shared_ptr<string> autoRegistration_ {};
    shared_ptr<string> faceGroupCodes_ {};
    shared_ptr<string> faceQualityCheck_ {};
    shared_ptr<string> faceRegisterGroupCode_ {};
    shared_ptr<string> merchantBizId_ {};
    shared_ptr<string> merchantUserId_ {};
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    shared_ptr<string> returnFaces_ {};
    shared_ptr<string> sourceFacePicture_ {};
    shared_ptr<Darabonba::IStream> sourceFacePictureFileObject_ {};
    shared_ptr<string> sourceFacePictureUrl_ {};
    shared_ptr<string> targetFacePicture_ {};
    shared_ptr<Darabonba::IStream> targetFacePictureFileObject_ {};
    shared_ptr<string> targetFacePictureUrl_ {};
    shared_ptr<string> verifyModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
