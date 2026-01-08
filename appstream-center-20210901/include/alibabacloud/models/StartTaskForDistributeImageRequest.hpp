// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTTASKFORDISTRIBUTEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTTASKFORDISTRIBUTEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class StartTaskForDistributeImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartTaskForDistributeImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationRegionList, destinationRegionList_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RetryType, retryType_);
      DARABONBA_PTR_TO_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, StartTaskForDistributeImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationRegionList, destinationRegionList_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RetryType, retryType_);
      DARABONBA_PTR_FROM_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    StartTaskForDistributeImageRequest() = default ;
    StartTaskForDistributeImageRequest(const StartTaskForDistributeImageRequest &) = default ;
    StartTaskForDistributeImageRequest(StartTaskForDistributeImageRequest &&) = default ;
    StartTaskForDistributeImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartTaskForDistributeImageRequest() = default ;
    StartTaskForDistributeImageRequest& operator=(const StartTaskForDistributeImageRequest &) = default ;
    StartTaskForDistributeImageRequest& operator=(StartTaskForDistributeImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationRegionList_ == nullptr
        && this->imageId_ == nullptr && this->productType_ == nullptr && this->retryType_ == nullptr && this->sourceRegion_ == nullptr && this->versionId_ == nullptr; };
    // destinationRegionList Field Functions 
    bool hasDestinationRegionList() const { return this->destinationRegionList_ != nullptr;};
    void deleteDestinationRegionList() { this->destinationRegionList_ = nullptr;};
    inline const vector<string> & getDestinationRegionList() const { DARABONBA_PTR_GET_CONST(destinationRegionList_, vector<string>) };
    inline vector<string> getDestinationRegionList() { DARABONBA_PTR_GET(destinationRegionList_, vector<string>) };
    inline StartTaskForDistributeImageRequest& setDestinationRegionList(const vector<string> & destinationRegionList) { DARABONBA_PTR_SET_VALUE(destinationRegionList_, destinationRegionList) };
    inline StartTaskForDistributeImageRequest& setDestinationRegionList(vector<string> && destinationRegionList) { DARABONBA_PTR_SET_RVALUE(destinationRegionList_, destinationRegionList) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline StartTaskForDistributeImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline StartTaskForDistributeImageRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // retryType Field Functions 
    bool hasRetryType() const { return this->retryType_ != nullptr;};
    void deleteRetryType() { this->retryType_ = nullptr;};
    inline string getRetryType() const { DARABONBA_PTR_GET_DEFAULT(retryType_, "") };
    inline StartTaskForDistributeImageRequest& setRetryType(string retryType) { DARABONBA_PTR_SET_VALUE(retryType_, retryType) };


    // sourceRegion Field Functions 
    bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
    void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
    inline string getSourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
    inline StartTaskForDistributeImageRequest& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline StartTaskForDistributeImageRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The regions to which you want to replicate the image.
    shared_ptr<vector<string>> destinationRegionList_ {};
    // The image ID.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The product type.
    // 
    // Valid values:
    // 
    // *   CloudDesktop: Elastic Desktop Service
    // *   CloudApp: App Streaming
    // *   WuyingServer: Workstation
    shared_ptr<string> productType_ {};
    // This parameter is not publicly available.
    shared_ptr<string> retryType_ {};
    // The region where the source image is located. If you leave this parameter empty, a random region is selected.
    shared_ptr<string> sourceRegion_ {};
    // The ID of the image version. If you do not specify this parameter, the latest image version is used by default.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
