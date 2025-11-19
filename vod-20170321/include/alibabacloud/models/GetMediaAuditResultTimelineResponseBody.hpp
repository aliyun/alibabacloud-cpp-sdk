// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTTIMELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTTIMELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultTimelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultTimelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaAuditResultTimeline, mediaAuditResultTimeline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultTimelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaAuditResultTimeline, mediaAuditResultTimeline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaAuditResultTimelineResponseBody() = default ;
    GetMediaAuditResultTimelineResponseBody(const GetMediaAuditResultTimelineResponseBody &) = default ;
    GetMediaAuditResultTimelineResponseBody(GetMediaAuditResultTimelineResponseBody &&) = default ;
    GetMediaAuditResultTimelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultTimelineResponseBody() = default ;
    GetMediaAuditResultTimelineResponseBody& operator=(const GetMediaAuditResultTimelineResponseBody &) = default ;
    GetMediaAuditResultTimelineResponseBody& operator=(GetMediaAuditResultTimelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaAuditResultTimeline_ == nullptr
        && return this->requestId_ == nullptr; };
    // mediaAuditResultTimeline Field Functions 
    bool hasMediaAuditResultTimeline() const { return this->mediaAuditResultTimeline_ != nullptr;};
    void deleteMediaAuditResultTimeline() { this->mediaAuditResultTimeline_ = nullptr;};
    inline const GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline & mediaAuditResultTimeline() const { DARABONBA_PTR_GET_CONST(mediaAuditResultTimeline_, GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline) };
    inline GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline mediaAuditResultTimeline() { DARABONBA_PTR_GET(mediaAuditResultTimeline_, GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline) };
    inline GetMediaAuditResultTimelineResponseBody& setMediaAuditResultTimeline(const GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline & mediaAuditResultTimeline) { DARABONBA_PTR_SET_VALUE(mediaAuditResultTimeline_, mediaAuditResultTimeline) };
    inline GetMediaAuditResultTimelineResponseBody& setMediaAuditResultTimeline(GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline && mediaAuditResultTimeline) { DARABONBA_PTR_SET_RVALUE(mediaAuditResultTimeline_, mediaAuditResultTimeline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaAuditResultTimelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The collection of review result timelines.
    std::shared_ptr<GetMediaAuditResultTimelineResponseBodyMediaAuditResultTimeline> mediaAuditResultTimeline_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
