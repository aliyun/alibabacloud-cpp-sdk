// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResult& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SubmitJobsResponseBodyJobResultListJobResult() = default ;
    SubmitJobsResponseBodyJobResultListJobResult(const SubmitJobsResponseBodyJobResultListJobResult &) = default ;
    SubmitJobsResponseBodyJobResultListJobResult(SubmitJobsResponseBodyJobResultListJobResult &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResult() = default ;
    SubmitJobsResponseBodyJobResultListJobResult& operator=(const SubmitJobsResponseBodyJobResultListJobResult &) = default ;
    SubmitJobsResponseBodyJobResultListJobResult& operator=(SubmitJobsResponseBodyJobResultListJobResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->job_ == nullptr && return this->message_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJob & job() const { DARABONBA_PTR_GET_CONST(job_, Models::SubmitJobsResponseBodyJobResultListJobResultJob) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJob job() { DARABONBA_PTR_GET(job_, Models::SubmitJobsResponseBodyJobResultListJobResultJob) };
    inline SubmitJobsResponseBodyJobResultListJobResult& setJob(const Models::SubmitJobsResponseBodyJobResultListJobResultJob & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline SubmitJobsResponseBodyJobResultListJobResult& setJob(Models::SubmitJobsResponseBodyJobResultListJobResultJob && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SubmitJobsResponseBodyJobResultListJobResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the job failed to be created. This parameter is not returned if the job was created.
    std::shared_ptr<string> code_ = nullptr;
    // The details of the job. If the job fails to be submitted, no job ID is generated.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJob> job_ = nullptr;
    // The error message returned if the job failed to be created. This parameter is not returned if the job was created.
    std::shared_ptr<string> message_ = nullptr;
    // Indicates whether the job was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
