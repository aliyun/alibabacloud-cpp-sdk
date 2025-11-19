// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoInfoResponseBodyVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    GetVideoInfoResponseBody() = default ;
    GetVideoInfoResponseBody(const GetVideoInfoResponseBody &) = default ;
    GetVideoInfoResponseBody(GetVideoInfoResponseBody &&) = default ;
    GetVideoInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoInfoResponseBody() = default ;
    GetVideoInfoResponseBody& operator=(const GetVideoInfoResponseBody &) = default ;
    GetVideoInfoResponseBody& operator=(GetVideoInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->video_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const GetVideoInfoResponseBodyVideo & video() const { DARABONBA_PTR_GET_CONST(video_, GetVideoInfoResponseBodyVideo) };
    inline GetVideoInfoResponseBodyVideo video() { DARABONBA_PTR_GET(video_, GetVideoInfoResponseBodyVideo) };
    inline GetVideoInfoResponseBody& setVideo(const GetVideoInfoResponseBodyVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline GetVideoInfoResponseBody& setVideo(GetVideoInfoResponseBodyVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the audio or video file.
    std::shared_ptr<GetVideoInfoResponseBodyVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
