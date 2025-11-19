// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPREPROCESSJOBSRESPONSEBODYPREPROCESSJOBS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPREPROCESSJOBSRESPONSEBODYPREPROCESSJOBS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitPreprocessJobsResponseBodyPreprocessJobsPreprocessJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitPreprocessJobsResponseBodyPreprocessJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPreprocessJobsResponseBodyPreprocessJobs& obj) { 
      DARABONBA_PTR_TO_JSON(PreprocessJob, preprocessJob_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPreprocessJobsResponseBodyPreprocessJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(PreprocessJob, preprocessJob_);
    };
    SubmitPreprocessJobsResponseBodyPreprocessJobs() = default ;
    SubmitPreprocessJobsResponseBodyPreprocessJobs(const SubmitPreprocessJobsResponseBodyPreprocessJobs &) = default ;
    SubmitPreprocessJobsResponseBodyPreprocessJobs(SubmitPreprocessJobsResponseBodyPreprocessJobs &&) = default ;
    SubmitPreprocessJobsResponseBodyPreprocessJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPreprocessJobsResponseBodyPreprocessJobs() = default ;
    SubmitPreprocessJobsResponseBodyPreprocessJobs& operator=(const SubmitPreprocessJobsResponseBodyPreprocessJobs &) = default ;
    SubmitPreprocessJobsResponseBodyPreprocessJobs& operator=(SubmitPreprocessJobsResponseBodyPreprocessJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->preprocessJob_ == nullptr; };
    // preprocessJob Field Functions 
    bool hasPreprocessJob() const { return this->preprocessJob_ != nullptr;};
    void deletePreprocessJob() { this->preprocessJob_ = nullptr;};
    inline const vector<Models::SubmitPreprocessJobsResponseBodyPreprocessJobsPreprocessJob> & preprocessJob() const { DARABONBA_PTR_GET_CONST(preprocessJob_, vector<Models::SubmitPreprocessJobsResponseBodyPreprocessJobsPreprocessJob>) };
    inline vector<Models::SubmitPreprocessJobsResponseBodyPreprocessJobsPreprocessJob> preprocessJob() { DARABONBA_PTR_GET(preprocessJob_, vector<Models::SubmitPreprocessJobsResponseBodyPreprocessJobsPreprocessJob>) };
    inline SubmitPreprocessJobsResponseBodyPreprocessJobs& setPreprocessJob(const vector<Models::SubmitPreprocessJobsResponseBodyPreprocessJobsPreprocessJob> & preprocessJob) { DARABONBA_PTR_SET_VALUE(preprocessJob_, preprocessJob) };
    inline SubmitPreprocessJobsResponseBodyPreprocessJobs& setPreprocessJob(vector<Models::SubmitPreprocessJobsResponseBodyPreprocessJobsPreprocessJob> && preprocessJob) { DARABONBA_PTR_SET_RVALUE(preprocessJob_, preprocessJob) };


  protected:
    std::shared_ptr<vector<Models::SubmitPreprocessJobsResponseBodyPreprocessJobsPreprocessJob>> preprocessJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
