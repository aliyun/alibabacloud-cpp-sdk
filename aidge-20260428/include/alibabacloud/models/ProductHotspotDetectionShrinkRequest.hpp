// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTHOTSPOTDETECTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTHOTSPOTDETECTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ProductHotspotDetectionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductHotspotDetectionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReferenceImageUrls, referenceImageUrlsShrink_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
      DARABONBA_PTR_TO_JSON(TargetImageUrl, targetImageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ProductHotspotDetectionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReferenceImageUrls, referenceImageUrlsShrink_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
      DARABONBA_PTR_FROM_JSON(TargetImageUrl, targetImageUrl_);
    };
    ProductHotspotDetectionShrinkRequest() = default ;
    ProductHotspotDetectionShrinkRequest(const ProductHotspotDetectionShrinkRequest &) = default ;
    ProductHotspotDetectionShrinkRequest(ProductHotspotDetectionShrinkRequest &&) = default ;
    ProductHotspotDetectionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductHotspotDetectionShrinkRequest() = default ;
    ProductHotspotDetectionShrinkRequest& operator=(const ProductHotspotDetectionShrinkRequest &) = default ;
    ProductHotspotDetectionShrinkRequest& operator=(ProductHotspotDetectionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->referenceImageUrlsShrink_ == nullptr
        && this->reqId_ == nullptr && this->targetImageUrl_ == nullptr; };
    // referenceImageUrlsShrink Field Functions 
    bool hasReferenceImageUrlsShrink() const { return this->referenceImageUrlsShrink_ != nullptr;};
    void deleteReferenceImageUrlsShrink() { this->referenceImageUrlsShrink_ = nullptr;};
    inline string getReferenceImageUrlsShrink() const { DARABONBA_PTR_GET_DEFAULT(referenceImageUrlsShrink_, "") };
    inline ProductHotspotDetectionShrinkRequest& setReferenceImageUrlsShrink(string referenceImageUrlsShrink) { DARABONBA_PTR_SET_VALUE(referenceImageUrlsShrink_, referenceImageUrlsShrink) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline ProductHotspotDetectionShrinkRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    // targetImageUrl Field Functions 
    bool hasTargetImageUrl() const { return this->targetImageUrl_ != nullptr;};
    void deleteTargetImageUrl() { this->targetImageUrl_ = nullptr;};
    inline string getTargetImageUrl() const { DARABONBA_PTR_GET_DEFAULT(targetImageUrl_, "") };
    inline ProductHotspotDetectionShrinkRequest& setTargetImageUrl(string targetImageUrl) { DARABONBA_PTR_SET_VALUE(targetImageUrl_, targetImageUrl) };


  protected:
    // The HTTPS URLs of reference images that define the SKU whitelist. A maximum of 20 images are supported.
    // 
    // This parameter is required.
    shared_ptr<string> referenceImageUrlsShrink_ {};
    // The unique business ID for this single-scene call.
    shared_ptr<string> reqId_ {};
    // The HTTPS OSS or CDN URL of the target image to be annotated with bounding boxes.
    // 
    // This parameter is required.
    shared_ptr<string> targetImageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
