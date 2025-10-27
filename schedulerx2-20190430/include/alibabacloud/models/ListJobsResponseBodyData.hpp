// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobsResponseBodyDataJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListJobsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
    };
    ListJobsResponseBodyData() = default ;
    ListJobsResponseBodyData(const ListJobsResponseBodyData &) = default ;
    ListJobsResponseBodyData(ListJobsResponseBodyData &&) = default ;
    ListJobsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyData() = default ;
    ListJobsResponseBodyData& operator=(const ListJobsResponseBodyData &) = default ;
    ListJobsResponseBodyData& operator=(ListJobsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobs_ == nullptr; };
    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<Models::ListJobsResponseBodyDataJobs> & jobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<Models::ListJobsResponseBodyDataJobs>) };
    inline vector<Models::ListJobsResponseBodyDataJobs> jobs() { DARABONBA_PTR_GET(jobs_, vector<Models::ListJobsResponseBodyDataJobs>) };
    inline ListJobsResponseBodyData& setJobs(const vector<Models::ListJobsResponseBodyDataJobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline ListJobsResponseBodyData& setJobs(vector<Models::ListJobsResponseBodyDataJobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


  protected:
    // The jobs and their details.
    std::shared_ptr<vector<Models::ListJobsResponseBodyDataJobs>> jobs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
