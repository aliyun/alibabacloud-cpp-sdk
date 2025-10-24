// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultList& obj) { 
      DARABONBA_PTR_TO_JSON(JobResult, jobResult_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(JobResult, jobResult_);
    };
    SubmitJobsResponseBodyJobResultList() = default ;
    SubmitJobsResponseBodyJobResultList(const SubmitJobsResponseBodyJobResultList &) = default ;
    SubmitJobsResponseBodyJobResultList(SubmitJobsResponseBodyJobResultList &&) = default ;
    SubmitJobsResponseBodyJobResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultList() = default ;
    SubmitJobsResponseBodyJobResultList& operator=(const SubmitJobsResponseBodyJobResultList &) = default ;
    SubmitJobsResponseBodyJobResultList& operator=(SubmitJobsResponseBodyJobResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobResult_ == nullptr; };
    // jobResult Field Functions 
    bool hasJobResult() const { return this->jobResult_ != nullptr;};
    void deleteJobResult() { this->jobResult_ = nullptr;};
    inline const vector<Models::SubmitJobsResponseBodyJobResultListJobResult> & jobResult() const { DARABONBA_PTR_GET_CONST(jobResult_, vector<Models::SubmitJobsResponseBodyJobResultListJobResult>) };
    inline vector<Models::SubmitJobsResponseBodyJobResultListJobResult> jobResult() { DARABONBA_PTR_GET(jobResult_, vector<Models::SubmitJobsResponseBodyJobResultListJobResult>) };
    inline SubmitJobsResponseBodyJobResultList& setJobResult(const vector<Models::SubmitJobsResponseBodyJobResultListJobResult> & jobResult) { DARABONBA_PTR_SET_VALUE(jobResult_, jobResult) };
    inline SubmitJobsResponseBodyJobResultList& setJobResult(vector<Models::SubmitJobsResponseBodyJobResultListJobResult> && jobResult) { DARABONBA_PTR_SET_RVALUE(jobResult_, jobResult) };


  protected:
    std::shared_ptr<vector<Models::SubmitJobsResponseBodyJobResultListJobResult>> jobResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
