// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALIZEV2ADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITIALIZEV2ADVANCEREQUEST_HPP_
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
  class InitializeV2AdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitializeV2AdvanceRequest& obj) { 
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
      // facePictureFileObject_ is stream
      DARABONBA_PTR_TO_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_TO_JSON(FaceRegisterGroupCode, faceRegisterGroupCode_);
      DARABONBA_PTR_TO_JSON(FaceVerifyThreshold, faceVerifyThreshold_);
      DARABONBA_PTR_TO_JSON(IdFaceQuality, idFaceQuality_);
      DARABONBA_PTR_TO_JSON(IdSpoof, idSpoof_);
      DARABONBA_PTR_TO_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_TO_JSON(IsForceFaceCentered, isForceFaceCentered_);
      DARABONBA_PTR_TO_JSON(LanguageConfig, languageConfig_);
      DARABONBA_PTR_TO_JSON(MRTDInput, MRTDInput_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(NeedMultiFaceCheck, needMultiFaceCheck_);
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
      // targetFacePictureFileObject_ is stream
      DARABONBA_PTR_TO_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateRanCount, templateRanCount_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(UpdateFaceIfUserExists, updateFaceIfUserExists_);
      DARABONBA_PTR_TO_JSON(UseNFC, useNFC_);
      DARABONBA_PTR_TO_JSON(VerifyModel, verifyModel_);
    };
    friend void from_json(const Darabonba::Json& j, InitializeV2AdvanceRequest& obj) { 
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
      // facePictureFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_FROM_JSON(FaceRegisterGroupCode, faceRegisterGroupCode_);
      DARABONBA_PTR_FROM_JSON(FaceVerifyThreshold, faceVerifyThreshold_);
      DARABONBA_PTR_FROM_JSON(IdFaceQuality, idFaceQuality_);
      DARABONBA_PTR_FROM_JSON(IdSpoof, idSpoof_);
      DARABONBA_PTR_FROM_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_FROM_JSON(IsForceFaceCentered, isForceFaceCentered_);
      DARABONBA_PTR_FROM_JSON(LanguageConfig, languageConfig_);
      DARABONBA_PTR_FROM_JSON(MRTDInput, MRTDInput_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(NeedMultiFaceCheck, needMultiFaceCheck_);
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
      // targetFacePictureFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateRanCount, templateRanCount_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(UpdateFaceIfUserExists, updateFaceIfUserExists_);
      DARABONBA_PTR_FROM_JSON(UseNFC, useNFC_);
      DARABONBA_PTR_FROM_JSON(VerifyModel, verifyModel_);
    };
    InitializeV2AdvanceRequest() = default ;
    InitializeV2AdvanceRequest(const InitializeV2AdvanceRequest &) = default ;
    InitializeV2AdvanceRequest(InitializeV2AdvanceRequest &&) = default ;
    InitializeV2AdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitializeV2AdvanceRequest() = default ;
    InitializeV2AdvanceRequest& operator=(const InitializeV2AdvanceRequest &) = default ;
    InitializeV2AdvanceRequest& operator=(InitializeV2AdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appQualityCheck_ == nullptr
        && this->authorize_ == nullptr && this->autoDocPageConfig_ == nullptr && this->autoRegistration_ == nullptr && this->callbackToken_ == nullptr && this->callbackUrl_ == nullptr
        && this->chameleonFrameEnable_ == nullptr && this->crop_ == nullptr && this->dateOfBirth_ == nullptr && this->dateOfExpiry_ == nullptr && this->docName_ == nullptr
        && this->docNo_ == nullptr && this->docPageConfig_ == nullptr && this->docScanMode_ == nullptr && this->docType_ == nullptr && this->docVideo_ == nullptr
        && this->documentNumber_ == nullptr && this->editOcrResult_ == nullptr && this->email_ == nullptr && this->experienceCode_ == nullptr && this->faceAttributeCheck_ == nullptr
        && this->faceGroupCodes_ == nullptr && this->facePictureBase64_ == nullptr && this->facePictureFileObject_ == nullptr && this->facePictureUrl_ == nullptr && this->faceRegisterGroupCode_ == nullptr
        && this->faceVerifyThreshold_ == nullptr && this->idFaceQuality_ == nullptr && this->idSpoof_ == nullptr && this->idThreshold_ == nullptr && this->isForceFaceCentered_ == nullptr
        && this->languageConfig_ == nullptr && this->MRTDInput_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr && this->metaInfo_ == nullptr
        && this->mobile_ == nullptr && this->model_ == nullptr && this->needMultiFaceCheck_ == nullptr && this->ocr_ == nullptr && this->ocrValueStandard_ == nullptr
        && this->pages_ == nullptr && this->procedurePriority_ == nullptr && this->productCode_ == nullptr && this->productFlow_ == nullptr && this->returnFaces_ == nullptr
        && this->returnUrl_ == nullptr && this->saveFacePicture_ == nullptr && this->sceneCode_ == nullptr && this->securityLevel_ == nullptr && this->showAlbumIcon_ == nullptr
        && this->showGuidePage_ == nullptr && this->showOcrResult_ == nullptr && this->styleConfig_ == nullptr && this->targetFacePicture_ == nullptr && this->targetFacePictureFileObject_ == nullptr
        && this->targetFacePictureUrl_ == nullptr && this->templateConfig_ == nullptr && this->templateRanCount_ == nullptr && this->templateType_ == nullptr && this->updateFaceIfUserExists_ == nullptr
        && this->useNFC_ == nullptr && this->verifyModel_ == nullptr; };
    // appQualityCheck Field Functions 
    bool hasAppQualityCheck() const { return this->appQualityCheck_ != nullptr;};
    void deleteAppQualityCheck() { this->appQualityCheck_ = nullptr;};
    inline string getAppQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(appQualityCheck_, "") };
    inline InitializeV2AdvanceRequest& setAppQualityCheck(string appQualityCheck) { DARABONBA_PTR_SET_VALUE(appQualityCheck_, appQualityCheck) };


    // authorize Field Functions 
    bool hasAuthorize() const { return this->authorize_ != nullptr;};
    void deleteAuthorize() { this->authorize_ = nullptr;};
    inline string getAuthorize() const { DARABONBA_PTR_GET_DEFAULT(authorize_, "") };
    inline InitializeV2AdvanceRequest& setAuthorize(string authorize) { DARABONBA_PTR_SET_VALUE(authorize_, authorize) };


    // autoDocPageConfig Field Functions 
    bool hasAutoDocPageConfig() const { return this->autoDocPageConfig_ != nullptr;};
    void deleteAutoDocPageConfig() { this->autoDocPageConfig_ = nullptr;};
    inline string getAutoDocPageConfig() const { DARABONBA_PTR_GET_DEFAULT(autoDocPageConfig_, "") };
    inline InitializeV2AdvanceRequest& setAutoDocPageConfig(string autoDocPageConfig) { DARABONBA_PTR_SET_VALUE(autoDocPageConfig_, autoDocPageConfig) };


    // autoRegistration Field Functions 
    bool hasAutoRegistration() const { return this->autoRegistration_ != nullptr;};
    void deleteAutoRegistration() { this->autoRegistration_ = nullptr;};
    inline string getAutoRegistration() const { DARABONBA_PTR_GET_DEFAULT(autoRegistration_, "") };
    inline InitializeV2AdvanceRequest& setAutoRegistration(string autoRegistration) { DARABONBA_PTR_SET_VALUE(autoRegistration_, autoRegistration) };


    // callbackToken Field Functions 
    bool hasCallbackToken() const { return this->callbackToken_ != nullptr;};
    void deleteCallbackToken() { this->callbackToken_ = nullptr;};
    inline string getCallbackToken() const { DARABONBA_PTR_GET_DEFAULT(callbackToken_, "") };
    inline InitializeV2AdvanceRequest& setCallbackToken(string callbackToken) { DARABONBA_PTR_SET_VALUE(callbackToken_, callbackToken) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline InitializeV2AdvanceRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // chameleonFrameEnable Field Functions 
    bool hasChameleonFrameEnable() const { return this->chameleonFrameEnable_ != nullptr;};
    void deleteChameleonFrameEnable() { this->chameleonFrameEnable_ = nullptr;};
    inline string getChameleonFrameEnable() const { DARABONBA_PTR_GET_DEFAULT(chameleonFrameEnable_, "") };
    inline InitializeV2AdvanceRequest& setChameleonFrameEnable(string chameleonFrameEnable) { DARABONBA_PTR_SET_VALUE(chameleonFrameEnable_, chameleonFrameEnable) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline InitializeV2AdvanceRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // dateOfBirth Field Functions 
    bool hasDateOfBirth() const { return this->dateOfBirth_ != nullptr;};
    void deleteDateOfBirth() { this->dateOfBirth_ = nullptr;};
    inline string getDateOfBirth() const { DARABONBA_PTR_GET_DEFAULT(dateOfBirth_, "") };
    inline InitializeV2AdvanceRequest& setDateOfBirth(string dateOfBirth) { DARABONBA_PTR_SET_VALUE(dateOfBirth_, dateOfBirth) };


    // dateOfExpiry Field Functions 
    bool hasDateOfExpiry() const { return this->dateOfExpiry_ != nullptr;};
    void deleteDateOfExpiry() { this->dateOfExpiry_ = nullptr;};
    inline string getDateOfExpiry() const { DARABONBA_PTR_GET_DEFAULT(dateOfExpiry_, "") };
    inline InitializeV2AdvanceRequest& setDateOfExpiry(string dateOfExpiry) { DARABONBA_PTR_SET_VALUE(dateOfExpiry_, dateOfExpiry) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline InitializeV2AdvanceRequest& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // docNo Field Functions 
    bool hasDocNo() const { return this->docNo_ != nullptr;};
    void deleteDocNo() { this->docNo_ = nullptr;};
    inline string getDocNo() const { DARABONBA_PTR_GET_DEFAULT(docNo_, "") };
    inline InitializeV2AdvanceRequest& setDocNo(string docNo) { DARABONBA_PTR_SET_VALUE(docNo_, docNo) };


    // docPageConfig Field Functions 
    bool hasDocPageConfig() const { return this->docPageConfig_ != nullptr;};
    void deleteDocPageConfig() { this->docPageConfig_ = nullptr;};
    inline const vector<string> & getDocPageConfig() const { DARABONBA_PTR_GET_CONST(docPageConfig_, vector<string>) };
    inline vector<string> getDocPageConfig() { DARABONBA_PTR_GET(docPageConfig_, vector<string>) };
    inline InitializeV2AdvanceRequest& setDocPageConfig(const vector<string> & docPageConfig) { DARABONBA_PTR_SET_VALUE(docPageConfig_, docPageConfig) };
    inline InitializeV2AdvanceRequest& setDocPageConfig(vector<string> && docPageConfig) { DARABONBA_PTR_SET_RVALUE(docPageConfig_, docPageConfig) };


    // docScanMode Field Functions 
    bool hasDocScanMode() const { return this->docScanMode_ != nullptr;};
    void deleteDocScanMode() { this->docScanMode_ = nullptr;};
    inline string getDocScanMode() const { DARABONBA_PTR_GET_DEFAULT(docScanMode_, "") };
    inline InitializeV2AdvanceRequest& setDocScanMode(string docScanMode) { DARABONBA_PTR_SET_VALUE(docScanMode_, docScanMode) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline InitializeV2AdvanceRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // docVideo Field Functions 
    bool hasDocVideo() const { return this->docVideo_ != nullptr;};
    void deleteDocVideo() { this->docVideo_ = nullptr;};
    inline string getDocVideo() const { DARABONBA_PTR_GET_DEFAULT(docVideo_, "") };
    inline InitializeV2AdvanceRequest& setDocVideo(string docVideo) { DARABONBA_PTR_SET_VALUE(docVideo_, docVideo) };


    // documentNumber Field Functions 
    bool hasDocumentNumber() const { return this->documentNumber_ != nullptr;};
    void deleteDocumentNumber() { this->documentNumber_ = nullptr;};
    inline string getDocumentNumber() const { DARABONBA_PTR_GET_DEFAULT(documentNumber_, "") };
    inline InitializeV2AdvanceRequest& setDocumentNumber(string documentNumber) { DARABONBA_PTR_SET_VALUE(documentNumber_, documentNumber) };


    // editOcrResult Field Functions 
    bool hasEditOcrResult() const { return this->editOcrResult_ != nullptr;};
    void deleteEditOcrResult() { this->editOcrResult_ = nullptr;};
    inline string getEditOcrResult() const { DARABONBA_PTR_GET_DEFAULT(editOcrResult_, "") };
    inline InitializeV2AdvanceRequest& setEditOcrResult(string editOcrResult) { DARABONBA_PTR_SET_VALUE(editOcrResult_, editOcrResult) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline InitializeV2AdvanceRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // experienceCode Field Functions 
    bool hasExperienceCode() const { return this->experienceCode_ != nullptr;};
    void deleteExperienceCode() { this->experienceCode_ = nullptr;};
    inline string getExperienceCode() const { DARABONBA_PTR_GET_DEFAULT(experienceCode_, "") };
    inline InitializeV2AdvanceRequest& setExperienceCode(string experienceCode) { DARABONBA_PTR_SET_VALUE(experienceCode_, experienceCode) };


    // faceAttributeCheck Field Functions 
    bool hasFaceAttributeCheck() const { return this->faceAttributeCheck_ != nullptr;};
    void deleteFaceAttributeCheck() { this->faceAttributeCheck_ = nullptr;};
    inline string getFaceAttributeCheck() const { DARABONBA_PTR_GET_DEFAULT(faceAttributeCheck_, "") };
    inline InitializeV2AdvanceRequest& setFaceAttributeCheck(string faceAttributeCheck) { DARABONBA_PTR_SET_VALUE(faceAttributeCheck_, faceAttributeCheck) };


    // faceGroupCodes Field Functions 
    bool hasFaceGroupCodes() const { return this->faceGroupCodes_ != nullptr;};
    void deleteFaceGroupCodes() { this->faceGroupCodes_ = nullptr;};
    inline string getFaceGroupCodes() const { DARABONBA_PTR_GET_DEFAULT(faceGroupCodes_, "") };
    inline InitializeV2AdvanceRequest& setFaceGroupCodes(string faceGroupCodes) { DARABONBA_PTR_SET_VALUE(faceGroupCodes_, faceGroupCodes) };


    // facePictureBase64 Field Functions 
    bool hasFacePictureBase64() const { return this->facePictureBase64_ != nullptr;};
    void deleteFacePictureBase64() { this->facePictureBase64_ = nullptr;};
    inline string getFacePictureBase64() const { DARABONBA_PTR_GET_DEFAULT(facePictureBase64_, "") };
    inline InitializeV2AdvanceRequest& setFacePictureBase64(string facePictureBase64) { DARABONBA_PTR_SET_VALUE(facePictureBase64_, facePictureBase64) };


    // facePictureFileObject Field Functions 
    bool hasFacePictureFileObject() const { return this->facePictureFileObject_ != nullptr;};
    void deleteFacePictureFileObject() { this->facePictureFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFacePictureFileObject() const { DARABONBA_GET(facePictureFileObject_) };
    inline InitializeV2AdvanceRequest& setFacePictureFileObject(shared_ptr<Darabonba::IStream> facePictureFileObject) { DARABONBA_SET_VALUE(facePictureFileObject_, facePictureFileObject) };


    // facePictureUrl Field Functions 
    bool hasFacePictureUrl() const { return this->facePictureUrl_ != nullptr;};
    void deleteFacePictureUrl() { this->facePictureUrl_ = nullptr;};
    inline string getFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(facePictureUrl_, "") };
    inline InitializeV2AdvanceRequest& setFacePictureUrl(string facePictureUrl) { DARABONBA_PTR_SET_VALUE(facePictureUrl_, facePictureUrl) };


    // faceRegisterGroupCode Field Functions 
    bool hasFaceRegisterGroupCode() const { return this->faceRegisterGroupCode_ != nullptr;};
    void deleteFaceRegisterGroupCode() { this->faceRegisterGroupCode_ = nullptr;};
    inline string getFaceRegisterGroupCode() const { DARABONBA_PTR_GET_DEFAULT(faceRegisterGroupCode_, "") };
    inline InitializeV2AdvanceRequest& setFaceRegisterGroupCode(string faceRegisterGroupCode) { DARABONBA_PTR_SET_VALUE(faceRegisterGroupCode_, faceRegisterGroupCode) };


    // faceVerifyThreshold Field Functions 
    bool hasFaceVerifyThreshold() const { return this->faceVerifyThreshold_ != nullptr;};
    void deleteFaceVerifyThreshold() { this->faceVerifyThreshold_ = nullptr;};
    inline string getFaceVerifyThreshold() const { DARABONBA_PTR_GET_DEFAULT(faceVerifyThreshold_, "") };
    inline InitializeV2AdvanceRequest& setFaceVerifyThreshold(string faceVerifyThreshold) { DARABONBA_PTR_SET_VALUE(faceVerifyThreshold_, faceVerifyThreshold) };


    // idFaceQuality Field Functions 
    bool hasIdFaceQuality() const { return this->idFaceQuality_ != nullptr;};
    void deleteIdFaceQuality() { this->idFaceQuality_ = nullptr;};
    inline string getIdFaceQuality() const { DARABONBA_PTR_GET_DEFAULT(idFaceQuality_, "") };
    inline InitializeV2AdvanceRequest& setIdFaceQuality(string idFaceQuality) { DARABONBA_PTR_SET_VALUE(idFaceQuality_, idFaceQuality) };


    // idSpoof Field Functions 
    bool hasIdSpoof() const { return this->idSpoof_ != nullptr;};
    void deleteIdSpoof() { this->idSpoof_ = nullptr;};
    inline string getIdSpoof() const { DARABONBA_PTR_GET_DEFAULT(idSpoof_, "") };
    inline InitializeV2AdvanceRequest& setIdSpoof(string idSpoof) { DARABONBA_PTR_SET_VALUE(idSpoof_, idSpoof) };


    // idThreshold Field Functions 
    bool hasIdThreshold() const { return this->idThreshold_ != nullptr;};
    void deleteIdThreshold() { this->idThreshold_ = nullptr;};
    inline string getIdThreshold() const { DARABONBA_PTR_GET_DEFAULT(idThreshold_, "") };
    inline InitializeV2AdvanceRequest& setIdThreshold(string idThreshold) { DARABONBA_PTR_SET_VALUE(idThreshold_, idThreshold) };


    // isForceFaceCentered Field Functions 
    bool hasIsForceFaceCentered() const { return this->isForceFaceCentered_ != nullptr;};
    void deleteIsForceFaceCentered() { this->isForceFaceCentered_ = nullptr;};
    inline string getIsForceFaceCentered() const { DARABONBA_PTR_GET_DEFAULT(isForceFaceCentered_, "") };
    inline InitializeV2AdvanceRequest& setIsForceFaceCentered(string isForceFaceCentered) { DARABONBA_PTR_SET_VALUE(isForceFaceCentered_, isForceFaceCentered) };


    // languageConfig Field Functions 
    bool hasLanguageConfig() const { return this->languageConfig_ != nullptr;};
    void deleteLanguageConfig() { this->languageConfig_ = nullptr;};
    inline string getLanguageConfig() const { DARABONBA_PTR_GET_DEFAULT(languageConfig_, "") };
    inline InitializeV2AdvanceRequest& setLanguageConfig(string languageConfig) { DARABONBA_PTR_SET_VALUE(languageConfig_, languageConfig) };


    // MRTDInput Field Functions 
    bool hasMRTDInput() const { return this->MRTDInput_ != nullptr;};
    void deleteMRTDInput() { this->MRTDInput_ = nullptr;};
    inline string getMRTDInput() const { DARABONBA_PTR_GET_DEFAULT(MRTDInput_, "") };
    inline InitializeV2AdvanceRequest& setMRTDInput(string MRTDInput) { DARABONBA_PTR_SET_VALUE(MRTDInput_, MRTDInput) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline InitializeV2AdvanceRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline InitializeV2AdvanceRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // metaInfo Field Functions 
    bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
    void deleteMetaInfo() { this->metaInfo_ = nullptr;};
    inline string getMetaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
    inline InitializeV2AdvanceRequest& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline InitializeV2AdvanceRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline InitializeV2AdvanceRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // needMultiFaceCheck Field Functions 
    bool hasNeedMultiFaceCheck() const { return this->needMultiFaceCheck_ != nullptr;};
    void deleteNeedMultiFaceCheck() { this->needMultiFaceCheck_ = nullptr;};
    inline string getNeedMultiFaceCheck() const { DARABONBA_PTR_GET_DEFAULT(needMultiFaceCheck_, "") };
    inline InitializeV2AdvanceRequest& setNeedMultiFaceCheck(string needMultiFaceCheck) { DARABONBA_PTR_SET_VALUE(needMultiFaceCheck_, needMultiFaceCheck) };


    // ocr Field Functions 
    bool hasOcr() const { return this->ocr_ != nullptr;};
    void deleteOcr() { this->ocr_ = nullptr;};
    inline string getOcr() const { DARABONBA_PTR_GET_DEFAULT(ocr_, "") };
    inline InitializeV2AdvanceRequest& setOcr(string ocr) { DARABONBA_PTR_SET_VALUE(ocr_, ocr) };


    // ocrValueStandard Field Functions 
    bool hasOcrValueStandard() const { return this->ocrValueStandard_ != nullptr;};
    void deleteOcrValueStandard() { this->ocrValueStandard_ = nullptr;};
    inline string getOcrValueStandard() const { DARABONBA_PTR_GET_DEFAULT(ocrValueStandard_, "") };
    inline InitializeV2AdvanceRequest& setOcrValueStandard(string ocrValueStandard) { DARABONBA_PTR_SET_VALUE(ocrValueStandard_, ocrValueStandard) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline string getPages() const { DARABONBA_PTR_GET_DEFAULT(pages_, "") };
    inline InitializeV2AdvanceRequest& setPages(string pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


    // procedurePriority Field Functions 
    bool hasProcedurePriority() const { return this->procedurePriority_ != nullptr;};
    void deleteProcedurePriority() { this->procedurePriority_ = nullptr;};
    inline string getProcedurePriority() const { DARABONBA_PTR_GET_DEFAULT(procedurePriority_, "") };
    inline InitializeV2AdvanceRequest& setProcedurePriority(string procedurePriority) { DARABONBA_PTR_SET_VALUE(procedurePriority_, procedurePriority) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline InitializeV2AdvanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productFlow Field Functions 
    bool hasProductFlow() const { return this->productFlow_ != nullptr;};
    void deleteProductFlow() { this->productFlow_ = nullptr;};
    inline string getProductFlow() const { DARABONBA_PTR_GET_DEFAULT(productFlow_, "") };
    inline InitializeV2AdvanceRequest& setProductFlow(string productFlow) { DARABONBA_PTR_SET_VALUE(productFlow_, productFlow) };


    // returnFaces Field Functions 
    bool hasReturnFaces() const { return this->returnFaces_ != nullptr;};
    void deleteReturnFaces() { this->returnFaces_ = nullptr;};
    inline string getReturnFaces() const { DARABONBA_PTR_GET_DEFAULT(returnFaces_, "") };
    inline InitializeV2AdvanceRequest& setReturnFaces(string returnFaces) { DARABONBA_PTR_SET_VALUE(returnFaces_, returnFaces) };


    // returnUrl Field Functions 
    bool hasReturnUrl() const { return this->returnUrl_ != nullptr;};
    void deleteReturnUrl() { this->returnUrl_ = nullptr;};
    inline string getReturnUrl() const { DARABONBA_PTR_GET_DEFAULT(returnUrl_, "") };
    inline InitializeV2AdvanceRequest& setReturnUrl(string returnUrl) { DARABONBA_PTR_SET_VALUE(returnUrl_, returnUrl) };


    // saveFacePicture Field Functions 
    bool hasSaveFacePicture() const { return this->saveFacePicture_ != nullptr;};
    void deleteSaveFacePicture() { this->saveFacePicture_ = nullptr;};
    inline string getSaveFacePicture() const { DARABONBA_PTR_GET_DEFAULT(saveFacePicture_, "") };
    inline InitializeV2AdvanceRequest& setSaveFacePicture(string saveFacePicture) { DARABONBA_PTR_SET_VALUE(saveFacePicture_, saveFacePicture) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline InitializeV2AdvanceRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline string getSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
    inline InitializeV2AdvanceRequest& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


    // showAlbumIcon Field Functions 
    bool hasShowAlbumIcon() const { return this->showAlbumIcon_ != nullptr;};
    void deleteShowAlbumIcon() { this->showAlbumIcon_ = nullptr;};
    inline string getShowAlbumIcon() const { DARABONBA_PTR_GET_DEFAULT(showAlbumIcon_, "") };
    inline InitializeV2AdvanceRequest& setShowAlbumIcon(string showAlbumIcon) { DARABONBA_PTR_SET_VALUE(showAlbumIcon_, showAlbumIcon) };


    // showGuidePage Field Functions 
    bool hasShowGuidePage() const { return this->showGuidePage_ != nullptr;};
    void deleteShowGuidePage() { this->showGuidePage_ = nullptr;};
    inline string getShowGuidePage() const { DARABONBA_PTR_GET_DEFAULT(showGuidePage_, "") };
    inline InitializeV2AdvanceRequest& setShowGuidePage(string showGuidePage) { DARABONBA_PTR_SET_VALUE(showGuidePage_, showGuidePage) };


    // showOcrResult Field Functions 
    bool hasShowOcrResult() const { return this->showOcrResult_ != nullptr;};
    void deleteShowOcrResult() { this->showOcrResult_ = nullptr;};
    inline string getShowOcrResult() const { DARABONBA_PTR_GET_DEFAULT(showOcrResult_, "") };
    inline InitializeV2AdvanceRequest& setShowOcrResult(string showOcrResult) { DARABONBA_PTR_SET_VALUE(showOcrResult_, showOcrResult) };


    // styleConfig Field Functions 
    bool hasStyleConfig() const { return this->styleConfig_ != nullptr;};
    void deleteStyleConfig() { this->styleConfig_ = nullptr;};
    inline string getStyleConfig() const { DARABONBA_PTR_GET_DEFAULT(styleConfig_, "") };
    inline InitializeV2AdvanceRequest& setStyleConfig(string styleConfig) { DARABONBA_PTR_SET_VALUE(styleConfig_, styleConfig) };


    // targetFacePicture Field Functions 
    bool hasTargetFacePicture() const { return this->targetFacePicture_ != nullptr;};
    void deleteTargetFacePicture() { this->targetFacePicture_ = nullptr;};
    inline string getTargetFacePicture() const { DARABONBA_PTR_GET_DEFAULT(targetFacePicture_, "") };
    inline InitializeV2AdvanceRequest& setTargetFacePicture(string targetFacePicture) { DARABONBA_PTR_SET_VALUE(targetFacePicture_, targetFacePicture) };


    // targetFacePictureFileObject Field Functions 
    bool hasTargetFacePictureFileObject() const { return this->targetFacePictureFileObject_ != nullptr;};
    void deleteTargetFacePictureFileObject() { this->targetFacePictureFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getTargetFacePictureFileObject() const { DARABONBA_GET(targetFacePictureFileObject_) };
    inline InitializeV2AdvanceRequest& setTargetFacePictureFileObject(shared_ptr<Darabonba::IStream> targetFacePictureFileObject) { DARABONBA_SET_VALUE(targetFacePictureFileObject_, targetFacePictureFileObject) };


    // targetFacePictureUrl Field Functions 
    bool hasTargetFacePictureUrl() const { return this->targetFacePictureUrl_ != nullptr;};
    void deleteTargetFacePictureUrl() { this->targetFacePictureUrl_ = nullptr;};
    inline string getTargetFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(targetFacePictureUrl_, "") };
    inline InitializeV2AdvanceRequest& setTargetFacePictureUrl(string targetFacePictureUrl) { DARABONBA_PTR_SET_VALUE(targetFacePictureUrl_, targetFacePictureUrl) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline InitializeV2AdvanceRequest& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateRanCount Field Functions 
    bool hasTemplateRanCount() const { return this->templateRanCount_ != nullptr;};
    void deleteTemplateRanCount() { this->templateRanCount_ = nullptr;};
    inline string getTemplateRanCount() const { DARABONBA_PTR_GET_DEFAULT(templateRanCount_, "") };
    inline InitializeV2AdvanceRequest& setTemplateRanCount(string templateRanCount) { DARABONBA_PTR_SET_VALUE(templateRanCount_, templateRanCount) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline InitializeV2AdvanceRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // updateFaceIfUserExists Field Functions 
    bool hasUpdateFaceIfUserExists() const { return this->updateFaceIfUserExists_ != nullptr;};
    void deleteUpdateFaceIfUserExists() { this->updateFaceIfUserExists_ = nullptr;};
    inline string getUpdateFaceIfUserExists() const { DARABONBA_PTR_GET_DEFAULT(updateFaceIfUserExists_, "") };
    inline InitializeV2AdvanceRequest& setUpdateFaceIfUserExists(string updateFaceIfUserExists) { DARABONBA_PTR_SET_VALUE(updateFaceIfUserExists_, updateFaceIfUserExists) };


    // useNFC Field Functions 
    bool hasUseNFC() const { return this->useNFC_ != nullptr;};
    void deleteUseNFC() { this->useNFC_ = nullptr;};
    inline string getUseNFC() const { DARABONBA_PTR_GET_DEFAULT(useNFC_, "") };
    inline InitializeV2AdvanceRequest& setUseNFC(string useNFC) { DARABONBA_PTR_SET_VALUE(useNFC_, useNFC) };


    // verifyModel Field Functions 
    bool hasVerifyModel() const { return this->verifyModel_ != nullptr;};
    void deleteVerifyModel() { this->verifyModel_ = nullptr;};
    inline string getVerifyModel() const { DARABONBA_PTR_GET_DEFAULT(verifyModel_, "") };
    inline InitializeV2AdvanceRequest& setVerifyModel(string verifyModel) { DARABONBA_PTR_SET_VALUE(verifyModel_, verifyModel) };


  protected:
    // <warning>This feature is not supported by the **Web SDK**. To use this feature, refer to the App SDK integration guide.</warning>
    // 
    // Specifies whether to enable strict face quality detection. Valid values:
    // - Y: Enable. This is the default value.
    // - N: Disable.
    shared_ptr<string> appQualityCheck_ {};
    // Specifies whether to enable authoritative identity verification. This feature currently applies only to second-generation ID cards in the Chinese mainland. This parameter is applicable to IDV products.
    shared_ptr<string> authorize_ {};
    // The automatic document page classification configuration. This parameter takes effect only when DocType is set to a country or region code. You can specify the pages to collect based on the specific document type code. For documents that are not configured, only the front side is collected.
    shared_ptr<string> autoDocPageConfig_ {};
    // Specifies whether to enable automatic registration.
    shared_ptr<string> autoRegistration_ {};
    // The security token used for anti-replay and anti-tampering verification. If you specify this parameter, the CallbackToken field is displayed in the callback URL.
    shared_ptr<string> callbackToken_ {};
    // The callback URL for authentication result notifications. The default callback request method is GET, and the callback URL must start with https. After the authentication is completed, the platform calls this URL and automatically appends the transactionId, passed, and subcode fields.
    shared_ptr<string> callbackUrl_ {};
    // Specifies whether to enable the adaptive color-changing window border. Valid values:
    // - **Y**: Enable.
    // - **N**: Disable.
    shared_ptr<string> chameleonFrameEnable_ {};
    // Specifies whether to crop the image. This parameter is applicable to IDV products.
    shared_ptr<string> crop_ {};
    // The date of birth on the document, in the YYMMDD format (6 digits). This parameter is required when **MRTDInput** is set to **2**.
    shared_ptr<string> dateOfBirth_ {};
    // The expiration date on the document, in the YYMMDD format (6 digits). This parameter is required when **MRTDInput** is set to **2**.
    shared_ptr<string> dateOfExpiry_ {};
    // The real name of the user.
    shared_ptr<string> docName_ {};
    // The document number of the user.
    shared_ptr<string> docNo_ {};
    // The custom configuration passed by the customer to specify whether to collect more pages.
    shared_ptr<vector<string>> docPageConfig_ {};
    // The photo capture mode for document collection. Valid values:
    // 
    // - manual: Manual capture.
    // - auto: Automatic capture. This is the default value.
    shared_ptr<string> docScanMode_ {};
    // The document type. 
    // > For the eKYC_PRO and ID_OCR_MAX editions, see the official documentation: https://www.alibabacloud.com/help/zh/ekyc/latest/certificate-code-table?spm=a2c63.p38356.help-menu-445633.d_2_8_2_0.279147abwKAWbr
    // 
    // > For the ID_OCR, eKYC, and eYKC_MIN editions, see the document type list in the official documentation: https://www.alibabacloud.com/help/zh/ekyc/latest/gnhekqy05ni51m4c?spm=a2c63.p38356.help-menu-445633.d_2_3_1_0_0_0.6243244777KoZ7
    shared_ptr<string> docType_ {};
    // Specifies whether to store a video as evidence. Valid values:
    // 
    // - N: No. This is the default value.
    // 
    // - Y: Yes. During the authentication process, a video of the user\\"s face scanning process (a 1- to 2-second video file) is collected and returned through the query operation.
    // 
    // > Because video files are large, the system discards the video file when the network is unstable to prioritize the transmission of images required for authentication.
    shared_ptr<string> docVideo_ {};
    // The document number. This parameter is required when **MRTDInput** is set to **2**.
    shared_ptr<string> documentNumber_ {};
    // Specifies whether the recognition result page is editable during the document OCR stage. Valid values:
    // 
    // - **0**: Not editable.
    // 
    // - **1**: Editable. This is the default value.
    shared_ptr<string> editOcrResult_ {};
    // The Indonesian email address. This field takes effect only when Authorize is set to T.
    // 
    // > Note
    // > This field is required only when the Indonesian data source is enabled.
    shared_ptr<string> email_ {};
    // The experience code.
    shared_ptr<string> experienceCode_ {};
    // Specifies whether to return additional face attribute information. Valid values: N: Do not return. This is the default value. Y: Return. The result is located in Result.ExtFaceInfo.FaceAttributeInfo.
    shared_ptr<string> faceAttributeCheck_ {};
    // The face databases for comparison.
    shared_ptr<string> faceGroupCodes_ {};
    // The Base64-encoded string of the photo. If you choose to pass the face photo by using FacePictureBase64, check the photo size and do not pass an excessively large photo.
    shared_ptr<string> facePictureBase64_ {};
    // The file stream of the face photo.
    shared_ptr<Darabonba::IStream> facePictureFileObject_ {};
    // The URL of the face photo. The URL must be a publicly accessible HTTP or HTTPS link.
    shared_ptr<string> facePictureUrl_ {};
    // The face database for registration.
    shared_ptr<string> faceRegisterGroupCode_ {};
    // The threshold for face verification.
    shared_ptr<string> faceVerifyThreshold_ {};
    // The quality of the face image. This parameter is applicable to IDV products.
    shared_ptr<string> idFaceQuality_ {};
    // Specifies whether to enable document anti-spoofing detection. This parameter is applicable to IDV products.
    shared_ptr<string> idSpoof_ {};
    // The custom threshold mode for OCR quality detection. Valid values:
    // 
    // - 0: System default.
    // - 1: Strict mode.
    // - 2: Loose mode.
    // - 3: Disable quality detection. This is the default value.
    shared_ptr<string> idThreshold_ {};
    // The forced centering configuration. Specifies whether to intercept the request when an off-center face is detected on the terminal. Valid values:
    // 
    // - Y: Intercept. The client prompts the user to scan their face again.
    // - N: Do not intercept. This is the default value. The system extracts the largest face from the face scanning screen and sends it to the server for security detection.
    shared_ptr<string> isForceFaceCentered_ {};
    // The language configuration. This parameter is applicable to IDV products.
    shared_ptr<string> languageConfig_ {};
    // The input source of the MRTD verification parameter. This parameter is required to decrypt information when NFC reads the document chip information. Valid values:
    // 
    // - **0**: User input.
    // 
    // - **1**: OCR reading.
    // 
    // - **2**: API input.
    shared_ptr<string> MRTDInput_ {};
    // The custom unique business identifier on the merchant side, which is used for subsequent troubleshooting. It supports a combination of letters and digits, with a maximum length of 32 characters. Make sure that the value is unique.
    shared_ptr<string> merchantBizId_ {};
    // Your custom user ID or another identifier that can identify a specific user, such as a mobile phone number or an email address. We strongly recommend that you desensitize the value of this field in advance, for example, by hashing the value.
    shared_ptr<string> merchantUserId_ {};
    // The Metainfo environment parameter, which must be obtained by using the client SDK.
    shared_ptr<string> metaInfo_ {};
    // The Indonesian phone number. The format must be verified. It must start with +62 followed by 9 to 11 digits. This field takes effect only when Authorize is set to T.
    // 
    // > 
    // > - This field is required only when the Indonesian data source is enabled.
    shared_ptr<string> mobile_ {};
    // The type of liveness detection to perform. Valid values:
    // 
    // - **LIVENESS**: Liveness detection based on blinking. This is the default value.
    // 
    // - **PHOTINUS_LIVENESS**: Dual liveness detection based on blinking and photinus.
    // 
    // > 
    // > - For supported SDK versions, see [SDK release notes](https://www.alibabacloud.com/help/zh/ekyc/latest/sdk-publishing-record?spm=a2c63.p38356.0.i99).
    // > - Dual liveness detection based on photinus is not supported on PCs.
    shared_ptr<string> model_ {};
    // Specifies whether to intercept the request when multiple faces are detected on the terminal. Valid values:
    // 
    // - Y: Intercept. The client prompts the user to scan their face again.
    // - N: Do not intercept. This is the default value. The system extracts the largest face from the face scanning screen and sends it to the server for security detection.
    shared_ptr<string> needMultiFaceCheck_ {};
    // Specifies whether to enable OCR. This parameter is applicable to IDV products.
    shared_ptr<string> ocr_ {};
    // Specifies whether to return additional standardized OCR recognition fields. Valid values:
    // 
    // - 0: No. This is the default value.
    // - 1: Yes.
    shared_ptr<string> ocrValueStandard_ {};
    // The configuration of the pages to collect. Separate multiple pages with commas (,). Valid values:
    // - **01**: The portrait side of the document.
    // 
    // - **01,02**: The portrait and back sides of the document.
    // 
    // > If you set this parameter to 01,02, only Chinese ID cards and Vietnamese ID cards are supported.
    shared_ptr<string> pages_ {};
    // Specifies whether to allow degraded processing when compatibility issues occur during mobile H5 authentication. Valid values:
    // 
    // - **url**: Allow degradation. This is the default value. The page displays the authentication URL, and the user can copy the URL to open it or switch browsers to continue the authentication.
    // 
    // - **keep**: Do not allow degradation. The system directly returns the error cause and ends the authentication process.
    // 
    // 
    // > 
    // > - This switch is not supported on PCs.
    // > - If the business scenario involves completing authentication in an embedded web page within an app, we recommend that you set this parameter to keep to disable URL degradation.
    shared_ptr<string> procedurePriority_ {};
    // The product edition to integrate. 
    // 
    // > Note: For more information, see the official documentation: https://www.alibabacloud.com/help/zh/ekyc/latest/product-introduction?spm=a2c63.p38356.0.i1
    shared_ptr<string> productCode_ {};
    // The sequence of document and face verification. Valid values:
    // 
    // - DOC_FACE: Document verification followed by face verification. This is the default value.
    // - FACE_DOC: Face verification followed by document verification.
    // 
    // > Note: This parameter is required only when ProductCode is set to KYC_GLOBAL.
    shared_ptr<string> productFlow_ {};
    // The number of duplicate faces returned.
    shared_ptr<string> returnFaces_ {};
    // The client-side callback URL.
    shared_ptr<string> returnUrl_ {};
    // Specifies whether to save the face photo.
    shared_ptr<string> saveFacePicture_ {};
    // The scene code. This parameter is applicable to IDV products.
    shared_ptr<string> sceneCode_ {};
    // The pattern that represents different security levels of the authentication flow. Valid values:
    // 
    // - 01: Normal pattern. This is the default value.
    // - 02: safe mode. This is a relatively strict pattern that is active in high-risk scenarios. This parameter is applicable to IDV products.
    shared_ptr<string> securityLevel_ {};
    // Specifies whether to display the album upload entry during the document OCR stage. Valid values:
    // 
    // - **1**: Display. This is the default value.
    // 
    // - **0**: Do not display.
    shared_ptr<string> showAlbumIcon_ {};
    // Specifies whether to display the guide page. Valid values:
    // 
    // - **1**: Display. This is the default value.
    // 
    // - **0**: Do not display.
    shared_ptr<string> showGuidePage_ {};
    // Specifies whether to display the recognition result page during the document OCR stage. Valid values:
    // 
    // - **1**: Display. This is the default value.
    // 
    // - **0**: Do not display.
    shared_ptr<string> showOcrResult_ {};
    // The custom UI configuration. Convert your custom UI configuration into a JSON string based on the configuration template, and pass it through this operation. For more information, see [Customize IDV UI styles](https://www.alibabacloud.com/help/zh/ekyc/latest/idv-kyc-custom-skin?spm=a2c63.p38356.0.i60).
    shared_ptr<string> styleConfig_ {};
    // The Base64-encoded string of the portrait photo.
    shared_ptr<string> targetFacePicture_ {};
    // The file stream of the base face image.
    shared_ptr<Darabonba::IStream> targetFacePictureFileObject_ {};
    // The URL of the portrait photo. The URL must be a publicly accessible HTTP or HTTPS link.
    shared_ptr<string> targetFacePictureUrl_ {};
    // The custom action pool configuration for liveness detection. This parameter is required when Model is set to TEMPLATE.
    // Configuration rules: Separate multiple action codes with commas (,). Best Practices: We recommend that you include at least one frontal face action (such as blinking) and keep the total number of actions to a maximum of 3.
    // Action code lookup table:
    // 
    // - Blink: 01
    // - Open Mouth: 02
    // - Shake Head Left: 03
    // - Shake Head Right: 04
    // - Move Farther: 05
    // - Move Closer: 06
    // - Photinus: 07
    shared_ptr<string> templateConfig_ {};
    // **[Deprecated]** The random mode is no longer recommended. This field is deprecated.
    shared_ptr<string> templateRanCount_ {};
    // The execution sequence of liveness detection actions in TemplateConfig. This parameter is required when Model is set to TEMPLATE. Valid values:
    // 
    // - Seq: Execute from left to right in the sequence configured in TemplateConfig.
    shared_ptr<string> templateType_ {};
    // Specifies whether to overwrite the existing face with the current face if MerchantUserId already exists during automatic registration. Valid values: Y: Overwrite. N: Do not overwrite and return a message indicating that the UserId already exists.
    shared_ptr<string> updateFaceIfUserExists_ {};
    // Specifies whether to enable NFC verification when **DocType** is set to 01000000 (global passport). Valid values:
    // - **Y**: Enable.
    // - **N**: Disable.
    shared_ptr<string> useNFC_ {};
    // The type of verification.
    shared_ptr<string> verifyModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
