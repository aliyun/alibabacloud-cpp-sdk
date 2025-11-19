// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaAuditResultResponseBodyMediaAuditResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaAuditResult, mediaAuditResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaAuditResult, mediaAuditResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaAuditResultResponseBody() = default ;
    GetMediaAuditResultResponseBody(const GetMediaAuditResultResponseBody &) = default ;
    GetMediaAuditResultResponseBody(GetMediaAuditResultResponseBody &&) = default ;
    GetMediaAuditResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultResponseBody() = default ;
    GetMediaAuditResultResponseBody& operator=(const GetMediaAuditResultResponseBody &) = default ;
    GetMediaAuditResultResponseBody& operator=(GetMediaAuditResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaAuditResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // mediaAuditResult Field Functions 
    bool hasMediaAuditResult() const { return this->mediaAuditResult_ != nullptr;};
    void deleteMediaAuditResult() { this->mediaAuditResult_ = nullptr;};
    inline const GetMediaAuditResultResponseBodyMediaAuditResult & mediaAuditResult() const { DARABONBA_PTR_GET_CONST(mediaAuditResult_, GetMediaAuditResultResponseBodyMediaAuditResult) };
    inline GetMediaAuditResultResponseBodyMediaAuditResult mediaAuditResult() { DARABONBA_PTR_GET(mediaAuditResult_, GetMediaAuditResultResponseBodyMediaAuditResult) };
    inline GetMediaAuditResultResponseBody& setMediaAuditResult(const GetMediaAuditResultResponseBodyMediaAuditResult & mediaAuditResult) { DARABONBA_PTR_SET_VALUE(mediaAuditResult_, mediaAuditResult) };
    inline GetMediaAuditResultResponseBody& setMediaAuditResult(GetMediaAuditResultResponseBodyMediaAuditResult && mediaAuditResult) { DARABONBA_PTR_SET_RVALUE(mediaAuditResult_, mediaAuditResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaAuditResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The review results.
    std::shared_ptr<GetMediaAuditResultResponseBodyMediaAuditResult> mediaAuditResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
