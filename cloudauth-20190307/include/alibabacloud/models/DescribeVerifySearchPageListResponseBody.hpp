// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYSEARCHPAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYSEARCHPAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifySearchPageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifySearchPageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifySearchPageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeVerifySearchPageListResponseBody() = default ;
    DescribeVerifySearchPageListResponseBody(const DescribeVerifySearchPageListResponseBody &) = default ;
    DescribeVerifySearchPageListResponseBody(DescribeVerifySearchPageListResponseBody &&) = default ;
    DescribeVerifySearchPageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifySearchPageListResponseBody() = default ;
    DescribeVerifySearchPageListResponseBody& operator=(const DescribeVerifySearchPageListResponseBody &) = default ;
    DescribeVerifySearchPageListResponseBody& operator=(DescribeVerifySearchPageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CertNo, certNo_);
        DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_TO_JSON(GmtVerify, gmtVerify_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(OuterOrderNo, outerOrderNo_);
        DARABONBA_PTR_TO_JSON(Passed, passed_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(RiskBizScenario, riskBizScenario_);
        DARABONBA_PTR_TO_JSON(RiskDevice, riskDevice_);
        DARABONBA_PTR_TO_JSON(RiskDeviceToken, riskDeviceToken_);
        DARABONBA_PTR_TO_JSON(RiskGeneric, riskGeneric_);
        DARABONBA_PTR_TO_JSON(RiskModelMining, riskModelMining_);
        DARABONBA_PTR_TO_JSON(Root, root_);
        DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
        DARABONBA_PTR_TO_JSON(Simulator, simulator_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(VirtualVideo, virtualVideo_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
        DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
        DARABONBA_PTR_FROM_JSON(GmtVerify, gmtVerify_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(OuterOrderNo, outerOrderNo_);
        DARABONBA_PTR_FROM_JSON(Passed, passed_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(RiskBizScenario, riskBizScenario_);
        DARABONBA_PTR_FROM_JSON(RiskDevice, riskDevice_);
        DARABONBA_PTR_FROM_JSON(RiskDeviceToken, riskDeviceToken_);
        DARABONBA_PTR_FROM_JSON(RiskGeneric, riskGeneric_);
        DARABONBA_PTR_FROM_JSON(RiskModelMining, riskModelMining_);
        DARABONBA_PTR_FROM_JSON(Root, root_);
        DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
        DARABONBA_PTR_FROM_JSON(Simulator, simulator_);
        DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(VirtualVideo, virtualVideo_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ExtInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CertName, certName_);
          DARABONBA_PTR_TO_JSON(DeviceRisk, deviceRisk_);
          DARABONBA_PTR_TO_JSON(FaceAttack, faceAttack_);
          DARABONBA_PTR_TO_JSON(FaceAttackScore, faceAttackScore_);
          DARABONBA_PTR_TO_JSON(FaceOcclusion, faceOcclusion_);
          DARABONBA_PTR_TO_JSON(IdCardVerifyScore, idCardVerifyScore_);
          DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
          DARABONBA_PTR_TO_JSON(OssIdFaceObjectName, ossIdFaceObjectName_);
          DARABONBA_PTR_TO_JSON(OssIdNationalEmblemObjectName, ossIdNationalEmblemObjectName_);
          DARABONBA_PTR_TO_JSON(OssObjectName, ossObjectName_);
          DARABONBA_PTR_TO_JSON(QualityScore, qualityScore_);
          DARABONBA_PTR_TO_JSON(VerifyScore, verifyScore_);
          DARABONBA_PTR_TO_JSON(asrTexts, asrTexts_);
          DARABONBA_PTR_TO_JSON(screenVideoObjectNames, screenVideoObjectNames_);
          DARABONBA_PTR_TO_JSON(voiceObjectNames, voiceObjectNames_);
        };
        friend void from_json(const Darabonba::Json& j, ExtInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CertName, certName_);
          DARABONBA_PTR_FROM_JSON(DeviceRisk, deviceRisk_);
          DARABONBA_PTR_FROM_JSON(FaceAttack, faceAttack_);
          DARABONBA_PTR_FROM_JSON(FaceAttackScore, faceAttackScore_);
          DARABONBA_PTR_FROM_JSON(FaceOcclusion, faceOcclusion_);
          DARABONBA_PTR_FROM_JSON(IdCardVerifyScore, idCardVerifyScore_);
          DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
          DARABONBA_PTR_FROM_JSON(OssIdFaceObjectName, ossIdFaceObjectName_);
          DARABONBA_PTR_FROM_JSON(OssIdNationalEmblemObjectName, ossIdNationalEmblemObjectName_);
          DARABONBA_PTR_FROM_JSON(OssObjectName, ossObjectName_);
          DARABONBA_PTR_FROM_JSON(QualityScore, qualityScore_);
          DARABONBA_PTR_FROM_JSON(VerifyScore, verifyScore_);
          DARABONBA_PTR_FROM_JSON(asrTexts, asrTexts_);
          DARABONBA_PTR_FROM_JSON(screenVideoObjectNames, screenVideoObjectNames_);
          DARABONBA_PTR_FROM_JSON(voiceObjectNames, voiceObjectNames_);
        };
        ExtInfo() = default ;
        ExtInfo(const ExtInfo &) = default ;
        ExtInfo(ExtInfo &&) = default ;
        ExtInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtInfo() = default ;
        ExtInfo& operator=(const ExtInfo &) = default ;
        ExtInfo& operator=(ExtInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->certName_ == nullptr
        && this->deviceRisk_ == nullptr && this->faceAttack_ == nullptr && this->faceAttackScore_ == nullptr && this->faceOcclusion_ == nullptr && this->idCardVerifyScore_ == nullptr
        && this->ossBucketName_ == nullptr && this->ossIdFaceObjectName_ == nullptr && this->ossIdNationalEmblemObjectName_ == nullptr && this->ossObjectName_ == nullptr && this->qualityScore_ == nullptr
        && this->verifyScore_ == nullptr && this->asrTexts_ == nullptr && this->screenVideoObjectNames_ == nullptr && this->voiceObjectNames_ == nullptr; };
        // certName Field Functions 
        bool hasCertName() const { return this->certName_ != nullptr;};
        void deleteCertName() { this->certName_ = nullptr;};
        inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
        inline ExtInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


        // deviceRisk Field Functions 
        bool hasDeviceRisk() const { return this->deviceRisk_ != nullptr;};
        void deleteDeviceRisk() { this->deviceRisk_ = nullptr;};
        inline string getDeviceRisk() const { DARABONBA_PTR_GET_DEFAULT(deviceRisk_, "") };
        inline ExtInfo& setDeviceRisk(string deviceRisk) { DARABONBA_PTR_SET_VALUE(deviceRisk_, deviceRisk) };


        // faceAttack Field Functions 
        bool hasFaceAttack() const { return this->faceAttack_ != nullptr;};
        void deleteFaceAttack() { this->faceAttack_ = nullptr;};
        inline string getFaceAttack() const { DARABONBA_PTR_GET_DEFAULT(faceAttack_, "") };
        inline ExtInfo& setFaceAttack(string faceAttack) { DARABONBA_PTR_SET_VALUE(faceAttack_, faceAttack) };


        // faceAttackScore Field Functions 
        bool hasFaceAttackScore() const { return this->faceAttackScore_ != nullptr;};
        void deleteFaceAttackScore() { this->faceAttackScore_ = nullptr;};
        inline float getFaceAttackScore() const { DARABONBA_PTR_GET_DEFAULT(faceAttackScore_, 0.0) };
        inline ExtInfo& setFaceAttackScore(float faceAttackScore) { DARABONBA_PTR_SET_VALUE(faceAttackScore_, faceAttackScore) };


        // faceOcclusion Field Functions 
        bool hasFaceOcclusion() const { return this->faceOcclusion_ != nullptr;};
        void deleteFaceOcclusion() { this->faceOcclusion_ = nullptr;};
        inline string getFaceOcclusion() const { DARABONBA_PTR_GET_DEFAULT(faceOcclusion_, "") };
        inline ExtInfo& setFaceOcclusion(string faceOcclusion) { DARABONBA_PTR_SET_VALUE(faceOcclusion_, faceOcclusion) };


        // idCardVerifyScore Field Functions 
        bool hasIdCardVerifyScore() const { return this->idCardVerifyScore_ != nullptr;};
        void deleteIdCardVerifyScore() { this->idCardVerifyScore_ = nullptr;};
        inline float getIdCardVerifyScore() const { DARABONBA_PTR_GET_DEFAULT(idCardVerifyScore_, 0.0) };
        inline ExtInfo& setIdCardVerifyScore(float idCardVerifyScore) { DARABONBA_PTR_SET_VALUE(idCardVerifyScore_, idCardVerifyScore) };


        // ossBucketName Field Functions 
        bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
        void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
        inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
        inline ExtInfo& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


        // ossIdFaceObjectName Field Functions 
        bool hasOssIdFaceObjectName() const { return this->ossIdFaceObjectName_ != nullptr;};
        void deleteOssIdFaceObjectName() { this->ossIdFaceObjectName_ = nullptr;};
        inline string getOssIdFaceObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossIdFaceObjectName_, "") };
        inline ExtInfo& setOssIdFaceObjectName(string ossIdFaceObjectName) { DARABONBA_PTR_SET_VALUE(ossIdFaceObjectName_, ossIdFaceObjectName) };


        // ossIdNationalEmblemObjectName Field Functions 
        bool hasOssIdNationalEmblemObjectName() const { return this->ossIdNationalEmblemObjectName_ != nullptr;};
        void deleteOssIdNationalEmblemObjectName() { this->ossIdNationalEmblemObjectName_ = nullptr;};
        inline string getOssIdNationalEmblemObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossIdNationalEmblemObjectName_, "") };
        inline ExtInfo& setOssIdNationalEmblemObjectName(string ossIdNationalEmblemObjectName) { DARABONBA_PTR_SET_VALUE(ossIdNationalEmblemObjectName_, ossIdNationalEmblemObjectName) };


        // ossObjectName Field Functions 
        bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
        void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
        inline string getOssObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
        inline ExtInfo& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


        // qualityScore Field Functions 
        bool hasQualityScore() const { return this->qualityScore_ != nullptr;};
        void deleteQualityScore() { this->qualityScore_ = nullptr;};
        inline float getQualityScore() const { DARABONBA_PTR_GET_DEFAULT(qualityScore_, 0.0) };
        inline ExtInfo& setQualityScore(float qualityScore) { DARABONBA_PTR_SET_VALUE(qualityScore_, qualityScore) };


        // verifyScore Field Functions 
        bool hasVerifyScore() const { return this->verifyScore_ != nullptr;};
        void deleteVerifyScore() { this->verifyScore_ = nullptr;};
        inline float getVerifyScore() const { DARABONBA_PTR_GET_DEFAULT(verifyScore_, 0.0) };
        inline ExtInfo& setVerifyScore(float verifyScore) { DARABONBA_PTR_SET_VALUE(verifyScore_, verifyScore) };


        // asrTexts Field Functions 
        bool hasAsrTexts() const { return this->asrTexts_ != nullptr;};
        void deleteAsrTexts() { this->asrTexts_ = nullptr;};
        inline const vector<string> & getAsrTexts() const { DARABONBA_PTR_GET_CONST(asrTexts_, vector<string>) };
        inline vector<string> getAsrTexts() { DARABONBA_PTR_GET(asrTexts_, vector<string>) };
        inline ExtInfo& setAsrTexts(const vector<string> & asrTexts) { DARABONBA_PTR_SET_VALUE(asrTexts_, asrTexts) };
        inline ExtInfo& setAsrTexts(vector<string> && asrTexts) { DARABONBA_PTR_SET_RVALUE(asrTexts_, asrTexts) };


        // screenVideoObjectNames Field Functions 
        bool hasScreenVideoObjectNames() const { return this->screenVideoObjectNames_ != nullptr;};
        void deleteScreenVideoObjectNames() { this->screenVideoObjectNames_ = nullptr;};
        inline const vector<string> & getScreenVideoObjectNames() const { DARABONBA_PTR_GET_CONST(screenVideoObjectNames_, vector<string>) };
        inline vector<string> getScreenVideoObjectNames() { DARABONBA_PTR_GET(screenVideoObjectNames_, vector<string>) };
        inline ExtInfo& setScreenVideoObjectNames(const vector<string> & screenVideoObjectNames) { DARABONBA_PTR_SET_VALUE(screenVideoObjectNames_, screenVideoObjectNames) };
        inline ExtInfo& setScreenVideoObjectNames(vector<string> && screenVideoObjectNames) { DARABONBA_PTR_SET_RVALUE(screenVideoObjectNames_, screenVideoObjectNames) };


        // voiceObjectNames Field Functions 
        bool hasVoiceObjectNames() const { return this->voiceObjectNames_ != nullptr;};
        void deleteVoiceObjectNames() { this->voiceObjectNames_ = nullptr;};
        inline const vector<string> & getVoiceObjectNames() const { DARABONBA_PTR_GET_CONST(voiceObjectNames_, vector<string>) };
        inline vector<string> getVoiceObjectNames() { DARABONBA_PTR_GET(voiceObjectNames_, vector<string>) };
        inline ExtInfo& setVoiceObjectNames(const vector<string> & voiceObjectNames) { DARABONBA_PTR_SET_VALUE(voiceObjectNames_, voiceObjectNames) };
        inline ExtInfo& setVoiceObjectNames(vector<string> && voiceObjectNames) { DARABONBA_PTR_SET_RVALUE(voiceObjectNames_, voiceObjectNames) };


      protected:
        // Desensitized name.
        shared_ptr<string> certName_ {};
        // Face guard label.
        shared_ptr<string> deviceRisk_ {};
        // Whether it is a face attack:
        // - **T**: Yes
        // - **F**: No
        shared_ptr<string> faceAttack_ {};
        // Face attack score, with a range of 0~1. A value closer to 1 indicates a higher likelihood of an attack.
        shared_ptr<float> faceAttackScore_ {};
        // Whether the face is occluded, T if yes, F otherwise.
        shared_ptr<string> faceOcclusion_ {};
        // Face-to-ID card comparison score.
        shared_ptr<float> idCardVerifyScore_ {};
        // The OSS bucket for the photo.
        shared_ptr<string> ossBucketName_ {};
        // OCR ID card face file name.
        shared_ptr<string> ossIdFaceObjectName_ {};
        // OCR ID card national emblem file name.
        shared_ptr<string> ossIdNationalEmblemObjectName_ {};
        // The name of the stored object.
        shared_ptr<string> ossObjectName_ {};
        // Liveness face quality score.
        shared_ptr<float> qualityScore_ {};
        // Face comparison score.
        shared_ptr<float> verifyScore_ {};
        // List of ASR texts.
        shared_ptr<vector<string>> asrTexts_ {};
        // List of OSS file names for screen recording files.
        shared_ptr<vector<string>> screenVideoObjectNames_ {};
        // List of OSS file names for audio files.
        shared_ptr<vector<string>> voiceObjectNames_ {};
      };

      virtual bool empty() const override { return this->certNo_ == nullptr
        && this->certifyId_ == nullptr && this->extInfo_ == nullptr && this->gmtVerify_ == nullptr && this->model_ == nullptr && this->outerOrderNo_ == nullptr
        && this->passed_ == nullptr && this->productCode_ == nullptr && this->riskBizScenario_ == nullptr && this->riskDevice_ == nullptr && this->riskDeviceToken_ == nullptr
        && this->riskGeneric_ == nullptr && this->riskModelMining_ == nullptr && this->root_ == nullptr && this->sceneId_ == nullptr && this->simulator_ == nullptr
        && this->subCode_ == nullptr && this->userId_ == nullptr && this->virtualVideo_ == nullptr; };
      // certNo Field Functions 
      bool hasCertNo() const { return this->certNo_ != nullptr;};
      void deleteCertNo() { this->certNo_ = nullptr;};
      inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
      inline Items& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


      // certifyId Field Functions 
      bool hasCertifyId() const { return this->certifyId_ != nullptr;};
      void deleteCertifyId() { this->certifyId_ = nullptr;};
      inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
      inline Items& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


      // extInfo Field Functions 
      bool hasExtInfo() const { return this->extInfo_ != nullptr;};
      void deleteExtInfo() { this->extInfo_ = nullptr;};
      inline const Items::ExtInfo & getExtInfo() const { DARABONBA_PTR_GET_CONST(extInfo_, Items::ExtInfo) };
      inline Items::ExtInfo getExtInfo() { DARABONBA_PTR_GET(extInfo_, Items::ExtInfo) };
      inline Items& setExtInfo(const Items::ExtInfo & extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };
      inline Items& setExtInfo(Items::ExtInfo && extInfo) { DARABONBA_PTR_SET_RVALUE(extInfo_, extInfo) };


      // gmtVerify Field Functions 
      bool hasGmtVerify() const { return this->gmtVerify_ != nullptr;};
      void deleteGmtVerify() { this->gmtVerify_ = nullptr;};
      inline string getGmtVerify() const { DARABONBA_PTR_GET_DEFAULT(gmtVerify_, "") };
      inline Items& setGmtVerify(string gmtVerify) { DARABONBA_PTR_SET_VALUE(gmtVerify_, gmtVerify) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Items& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // outerOrderNo Field Functions 
      bool hasOuterOrderNo() const { return this->outerOrderNo_ != nullptr;};
      void deleteOuterOrderNo() { this->outerOrderNo_ = nullptr;};
      inline string getOuterOrderNo() const { DARABONBA_PTR_GET_DEFAULT(outerOrderNo_, "") };
      inline Items& setOuterOrderNo(string outerOrderNo) { DARABONBA_PTR_SET_VALUE(outerOrderNo_, outerOrderNo) };


      // passed Field Functions 
      bool hasPassed() const { return this->passed_ != nullptr;};
      void deletePassed() { this->passed_ = nullptr;};
      inline string getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
      inline Items& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Items& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // riskBizScenario Field Functions 
      bool hasRiskBizScenario() const { return this->riskBizScenario_ != nullptr;};
      void deleteRiskBizScenario() { this->riskBizScenario_ = nullptr;};
      inline int32_t getRiskBizScenario() const { DARABONBA_PTR_GET_DEFAULT(riskBizScenario_, 0) };
      inline Items& setRiskBizScenario(int32_t riskBizScenario) { DARABONBA_PTR_SET_VALUE(riskBizScenario_, riskBizScenario) };


      // riskDevice Field Functions 
      bool hasRiskDevice() const { return this->riskDevice_ != nullptr;};
      void deleteRiskDevice() { this->riskDevice_ = nullptr;};
      inline int32_t getRiskDevice() const { DARABONBA_PTR_GET_DEFAULT(riskDevice_, 0) };
      inline Items& setRiskDevice(int32_t riskDevice) { DARABONBA_PTR_SET_VALUE(riskDevice_, riskDevice) };


      // riskDeviceToken Field Functions 
      bool hasRiskDeviceToken() const { return this->riskDeviceToken_ != nullptr;};
      void deleteRiskDeviceToken() { this->riskDeviceToken_ = nullptr;};
      inline int32_t getRiskDeviceToken() const { DARABONBA_PTR_GET_DEFAULT(riskDeviceToken_, 0) };
      inline Items& setRiskDeviceToken(int32_t riskDeviceToken) { DARABONBA_PTR_SET_VALUE(riskDeviceToken_, riskDeviceToken) };


      // riskGeneric Field Functions 
      bool hasRiskGeneric() const { return this->riskGeneric_ != nullptr;};
      void deleteRiskGeneric() { this->riskGeneric_ = nullptr;};
      inline int32_t getRiskGeneric() const { DARABONBA_PTR_GET_DEFAULT(riskGeneric_, 0) };
      inline Items& setRiskGeneric(int32_t riskGeneric) { DARABONBA_PTR_SET_VALUE(riskGeneric_, riskGeneric) };


      // riskModelMining Field Functions 
      bool hasRiskModelMining() const { return this->riskModelMining_ != nullptr;};
      void deleteRiskModelMining() { this->riskModelMining_ = nullptr;};
      inline int32_t getRiskModelMining() const { DARABONBA_PTR_GET_DEFAULT(riskModelMining_, 0) };
      inline Items& setRiskModelMining(int32_t riskModelMining) { DARABONBA_PTR_SET_VALUE(riskModelMining_, riskModelMining) };


      // root Field Functions 
      bool hasRoot() const { return this->root_ != nullptr;};
      void deleteRoot() { this->root_ = nullptr;};
      inline int32_t getRoot() const { DARABONBA_PTR_GET_DEFAULT(root_, 0) };
      inline Items& setRoot(int32_t root) { DARABONBA_PTR_SET_VALUE(root_, root) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
      inline Items& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


      // simulator Field Functions 
      bool hasSimulator() const { return this->simulator_ != nullptr;};
      void deleteSimulator() { this->simulator_ = nullptr;};
      inline int32_t getSimulator() const { DARABONBA_PTR_GET_DEFAULT(simulator_, 0) };
      inline Items& setSimulator(int32_t simulator) { DARABONBA_PTR_SET_VALUE(simulator_, simulator) };


      // subCode Field Functions 
      bool hasSubCode() const { return this->subCode_ != nullptr;};
      void deleteSubCode() { this->subCode_ = nullptr;};
      inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
      inline Items& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Items& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // virtualVideo Field Functions 
      bool hasVirtualVideo() const { return this->virtualVideo_ != nullptr;};
      void deleteVirtualVideo() { this->virtualVideo_ = nullptr;};
      inline int32_t getVirtualVideo() const { DARABONBA_PTR_GET_DEFAULT(virtualVideo_, 0) };
      inline Items& setVirtualVideo(int32_t virtualVideo) { DARABONBA_PTR_SET_VALUE(virtualVideo_, virtualVideo) };


    protected:
      // Desensitized ID number.
      shared_ptr<string> certNo_ {};
      // Certification ID.
      shared_ptr<string> certifyId_ {};
      // Extended information.
      shared_ptr<Items::ExtInfo> extInfo_ {};
      // Verification time of this authentication.
      shared_ptr<string> gmtVerify_ {};
      // Liveness detection scheme.
      shared_ptr<string> model_ {};
      // Unique identifier for the customer request.
      shared_ptr<string> outerOrderNo_ {};
      // Whether the certification passed. Values:
      // - **T**: Passed.
      // - **F**: Not passed.
      shared_ptr<string> passed_ {};
      // Product code.
      shared_ptr<string> productCode_ {};
      shared_ptr<int32_t> riskBizScenario_ {};
      shared_ptr<int32_t> riskDevice_ {};
      shared_ptr<int32_t> riskDeviceToken_ {};
      shared_ptr<int32_t> riskGeneric_ {};
      shared_ptr<int32_t> riskModelMining_ {};
      // Whether it is root (pass 1 if selected, otherwise do not pass; corresponds to identity label risk type).
      shared_ptr<int32_t> root_ {};
      // Scene ID.
      shared_ptr<int64_t> sceneId_ {};
      // Whether it is a simulator (pass 1 if selected, otherwise do not pass; corresponds to device label risk type).
      shared_ptr<int32_t> simulator_ {};
      // System returned error code.
      shared_ptr<string> subCode_ {};
      // User ID.
      shared_ptr<string> userId_ {};
      // Whether it is a virtual adaptation (pass 1 if selected, otherwise do not pass; corresponds to behavior label risk type).
      shared_ptr<int32_t> virtualVideo_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeVerifySearchPageListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeVerifySearchPageListResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeVerifySearchPageListResponseBody::Items>) };
    inline vector<DescribeVerifySearchPageListResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeVerifySearchPageListResponseBody::Items>) };
    inline DescribeVerifySearchPageListResponseBody& setItems(const vector<DescribeVerifySearchPageListResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeVerifySearchPageListResponseBody& setItems(vector<DescribeVerifySearchPageListResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVerifySearchPageListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifySearchPageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVerifySearchPageListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeVerifySearchPageListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Paged list data.
    shared_ptr<vector<DescribeVerifySearchPageListResponseBody::Items>> items_ {};
    // Number of items per page.
    shared_ptr<int32_t> pageSize_ {};
    // ID of this request.
    shared_ptr<string> requestId_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalCount_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
