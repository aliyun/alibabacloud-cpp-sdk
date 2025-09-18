// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACECOMPAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FACECOMPAREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceCompareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceCompareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FacePictureQualityCheck, facePictureQualityCheck_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(SourceFacePicture, sourceFacePicture_);
      DARABONBA_PTR_TO_JSON(SourceFacePictureUrl, sourceFacePictureUrl_);
      DARABONBA_PTR_TO_JSON(TargetFacePicture, targetFacePicture_);
      DARABONBA_PTR_TO_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
    };
    friend void from_json(const Darabonba::Json& j, FaceCompareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FacePictureQualityCheck, facePictureQualityCheck_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(SourceFacePicture, sourceFacePicture_);
      DARABONBA_PTR_FROM_JSON(SourceFacePictureUrl, sourceFacePictureUrl_);
      DARABONBA_PTR_FROM_JSON(TargetFacePicture, targetFacePicture_);
      DARABONBA_PTR_FROM_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
    };
    FaceCompareRequest() = default ;
    FaceCompareRequest(const FaceCompareRequest &) = default ;
    FaceCompareRequest(FaceCompareRequest &&) = default ;
    FaceCompareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceCompareRequest() = default ;
    FaceCompareRequest& operator=(const FaceCompareRequest &) = default ;
    FaceCompareRequest& operator=(FaceCompareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->facePictureQualityCheck_ != nullptr
        && this->merchantBizId_ != nullptr && this->sourceFacePicture_ != nullptr && this->sourceFacePictureUrl_ != nullptr && this->targetFacePicture_ != nullptr && this->targetFacePictureUrl_ != nullptr; };
    // facePictureQualityCheck Field Functions 
    bool hasFacePictureQualityCheck() const { return this->facePictureQualityCheck_ != nullptr;};
    void deleteFacePictureQualityCheck() { this->facePictureQualityCheck_ = nullptr;};
    inline string facePictureQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(facePictureQualityCheck_, "") };
    inline FaceCompareRequest& setFacePictureQualityCheck(string facePictureQualityCheck) { DARABONBA_PTR_SET_VALUE(facePictureQualityCheck_, facePictureQualityCheck) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string merchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline FaceCompareRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // sourceFacePicture Field Functions 
    bool hasSourceFacePicture() const { return this->sourceFacePicture_ != nullptr;};
    void deleteSourceFacePicture() { this->sourceFacePicture_ = nullptr;};
    inline string sourceFacePicture() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePicture_, "") };
    inline FaceCompareRequest& setSourceFacePicture(string sourceFacePicture) { DARABONBA_PTR_SET_VALUE(sourceFacePicture_, sourceFacePicture) };


    // sourceFacePictureUrl Field Functions 
    bool hasSourceFacePictureUrl() const { return this->sourceFacePictureUrl_ != nullptr;};
    void deleteSourceFacePictureUrl() { this->sourceFacePictureUrl_ = nullptr;};
    inline string sourceFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePictureUrl_, "") };
    inline FaceCompareRequest& setSourceFacePictureUrl(string sourceFacePictureUrl) { DARABONBA_PTR_SET_VALUE(sourceFacePictureUrl_, sourceFacePictureUrl) };


    // targetFacePicture Field Functions 
    bool hasTargetFacePicture() const { return this->targetFacePicture_ != nullptr;};
    void deleteTargetFacePicture() { this->targetFacePicture_ = nullptr;};
    inline string targetFacePicture() const { DARABONBA_PTR_GET_DEFAULT(targetFacePicture_, "") };
    inline FaceCompareRequest& setTargetFacePicture(string targetFacePicture) { DARABONBA_PTR_SET_VALUE(targetFacePicture_, targetFacePicture) };


    // targetFacePictureUrl Field Functions 
    bool hasTargetFacePictureUrl() const { return this->targetFacePictureUrl_ != nullptr;};
    void deleteTargetFacePictureUrl() { this->targetFacePictureUrl_ = nullptr;};
    inline string targetFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(targetFacePictureUrl_, "") };
    inline FaceCompareRequest& setTargetFacePictureUrl(string targetFacePictureUrl) { DARABONBA_PTR_SET_VALUE(targetFacePictureUrl_, targetFacePictureUrl) };


  protected:
    std::shared_ptr<string> facePictureQualityCheck_ = nullptr;
    std::shared_ptr<string> merchantBizId_ = nullptr;
    std::shared_ptr<string> sourceFacePicture_ = nullptr;
    std::shared_ptr<string> sourceFacePictureUrl_ = nullptr;
    std::shared_ptr<string> targetFacePicture_ = nullptr;
    std::shared_ptr<string> targetFacePictureUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
