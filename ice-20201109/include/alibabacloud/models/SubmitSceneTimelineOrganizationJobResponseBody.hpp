// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSCENETIMELINEORGANIZATIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSCENETIMELINEORGANIZATIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSceneTimelineOrganizationJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSceneTimelineOrganizationJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSceneTimelineOrganizationJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitSceneTimelineOrganizationJobResponseBody() = default ;
    SubmitSceneTimelineOrganizationJobResponseBody(const SubmitSceneTimelineOrganizationJobResponseBody &) = default ;
    SubmitSceneTimelineOrganizationJobResponseBody(SubmitSceneTimelineOrganizationJobResponseBody &&) = default ;
    SubmitSceneTimelineOrganizationJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSceneTimelineOrganizationJobResponseBody() = default ;
    SubmitSceneTimelineOrganizationJobResponseBody& operator=(const SubmitSceneTimelineOrganizationJobResponseBody &) = default ;
    SubmitSceneTimelineOrganizationJobResponseBody& operator=(SubmitSceneTimelineOrganizationJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && return this->requestId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitSceneTimelineOrganizationJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitSceneTimelineOrganizationJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
