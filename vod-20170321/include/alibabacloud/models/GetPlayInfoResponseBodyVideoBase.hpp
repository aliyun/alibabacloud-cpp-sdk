// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYINFORESPONSEBODYVIDEOBASE_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYINFORESPONSEBODYVIDEOBASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPlayInfoResponseBodyVideoBase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlayInfoResponseBodyVideoBase& obj) { 
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DanMuURL, danMuURL_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlayInfoResponseBodyVideoBase& obj) { 
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DanMuURL, danMuURL_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetPlayInfoResponseBodyVideoBase() = default ;
    GetPlayInfoResponseBodyVideoBase(const GetPlayInfoResponseBodyVideoBase &) = default ;
    GetPlayInfoResponseBodyVideoBase(GetPlayInfoResponseBodyVideoBase &&) = default ;
    GetPlayInfoResponseBodyVideoBase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlayInfoResponseBodyVideoBase() = default ;
    GetPlayInfoResponseBodyVideoBase& operator=(const GetPlayInfoResponseBodyVideoBase &) = default ;
    GetPlayInfoResponseBodyVideoBase& operator=(GetPlayInfoResponseBodyVideoBase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coverURL_ == nullptr
        && return this->creationTime_ == nullptr && return this->danMuURL_ == nullptr && return this->duration_ == nullptr && return this->mediaType_ == nullptr && return this->status_ == nullptr
        && return this->storageClass_ == nullptr && return this->title_ == nullptr && return this->videoId_ == nullptr; };
    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline GetPlayInfoResponseBodyVideoBase& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetPlayInfoResponseBodyVideoBase& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // danMuURL Field Functions 
    bool hasDanMuURL() const { return this->danMuURL_ != nullptr;};
    void deleteDanMuURL() { this->danMuURL_ = nullptr;};
    inline string danMuURL() const { DARABONBA_PTR_GET_DEFAULT(danMuURL_, "") };
    inline GetPlayInfoResponseBodyVideoBase& setDanMuURL(string danMuURL) { DARABONBA_PTR_SET_VALUE(danMuURL_, danMuURL) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetPlayInfoResponseBodyVideoBase& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline GetPlayInfoResponseBodyVideoBase& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPlayInfoResponseBodyVideoBase& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline GetPlayInfoResponseBodyVideoBase& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetPlayInfoResponseBodyVideoBase& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetPlayInfoResponseBodyVideoBase& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The thumbnail URL of the audio or video file.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The time when the audio or video file was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The URL of the masked live comment data.
    std::shared_ptr<string> danMuURL_ = nullptr;
    // The duration of the audio or video file. Unit: seconds.
    std::shared_ptr<string> duration_ = nullptr;
    // The type of the media file. Valid values:
    // 
    // *   **video**
    // *   **audio**
    std::shared_ptr<string> mediaType_ = nullptr;
    // The status of the media file. For more information about the value range and description, see the [Status](~~52839#title-vqg-8cz-7p8~~) table.
    std::shared_ptr<string> status_ = nullptr;
    // The storage class of the audio file. Valid values:
    // 
    // *   **Standard**: All media resources are stored as Standard objects.
    // *   **IA**: All media resources are stored as IA objects.
    // *   **Archive**: All media resources are stored as Archive objects.
    // *   **ColdArchive**: All media resources are stored as Cold Archive objects.
    // *   **SourceIA**: Only the source files are IA objects.
    // *   **SourceArchive**: Only the source files are Archive objects.
    // *   **SourceColdArchive**: Only the source file is stored as a Cold Archive object.
    // *   **Changing**: The storage class of the video file is being changed.
    // *   **SourceChanging**: The storage class of the source file is being changed.
    std::shared_ptr<string> storageClass_ = nullptr;
    // The title of the audio or video file.
    std::shared_ptr<string> title_ = nullptr;
    // The ID of the media file.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
