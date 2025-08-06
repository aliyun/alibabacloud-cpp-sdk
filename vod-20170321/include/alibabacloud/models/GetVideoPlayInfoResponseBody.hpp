// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOPLAYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOPLAYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoPlayInfoResponseBodyPlayInfo.hpp>
#include <alibabacloud/models/GetVideoPlayInfoResponseBodyVideoInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoPlayInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoPlayInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlayInfo, playInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VideoInfo, videoInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoPlayInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlayInfo, playInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VideoInfo, videoInfo_);
    };
    GetVideoPlayInfoResponseBody() = default ;
    GetVideoPlayInfoResponseBody(const GetVideoPlayInfoResponseBody &) = default ;
    GetVideoPlayInfoResponseBody(GetVideoPlayInfoResponseBody &&) = default ;
    GetVideoPlayInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoPlayInfoResponseBody() = default ;
    GetVideoPlayInfoResponseBody& operator=(const GetVideoPlayInfoResponseBody &) = default ;
    GetVideoPlayInfoResponseBody& operator=(GetVideoPlayInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->playInfo_ != nullptr
        && this->requestId_ != nullptr && this->videoInfo_ != nullptr; };
    // playInfo Field Functions 
    bool hasPlayInfo() const { return this->playInfo_ != nullptr;};
    void deletePlayInfo() { this->playInfo_ = nullptr;};
    inline const GetVideoPlayInfoResponseBodyPlayInfo & playInfo() const { DARABONBA_PTR_GET_CONST(playInfo_, GetVideoPlayInfoResponseBodyPlayInfo) };
    inline GetVideoPlayInfoResponseBodyPlayInfo playInfo() { DARABONBA_PTR_GET(playInfo_, GetVideoPlayInfoResponseBodyPlayInfo) };
    inline GetVideoPlayInfoResponseBody& setPlayInfo(const GetVideoPlayInfoResponseBodyPlayInfo & playInfo) { DARABONBA_PTR_SET_VALUE(playInfo_, playInfo) };
    inline GetVideoPlayInfoResponseBody& setPlayInfo(GetVideoPlayInfoResponseBodyPlayInfo && playInfo) { DARABONBA_PTR_SET_RVALUE(playInfo_, playInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoPlayInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoInfo Field Functions 
    bool hasVideoInfo() const { return this->videoInfo_ != nullptr;};
    void deleteVideoInfo() { this->videoInfo_ = nullptr;};
    inline const GetVideoPlayInfoResponseBodyVideoInfo & videoInfo() const { DARABONBA_PTR_GET_CONST(videoInfo_, GetVideoPlayInfoResponseBodyVideoInfo) };
    inline GetVideoPlayInfoResponseBodyVideoInfo videoInfo() { DARABONBA_PTR_GET(videoInfo_, GetVideoPlayInfoResponseBodyVideoInfo) };
    inline GetVideoPlayInfoResponseBody& setVideoInfo(const GetVideoPlayInfoResponseBodyVideoInfo & videoInfo) { DARABONBA_PTR_SET_VALUE(videoInfo_, videoInfo) };
    inline GetVideoPlayInfoResponseBody& setVideoInfo(GetVideoPlayInfoResponseBodyVideoInfo && videoInfo) { DARABONBA_PTR_SET_RVALUE(videoInfo_, videoInfo) };


  protected:
    std::shared_ptr<GetVideoPlayInfoResponseBodyPlayInfo> playInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetVideoPlayInfoResponseBodyVideoInfo> videoInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
