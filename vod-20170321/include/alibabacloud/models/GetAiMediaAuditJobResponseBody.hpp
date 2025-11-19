// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIMediaAuditJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIMediaAuditJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaAuditJob, mediaAuditJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIMediaAuditJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaAuditJob, mediaAuditJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAIMediaAuditJobResponseBody() = default ;
    GetAIMediaAuditJobResponseBody(const GetAIMediaAuditJobResponseBody &) = default ;
    GetAIMediaAuditJobResponseBody(GetAIMediaAuditJobResponseBody &&) = default ;
    GetAIMediaAuditJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIMediaAuditJobResponseBody() = default ;
    GetAIMediaAuditJobResponseBody& operator=(const GetAIMediaAuditJobResponseBody &) = default ;
    GetAIMediaAuditJobResponseBody& operator=(GetAIMediaAuditJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaAuditJob_ == nullptr
        && return this->requestId_ == nullptr; };
    // mediaAuditJob Field Functions 
    bool hasMediaAuditJob() const { return this->mediaAuditJob_ != nullptr;};
    void deleteMediaAuditJob() { this->mediaAuditJob_ = nullptr;};
    inline const GetAIMediaAuditJobResponseBodyMediaAuditJob & mediaAuditJob() const { DARABONBA_PTR_GET_CONST(mediaAuditJob_, GetAIMediaAuditJobResponseBodyMediaAuditJob) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJob mediaAuditJob() { DARABONBA_PTR_GET(mediaAuditJob_, GetAIMediaAuditJobResponseBodyMediaAuditJob) };
    inline GetAIMediaAuditJobResponseBody& setMediaAuditJob(const GetAIMediaAuditJobResponseBodyMediaAuditJob & mediaAuditJob) { DARABONBA_PTR_SET_VALUE(mediaAuditJob_, mediaAuditJob) };
    inline GetAIMediaAuditJobResponseBody& setMediaAuditJob(GetAIMediaAuditJobResponseBodyMediaAuditJob && mediaAuditJob) { DARABONBA_PTR_SET_RVALUE(mediaAuditJob_, mediaAuditJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAIMediaAuditJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the intelligent review job.
    std::shared_ptr<GetAIMediaAuditJobResponseBodyMediaAuditJob> mediaAuditJob_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
