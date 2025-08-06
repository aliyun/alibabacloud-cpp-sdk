// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICIMAGERESPONSEBODYDYNAMICIMAGELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICIMAGERESPONSEBODYDYNAMICIMAGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListDynamicImageResponseBodyDynamicImageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicImageResponseBodyDynamicImageList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListDynamicImageResponseBodyDynamicImageList& obj) { 
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
    ListDynamicImageResponseBodyDynamicImageList() = default ;
    ListDynamicImageResponseBodyDynamicImageList(const ListDynamicImageResponseBodyDynamicImageList &) = default ;
    ListDynamicImageResponseBodyDynamicImageList(ListDynamicImageResponseBodyDynamicImageList &&) = default ;
    ListDynamicImageResponseBodyDynamicImageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicImageResponseBodyDynamicImageList() = default ;
    ListDynamicImageResponseBodyDynamicImageList& operator=(const ListDynamicImageResponseBodyDynamicImageList &) = default ;
    ListDynamicImageResponseBodyDynamicImageList& operator=(ListDynamicImageResponseBodyDynamicImageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->duration_ != nullptr && this->dynamicImageId_ != nullptr && this->fileSize_ != nullptr && this->fileURL_ != nullptr && this->format_ != nullptr
        && this->fps_ != nullptr && this->height_ != nullptr && this->jobId_ != nullptr && this->videoId_ != nullptr && this->width_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListDynamicImageResponseBodyDynamicImageList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline ListDynamicImageResponseBodyDynamicImageList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // dynamicImageId Field Functions 
    bool hasDynamicImageId() const { return this->dynamicImageId_ != nullptr;};
    void deleteDynamicImageId() { this->dynamicImageId_ = nullptr;};
    inline string dynamicImageId() const { DARABONBA_PTR_GET_DEFAULT(dynamicImageId_, "") };
    inline ListDynamicImageResponseBodyDynamicImageList& setDynamicImageId(string dynamicImageId) { DARABONBA_PTR_SET_VALUE(dynamicImageId_, dynamicImageId) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline string fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
    inline ListDynamicImageResponseBodyDynamicImageList& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline ListDynamicImageResponseBodyDynamicImageList& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline ListDynamicImageResponseBodyDynamicImageList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline ListDynamicImageResponseBodyDynamicImageList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline ListDynamicImageResponseBodyDynamicImageList& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListDynamicImageResponseBodyDynamicImageList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline ListDynamicImageResponseBodyDynamicImageList& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline ListDynamicImageResponseBodyDynamicImageList& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The time when the animated sticker was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The duration of the animated sticker. Unit: seconds.
    std::shared_ptr<string> duration_ = nullptr;
    // The ID of the animated sticker.
    std::shared_ptr<string> dynamicImageId_ = nullptr;
    // The size of the animated sticker file. Unit: byte.
    std::shared_ptr<string> fileSize_ = nullptr;
    // The URL of the animated sticker file.
    std::shared_ptr<string> fileURL_ = nullptr;
    // The format of the animated sticker. Valid values: gif and webp.
    std::shared_ptr<string> format_ = nullptr;
    // The frame rate of the animated sticker. Unit: frames per second.
    std::shared_ptr<string> fps_ = nullptr;
    // The height of the animated sticker. Unit: pixel.
    std::shared_ptr<string> height_ = nullptr;
    // The job ID for creating the animated sticker.
    std::shared_ptr<string> jobId_ = nullptr;
    // The ID of the video.
    std::shared_ptr<string> videoId_ = nullptr;
    // The width of the animated sticker. Unit: pixel.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
