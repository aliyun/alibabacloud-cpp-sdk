// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOPLAYAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOPLAYAUTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoPlayAuthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoPlayAuthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlayAuth, playAuth_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VideoMeta, videoMeta_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoPlayAuthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlayAuth, playAuth_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VideoMeta, videoMeta_);
    };
    GetVideoPlayAuthResponseBody() = default ;
    GetVideoPlayAuthResponseBody(const GetVideoPlayAuthResponseBody &) = default ;
    GetVideoPlayAuthResponseBody(GetVideoPlayAuthResponseBody &&) = default ;
    GetVideoPlayAuthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoPlayAuthResponseBody() = default ;
    GetVideoPlayAuthResponseBody& operator=(const GetVideoPlayAuthResponseBody &) = default ;
    GetVideoPlayAuthResponseBody& operator=(GetVideoPlayAuthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoMeta : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoMeta& obj) { 
        DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      };
      friend void from_json(const Darabonba::Json& j, VideoMeta& obj) { 
        DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      };
      VideoMeta() = default ;
      VideoMeta(const VideoMeta &) = default ;
      VideoMeta(VideoMeta &&) = default ;
      VideoMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoMeta() = default ;
      VideoMeta& operator=(const VideoMeta &) = default ;
      VideoMeta& operator=(VideoMeta &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->coverURL_ == nullptr
        && this->duration_ == nullptr && this->status_ == nullptr && this->title_ == nullptr && this->videoId_ == nullptr; };
      // coverURL Field Functions 
      bool hasCoverURL() const { return this->coverURL_ != nullptr;};
      void deleteCoverURL() { this->coverURL_ = nullptr;};
      inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
      inline VideoMeta& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline VideoMeta& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VideoMeta& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline VideoMeta& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // videoId Field Functions 
      bool hasVideoId() const { return this->videoId_ != nullptr;};
      void deleteVideoId() { this->videoId_ = nullptr;};
      inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
      inline VideoMeta& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    protected:
      // The thumbnail URL of the media file.
      shared_ptr<string> coverURL_ {};
      // The duration of the media file. Unit: seconds.
      shared_ptr<float> duration_ {};
      // The status of the media file. For more information about the value range and description, see [Status: the status of a video](~~52839#title-vqg-8cz-7p8~~).
      shared_ptr<string> status_ {};
      // The title of the media file.
      shared_ptr<string> title_ {};
      // The ID of the media file.
      shared_ptr<string> videoId_ {};
    };

    virtual bool empty() const override { return this->playAuth_ == nullptr
        && this->requestId_ == nullptr && this->videoMeta_ == nullptr; };
    // playAuth Field Functions 
    bool hasPlayAuth() const { return this->playAuth_ != nullptr;};
    void deletePlayAuth() { this->playAuth_ = nullptr;};
    inline string getPlayAuth() const { DARABONBA_PTR_GET_DEFAULT(playAuth_, "") };
    inline GetVideoPlayAuthResponseBody& setPlayAuth(string playAuth) { DARABONBA_PTR_SET_VALUE(playAuth_, playAuth) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoPlayAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoMeta Field Functions 
    bool hasVideoMeta() const { return this->videoMeta_ != nullptr;};
    void deleteVideoMeta() { this->videoMeta_ = nullptr;};
    inline const GetVideoPlayAuthResponseBody::VideoMeta & getVideoMeta() const { DARABONBA_PTR_GET_CONST(videoMeta_, GetVideoPlayAuthResponseBody::VideoMeta) };
    inline GetVideoPlayAuthResponseBody::VideoMeta getVideoMeta() { DARABONBA_PTR_GET(videoMeta_, GetVideoPlayAuthResponseBody::VideoMeta) };
    inline GetVideoPlayAuthResponseBody& setVideoMeta(const GetVideoPlayAuthResponseBody::VideoMeta & videoMeta) { DARABONBA_PTR_SET_VALUE(videoMeta_, videoMeta) };
    inline GetVideoPlayAuthResponseBody& setVideoMeta(GetVideoPlayAuthResponseBody::VideoMeta && videoMeta) { DARABONBA_PTR_SET_RVALUE(videoMeta_, videoMeta) };


  protected:
    // The credential for media playback.
    shared_ptr<string> playAuth_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The metadata of the audio or video file.
    shared_ptr<GetVideoPlayAuthResponseBody::VideoMeta> videoMeta_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
