// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBSRESPONSEBODYTRANSCODEJOBS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBSRESPONSEBODYTRANSCODEJOBS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitTranscodeJobsResponseBodyTranscodeJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobsResponseBodyTranscodeJobs& obj) { 
      DARABONBA_PTR_TO_JSON(TranscodeJob, transcodeJob_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobsResponseBodyTranscodeJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(TranscodeJob, transcodeJob_);
    };
    SubmitTranscodeJobsResponseBodyTranscodeJobs() = default ;
    SubmitTranscodeJobsResponseBodyTranscodeJobs(const SubmitTranscodeJobsResponseBodyTranscodeJobs &) = default ;
    SubmitTranscodeJobsResponseBodyTranscodeJobs(SubmitTranscodeJobsResponseBodyTranscodeJobs &&) = default ;
    SubmitTranscodeJobsResponseBodyTranscodeJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobsResponseBodyTranscodeJobs() = default ;
    SubmitTranscodeJobsResponseBodyTranscodeJobs& operator=(const SubmitTranscodeJobsResponseBodyTranscodeJobs &) = default ;
    SubmitTranscodeJobsResponseBodyTranscodeJobs& operator=(SubmitTranscodeJobsResponseBodyTranscodeJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->transcodeJob_ == nullptr; };
    // transcodeJob Field Functions 
    bool hasTranscodeJob() const { return this->transcodeJob_ != nullptr;};
    void deleteTranscodeJob() { this->transcodeJob_ = nullptr;};
    inline const vector<Models::SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob> & transcodeJob() const { DARABONBA_PTR_GET_CONST(transcodeJob_, vector<Models::SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob>) };
    inline vector<Models::SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob> transcodeJob() { DARABONBA_PTR_GET(transcodeJob_, vector<Models::SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob>) };
    inline SubmitTranscodeJobsResponseBodyTranscodeJobs& setTranscodeJob(const vector<Models::SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob> & transcodeJob) { DARABONBA_PTR_SET_VALUE(transcodeJob_, transcodeJob) };
    inline SubmitTranscodeJobsResponseBodyTranscodeJobs& setTranscodeJob(vector<Models::SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob> && transcodeJob) { DARABONBA_PTR_SET_RVALUE(transcodeJob_, transcodeJob) };


  protected:
    std::shared_ptr<vector<Models::SubmitTranscodeJobsResponseBodyTranscodeJobsTranscodeJob>> transcodeJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
