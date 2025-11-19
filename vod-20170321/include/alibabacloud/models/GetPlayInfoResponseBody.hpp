// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLAYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPLAYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPlayInfoResponseBodyPlayInfoList.hpp>
#include <alibabacloud/models/GetPlayInfoResponseBodyVideoBase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPlayInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlayInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlayInfoList, playInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VideoBase, videoBase_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlayInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlayInfoList, playInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VideoBase, videoBase_);
    };
    GetPlayInfoResponseBody() = default ;
    GetPlayInfoResponseBody(const GetPlayInfoResponseBody &) = default ;
    GetPlayInfoResponseBody(GetPlayInfoResponseBody &&) = default ;
    GetPlayInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlayInfoResponseBody() = default ;
    GetPlayInfoResponseBody& operator=(const GetPlayInfoResponseBody &) = default ;
    GetPlayInfoResponseBody& operator=(GetPlayInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->playInfoList_ == nullptr
        && return this->requestId_ == nullptr && return this->videoBase_ == nullptr; };
    // playInfoList Field Functions 
    bool hasPlayInfoList() const { return this->playInfoList_ != nullptr;};
    void deletePlayInfoList() { this->playInfoList_ = nullptr;};
    inline const GetPlayInfoResponseBodyPlayInfoList & playInfoList() const { DARABONBA_PTR_GET_CONST(playInfoList_, GetPlayInfoResponseBodyPlayInfoList) };
    inline GetPlayInfoResponseBodyPlayInfoList playInfoList() { DARABONBA_PTR_GET(playInfoList_, GetPlayInfoResponseBodyPlayInfoList) };
    inline GetPlayInfoResponseBody& setPlayInfoList(const GetPlayInfoResponseBodyPlayInfoList & playInfoList) { DARABONBA_PTR_SET_VALUE(playInfoList_, playInfoList) };
    inline GetPlayInfoResponseBody& setPlayInfoList(GetPlayInfoResponseBodyPlayInfoList && playInfoList) { DARABONBA_PTR_SET_RVALUE(playInfoList_, playInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPlayInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoBase Field Functions 
    bool hasVideoBase() const { return this->videoBase_ != nullptr;};
    void deleteVideoBase() { this->videoBase_ = nullptr;};
    inline const GetPlayInfoResponseBodyVideoBase & videoBase() const { DARABONBA_PTR_GET_CONST(videoBase_, GetPlayInfoResponseBodyVideoBase) };
    inline GetPlayInfoResponseBodyVideoBase videoBase() { DARABONBA_PTR_GET(videoBase_, GetPlayInfoResponseBodyVideoBase) };
    inline GetPlayInfoResponseBody& setVideoBase(const GetPlayInfoResponseBodyVideoBase & videoBase) { DARABONBA_PTR_SET_VALUE(videoBase_, videoBase) };
    inline GetPlayInfoResponseBody& setVideoBase(GetPlayInfoResponseBodyVideoBase && videoBase) { DARABONBA_PTR_SET_RVALUE(videoBase_, videoBase) };


  protected:
    // The information about the audio or video stream.
    std::shared_ptr<GetPlayInfoResponseBodyPlayInfoList> playInfoList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The basic information about the audio or video file.
    std::shared_ptr<GetPlayInfoResponseBodyVideoBase> videoBase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
