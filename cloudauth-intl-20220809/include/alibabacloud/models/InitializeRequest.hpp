// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALIZEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITIALIZEREQUEST_HPP_
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
  class InitializeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitializeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppQualityCheck, appQualityCheck_);
      DARABONBA_PTR_TO_JSON(Authorize, authorize_);
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
      DARABONBA_PTR_TO_JSON(FaceGroupCodes, faceGroupCodes_);
      DARABONBA_PTR_TO_JSON(FacePictureBase64, facePictureBase64_);
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
      DARABONBA_PTR_TO_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateRanCount, templateRanCount_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(UseNFC, useNFC_);
      DARABONBA_PTR_TO_JSON(VerifyModel, verifyModel_);
    };
    friend void from_json(const Darabonba::Json& j, InitializeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppQualityCheck, appQualityCheck_);
      DARABONBA_PTR_FROM_JSON(Authorize, authorize_);
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
      DARABONBA_PTR_FROM_JSON(FaceGroupCodes, faceGroupCodes_);
      DARABONBA_PTR_FROM_JSON(FacePictureBase64, facePictureBase64_);
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
      DARABONBA_PTR_FROM_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateRanCount, templateRanCount_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(UseNFC, useNFC_);
      DARABONBA_PTR_FROM_JSON(VerifyModel, verifyModel_);
    };
    InitializeRequest() = default ;
    InitializeRequest(const InitializeRequest &) = default ;
    InitializeRequest(InitializeRequest &&) = default ;
    InitializeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitializeRequest() = default ;
    InitializeRequest& operator=(const InitializeRequest &) = default ;
    InitializeRequest& operator=(InitializeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appQualityCheck_ == nullptr
        && this->authorize_ == nullptr && this->autoRegistration_ == nullptr && this->callbackToken_ == nullptr && this->callbackUrl_ == nullptr && this->chameleonFrameEnable_ == nullptr
        && this->crop_ == nullptr && this->dateOfBirth_ == nullptr && this->dateOfExpiry_ == nullptr && this->docName_ == nullptr && this->docNo_ == nullptr
        && this->docPageConfig_ == nullptr && this->docScanMode_ == nullptr && this->docType_ == nullptr && this->docVideo_ == nullptr && this->documentNumber_ == nullptr
        && this->editOcrResult_ == nullptr && this->email_ == nullptr && this->experienceCode_ == nullptr && this->faceGroupCodes_ == nullptr && this->facePictureBase64_ == nullptr
        && this->facePictureUrl_ == nullptr && this->faceRegisterGroupCode_ == nullptr && this->faceVerifyThreshold_ == nullptr && this->idFaceQuality_ == nullptr && this->idSpoof_ == nullptr
        && this->idThreshold_ == nullptr && this->languageConfig_ == nullptr && this->MRTDInput_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr
        && this->metaInfo_ == nullptr && this->mobile_ == nullptr && this->model_ == nullptr && this->ocr_ == nullptr && this->pages_ == nullptr
        && this->procedurePriority_ == nullptr && this->productCode_ == nullptr && this->productFlow_ == nullptr && this->returnFaces_ == nullptr && this->returnUrl_ == nullptr
        && this->saveFacePicture_ == nullptr && this->sceneCode_ == nullptr && this->securityLevel_ == nullptr && this->showAlbumIcon_ == nullptr && this->showGuidePage_ == nullptr
        && this->showOcrResult_ == nullptr && this->styleConfig_ == nullptr && this->targetFacePicture_ == nullptr && this->targetFacePictureUrl_ == nullptr && this->templateConfig_ == nullptr
        && this->templateRanCount_ == nullptr && this->templateType_ == nullptr && this->useNFC_ == nullptr && this->verifyModel_ == nullptr; };
    // appQualityCheck Field Functions 
    bool hasAppQualityCheck() const { return this->appQualityCheck_ != nullptr;};
    void deleteAppQualityCheck() { this->appQualityCheck_ = nullptr;};
    inline string getAppQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(appQualityCheck_, "") };
    inline InitializeRequest& setAppQualityCheck(string appQualityCheck) { DARABONBA_PTR_SET_VALUE(appQualityCheck_, appQualityCheck) };


    // authorize Field Functions 
    bool hasAuthorize() const { return this->authorize_ != nullptr;};
    void deleteAuthorize() { this->authorize_ = nullptr;};
    inline string getAuthorize() const { DARABONBA_PTR_GET_DEFAULT(authorize_, "") };
    inline InitializeRequest& setAuthorize(string authorize) { DARABONBA_PTR_SET_VALUE(authorize_, authorize) };


    // autoRegistration Field Functions 
    bool hasAutoRegistration() const { return this->autoRegistration_ != nullptr;};
    void deleteAutoRegistration() { this->autoRegistration_ = nullptr;};
    inline string getAutoRegistration() const { DARABONBA_PTR_GET_DEFAULT(autoRegistration_, "") };
    inline InitializeRequest& setAutoRegistration(string autoRegistration) { DARABONBA_PTR_SET_VALUE(autoRegistration_, autoRegistration) };


    // callbackToken Field Functions 
    bool hasCallbackToken() const { return this->callbackToken_ != nullptr;};
    void deleteCallbackToken() { this->callbackToken_ = nullptr;};
    inline string getCallbackToken() const { DARABONBA_PTR_GET_DEFAULT(callbackToken_, "") };
    inline InitializeRequest& setCallbackToken(string callbackToken) { DARABONBA_PTR_SET_VALUE(callbackToken_, callbackToken) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline InitializeRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // chameleonFrameEnable Field Functions 
    bool hasChameleonFrameEnable() const { return this->chameleonFrameEnable_ != nullptr;};
    void deleteChameleonFrameEnable() { this->chameleonFrameEnable_ = nullptr;};
    inline string getChameleonFrameEnable() const { DARABONBA_PTR_GET_DEFAULT(chameleonFrameEnable_, "") };
    inline InitializeRequest& setChameleonFrameEnable(string chameleonFrameEnable) { DARABONBA_PTR_SET_VALUE(chameleonFrameEnable_, chameleonFrameEnable) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline InitializeRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // dateOfBirth Field Functions 
    bool hasDateOfBirth() const { return this->dateOfBirth_ != nullptr;};
    void deleteDateOfBirth() { this->dateOfBirth_ = nullptr;};
    inline string getDateOfBirth() const { DARABONBA_PTR_GET_DEFAULT(dateOfBirth_, "") };
    inline InitializeRequest& setDateOfBirth(string dateOfBirth) { DARABONBA_PTR_SET_VALUE(dateOfBirth_, dateOfBirth) };


    // dateOfExpiry Field Functions 
    bool hasDateOfExpiry() const { return this->dateOfExpiry_ != nullptr;};
    void deleteDateOfExpiry() { this->dateOfExpiry_ = nullptr;};
    inline string getDateOfExpiry() const { DARABONBA_PTR_GET_DEFAULT(dateOfExpiry_, "") };
    inline InitializeRequest& setDateOfExpiry(string dateOfExpiry) { DARABONBA_PTR_SET_VALUE(dateOfExpiry_, dateOfExpiry) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline InitializeRequest& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // docNo Field Functions 
    bool hasDocNo() const { return this->docNo_ != nullptr;};
    void deleteDocNo() { this->docNo_ = nullptr;};
    inline string getDocNo() const { DARABONBA_PTR_GET_DEFAULT(docNo_, "") };
    inline InitializeRequest& setDocNo(string docNo) { DARABONBA_PTR_SET_VALUE(docNo_, docNo) };


    // docPageConfig Field Functions 
    bool hasDocPageConfig() const { return this->docPageConfig_ != nullptr;};
    void deleteDocPageConfig() { this->docPageConfig_ = nullptr;};
    inline const vector<string> & getDocPageConfig() const { DARABONBA_PTR_GET_CONST(docPageConfig_, vector<string>) };
    inline vector<string> getDocPageConfig() { DARABONBA_PTR_GET(docPageConfig_, vector<string>) };
    inline InitializeRequest& setDocPageConfig(const vector<string> & docPageConfig) { DARABONBA_PTR_SET_VALUE(docPageConfig_, docPageConfig) };
    inline InitializeRequest& setDocPageConfig(vector<string> && docPageConfig) { DARABONBA_PTR_SET_RVALUE(docPageConfig_, docPageConfig) };


    // docScanMode Field Functions 
    bool hasDocScanMode() const { return this->docScanMode_ != nullptr;};
    void deleteDocScanMode() { this->docScanMode_ = nullptr;};
    inline string getDocScanMode() const { DARABONBA_PTR_GET_DEFAULT(docScanMode_, "") };
    inline InitializeRequest& setDocScanMode(string docScanMode) { DARABONBA_PTR_SET_VALUE(docScanMode_, docScanMode) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline InitializeRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // docVideo Field Functions 
    bool hasDocVideo() const { return this->docVideo_ != nullptr;};
    void deleteDocVideo() { this->docVideo_ = nullptr;};
    inline string getDocVideo() const { DARABONBA_PTR_GET_DEFAULT(docVideo_, "") };
    inline InitializeRequest& setDocVideo(string docVideo) { DARABONBA_PTR_SET_VALUE(docVideo_, docVideo) };


    // documentNumber Field Functions 
    bool hasDocumentNumber() const { return this->documentNumber_ != nullptr;};
    void deleteDocumentNumber() { this->documentNumber_ = nullptr;};
    inline string getDocumentNumber() const { DARABONBA_PTR_GET_DEFAULT(documentNumber_, "") };
    inline InitializeRequest& setDocumentNumber(string documentNumber) { DARABONBA_PTR_SET_VALUE(documentNumber_, documentNumber) };


    // editOcrResult Field Functions 
    bool hasEditOcrResult() const { return this->editOcrResult_ != nullptr;};
    void deleteEditOcrResult() { this->editOcrResult_ = nullptr;};
    inline string getEditOcrResult() const { DARABONBA_PTR_GET_DEFAULT(editOcrResult_, "") };
    inline InitializeRequest& setEditOcrResult(string editOcrResult) { DARABONBA_PTR_SET_VALUE(editOcrResult_, editOcrResult) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline InitializeRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // experienceCode Field Functions 
    bool hasExperienceCode() const { return this->experienceCode_ != nullptr;};
    void deleteExperienceCode() { this->experienceCode_ = nullptr;};
    inline string getExperienceCode() const { DARABONBA_PTR_GET_DEFAULT(experienceCode_, "") };
    inline InitializeRequest& setExperienceCode(string experienceCode) { DARABONBA_PTR_SET_VALUE(experienceCode_, experienceCode) };


    // faceGroupCodes Field Functions 
    bool hasFaceGroupCodes() const { return this->faceGroupCodes_ != nullptr;};
    void deleteFaceGroupCodes() { this->faceGroupCodes_ = nullptr;};
    inline string getFaceGroupCodes() const { DARABONBA_PTR_GET_DEFAULT(faceGroupCodes_, "") };
    inline InitializeRequest& setFaceGroupCodes(string faceGroupCodes) { DARABONBA_PTR_SET_VALUE(faceGroupCodes_, faceGroupCodes) };


    // facePictureBase64 Field Functions 
    bool hasFacePictureBase64() const { return this->facePictureBase64_ != nullptr;};
    void deleteFacePictureBase64() { this->facePictureBase64_ = nullptr;};
    inline string getFacePictureBase64() const { DARABONBA_PTR_GET_DEFAULT(facePictureBase64_, "") };
    inline InitializeRequest& setFacePictureBase64(string facePictureBase64) { DARABONBA_PTR_SET_VALUE(facePictureBase64_, facePictureBase64) };


    // facePictureUrl Field Functions 
    bool hasFacePictureUrl() const { return this->facePictureUrl_ != nullptr;};
    void deleteFacePictureUrl() { this->facePictureUrl_ = nullptr;};
    inline string getFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(facePictureUrl_, "") };
    inline InitializeRequest& setFacePictureUrl(string facePictureUrl) { DARABONBA_PTR_SET_VALUE(facePictureUrl_, facePictureUrl) };


    // faceRegisterGroupCode Field Functions 
    bool hasFaceRegisterGroupCode() const { return this->faceRegisterGroupCode_ != nullptr;};
    void deleteFaceRegisterGroupCode() { this->faceRegisterGroupCode_ = nullptr;};
    inline string getFaceRegisterGroupCode() const { DARABONBA_PTR_GET_DEFAULT(faceRegisterGroupCode_, "") };
    inline InitializeRequest& setFaceRegisterGroupCode(string faceRegisterGroupCode) { DARABONBA_PTR_SET_VALUE(faceRegisterGroupCode_, faceRegisterGroupCode) };


    // faceVerifyThreshold Field Functions 
    bool hasFaceVerifyThreshold() const { return this->faceVerifyThreshold_ != nullptr;};
    void deleteFaceVerifyThreshold() { this->faceVerifyThreshold_ = nullptr;};
    inline string getFaceVerifyThreshold() const { DARABONBA_PTR_GET_DEFAULT(faceVerifyThreshold_, "") };
    inline InitializeRequest& setFaceVerifyThreshold(string faceVerifyThreshold) { DARABONBA_PTR_SET_VALUE(faceVerifyThreshold_, faceVerifyThreshold) };


    // idFaceQuality Field Functions 
    bool hasIdFaceQuality() const { return this->idFaceQuality_ != nullptr;};
    void deleteIdFaceQuality() { this->idFaceQuality_ = nullptr;};
    inline string getIdFaceQuality() const { DARABONBA_PTR_GET_DEFAULT(idFaceQuality_, "") };
    inline InitializeRequest& setIdFaceQuality(string idFaceQuality) { DARABONBA_PTR_SET_VALUE(idFaceQuality_, idFaceQuality) };


    // idSpoof Field Functions 
    bool hasIdSpoof() const { return this->idSpoof_ != nullptr;};
    void deleteIdSpoof() { this->idSpoof_ = nullptr;};
    inline string getIdSpoof() const { DARABONBA_PTR_GET_DEFAULT(idSpoof_, "") };
    inline InitializeRequest& setIdSpoof(string idSpoof) { DARABONBA_PTR_SET_VALUE(idSpoof_, idSpoof) };


    // idThreshold Field Functions 
    bool hasIdThreshold() const { return this->idThreshold_ != nullptr;};
    void deleteIdThreshold() { this->idThreshold_ = nullptr;};
    inline string getIdThreshold() const { DARABONBA_PTR_GET_DEFAULT(idThreshold_, "") };
    inline InitializeRequest& setIdThreshold(string idThreshold) { DARABONBA_PTR_SET_VALUE(idThreshold_, idThreshold) };


    // languageConfig Field Functions 
    bool hasLanguageConfig() const { return this->languageConfig_ != nullptr;};
    void deleteLanguageConfig() { this->languageConfig_ = nullptr;};
    inline string getLanguageConfig() const { DARABONBA_PTR_GET_DEFAULT(languageConfig_, "") };
    inline InitializeRequest& setLanguageConfig(string languageConfig) { DARABONBA_PTR_SET_VALUE(languageConfig_, languageConfig) };


    // MRTDInput Field Functions 
    bool hasMRTDInput() const { return this->MRTDInput_ != nullptr;};
    void deleteMRTDInput() { this->MRTDInput_ = nullptr;};
    inline string getMRTDInput() const { DARABONBA_PTR_GET_DEFAULT(MRTDInput_, "") };
    inline InitializeRequest& setMRTDInput(string MRTDInput) { DARABONBA_PTR_SET_VALUE(MRTDInput_, MRTDInput) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline InitializeRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline InitializeRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // metaInfo Field Functions 
    bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
    void deleteMetaInfo() { this->metaInfo_ = nullptr;};
    inline string getMetaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
    inline InitializeRequest& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline InitializeRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline InitializeRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // ocr Field Functions 
    bool hasOcr() const { return this->ocr_ != nullptr;};
    void deleteOcr() { this->ocr_ = nullptr;};
    inline string getOcr() const { DARABONBA_PTR_GET_DEFAULT(ocr_, "") };
    inline InitializeRequest& setOcr(string ocr) { DARABONBA_PTR_SET_VALUE(ocr_, ocr) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline string getPages() const { DARABONBA_PTR_GET_DEFAULT(pages_, "") };
    inline InitializeRequest& setPages(string pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


    // procedurePriority Field Functions 
    bool hasProcedurePriority() const { return this->procedurePriority_ != nullptr;};
    void deleteProcedurePriority() { this->procedurePriority_ = nullptr;};
    inline string getProcedurePriority() const { DARABONBA_PTR_GET_DEFAULT(procedurePriority_, "") };
    inline InitializeRequest& setProcedurePriority(string procedurePriority) { DARABONBA_PTR_SET_VALUE(procedurePriority_, procedurePriority) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline InitializeRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productFlow Field Functions 
    bool hasProductFlow() const { return this->productFlow_ != nullptr;};
    void deleteProductFlow() { this->productFlow_ = nullptr;};
    inline string getProductFlow() const { DARABONBA_PTR_GET_DEFAULT(productFlow_, "") };
    inline InitializeRequest& setProductFlow(string productFlow) { DARABONBA_PTR_SET_VALUE(productFlow_, productFlow) };


    // returnFaces Field Functions 
    bool hasReturnFaces() const { return this->returnFaces_ != nullptr;};
    void deleteReturnFaces() { this->returnFaces_ = nullptr;};
    inline string getReturnFaces() const { DARABONBA_PTR_GET_DEFAULT(returnFaces_, "") };
    inline InitializeRequest& setReturnFaces(string returnFaces) { DARABONBA_PTR_SET_VALUE(returnFaces_, returnFaces) };


    // returnUrl Field Functions 
    bool hasReturnUrl() const { return this->returnUrl_ != nullptr;};
    void deleteReturnUrl() { this->returnUrl_ = nullptr;};
    inline string getReturnUrl() const { DARABONBA_PTR_GET_DEFAULT(returnUrl_, "") };
    inline InitializeRequest& setReturnUrl(string returnUrl) { DARABONBA_PTR_SET_VALUE(returnUrl_, returnUrl) };


    // saveFacePicture Field Functions 
    bool hasSaveFacePicture() const { return this->saveFacePicture_ != nullptr;};
    void deleteSaveFacePicture() { this->saveFacePicture_ = nullptr;};
    inline string getSaveFacePicture() const { DARABONBA_PTR_GET_DEFAULT(saveFacePicture_, "") };
    inline InitializeRequest& setSaveFacePicture(string saveFacePicture) { DARABONBA_PTR_SET_VALUE(saveFacePicture_, saveFacePicture) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline InitializeRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline string getSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
    inline InitializeRequest& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


    // showAlbumIcon Field Functions 
    bool hasShowAlbumIcon() const { return this->showAlbumIcon_ != nullptr;};
    void deleteShowAlbumIcon() { this->showAlbumIcon_ = nullptr;};
    inline string getShowAlbumIcon() const { DARABONBA_PTR_GET_DEFAULT(showAlbumIcon_, "") };
    inline InitializeRequest& setShowAlbumIcon(string showAlbumIcon) { DARABONBA_PTR_SET_VALUE(showAlbumIcon_, showAlbumIcon) };


    // showGuidePage Field Functions 
    bool hasShowGuidePage() const { return this->showGuidePage_ != nullptr;};
    void deleteShowGuidePage() { this->showGuidePage_ = nullptr;};
    inline string getShowGuidePage() const { DARABONBA_PTR_GET_DEFAULT(showGuidePage_, "") };
    inline InitializeRequest& setShowGuidePage(string showGuidePage) { DARABONBA_PTR_SET_VALUE(showGuidePage_, showGuidePage) };


    // showOcrResult Field Functions 
    bool hasShowOcrResult() const { return this->showOcrResult_ != nullptr;};
    void deleteShowOcrResult() { this->showOcrResult_ = nullptr;};
    inline string getShowOcrResult() const { DARABONBA_PTR_GET_DEFAULT(showOcrResult_, "") };
    inline InitializeRequest& setShowOcrResult(string showOcrResult) { DARABONBA_PTR_SET_VALUE(showOcrResult_, showOcrResult) };


    // styleConfig Field Functions 
    bool hasStyleConfig() const { return this->styleConfig_ != nullptr;};
    void deleteStyleConfig() { this->styleConfig_ = nullptr;};
    inline string getStyleConfig() const { DARABONBA_PTR_GET_DEFAULT(styleConfig_, "") };
    inline InitializeRequest& setStyleConfig(string styleConfig) { DARABONBA_PTR_SET_VALUE(styleConfig_, styleConfig) };


    // targetFacePicture Field Functions 
    bool hasTargetFacePicture() const { return this->targetFacePicture_ != nullptr;};
    void deleteTargetFacePicture() { this->targetFacePicture_ = nullptr;};
    inline string getTargetFacePicture() const { DARABONBA_PTR_GET_DEFAULT(targetFacePicture_, "") };
    inline InitializeRequest& setTargetFacePicture(string targetFacePicture) { DARABONBA_PTR_SET_VALUE(targetFacePicture_, targetFacePicture) };


    // targetFacePictureUrl Field Functions 
    bool hasTargetFacePictureUrl() const { return this->targetFacePictureUrl_ != nullptr;};
    void deleteTargetFacePictureUrl() { this->targetFacePictureUrl_ = nullptr;};
    inline string getTargetFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(targetFacePictureUrl_, "") };
    inline InitializeRequest& setTargetFacePictureUrl(string targetFacePictureUrl) { DARABONBA_PTR_SET_VALUE(targetFacePictureUrl_, targetFacePictureUrl) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline InitializeRequest& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateRanCount Field Functions 
    bool hasTemplateRanCount() const { return this->templateRanCount_ != nullptr;};
    void deleteTemplateRanCount() { this->templateRanCount_ = nullptr;};
    inline string getTemplateRanCount() const { DARABONBA_PTR_GET_DEFAULT(templateRanCount_, "") };
    inline InitializeRequest& setTemplateRanCount(string templateRanCount) { DARABONBA_PTR_SET_VALUE(templateRanCount_, templateRanCount) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline InitializeRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // useNFC Field Functions 
    bool hasUseNFC() const { return this->useNFC_ != nullptr;};
    void deleteUseNFC() { this->useNFC_ = nullptr;};
    inline string getUseNFC() const { DARABONBA_PTR_GET_DEFAULT(useNFC_, "") };
    inline InitializeRequest& setUseNFC(string useNFC) { DARABONBA_PTR_SET_VALUE(useNFC_, useNFC) };


    // verifyModel Field Functions 
    bool hasVerifyModel() const { return this->verifyModel_ != nullptr;};
    void deleteVerifyModel() { this->verifyModel_ = nullptr;};
    inline string getVerifyModel() const { DARABONBA_PTR_GET_DEFAULT(verifyModel_, "") };
    inline InitializeRequest& setVerifyModel(string verifyModel) { DARABONBA_PTR_SET_VALUE(verifyModel_, verifyModel) };


  protected:
    // <warning>This feature is not supported by **Web SDK**. Please refer to the App SDK integration if needed.</warning>
    // 
    // Whether to enable strict face quality check:
    // - Y: Enabled (default)
    // - N: Disabled
    shared_ptr<string> appQualityCheck_ {};
    // Whether to enable authoritative identity verification, currently applicable only to the second-generation ID card in mainland China. (IDV product input parameter)
    shared_ptr<string> authorize_ {};
    // Whether to enable automatic registration
    shared_ptr<string> autoRegistration_ {};
    // Security token used for preventing duplication and tampering. If this parameter is passed, the CallbackToken field will be displayed in the callback URL.
    shared_ptr<string> callbackToken_ {};
    // Callback notification URL for authentication results. The default callback request method is GET, and the callback URL must start with https. After completing the authentication, the platform will call back this URL and automatically add the transactionId, passed, and subcode fields.
    shared_ptr<string> callbackUrl_ {};
    // Whether to enable adaptive color-changing window border
    // - **Y**: Enabled
    // - **N**: Disabled
    shared_ptr<string> chameleonFrameEnable_ {};
    // Whether to crop. (IDV product input parameter)
    shared_ptr<string> crop_ {};
    // Date of birth on the document
    // 
    // **MRTDInput = 2** is required.
    shared_ptr<string> dateOfBirth_ {};
    // Expiration date on the document
    // 
    // **MRTDInput = 2** is required.
    shared_ptr<string> dateOfExpiry_ {};
    // The real name of the user.
    shared_ptr<string> docName_ {};
    // User\\"s document number.
    shared_ptr<string> docNo_ {};
    // Customer-defined input for whether to capture additional pages
    shared_ptr<vector<string>> docPageConfig_ {};
    // Document capture mode.
    // 
    // - manual: Manual capture.
    // - auto: Automatic capture (default)
    shared_ptr<string> docScanMode_ {};
    // Document type
    // > For eKYC_PRO and ID_OCR_MAX solutions, see the official documentation: https://www.alibabacloud.com/help/zh/ekyc/latest/certificate-code-table?spm=a2c63.p38356.help-menu-445633.d_2_8_2_0.279147abwKAWbr
    // 
    // > For ID_OCR, eKYC, and eYKC_MIN solutions, see the official documentation: Document Type List https://www.alibabacloud.com/help/zh/ekyc/latest/gnhekqy05ni51m4c?spm=a2c63.p38356.help-menu-445633.d_2_3_1_0_0_0.6243244777KoZ7
    shared_ptr<string> docType_ {};
    // Whether to require evidence video.
    // 
    // - N: Not required (default).
    // 
    // - Y: During the authentication process, a 1-2 second video of the user\\"s face will be captured and returned via the query interface.
    // 
    // > Due to the large size of video files, the system may discard them in case of network instability, prioritizing the transmission of necessary images for authentication.
    shared_ptr<string> docVideo_ {};
    // Document number
    // 
    // **MRTDInput = 2** is required.
    shared_ptr<string> documentNumber_ {};
    // Whether the OCR result page is editable in the document OCR recognition process:
    // 
    // - **0**: Not editable
    // 
    // - **1** (default): Editable
    shared_ptr<string> editOcrResult_ {};
    // Enter an Indonesian email address. This field is only effective when Authorize=T.
    // 
    // > 
    // > - This field is required only when the Indonesian data source is enabled.
    shared_ptr<string> email_ {};
    // Experience code
    shared_ptr<string> experienceCode_ {};
    // The face library to be compared
    shared_ptr<string> faceGroupCodes_ {};
    // Base64 encoded photo. If you choose to pass the face photo via FacePictureBase64, please check the photo size and avoid uploading overly large photos.
    shared_ptr<string> facePictureBase64_ {};
    // URL of the face photo. A publicly accessible HTTP or HTTPS link.
    shared_ptr<string> facePictureUrl_ {};
    // Face library for registration.
    shared_ptr<string> faceRegisterGroupCode_ {};
    // Face verification threshold
    shared_ptr<string> faceVerifyThreshold_ {};
    // Face image quality. (IDV product input parameter)
    shared_ptr<string> idFaceQuality_ {};
    // Whether to enable certificate anti-counterfeiting detection. (IDV product input parameter)
    shared_ptr<string> idSpoof_ {};
    // Custom OCR quality check threshold mode:
    // - **0**: Standard mode
    // - **1**: Strict mode
    // - **2**: Lenient mode
    // - **3** (default): Quality check disabled
    shared_ptr<string> idThreshold_ {};
    // Language configuration. (IDV product input parameter)
    shared_ptr<string> languageConfig_ {};
    // Source of MRTD verification parameters. This parameter is required for decrypting information when reading the document chip via NFC.
    // 
    // - **0**: User input
    // 
    // - **1**: OCR read
    // 
    // - **2**: Passed through the interface
    shared_ptr<string> MRTDInput_ {};
    // A unique business identifier defined by the merchant, used for subsequent troubleshooting. It supports a combination of letters and numbers, with a maximum length of 32 characters. Ensure its uniqueness.
    shared_ptr<string> merchantBizId_ {};
    // Your custom user ID or other identifiers that can uniquely identify a specific user, such as a phone number or email address. It is strongly recommended to pre-desensitize the value of this field, for example, by hashing it.
    shared_ptr<string> merchantUserId_ {};
    // Metainfo environment parameter, which needs to be obtained through the client SDK.
    shared_ptr<string> metaInfo_ {};
    // Enter an Indonesian phone number, which must be in the format (starting with +62, followed by 9-11 digits). This field is only effective when Authorize=T.
    // 
    // > 
    // > - This field is required only when the Indonesian data source is enabled.
    shared_ptr<string> mobile_ {};
    // Type of liveness detection to be performed:
    // 
    // - **LIVENESS** (default): Blinking action liveness detection.
    // 
    // - **PHOTINUS_LIVENESS**: Dual liveness detection with blinking action and photinus liveness.
    // 
    // > 
    // > - For supported SDK versions, see [SDK Release Records](https://www.alibabacloud.com/help/zh/ekyc/latest/sdk-publishing-record?spm=a2c63.p38356.0.i99).
    // > - PC does not support dual liveness detection with photinus.
    shared_ptr<string> model_ {};
    // Whether to enable OCR. (IDV product input parameter)
    shared_ptr<string> ocr_ {};
    // Page configuration for collection, multiple pages are connected using commas. Value range:
    // - **01**: Front side of the document
    // 
    // - **01,02**: Front and back sides of the document
    // 
    // > When this value is set to 01,02, it currently only supports Chinese and Vietnamese IDs.
    shared_ptr<string> pages_ {};
    // When compatibility issues occur with H5-based mobile authentication, whether to allow a fallback handling method.
    // 
    // - **url** (default): Fallback supported. The page displays the authentication URL, which users can copy and open or switch browsers to continue the authentication process.
    // 
    // - **keep**: Fallback not supported. The error reason is returned directly, and the authentication process ends.
    // 
    // 
    // > 
    // > - This switch is not supported on PC.
    // > - If the business scenario involves completing authentication within an embedded web page in an app, it is recommended to set this parameter to keep, disallowing URL fallback.
    shared_ptr<string> procedurePriority_ {};
    // The product solution to be integrated
    // > For more details, see the official documentation: https://www.alibabacloud.com/help/zh/ekyc/latest/product-introduction?spm=a2c63.p38356.0.i1
    shared_ptr<string> productCode_ {};
    // Supports card and face sequence arrangement:
    // 
    // - DOC_FACE (default)
    // - FACE_DOC
    // 
    // Note: This parameter is required only when ProductCode is KYC_GLOBAL.
    shared_ptr<string> productFlow_ {};
    // Number of duplicate faces returned
    shared_ptr<string> returnFaces_ {};
    // Callback URL on the client side.
    shared_ptr<string> returnUrl_ {};
    // Whether to save the face image
    shared_ptr<string> saveFacePicture_ {};
    // Scene code. (IDV product input parameter)
    shared_ptr<string> sceneCode_ {};
    // Represents different security levels in the authentication process. Available values:
    // 
    // 01: Normal mode (default).
    // 02: Secure mode, a relatively strict mode suitable for high-risk scenarios. (IDV product input parameter)
    shared_ptr<string> securityLevel_ {};
    // Whether to display the album upload entry during the document OCR recognition phase:
    // 
    // - **1**: Display (default)
    // 
    // - **0**: Do not display
    shared_ptr<string> showAlbumIcon_ {};
    // Switch for displaying the guide page:
    // 
    // - **1**: Display (default)
    // 
    // - **0**: Do not display
    shared_ptr<string> showGuidePage_ {};
    // Whether to display the recognition result page during the document OCR recognition phase:
    // 
    // - **1**: Display (default)
    // 
    // - **0**: Do not display
    shared_ptr<string> showOcrResult_ {};
    // Custom UI configuration. Based on the configuration template, convert your custom UI settings into a JSON string and pass it through this interface. For more information, see [IDV UI Customization](https://www.alibabacloud.com/help/zh/ekyc/latest/idv-kyc-custom-skin?spm=a2c63.p38356.0.i60).
    shared_ptr<string> styleConfig_ {};
    // Base64 encoding of the portrait photo.
    shared_ptr<string> targetFacePicture_ {};
    // Portrait image URL, accessible via HTTP or HTTPS on the public network.
    shared_ptr<string> targetFacePictureUrl_ {};
    shared_ptr<string> templateConfig_ {};
    shared_ptr<string> templateRanCount_ {};
    shared_ptr<string> templateType_ {};
    // Optional to enable NFC verification when **DocType**=01000000 (global passport).
    // - **Y** (Enabled)
    // - **N** (Disabled)
    shared_ptr<string> useNFC_ {};
    // The type of verification
    shared_ptr<string> verifyModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
