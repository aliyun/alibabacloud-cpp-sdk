// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERVIDEORESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERVIDEORESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterVideoResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterVideoResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(VideoResources, videoResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterVideoResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(VideoResources, videoResources_);
    };
    DescribeCasterVideoResourcesResponseBody() = default ;
    DescribeCasterVideoResourcesResponseBody(const DescribeCasterVideoResourcesResponseBody &) = default ;
    DescribeCasterVideoResourcesResponseBody(DescribeCasterVideoResourcesResponseBody &&) = default ;
    DescribeCasterVideoResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterVideoResourcesResponseBody() = default ;
    DescribeCasterVideoResourcesResponseBody& operator=(const DescribeCasterVideoResourcesResponseBody &) = default ;
    DescribeCasterVideoResourcesResponseBody& operator=(DescribeCasterVideoResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoResources& obj) { 
        DARABONBA_PTR_TO_JSON(VideoResource, videoResource_);
      };
      friend void from_json(const Darabonba::Json& j, VideoResources& obj) { 
        DARABONBA_PTR_FROM_JSON(VideoResource, videoResource_);
      };
      VideoResources() = default ;
      VideoResources(const VideoResources &) = default ;
      VideoResources(VideoResources &&) = default ;
      VideoResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoResources() = default ;
      VideoResources& operator=(const VideoResources &) = default ;
      VideoResources& operator=(VideoResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VideoResource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoResource& obj) { 
          DARABONBA_PTR_TO_JSON(BeginOffset, beginOffset_);
          DARABONBA_PTR_TO_JSON(EndOffset, endOffset_);
          DARABONBA_PTR_TO_JSON(FlvUrl, flvUrl_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(LiveStreamUrl, liveStreamUrl_);
          DARABONBA_PTR_TO_JSON(LocationId, locationId_);
          DARABONBA_PTR_TO_JSON(MaterialId, materialId_);
          DARABONBA_PTR_TO_JSON(PtsCallbackInterval, ptsCallbackInterval_);
          DARABONBA_PTR_TO_JSON(RepeatNum, repeatNum_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(VodUrl, vodUrl_);
        };
        friend void from_json(const Darabonba::Json& j, VideoResource& obj) { 
          DARABONBA_PTR_FROM_JSON(BeginOffset, beginOffset_);
          DARABONBA_PTR_FROM_JSON(EndOffset, endOffset_);
          DARABONBA_PTR_FROM_JSON(FlvUrl, flvUrl_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(LiveStreamUrl, liveStreamUrl_);
          DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
          DARABONBA_PTR_FROM_JSON(MaterialId, materialId_);
          DARABONBA_PTR_FROM_JSON(PtsCallbackInterval, ptsCallbackInterval_);
          DARABONBA_PTR_FROM_JSON(RepeatNum, repeatNum_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(VodUrl, vodUrl_);
        };
        VideoResource() = default ;
        VideoResource(const VideoResource &) = default ;
        VideoResource(VideoResource &&) = default ;
        VideoResource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoResource() = default ;
        VideoResource& operator=(const VideoResource &) = default ;
        VideoResource& operator=(VideoResource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginOffset_ == nullptr
        && this->endOffset_ == nullptr && this->flvUrl_ == nullptr && this->imageId_ == nullptr && this->imageUrl_ == nullptr && this->liveStreamUrl_ == nullptr
        && this->locationId_ == nullptr && this->materialId_ == nullptr && this->ptsCallbackInterval_ == nullptr && this->repeatNum_ == nullptr && this->resourceId_ == nullptr
        && this->resourceName_ == nullptr && this->vodUrl_ == nullptr; };
        // beginOffset Field Functions 
        bool hasBeginOffset() const { return this->beginOffset_ != nullptr;};
        void deleteBeginOffset() { this->beginOffset_ = nullptr;};
        inline int32_t getBeginOffset() const { DARABONBA_PTR_GET_DEFAULT(beginOffset_, 0) };
        inline VideoResource& setBeginOffset(int32_t beginOffset) { DARABONBA_PTR_SET_VALUE(beginOffset_, beginOffset) };


        // endOffset Field Functions 
        bool hasEndOffset() const { return this->endOffset_ != nullptr;};
        void deleteEndOffset() { this->endOffset_ = nullptr;};
        inline int32_t getEndOffset() const { DARABONBA_PTR_GET_DEFAULT(endOffset_, 0) };
        inline VideoResource& setEndOffset(int32_t endOffset) { DARABONBA_PTR_SET_VALUE(endOffset_, endOffset) };


        // flvUrl Field Functions 
        bool hasFlvUrl() const { return this->flvUrl_ != nullptr;};
        void deleteFlvUrl() { this->flvUrl_ = nullptr;};
        inline string getFlvUrl() const { DARABONBA_PTR_GET_DEFAULT(flvUrl_, "") };
        inline VideoResource& setFlvUrl(string flvUrl) { DARABONBA_PTR_SET_VALUE(flvUrl_, flvUrl) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline VideoResource& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline VideoResource& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // liveStreamUrl Field Functions 
        bool hasLiveStreamUrl() const { return this->liveStreamUrl_ != nullptr;};
        void deleteLiveStreamUrl() { this->liveStreamUrl_ = nullptr;};
        inline string getLiveStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(liveStreamUrl_, "") };
        inline VideoResource& setLiveStreamUrl(string liveStreamUrl) { DARABONBA_PTR_SET_VALUE(liveStreamUrl_, liveStreamUrl) };


        // locationId Field Functions 
        bool hasLocationId() const { return this->locationId_ != nullptr;};
        void deleteLocationId() { this->locationId_ = nullptr;};
        inline string getLocationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, "") };
        inline VideoResource& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


        // materialId Field Functions 
        bool hasMaterialId() const { return this->materialId_ != nullptr;};
        void deleteMaterialId() { this->materialId_ = nullptr;};
        inline string getMaterialId() const { DARABONBA_PTR_GET_DEFAULT(materialId_, "") };
        inline VideoResource& setMaterialId(string materialId) { DARABONBA_PTR_SET_VALUE(materialId_, materialId) };


        // ptsCallbackInterval Field Functions 
        bool hasPtsCallbackInterval() const { return this->ptsCallbackInterval_ != nullptr;};
        void deletePtsCallbackInterval() { this->ptsCallbackInterval_ = nullptr;};
        inline int32_t getPtsCallbackInterval() const { DARABONBA_PTR_GET_DEFAULT(ptsCallbackInterval_, 0) };
        inline VideoResource& setPtsCallbackInterval(int32_t ptsCallbackInterval) { DARABONBA_PTR_SET_VALUE(ptsCallbackInterval_, ptsCallbackInterval) };


        // repeatNum Field Functions 
        bool hasRepeatNum() const { return this->repeatNum_ != nullptr;};
        void deleteRepeatNum() { this->repeatNum_ = nullptr;};
        inline int32_t getRepeatNum() const { DARABONBA_PTR_GET_DEFAULT(repeatNum_, 0) };
        inline VideoResource& setRepeatNum(int32_t repeatNum) { DARABONBA_PTR_SET_VALUE(repeatNum_, repeatNum) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline VideoResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline VideoResource& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // vodUrl Field Functions 
        bool hasVodUrl() const { return this->vodUrl_ != nullptr;};
        void deleteVodUrl() { this->vodUrl_ = nullptr;};
        inline string getVodUrl() const { DARABONBA_PTR_GET_DEFAULT(vodUrl_, "") };
        inline VideoResource& setVodUrl(string vodUrl) { DARABONBA_PTR_SET_VALUE(vodUrl_, vodUrl) };


      protected:
        shared_ptr<int32_t> beginOffset_ {};
        shared_ptr<int32_t> endOffset_ {};
        shared_ptr<string> flvUrl_ {};
        shared_ptr<string> imageId_ {};
        shared_ptr<string> imageUrl_ {};
        shared_ptr<string> liveStreamUrl_ {};
        shared_ptr<string> locationId_ {};
        shared_ptr<string> materialId_ {};
        shared_ptr<int32_t> ptsCallbackInterval_ {};
        shared_ptr<int32_t> repeatNum_ {};
        shared_ptr<string> resourceId_ {};
        shared_ptr<string> resourceName_ {};
        shared_ptr<string> vodUrl_ {};
      };

      virtual bool empty() const override { return this->videoResource_ == nullptr; };
      // videoResource Field Functions 
      bool hasVideoResource() const { return this->videoResource_ != nullptr;};
      void deleteVideoResource() { this->videoResource_ = nullptr;};
      inline const vector<VideoResources::VideoResource> & getVideoResource() const { DARABONBA_PTR_GET_CONST(videoResource_, vector<VideoResources::VideoResource>) };
      inline vector<VideoResources::VideoResource> getVideoResource() { DARABONBA_PTR_GET(videoResource_, vector<VideoResources::VideoResource>) };
      inline VideoResources& setVideoResource(const vector<VideoResources::VideoResource> & videoResource) { DARABONBA_PTR_SET_VALUE(videoResource_, videoResource) };
      inline VideoResources& setVideoResource(vector<VideoResources::VideoResource> && videoResource) { DARABONBA_PTR_SET_RVALUE(videoResource_, videoResource) };


    protected:
      shared_ptr<vector<VideoResources::VideoResource>> videoResource_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->total_ == nullptr && this->videoResources_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterVideoResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCasterVideoResourcesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // videoResources Field Functions 
    bool hasVideoResources() const { return this->videoResources_ != nullptr;};
    void deleteVideoResources() { this->videoResources_ = nullptr;};
    inline const DescribeCasterVideoResourcesResponseBody::VideoResources & getVideoResources() const { DARABONBA_PTR_GET_CONST(videoResources_, DescribeCasterVideoResourcesResponseBody::VideoResources) };
    inline DescribeCasterVideoResourcesResponseBody::VideoResources getVideoResources() { DARABONBA_PTR_GET(videoResources_, DescribeCasterVideoResourcesResponseBody::VideoResources) };
    inline DescribeCasterVideoResourcesResponseBody& setVideoResources(const DescribeCasterVideoResourcesResponseBody::VideoResources & videoResources) { DARABONBA_PTR_SET_VALUE(videoResources_, videoResources) };
    inline DescribeCasterVideoResourcesResponseBody& setVideoResources(DescribeCasterVideoResourcesResponseBody::VideoResources && videoResources) { DARABONBA_PTR_SET_RVALUE(videoResources_, videoResources) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> total_ {};
    shared_ptr<DescribeCasterVideoResourcesResponseBody::VideoResources> videoResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
