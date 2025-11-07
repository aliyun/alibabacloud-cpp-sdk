// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYSEARCHPAGELISTRESPONSEBODYITEMSEXTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYSEARCHPAGELISTRESPONSEBODYITEMSEXTINFO_HPP_
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
  class DescribeVerifySearchPageListResponseBodyItemsExtInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifySearchPageListResponseBodyItemsExtInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeVerifySearchPageListResponseBodyItemsExtInfo& obj) { 
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
    DescribeVerifySearchPageListResponseBodyItemsExtInfo() = default ;
    DescribeVerifySearchPageListResponseBodyItemsExtInfo(const DescribeVerifySearchPageListResponseBodyItemsExtInfo &) = default ;
    DescribeVerifySearchPageListResponseBodyItemsExtInfo(DescribeVerifySearchPageListResponseBodyItemsExtInfo &&) = default ;
    DescribeVerifySearchPageListResponseBodyItemsExtInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifySearchPageListResponseBodyItemsExtInfo() = default ;
    DescribeVerifySearchPageListResponseBodyItemsExtInfo& operator=(const DescribeVerifySearchPageListResponseBodyItemsExtInfo &) = default ;
    DescribeVerifySearchPageListResponseBodyItemsExtInfo& operator=(DescribeVerifySearchPageListResponseBodyItemsExtInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certName_ == nullptr
        && return this->deviceRisk_ == nullptr && return this->faceAttack_ == nullptr && return this->faceAttackScore_ == nullptr && return this->faceOcclusion_ == nullptr && return this->idCardVerifyScore_ == nullptr
        && return this->ossBucketName_ == nullptr && return this->ossIdFaceObjectName_ == nullptr && return this->ossIdNationalEmblemObjectName_ == nullptr && return this->ossObjectName_ == nullptr && return this->qualityScore_ == nullptr
        && return this->verifyScore_ == nullptr && return this->asrTexts_ == nullptr && return this->screenVideoObjectNames_ == nullptr && return this->voiceObjectNames_ == nullptr; };
    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // deviceRisk Field Functions 
    bool hasDeviceRisk() const { return this->deviceRisk_ != nullptr;};
    void deleteDeviceRisk() { this->deviceRisk_ = nullptr;};
    inline string deviceRisk() const { DARABONBA_PTR_GET_DEFAULT(deviceRisk_, "") };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setDeviceRisk(string deviceRisk) { DARABONBA_PTR_SET_VALUE(deviceRisk_, deviceRisk) };


    // faceAttack Field Functions 
    bool hasFaceAttack() const { return this->faceAttack_ != nullptr;};
    void deleteFaceAttack() { this->faceAttack_ = nullptr;};
    inline string faceAttack() const { DARABONBA_PTR_GET_DEFAULT(faceAttack_, "") };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setFaceAttack(string faceAttack) { DARABONBA_PTR_SET_VALUE(faceAttack_, faceAttack) };


    // faceAttackScore Field Functions 
    bool hasFaceAttackScore() const { return this->faceAttackScore_ != nullptr;};
    void deleteFaceAttackScore() { this->faceAttackScore_ = nullptr;};
    inline float faceAttackScore() const { DARABONBA_PTR_GET_DEFAULT(faceAttackScore_, 0.0) };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setFaceAttackScore(float faceAttackScore) { DARABONBA_PTR_SET_VALUE(faceAttackScore_, faceAttackScore) };


    // faceOcclusion Field Functions 
    bool hasFaceOcclusion() const { return this->faceOcclusion_ != nullptr;};
    void deleteFaceOcclusion() { this->faceOcclusion_ = nullptr;};
    inline string faceOcclusion() const { DARABONBA_PTR_GET_DEFAULT(faceOcclusion_, "") };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setFaceOcclusion(string faceOcclusion) { DARABONBA_PTR_SET_VALUE(faceOcclusion_, faceOcclusion) };


    // idCardVerifyScore Field Functions 
    bool hasIdCardVerifyScore() const { return this->idCardVerifyScore_ != nullptr;};
    void deleteIdCardVerifyScore() { this->idCardVerifyScore_ = nullptr;};
    inline float idCardVerifyScore() const { DARABONBA_PTR_GET_DEFAULT(idCardVerifyScore_, 0.0) };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setIdCardVerifyScore(float idCardVerifyScore) { DARABONBA_PTR_SET_VALUE(idCardVerifyScore_, idCardVerifyScore) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossIdFaceObjectName Field Functions 
    bool hasOssIdFaceObjectName() const { return this->ossIdFaceObjectName_ != nullptr;};
    void deleteOssIdFaceObjectName() { this->ossIdFaceObjectName_ = nullptr;};
    inline string ossIdFaceObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossIdFaceObjectName_, "") };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setOssIdFaceObjectName(string ossIdFaceObjectName) { DARABONBA_PTR_SET_VALUE(ossIdFaceObjectName_, ossIdFaceObjectName) };


    // ossIdNationalEmblemObjectName Field Functions 
    bool hasOssIdNationalEmblemObjectName() const { return this->ossIdNationalEmblemObjectName_ != nullptr;};
    void deleteOssIdNationalEmblemObjectName() { this->ossIdNationalEmblemObjectName_ = nullptr;};
    inline string ossIdNationalEmblemObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossIdNationalEmblemObjectName_, "") };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setOssIdNationalEmblemObjectName(string ossIdNationalEmblemObjectName) { DARABONBA_PTR_SET_VALUE(ossIdNationalEmblemObjectName_, ossIdNationalEmblemObjectName) };


    // ossObjectName Field Functions 
    bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
    void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
    inline string ossObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


    // qualityScore Field Functions 
    bool hasQualityScore() const { return this->qualityScore_ != nullptr;};
    void deleteQualityScore() { this->qualityScore_ = nullptr;};
    inline float qualityScore() const { DARABONBA_PTR_GET_DEFAULT(qualityScore_, 0.0) };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setQualityScore(float qualityScore) { DARABONBA_PTR_SET_VALUE(qualityScore_, qualityScore) };


    // verifyScore Field Functions 
    bool hasVerifyScore() const { return this->verifyScore_ != nullptr;};
    void deleteVerifyScore() { this->verifyScore_ = nullptr;};
    inline float verifyScore() const { DARABONBA_PTR_GET_DEFAULT(verifyScore_, 0.0) };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setVerifyScore(float verifyScore) { DARABONBA_PTR_SET_VALUE(verifyScore_, verifyScore) };


    // asrTexts Field Functions 
    bool hasAsrTexts() const { return this->asrTexts_ != nullptr;};
    void deleteAsrTexts() { this->asrTexts_ = nullptr;};
    inline const vector<string> & asrTexts() const { DARABONBA_PTR_GET_CONST(asrTexts_, vector<string>) };
    inline vector<string> asrTexts() { DARABONBA_PTR_GET(asrTexts_, vector<string>) };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setAsrTexts(const vector<string> & asrTexts) { DARABONBA_PTR_SET_VALUE(asrTexts_, asrTexts) };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setAsrTexts(vector<string> && asrTexts) { DARABONBA_PTR_SET_RVALUE(asrTexts_, asrTexts) };


    // screenVideoObjectNames Field Functions 
    bool hasScreenVideoObjectNames() const { return this->screenVideoObjectNames_ != nullptr;};
    void deleteScreenVideoObjectNames() { this->screenVideoObjectNames_ = nullptr;};
    inline const vector<string> & screenVideoObjectNames() const { DARABONBA_PTR_GET_CONST(screenVideoObjectNames_, vector<string>) };
    inline vector<string> screenVideoObjectNames() { DARABONBA_PTR_GET(screenVideoObjectNames_, vector<string>) };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setScreenVideoObjectNames(const vector<string> & screenVideoObjectNames) { DARABONBA_PTR_SET_VALUE(screenVideoObjectNames_, screenVideoObjectNames) };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setScreenVideoObjectNames(vector<string> && screenVideoObjectNames) { DARABONBA_PTR_SET_RVALUE(screenVideoObjectNames_, screenVideoObjectNames) };


    // voiceObjectNames Field Functions 
    bool hasVoiceObjectNames() const { return this->voiceObjectNames_ != nullptr;};
    void deleteVoiceObjectNames() { this->voiceObjectNames_ = nullptr;};
    inline const vector<string> & voiceObjectNames() const { DARABONBA_PTR_GET_CONST(voiceObjectNames_, vector<string>) };
    inline vector<string> voiceObjectNames() { DARABONBA_PTR_GET(voiceObjectNames_, vector<string>) };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setVoiceObjectNames(const vector<string> & voiceObjectNames) { DARABONBA_PTR_SET_VALUE(voiceObjectNames_, voiceObjectNames) };
    inline DescribeVerifySearchPageListResponseBodyItemsExtInfo& setVoiceObjectNames(vector<string> && voiceObjectNames) { DARABONBA_PTR_SET_RVALUE(voiceObjectNames_, voiceObjectNames) };


  protected:
    // Desensitized name.
    std::shared_ptr<string> certName_ = nullptr;
    // Face guard label.
    std::shared_ptr<string> deviceRisk_ = nullptr;
    // Whether it is a face attack:
    // - **T**: Yes
    // - **F**: No
    std::shared_ptr<string> faceAttack_ = nullptr;
    // Face attack score, with a range of 0~1. A value closer to 1 indicates a higher likelihood of an attack.
    std::shared_ptr<float> faceAttackScore_ = nullptr;
    // Whether the face is occluded, T if yes, F otherwise.
    std::shared_ptr<string> faceOcclusion_ = nullptr;
    // Face-to-ID card comparison score.
    std::shared_ptr<float> idCardVerifyScore_ = nullptr;
    // The OSS bucket for the photo.
    std::shared_ptr<string> ossBucketName_ = nullptr;
    // OCR ID card face file name.
    std::shared_ptr<string> ossIdFaceObjectName_ = nullptr;
    // OCR ID card national emblem file name.
    std::shared_ptr<string> ossIdNationalEmblemObjectName_ = nullptr;
    // The name of the stored object.
    std::shared_ptr<string> ossObjectName_ = nullptr;
    // Liveness face quality score.
    std::shared_ptr<float> qualityScore_ = nullptr;
    // Face comparison score.
    std::shared_ptr<float> verifyScore_ = nullptr;
    // List of ASR texts.
    std::shared_ptr<vector<string>> asrTexts_ = nullptr;
    // List of OSS file names for screen recording files.
    std::shared_ptr<vector<string>> screenVideoObjectNames_ = nullptr;
    // List of OSS file names for audio files.
    std::shared_ptr<vector<string>> voiceObjectNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
