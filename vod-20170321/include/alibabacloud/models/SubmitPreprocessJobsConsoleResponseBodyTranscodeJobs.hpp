// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPREPROCESSJOBSCONSOLERESPONSEBODYTRANSCODEJOBS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPREPROCESSJOBSCONSOLERESPONSEBODYTRANSCODEJOBS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitPreprocessJobsConsoleResponseBodyTranscodeJobsTranscodeJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs& obj) { 
      DARABONBA_PTR_TO_JSON(TranscodeJob, transcodeJob_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(TranscodeJob, transcodeJob_);
    };
    SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs() = default ;
    SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs(const SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs &) = default ;
    SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs(SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs &&) = default ;
    SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs() = default ;
    SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs& operator=(const SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs &) = default ;
    SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs& operator=(SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->transcodeJob_ != nullptr; };
    // transcodeJob Field Functions 
    bool hasTranscodeJob() const { return this->transcodeJob_ != nullptr;};
    void deleteTranscodeJob() { this->transcodeJob_ = nullptr;};
    inline const vector<Models::SubmitPreprocessJobsConsoleResponseBodyTranscodeJobsTranscodeJob> & transcodeJob() const { DARABONBA_PTR_GET_CONST(transcodeJob_, vector<Models::SubmitPreprocessJobsConsoleResponseBodyTranscodeJobsTranscodeJob>) };
    inline vector<Models::SubmitPreprocessJobsConsoleResponseBodyTranscodeJobsTranscodeJob> transcodeJob() { DARABONBA_PTR_GET(transcodeJob_, vector<Models::SubmitPreprocessJobsConsoleResponseBodyTranscodeJobsTranscodeJob>) };
    inline SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs& setTranscodeJob(const vector<Models::SubmitPreprocessJobsConsoleResponseBodyTranscodeJobsTranscodeJob> & transcodeJob) { DARABONBA_PTR_SET_VALUE(transcodeJob_, transcodeJob) };
    inline SubmitPreprocessJobsConsoleResponseBodyTranscodeJobs& setTranscodeJob(vector<Models::SubmitPreprocessJobsConsoleResponseBodyTranscodeJobsTranscodeJob> && transcodeJob) { DARABONBA_PTR_SET_RVALUE(transcodeJob_, transcodeJob) };


  protected:
    std::shared_ptr<vector<Models::SubmitPreprocessJobsConsoleResponseBodyTranscodeJobsTranscodeJob>> transcodeJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
