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
    virtual bool empty() const override { this->appQualityCheck_ != nullptr
        && this->authId_ != nullptr && this->birthday_ != nullptr && this->callbackToken_ != nullptr && this->callbackUrl_ != nullptr && this->cameraSelection_ != nullptr
        && this->certName_ != nullptr && this->certNo_ != nullptr && this->certType_ != nullptr && this->certifyId_ != nullptr && this->certifyUrlStyle_ != nullptr
        && this->certifyUrlType_ != nullptr && this->crop_ != nullptr && this->encryptType_ != nullptr && this->faceContrastPicture_ != nullptr && this->faceContrastPictureUrl_ != nullptr
        && this->faceGuardOutput_ != nullptr && this->ip_ != nullptr && this->metaInfo_ != nullptr && this->mobile_ != nullptr && this->mode_ != nullptr
        && this->model_ != nullptr && this->needMultiFaceCheck_ != nullptr && this->ossBucketName_ != nullptr && this->ossObjectName_ != nullptr && this->outerOrderNo_ != nullptr
        && this->procedurePriority_ != nullptr && this->productCode_ != nullptr && this->rarelyCharacters_ != nullptr && this->readImg_ != nullptr && this->returnUrl_ != nullptr
        && this->sceneId_ != nullptr && this->suitableType_ != nullptr && this->uiCustomUrl_ != nullptr && this->userId_ != nullptr && this->validityDate_ != nullptr
        && this->videoEvidence_ != nullptr && this->voluntaryCustomizedContent_ != nullptr; };
    // appQualityCheck Field Functions 
    bool hasAppQualityCheck() const { return this->appQualityCheck_ != nullptr;};
    void deleteAppQualityCheck() { this->appQualityCheck_ = nullptr;};
    inline string appQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(appQualityCheck_, "") };
    inline InitFaceVerifyRequest& setAppQualityCheck(string appQualityCheck) { DARABONBA_PTR_SET_VALUE(appQualityCheck_, appQualityCheck) };


    // authId Field Functions 
    bool hasAuthId() const { return this->authId_ != nullptr;};
    void deleteAuthId() { this->authId_ = nullptr;};
    inline string authId() const { DARABONBA_PTR_GET_DEFAULT(authId_, "") };
    inline InitFaceVerifyRequest& setAuthId(string authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string birthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline InitFaceVerifyRequest& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // callbackToken Field Functions 
    bool hasCallbackToken() const { return this->callbackToken_ != nullptr;};
    void deleteCallbackToken() { this->callbackToken_ = nullptr;};
    inline string callbackToken() const { DARABONBA_PTR_GET_DEFAULT(callbackToken_, "") };
    inline InitFaceVerifyRequest& setCallbackToken(string callbackToken) { DARABONBA_PTR_SET_VALUE(callbackToken_, callbackToken) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline InitFaceVerifyRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // cameraSelection Field Functions 
    bool hasCameraSelection() const { return this->cameraSelection_ != nullptr;};
    void deleteCameraSelection() { this->cameraSelection_ = nullptr;};
    inline string cameraSelection() const { DARABONBA_PTR_GET_DEFAULT(cameraSelection_, "") };
    inline InitFaceVerifyRequest& setCameraSelection(string cameraSelection) { DARABONBA_PTR_SET_VALUE(cameraSelection_, cameraSelection) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline InitFaceVerifyRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline InitFaceVerifyRequest& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline InitFaceVerifyRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline InitFaceVerifyRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // certifyUrlStyle Field Functions 
    bool hasCertifyUrlStyle() const { return this->certifyUrlStyle_ != nullptr;};
    void deleteCertifyUrlStyle() { this->certifyUrlStyle_ = nullptr;};
    inline string certifyUrlStyle() const { DARABONBA_PTR_GET_DEFAULT(certifyUrlStyle_, "") };
    inline InitFaceVerifyRequest& setCertifyUrlStyle(string certifyUrlStyle) { DARABONBA_PTR_SET_VALUE(certifyUrlStyle_, certifyUrlStyle) };


    // certifyUrlType Field Functions 
    bool hasCertifyUrlType() const { return this->certifyUrlType_ != nullptr;};
    void deleteCertifyUrlType() { this->certifyUrlType_ = nullptr;};
    inline string certifyUrlType() const { DARABONBA_PTR_GET_DEFAULT(certifyUrlType_, "") };
    inline InitFaceVerifyRequest& setCertifyUrlType(string certifyUrlType) { DARABONBA_PTR_SET_VALUE(certifyUrlType_, certifyUrlType) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string crop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline InitFaceVerifyRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline InitFaceVerifyRequest& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // faceContrastPicture Field Functions 
    bool hasFaceContrastPicture() const { return this->faceContrastPicture_ != nullptr;};
    void deleteFaceContrastPicture() { this->faceContrastPicture_ = nullptr;};
    inline string faceContrastPicture() const { DARABONBA_PTR_GET_DEFAULT(faceContrastPicture_, "") };
    inline InitFaceVerifyRequest& setFaceContrastPicture(string faceContrastPicture) { DARABONBA_PTR_SET_VALUE(faceContrastPicture_, faceContrastPicture) };


    // faceContrastPictureUrl Field Functions 
    bool hasFaceContrastPictureUrl() const { return this->faceContrastPictureUrl_ != nullptr;};
    void deleteFaceContrastPictureUrl() { this->faceContrastPictureUrl_ = nullptr;};
    inline string faceContrastPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(faceContrastPictureUrl_, "") };
    inline InitFaceVerifyRequest& setFaceContrastPictureUrl(string faceContrastPictureUrl) { DARABONBA_PTR_SET_VALUE(faceContrastPictureUrl_, faceContrastPictureUrl) };


    // faceGuardOutput Field Functions 
    bool hasFaceGuardOutput() const { return this->faceGuardOutput_ != nullptr;};
    void deleteFaceGuardOutput() { this->faceGuardOutput_ = nullptr;};
    inline string faceGuardOutput() const { DARABONBA_PTR_GET_DEFAULT(faceGuardOutput_, "") };
    inline InitFaceVerifyRequest& setFaceGuardOutput(string faceGuardOutput) { DARABONBA_PTR_SET_VALUE(faceGuardOutput_, faceGuardOutput) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline InitFaceVerifyRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // metaInfo Field Functions 
    bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
    void deleteMetaInfo() { this->metaInfo_ = nullptr;};
    inline string metaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
    inline InitFaceVerifyRequest& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline InitFaceVerifyRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline InitFaceVerifyRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline InitFaceVerifyRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // needMultiFaceCheck Field Functions 
    bool hasNeedMultiFaceCheck() const { return this->needMultiFaceCheck_ != nullptr;};
    void deleteNeedMultiFaceCheck() { this->needMultiFaceCheck_ = nullptr;};
    inline string needMultiFaceCheck() const { DARABONBA_PTR_GET_DEFAULT(needMultiFaceCheck_, "") };
    inline InitFaceVerifyRequest& setNeedMultiFaceCheck(string needMultiFaceCheck) { DARABONBA_PTR_SET_VALUE(needMultiFaceCheck_, needMultiFaceCheck) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline InitFaceVerifyRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossObjectName Field Functions 
    bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
    void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
    inline string ossObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
    inline InitFaceVerifyRequest& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


    // outerOrderNo Field Functions 
    bool hasOuterOrderNo() const { return this->outerOrderNo_ != nullptr;};
    void deleteOuterOrderNo() { this->outerOrderNo_ = nullptr;};
    inline string outerOrderNo() const { DARABONBA_PTR_GET_DEFAULT(outerOrderNo_, "") };
    inline InitFaceVerifyRequest& setOuterOrderNo(string outerOrderNo) { DARABONBA_PTR_SET_VALUE(outerOrderNo_, outerOrderNo) };


    // procedurePriority Field Functions 
    bool hasProcedurePriority() const { return this->procedurePriority_ != nullptr;};
    void deleteProcedurePriority() { this->procedurePriority_ = nullptr;};
    inline string procedurePriority() const { DARABONBA_PTR_GET_DEFAULT(procedurePriority_, "") };
    inline InitFaceVerifyRequest& setProcedurePriority(string procedurePriority) { DARABONBA_PTR_SET_VALUE(procedurePriority_, procedurePriority) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline InitFaceVerifyRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // rarelyCharacters Field Functions 
    bool hasRarelyCharacters() const { return this->rarelyCharacters_ != nullptr;};
    void deleteRarelyCharacters() { this->rarelyCharacters_ = nullptr;};
    inline string rarelyCharacters() const { DARABONBA_PTR_GET_DEFAULT(rarelyCharacters_, "") };
    inline InitFaceVerifyRequest& setRarelyCharacters(string rarelyCharacters) { DARABONBA_PTR_SET_VALUE(rarelyCharacters_, rarelyCharacters) };


    // readImg Field Functions 
    bool hasReadImg() const { return this->readImg_ != nullptr;};
    void deleteReadImg() { this->readImg_ = nullptr;};
    inline string readImg() const { DARABONBA_PTR_GET_DEFAULT(readImg_, "") };
    inline InitFaceVerifyRequest& setReadImg(string readImg) { DARABONBA_PTR_SET_VALUE(readImg_, readImg) };


    // returnUrl Field Functions 
    bool hasReturnUrl() const { return this->returnUrl_ != nullptr;};
    void deleteReturnUrl() { this->returnUrl_ = nullptr;};
    inline string returnUrl() const { DARABONBA_PTR_GET_DEFAULT(returnUrl_, "") };
    inline InitFaceVerifyRequest& setReturnUrl(string returnUrl) { DARABONBA_PTR_SET_VALUE(returnUrl_, returnUrl) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline InitFaceVerifyRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // suitableType Field Functions 
    bool hasSuitableType() const { return this->suitableType_ != nullptr;};
    void deleteSuitableType() { this->suitableType_ = nullptr;};
    inline string suitableType() const { DARABONBA_PTR_GET_DEFAULT(suitableType_, "") };
    inline InitFaceVerifyRequest& setSuitableType(string suitableType) { DARABONBA_PTR_SET_VALUE(suitableType_, suitableType) };


    // uiCustomUrl Field Functions 
    bool hasUiCustomUrl() const { return this->uiCustomUrl_ != nullptr;};
    void deleteUiCustomUrl() { this->uiCustomUrl_ = nullptr;};
    inline string uiCustomUrl() const { DARABONBA_PTR_GET_DEFAULT(uiCustomUrl_, "") };
    inline InitFaceVerifyRequest& setUiCustomUrl(string uiCustomUrl) { DARABONBA_PTR_SET_VALUE(uiCustomUrl_, uiCustomUrl) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline InitFaceVerifyRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // validityDate Field Functions 
    bool hasValidityDate() const { return this->validityDate_ != nullptr;};
    void deleteValidityDate() { this->validityDate_ = nullptr;};
    inline string validityDate() const { DARABONBA_PTR_GET_DEFAULT(validityDate_, "") };
    inline InitFaceVerifyRequest& setValidityDate(string validityDate) { DARABONBA_PTR_SET_VALUE(validityDate_, validityDate) };


    // videoEvidence Field Functions 
    bool hasVideoEvidence() const { return this->videoEvidence_ != nullptr;};
    void deleteVideoEvidence() { this->videoEvidence_ = nullptr;};
    inline string videoEvidence() const { DARABONBA_PTR_GET_DEFAULT(videoEvidence_, "") };
    inline InitFaceVerifyRequest& setVideoEvidence(string videoEvidence) { DARABONBA_PTR_SET_VALUE(videoEvidence_, videoEvidence) };


    // voluntaryCustomizedContent Field Functions 
    bool hasVoluntaryCustomizedContent() const { return this->voluntaryCustomizedContent_ != nullptr;};
    void deleteVoluntaryCustomizedContent() { this->voluntaryCustomizedContent_ = nullptr;};
    inline string voluntaryCustomizedContent() const { DARABONBA_PTR_GET_DEFAULT(voluntaryCustomizedContent_, "") };
    inline InitFaceVerifyRequest& setVoluntaryCustomizedContent(string voluntaryCustomizedContent) { DARABONBA_PTR_SET_VALUE(voluntaryCustomizedContent_, voluntaryCustomizedContent) };


  protected:
    std::shared_ptr<string> appQualityCheck_ = nullptr;
    std::shared_ptr<string> authId_ = nullptr;
    std::shared_ptr<string> birthday_ = nullptr;
    std::shared_ptr<string> callbackToken_ = nullptr;
    std::shared_ptr<string> callbackUrl_ = nullptr;
    std::shared_ptr<string> cameraSelection_ = nullptr;
    std::shared_ptr<string> certName_ = nullptr;
    std::shared_ptr<string> certNo_ = nullptr;
    std::shared_ptr<string> certType_ = nullptr;
    std::shared_ptr<string> certifyId_ = nullptr;
    std::shared_ptr<string> certifyUrlStyle_ = nullptr;
    std::shared_ptr<string> certifyUrlType_ = nullptr;
    std::shared_ptr<string> crop_ = nullptr;
    std::shared_ptr<string> encryptType_ = nullptr;
    std::shared_ptr<string> faceContrastPicture_ = nullptr;
    std::shared_ptr<string> faceContrastPictureUrl_ = nullptr;
    std::shared_ptr<string> faceGuardOutput_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> metaInfo_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<string> needMultiFaceCheck_ = nullptr;
    std::shared_ptr<string> ossBucketName_ = nullptr;
    std::shared_ptr<string> ossObjectName_ = nullptr;
    std::shared_ptr<string> outerOrderNo_ = nullptr;
    std::shared_ptr<string> procedurePriority_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> rarelyCharacters_ = nullptr;
    std::shared_ptr<string> readImg_ = nullptr;
    std::shared_ptr<string> returnUrl_ = nullptr;
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    std::shared_ptr<string> suitableType_ = nullptr;
    std::shared_ptr<string> uiCustomUrl_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> validityDate_ = nullptr;
    std::shared_ptr<string> videoEvidence_ = nullptr;
    std::shared_ptr<string> voluntaryCustomizedContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
