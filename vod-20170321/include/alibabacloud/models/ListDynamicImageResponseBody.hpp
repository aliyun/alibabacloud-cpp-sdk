// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListDynamicImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicImageList, dynamicImageList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicImageList, dynamicImageList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDynamicImageResponseBody() = default ;
    ListDynamicImageResponseBody(const ListDynamicImageResponseBody &) = default ;
    ListDynamicImageResponseBody(ListDynamicImageResponseBody &&) = default ;
    ListDynamicImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicImageResponseBody() = default ;
    ListDynamicImageResponseBody& operator=(const ListDynamicImageResponseBody &) = default ;
    ListDynamicImageResponseBody& operator=(ListDynamicImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DynamicImageList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DynamicImageList& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(DynamicImageId, dynamicImageId_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(Fps, fps_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(VideoId, videoId_);
        DARABONBA_PTR_TO_JSON(Width, width_);
      };
      friend void from_json(const Darabonba::Json& j, DynamicImageList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(DynamicImageId, dynamicImageId_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(Fps, fps_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
      };
      DynamicImageList() = default ;
      DynamicImageList(const DynamicImageList &) = default ;
      DynamicImageList(DynamicImageList &&) = default ;
      DynamicImageList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DynamicImageList() = default ;
      DynamicImageList& operator=(const DynamicImageList &) = default ;
      DynamicImageList& operator=(DynamicImageList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->duration_ == nullptr && this->dynamicImageId_ == nullptr && this->fileSize_ == nullptr && this->fileURL_ == nullptr && this->format_ == nullptr
        && this->fps_ == nullptr && this->height_ == nullptr && this->jobId_ == nullptr && this->videoId_ == nullptr && this->width_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline DynamicImageList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline DynamicImageList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // dynamicImageId Field Functions 
      bool hasDynamicImageId() const { return this->dynamicImageId_ != nullptr;};
      void deleteDynamicImageId() { this->dynamicImageId_ = nullptr;};
      inline string getDynamicImageId() const { DARABONBA_PTR_GET_DEFAULT(dynamicImageId_, "") };
      inline DynamicImageList& setDynamicImageId(string dynamicImageId) { DARABONBA_PTR_SET_VALUE(dynamicImageId_, dynamicImageId) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
      inline DynamicImageList& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // fileURL Field Functions 
      bool hasFileURL() const { return this->fileURL_ != nullptr;};
      void deleteFileURL() { this->fileURL_ = nullptr;};
      inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
      inline DynamicImageList& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline DynamicImageList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // fps Field Functions 
      bool hasFps() const { return this->fps_ != nullptr;};
      void deleteFps() { this->fps_ = nullptr;};
      inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
      inline DynamicImageList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
      inline DynamicImageList& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline DynamicImageList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // videoId Field Functions 
      bool hasVideoId() const { return this->videoId_ != nullptr;};
      void deleteVideoId() { this->videoId_ = nullptr;};
      inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
      inline DynamicImageList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
      inline DynamicImageList& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    protected:
      // The time when the animated sticker was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The duration of the animated sticker. Unit: seconds.
      shared_ptr<string> duration_ {};
      // The ID of the animated sticker.
      shared_ptr<string> dynamicImageId_ {};
      // The size of the animated sticker file. Unit: byte.
      shared_ptr<string> fileSize_ {};
      // The URL of the animated sticker file.
      shared_ptr<string> fileURL_ {};
      // The format of the animated sticker. Valid values: gif and webp.
      shared_ptr<string> format_ {};
      // The frame rate of the animated sticker. Unit: frames per second.
      shared_ptr<string> fps_ {};
      // The height of the animated sticker. Unit: pixel.
      shared_ptr<string> height_ {};
      // The job ID for creating the animated sticker.
      shared_ptr<string> jobId_ {};
      // The ID of the video.
      shared_ptr<string> videoId_ {};
      // The width of the animated sticker. Unit: pixel.
      shared_ptr<string> width_ {};
    };

    virtual bool empty() const override { return this->dynamicImageList_ == nullptr
        && this->requestId_ == nullptr; };
    // dynamicImageList Field Functions 
    bool hasDynamicImageList() const { return this->dynamicImageList_ != nullptr;};
    void deleteDynamicImageList() { this->dynamicImageList_ = nullptr;};
    inline const vector<ListDynamicImageResponseBody::DynamicImageList> & getDynamicImageList() const { DARABONBA_PTR_GET_CONST(dynamicImageList_, vector<ListDynamicImageResponseBody::DynamicImageList>) };
    inline vector<ListDynamicImageResponseBody::DynamicImageList> getDynamicImageList() { DARABONBA_PTR_GET(dynamicImageList_, vector<ListDynamicImageResponseBody::DynamicImageList>) };
    inline ListDynamicImageResponseBody& setDynamicImageList(const vector<ListDynamicImageResponseBody::DynamicImageList> & dynamicImageList) { DARABONBA_PTR_SET_VALUE(dynamicImageList_, dynamicImageList) };
    inline ListDynamicImageResponseBody& setDynamicImageList(vector<ListDynamicImageResponseBody::DynamicImageList> && dynamicImageList) { DARABONBA_PTR_SET_RVALUE(dynamicImageList_, dynamicImageList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDynamicImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of animated stickers.
    shared_ptr<vector<ListDynamicImageResponseBody::DynamicImageList>> dynamicImageList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
