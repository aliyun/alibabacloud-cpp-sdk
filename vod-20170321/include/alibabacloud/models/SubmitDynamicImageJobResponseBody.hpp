// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitDynamicImageJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDynamicImageJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicImageJob, dynamicImageJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDynamicImageJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicImageJob, dynamicImageJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitDynamicImageJobResponseBody() = default ;
    SubmitDynamicImageJobResponseBody(const SubmitDynamicImageJobResponseBody &) = default ;
    SubmitDynamicImageJobResponseBody(SubmitDynamicImageJobResponseBody &&) = default ;
    SubmitDynamicImageJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDynamicImageJobResponseBody() = default ;
    SubmitDynamicImageJobResponseBody& operator=(const SubmitDynamicImageJobResponseBody &) = default ;
    SubmitDynamicImageJobResponseBody& operator=(SubmitDynamicImageJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DynamicImageJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DynamicImageJob& obj) { 
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
      };
      friend void from_json(const Darabonba::Json& j, DynamicImageJob& obj) { 
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      };
      DynamicImageJob() = default ;
      DynamicImageJob(const DynamicImageJob &) = default ;
      DynamicImageJob(DynamicImageJob &&) = default ;
      DynamicImageJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DynamicImageJob() = default ;
      DynamicImageJob& operator=(const DynamicImageJob &) = default ;
      DynamicImageJob& operator=(DynamicImageJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->jobId_ == nullptr; };
      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline DynamicImageJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    protected:
      // The ID of the animated image job.
      shared_ptr<string> jobId_ {};
    };

    virtual bool empty() const override { return this->dynamicImageJob_ == nullptr
        && this->requestId_ == nullptr; };
    // dynamicImageJob Field Functions 
    bool hasDynamicImageJob() const { return this->dynamicImageJob_ != nullptr;};
    void deleteDynamicImageJob() { this->dynamicImageJob_ = nullptr;};
    inline const SubmitDynamicImageJobResponseBody::DynamicImageJob & getDynamicImageJob() const { DARABONBA_PTR_GET_CONST(dynamicImageJob_, SubmitDynamicImageJobResponseBody::DynamicImageJob) };
    inline SubmitDynamicImageJobResponseBody::DynamicImageJob getDynamicImageJob() { DARABONBA_PTR_GET(dynamicImageJob_, SubmitDynamicImageJobResponseBody::DynamicImageJob) };
    inline SubmitDynamicImageJobResponseBody& setDynamicImageJob(const SubmitDynamicImageJobResponseBody::DynamicImageJob & dynamicImageJob) { DARABONBA_PTR_SET_VALUE(dynamicImageJob_, dynamicImageJob) };
    inline SubmitDynamicImageJobResponseBody& setDynamicImageJob(SubmitDynamicImageJobResponseBody::DynamicImageJob && dynamicImageJob) { DARABONBA_PTR_SET_RVALUE(dynamicImageJob_, dynamicImageJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitDynamicImageJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the animated image job.
    shared_ptr<SubmitDynamicImageJobResponseBody::DynamicImageJob> dynamicImageJob_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
