// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaAuditResultDetail, mediaAuditResultDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaAuditResultDetail, mediaAuditResultDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaAuditResultDetailResponseBody() = default ;
    GetMediaAuditResultDetailResponseBody(const GetMediaAuditResultDetailResponseBody &) = default ;
    GetMediaAuditResultDetailResponseBody(GetMediaAuditResultDetailResponseBody &&) = default ;
    GetMediaAuditResultDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultDetailResponseBody() = default ;
    GetMediaAuditResultDetailResponseBody& operator=(const GetMediaAuditResultDetailResponseBody &) = default ;
    GetMediaAuditResultDetailResponseBody& operator=(GetMediaAuditResultDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaAuditResultDetail_ == nullptr
        && return this->requestId_ == nullptr; };
    // mediaAuditResultDetail Field Functions 
    bool hasMediaAuditResultDetail() const { return this->mediaAuditResultDetail_ != nullptr;};
    void deleteMediaAuditResultDetail() { this->mediaAuditResultDetail_ = nullptr;};
    inline const GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail & mediaAuditResultDetail() const { DARABONBA_PTR_GET_CONST(mediaAuditResultDetail_, GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail) };
    inline GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail mediaAuditResultDetail() { DARABONBA_PTR_GET(mediaAuditResultDetail_, GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail) };
    inline GetMediaAuditResultDetailResponseBody& setMediaAuditResultDetail(const GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail & mediaAuditResultDetail) { DARABONBA_PTR_SET_VALUE(mediaAuditResultDetail_, mediaAuditResultDetail) };
    inline GetMediaAuditResultDetailResponseBody& setMediaAuditResultDetail(GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail && mediaAuditResultDetail) { DARABONBA_PTR_SET_RVALUE(mediaAuditResultDetail_, mediaAuditResultDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaAuditResultDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about review results.
    std::shared_ptr<GetMediaAuditResultDetailResponseBodyMediaAuditResultDetail> mediaAuditResultDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
