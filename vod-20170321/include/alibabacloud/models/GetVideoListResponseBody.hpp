// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoListResponseBodyVideoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(VideoList, videoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(VideoList, videoList_);
    };
    GetVideoListResponseBody() = default ;
    GetVideoListResponseBody(const GetVideoListResponseBody &) = default ;
    GetVideoListResponseBody(GetVideoListResponseBody &&) = default ;
    GetVideoListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoListResponseBody() = default ;
    GetVideoListResponseBody& operator=(const GetVideoListResponseBody &) = default ;
    GetVideoListResponseBody& operator=(GetVideoListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->total_ == nullptr && return this->videoList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetVideoListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // videoList Field Functions 
    bool hasVideoList() const { return this->videoList_ != nullptr;};
    void deleteVideoList() { this->videoList_ = nullptr;};
    inline const GetVideoListResponseBodyVideoList & videoList() const { DARABONBA_PTR_GET_CONST(videoList_, GetVideoListResponseBodyVideoList) };
    inline GetVideoListResponseBodyVideoList videoList() { DARABONBA_PTR_GET(videoList_, GetVideoListResponseBodyVideoList) };
    inline GetVideoListResponseBody& setVideoList(const GetVideoListResponseBodyVideoList & videoList) { DARABONBA_PTR_SET_VALUE(videoList_, videoList) };
    inline GetVideoListResponseBody& setVideoList(GetVideoListResponseBodyVideoList && videoList) { DARABONBA_PTR_SET_RVALUE(videoList_, videoList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of media files returned.
    std::shared_ptr<int32_t> total_ = nullptr;
    // The information about the audio or video files. Information about a maximum of 5,000 audio or video files can be returned.
    std::shared_ptr<GetVideoListResponseBodyVideoList> videoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
