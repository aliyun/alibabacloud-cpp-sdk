// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITFACEVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITFACEVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class InitFaceVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitFaceVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppQualityCheck, appQualityCheck_);
      DARABONBA_PTR_TO_JSON(AuthId, authId_);
      DARABONBA_PTR_TO_JSON(Birthday, birthday_);
      DARABONBA_PTR_TO_JSON(CallbackToken, callbackToken_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(CameraSelection, cameraSelection_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertNo, certNo_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(CertifyUrlStyle, certifyUrlStyle_);
      DARABONBA_PTR_TO_JSON(CertifyUrlType, certifyUrlType_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(FaceContrastPicture, faceContrastPicture_);
      DARABONBA_PTR_TO_JSON(FaceContrastPictureUrl, faceContrastPictureUrl_);
      DARABONBA_PTR_TO_JSON(FaceGuardOutput, faceGuardOutput_);
      DARABONBA_PTR_TO_JSON(H5DegradeConfirmBtn, h5DegradeConfirmBtn_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(NeedMultiFaceCheck, needMultiFaceCheck_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssObjectName, ossObjectName_);
      DARABONBA_PTR_TO_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_TO_JSON(ProcedurePriority, procedurePriority_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RarelyCharacters, rarelyCharacters_);
      DARABONBA_PTR_TO_JSON(ReadImg, readImg_);
      DARABONBA_PTR_TO_JSON(ReturnUrl, returnUrl_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SuitableType, suitableType_);
      DARABONBA_PTR_TO_JSON(UiCustomUrl, uiCustomUrl_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(ValidityDate, validityDate_);
      DARABONBA_PTR_TO_JSON(VideoEvidence, videoEvidence_);
      DARABONBA_PTR_TO_JSON(VoluntaryCustomizedContent, voluntaryCustomizedContent_);
    };
    friend void from_json(const Darabonba::Json& j, InitFaceVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppQualityCheck, appQualityCheck_);
      DARABONBA_PTR_FROM_JSON(AuthId, authId_);
      DARABONBA_PTR_FROM_JSON(Birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(CallbackToken, callbackToken_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(CameraSelection, cameraSelection_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(CertifyUrlStyle, certifyUrlStyle_);
      DARABONBA_PTR_FROM_JSON(CertifyUrlType, certifyUrlType_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(FaceContrastPicture, faceContrastPicture_);
      DARABONBA_PTR_FROM_JSON(FaceContrastPictureUrl, faceContrastPictureUrl_);
      DARABONBA_PTR_FROM_JSON(FaceGuardOutput, faceGuardOutput_);
      DARABONBA_PTR_FROM_JSON(H5DegradeConfirmBtn, h5DegradeConfirmBtn_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(NeedMultiFaceCheck, needMultiFaceCheck_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssObjectName, ossObjectName_);
      DARABONBA_PTR_FROM_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_FROM_JSON(ProcedurePriority, procedurePriority_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RarelyCharacters, rarelyCharacters_);
      DARABONBA_PTR_FROM_JSON(ReadImg, readImg_);
      DARABONBA_PTR_FROM_JSON(ReturnUrl, returnUrl_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SuitableType, suitableType_);
      DARABONBA_PTR_FROM_JSON(UiCustomUrl, uiCustomUrl_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(ValidityDate, validityDate_);
      DARABONBA_PTR_FROM_JSON(VideoEvidence, videoEvidence_);
      DARABONBA_PTR_FROM_JSON(VoluntaryCustomizedContent, voluntaryCustomizedContent_);
    };
    InitFaceVerifyRequest() = default ;
    InitFaceVerifyRequest(const InitFaceVerifyRequest &) = default ;
    InitFaceVerifyRequest(InitFaceVerifyRequest &&) = default ;
    InitFaceVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitFaceVerifyRequest() = default ;
    InitFaceVerifyRequest& operator=(const InitFaceVerifyRequest &) = default ;
    InitFaceVerifyRequest& operator=(InitFaceVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appQualityCheck_ == nullptr
        && this->authId_ == nullptr && this->birthday_ == nullptr && this->callbackToken_ == nullptr && this->callbackUrl_ == nullptr && this->cameraSelection_ == nullptr
        && this->certName_ == nullptr && this->certNo_ == nullptr && this->certType_ == nullptr && this->certifyId_ == nullptr && this->certifyUrlStyle_ == nullptr
        && this->certifyUrlType_ == nullptr && this->crop_ == nullptr && this->encryptType_ == nullptr && this->faceContrastPicture_ == nullptr && this->faceContrastPictureUrl_ == nullptr
        && this->faceGuardOutput_ == nullptr && this->h5DegradeConfirmBtn_ == nullptr && this->ip_ == nullptr && this->metaInfo_ == nullptr && this->mobile_ == nullptr
        && this->mode_ == nullptr && this->model_ == nullptr && this->needMultiFaceCheck_ == nullptr && this->ossBucketName_ == nullptr && this->ossObjectName_ == nullptr
        && this->outerOrderNo_ == nullptr && this->procedurePriority_ == nullptr && this->productCode_ == nullptr && this->rarelyCharacters_ == nullptr && this->readImg_ == nullptr
        && this->returnUrl_ == nullptr && this->sceneId_ == nullptr && this->suitableType_ == nullptr && this->uiCustomUrl_ == nullptr && this->userId_ == nullptr
        && this->validityDate_ == nullptr && this->videoEvidence_ == nullptr && this->voluntaryCustomizedContent_ == nullptr; };
    // appQualityCheck Field Functions 
    bool hasAppQualityCheck() const { return this->appQualityCheck_ != nullptr;};
    void deleteAppQualityCheck() { this->appQualityCheck_ = nullptr;};
    inline string getAppQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(appQualityCheck_, "") };
    inline InitFaceVerifyRequest& setAppQualityCheck(string appQualityCheck) { DARABONBA_PTR_SET_VALUE(appQualityCheck_, appQualityCheck) };


    // authId Field Functions 
    bool hasAuthId() const { return this->authId_ != nullptr;};
    void deleteAuthId() { this->authId_ = nullptr;};
    inline string getAuthId() const { DARABONBA_PTR_GET_DEFAULT(authId_, "") };
    inline InitFaceVerifyRequest& setAuthId(string authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline InitFaceVerifyRequest& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // callbackToken Field Functions 
    bool hasCallbackToken() const { return this->callbackToken_ != nullptr;};
    void deleteCallbackToken() { this->callbackToken_ = nullptr;};
    inline string getCallbackToken() const { DARABONBA_PTR_GET_DEFAULT(callbackToken_, "") };
    inline InitFaceVerifyRequest& setCallbackToken(string callbackToken) { DARABONBA_PTR_SET_VALUE(callbackToken_, callbackToken) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline InitFaceVerifyRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // cameraSelection Field Functions 
    bool hasCameraSelection() const { return this->cameraSelection_ != nullptr;};
    void deleteCameraSelection() { this->cameraSelection_ = nullptr;};
    inline string getCameraSelection() const { DARABONBA_PTR_GET_DEFAULT(cameraSelection_, "") };
    inline InitFaceVerifyRequest& setCameraSelection(string cameraSelection) { DARABONBA_PTR_SET_VALUE(cameraSelection_, cameraSelection) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline InitFaceVerifyRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline InitFaceVerifyRequest& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline InitFaceVerifyRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline InitFaceVerifyRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // certifyUrlStyle Field Functions 
    bool hasCertifyUrlStyle() const { return this->certifyUrlStyle_ != nullptr;};
    void deleteCertifyUrlStyle() { this->certifyUrlStyle_ = nullptr;};
    inline string getCertifyUrlStyle() const { DARABONBA_PTR_GET_DEFAULT(certifyUrlStyle_, "") };
    inline InitFaceVerifyRequest& setCertifyUrlStyle(string certifyUrlStyle) { DARABONBA_PTR_SET_VALUE(certifyUrlStyle_, certifyUrlStyle) };


    // certifyUrlType Field Functions 
    bool hasCertifyUrlType() const { return this->certifyUrlType_ != nullptr;};
    void deleteCertifyUrlType() { this->certifyUrlType_ = nullptr;};
    inline string getCertifyUrlType() const { DARABONBA_PTR_GET_DEFAULT(certifyUrlType_, "") };
    inline InitFaceVerifyRequest& setCertifyUrlType(string certifyUrlType) { DARABONBA_PTR_SET_VALUE(certifyUrlType_, certifyUrlType) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline InitFaceVerifyRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline InitFaceVerifyRequest& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // faceContrastPicture Field Functions 
    bool hasFaceContrastPicture() const { return this->faceContrastPicture_ != nullptr;};
    void deleteFaceContrastPicture() { this->faceContrastPicture_ = nullptr;};
    inline string getFaceContrastPicture() const { DARABONBA_PTR_GET_DEFAULT(faceContrastPicture_, "") };
    inline InitFaceVerifyRequest& setFaceContrastPicture(string faceContrastPicture) { DARABONBA_PTR_SET_VALUE(faceContrastPicture_, faceContrastPicture) };


    // faceContrastPictureUrl Field Functions 
    bool hasFaceContrastPictureUrl() const { return this->faceContrastPictureUrl_ != nullptr;};
    void deleteFaceContrastPictureUrl() { this->faceContrastPictureUrl_ = nullptr;};
    inline string getFaceContrastPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(faceContrastPictureUrl_, "") };
    inline InitFaceVerifyRequest& setFaceContrastPictureUrl(string faceContrastPictureUrl) { DARABONBA_PTR_SET_VALUE(faceContrastPictureUrl_, faceContrastPictureUrl) };


    // faceGuardOutput Field Functions 
    bool hasFaceGuardOutput() const { return this->faceGuardOutput_ != nullptr;};
    void deleteFaceGuardOutput() { this->faceGuardOutput_ = nullptr;};
    inline string getFaceGuardOutput() const { DARABONBA_PTR_GET_DEFAULT(faceGuardOutput_, "") };
    inline InitFaceVerifyRequest& setFaceGuardOutput(string faceGuardOutput) { DARABONBA_PTR_SET_VALUE(faceGuardOutput_, faceGuardOutput) };


    // h5DegradeConfirmBtn Field Functions 
    bool hasH5DegradeConfirmBtn() const { return this->h5DegradeConfirmBtn_ != nullptr;};
    void deleteH5DegradeConfirmBtn() { this->h5DegradeConfirmBtn_ = nullptr;};
    inline string getH5DegradeConfirmBtn() const { DARABONBA_PTR_GET_DEFAULT(h5DegradeConfirmBtn_, "") };
    inline InitFaceVerifyRequest& setH5DegradeConfirmBtn(string h5DegradeConfirmBtn) { DARABONBA_PTR_SET_VALUE(h5DegradeConfirmBtn_, h5DegradeConfirmBtn) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline InitFaceVerifyRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // metaInfo Field Functions 
    bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
    void deleteMetaInfo() { this->metaInfo_ = nullptr;};
    inline string getMetaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
    inline InitFaceVerifyRequest& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline InitFaceVerifyRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline InitFaceVerifyRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline InitFaceVerifyRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // needMultiFaceCheck Field Functions 
    bool hasNeedMultiFaceCheck() const { return this->needMultiFaceCheck_ != nullptr;};
    void deleteNeedMultiFaceCheck() { this->needMultiFaceCheck_ = nullptr;};
    inline string getNeedMultiFaceCheck() const { DARABONBA_PTR_GET_DEFAULT(needMultiFaceCheck_, "") };
    inline InitFaceVerifyRequest& setNeedMultiFaceCheck(string needMultiFaceCheck) { DARABONBA_PTR_SET_VALUE(needMultiFaceCheck_, needMultiFaceCheck) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline InitFaceVerifyRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossObjectName Field Functions 
    bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
    void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
    inline string getOssObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
    inline InitFaceVerifyRequest& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


    // outerOrderNo Field Functions 
    bool hasOuterOrderNo() const { return this->outerOrderNo_ != nullptr;};
    void deleteOuterOrderNo() { this->outerOrderNo_ = nullptr;};
    inline string getOuterOrderNo() const { DARABONBA_PTR_GET_DEFAULT(outerOrderNo_, "") };
    inline InitFaceVerifyRequest& setOuterOrderNo(string outerOrderNo) { DARABONBA_PTR_SET_VALUE(outerOrderNo_, outerOrderNo) };


    // procedurePriority Field Functions 
    bool hasProcedurePriority() const { return this->procedurePriority_ != nullptr;};
    void deleteProcedurePriority() { this->procedurePriority_ = nullptr;};
    inline string getProcedurePriority() const { DARABONBA_PTR_GET_DEFAULT(procedurePriority_, "") };
    inline InitFaceVerifyRequest& setProcedurePriority(string procedurePriority) { DARABONBA_PTR_SET_VALUE(procedurePriority_, procedurePriority) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline InitFaceVerifyRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // rarelyCharacters Field Functions 
    bool hasRarelyCharacters() const { return this->rarelyCharacters_ != nullptr;};
    void deleteRarelyCharacters() { this->rarelyCharacters_ = nullptr;};
    inline string getRarelyCharacters() const { DARABONBA_PTR_GET_DEFAULT(rarelyCharacters_, "") };
    inline InitFaceVerifyRequest& setRarelyCharacters(string rarelyCharacters) { DARABONBA_PTR_SET_VALUE(rarelyCharacters_, rarelyCharacters) };


    // readImg Field Functions 
    bool hasReadImg() const { return this->readImg_ != nullptr;};
    void deleteReadImg() { this->readImg_ = nullptr;};
    inline string getReadImg() const { DARABONBA_PTR_GET_DEFAULT(readImg_, "") };
    inline InitFaceVerifyRequest& setReadImg(string readImg) { DARABONBA_PTR_SET_VALUE(readImg_, readImg) };


    // returnUrl Field Functions 
    bool hasReturnUrl() const { return this->returnUrl_ != nullptr;};
    void deleteReturnUrl() { this->returnUrl_ = nullptr;};
    inline string getReturnUrl() const { DARABONBA_PTR_GET_DEFAULT(returnUrl_, "") };
    inline InitFaceVerifyRequest& setReturnUrl(string returnUrl) { DARABONBA_PTR_SET_VALUE(returnUrl_, returnUrl) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline InitFaceVerifyRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // suitableType Field Functions 
    bool hasSuitableType() const { return this->suitableType_ != nullptr;};
    void deleteSuitableType() { this->suitableType_ = nullptr;};
    inline string getSuitableType() const { DARABONBA_PTR_GET_DEFAULT(suitableType_, "") };
    inline InitFaceVerifyRequest& setSuitableType(string suitableType) { DARABONBA_PTR_SET_VALUE(suitableType_, suitableType) };


    // uiCustomUrl Field Functions 
    bool hasUiCustomUrl() const { return this->uiCustomUrl_ != nullptr;};
    void deleteUiCustomUrl() { this->uiCustomUrl_ = nullptr;};
    inline string getUiCustomUrl() const { DARABONBA_PTR_GET_DEFAULT(uiCustomUrl_, "") };
    inline InitFaceVerifyRequest& setUiCustomUrl(string uiCustomUrl) { DARABONBA_PTR_SET_VALUE(uiCustomUrl_, uiCustomUrl) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline InitFaceVerifyRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // validityDate Field Functions 
    bool hasValidityDate() const { return this->validityDate_ != nullptr;};
    void deleteValidityDate() { this->validityDate_ = nullptr;};
    inline string getValidityDate() const { DARABONBA_PTR_GET_DEFAULT(validityDate_, "") };
    inline InitFaceVerifyRequest& setValidityDate(string validityDate) { DARABONBA_PTR_SET_VALUE(validityDate_, validityDate) };


    // videoEvidence Field Functions 
    bool hasVideoEvidence() const { return this->videoEvidence_ != nullptr;};
    void deleteVideoEvidence() { this->videoEvidence_ = nullptr;};
    inline string getVideoEvidence() const { DARABONBA_PTR_GET_DEFAULT(videoEvidence_, "") };
    inline InitFaceVerifyRequest& setVideoEvidence(string videoEvidence) { DARABONBA_PTR_SET_VALUE(videoEvidence_, videoEvidence) };


    // voluntaryCustomizedContent Field Functions 
    bool hasVoluntaryCustomizedContent() const { return this->voluntaryCustomizedContent_ != nullptr;};
    void deleteVoluntaryCustomizedContent() { this->voluntaryCustomizedContent_ = nullptr;};
    inline string getVoluntaryCustomizedContent() const { DARABONBA_PTR_GET_DEFAULT(voluntaryCustomizedContent_, "") };
    inline InitFaceVerifyRequest& setVoluntaryCustomizedContent(string voluntaryCustomizedContent) { DARABONBA_PTR_SET_VALUE(voluntaryCustomizedContent_, voluntaryCustomizedContent) };


  protected:
    // Whether the SDK enables strict face quality detection:
    // 
    // - **Y**: Enable
    // 
    // - **N** (default): Disable
    // 
    // 
    // > 
    // > - If this parameter is enabled, the SDK needs to integrate the [strict face quality detection module](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/description-of-sdk-package-clipping?spm=a2c4g.11186623.0.0.1a9d35c6ySFUPW). Enabling strict quality detection may decrease the success rate of user face recognition.
    // > - Only supported in Android SDK version 2.3.24 and above.
    shared_ptr<string> appQualityCheck_ {};
    // User authorization ID, with a maximum length of 64 characters.
    shared_ptr<string> authId_ {};
    // Date of birth on the document.
    // 
    // This field is required when the document type **CertType** is **PASSPORT** and **Mode** is **3**.
    shared_ptr<string> birthday_ {};
    // Security token, generated by you, used for preventing duplication and tampering.
    // 
    // If this value is set, the **CallbackToken** field will be displayed in the callback address.
    shared_ptr<string> callbackToken_ {};
    // Callback notification address for the authentication result, with the default callback request method being GET. The callback address must start with `https`. After completing the authentication, the platform will call back this address and automatically add the `certifyId` and `passed` fields, where the value of the `passed` field is the subcode, for example: `https://www.aliyun.com?callbackToken=1000004826&certifyId=shaxxxx&passed=200`.
    // 
    // <notice>
    // 
    // - Callbacks are triggered only when the authentication is completed (including both successful and unsuccessful authentications). If the authentication is abandoned, interrupted abnormally, or not performed, no notification will be sent. It is recommended that you retrieve detailed authentication information through a query interface if needed after receiving the callback notification.
    // - The accessibility of the provided address will be verified before the API call. If the address cannot be accessed over the public network, a 401 error will be returned.
    // - The callback interface must return an HTTP status code of 200; otherwise, it will trigger a retry, with two callbacks within 3 seconds.
    // 
    // </notice>
    shared_ptr<string> callbackUrl_ {};
    // Whether to enable the camera selection feature:
    // 
    // - **Y**: Enable
    // 
    // - **N** (default): Disable
    // 
    // > This feature only takes effect in PC integration mode. When enabled, it allows users to select the camera for authentication.
    shared_ptr<string> cameraSelection_ {};
    // Real name.
    shared_ptr<string> certName_ {};
    // Document number.
    shared_ptr<string> certNo_ {};
    // Document type.
    // Currently, only IDENTITY_CARD (ID card) is supported.
    shared_ptr<string> certType_ {};
    // >Warning: To be deprecated
    // 
    // Previously passed CertifyId for real-person authentication, where the photo taken during authentication is used as the comparison photo.
    // 
    // > Among the four image input methods (FaceContrastPicture, FaceContrastPictureUrl, CertifyId, OSS), choose one to input.
    shared_ptr<string> certifyId_ {};
    // Types of **CertifyUrl** returned, including:
    // 
    // - **L**: Original long link
    // 
    // - **S** (default): Short link
    shared_ptr<string> certifyUrlStyle_ {};
    // Web SDK device type, with values **WEB** or **H5**.
    // 
    // > Only Web SDK device types are supported.
    shared_ptr<string> certifyUrlType_ {};
    // Whether to allow cropping of the face image, with the default being not allowed.
    // 
    // - T: Indicates allowing cropping.
    // 
    // - F: Indicates not allowing cropping.
    // 
    // > If the image you are requesting is not from a standard liveness detection SDK, it is recommended to allow face image cropping. When this feature is enabled, the requested image will first undergo face cropping and alignment, and then the service request will be initiated.
    shared_ptr<string> crop_ {};
    // Encryption algorithm to be used, currently supporting only the SM2 national encryption algorithm.
    // 
    // After enabling encrypted transmission, you need to pass in the encrypted CertName and CertNo. For how to encrypt, please refer to [Parameter Encryption Instructions](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/description-of-parameter-encryption?spm=a2c4g.11186623.0.0.1a9d566eWdqwy8#task-2229332).
    shared_ptr<string> encryptType_ {};
    // Base64 encoded photo.
    // 
    // > Choose one of the following methods to upload the image: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, or OSS.
    shared_ptr<string> faceContrastPicture_ {};
    // OSS photo address, currently only supports authorized OSS photo addresses.
    // 
    // > Among the four image input methods (FaceContrastPicture, FaceContrastPictureUrl, CertifyId, OSS), choose one to input.
    shared_ptr<string> faceContrastPictureUrl_ {};
    // Device assistant label type, with the value: **DeviceRisk**.
    // 
    // >
    // > - Choosing to output the device assistant will incur additional costs. For details, see [Paid Value-Added Services](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/face-guard?spm=a2c4g.11186623.0.0.443e5522rbHsR4).
    // > - If you do not need to output the device assistant label, you can either not pass the parameter or pass an empty value.
    shared_ptr<string> faceGuardOutput_ {};
    // H5 Downgrade Confirmation Button Switch:
    // 
    // - **Y**: Enabled (On)
    // - **N (default)**: Disabled (Off)
    shared_ptr<string> h5DegradeConfirmBtn_ {};
    // User\\"s IP address.
    shared_ptr<string> ip_ {};
    // Metainfo environment parameter, which needs to be obtained through the client SDK.
    shared_ptr<string> metaInfo_ {};
    // User\\"s phone number.
    shared_ptr<string> mobile_ {};
    // Method to obtain passport NFC verification elements:
    // 
    // - **1**: User input, where the end-user manually inputs the document information using the UI interface provided by the Alibaba Cloud SDK.
    // 
    // - **3**: External parameter input, where the document information is passed through external parameters.
    // 
    // > When decoding the encrypted information from the passport chip using NFC, three elements of the passport need to be obtained, including name, date of birth, and document expiration date.
    shared_ptr<string> mode_ {};
    // Liveness detection type, with values:
    // > Only the following liveness detection types are supported; custom actions or combinations are not supported at this time.
    // 
    // Note
    // Only the following liveness detection types are supported; custom actions or combinations are not supported at this time.
    // 
    // - **LIVENESS** (default): Blinking
    // 
    // - **PHOTINUS_LIVENESS**: Blinking + Colorful Light
    // 
    // - **MULTI_ACTION**: Blinking + Head Shaking (the order of blinking and head shaking is random)
    // 
    // - **MOVE_ACTION** (recommended): Moving Closer and Farther + Blinking
    // 
    // - **MOVE_PHOTINUS**: Moving Closer and Farther + Colorful Light
    // 
    // > 
    // >- The **default liveness detection type** is supported in the following versions:
    // >   - Android SDK 1.2.6 and above
    // >   - iOS SDK 1.2.4 and above
    // >   - Harmony SDK 1.0.0 and above
    // >- Other types are supported in the latest SDK versions for Android/iOS/Harmony. It is recommended to integrate the latest version.
    shared_ptr<string> model_ {};
    // Whether to intercept when multiple faces are detected, with the following values:
    // 
    // - **Y**: Intercept, and the client prompts the user to re-scan their face.
    // 
    // - **N** (default): Do not intercept, and send the largest face in the scanned image to the server for security checks.
    shared_ptr<string> needMultiFaceCheck_ {};
    // Authorized OSS bucket name.
    // 
    // > Among the four image input methods (FaceContrastPicture, FaceContrastPictureUrl, CertifyId, OSS), choose one to input.
    shared_ptr<string> ossBucketName_ {};
    // Authorized OSS object name.
    // 
    // > Among the four image input methods (FaceContrastPicture, FaceContrastPictureUrl, CertifyId, OSS), choose one to input.
    shared_ptr<string> ossObjectName_ {};
    // Unique identifier for the merchant\\"s request.
    // 
    // The value is a 32-character alphanumeric combination. The first few characters are a custom abbreviation defined by the merchant, followed by a period, and the latter part can be a random or incremental sequence.
    shared_ptr<string> outerOrderNo_ {};
    // Degradation configuration for mobile H5 authentication when WebRTC or Webassembly is incompatible.
    // 
    // - **keep**: Does not support degradation, returns directly.
    // 
    // - **url** (default): Supports degradation, returns an authentication URL. Users can use this URL to open or switch browsers for authentication.
    // 
    // - **video**: Supports degradation, uses the system camera to record a 3~5 second blinking video for authentication.
    // 
    // 
    // > 
    // > When the degradation mode is Video, the following functions will be disabled, and the product security will decrease. It is recommended to configure it only for secure scenarios.
    // > - Liveness detection type settings will not take effect.
    // > - The VideoEvidence function is not supported.
    shared_ptr<string> procedurePriority_ {};
    // Fixed value. The parameter value differs based on the product solution:
    // - APP Authentication Scheme: Fixed value is ID_PRO
    // - Live Face Verification Scheme: Fixed value is PV_FV
    // - Liveness Detection Scheme: Fixed value is LR_FR
    shared_ptr<string> productCode_ {};
    // Whether to enable rare character mode:
    // 
    // - **Y**: Enable. A message input box will pop up before the user authenticates, requiring the input of the rare character name and ID number. The user must agree to the terms before starting the authentication process.
    // 
    // - **N**: Not enabled (default)
    shared_ptr<string> rarelyCharacters_ {};
    // Whether to read the document photo:
    // 
    // - **Y**: Read
    // 
    // - **N**: Do not read
    // 
    // > If the document face photo is needed in subsequent authentication steps, it is recommended to set this parameter to Y.
    shared_ptr<string> readImg_ {};
    // Target URL for the merchant\\"s business page to redirect to.
    shared_ptr<string> returnUrl_ {};
    // Authentication Scene ID.
    shared_ptr<int64_t> sceneId_ {};
    // Aging-friendly configuration parameters that take effect for each authentication request. You can choose different parameters based on your app\\"s business attributes, customer distribution, operational characteristics, etc., for each authentication request. The options include the following, with the default being 0.
    // 
    // - **0**: Not enabled, indicating that the current authentication request does not enable aging-friendly mode.
    // 
    // - **1**: Enabled, indicating that the current authentication request enables aging-friendly mode.
    // 
    // - **2**: User choice.
    // 
    // 
    // Supports end-users in choosing the authentication mode. The product guide page provides two authentication entry points: \\"Enable Authentication\\" and \\"Elderly Authentication Mode\\". When the user selects \\"Elderly Authentication Mode\\", the system enters aging-friendly mode.
    // > 
    // > - Aging-friendly parameters are only effective when the liveness detection type **Model** is set to **LIVENESS** or **MULTI_ACTION**.
    shared_ptr<string> suitableType_ {};
    // UI configuration file URL.
    // 
    // You can view the complete configuration in the [Web SDK UI Customization Description](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/web-sdk-ui-custom-configuration-description?spm=a2c4g.11186623.0.0.4c683f5c8K3I9p).
    shared_ptr<string> uiCustomUrl_ {};
    // Custom user ID for the customer\\"s business, please ensure it is unique.
    shared_ptr<string> userId_ {};
    // Document expiration date.
    // 
    // This field is required when the document type **CertType** is **PASSPORT** and **Mode** is **3**.
    shared_ptr<string> validityDate_ {};
    // Whether to enable video evidence:
    // 
    // - **true**: Enable
    // 
    // - **false** (default): Disable
    // 
    // > Due to the large size of video files, when the network is unstable, the system will discard the video file to prioritize the transmission of necessary images for authentication. It is recommended that your business set a weak dependency on the video.
    shared_ptr<string> videoEvidence_ {};
    // Customized content. Required when personalized settings are enabled. The format is a JSON String of a String List.
    // 
    // - For the follow-reading scenario: It should not exceed 60 Chinese characters (excluding punctuation), and the List contains only one element.
    // 
    // - For the Q&A scenario: Up to 3 questions can be set, with each question not exceeding 30 Chinese characters, and each question being an element in the List.
    shared_ptr<string> voluntaryCustomizedContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
