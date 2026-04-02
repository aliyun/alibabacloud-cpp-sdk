// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACECOMPAREV2ADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FACECOMPAREV2ADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceCompareV2AdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceCompareV2AdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FacePictureQualityCheck, facePictureQualityCheck_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(SourceFacePicture, sourceFacePicture_);
      // sourceFacePictureFileObject_ is stream
      DARABONBA_PTR_TO_JSON(SourceFacePictureUrl, sourceFacePictureUrl_);
      DARABONBA_PTR_TO_JSON(TargetFacePicture, targetFacePicture_);
      // targetFacePictureFileObject_ is stream
      DARABONBA_PTR_TO_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
    };
    friend void from_json(const Darabonba::Json& j, FaceCompareV2AdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FacePictureQualityCheck, facePictureQualityCheck_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(SourceFacePicture, sourceFacePicture_);
      // sourceFacePictureFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(SourceFacePictureUrl, sourceFacePictureUrl_);
      DARABONBA_PTR_FROM_JSON(TargetFacePicture, targetFacePicture_);
      // targetFacePictureFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(TargetFacePictureUrl, targetFacePictureUrl_);
    };
    FaceCompareV2AdvanceRequest() = default ;
    FaceCompareV2AdvanceRequest(const FaceCompareV2AdvanceRequest &) = default ;
    FaceCompareV2AdvanceRequest(FaceCompareV2AdvanceRequest &&) = default ;
    FaceCompareV2AdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceCompareV2AdvanceRequest() = default ;
    FaceCompareV2AdvanceRequest& operator=(const FaceCompareV2AdvanceRequest &) = default ;
    FaceCompareV2AdvanceRequest& operator=(FaceCompareV2AdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->facePictureQualityCheck_ == nullptr
        && this->merchantBizId_ == nullptr && this->sourceFacePicture_ == nullptr && this->sourceFacePictureFileObject_ == nullptr && this->sourceFacePictureUrl_ == nullptr && this->targetFacePicture_ == nullptr
        && this->targetFacePictureFileObject_ == nullptr && this->targetFacePictureUrl_ == nullptr; };
    // facePictureQualityCheck Field Functions 
    bool hasFacePictureQualityCheck() const { return this->facePictureQualityCheck_ != nullptr;};
    void deleteFacePictureQualityCheck() { this->facePictureQualityCheck_ = nullptr;};
    inline string getFacePictureQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(facePictureQualityCheck_, "") };
    inline FaceCompareV2AdvanceRequest& setFacePictureQualityCheck(string facePictureQualityCheck) { DARABONBA_PTR_SET_VALUE(facePictureQualityCheck_, facePictureQualityCheck) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline FaceCompareV2AdvanceRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // sourceFacePicture Field Functions 
    bool hasSourceFacePicture() const { return this->sourceFacePicture_ != nullptr;};
    void deleteSourceFacePicture() { this->sourceFacePicture_ = nullptr;};
    inline string getSourceFacePicture() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePicture_, "") };
    inline FaceCompareV2AdvanceRequest& setSourceFacePicture(string sourceFacePicture) { DARABONBA_PTR_SET_VALUE(sourceFacePicture_, sourceFacePicture) };


    // sourceFacePictureFileObject Field Functions 
    bool hasSourceFacePictureFileObject() const { return this->sourceFacePictureFileObject_ != nullptr;};
    void deleteSourceFacePictureFileObject() { this->sourceFacePictureFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getSourceFacePictureFileObject() const { DARABONBA_GET(sourceFacePictureFileObject_) };
    inline FaceCompareV2AdvanceRequest& setSourceFacePictureFileObject(shared_ptr<Darabonba::IStream> sourceFacePictureFileObject) { DARABONBA_SET_VALUE(sourceFacePictureFileObject_, sourceFacePictureFileObject) };


    // sourceFacePictureUrl Field Functions 
    bool hasSourceFacePictureUrl() const { return this->sourceFacePictureUrl_ != nullptr;};
    void deleteSourceFacePictureUrl() { this->sourceFacePictureUrl_ = nullptr;};
    inline string getSourceFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePictureUrl_, "") };
    inline FaceCompareV2AdvanceRequest& setSourceFacePictureUrl(string sourceFacePictureUrl) { DARABONBA_PTR_SET_VALUE(sourceFacePictureUrl_, sourceFacePictureUrl) };


    // targetFacePicture Field Functions 
    bool hasTargetFacePicture() const { return this->targetFacePicture_ != nullptr;};
    void deleteTargetFacePicture() { this->targetFacePicture_ = nullptr;};
    inline string getTargetFacePicture() const { DARABONBA_PTR_GET_DEFAULT(targetFacePicture_, "") };
    inline FaceCompareV2AdvanceRequest& setTargetFacePicture(string targetFacePicture) { DARABONBA_PTR_SET_VALUE(targetFacePicture_, targetFacePicture) };


    // targetFacePictureFileObject Field Functions 
    bool hasTargetFacePictureFileObject() const { return this->targetFacePictureFileObject_ != nullptr;};
    void deleteTargetFacePictureFileObject() { this->targetFacePictureFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getTargetFacePictureFileObject() const { DARABONBA_GET(targetFacePictureFileObject_) };
    inline FaceCompareV2AdvanceRequest& setTargetFacePictureFileObject(shared_ptr<Darabonba::IStream> targetFacePictureFileObject) { DARABONBA_SET_VALUE(targetFacePictureFileObject_, targetFacePictureFileObject) };


    // targetFacePictureUrl Field Functions 
    bool hasTargetFacePictureUrl() const { return this->targetFacePictureUrl_ != nullptr;};
    void deleteTargetFacePictureUrl() { this->targetFacePictureUrl_ = nullptr;};
    inline string getTargetFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(targetFacePictureUrl_, "") };
    inline FaceCompareV2AdvanceRequest& setTargetFacePictureUrl(string targetFacePictureUrl) { DARABONBA_PTR_SET_VALUE(targetFacePictureUrl_, targetFacePictureUrl) };


  protected:
    shared_ptr<string> facePictureQualityCheck_ {};
    shared_ptr<string> merchantBizId_ {};
    shared_ptr<string> sourceFacePicture_ {};
    shared_ptr<Darabonba::IStream> sourceFacePictureFileObject_ {};
    shared_ptr<string> sourceFacePictureUrl_ {};
    shared_ptr<string> targetFacePicture_ {};
    shared_ptr<Darabonba::IStream> targetFacePictureFileObject_ {};
    shared_ptr<string> targetFacePictureUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
