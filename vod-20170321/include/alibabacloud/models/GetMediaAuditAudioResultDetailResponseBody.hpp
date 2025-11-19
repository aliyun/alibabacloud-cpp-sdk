// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITAUDIORESULTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITAUDIORESULTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditAudioResultDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditAudioResultDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaAuditAudioResultDetail, mediaAuditAudioResultDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditAudioResultDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaAuditAudioResultDetail, mediaAuditAudioResultDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaAuditAudioResultDetailResponseBody() = default ;
    GetMediaAuditAudioResultDetailResponseBody(const GetMediaAuditAudioResultDetailResponseBody &) = default ;
    GetMediaAuditAudioResultDetailResponseBody(GetMediaAuditAudioResultDetailResponseBody &&) = default ;
    GetMediaAuditAudioResultDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditAudioResultDetailResponseBody() = default ;
    GetMediaAuditAudioResultDetailResponseBody& operator=(const GetMediaAuditAudioResultDetailResponseBody &) = default ;
    GetMediaAuditAudioResultDetailResponseBody& operator=(GetMediaAuditAudioResultDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaAuditAudioResultDetail_ == nullptr
        && return this->requestId_ == nullptr; };
    // mediaAuditAudioResultDetail Field Functions 
    bool hasMediaAuditAudioResultDetail() const { return this->mediaAuditAudioResultDetail_ != nullptr;};
    void deleteMediaAuditAudioResultDetail() { this->mediaAuditAudioResultDetail_ = nullptr;};
    inline const GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail & mediaAuditAudioResultDetail() const { DARABONBA_PTR_GET_CONST(mediaAuditAudioResultDetail_, GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail) };
    inline GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail mediaAuditAudioResultDetail() { DARABONBA_PTR_GET(mediaAuditAudioResultDetail_, GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail) };
    inline GetMediaAuditAudioResultDetailResponseBody& setMediaAuditAudioResultDetail(const GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail & mediaAuditAudioResultDetail) { DARABONBA_PTR_SET_VALUE(mediaAuditAudioResultDetail_, mediaAuditAudioResultDetail) };
    inline GetMediaAuditAudioResultDetailResponseBody& setMediaAuditAudioResultDetail(GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail && mediaAuditAudioResultDetail) { DARABONBA_PTR_SET_RVALUE(mediaAuditAudioResultDetail_, mediaAuditAudioResultDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaAuditAudioResultDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of review results.
    std::shared_ptr<GetMediaAuditAudioResultDetailResponseBodyMediaAuditAudioResultDetail> mediaAuditAudioResultDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
