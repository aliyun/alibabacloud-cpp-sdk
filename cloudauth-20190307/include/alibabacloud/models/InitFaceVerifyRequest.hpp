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
      DARABONBA_PTR_TO_JSON(EnableAlbumUpload, enableAlbumUpload_);
      DARABONBA_PTR_TO_JSON(EnableBeauty, enableBeauty_);
      DARABONBA_PTR_TO_JSON(EnableTts, enableTts_);
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
      DARABONBA_PTR_FROM_JSON(EnableAlbumUpload, enableAlbumUpload_);
      DARABONBA_PTR_FROM_JSON(EnableBeauty, enableBeauty_);
      DARABONBA_PTR_FROM_JSON(EnableTts, enableTts_);
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
        && this->certifyUrlType_ == nullptr && this->crop_ == nullptr && this->enableAlbumUpload_ == nullptr && this->enableBeauty_ == nullptr && this->enableTts_ == nullptr
        && this->encryptType_ == nullptr && this->faceContrastPicture_ == nullptr && this->faceContrastPictureUrl_ == nullptr && this->faceGuardOutput_ == nullptr && this->h5DegradeConfirmBtn_ == nullptr
        && this->ip_ == nullptr && this->metaInfo_ == nullptr && this->mobile_ == nullptr && this->mode_ == nullptr && this->model_ == nullptr
        && this->needMultiFaceCheck_ == nullptr && this->ossBucketName_ == nullptr && this->ossObjectName_ == nullptr && this->outerOrderNo_ == nullptr && this->procedurePriority_ == nullptr
        && this->productCode_ == nullptr && this->rarelyCharacters_ == nullptr && this->readImg_ == nullptr && this->returnUrl_ == nullptr && this->sceneId_ == nullptr
        && this->suitableType_ == nullptr && this->uiCustomUrl_ == nullptr && this->userId_ == nullptr && this->validityDate_ == nullptr && this->videoEvidence_ == nullptr
        && this->voluntaryCustomizedContent_ == nullptr; };
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


    // enableAlbumUpload Field Functions 
    bool hasEnableAlbumUpload() const { return this->enableAlbumUpload_ != nullptr;};
    void deleteEnableAlbumUpload() { this->enableAlbumUpload_ = nullptr;};
    inline string getEnableAlbumUpload() const { DARABONBA_PTR_GET_DEFAULT(enableAlbumUpload_, "") };
    inline InitFaceVerifyRequest& setEnableAlbumUpload(string enableAlbumUpload) { DARABONBA_PTR_SET_VALUE(enableAlbumUpload_, enableAlbumUpload) };


    // enableBeauty Field Functions 
    bool hasEnableBeauty() const { return this->enableBeauty_ != nullptr;};
    void deleteEnableBeauty() { this->enableBeauty_ = nullptr;};
    inline string getEnableBeauty() const { DARABONBA_PTR_GET_DEFAULT(enableBeauty_, "") };
    inline InitFaceVerifyRequest& setEnableBeauty(string enableBeauty) { DARABONBA_PTR_SET_VALUE(enableBeauty_, enableBeauty) };


    // enableTts Field Functions 
    bool hasEnableTts() const { return this->enableTts_ != nullptr;};
    void deleteEnableTts() { this->enableTts_ = nullptr;};
    inline string getEnableTts() const { DARABONBA_PTR_GET_DEFAULT(enableTts_, "") };
    inline InitFaceVerifyRequest& setEnableTts(string enableTts) { DARABONBA_PTR_SET_VALUE(enableTts_, enableTts) };


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
    // Specifies whether to enable strict face quality detection in the SDK. Valid values:
    // 
    // - **Y**: Enables strict face quality detection.
    // 
    // - **N**: Does not enable strict face quality detection. This is the default value.
    // 
    // 
    // > 
    // > - If you enable this parameter, the SDK must integrate the [strict face quality detection module](https://www.alibabacloud.com/help/en/id-verification/financial-grade-id-verification/description-of-sdk-package-clipping). Affected by strict quality detection, the success rate of face scanning may decrease.
    // > - Only Android SDK 2.3.24 and later are supported.
    shared_ptr<string> appQualityCheck_ {};
    // The user authorization ID. The maximum length is 64 characters.
    shared_ptr<string> authId_ {};
    // The date of birth on the ID document.
    // 
    // This parameter is required when the **CertType** parameter is set to **PASSPORT** and the **Mode** parameter is set to **3**.
    shared_ptr<string> birthday_ {};
    // The security token that you generate to prevent duplicate and tampered requests.
    // 
    // If you specify this parameter, the **CallbackToken** field is displayed in the callback URL.
    shared_ptr<string> callbackToken_ {};
    // The callback URL for authentication result notifications. The default callback request method is GET. The callback URL must start with `https`. After the authentication is completed, the platform invokes this URL and automatically appends the `certifyId` and `passed` fields. The value of the `passed` field is the subcode. Example: `https://www.aliyun.com?callbackToken=1000004826&certifyId=shaxxxx&passed=200`.
    // 
    // <notice>
    // 
    // - The callback is triggered only when the authentication is completed, including both successful and failed authentications. If the authentication is abandoned, an abnormal break occurs, or the authentication is not performed, no notification is sent. We recommend that you invoke the query API operation to obtain the authentication details after you receive the callback notification if needed.
    // - The accessibility of the URL is verified before the API operation is invoked. If the URL does not support public network access, a 401 error is returned.
    // - The API operation must return HTTP status code 200 after the callback. Otherwise, a retry is triggered, and two callbacks are sent within 3 seconds.
    // 
    // </notice>
    shared_ptr<string> callbackUrl_ {};
    // Specifies whether to enable the camera selection feature. Valid values:
    // 
    // - **Y**: Enables the feature.
    // 
    // - **N**: Does not enable the feature. This is the default value.
    // 
    // > This feature takes effect only in the PC integration mode. After this feature is enabled, users can select a camera for authentication.
    shared_ptr<string> cameraSelection_ {};
    // The real name.
    shared_ptr<string> certName_ {};
    // The ID document number.
    shared_ptr<string> certNo_ {};
    // The type of the ID document.
    // 
    // Only ID cards are supported. Set the value to IDENTITY_CARD.
    shared_ptr<string> certType_ {};
    // **[Deprecated]**
    // 
    // The CertifyId of a previous successful ID Verification. The photo used in the previous authentication is used as the comparison photo.
    // 
    // > You can specify only one of the following parameters to pass the image: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, and OSS.
    shared_ptr<string> certifyId_ {};
    // The type of the returned **CertifyUrl**. Valid values:
    // 
    // - **L**: Original long URL.
    // 
    // - **S** (default): Short URL.
    shared_ptr<string> certifyUrlStyle_ {};
    // The device type of the Web SDK. Valid values: **WEB** and **H5**.
    // 
    // > Only Web SDK device types are supported.
    shared_ptr<string> certifyUrlType_ {};
    // Specifies whether to allow face image cropping. By default, cropping is not allowed. Valid values:
    // 
    // - T: Cropping is allowed.
    // 
    // - F: Cropping is not allowed.
    // 
    // > If the requested image is not collected by the standard liveness detection SDK, we recommend that you allow face image cropping. After this feature is enabled, the requested image is cropped and corrected before the request is sent to the service.
    shared_ptr<string> crop_ {};
    // Specifies whether to allow album upload. Valid values: Y and N. Default value: N.
    shared_ptr<string> enableAlbumUpload_ {};
    // Specifies whether to enable the beauty filter. Valid values: Y and N.
    shared_ptr<string> enableBeauty_ {};
    // Specifies whether to enable speech synthesis for H5 willingness authentication. Valid values: Y and N. Default value: Y.
    shared_ptr<string> enableTts_ {};
    // The encryption algorithm. Only the SM2 algorithm is supported.
    // 
    // After encrypted transmission is enabled, you must pass the encrypted CertName and CertNo. For more information about encryption, see [Parameter encryption](https://www.alibabacloud.com/help/en/id-verification/financial-grade-id-verification/description-of-parameter-encryption#task-2229332).
    shared_ptr<string> encryptType_ {};
    // The Base64-encoded image.
    // 
    // > You can specify only one of the following parameters to pass the image: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, and OSS.
    shared_ptr<string> faceContrastPicture_ {};
    // The URL of the image in OSS. Only authorized OSS image URLs are supported.
    // 
    // > You can specify only one of the following parameters to pass the image: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, and OSS.
    shared_ptr<string> faceContrastPictureUrl_ {};
    // The type of the Device Assistant tag. Set the value to **DeviceRisk**.
    // 
    // >
    // > - Outputting Device Assistant tags incurs additional fees. For more information, see [Value-added services](https://www.alibabacloud.com/help/en/id-verification/financial-grade-id-verification/face-guard).
    // > - If you do not need to output Device Assistant tags, you can leave this parameter empty or do not pass it.
    shared_ptr<string> faceGuardOutput_ {};
    // Specifies whether to display the I Have Completed Authentication button on the H5 downgrade page after authentication is completed. Valid values:
    // - **Y**: Displays the button.
    // - **N** (default): Hides the button.
    shared_ptr<string> h5DegradeConfirmBtn_ {};
    // The IP address of the user.
    shared_ptr<string> ip_ {};
    // The Metainfo environment parameter. You must obtain this parameter by using the client SDK.
    shared_ptr<string> metaInfo_ {};
    // The mobile phone number of the user.
    shared_ptr<string> mobile_ {};
    // The method to obtain the passport NFC verification elements. Valid values:
    // 
    // - **1**: User input. The end user manually enters the ID document element information by using the UI provided by the Alibaba Cloud SDK.
    // 
    // - **3**: External parameter input. The ID document element information is passed from external sources.
    // 
    // > When the NFC decoder decrypts the encrypted information of the passport chip, it needs to obtain three passport elements: name, date of birth, and expiration date.
    shared_ptr<string> mode_ {};
    // The liveness detection type. Valid values:
    // > Only the following liveness detection types are supported. Custom actions or combinations are not supported.
    // 
    // Description
    // Only the following liveness detection types are supported. Custom actions or combinations are not supported.
    // 
    // - **LIVENESS** (default): Blinking.
    // 
    // - **PHOTINUS_LIVENESS**: Blinking and colorful light reflection.
    // 
    // - **MULTI_ACTION**: Blinking and head turning (the order is random).
    // 
    // - **MOVE_ACTION** (recommended): Moving closer or farther and blinking.
    // 
    // - **MOVE_PHOTINUS**: Moving closer or farther and colorful light reflection.
    // 
    // > 
    // >- **The default liveness detection type** is supported in the following SDK versions:
    // >   - Android SDK 1.2.6 and later
    // >   - iOS SDK 1.2.4 and later
    // >   - Harmony SDK 1.0.0 and later
    // >- Other types are supported in the latest SDK versions for Android, iOS, and Harmony. We recommend that you integrate the latest SDK version.
    shared_ptr<string> model_ {};
    // Specifies whether to intercept the request when multiple faces are detected on the terminal. Valid values:
    // 
    // - **Y**: Intercepts the request. The client prompts the user to scan the face again.
    // 
    // - **N** (default): Does not intercept the request. The largest face in the face scanning screen is sent to the server for security detection.
    shared_ptr<string> needMultiFaceCheck_ {};
    // The name of the authorized OSS bucket.
    // 
    // > You can specify only one of the following parameters to pass the image: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, and OSS.
    shared_ptr<string> ossBucketName_ {};
    // The name of the object in the authorized OSS bucket.
    // 
    // > You can specify only one of the following parameters to pass the image: FaceContrastPicture, FaceContrastPictureUrl, CertifyId, and OSS.
    shared_ptr<string> ossObjectName_ {};
    // The unique identifier of the merchant request.
    // 
    // The value is a 32-character alphanumeric string. The first few characters are a custom abbreviation of the merchant, the middle part can be a period of time, and the last part can be a random or incremental sequence.
    shared_ptr<string> outerOrderNo_ {};
    // The downgrade configuration when WebRTC or WebAssembly is incompatible during mobile H5 authentication. Valid values:
    // 
    // - **keep**: Downgrade is not supported. The result is directly returned.
    // 
    // - **url** (default): Downgrade is supported. The authentication URL is returned. The user opens or switches to a browser by using this URL for authentication.
    // 
    // - **video**: Downgrade is supported. The system camera is used to record a 3- to 5-second blinking video for authentication.
    // 
    // 
    // > 
    // > When the downgrade mode is set to video, the following features become invalid and product security is reduced. We recommend that you configure this mode only for security scenarios.
    // > - The liveness detection type setting does not take effect.
    // > - The VideoEvidence feature is not supported.
    shared_ptr<string> procedurePriority_ {};
    // The fixed value. The value of this parameter varies based on the product solution:
    // - APP authentication solution: Set the value to ID_PRO.
    // - Face liveness verification solution: Set the value to PV_FV.
    // - Liveness detection solution: Set the value to LR_FR.
    shared_ptr<string> productCode_ {};
    // Specifies whether to enable the rare character mode. Valid values:
    // 
    // - **Y**: Enables the mode. Before authentication, an information input box appears. The user must enter the name with rare characters and the ID card number, and agree to the agreement before the authentication process starts.
    // 
    // - **N**: Does not enable the mode. This is the default value.
    shared_ptr<string> rarelyCharacters_ {};
    // Specifies whether to read the ID document photo. Valid values:
    // 
    // - **Y**: Reads the photo.
    // 
    // - **N**: Does not read the photo.
    // 
    // > If you need to use the face photo from the ID document in subsequent authentication steps, we recommend that you set this parameter to Y.
    shared_ptr<string> readImg_ {};
    // The redirect URL for the merchant business page.
    shared_ptr<string> returnUrl_ {};
    // The ID of the authentication scenario.
    shared_ptr<int64_t> sceneId_ {};
    // The age-friendly configuration parameter. This parameter takes effect for each authentication request. You can select different parameters for each authentication request based on the business property, customer distribution, and operation attribute of your app. The following options are available. Default value: 0.
    // 
    // - **0**: Disables the age-friendly pattern for the current authentication request.
    // 
    // - **1**: Enables the age-friendly pattern for the current authentication request.
    // 
    // - **2**: Allows the user to select the pattern.
    // 
    // 
    // The end user can select the authentication pattern. The product guide page provides two authentication entries: Start Authentication and Senior Authentication Pattern. When the user selects Senior Authentication Pattern, the system enters the age-friendly pattern.
    // > 
    // > - The age-friendly parameter takes effect only when the liveness detection type **Model** is set to **LIVENESS** or **MULTI_ACTION**.
    shared_ptr<string> suitableType_ {};
    // The URL of the UI configuration file.
    // 
    // For the complete configuration, see [Web SDK UI custom configuration](https://www.alibabacloud.com/help/en/id-verification/financial-grade-id-verification/web-sdk-ui-custom-configuration-description).
    shared_ptr<string> uiCustomUrl_ {};
    // The custom user ID in the customer business. Make sure that the ID is unique.
    shared_ptr<string> userId_ {};
    // The expiration date of the ID document.
    // 
    // This parameter is required when the **CertType** parameter is set to **PASSPORT** and the **Mode** parameter is set to **3**.
    shared_ptr<string> validityDate_ {};
    // Specifies whether to enable video evidence. Valid values:
    // 
    // - **true**: Enables video evidence.
    // 
    // - **false**: Does not enable video evidence. This is the default value.
    // 
    // > Because video files are large, the system discards video files to prioritize the transmission of necessary authentication images when the network is unstable. We recommend that you set your business to weakly depend on videos.
    shared_ptr<string> videoEvidence_ {};
    // The custom willingness content. This parameter is required when personalized settings are enabled. The value is a JSON string of a string list.
    // 
    // - In the read-along scenario: The content cannot exceed 60 Chinese characters (excluding punctuation marks), and the list contains only one element.
    // 
    // - In the Q&A scenario: You can configure up to three questions. Each question cannot exceed 30 Chinese characters, and each question is an element in the list.
    shared_ptr<string> voluntaryCustomizedContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
