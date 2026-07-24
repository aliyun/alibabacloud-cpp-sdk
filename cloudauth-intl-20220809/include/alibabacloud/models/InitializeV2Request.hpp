// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALIZEV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITIALIZEV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class InitializeV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitializeV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(AppQualityCheck, appQualityCheck_);
      DARABONBA_PTR_TO_JSON(Authorize, authorize_);
      DARABONBA_PTR_TO_JSON(AutoDocPageConfig, autoDocPageConfig_);
      DARABONBA_PTR_TO_JSON(AutoRegistration, autoRegistration_);
      DARABONBA_PTR_TO_JSON(CallbackToken, callbackToken_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(ChameleonFrameEnable, chameleonFrameEnable_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(DateOfBirth, dateOfBirth_);
      DARABONBA_PTR_TO_JSON(DateOfExpiry, dateOfExpiry_);
      DARABONBA_PTR_TO_JSON(DocName, docName_);
      DARABONBA_PTR_TO_JSON(DocNo, docNo_);
      DARABONBA_PTR_TO_JSON(DocPageConfig, docPageConfig_);
      DARABONBA_PTR_TO_JSON(DocScanMode, docScanMode_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(DocVideo, docVideo_);
      DARABONBA_PTR_TO_JSON(DocumentNumber, documentNumber_);
      DARABONBA_PTR_TO_JSON(EditOcrResult, editOcrResult_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(ExperienceCode, experienceCode_);
      DARABONBA_PTR_TO_JSON(FaceAttributeCheck, faceAttributeCheck_);
      DARABONBA_PTR_TO_JSON(FaceGroupCodes, faceGroupCodes_);
      DARABONBA_PTR_TO_JSON(FacePictureBase64, facePictureBase64_);
      DARABONBA_PTR_TO_JSON(FacePictureFile, facePictureFile_);
      DARABONBA_PTR_TO_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_TO_JSON(FaceRegisterGroupCode, faceRegisterGroupCode_);
      DARABONBA_PTR_TO_JSON(FaceVerifyThreshold, faceVerifyThreshold_);
      DARABONBA_PTR_TO_JSON(IdFaceQuality, idFaceQuality_);
      DARABONBA_PTR_TO_JSON(IdSpoof, idSpoof_);
      DARABONBA_PTR_TO_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_TO_JSON(LanguageConfig, languageConfig_);
      DARABONBA_PTR_TO_JSON(MRTDInput, MRTDInput_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Ocr, ocr_);
      DARABONBA_PTR_TO_JSON(OcrValueStandard, ocrValueStandard_);
      DARABONBA_PTR_TO_JSON(Pages, pages_);
      DARABONBA_PTR_TO_JSON(ProcedurePriority, procedurePriority_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductFlow, productFlow_);
      DARABONBA_PTR_TO_JSON(ReturnFaces, returnFaces_);
      DARABONBA_PTR_TO_JSON(ReturnUrl, returnUrl_);
      DARABONBA_PTR_TO_JSON(SaveFacePicture, saveFacePicture_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_TO_JSON(ShowAlbumIcon, showAlbumIcon_);
      DARABONBA_PTR_TO_JSON(ShowGuidePage, showGuidePage_);
      DARABONBA_PTR_TO_JSON(ShowOcrResult, showOcrResult_);
      DARABONBA_PTR_TO_JSON(StyleConfig, styleConfig_);
      DARABONBA_PTR_TO_JSON(TargetFacePicture, targetFacePicture_);
      DARABONBA_PTR_TO_JSON(TargetFacePictureFile, targetFacePictureFile_);
      DARABONBA_PTR_TO_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateRanCount, templateRanCount_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(UseNFC, useNFC_);
      DARABONBA_PTR_TO_JSON(VerifyModel, verifyModel_);
    };
    friend void from_json(const Darabonba::Json& j, InitializeV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(AppQualityCheck, appQualityCheck_);
      DARABONBA_PTR_FROM_JSON(Authorize, authorize_);
      DARABONBA_PTR_FROM_JSON(AutoDocPageConfig, autoDocPageConfig_);
      DARABONBA_PTR_FROM_JSON(AutoRegistration, autoRegistration_);
      DARABONBA_PTR_FROM_JSON(CallbackToken, callbackToken_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(ChameleonFrameEnable, chameleonFrameEnable_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(DateOfBirth, dateOfBirth_);
      DARABONBA_PTR_FROM_JSON(DateOfExpiry, dateOfExpiry_);
      DARABONBA_PTR_FROM_JSON(DocName, docName_);
      DARABONBA_PTR_FROM_JSON(DocNo, docNo_);
      DARABONBA_PTR_FROM_JSON(DocPageConfig, docPageConfig_);
      DARABONBA_PTR_FROM_JSON(DocScanMode, docScanMode_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(DocVideo, docVideo_);
      DARABONBA_PTR_FROM_JSON(DocumentNumber, documentNumber_);
      DARABONBA_PTR_FROM_JSON(EditOcrResult, editOcrResult_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(ExperienceCode, experienceCode_);
      DARABONBA_PTR_FROM_JSON(FaceAttributeCheck, faceAttributeCheck_);
      DARABONBA_PTR_FROM_JSON(FaceGroupCodes, faceGroupCodes_);
      DARABONBA_PTR_FROM_JSON(FacePictureBase64, facePictureBase64_);
      DARABONBA_PTR_FROM_JSON(FacePictureFile, facePictureFile_);
      DARABONBA_PTR_FROM_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_FROM_JSON(FaceRegisterGroupCode, faceRegisterGroupCode_);
      DARABONBA_PTR_FROM_JSON(FaceVerifyThreshold, faceVerifyThreshold_);
      DARABONBA_PTR_FROM_JSON(IdFaceQuality, idFaceQuality_);
      DARABONBA_PTR_FROM_JSON(IdSpoof, idSpoof_);
      DARABONBA_PTR_FROM_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_FROM_JSON(LanguageConfig, languageConfig_);
      DARABONBA_PTR_FROM_JSON(MRTDInput, MRTDInput_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Ocr, ocr_);
      DARABONBA_PTR_FROM_JSON(OcrValueStandard, ocrValueStandard_);
      DARABONBA_PTR_FROM_JSON(Pages, pages_);
      DARABONBA_PTR_FROM_JSON(ProcedurePriority, procedurePriority_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductFlow, productFlow_);
      DARABONBA_PTR_FROM_JSON(ReturnFaces, returnFaces_);
      DARABONBA_PTR_FROM_JSON(ReturnUrl, returnUrl_);
      DARABONBA_PTR_FROM_JSON(SaveFacePicture, saveFacePicture_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_FROM_JSON(ShowAlbumIcon, showAlbumIcon_);
      DARABONBA_PTR_FROM_JSON(ShowGuidePage, showGuidePage_);
      DARABONBA_PTR_FROM_JSON(ShowOcrResult, showOcrResult_);
      DARABONBA_PTR_FROM_JSON(StyleConfig, styleConfig_);
      DARABONBA_PTR_FROM_JSON(TargetFacePicture, targetFacePicture_);
      DARABONBA_PTR_FROM_JSON(TargetFacePictureFile, targetFacePictureFile_);
      DARABONBA_PTR_FROM_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateRanCount, templateRanCount_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(UseNFC, useNFC_);
      DARABONBA_PTR_FROM_JSON(VerifyModel, verifyModel_);
    };
    InitializeV2Request() = default ;
    InitializeV2Request(const InitializeV2Request &) = default ;
    InitializeV2Request(InitializeV2Request &&) = default ;
    InitializeV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitializeV2Request() = default ;
    InitializeV2Request& operator=(const InitializeV2Request &) = default ;
    InitializeV2Request& operator=(InitializeV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appQualityCheck_ == nullptr
        && this->authorize_ == nullptr && this->autoDocPageConfig_ == nullptr && this->autoRegistration_ == nullptr && this->callbackToken_ == nullptr && this->callbackUrl_ == nullptr
        && this->chameleonFrameEnable_ == nullptr && this->crop_ == nullptr && this->dateOfBirth_ == nullptr && this->dateOfExpiry_ == nullptr && this->docName_ == nullptr
        && this->docNo_ == nullptr && this->docPageConfig_ == nullptr && this->docScanMode_ == nullptr && this->docType_ == nullptr && this->docVideo_ == nullptr
        && this->documentNumber_ == nullptr && this->editOcrResult_ == nullptr && this->email_ == nullptr && this->experienceCode_ == nullptr && this->faceAttributeCheck_ == nullptr
        && this->faceGroupCodes_ == nullptr && this->facePictureBase64_ == nullptr && this->facePictureFile_ == nullptr && this->facePictureUrl_ == nullptr && this->faceRegisterGroupCode_ == nullptr
        && this->faceVerifyThreshold_ == nullptr && this->idFaceQuality_ == nullptr && this->idSpoof_ == nullptr && this->idThreshold_ == nullptr && this->languageConfig_ == nullptr
        && this->MRTDInput_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr && this->metaInfo_ == nullptr && this->mobile_ == nullptr
        && this->model_ == nullptr && this->ocr_ == nullptr && this->ocrValueStandard_ == nullptr && this->pages_ == nullptr && this->procedurePriority_ == nullptr
        && this->productCode_ == nullptr && this->productFlow_ == nullptr && this->returnFaces_ == nullptr && this->returnUrl_ == nullptr && this->saveFacePicture_ == nullptr
        && this->sceneCode_ == nullptr && this->securityLevel_ == nullptr && this->showAlbumIcon_ == nullptr && this->showGuidePage_ == nullptr && this->showOcrResult_ == nullptr
        && this->styleConfig_ == nullptr && this->targetFacePicture_ == nullptr && this->targetFacePictureFile_ == nullptr && this->targetFacePictureUrl_ == nullptr && this->templateConfig_ == nullptr
        && this->templateRanCount_ == nullptr && this->templateType_ == nullptr && this->useNFC_ == nullptr && this->verifyModel_ == nullptr; };
    // appQualityCheck Field Functions 
    bool hasAppQualityCheck() const { return this->appQualityCheck_ != nullptr;};
    void deleteAppQualityCheck() { this->appQualityCheck_ = nullptr;};
    inline string getAppQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(appQualityCheck_, "") };
    inline InitializeV2Request& setAppQualityCheck(string appQualityCheck) { DARABONBA_PTR_SET_VALUE(appQualityCheck_, appQualityCheck) };


    // authorize Field Functions 
    bool hasAuthorize() const { return this->authorize_ != nullptr;};
    void deleteAuthorize() { this->authorize_ = nullptr;};
    inline string getAuthorize() const { DARABONBA_PTR_GET_DEFAULT(authorize_, "") };
    inline InitializeV2Request& setAuthorize(string authorize) { DARABONBA_PTR_SET_VALUE(authorize_, authorize) };


    // autoDocPageConfig Field Functions 
    bool hasAutoDocPageConfig() const { return this->autoDocPageConfig_ != nullptr;};
    void deleteAutoDocPageConfig() { this->autoDocPageConfig_ = nullptr;};
    inline string getAutoDocPageConfig() const { DARABONBA_PTR_GET_DEFAULT(autoDocPageConfig_, "") };
    inline InitializeV2Request& setAutoDocPageConfig(string autoDocPageConfig) { DARABONBA_PTR_SET_VALUE(autoDocPageConfig_, autoDocPageConfig) };


    // autoRegistration Field Functions 
    bool hasAutoRegistration() const { return this->autoRegistration_ != nullptr;};
    void deleteAutoRegistration() { this->autoRegistration_ = nullptr;};
    inline string getAutoRegistration() const { DARABONBA_PTR_GET_DEFAULT(autoRegistration_, "") };
    inline InitializeV2Request& setAutoRegistration(string autoRegistration) { DARABONBA_PTR_SET_VALUE(autoRegistration_, autoRegistration) };


    // callbackToken Field Functions 
    bool hasCallbackToken() const { return this->callbackToken_ != nullptr;};
    void deleteCallbackToken() { this->callbackToken_ = nullptr;};
    inline string getCallbackToken() const { DARABONBA_PTR_GET_DEFAULT(callbackToken_, "") };
    inline InitializeV2Request& setCallbackToken(string callbackToken) { DARABONBA_PTR_SET_VALUE(callbackToken_, callbackToken) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline InitializeV2Request& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // chameleonFrameEnable Field Functions 
    bool hasChameleonFrameEnable() const { return this->chameleonFrameEnable_ != nullptr;};
    void deleteChameleonFrameEnable() { this->chameleonFrameEnable_ = nullptr;};
    inline string getChameleonFrameEnable() const { DARABONBA_PTR_GET_DEFAULT(chameleonFrameEnable_, "") };
    inline InitializeV2Request& setChameleonFrameEnable(string chameleonFrameEnable) { DARABONBA_PTR_SET_VALUE(chameleonFrameEnable_, chameleonFrameEnable) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline InitializeV2Request& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // dateOfBirth Field Functions 
    bool hasDateOfBirth() const { return this->dateOfBirth_ != nullptr;};
    void deleteDateOfBirth() { this->dateOfBirth_ = nullptr;};
    inline string getDateOfBirth() const { DARABONBA_PTR_GET_DEFAULT(dateOfBirth_, "") };
    inline InitializeV2Request& setDateOfBirth(string dateOfBirth) { DARABONBA_PTR_SET_VALUE(dateOfBirth_, dateOfBirth) };


    // dateOfExpiry Field Functions 
    bool hasDateOfExpiry() const { return this->dateOfExpiry_ != nullptr;};
    void deleteDateOfExpiry() { this->dateOfExpiry_ = nullptr;};
    inline string getDateOfExpiry() const { DARABONBA_PTR_GET_DEFAULT(dateOfExpiry_, "") };
    inline InitializeV2Request& setDateOfExpiry(string dateOfExpiry) { DARABONBA_PTR_SET_VALUE(dateOfExpiry_, dateOfExpiry) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline InitializeV2Request& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // docNo Field Functions 
    bool hasDocNo() const { return this->docNo_ != nullptr;};
    void deleteDocNo() { this->docNo_ = nullptr;};
    inline string getDocNo() const { DARABONBA_PTR_GET_DEFAULT(docNo_, "") };
    inline InitializeV2Request& setDocNo(string docNo) { DARABONBA_PTR_SET_VALUE(docNo_, docNo) };


    // docPageConfig Field Functions 
    bool hasDocPageConfig() const { return this->docPageConfig_ != nullptr;};
    void deleteDocPageConfig() { this->docPageConfig_ = nullptr;};
    inline const vector<string> & getDocPageConfig() const { DARABONBA_PTR_GET_CONST(docPageConfig_, vector<string>) };
    inline vector<string> getDocPageConfig() { DARABONBA_PTR_GET(docPageConfig_, vector<string>) };
    inline InitializeV2Request& setDocPageConfig(const vector<string> & docPageConfig) { DARABONBA_PTR_SET_VALUE(docPageConfig_, docPageConfig) };
    inline InitializeV2Request& setDocPageConfig(vector<string> && docPageConfig) { DARABONBA_PTR_SET_RVALUE(docPageConfig_, docPageConfig) };


    // docScanMode Field Functions 
    bool hasDocScanMode() const { return this->docScanMode_ != nullptr;};
    void deleteDocScanMode() { this->docScanMode_ = nullptr;};
    inline string getDocScanMode() const { DARABONBA_PTR_GET_DEFAULT(docScanMode_, "") };
    inline InitializeV2Request& setDocScanMode(string docScanMode) { DARABONBA_PTR_SET_VALUE(docScanMode_, docScanMode) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline InitializeV2Request& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // docVideo Field Functions 
    bool hasDocVideo() const { return this->docVideo_ != nullptr;};
    void deleteDocVideo() { this->docVideo_ = nullptr;};
    inline string getDocVideo() const { DARABONBA_PTR_GET_DEFAULT(docVideo_, "") };
    inline InitializeV2Request& setDocVideo(string docVideo) { DARABONBA_PTR_SET_VALUE(docVideo_, docVideo) };


    // documentNumber Field Functions 
    bool hasDocumentNumber() const { return this->documentNumber_ != nullptr;};
    void deleteDocumentNumber() { this->documentNumber_ = nullptr;};
    inline string getDocumentNumber() const { DARABONBA_PTR_GET_DEFAULT(documentNumber_, "") };
    inline InitializeV2Request& setDocumentNumber(string documentNumber) { DARABONBA_PTR_SET_VALUE(documentNumber_, documentNumber) };


    // editOcrResult Field Functions 
    bool hasEditOcrResult() const { return this->editOcrResult_ != nullptr;};
    void deleteEditOcrResult() { this->editOcrResult_ = nullptr;};
    inline string getEditOcrResult() const { DARABONBA_PTR_GET_DEFAULT(editOcrResult_, "") };
    inline InitializeV2Request& setEditOcrResult(string editOcrResult) { DARABONBA_PTR_SET_VALUE(editOcrResult_, editOcrResult) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline InitializeV2Request& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // experienceCode Field Functions 
    bool hasExperienceCode() const { return this->experienceCode_ != nullptr;};
    void deleteExperienceCode() { this->experienceCode_ = nullptr;};
    inline string getExperienceCode() const { DARABONBA_PTR_GET_DEFAULT(experienceCode_, "") };
    inline InitializeV2Request& setExperienceCode(string experienceCode) { DARABONBA_PTR_SET_VALUE(experienceCode_, experienceCode) };


    // faceAttributeCheck Field Functions 
    bool hasFaceAttributeCheck() const { return this->faceAttributeCheck_ != nullptr;};
    void deleteFaceAttributeCheck() { this->faceAttributeCheck_ = nullptr;};
    inline string getFaceAttributeCheck() const { DARABONBA_PTR_GET_DEFAULT(faceAttributeCheck_, "") };
    inline InitializeV2Request& setFaceAttributeCheck(string faceAttributeCheck) { DARABONBA_PTR_SET_VALUE(faceAttributeCheck_, faceAttributeCheck) };


    // faceGroupCodes Field Functions 
    bool hasFaceGroupCodes() const { return this->faceGroupCodes_ != nullptr;};
    void deleteFaceGroupCodes() { this->faceGroupCodes_ = nullptr;};
    inline string getFaceGroupCodes() const { DARABONBA_PTR_GET_DEFAULT(faceGroupCodes_, "") };
    inline InitializeV2Request& setFaceGroupCodes(string faceGroupCodes) { DARABONBA_PTR_SET_VALUE(faceGroupCodes_, faceGroupCodes) };


    // facePictureBase64 Field Functions 
    bool hasFacePictureBase64() const { return this->facePictureBase64_ != nullptr;};
    void deleteFacePictureBase64() { this->facePictureBase64_ = nullptr;};
    inline string getFacePictureBase64() const { DARABONBA_PTR_GET_DEFAULT(facePictureBase64_, "") };
    inline InitializeV2Request& setFacePictureBase64(string facePictureBase64) { DARABONBA_PTR_SET_VALUE(facePictureBase64_, facePictureBase64) };


    // facePictureFile Field Functions 
    bool hasFacePictureFile() const { return this->facePictureFile_ != nullptr;};
    void deleteFacePictureFile() { this->facePictureFile_ = nullptr;};
    inline string getFacePictureFile() const { DARABONBA_PTR_GET_DEFAULT(facePictureFile_, "") };
    inline InitializeV2Request& setFacePictureFile(string facePictureFile) { DARABONBA_PTR_SET_VALUE(facePictureFile_, facePictureFile) };


    // facePictureUrl Field Functions 
    bool hasFacePictureUrl() const { return this->facePictureUrl_ != nullptr;};
    void deleteFacePictureUrl() { this->facePictureUrl_ = nullptr;};
    inline string getFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(facePictureUrl_, "") };
    inline InitializeV2Request& setFacePictureUrl(string facePictureUrl) { DARABONBA_PTR_SET_VALUE(facePictureUrl_, facePictureUrl) };


    // faceRegisterGroupCode Field Functions 
    bool hasFaceRegisterGroupCode() const { return this->faceRegisterGroupCode_ != nullptr;};
    void deleteFaceRegisterGroupCode() { this->faceRegisterGroupCode_ = nullptr;};
    inline string getFaceRegisterGroupCode() const { DARABONBA_PTR_GET_DEFAULT(faceRegisterGroupCode_, "") };
    inline InitializeV2Request& setFaceRegisterGroupCode(string faceRegisterGroupCode) { DARABONBA_PTR_SET_VALUE(faceRegisterGroupCode_, faceRegisterGroupCode) };


    // faceVerifyThreshold Field Functions 
    bool hasFaceVerifyThreshold() const { return this->faceVerifyThreshold_ != nullptr;};
    void deleteFaceVerifyThreshold() { this->faceVerifyThreshold_ = nullptr;};
    inline string getFaceVerifyThreshold() const { DARABONBA_PTR_GET_DEFAULT(faceVerifyThreshold_, "") };
    inline InitializeV2Request& setFaceVerifyThreshold(string faceVerifyThreshold) { DARABONBA_PTR_SET_VALUE(faceVerifyThreshold_, faceVerifyThreshold) };


    // idFaceQuality Field Functions 
    bool hasIdFaceQuality() const { return this->idFaceQuality_ != nullptr;};
    void deleteIdFaceQuality() { this->idFaceQuality_ = nullptr;};
    inline string getIdFaceQuality() const { DARABONBA_PTR_GET_DEFAULT(idFaceQuality_, "") };
    inline InitializeV2Request& setIdFaceQuality(string idFaceQuality) { DARABONBA_PTR_SET_VALUE(idFaceQuality_, idFaceQuality) };


    // idSpoof Field Functions 
    bool hasIdSpoof() const { return this->idSpoof_ != nullptr;};
    void deleteIdSpoof() { this->idSpoof_ = nullptr;};
    inline string getIdSpoof() const { DARABONBA_PTR_GET_DEFAULT(idSpoof_, "") };
    inline InitializeV2Request& setIdSpoof(string idSpoof) { DARABONBA_PTR_SET_VALUE(idSpoof_, idSpoof) };


    // idThreshold Field Functions 
    bool hasIdThreshold() const { return this->idThreshold_ != nullptr;};
    void deleteIdThreshold() { this->idThreshold_ = nullptr;};
    inline string getIdThreshold() const { DARABONBA_PTR_GET_DEFAULT(idThreshold_, "") };
    inline InitializeV2Request& setIdThreshold(string idThreshold) { DARABONBA_PTR_SET_VALUE(idThreshold_, idThreshold) };


    // languageConfig Field Functions 
    bool hasLanguageConfig() const { return this->languageConfig_ != nullptr;};
    void deleteLanguageConfig() { this->languageConfig_ = nullptr;};
    inline string getLanguageConfig() const { DARABONBA_PTR_GET_DEFAULT(languageConfig_, "") };
    inline InitializeV2Request& setLanguageConfig(string languageConfig) { DARABONBA_PTR_SET_VALUE(languageConfig_, languageConfig) };


    // MRTDInput Field Functions 
    bool hasMRTDInput() const { return this->MRTDInput_ != nullptr;};
    void deleteMRTDInput() { this->MRTDInput_ = nullptr;};
    inline string getMRTDInput() const { DARABONBA_PTR_GET_DEFAULT(MRTDInput_, "") };
    inline InitializeV2Request& setMRTDInput(string MRTDInput) { DARABONBA_PTR_SET_VALUE(MRTDInput_, MRTDInput) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline InitializeV2Request& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline InitializeV2Request& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // metaInfo Field Functions 
    bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
    void deleteMetaInfo() { this->metaInfo_ = nullptr;};
    inline string getMetaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
    inline InitializeV2Request& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline InitializeV2Request& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline InitializeV2Request& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // ocr Field Functions 
    bool hasOcr() const { return this->ocr_ != nullptr;};
    void deleteOcr() { this->ocr_ = nullptr;};
    inline string getOcr() const { DARABONBA_PTR_GET_DEFAULT(ocr_, "") };
    inline InitializeV2Request& setOcr(string ocr) { DARABONBA_PTR_SET_VALUE(ocr_, ocr) };


    // ocrValueStandard Field Functions 
    bool hasOcrValueStandard() const { return this->ocrValueStandard_ != nullptr;};
    void deleteOcrValueStandard() { this->ocrValueStandard_ = nullptr;};
    inline string getOcrValueStandard() const { DARABONBA_PTR_GET_DEFAULT(ocrValueStandard_, "") };
    inline InitializeV2Request& setOcrValueStandard(string ocrValueStandard) { DARABONBA_PTR_SET_VALUE(ocrValueStandard_, ocrValueStandard) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline string getPages() const { DARABONBA_PTR_GET_DEFAULT(pages_, "") };
    inline InitializeV2Request& setPages(string pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


    // procedurePriority Field Functions 
    bool hasProcedurePriority() const { return this->procedurePriority_ != nullptr;};
    void deleteProcedurePriority() { this->procedurePriority_ = nullptr;};
    inline string getProcedurePriority() const { DARABONBA_PTR_GET_DEFAULT(procedurePriority_, "") };
    inline InitializeV2Request& setProcedurePriority(string procedurePriority) { DARABONBA_PTR_SET_VALUE(procedurePriority_, procedurePriority) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline InitializeV2Request& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productFlow Field Functions 
    bool hasProductFlow() const { return this->productFlow_ != nullptr;};
    void deleteProductFlow() { this->productFlow_ = nullptr;};
    inline string getProductFlow() const { DARABONBA_PTR_GET_DEFAULT(productFlow_, "") };
    inline InitializeV2Request& setProductFlow(string productFlow) { DARABONBA_PTR_SET_VALUE(productFlow_, productFlow) };


    // returnFaces Field Functions 
    bool hasReturnFaces() const { return this->returnFaces_ != nullptr;};
    void deleteReturnFaces() { this->returnFaces_ = nullptr;};
    inline string getReturnFaces() const { DARABONBA_PTR_GET_DEFAULT(returnFaces_, "") };
    inline InitializeV2Request& setReturnFaces(string returnFaces) { DARABONBA_PTR_SET_VALUE(returnFaces_, returnFaces) };


    // returnUrl Field Functions 
    bool hasReturnUrl() const { return this->returnUrl_ != nullptr;};
    void deleteReturnUrl() { this->returnUrl_ = nullptr;};
    inline string getReturnUrl() const { DARABONBA_PTR_GET_DEFAULT(returnUrl_, "") };
    inline InitializeV2Request& setReturnUrl(string returnUrl) { DARABONBA_PTR_SET_VALUE(returnUrl_, returnUrl) };


    // saveFacePicture Field Functions 
    bool hasSaveFacePicture() const { return this->saveFacePicture_ != nullptr;};
    void deleteSaveFacePicture() { this->saveFacePicture_ = nullptr;};
    inline string getSaveFacePicture() const { DARABONBA_PTR_GET_DEFAULT(saveFacePicture_, "") };
    inline InitializeV2Request& setSaveFacePicture(string saveFacePicture) { DARABONBA_PTR_SET_VALUE(saveFacePicture_, saveFacePicture) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline InitializeV2Request& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline string getSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
    inline InitializeV2Request& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


    // showAlbumIcon Field Functions 
    bool hasShowAlbumIcon() const { return this->showAlbumIcon_ != nullptr;};
    void deleteShowAlbumIcon() { this->showAlbumIcon_ = nullptr;};
    inline string getShowAlbumIcon() const { DARABONBA_PTR_GET_DEFAULT(showAlbumIcon_, "") };
    inline InitializeV2Request& setShowAlbumIcon(string showAlbumIcon) { DARABONBA_PTR_SET_VALUE(showAlbumIcon_, showAlbumIcon) };


    // showGuidePage Field Functions 
    bool hasShowGuidePage() const { return this->showGuidePage_ != nullptr;};
    void deleteShowGuidePage() { this->showGuidePage_ = nullptr;};
    inline string getShowGuidePage() const { DARABONBA_PTR_GET_DEFAULT(showGuidePage_, "") };
    inline InitializeV2Request& setShowGuidePage(string showGuidePage) { DARABONBA_PTR_SET_VALUE(showGuidePage_, showGuidePage) };


    // showOcrResult Field Functions 
    bool hasShowOcrResult() const { return this->showOcrResult_ != nullptr;};
    void deleteShowOcrResult() { this->showOcrResult_ = nullptr;};
    inline string getShowOcrResult() const { DARABONBA_PTR_GET_DEFAULT(showOcrResult_, "") };
    inline InitializeV2Request& setShowOcrResult(string showOcrResult) { DARABONBA_PTR_SET_VALUE(showOcrResult_, showOcrResult) };


    // styleConfig Field Functions 
    bool hasStyleConfig() const { return this->styleConfig_ != nullptr;};
    void deleteStyleConfig() { this->styleConfig_ = nullptr;};
    inline string getStyleConfig() const { DARABONBA_PTR_GET_DEFAULT(styleConfig_, "") };
    inline InitializeV2Request& setStyleConfig(string styleConfig) { DARABONBA_PTR_SET_VALUE(styleConfig_, styleConfig) };


    // targetFacePicture Field Functions 
    bool hasTargetFacePicture() const { return this->targetFacePicture_ != nullptr;};
    void deleteTargetFacePicture() { this->targetFacePicture_ = nullptr;};
    inline string getTargetFacePicture() const { DARABONBA_PTR_GET_DEFAULT(targetFacePicture_, "") };
    inline InitializeV2Request& setTargetFacePicture(string targetFacePicture) { DARABONBA_PTR_SET_VALUE(targetFacePicture_, targetFacePicture) };


    // targetFacePictureFile Field Functions 
    bool hasTargetFacePictureFile() const { return this->targetFacePictureFile_ != nullptr;};
    void deleteTargetFacePictureFile() { this->targetFacePictureFile_ = nullptr;};
    inline string getTargetFacePictureFile() const { DARABONBA_PTR_GET_DEFAULT(targetFacePictureFile_, "") };
    inline InitializeV2Request& setTargetFacePictureFile(string targetFacePictureFile) { DARABONBA_PTR_SET_VALUE(targetFacePictureFile_, targetFacePictureFile) };


    // targetFacePictureUrl Field Functions 
    bool hasTargetFacePictureUrl() const { return this->targetFacePictureUrl_ != nullptr;};
    void deleteTargetFacePictureUrl() { this->targetFacePictureUrl_ = nullptr;};
    inline string getTargetFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(targetFacePictureUrl_, "") };
    inline InitializeV2Request& setTargetFacePictureUrl(string targetFacePictureUrl) { DARABONBA_PTR_SET_VALUE(targetFacePictureUrl_, targetFacePictureUrl) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline InitializeV2Request& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateRanCount Field Functions 
    bool hasTemplateRanCount() const { return this->templateRanCount_ != nullptr;};
    void deleteTemplateRanCount() { this->templateRanCount_ = nullptr;};
    inline string getTemplateRanCount() const { DARABONBA_PTR_GET_DEFAULT(templateRanCount_, "") };
    inline InitializeV2Request& setTemplateRanCount(string templateRanCount) { DARABONBA_PTR_SET_VALUE(templateRanCount_, templateRanCount) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline InitializeV2Request& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // useNFC Field Functions 
    bool hasUseNFC() const { return this->useNFC_ != nullptr;};
    void deleteUseNFC() { this->useNFC_ = nullptr;};
    inline string getUseNFC() const { DARABONBA_PTR_GET_DEFAULT(useNFC_, "") };
    inline InitializeV2Request& setUseNFC(string useNFC) { DARABONBA_PTR_SET_VALUE(useNFC_, useNFC) };


    // verifyModel Field Functions 
    bool hasVerifyModel() const { return this->verifyModel_ != nullptr;};
    void deleteVerifyModel() { this->verifyModel_ = nullptr;};
    inline string getVerifyModel() const { DARABONBA_PTR_GET_DEFAULT(verifyModel_, "") };
    inline InitializeV2Request& setVerifyModel(string verifyModel) { DARABONBA_PTR_SET_VALUE(verifyModel_, verifyModel) };


  protected:
    // <warning>This feature is **not supported by Web SDK**. To use this feature, use the App SDK.</warning>
    // 
    // Specifies whether to enable strict face quality detection:
    // - Y: enable (default)
    // - N: do not enable
    shared_ptr<string> appQualityCheck_ {};
    // Specifies whether to enable authoritative identity verification. Currently, this applies only to second-generation ID cards in the Chinese mainland. This is an input parameter for the IDV product.
    shared_ptr<string> authorize_ {};
    shared_ptr<string> autoDocPageConfig_ {};
    // Specifies whether to enable auto-registration.
    shared_ptr<string> autoRegistration_ {};
    // The security token used for anti-replay and anti-tampering verification. If this parameter is passed in, the CallbackToken field is displayed in the callback URL.
    shared_ptr<string> callbackToken_ {};
    // The callback URL for authentication results. The default callback request method is GET, and the callback URL must start with https. After authentication is complete, the platform calls back this URL and automatically appends the transactionId, passed, and subcode fields.
    shared_ptr<string> callbackUrl_ {};
    // Specifies whether to enable the adaptive color-changing window frame.
    // - **Y**: enable
    // - **N**: do not enable
    shared_ptr<string> chameleonFrameEnable_ {};
    // Specifies whether to enable cropping. This is an input parameter for the IDV product.
    shared_ptr<string> crop_ {};
    // The date of birth on the document.
    // 
    // Required when **MRTDInput = 2**.
    shared_ptr<string> dateOfBirth_ {};
    // The expiry date on the document.
    // 
    // Required when **MRTDInput** = 2.
    shared_ptr<string> dateOfExpiry_ {};
    // The real name of the user.
    shared_ptr<string> docName_ {};
    // The document number of the user.
    shared_ptr<string> docNo_ {};
    // The custom configuration for collecting additional pages.
    shared_ptr<vector<string>> docPageConfig_ {};
    // The document capture photo mode.
    // 
    // - manual: manual photo capture.
    // - auto: automatic photo capture (default).
    shared_ptr<string> docScanMode_ {};
    // The document type.
    // >For eKYC_PRO and ID_OCR_MAX solutions, see the official documentation: https://www.alibabacloud.com/help/zh/ekyc/latest/certificate-code-table?spm=a2c63.p38356.help-menu-445633.d_2_8_2_0.279147abwKAWbr
    // 
    // >For ID_OCR, eKYC, and eKYC_MIN solutions, see the official documentation for the document type list: https://www.alibabacloud.com/help/zh/ekyc/latest/gnhekqy05ni51m4c?spm=a2c63.p38356.help-menu-445633.d_2_3_1_0_0_0.6243244777KoZ7
    shared_ptr<string> docType_ {};
    // Specifies whether to record an evidence video.
    // 
    // - N: not required (default).
    // 
    // - Y: a face verification video (1–2 seconds) is captured during authentication and returned through the query API.
    // 
    // > Because video files are large, the system discards video files when the network is unstable to prioritize the transmission of essential authentication images.
    shared_ptr<string> docVideo_ {};
    // The document number.
    // 
    // Required when **MRTDInput = 2**.
    shared_ptr<string> documentNumber_ {};
    // Specifies whether the recognition result page is editable during the document OCR recognition step:
    // 
    // - **0**: not editable
    // 
    // - **1** (default): editable
    shared_ptr<string> editOcrResult_ {};
    // The Indonesian email address. This field takes effect only when Authorize=T.
    // 
    // >Note:
    // This field is required only when the Indonesian data source is enabled.
    shared_ptr<string> email_ {};
    // The experience code.
    shared_ptr<string> experienceCode_ {};
    shared_ptr<string> faceAttributeCheck_ {};
    // The face libraries for comparison.
    shared_ptr<string> faceGroupCodes_ {};
    // The Base64-encoded face photo. If you use FacePictureBase64 to pass in the face photo, check the photo size and do not pass in an excessively large photo.
    shared_ptr<string> facePictureBase64_ {};
    // The file stream of the face photo.
    shared_ptr<string> facePictureFile_ {};
    // The URL of the face photo. The URL must be a publicly accessible HTTP or HTTPS link.
    shared_ptr<string> facePictureUrl_ {};
    // The face registration library.
    shared_ptr<string> faceRegisterGroupCode_ {};
    // The face verification threshold.
    shared_ptr<string> faceVerifyThreshold_ {};
    // The face image quality. This is an input parameter for the IDV product.
    shared_ptr<string> idFaceQuality_ {};
    // Specifies whether to enable document anti-forgery detection. This is an input parameter for the IDV product.
    shared_ptr<string> idSpoof_ {};
    // The custom OCR quality detection threshold mode:
    // 
    // - 0: system default
    // - 1: strict mode
    // - 2: loose mode
    // - 3 (default): disable quality detection
    shared_ptr<string> idThreshold_ {};
    // The language configuration. This is an input parameter for the IDV product.
    shared_ptr<string> languageConfig_ {};
    // The input source for MRTD verification parameters. This parameter is required for decrypting information when reading document chip data via NFC.
    // 
    // - **0**: user input
    // 
    // - **1**: OCR reading
    // 
    // - **2**: API input
    shared_ptr<string> MRTDInput_ {};
    // The merchant-defined unique business ID used for subsequent troubleshooting. The value can contain letters and digits with a maximum length of 32 characters. Ensure that the value is unique.
    shared_ptr<string> merchantBizId_ {};
    // A custom user ID or other identifier that can identify a specific user, such as a phone number or email address. We strongly recommend that you desensitize this field value in advance, for example, by hashing the value.
    shared_ptr<string> merchantUserId_ {};
    // The Metainfo environment parameter. Obtain this value by using the client SDK.
    shared_ptr<string> metaInfo_ {};
    // The Indonesian phone number. The format must start with +62 followed by 9 to 11 digits. This field takes effect only when Authorize=T.
    // 
    // > 
    // > - This field is required only when the Indonesian data source is enabled.
    shared_ptr<string> mobile_ {};
    // The type of liveness detection to perform:
    // 
    // - **LIVENESS** (default): blink action liveness detection.
    // 
    // - **PHOTINUS_LIVENESS**: blink action liveness + colorful liveness dual detection.
    // 
    // > 
    // > - For supported SDK versions, see [SDK release notes](https://www.alibabacloud.com/help/zh/ekyc/latest/sdk-publishing-record?spm=a2c63.p38356.0.i99).
    // > - Colorful liveness dual detection is not supported on PC.
    shared_ptr<string> model_ {};
    // Specifies whether to enable OCR. This is an input parameter for the IDV product.
    shared_ptr<string> ocr_ {};
    // Specifies whether to return additional OCR recognition standardized format fields:
    // 
    // 0: no (default)
    // 
    // 1: yes
    shared_ptr<string> ocrValueStandard_ {};
    // The collection page configuration. Use commas to connect multiple pages. Valid values:
    // - **01**: document portrait page
    // 
    // - **01,02**: document portrait page and back page
    // 
    // > When this value is set to 01,02, only Chinese ID cards and Vietnamese ID cards are supported.
    shared_ptr<string> pages_ {};
    // Specifies whether to allow a degraded processing method when compatibility issues occur during mobile H5 authentication.
    // 
    // - **url (default)**: degradation is supported. The page displays the authentication URL, and the user can copy the URL or switch browsers to continue authentication.
    // 
    // - **keep**: degradation is not supported. The error reason is returned directly, and the authentication flow ends.
    // 
    // 
    // > 
    // > - This switch is not supported on PC.
    // > - If the business scenario involves completing authentication within an in-app web page, set this parameter to keep to disallow URL degradation.
    shared_ptr<string> procedurePriority_ {};
    // The product solution to use.
    // 
    // >Note: For more information, see the official documentation: https://www.alibabacloud.com/help/zh/ekyc/latest/product-introduction?spm=a2c63.p38356.0.i1
    shared_ptr<string> productCode_ {};
    // The order of document and face verification:
    // 
    // - DOC_FACE (default)
    // - FACE_DOC
    // 
    // Note: This parameter is required only when ProductCode is KYC_GLOBAL.
    shared_ptr<string> productFlow_ {};
    // The number of duplicate faces returned.
    shared_ptr<string> returnFaces_ {};
    // The client-side callback URL.
    shared_ptr<string> returnUrl_ {};
    // Specifies whether to save the face picture.
    shared_ptr<string> saveFacePicture_ {};
    // The scene code. This is an input parameter for the IDV product.
    shared_ptr<string> sceneCode_ {};
    // The pattern that represents different security levels of the authentication flow. Valid values:
    // 
    // 01: normal pattern (default).
    // 02: safe mode, a relatively strict pattern that is active for high-risk scenarios. This is an input parameter for the IDV product.
    shared_ptr<string> securityLevel_ {};
    // Specifies whether to display the album upload entry during the document OCR recognition step:
    // 
    // - **1**: display (default)
    // 
    // - **0**: do not display
    shared_ptr<string> showAlbumIcon_ {};
    // Specifies whether to display the guide page:
    // 
    // - **1**: display (default)
    // 
    // - **0**: do not display
    shared_ptr<string> showGuidePage_ {};
    // Specifies whether to display the recognition result page during the document OCR recognition step:
    // 
    // - **1**: display (default)
    // 
    // - **0**: do not display
    shared_ptr<string> showOcrResult_ {};
    // The custom UI configuration. Convert your custom UI configuration to a JSON string based on the configuration template and pass it in through this parameter. For more information, see [IDV UI style customization](https://www.alibabacloud.com/help/zh/ekyc/latest/idv-kyc-custom-skin?spm=a2c63.p38356.0.i60).
    shared_ptr<string> styleConfig_ {};
    // The Base64-encoded portrait photo.
    shared_ptr<string> targetFacePicture_ {};
    // The file stream of the target face image.
    shared_ptr<string> targetFacePictureFile_ {};
    // The URL of the portrait image. The URL must be a publicly accessible HTTP or HTTPS link.
    shared_ptr<string> targetFacePictureUrl_ {};
    // The custom action pool configuration for liveness detection.
    // Required when Model is TEMPLATE.
    // Configuration rule: separate multiple action codes with commas. Best practice: include at least one frontal face action (such as blink), and do not exceed 3 actions in total.
    // Action code table:
    // 
    // - Blink: 01
    // - Open Mouth: 02
    // - Shake Head Left: 03
    // - Shake Head Right: 04
    // - Move Farther: 05
    // - Move Closer: 06
    // - Photinus: 07
    shared_ptr<string> templateConfig_ {};
    // The number of actions to randomly select from TemplateConfig.
    // Takes effect only when TemplateType is Ran.
    // 
    // - Validation rules:
    // - The value must be greater than 1. The value must be less than or equal to the total number of actions configured in TemplateConfig. If not specified, the default value equals the total number of actions in TemplateConfig.
    shared_ptr<string> templateRanCount_ {};
    // The execution order of liveness detection actions in TemplateConfig.
    // Required when Model is TEMPLATE.
    // 
    // - Seq: execute in the order configured in TemplateConfig from left to right.
    // - Ran: execute in random order. When this option is selected, TemplateConfig must contain more than one action.
    shared_ptr<string> templateType_ {};
    // Specifies whether to enable NFC verification when **DocType** = 01000000 (global passport).
    // - **Y** (enable)
    // - **N** (do not enable)
    shared_ptr<string> useNFC_ {};
    // The verification type.
    shared_ptr<string> verifyModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
