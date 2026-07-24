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
        && this->targetFacePictureUrl_ == nullptr && this->verifyModel_ == nullptr; };
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


    // verifyModel Field Functions 
    bool hasVerifyModel() const { return this->verifyModel_ != nullptr;};
    void deleteVerifyModel() { this->verifyModel_ = nullptr;};
    inline string getVerifyModel() const { DARABONBA_PTR_GET_DEFAULT(verifyModel_, "") };
    inline FaceDuplicationCheckIntlRequest& setVerifyModel(string verifyModel) { DARABONBA_PTR_SET_VALUE(verifyModel_, verifyModel) };


  protected:
    // Specifies whether to automatically register the face in the specified face library when no duplicate face is found during the search. Valid values:
    // - 0: automatic registration
    // - 1: no registration (default)
    shared_ptr<string> autoRegistration_ {};
    shared_ptr<string> faceAttributeCheck_ {};
    // The face library codes created through the console. A maximum of 10 face libraries can be queried at the same time. Separate multiple face library codes with commas (,).
    shared_ptr<string> faceGroupCodes_ {};
    // The face quality check.
    shared_ptr<string> faceQualityCheck_ {};
    // The face library for registration.
    shared_ptr<string> faceRegisterGroupCode_ {};
    // The face matching threshold. >Warning: This is a reserved field and is not currently enabled.</warning>
    shared_ptr<string> faceVerifyThreshold_ {};
    // Specifies whether to enable passive liveness detection. Valid values:
    // - 0: disabled
    // - 1: enabled
    shared_ptr<string> liveness_ {};
    // The custom unique business identifier used for subsequent troubleshooting. The value is a combination of letters and digits up to 32 characters in length. Ensure that the value is unique.
    // 
    // This parameter is required.
    shared_ptr<string> merchantBizId_ {};
    // The custom user ID or another identifier that can identify a specific user, such as a phone number or email address. We strongly recommend that you desensitize this field value in advance, for example, by hashing the value.
    // 
    // This parameter is required.
    shared_ptr<string> merchantUserId_ {};
    // The product code.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The number of faces to return when multiple faces above the matching threshold are found. You can use this parameter to customize the number of returned faces.
    // - Default value: 1.
    // - Maximum value: 5.
    shared_ptr<string> returnFaces_ {};
    // The type of face data to save. Valid values:
    // - 0: face image (default)
    // - 1: feature
    // >Warning: This is a reserved field and is not currently enabled.</warning>
    shared_ptr<string> saveFacePicture_ {};
    // The custom verification scenario ID.
    shared_ptr<string> sceneCode_ {};
    // The Base64-encoded face image.
    shared_ptr<string> sourceFacePicture_ {};
    // The URL of the face image. The URL must be a publicly accessible HTTP or HTTPS link.
    shared_ptr<string> sourceFacePictureUrl_ {};
    // The Base64-encoded face image.
    shared_ptr<string> targetFacePicture_ {};
    // The URL of the face image. The URL must be a publicly accessible HTTP or HTTPS link.
    shared_ptr<string> targetFacePictureUrl_ {};
    // The verification type. Valid values:
    // - 0: retrieve pattern
    // > - Feature: Submits a face library and a user face image (sourceFacePicture). The system automatically retrieves the face library to determine whether the specified face image (sourceFacePicture) already exists. Passive liveness detection can be enabled for the face image (sourceFacePicture).
    // > - Recommended scenario: Real-person create an account where duplicate registration is not allowed.
    // 
    // - 1 (default): authenticate pattern
    // > - Feature: Submits a specified face image (sourceFacePicture) and a stored face image (TargetFacePicture). The system automatically authenticates whether the two faces match. Passive liveness detection can be enabled for the specified face image (sourceFacePicture).
    // > - Recommended scenario: Authenticating the identity of the operator when modifying logon credentials or account information.
    // 
    // - 2: comprehensive pattern
    // > - Feature: Submits a face library, a specified face image (sourceFacePicture), and a stored face image (TargetFacePicture). The system automatically retrieves the face library to determine whether the specified face image (sourceFacePicture) exists, authenticates whether it matches the stored face, and supports passive liveness detection for the specified face image (sourceFacePicture).
    // > - Recommended scenario: Verifying that the user is new and the operation is performed by the user in person.
    // 
    // This parameter is required.
    shared_ptr<string> verifyModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
