// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaInfoResponseBodyMediaInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaInfo, mediaInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaInfo, mediaInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaInfoResponseBody() = default ;
    GetMediaInfoResponseBody(const GetMediaInfoResponseBody &) = default ;
    GetMediaInfoResponseBody(GetMediaInfoResponseBody &&) = default ;
    GetMediaInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaInfoResponseBody() = default ;
    GetMediaInfoResponseBody& operator=(const GetMediaInfoResponseBody &) = default ;
    GetMediaInfoResponseBody& operator=(GetMediaInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // mediaInfo Field Functions 
    bool hasMediaInfo() const { return this->mediaInfo_ != nullptr;};
    void deleteMediaInfo() { this->mediaInfo_ = nullptr;};
    inline const GetMediaInfoResponseBodyMediaInfo & mediaInfo() const { DARABONBA_PTR_GET_CONST(mediaInfo_, GetMediaInfoResponseBodyMediaInfo) };
    inline GetMediaInfoResponseBodyMediaInfo mediaInfo() { DARABONBA_PTR_GET(mediaInfo_, GetMediaInfoResponseBodyMediaInfo) };
    inline GetMediaInfoResponseBody& setMediaInfo(const GetMediaInfoResponseBodyMediaInfo & mediaInfo) { DARABONBA_PTR_SET_VALUE(mediaInfo_, mediaInfo) };
    inline GetMediaInfoResponseBody& setMediaInfo(GetMediaInfoResponseBodyMediaInfo && mediaInfo) { DARABONBA_PTR_SET_RVALUE(mediaInfo_, mediaInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the media asset.
    std::shared_ptr<GetMediaInfoResponseBodyMediaInfo> mediaInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
