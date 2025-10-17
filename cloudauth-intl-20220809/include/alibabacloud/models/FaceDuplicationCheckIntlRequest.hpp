// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEDUPLICATIONCHECKINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FACEDUPLICATIONCHECKINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceDuplicationCheckIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceDuplicationCheckIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRegistration, autoRegistration_);
      DARABONBA_PTR_TO_JSON(FaceGroupCodes, faceGroupCodes_);
      DARABONBA_PTR_TO_JSON(FaceRegisterGroupCode, faceRegisterGroupCode_);
      DARABONBA_PTR_TO_JSON(FaceVerifyThreshold, faceVerifyThreshold_);
      DARABONBA_PTR_TO_JSON(Liveness, liveness_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ReturnFaces, returnFaces_);
      DARABONBA_PTR_TO_JSON(SaveFacePicture, saveFacePicture_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(SourceFacePicture, sourceFacePicture_);
      DARABONBA_PTR_TO_JSON(SourceFacePictureUrl, sourceFacePictureUrl_);
      DARABONBA_PTR_TO_JSON(TargetFacePicture, targetFacePicture_);
      DARABONBA_PTR_TO_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
      DARABONBA_PTR_TO_JSON(VerifyModel, verifyModel_);
    };
    friend void from_json(const Darabonba::Json& j, FaceDuplicationCheckIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRegistration, autoRegistration_);
      DARABONBA_PTR_FROM_JSON(FaceGroupCodes, faceGroupCodes_);
      DARABONBA_PTR_FROM_JSON(FaceRegisterGroupCode, faceRegisterGroupCode_);
      DARABONBA_PTR_FROM_JSON(FaceVerifyThreshold, faceVerifyThreshold_);
      DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ReturnFaces, returnFaces_);
      DARABONBA_PTR_FROM_JSON(SaveFacePicture, saveFacePicture_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(SourceFacePicture, sourceFacePicture_);
      DARABONBA_PTR_FROM_JSON(SourceFacePictureUrl, sourceFacePictureUrl_);
      DARABONBA_PTR_FROM_JSON(TargetFacePicture, targetFacePicture_);
      DARABONBA_PTR_FROM_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
      DARABONBA_PTR_FROM_JSON(VerifyModel, verifyModel_);
    };
    FaceDuplicationCheckIntlRequest() = default ;
    FaceDuplicationCheckIntlRequest(const FaceDuplicationCheckIntlRequest &) = default ;
    FaceDuplicationCheckIntlRequest(FaceDuplicationCheckIntlRequest &&) = default ;
    FaceDuplicationCheckIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceDuplicationCheckIntlRequest() = default ;
    FaceDuplicationCheckIntlRequest& operator=(const FaceDuplicationCheckIntlRequest &) = default ;
    FaceDuplicationCheckIntlRequest& operator=(FaceDuplicationCheckIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRegistration_ == nullptr
        && return this->faceGroupCodes_ == nullptr && return this->faceRegisterGroupCode_ == nullptr && return this->faceVerifyThreshold_ == nullptr && return this->liveness_ == nullptr && return this->merchantBizId_ == nullptr
        && return this->merchantUserId_ == nullptr && return this->productCode_ == nullptr && return this->returnFaces_ == nullptr && return this->saveFacePicture_ == nullptr && return this->sceneCode_ == nullptr
        && return this->sourceFacePicture_ == nullptr && return this->sourceFacePictureUrl_ == nullptr && return this->targetFacePicture_ == nullptr && return this->targetFacePictureUrl_ == nullptr && return this->verifyModel_ == nullptr; };
    // autoRegistration Field Functions 
    bool hasAutoRegistration() const { return this->autoRegistration_ != nullptr;};
    void deleteAutoRegistration() { this->autoRegistration_ = nullptr;};
    inline string autoRegistration() const { DARABONBA_PTR_GET_DEFAULT(autoRegistration_, "") };
    inline FaceDuplicationCheckIntlRequest& setAutoRegistration(string autoRegistration) { DARABONBA_PTR_SET_VALUE(autoRegistration_, autoRegistration) };


    // faceGroupCodes Field Functions 
    bool hasFaceGroupCodes() const { return this->faceGroupCodes_ != nullptr;};
    void deleteFaceGroupCodes() { this->faceGroupCodes_ = nullptr;};
    inline string faceGroupCodes() const { DARABONBA_PTR_GET_DEFAULT(faceGroupCodes_, "") };
    inline FaceDuplicationCheckIntlRequest& setFaceGroupCodes(string faceGroupCodes) { DARABONBA_PTR_SET_VALUE(faceGroupCodes_, faceGroupCodes) };


    // faceRegisterGroupCode Field Functions 
    bool hasFaceRegisterGroupCode() const { return this->faceRegisterGroupCode_ != nullptr;};
    void deleteFaceRegisterGroupCode() { this->faceRegisterGroupCode_ = nullptr;};
    inline string faceRegisterGroupCode() const { DARABONBA_PTR_GET_DEFAULT(faceRegisterGroupCode_, "") };
    inline FaceDuplicationCheckIntlRequest& setFaceRegisterGroupCode(string faceRegisterGroupCode) { DARABONBA_PTR_SET_VALUE(faceRegisterGroupCode_, faceRegisterGroupCode) };


    // faceVerifyThreshold Field Functions 
    bool hasFaceVerifyThreshold() const { return this->faceVerifyThreshold_ != nullptr;};
    void deleteFaceVerifyThreshold() { this->faceVerifyThreshold_ = nullptr;};
    inline string faceVerifyThreshold() const { DARABONBA_PTR_GET_DEFAULT(faceVerifyThreshold_, "") };
    inline FaceDuplicationCheckIntlRequest& setFaceVerifyThreshold(string faceVerifyThreshold) { DARABONBA_PTR_SET_VALUE(faceVerifyThreshold_, faceVerifyThreshold) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string liveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline FaceDuplicationCheckIntlRequest& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string merchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline FaceDuplicationCheckIntlRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string merchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline FaceDuplicationCheckIntlRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline FaceDuplicationCheckIntlRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // returnFaces Field Functions 
    bool hasReturnFaces() const { return this->returnFaces_ != nullptr;};
    void deleteReturnFaces() { this->returnFaces_ = nullptr;};
    inline string returnFaces() const { DARABONBA_PTR_GET_DEFAULT(returnFaces_, "") };
    inline FaceDuplicationCheckIntlRequest& setReturnFaces(string returnFaces) { DARABONBA_PTR_SET_VALUE(returnFaces_, returnFaces) };


    // saveFacePicture Field Functions 
    bool hasSaveFacePicture() const { return this->saveFacePicture_ != nullptr;};
    void deleteSaveFacePicture() { this->saveFacePicture_ = nullptr;};
    inline string saveFacePicture() const { DARABONBA_PTR_GET_DEFAULT(saveFacePicture_, "") };
    inline FaceDuplicationCheckIntlRequest& setSaveFacePicture(string saveFacePicture) { DARABONBA_PTR_SET_VALUE(saveFacePicture_, saveFacePicture) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline FaceDuplicationCheckIntlRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // sourceFacePicture Field Functions 
    bool hasSourceFacePicture() const { return this->sourceFacePicture_ != nullptr;};
    void deleteSourceFacePicture() { this->sourceFacePicture_ = nullptr;};
    inline string sourceFacePicture() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePicture_, "") };
    inline FaceDuplicationCheckIntlRequest& setSourceFacePicture(string sourceFacePicture) { DARABONBA_PTR_SET_VALUE(sourceFacePicture_, sourceFacePicture) };


    // sourceFacePictureUrl Field Functions 
    bool hasSourceFacePictureUrl() const { return this->sourceFacePictureUrl_ != nullptr;};
    void deleteSourceFacePictureUrl() { this->sourceFacePictureUrl_ = nullptr;};
    inline string sourceFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePictureUrl_, "") };
    inline FaceDuplicationCheckIntlRequest& setSourceFacePictureUrl(string sourceFacePictureUrl) { DARABONBA_PTR_SET_VALUE(sourceFacePictureUrl_, sourceFacePictureUrl) };


    // targetFacePicture Field Functions 
    bool hasTargetFacePicture() const { return this->targetFacePicture_ != nullptr;};
    void deleteTargetFacePicture() { this->targetFacePicture_ = nullptr;};
    inline string targetFacePicture() const { DARABONBA_PTR_GET_DEFAULT(targetFacePicture_, "") };
    inline FaceDuplicationCheckIntlRequest& setTargetFacePicture(string targetFacePicture) { DARABONBA_PTR_SET_VALUE(targetFacePicture_, targetFacePicture) };


    // targetFacePictureUrl Field Functions 
    bool hasTargetFacePictureUrl() const { return this->targetFacePictureUrl_ != nullptr;};
    void deleteTargetFacePictureUrl() { this->targetFacePictureUrl_ = nullptr;};
    inline string targetFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(targetFacePictureUrl_, "") };
    inline FaceDuplicationCheckIntlRequest& setTargetFacePictureUrl(string targetFacePictureUrl) { DARABONBA_PTR_SET_VALUE(targetFacePictureUrl_, targetFacePictureUrl) };


    // verifyModel Field Functions 
    bool hasVerifyModel() const { return this->verifyModel_ != nullptr;};
    void deleteVerifyModel() { this->verifyModel_ = nullptr;};
    inline string verifyModel() const { DARABONBA_PTR_GET_DEFAULT(verifyModel_, "") };
    inline FaceDuplicationCheckIntlRequest& setVerifyModel(string verifyModel) { DARABONBA_PTR_SET_VALUE(verifyModel_, verifyModel) };


  protected:
    // Indicates whether to automatically register the face to the specified face library if no duplicate face is found.
    // - 0- Auto-register (default)
    // - 1- Do not register
    std::shared_ptr<string> autoRegistration_ = nullptr;
    // The face library code created through the console, supporting up to 10 face libraries simultaneously. When multiple face library codes are passed, they should be separated by commas.
    std::shared_ptr<string> faceGroupCodes_ = nullptr;
    // Face registration library.
    std::shared_ptr<string> faceRegisterGroupCode_ = nullptr;
    // Face matching threshold.
    std::shared_ptr<string> faceVerifyThreshold_ = nullptr;
    // Whether to enable silent liveness detection
    // - 0- Disabled
    // - 1- Enabled
    std::shared_ptr<string> liveness_ = nullptr;
    // A unique business identifier for troubleshooting purposes. It supports a combination of 32 alphanumeric characters, please ensure its uniqueness.
    // 
    // This parameter is required.
    std::shared_ptr<string> merchantBizId_ = nullptr;
    // Your custom user ID or other identifiers that can uniquely identify a specific user, such as a phone number or email address. It is strongly recommended to pre-desensitize the value of this field, for example, by hashing it.
    // 
    // This parameter is required.
    std::shared_ptr<string> merchantUserId_ = nullptr;
    // Product code
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // When there are multiple faces above the matching threshold, you can use this parameter to customize the number of returned faces
    // - Default returns 1
    // - Maximum support 5
    std::shared_ptr<string> returnFaces_ = nullptr;
    // Distinguishes between saving the face image and features
    // - 0- Face (default)
    // - 1- Features
    std::shared_ptr<string> saveFacePicture_ = nullptr;
    // Your custom authentication scenario ID.
    std::shared_ptr<string> sceneCode_ = nullptr;
    // Base64 encoded portrait photo.
    std::shared_ptr<string> sourceFacePicture_ = nullptr;
    // Portrait image URL, accessible via public HTTP or HTTPS link.
    std::shared_ptr<string> sourceFacePictureUrl_ = nullptr;
    // Base64 encoded portrait photo.
    std::shared_ptr<string> targetFacePicture_ = nullptr;
    // Portrait image URL, accessible via public HTTP or HTTPS link.
    std::shared_ptr<string> targetFacePictureUrl_ = nullptr;
    // Verification type
    // - 0- 1:N (default)
    // - 1- 1:1
    // - 2- 1:N + 1:1
    // 
    // This parameter is required.
    std::shared_ptr<string> verifyModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
