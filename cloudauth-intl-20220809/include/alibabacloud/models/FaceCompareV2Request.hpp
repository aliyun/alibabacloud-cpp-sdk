// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACECOMPAREV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FACECOMPAREV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceCompareV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceCompareV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(FacePictureQualityCheck, facePictureQualityCheck_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(SourceFacePicture, sourceFacePicture_);
      DARABONBA_PTR_TO_JSON(SourceFacePictureFile, sourceFacePictureFile_);
      DARABONBA_PTR_TO_JSON(SourceFacePictureUrl, sourceFacePictureUrl_);
      DARABONBA_PTR_TO_JSON(TargetFacePicture, targetFacePicture_);
      DARABONBA_PTR_TO_JSON(TargetFacePictureFile, targetFacePictureFile_);
      DARABONBA_PTR_TO_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
    };
    friend void from_json(const Darabonba::Json& j, FaceCompareV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(FacePictureQualityCheck, facePictureQualityCheck_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(SourceFacePicture, sourceFacePicture_);
      DARABONBA_PTR_FROM_JSON(SourceFacePictureFile, sourceFacePictureFile_);
      DARABONBA_PTR_FROM_JSON(SourceFacePictureUrl, sourceFacePictureUrl_);
      DARABONBA_PTR_FROM_JSON(TargetFacePicture, targetFacePicture_);
      DARABONBA_PTR_FROM_JSON(TargetFacePictureFile, targetFacePictureFile_);
      DARABONBA_PTR_FROM_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
    };
    FaceCompareV2Request() = default ;
    FaceCompareV2Request(const FaceCompareV2Request &) = default ;
    FaceCompareV2Request(FaceCompareV2Request &&) = default ;
    FaceCompareV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceCompareV2Request() = default ;
    FaceCompareV2Request& operator=(const FaceCompareV2Request &) = default ;
    FaceCompareV2Request& operator=(FaceCompareV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->facePictureQualityCheck_ == nullptr
        && this->merchantBizId_ == nullptr && this->sourceFacePicture_ == nullptr && this->sourceFacePictureFile_ == nullptr && this->sourceFacePictureUrl_ == nullptr && this->targetFacePicture_ == nullptr
        && this->targetFacePictureFile_ == nullptr && this->targetFacePictureUrl_ == nullptr; };
    // facePictureQualityCheck Field Functions 
    bool hasFacePictureQualityCheck() const { return this->facePictureQualityCheck_ != nullptr;};
    void deleteFacePictureQualityCheck() { this->facePictureQualityCheck_ = nullptr;};
    inline string getFacePictureQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(facePictureQualityCheck_, "") };
    inline FaceCompareV2Request& setFacePictureQualityCheck(string facePictureQualityCheck) { DARABONBA_PTR_SET_VALUE(facePictureQualityCheck_, facePictureQualityCheck) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline FaceCompareV2Request& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // sourceFacePicture Field Functions 
    bool hasSourceFacePicture() const { return this->sourceFacePicture_ != nullptr;};
    void deleteSourceFacePicture() { this->sourceFacePicture_ = nullptr;};
    inline string getSourceFacePicture() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePicture_, "") };
    inline FaceCompareV2Request& setSourceFacePicture(string sourceFacePicture) { DARABONBA_PTR_SET_VALUE(sourceFacePicture_, sourceFacePicture) };


    // sourceFacePictureFile Field Functions 
    bool hasSourceFacePictureFile() const { return this->sourceFacePictureFile_ != nullptr;};
    void deleteSourceFacePictureFile() { this->sourceFacePictureFile_ = nullptr;};
    inline string getSourceFacePictureFile() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePictureFile_, "") };
    inline FaceCompareV2Request& setSourceFacePictureFile(string sourceFacePictureFile) { DARABONBA_PTR_SET_VALUE(sourceFacePictureFile_, sourceFacePictureFile) };


    // sourceFacePictureUrl Field Functions 
    bool hasSourceFacePictureUrl() const { return this->sourceFacePictureUrl_ != nullptr;};
    void deleteSourceFacePictureUrl() { this->sourceFacePictureUrl_ = nullptr;};
    inline string getSourceFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePictureUrl_, "") };
    inline FaceCompareV2Request& setSourceFacePictureUrl(string sourceFacePictureUrl) { DARABONBA_PTR_SET_VALUE(sourceFacePictureUrl_, sourceFacePictureUrl) };


    // targetFacePicture Field Functions 
    bool hasTargetFacePicture() const { return this->targetFacePicture_ != nullptr;};
    void deleteTargetFacePicture() { this->targetFacePicture_ = nullptr;};
    inline string getTargetFacePicture() const { DARABONBA_PTR_GET_DEFAULT(targetFacePicture_, "") };
    inline FaceCompareV2Request& setTargetFacePicture(string targetFacePicture) { DARABONBA_PTR_SET_VALUE(targetFacePicture_, targetFacePicture) };


    // targetFacePictureFile Field Functions 
    bool hasTargetFacePictureFile() const { return this->targetFacePictureFile_ != nullptr;};
    void deleteTargetFacePictureFile() { this->targetFacePictureFile_ = nullptr;};
    inline string getTargetFacePictureFile() const { DARABONBA_PTR_GET_DEFAULT(targetFacePictureFile_, "") };
    inline FaceCompareV2Request& setTargetFacePictureFile(string targetFacePictureFile) { DARABONBA_PTR_SET_VALUE(targetFacePictureFile_, targetFacePictureFile) };


    // targetFacePictureUrl Field Functions 
    bool hasTargetFacePictureUrl() const { return this->targetFacePictureUrl_ != nullptr;};
    void deleteTargetFacePictureUrl() { this->targetFacePictureUrl_ = nullptr;};
    inline string getTargetFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(targetFacePictureUrl_, "") };
    inline FaceCompareV2Request& setTargetFacePictureUrl(string targetFacePictureUrl) { DARABONBA_PTR_SET_VALUE(targetFacePictureUrl_, targetFacePictureUrl) };


  protected:
    shared_ptr<string> facePictureQualityCheck_ {};
    shared_ptr<string> merchantBizId_ {};
    shared_ptr<string> sourceFacePicture_ {};
    shared_ptr<string> sourceFacePictureFile_ {};
    shared_ptr<string> sourceFacePictureUrl_ {};
    shared_ptr<string> targetFacePicture_ {};
    shared_ptr<string> targetFacePictureFile_ {};
    shared_ptr<string> targetFacePictureUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
