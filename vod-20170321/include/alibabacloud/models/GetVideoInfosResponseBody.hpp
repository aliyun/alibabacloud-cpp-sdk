// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVideoInfosResponseBodyVideoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistReferenceIds, nonExistReferenceIds_);
      DARABONBA_PTR_TO_JSON(NonExistVideoIds, nonExistVideoIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VideoList, videoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistReferenceIds, nonExistReferenceIds_);
      DARABONBA_PTR_FROM_JSON(NonExistVideoIds, nonExistVideoIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VideoList, videoList_);
    };
    GetVideoInfosResponseBody() = default ;
    GetVideoInfosResponseBody(const GetVideoInfosResponseBody &) = default ;
    GetVideoInfosResponseBody(GetVideoInfosResponseBody &&) = default ;
    GetVideoInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoInfosResponseBody() = default ;
    GetVideoInfosResponseBody& operator=(const GetVideoInfosResponseBody &) = default ;
    GetVideoInfosResponseBody& operator=(GetVideoInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nonExistReferenceIds_ == nullptr
        && return this->nonExistVideoIds_ == nullptr && return this->requestId_ == nullptr && return this->videoList_ == nullptr; };
    // nonExistReferenceIds Field Functions 
    bool hasNonExistReferenceIds() const { return this->nonExistReferenceIds_ != nullptr;};
    void deleteNonExistReferenceIds() { this->nonExistReferenceIds_ = nullptr;};
    inline const vector<string> & nonExistReferenceIds() const { DARABONBA_PTR_GET_CONST(nonExistReferenceIds_, vector<string>) };
    inline vector<string> nonExistReferenceIds() { DARABONBA_PTR_GET(nonExistReferenceIds_, vector<string>) };
    inline GetVideoInfosResponseBody& setNonExistReferenceIds(const vector<string> & nonExistReferenceIds) { DARABONBA_PTR_SET_VALUE(nonExistReferenceIds_, nonExistReferenceIds) };
    inline GetVideoInfosResponseBody& setNonExistReferenceIds(vector<string> && nonExistReferenceIds) { DARABONBA_PTR_SET_RVALUE(nonExistReferenceIds_, nonExistReferenceIds) };


    // nonExistVideoIds Field Functions 
    bool hasNonExistVideoIds() const { return this->nonExistVideoIds_ != nullptr;};
    void deleteNonExistVideoIds() { this->nonExistVideoIds_ = nullptr;};
    inline const vector<string> & nonExistVideoIds() const { DARABONBA_PTR_GET_CONST(nonExistVideoIds_, vector<string>) };
    inline vector<string> nonExistVideoIds() { DARABONBA_PTR_GET(nonExistVideoIds_, vector<string>) };
    inline GetVideoInfosResponseBody& setNonExistVideoIds(const vector<string> & nonExistVideoIds) { DARABONBA_PTR_SET_VALUE(nonExistVideoIds_, nonExistVideoIds) };
    inline GetVideoInfosResponseBody& setNonExistVideoIds(vector<string> && nonExistVideoIds) { DARABONBA_PTR_SET_RVALUE(nonExistVideoIds_, nonExistVideoIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoList Field Functions 
    bool hasVideoList() const { return this->videoList_ != nullptr;};
    void deleteVideoList() { this->videoList_ = nullptr;};
    inline const vector<GetVideoInfosResponseBodyVideoList> & videoList() const { DARABONBA_PTR_GET_CONST(videoList_, vector<GetVideoInfosResponseBodyVideoList>) };
    inline vector<GetVideoInfosResponseBodyVideoList> videoList() { DARABONBA_PTR_GET(videoList_, vector<GetVideoInfosResponseBodyVideoList>) };
    inline GetVideoInfosResponseBody& setVideoList(const vector<GetVideoInfosResponseBodyVideoList> & videoList) { DARABONBA_PTR_SET_VALUE(videoList_, videoList) };
    inline GetVideoInfosResponseBody& setVideoList(vector<GetVideoInfosResponseBodyVideoList> && videoList) { DARABONBA_PTR_SET_RVALUE(videoList_, videoList) };


  protected:
    std::shared_ptr<vector<string>> nonExistReferenceIds_ = nullptr;
    // The IDs of the videos that do not exist.
    std::shared_ptr<vector<string>> nonExistVideoIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the audio or video files.
    std::shared_ptr<vector<GetVideoInfosResponseBodyVideoList>> videoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
