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
      DARABONBA_PTR_TO_JSON(ExperienceCode, experienceCode_);
      DARABONBA_PTR_TO_JSON(FacePictureBase64, facePictureBase64_);
      DARABONBA_PTR_TO_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_TO_JSON(IdFaceQuality, idFaceQuality_);
      DARABONBA_PTR_TO_JSON(IdSpoof, idSpoof_);
      DARABONBA_PTR_TO_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_TO_JSON(LanguageConfig, languageConfig_);
      DARABONBA_PTR_TO_JSON(MRTDInput, MRTDInput_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Ocr, ocr_);
      DARABONBA_PTR_TO_JSON(Pages, pages_);
      DARABONBA_PTR_TO_JSON(ProcedurePriority, procedurePriority_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductFlow, productFlow_);
      DARABONBA_PTR_TO_JSON(ReturnUrl, returnUrl_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_TO_JSON(ShowAlbumIcon, showAlbumIcon_);
      DARABONBA_PTR_TO_JSON(ShowGuidePage, showGuidePage_);
      DARABONBA_PTR_TO_JSON(ShowOcrResult, showOcrResult_);
      DARABONBA_PTR_TO_JSON(StyleConfig, styleConfig_);
      DARABONBA_PTR_TO_JSON(UseNFC, useNFC_);
    };
    friend void from_json(const Darabonba::Json& j, InitializeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppQualityCheck, appQualityCheck_);
      DARABONBA_PTR_FROM_JSON(Authorize, authorize_);
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
      DARABONBA_PTR_FROM_JSON(ExperienceCode, experienceCode_);
      DARABONBA_PTR_FROM_JSON(FacePictureBase64, facePictureBase64_);
      DARABONBA_PTR_FROM_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_FROM_JSON(IdFaceQuality, idFaceQuality_);
      DARABONBA_PTR_FROM_JSON(IdSpoof, idSpoof_);
      DARABONBA_PTR_FROM_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_FROM_JSON(LanguageConfig, languageConfig_);
      DARABONBA_PTR_FROM_JSON(MRTDInput, MRTDInput_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Ocr, ocr_);
      DARABONBA_PTR_FROM_JSON(Pages, pages_);
      DARABONBA_PTR_FROM_JSON(ProcedurePriority, procedurePriority_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductFlow, productFlow_);
      DARABONBA_PTR_FROM_JSON(ReturnUrl, returnUrl_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_FROM_JSON(ShowAlbumIcon, showAlbumIcon_);
      DARABONBA_PTR_FROM_JSON(ShowGuidePage, showGuidePage_);
      DARABONBA_PTR_FROM_JSON(ShowOcrResult, showOcrResult_);
      DARABONBA_PTR_FROM_JSON(StyleConfig, styleConfig_);
      DARABONBA_PTR_FROM_JSON(UseNFC, useNFC_);
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
    virtual bool empty() const override { this->appQualityCheck_ != nullptr
        && this->authorize_ != nullptr && this->callbackToken_ != nullptr && this->callbackUrl_ != nullptr && this->chameleonFrameEnable_ != nullptr && this->crop_ != nullptr
        && this->dateOfBirth_ != nullptr && this->dateOfExpiry_ != nullptr && this->docName_ != nullptr && this->docNo_ != nullptr && this->docPageConfig_ != nullptr
        && this->docScanMode_ != nullptr && this->docType_ != nullptr && this->docVideo_ != nullptr && this->documentNumber_ != nullptr && this->experienceCode_ != nullptr
        && this->facePictureBase64_ != nullptr && this->facePictureUrl_ != nullptr && this->idFaceQuality_ != nullptr && this->idSpoof_ != nullptr && this->idThreshold_ != nullptr
        && this->languageConfig_ != nullptr && this->MRTDInput_ != nullptr && this->merchantBizId_ != nullptr && this->merchantUserId_ != nullptr && this->metaInfo_ != nullptr
        && this->model_ != nullptr && this->ocr_ != nullptr && this->pages_ != nullptr && this->procedurePriority_ != nullptr && this->productCode_ != nullptr
        && this->productFlow_ != nullptr && this->returnUrl_ != nullptr && this->sceneCode_ != nullptr && this->securityLevel_ != nullptr && this->showAlbumIcon_ != nullptr
        && this->showGuidePage_ != nullptr && this->showOcrResult_ != nullptr && this->styleConfig_ != nullptr && this->useNFC_ != nullptr; };
    // appQualityCheck Field Functions 
    bool hasAppQualityCheck() const { return this->appQualityCheck_ != nullptr;};
    void deleteAppQualityCheck() { this->appQualityCheck_ = nullptr;};
    inline string appQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(appQualityCheck_, "") };
    inline InitializeRequest& setAppQualityCheck(string appQualityCheck) { DARABONBA_PTR_SET_VALUE(appQualityCheck_, appQualityCheck) };


    // authorize Field Functions 
    bool hasAuthorize() const { return this->authorize_ != nullptr;};
    void deleteAuthorize() { this->authorize_ = nullptr;};
    inline string authorize() const { DARABONBA_PTR_GET_DEFAULT(authorize_, "") };
    inline InitializeRequest& setAuthorize(string authorize) { DARABONBA_PTR_SET_VALUE(authorize_, authorize) };


    // callbackToken Field Functions 
    bool hasCallbackToken() const { return this->callbackToken_ != nullptr;};
    void deleteCallbackToken() { this->callbackToken_ = nullptr;};
    inline string callbackToken() const { DARABONBA_PTR_GET_DEFAULT(callbackToken_, "") };
    inline InitializeRequest& setCallbackToken(string callbackToken) { DARABONBA_PTR_SET_VALUE(callbackToken_, callbackToken) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline InitializeRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // chameleonFrameEnable Field Functions 
    bool hasChameleonFrameEnable() const { return this->chameleonFrameEnable_ != nullptr;};
    void deleteChameleonFrameEnable() { this->chameleonFrameEnable_ = nullptr;};
    inline string chameleonFrameEnable() const { DARABONBA_PTR_GET_DEFAULT(chameleonFrameEnable_, "") };
    inline InitializeRequest& setChameleonFrameEnable(string chameleonFrameEnable) { DARABONBA_PTR_SET_VALUE(chameleonFrameEnable_, chameleonFrameEnable) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string crop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline InitializeRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // dateOfBirth Field Functions 
    bool hasDateOfBirth() const { return this->dateOfBirth_ != nullptr;};
    void deleteDateOfBirth() { this->dateOfBirth_ = nullptr;};
    inline string dateOfBirth() const { DARABONBA_PTR_GET_DEFAULT(dateOfBirth_, "") };
    inline InitializeRequest& setDateOfBirth(string dateOfBirth) { DARABONBA_PTR_SET_VALUE(dateOfBirth_, dateOfBirth) };


    // dateOfExpiry Field Functions 
    bool hasDateOfExpiry() const { return this->dateOfExpiry_ != nullptr;};
    void deleteDateOfExpiry() { this->dateOfExpiry_ = nullptr;};
    inline string dateOfExpiry() const { DARABONBA_PTR_GET_DEFAULT(dateOfExpiry_, "") };
    inline InitializeRequest& setDateOfExpiry(string dateOfExpiry) { DARABONBA_PTR_SET_VALUE(dateOfExpiry_, dateOfExpiry) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string docName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline InitializeRequest& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // docNo Field Functions 
    bool hasDocNo() const { return this->docNo_ != nullptr;};
    void deleteDocNo() { this->docNo_ = nullptr;};
    inline string docNo() const { DARABONBA_PTR_GET_DEFAULT(docNo_, "") };
    inline InitializeRequest& setDocNo(string docNo) { DARABONBA_PTR_SET_VALUE(docNo_, docNo) };


    // docPageConfig Field Functions 
    bool hasDocPageConfig() const { return this->docPageConfig_ != nullptr;};
    void deleteDocPageConfig() { this->docPageConfig_ = nullptr;};
    inline const vector<string> & docPageConfig() const { DARABONBA_PTR_GET_CONST(docPageConfig_, vector<string>) };
    inline vector<string> docPageConfig() { DARABONBA_PTR_GET(docPageConfig_, vector<string>) };
    inline InitializeRequest& setDocPageConfig(const vector<string> & docPageConfig) { DARABONBA_PTR_SET_VALUE(docPageConfig_, docPageConfig) };
    inline InitializeRequest& setDocPageConfig(vector<string> && docPageConfig) { DARABONBA_PTR_SET_RVALUE(docPageConfig_, docPageConfig) };


    // docScanMode Field Functions 
    bool hasDocScanMode() const { return this->docScanMode_ != nullptr;};
    void deleteDocScanMode() { this->docScanMode_ = nullptr;};
    inline string docScanMode() const { DARABONBA_PTR_GET_DEFAULT(docScanMode_, "") };
    inline InitializeRequest& setDocScanMode(string docScanMode) { DARABONBA_PTR_SET_VALUE(docScanMode_, docScanMode) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string docType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline InitializeRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // docVideo Field Functions 
    bool hasDocVideo() const { return this->docVideo_ != nullptr;};
    void deleteDocVideo() { this->docVideo_ = nullptr;};
    inline string docVideo() const { DARABONBA_PTR_GET_DEFAULT(docVideo_, "") };
    inline InitializeRequest& setDocVideo(string docVideo) { DARABONBA_PTR_SET_VALUE(docVideo_, docVideo) };


    // documentNumber Field Functions 
    bool hasDocumentNumber() const { return this->documentNumber_ != nullptr;};
    void deleteDocumentNumber() { this->documentNumber_ = nullptr;};
    inline string documentNumber() const { DARABONBA_PTR_GET_DEFAULT(documentNumber_, "") };
    inline InitializeRequest& setDocumentNumber(string documentNumber) { DARABONBA_PTR_SET_VALUE(documentNumber_, documentNumber) };


    // experienceCode Field Functions 
    bool hasExperienceCode() const { return this->experienceCode_ != nullptr;};
    void deleteExperienceCode() { this->experienceCode_ = nullptr;};
    inline string experienceCode() const { DARABONBA_PTR_GET_DEFAULT(experienceCode_, "") };
    inline InitializeRequest& setExperienceCode(string experienceCode) { DARABONBA_PTR_SET_VALUE(experienceCode_, experienceCode) };


    // facePictureBase64 Field Functions 
    bool hasFacePictureBase64() const { return this->facePictureBase64_ != nullptr;};
    void deleteFacePictureBase64() { this->facePictureBase64_ = nullptr;};
    inline string facePictureBase64() const { DARABONBA_PTR_GET_DEFAULT(facePictureBase64_, "") };
    inline InitializeRequest& setFacePictureBase64(string facePictureBase64) { DARABONBA_PTR_SET_VALUE(facePictureBase64_, facePictureBase64) };


    // facePictureUrl Field Functions 
    bool hasFacePictureUrl() const { return this->facePictureUrl_ != nullptr;};
    void deleteFacePictureUrl() { this->facePictureUrl_ = nullptr;};
    inline string facePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(facePictureUrl_, "") };
    inline InitializeRequest& setFacePictureUrl(string facePictureUrl) { DARABONBA_PTR_SET_VALUE(facePictureUrl_, facePictureUrl) };


    // idFaceQuality Field Functions 
    bool hasIdFaceQuality() const { return this->idFaceQuality_ != nullptr;};
    void deleteIdFaceQuality() { this->idFaceQuality_ = nullptr;};
    inline string idFaceQuality() const { DARABONBA_PTR_GET_DEFAULT(idFaceQuality_, "") };
    inline InitializeRequest& setIdFaceQuality(string idFaceQuality) { DARABONBA_PTR_SET_VALUE(idFaceQuality_, idFaceQuality) };


    // idSpoof Field Functions 
    bool hasIdSpoof() const { return this->idSpoof_ != nullptr;};
    void deleteIdSpoof() { this->idSpoof_ = nullptr;};
    inline string idSpoof() const { DARABONBA_PTR_GET_DEFAULT(idSpoof_, "") };
    inline InitializeRequest& setIdSpoof(string idSpoof) { DARABONBA_PTR_SET_VALUE(idSpoof_, idSpoof) };


    // idThreshold Field Functions 
    bool hasIdThreshold() const { return this->idThreshold_ != nullptr;};
    void deleteIdThreshold() { this->idThreshold_ = nullptr;};
    inline string idThreshold() const { DARABONBA_PTR_GET_DEFAULT(idThreshold_, "") };
    inline InitializeRequest& setIdThreshold(string idThreshold) { DARABONBA_PTR_SET_VALUE(idThreshold_, idThreshold) };


    // languageConfig Field Functions 
    bool hasLanguageConfig() const { return this->languageConfig_ != nullptr;};
    void deleteLanguageConfig() { this->languageConfig_ = nullptr;};
    inline string languageConfig() const { DARABONBA_PTR_GET_DEFAULT(languageConfig_, "") };
    inline InitializeRequest& setLanguageConfig(string languageConfig) { DARABONBA_PTR_SET_VALUE(languageConfig_, languageConfig) };


    // MRTDInput Field Functions 
    bool hasMRTDInput() const { return this->MRTDInput_ != nullptr;};
    void deleteMRTDInput() { this->MRTDInput_ = nullptr;};
    inline string MRTDInput() const { DARABONBA_PTR_GET_DEFAULT(MRTDInput_, "") };
    inline InitializeRequest& setMRTDInput(string MRTDInput) { DARABONBA_PTR_SET_VALUE(MRTDInput_, MRTDInput) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string merchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline InitializeRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string merchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline InitializeRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // metaInfo Field Functions 
    bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
    void deleteMetaInfo() { this->metaInfo_ = nullptr;};
    inline string metaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
    inline InitializeRequest& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline InitializeRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // ocr Field Functions 
    bool hasOcr() const { return this->ocr_ != nullptr;};
    void deleteOcr() { this->ocr_ = nullptr;};
    inline string ocr() const { DARABONBA_PTR_GET_DEFAULT(ocr_, "") };
    inline InitializeRequest& setOcr(string ocr) { DARABONBA_PTR_SET_VALUE(ocr_, ocr) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline string pages() const { DARABONBA_PTR_GET_DEFAULT(pages_, "") };
    inline InitializeRequest& setPages(string pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


    // procedurePriority Field Functions 
    bool hasProcedurePriority() const { return this->procedurePriority_ != nullptr;};
    void deleteProcedurePriority() { this->procedurePriority_ = nullptr;};
    inline string procedurePriority() const { DARABONBA_PTR_GET_DEFAULT(procedurePriority_, "") };
    inline InitializeRequest& setProcedurePriority(string procedurePriority) { DARABONBA_PTR_SET_VALUE(procedurePriority_, procedurePriority) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline InitializeRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productFlow Field Functions 
    bool hasProductFlow() const { return this->productFlow_ != nullptr;};
    void deleteProductFlow() { this->productFlow_ = nullptr;};
    inline string productFlow() const { DARABONBA_PTR_GET_DEFAULT(productFlow_, "") };
    inline InitializeRequest& setProductFlow(string productFlow) { DARABONBA_PTR_SET_VALUE(productFlow_, productFlow) };


    // returnUrl Field Functions 
    bool hasReturnUrl() const { return this->returnUrl_ != nullptr;};
    void deleteReturnUrl() { this->returnUrl_ = nullptr;};
    inline string returnUrl() const { DARABONBA_PTR_GET_DEFAULT(returnUrl_, "") };
    inline InitializeRequest& setReturnUrl(string returnUrl) { DARABONBA_PTR_SET_VALUE(returnUrl_, returnUrl) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline InitializeRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline string securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
    inline InitializeRequest& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


    // showAlbumIcon Field Functions 
    bool hasShowAlbumIcon() const { return this->showAlbumIcon_ != nullptr;};
    void deleteShowAlbumIcon() { this->showAlbumIcon_ = nullptr;};
    inline string showAlbumIcon() const { DARABONBA_PTR_GET_DEFAULT(showAlbumIcon_, "") };
    inline InitializeRequest& setShowAlbumIcon(string showAlbumIcon) { DARABONBA_PTR_SET_VALUE(showAlbumIcon_, showAlbumIcon) };


    // showGuidePage Field Functions 
    bool hasShowGuidePage() const { return this->showGuidePage_ != nullptr;};
    void deleteShowGuidePage() { this->showGuidePage_ = nullptr;};
    inline string showGuidePage() const { DARABONBA_PTR_GET_DEFAULT(showGuidePage_, "") };
    inline InitializeRequest& setShowGuidePage(string showGuidePage) { DARABONBA_PTR_SET_VALUE(showGuidePage_, showGuidePage) };


    // showOcrResult Field Functions 
    bool hasShowOcrResult() const { return this->showOcrResult_ != nullptr;};
    void deleteShowOcrResult() { this->showOcrResult_ = nullptr;};
    inline string showOcrResult() const { DARABONBA_PTR_GET_DEFAULT(showOcrResult_, "") };
    inline InitializeRequest& setShowOcrResult(string showOcrResult) { DARABONBA_PTR_SET_VALUE(showOcrResult_, showOcrResult) };


    // styleConfig Field Functions 
    bool hasStyleConfig() const { return this->styleConfig_ != nullptr;};
    void deleteStyleConfig() { this->styleConfig_ = nullptr;};
    inline string styleConfig() const { DARABONBA_PTR_GET_DEFAULT(styleConfig_, "") };
    inline InitializeRequest& setStyleConfig(string styleConfig) { DARABONBA_PTR_SET_VALUE(styleConfig_, styleConfig) };


    // useNFC Field Functions 
    bool hasUseNFC() const { return this->useNFC_ != nullptr;};
    void deleteUseNFC() { this->useNFC_ = nullptr;};
    inline string useNFC() const { DARABONBA_PTR_GET_DEFAULT(useNFC_, "") };
    inline InitializeRequest& setUseNFC(string useNFC) { DARABONBA_PTR_SET_VALUE(useNFC_, useNFC) };


  protected:
    std::shared_ptr<string> appQualityCheck_ = nullptr;
    std::shared_ptr<string> authorize_ = nullptr;
    std::shared_ptr<string> callbackToken_ = nullptr;
    std::shared_ptr<string> callbackUrl_ = nullptr;
    std::shared_ptr<string> chameleonFrameEnable_ = nullptr;
    std::shared_ptr<string> crop_ = nullptr;
    std::shared_ptr<string> dateOfBirth_ = nullptr;
    std::shared_ptr<string> dateOfExpiry_ = nullptr;
    std::shared_ptr<string> docName_ = nullptr;
    std::shared_ptr<string> docNo_ = nullptr;
    std::shared_ptr<vector<string>> docPageConfig_ = nullptr;
    std::shared_ptr<string> docScanMode_ = nullptr;
    std::shared_ptr<string> docType_ = nullptr;
    std::shared_ptr<string> docVideo_ = nullptr;
    std::shared_ptr<string> documentNumber_ = nullptr;
    std::shared_ptr<string> experienceCode_ = nullptr;
    std::shared_ptr<string> facePictureBase64_ = nullptr;
    std::shared_ptr<string> facePictureUrl_ = nullptr;
    std::shared_ptr<string> idFaceQuality_ = nullptr;
    std::shared_ptr<string> idSpoof_ = nullptr;
    std::shared_ptr<string> idThreshold_ = nullptr;
    std::shared_ptr<string> languageConfig_ = nullptr;
    std::shared_ptr<string> MRTDInput_ = nullptr;
    std::shared_ptr<string> merchantBizId_ = nullptr;
    std::shared_ptr<string> merchantUserId_ = nullptr;
    std::shared_ptr<string> metaInfo_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    // OCR。
    std::shared_ptr<string> ocr_ = nullptr;
    std::shared_ptr<string> pages_ = nullptr;
    std::shared_ptr<string> procedurePriority_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productFlow_ = nullptr;
    std::shared_ptr<string> returnUrl_ = nullptr;
    std::shared_ptr<string> sceneCode_ = nullptr;
    std::shared_ptr<string> securityLevel_ = nullptr;
    std::shared_ptr<string> showAlbumIcon_ = nullptr;
    std::shared_ptr<string> showGuidePage_ = nullptr;
    std::shared_ptr<string> showOcrResult_ = nullptr;
    std::shared_ptr<string> styleConfig_ = nullptr;
    std::shared_ptr<string> useNFC_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
