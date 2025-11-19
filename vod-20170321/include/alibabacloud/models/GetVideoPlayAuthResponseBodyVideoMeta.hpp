// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOPLAYAUTHRESPONSEBODYVIDEOMETA_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOPLAYAUTHRESPONSEBODYVIDEOMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoPlayAuthResponseBodyVideoMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoPlayAuthResponseBodyVideoMeta& obj) { 
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoPlayAuthResponseBodyVideoMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetVideoPlayAuthResponseBodyVideoMeta() = default ;
    GetVideoPlayAuthResponseBodyVideoMeta(const GetVideoPlayAuthResponseBodyVideoMeta &) = default ;
    GetVideoPlayAuthResponseBodyVideoMeta(GetVideoPlayAuthResponseBodyVideoMeta &&) = default ;
    GetVideoPlayAuthResponseBodyVideoMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoPlayAuthResponseBodyVideoMeta() = default ;
    GetVideoPlayAuthResponseBodyVideoMeta& operator=(const GetVideoPlayAuthResponseBodyVideoMeta &) = default ;
    GetVideoPlayAuthResponseBodyVideoMeta& operator=(GetVideoPlayAuthResponseBodyVideoMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coverURL_ == nullptr
        && return this->duration_ == nullptr && return this->status_ == nullptr && return this->title_ == nullptr && return this->videoId_ == nullptr; };
    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline GetVideoPlayAuthResponseBodyVideoMeta& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline GetVideoPlayAuthResponseBodyVideoMeta& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVideoPlayAuthResponseBodyVideoMeta& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetVideoPlayAuthResponseBodyVideoMeta& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetVideoPlayAuthResponseBodyVideoMeta& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The thumbnail URL of the media file.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The duration of the media file. Unit: seconds.
    std::shared_ptr<float> duration_ = nullptr;
    // The status of the media file. For more information about the value range and description, see [Status: the status of a video](~~52839#title-vqg-8cz-7p8~~).
    std::shared_ptr<string> status_ = nullptr;
    // The title of the media file.
    std::shared_ptr<string> title_ = nullptr;
    // The ID of the media file.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
