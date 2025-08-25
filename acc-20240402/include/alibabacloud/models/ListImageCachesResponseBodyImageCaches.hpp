// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGECACHESRESPONSEBODYIMAGECACHES_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGECACHESRESPONSEBODYIMAGECACHES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class ListImageCachesResponseBodyImageCaches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageCachesResponseBodyImageCaches& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ImageCacheId, imageCacheId_);
      DARABONBA_PTR_TO_JSON(ImageCacheName, imageCacheName_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(ReadyTime, readyTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageCachesResponseBodyImageCaches& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ImageCacheId, imageCacheId_);
      DARABONBA_PTR_FROM_JSON(ImageCacheName, imageCacheName_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(ReadyTime, readyTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListImageCachesResponseBodyImageCaches() = default ;
    ListImageCachesResponseBodyImageCaches(const ListImageCachesResponseBodyImageCaches &) = default ;
    ListImageCachesResponseBodyImageCaches(ListImageCachesResponseBodyImageCaches &&) = default ;
    ListImageCachesResponseBodyImageCaches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageCachesResponseBodyImageCaches() = default ;
    ListImageCachesResponseBodyImageCaches& operator=(const ListImageCachesResponseBodyImageCaches &) = default ;
    ListImageCachesResponseBodyImageCaches& operator=(ListImageCachesResponseBodyImageCaches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->imageCacheId_ != nullptr && this->imageCacheName_ != nullptr && this->images_ != nullptr && this->readyTime_ != nullptr && this->resourceGroupId_ != nullptr
        && this->size_ != nullptr && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListImageCachesResponseBodyImageCaches& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // imageCacheId Field Functions 
    bool hasImageCacheId() const { return this->imageCacheId_ != nullptr;};
    void deleteImageCacheId() { this->imageCacheId_ = nullptr;};
    inline string imageCacheId() const { DARABONBA_PTR_GET_DEFAULT(imageCacheId_, "") };
    inline ListImageCachesResponseBodyImageCaches& setImageCacheId(string imageCacheId) { DARABONBA_PTR_SET_VALUE(imageCacheId_, imageCacheId) };


    // imageCacheName Field Functions 
    bool hasImageCacheName() const { return this->imageCacheName_ != nullptr;};
    void deleteImageCacheName() { this->imageCacheName_ = nullptr;};
    inline string imageCacheName() const { DARABONBA_PTR_GET_DEFAULT(imageCacheName_, "") };
    inline ListImageCachesResponseBodyImageCaches& setImageCacheName(string imageCacheName) { DARABONBA_PTR_SET_VALUE(imageCacheName_, imageCacheName) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<string> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
    inline vector<string> images() { DARABONBA_PTR_GET(images_, vector<string>) };
    inline ListImageCachesResponseBodyImageCaches& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline ListImageCachesResponseBodyImageCaches& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // readyTime Field Functions 
    bool hasReadyTime() const { return this->readyTime_ != nullptr;};
    void deleteReadyTime() { this->readyTime_ = nullptr;};
    inline string readyTime() const { DARABONBA_PTR_GET_DEFAULT(readyTime_, "") };
    inline ListImageCachesResponseBodyImageCaches& setReadyTime(string readyTime) { DARABONBA_PTR_SET_VALUE(readyTime_, readyTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListImageCachesResponseBodyImageCaches& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListImageCachesResponseBodyImageCaches& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListImageCachesResponseBodyImageCaches& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> imageCacheId_ = nullptr;
    std::shared_ptr<string> imageCacheName_ = nullptr;
    std::shared_ptr<vector<string>> images_ = nullptr;
    std::shared_ptr<string> readyTime_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
