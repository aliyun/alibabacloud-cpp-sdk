// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGECACHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGECACHESRESPONSEBODY_HPP_
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
  class ListImageCachesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageCachesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageCaches, imageCaches_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageCachesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageCaches, imageCaches_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListImageCachesResponseBody() = default ;
    ListImageCachesResponseBody(const ListImageCachesResponseBody &) = default ;
    ListImageCachesResponseBody(ListImageCachesResponseBody &&) = default ;
    ListImageCachesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageCachesResponseBody() = default ;
    ListImageCachesResponseBody& operator=(const ListImageCachesResponseBody &) = default ;
    ListImageCachesResponseBody& operator=(ListImageCachesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageCaches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageCaches& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ImageCacheId, imageCacheId_);
        DARABONBA_PTR_TO_JSON(ImageCacheName, imageCacheName_);
        DARABONBA_PTR_TO_JSON(Images, images_);
        DARABONBA_PTR_TO_JSON(ReadyTime, readyTime_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ImageCaches& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ImageCacheId, imageCacheId_);
        DARABONBA_PTR_FROM_JSON(ImageCacheName, imageCacheName_);
        DARABONBA_PTR_FROM_JSON(Images, images_);
        DARABONBA_PTR_FROM_JSON(ReadyTime, readyTime_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ImageCaches() = default ;
      ImageCaches(const ImageCaches &) = default ;
      ImageCaches(ImageCaches &&) = default ;
      ImageCaches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageCaches() = default ;
      ImageCaches& operator=(const ImageCaches &) = default ;
      ImageCaches& operator=(ImageCaches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->imageCacheId_ == nullptr && this->imageCacheName_ == nullptr && this->images_ == nullptr && this->readyTime_ == nullptr && this->resourceGroupId_ == nullptr
        && this->size_ == nullptr && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ImageCaches& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // imageCacheId Field Functions 
      bool hasImageCacheId() const { return this->imageCacheId_ != nullptr;};
      void deleteImageCacheId() { this->imageCacheId_ = nullptr;};
      inline string getImageCacheId() const { DARABONBA_PTR_GET_DEFAULT(imageCacheId_, "") };
      inline ImageCaches& setImageCacheId(string imageCacheId) { DARABONBA_PTR_SET_VALUE(imageCacheId_, imageCacheId) };


      // imageCacheName Field Functions 
      bool hasImageCacheName() const { return this->imageCacheName_ != nullptr;};
      void deleteImageCacheName() { this->imageCacheName_ = nullptr;};
      inline string getImageCacheName() const { DARABONBA_PTR_GET_DEFAULT(imageCacheName_, "") };
      inline ImageCaches& setImageCacheName(string imageCacheName) { DARABONBA_PTR_SET_VALUE(imageCacheName_, imageCacheName) };


      // images Field Functions 
      bool hasImages() const { return this->images_ != nullptr;};
      void deleteImages() { this->images_ = nullptr;};
      inline const vector<string> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
      inline vector<string> getImages() { DARABONBA_PTR_GET(images_, vector<string>) };
      inline ImageCaches& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
      inline ImageCaches& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


      // readyTime Field Functions 
      bool hasReadyTime() const { return this->readyTime_ != nullptr;};
      void deleteReadyTime() { this->readyTime_ = nullptr;};
      inline string getReadyTime() const { DARABONBA_PTR_GET_DEFAULT(readyTime_, "") };
      inline ImageCaches& setReadyTime(string readyTime) { DARABONBA_PTR_SET_VALUE(readyTime_, readyTime) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ImageCaches& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline ImageCaches& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ImageCaches& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> imageCacheId_ {};
      shared_ptr<string> imageCacheName_ {};
      shared_ptr<vector<string>> images_ {};
      shared_ptr<string> readyTime_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<int32_t> size_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->imageCaches_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // imageCaches Field Functions 
    bool hasImageCaches() const { return this->imageCaches_ != nullptr;};
    void deleteImageCaches() { this->imageCaches_ = nullptr;};
    inline const vector<ListImageCachesResponseBody::ImageCaches> & getImageCaches() const { DARABONBA_PTR_GET_CONST(imageCaches_, vector<ListImageCachesResponseBody::ImageCaches>) };
    inline vector<ListImageCachesResponseBody::ImageCaches> getImageCaches() { DARABONBA_PTR_GET(imageCaches_, vector<ListImageCachesResponseBody::ImageCaches>) };
    inline ListImageCachesResponseBody& setImageCaches(const vector<ListImageCachesResponseBody::ImageCaches> & imageCaches) { DARABONBA_PTR_SET_VALUE(imageCaches_, imageCaches) };
    inline ListImageCachesResponseBody& setImageCaches(vector<ListImageCachesResponseBody::ImageCaches> && imageCaches) { DARABONBA_PTR_SET_RVALUE(imageCaches_, imageCaches) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListImageCachesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListImageCachesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageCachesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListImageCachesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListImageCachesResponseBody::ImageCaches>> imageCaches_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
