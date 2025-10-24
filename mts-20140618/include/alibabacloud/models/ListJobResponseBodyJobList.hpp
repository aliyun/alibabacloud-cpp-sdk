// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobResponseBodyJobListJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobList& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
    };
    ListJobResponseBodyJobList() = default ;
    ListJobResponseBodyJobList(const ListJobResponseBodyJobList &) = default ;
    ListJobResponseBodyJobList(ListJobResponseBodyJobList &&) = default ;
    ListJobResponseBodyJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobList() = default ;
    ListJobResponseBodyJobList& operator=(const ListJobResponseBodyJobList &) = default ;
    ListJobResponseBodyJobList& operator=(ListJobResponseBodyJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->job_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const vector<Models::ListJobResponseBodyJobListJob> & job() const { DARABONBA_PTR_GET_CONST(job_, vector<Models::ListJobResponseBodyJobListJob>) };
    inline vector<Models::ListJobResponseBodyJobListJob> job() { DARABONBA_PTR_GET(job_, vector<Models::ListJobResponseBodyJobListJob>) };
    inline ListJobResponseBodyJobList& setJob(const vector<Models::ListJobResponseBodyJobListJob> & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline ListJobResponseBodyJobList& setJob(vector<Models::ListJobResponseBodyJobListJob> && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


  protected:
    std::shared_ptr<vector<Models::ListJobResponseBodyJobListJob>> job_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
