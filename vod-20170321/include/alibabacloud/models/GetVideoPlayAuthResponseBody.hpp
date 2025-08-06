// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOPLAYAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOPLAYAUTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoPlayAuthResponseBodyVideoMeta.hpp>
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
    virtual bool empty() const override { this->playAuth_ != nullptr
        && this->requestId_ != nullptr && this->videoMeta_ != nullptr; };
    // playAuth Field Functions 
    bool hasPlayAuth() const { return this->playAuth_ != nullptr;};
    void deletePlayAuth() { this->playAuth_ = nullptr;};
    inline string playAuth() const { DARABONBA_PTR_GET_DEFAULT(playAuth_, "") };
    inline GetVideoPlayAuthResponseBody& setPlayAuth(string playAuth) { DARABONBA_PTR_SET_VALUE(playAuth_, playAuth) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoPlayAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoMeta Field Functions 
    bool hasVideoMeta() const { return this->videoMeta_ != nullptr;};
    void deleteVideoMeta() { this->videoMeta_ = nullptr;};
    inline const GetVideoPlayAuthResponseBodyVideoMeta & videoMeta() const { DARABONBA_PTR_GET_CONST(videoMeta_, GetVideoPlayAuthResponseBodyVideoMeta) };
    inline GetVideoPlayAuthResponseBodyVideoMeta videoMeta() { DARABONBA_PTR_GET(videoMeta_, GetVideoPlayAuthResponseBodyVideoMeta) };
    inline GetVideoPlayAuthResponseBody& setVideoMeta(const GetVideoPlayAuthResponseBodyVideoMeta & videoMeta) { DARABONBA_PTR_SET_VALUE(videoMeta_, videoMeta) };
    inline GetVideoPlayAuthResponseBody& setVideoMeta(GetVideoPlayAuthResponseBodyVideoMeta && videoMeta) { DARABONBA_PTR_SET_RVALUE(videoMeta_, videoMeta) };


  protected:
    // The credential for media playback.
    std::shared_ptr<string> playAuth_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The metadata of the audio or video file.
    std::shared_ptr<GetVideoPlayAuthResponseBodyVideoMeta> videoMeta_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
