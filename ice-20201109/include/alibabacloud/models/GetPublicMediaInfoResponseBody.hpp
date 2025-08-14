// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLICMEDIAINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLICMEDIAINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPublicMediaInfoResponseBodyMediaInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetPublicMediaInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublicMediaInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaInfo, mediaInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublicMediaInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaInfo, mediaInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPublicMediaInfoResponseBody() = default ;
    GetPublicMediaInfoResponseBody(const GetPublicMediaInfoResponseBody &) = default ;
    GetPublicMediaInfoResponseBody(GetPublicMediaInfoResponseBody &&) = default ;
    GetPublicMediaInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublicMediaInfoResponseBody() = default ;
    GetPublicMediaInfoResponseBody& operator=(const GetPublicMediaInfoResponseBody &) = default ;
    GetPublicMediaInfoResponseBody& operator=(GetPublicMediaInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // mediaInfo Field Functions 
    bool hasMediaInfo() const { return this->mediaInfo_ != nullptr;};
    void deleteMediaInfo() { this->mediaInfo_ = nullptr;};
    inline const GetPublicMediaInfoResponseBodyMediaInfo & mediaInfo() const { DARABONBA_PTR_GET_CONST(mediaInfo_, GetPublicMediaInfoResponseBodyMediaInfo) };
    inline GetPublicMediaInfoResponseBodyMediaInfo mediaInfo() { DARABONBA_PTR_GET(mediaInfo_, GetPublicMediaInfoResponseBodyMediaInfo) };
    inline GetPublicMediaInfoResponseBody& setMediaInfo(const GetPublicMediaInfoResponseBodyMediaInfo & mediaInfo) { DARABONBA_PTR_SET_VALUE(mediaInfo_, mediaInfo) };
    inline GetPublicMediaInfoResponseBody& setMediaInfo(GetPublicMediaInfoResponseBodyMediaInfo && mediaInfo) { DARABONBA_PTR_SET_RVALUE(mediaInfo_, mediaInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPublicMediaInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetPublicMediaInfoResponseBodyMediaInfo> mediaInfo_ = nullptr;
    // RequestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
