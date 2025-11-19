// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBSRESPONSEBODYTRANSCODEJOBSTRANSCODEJOB_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBSRESPONSEBODYTRANSCODEJOBSTRANSCODEJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob() = default ;
    SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob(const SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob &) = default ;
    SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob(SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob &&) = default ;
    SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob() = default ;
    SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob& operator=(const SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob &) = default ;
    SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob& operator=(SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The ID of the transcoding job.
    // 
    // >  This parameter is not returned for HLS packaging tasks. You must asynchronously receive the transcoding result.
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
