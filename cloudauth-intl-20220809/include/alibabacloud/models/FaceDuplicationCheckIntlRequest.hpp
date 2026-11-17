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
      DARABONBA_PTR_TO_JSON(FaceAttributeCheck, faceAttributeCheck_);
      DARABONBA_PTR_TO_JSON(FaceGroupCodes, faceGroupCodes_);
      DARABONBA_PTR_TO_JSON(FaceQualityCheck, faceQualityCheck_);
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
      DARABONBA_PTR_TO_JSON(UpdateFaceIfUserExists, updateFaceIfUserExists_);
      DARABONBA_PTR_TO_JSON(VerifyModel, verifyModel_);
    };
    friend void from_json(const Darabonba::Json& j, FaceDuplicationCheckIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRegistration, autoRegistration_);
      DARABONBA_PTR_FROM_JSON(FaceAttributeCheck, faceAttributeCheck_);
      DARABONBA_PTR_FROM_JSON(FaceGroupCodes, faceGroupCodes_);
      DARABONBA_PTR_FROM_JSON(FaceQualityCheck, faceQualityCheck_);
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
      DARABONBA_PTR_FROM_JSON(UpdateFaceIfUserExists, updateFaceIfUserExists_);
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
        && this->faceAttributeCheck_ == nullptr && this->faceGroupCodes_ == nullptr && this->faceQualityCheck_ == nullptr && this->faceRegisterGroupCode_ == nullptr && this->faceVerifyThreshold_ == nullptr
        && this->liveness_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr && this->productCode_ == nullptr && this->returnFaces_ == nullptr
        && this->saveFacePicture_ == nullptr && this->sceneCode_ == nullptr && this->sourceFacePicture_ == nullptr && this->sourceFacePictureUrl_ == nullptr && this->targetFacePicture_ == nullptr
        && this->targetFacePictureUrl_ == nullptr && this->updateFaceIfUserExists_ == nullptr && this->verifyModel_ == nullptr; };
    // autoRegistration Field Functions 
    bool hasAutoRegistration() const { return this->autoRegistration_ != nullptr;};
    void deleteAutoRegistration() { this->autoRegistration_ = nullptr;};
    inline string getAutoRegistration() const { DARABONBA_PTR_GET_DEFAULT(autoRegistration_, "") };
    inline FaceDuplicationCheckIntlRequest& setAutoRegistration(string autoRegistration) { DARABONBA_PTR_SET_VALUE(autoRegistration_, autoRegistration) };


    // faceAttributeCheck Field Functions 
    bool hasFaceAttributeCheck() const { return this->faceAttributeCheck_ != nullptr;};
    void deleteFaceAttributeCheck() { this->faceAttributeCheck_ = nullptr;};
    inline string getFaceAttributeCheck() const { DARABONBA_PTR_GET_DEFAULT(faceAttributeCheck_, "") };
    inline FaceDuplicationCheckIntlRequest& setFaceAttributeCheck(string faceAttributeCheck) { DARABONBA_PTR_SET_VALUE(faceAttributeCheck_, faceAttributeCheck) };


    // faceGroupCodes Field Functions 
    bool hasFaceGroupCodes() const { return this->faceGroupCodes_ != nullptr;};
    void deleteFaceGroupCodes() { this->faceGroupCodes_ = nullptr;};
    inline string getFaceGroupCodes() const { DARABONBA_PTR_GET_DEFAULT(faceGroupCodes_, "") };
    inline FaceDuplicationCheckIntlRequest& setFaceGroupCodes(string faceGroupCodes) { DARABONBA_PTR_SET_VALUE(faceGroupCodes_, faceGroupCodes) };


    // faceQualityCheck Field Functions 
    bool hasFaceQualityCheck() const { return this->faceQualityCheck_ != nullptr;};
    void deleteFaceQualityCheck() { this->faceQualityCheck_ = nullptr;};
    inline string getFaceQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(faceQualityCheck_, "") };
    inline FaceDuplicationCheckIntlRequest& setFaceQualityCheck(string faceQualityCheck) { DARABONBA_PTR_SET_VALUE(faceQualityCheck_, faceQualityCheck) };


    // faceRegisterGroupCode Field Functions 
    bool hasFaceRegisterGroupCode() const { return this->faceRegisterGroupCode_ != nullptr;};
    void deleteFaceRegisterGroupCode() { this->faceRegisterGroupCode_ = nullptr;};
    inline string getFaceRegisterGroupCode() const { DARABONBA_PTR_GET_DEFAULT(faceRegisterGroupCode_, "") };
    inline FaceDuplicationCheckIntlRequest& setFaceRegisterGroupCode(string faceRegisterGroupCode) { DARABONBA_PTR_SET_VALUE(faceRegisterGroupCode_, faceRegisterGroupCode) };


    // faceVerifyThreshold Field Functions 
    bool hasFaceVerifyThreshold() const { return this->faceVerifyThreshold_ != nullptr;};
    void deleteFaceVerifyThreshold() { this->faceVerifyThreshold_ = nullptr;};
    inline string getFaceVerifyThreshold() const { DARABONBA_PTR_GET_DEFAULT(faceVerifyThreshold_, "") };
    inline FaceDuplicationCheckIntlRequest& setFaceVerifyThreshold(string faceVerifyThreshold) { DARABONBA_PTR_SET_VALUE(faceVerifyThreshold_, faceVerifyThreshold) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string getLiveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline FaceDuplicationCheckIntlRequest& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline FaceDuplicationCheckIntlRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline FaceDuplicationCheckIntlRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline FaceDuplicationCheckIntlRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // returnFaces Field Functions 
    bool hasReturnFaces() const { return this->returnFaces_ != nullptr;};
    void deleteReturnFaces() { this->returnFaces_ = nullptr;};
    inline string getReturnFaces() const { DARABONBA_PTR_GET_DEFAULT(returnFaces_, "") };
    inline FaceDuplicationCheckIntlRequest& setReturnFaces(string returnFaces) { DARABONBA_PTR_SET_VALUE(returnFaces_, returnFaces) };


    // saveFacePicture Field Functions 
    bool hasSaveFacePicture() const { return this->saveFacePicture_ != nullptr;};
    void deleteSaveFacePicture() { this->saveFacePicture_ = nullptr;};
    inline string getSaveFacePicture() const { DARABONBA_PTR_GET_DEFAULT(saveFacePicture_, "") };
    inline FaceDuplicationCheckIntlRequest& setSaveFacePicture(string saveFacePicture) { DARABONBA_PTR_SET_VALUE(saveFacePicture_, saveFacePicture) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline FaceDuplicationCheckIntlRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // sourceFacePicture Field Functions 
    bool hasSourceFacePicture() const { return this->sourceFacePicture_ != nullptr;};
    void deleteSourceFacePicture() { this->sourceFacePicture_ = nullptr;};
    inline string getSourceFacePicture() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePicture_, "") };
    inline FaceDuplicationCheckIntlRequest& setSourceFacePicture(string sourceFacePicture) { DARABONBA_PTR_SET_VALUE(sourceFacePicture_, sourceFacePicture) };


    // sourceFacePictureUrl Field Functions 
    bool hasSourceFacePictureUrl() const { return this->sourceFacePictureUrl_ != nullptr;};
    void deleteSourceFacePictureUrl() { this->sourceFacePictureUrl_ = nullptr;};
    inline string getSourceFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePictureUrl_, "") };
    inline FaceDuplicationCheckIntlRequest& setSourceFacePictureUrl(string sourceFacePictureUrl) { DARABONBA_PTR_SET_VALUE(sourceFacePictureUrl_, sourceFacePictureUrl) };


    // targetFacePicture Field Functions 
    bool hasTargetFacePicture() const { return this->targetFacePicture_ != nullptr;};
    void deleteTargetFacePicture() { this->targetFacePicture_ = nullptr;};
    inline string getTargetFacePicture() const { DARABONBA_PTR_GET_DEFAULT(targetFacePicture_, "") };
    inline FaceDuplicationCheckIntlRequest& setTargetFacePicture(string targetFacePicture) { DARABONBA_PTR_SET_VALUE(targetFacePicture_, targetFacePicture) };


    // targetFacePictureUrl Field Functions 
    bool hasTargetFacePictureUrl() const { return this->targetFacePictureUrl_ != nullptr;};
    void deleteTargetFacePictureUrl() { this->targetFacePictureUrl_ = nullptr;};
    inline string getTargetFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(targetFacePictureUrl_, "") };
    inline FaceDuplicationCheckIntlRequest& setTargetFacePictureUrl(string targetFacePictureUrl) { DARABONBA_PTR_SET_VALUE(targetFacePictureUrl_, targetFacePictureUrl) };


    // updateFaceIfUserExists Field Functions 
    bool hasUpdateFaceIfUserExists() const { return this->updateFaceIfUserExists_ != nullptr;};
    void deleteUpdateFaceIfUserExists() { this->updateFaceIfUserExists_ = nullptr;};
    inline string getUpdateFaceIfUserExists() const { DARABONBA_PTR_GET_DEFAULT(updateFaceIfUserExists_, "") };
    inline FaceDuplicationCheckIntlRequest& setUpdateFaceIfUserExists(string updateFaceIfUserExists) { DARABONBA_PTR_SET_VALUE(updateFaceIfUserExists_, updateFaceIfUserExists) };


    // verifyModel Field Functions 
    bool hasVerifyModel() const { return this->verifyModel_ != nullptr;};
    void deleteVerifyModel() { this->verifyModel_ = nullptr;};
    inline string getVerifyModel() const { DARABONBA_PTR_GET_DEFAULT(verifyModel_, "") };
    inline FaceDuplicationCheckIntlRequest& setVerifyModel(string verifyModel) { DARABONBA_PTR_SET_VALUE(verifyModel_, verifyModel) };


  protected:
    // Specifies whether to automatically register the face to the specified face library if no duplicate face is found during the search. Valid values:
    // - 0: Register.
    // - 1: Do not register. This is the default value.
    shared_ptr<string> autoRegistration_ {};
    // Specifies whether to return additional face attribute information. Valid values:
    // - N: Do not return. This is the default value.
    // - Y: Return. The result is located in Result.ExtFaceInfo.FaceAttributeInfo.
    shared_ptr<string> faceAttributeCheck_ {};
    // The codes of the face libraries created by the customer in the console. A maximum of 10 face libraries can be queried at the same time. Separate multiple face library codes with commas.
    shared_ptr<string> faceGroupCodes_ {};
    // The face quality check.
    shared_ptr<string> faceQualityCheck_ {};
    // The code of the face library for face registration.
    shared_ptr<string> faceRegisterGroupCode_ {};
    // The face matching threshold. <warning>Reserved field. Not enabled yet.</warning>
    shared_ptr<string> faceVerifyThreshold_ {};
    // Specifies whether to enable passive liveness detection. Valid values:
    // - 0: Disable.
    // - 1: Enable.
    shared_ptr<string> liveness_ {};
    // The custom unique business identifier used for subsequent troubleshooting. The value supports a combination of up to 32 letters and digits. Make sure that the value is unique.
    // 
    // This parameter is required.
    shared_ptr<string> merchantBizId_ {};
    // The custom user ID or other identifier that can identify a specific user, such as a mobile phone number or email address. Desensitize the value of this field in advance, such as by hashing the value.
    // 
    // This parameter is required.
    shared_ptr<string> merchantUserId_ {};
    // The product code.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // Specifies the number of faces to return when multiple faces exceed the matching threshold. Default value: 1. Maximum value: 5.
    shared_ptr<string> returnFaces_ {};
    // Specifies the type of face data to save. Valid values:
    // - 0: Face image. This is the default value.
    // - 1: Face feature.
    // <warning>Reserved field. Not enabled yet.</warning>
    shared_ptr<string> saveFacePicture_ {};
    // The custom authentication scene ID.
    shared_ptr<string> sceneCode_ {};
    // The Base64-encoded portrait photo.
    shared_ptr<string> sourceFacePicture_ {};
    // The URL of the portrait image. The URL must be a publicly accessible HTTP or HTTPS link.
    shared_ptr<string> sourceFacePictureUrl_ {};
    // The Base64-encoded portrait photo.
    shared_ptr<string> targetFacePicture_ {};
    // The URL of the portrait image. The URL must be a publicly accessible HTTP or HTTPS link.
    shared_ptr<string> targetFacePictureUrl_ {};
    // Specifies whether to overwrite the original face with the current face if the MerchantUserId already exists during automatic registration. Valid values:
    // - Y: Overwrite.
    // - N: Do not overwrite and return that the UserId already exists.
    shared_ptr<string> updateFaceIfUserExists_ {};
    // The authentication type. Valid values:
    // - 0: Retrieve pattern
    //   - Feature: The system receives a face library and a user face image (sourceFacePicture), and automatically retrieves from the face library to check whether the specified face image (sourceFacePicture) already exists. Passive liveness detection can be enabled for the face image (sourceFacePicture).
    //   - Recommended scenario: Scenarios where a real person needs to create an account and duplicate registration is not allowed.
    // - 1 (default): Authenticate pattern
    //   - Feature: The system receives a specified face image (sourceFacePicture) and a retained face image (TargetFacePicture), and automatically authenticates whether the faces match. Passive liveness detection can be enabled for the specified face image (sourceFacePicture).
    //   - Recommended scenario: Scenarios where it is required to authenticate whether the operation is performed by the user when modifying logon or account information.
    // - 2: Comprehensive pattern
    //   - Feature: The system receives a face library, a specified face image (sourceFacePicture), and a retained face image (TargetFacePicture) at the same time, and automatically retrieves from the face library to check whether the specified face image (sourceFacePicture) exists and authenticates whether it matches the retained face. Passive liveness detection can be enabled for the specified face image (sourceFacePicture).
    //   - Recommended scenario: Scenarios where it is required to authenticate that the user is a new user and the operation is performed by the user.
    // 
    // This parameter is required.
    shared_ptr<string> verifyModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
