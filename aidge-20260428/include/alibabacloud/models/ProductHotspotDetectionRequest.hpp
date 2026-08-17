// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTHOTSPOTDETECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTHOTSPOTDETECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ProductHotspotDetectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductHotspotDetectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReferenceImageUrls, referenceImageUrls_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
      DARABONBA_PTR_TO_JSON(TargetImageUrl, targetImageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ProductHotspotDetectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReferenceImageUrls, referenceImageUrls_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
      DARABONBA_PTR_FROM_JSON(TargetImageUrl, targetImageUrl_);
    };
    ProductHotspotDetectionRequest() = default ;
    ProductHotspotDetectionRequest(const ProductHotspotDetectionRequest &) = default ;
    ProductHotspotDetectionRequest(ProductHotspotDetectionRequest &&) = default ;
    ProductHotspotDetectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductHotspotDetectionRequest() = default ;
    ProductHotspotDetectionRequest& operator=(const ProductHotspotDetectionRequest &) = default ;
    ProductHotspotDetectionRequest& operator=(ProductHotspotDetectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->referenceImageUrls_ == nullptr
        && this->reqId_ == nullptr && this->targetImageUrl_ == nullptr; };
    // referenceImageUrls Field Functions 
    bool hasReferenceImageUrls() const { return this->referenceImageUrls_ != nullptr;};
    void deleteReferenceImageUrls() { this->referenceImageUrls_ = nullptr;};
    inline const vector<string> & getReferenceImageUrls() const { DARABONBA_PTR_GET_CONST(referenceImageUrls_, vector<string>) };
    inline vector<string> getReferenceImageUrls() { DARABONBA_PTR_GET(referenceImageUrls_, vector<string>) };
    inline ProductHotspotDetectionRequest& setReferenceImageUrls(const vector<string> & referenceImageUrls) { DARABONBA_PTR_SET_VALUE(referenceImageUrls_, referenceImageUrls) };
    inline ProductHotspotDetectionRequest& setReferenceImageUrls(vector<string> && referenceImageUrls) { DARABONBA_PTR_SET_RVALUE(referenceImageUrls_, referenceImageUrls) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline ProductHotspotDetectionRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    // targetImageUrl Field Functions 
    bool hasTargetImageUrl() const { return this->targetImageUrl_ != nullptr;};
    void deleteTargetImageUrl() { this->targetImageUrl_ = nullptr;};
    inline string getTargetImageUrl() const { DARABONBA_PTR_GET_DEFAULT(targetImageUrl_, "") };
    inline ProductHotspotDetectionRequest& setTargetImageUrl(string targetImageUrl) { DARABONBA_PTR_SET_VALUE(targetImageUrl_, targetImageUrl) };


  protected:
    // The HTTPS URLs of reference images that define the SKU whitelist. A maximum of 20 images are supported.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> referenceImageUrls_ {};
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
