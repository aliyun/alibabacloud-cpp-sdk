// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGECACHERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGECACHERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetImageCacheResponseBodyEvents.hpp>
#include <alibabacloud/models/GetImageCacheResponseBodyNetworkConfig.hpp>
#include <alibabacloud/models/GetImageCacheResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class GetImageCacheResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageCacheResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(ImageCacheId, imageCacheId_);
      DARABONBA_PTR_TO_JSON(ImageCacheName, imageCacheName_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(NetworkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(ReadyTime, readyTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageCacheResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(ImageCacheId, imageCacheId_);
      DARABONBA_PTR_FROM_JSON(ImageCacheName, imageCacheName_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(NetworkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(ReadyTime, readyTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetImageCacheResponseBody() = default ;
    GetImageCacheResponseBody(const GetImageCacheResponseBody &) = default ;
    GetImageCacheResponseBody(GetImageCacheResponseBody &&) = default ;
    GetImageCacheResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageCacheResponseBody() = default ;
    GetImageCacheResponseBody& operator=(const GetImageCacheResponseBody &) = default ;
    GetImageCacheResponseBody& operator=(GetImageCacheResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->events_ != nullptr && this->imageCacheId_ != nullptr && this->imageCacheName_ != nullptr && this->images_ != nullptr && this->networkConfig_ != nullptr
        && this->paymentType_ != nullptr && this->readyTime_ != nullptr && this->regionId_ != nullptr && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->size_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetImageCacheResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<GetImageCacheResponseBodyEvents> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<GetImageCacheResponseBodyEvents>) };
    inline vector<GetImageCacheResponseBodyEvents> events() { DARABONBA_PTR_GET(events_, vector<GetImageCacheResponseBodyEvents>) };
    inline GetImageCacheResponseBody& setEvents(const vector<GetImageCacheResponseBodyEvents> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline GetImageCacheResponseBody& setEvents(vector<GetImageCacheResponseBodyEvents> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // imageCacheId Field Functions 
    bool hasImageCacheId() const { return this->imageCacheId_ != nullptr;};
    void deleteImageCacheId() { this->imageCacheId_ = nullptr;};
    inline string imageCacheId() const { DARABONBA_PTR_GET_DEFAULT(imageCacheId_, "") };
    inline GetImageCacheResponseBody& setImageCacheId(string imageCacheId) { DARABONBA_PTR_SET_VALUE(imageCacheId_, imageCacheId) };


    // imageCacheName Field Functions 
    bool hasImageCacheName() const { return this->imageCacheName_ != nullptr;};
    void deleteImageCacheName() { this->imageCacheName_ = nullptr;};
    inline string imageCacheName() const { DARABONBA_PTR_GET_DEFAULT(imageCacheName_, "") };
    inline GetImageCacheResponseBody& setImageCacheName(string imageCacheName) { DARABONBA_PTR_SET_VALUE(imageCacheName_, imageCacheName) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<string> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
    inline vector<string> images() { DARABONBA_PTR_GET(images_, vector<string>) };
    inline GetImageCacheResponseBody& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline GetImageCacheResponseBody& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const GetImageCacheResponseBodyNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, GetImageCacheResponseBodyNetworkConfig) };
    inline GetImageCacheResponseBodyNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, GetImageCacheResponseBodyNetworkConfig) };
    inline GetImageCacheResponseBody& setNetworkConfig(const GetImageCacheResponseBodyNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline GetImageCacheResponseBody& setNetworkConfig(GetImageCacheResponseBodyNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline GetImageCacheResponseBody& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // readyTime Field Functions 
    bool hasReadyTime() const { return this->readyTime_ != nullptr;};
    void deleteReadyTime() { this->readyTime_ = nullptr;};
    inline string readyTime() const { DARABONBA_PTR_GET_DEFAULT(readyTime_, "") };
    inline GetImageCacheResponseBody& setReadyTime(string readyTime) { DARABONBA_PTR_SET_VALUE(readyTime_, readyTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetImageCacheResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageCacheResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetImageCacheResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetImageCacheResponseBody& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetImageCacheResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetImageCacheResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetImageCacheResponseBodyTags>) };
    inline vector<GetImageCacheResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetImageCacheResponseBodyTags>) };
    inline GetImageCacheResponseBody& setTags(const vector<GetImageCacheResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetImageCacheResponseBody& setTags(vector<GetImageCacheResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<vector<GetImageCacheResponseBodyEvents>> events_ = nullptr;
    std::shared_ptr<string> imageCacheId_ = nullptr;
    std::shared_ptr<string> imageCacheName_ = nullptr;
    std::shared_ptr<vector<string>> images_ = nullptr;
    std::shared_ptr<GetImageCacheResponseBodyNetworkConfig> networkConfig_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> readyTime_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<GetImageCacheResponseBodyTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
