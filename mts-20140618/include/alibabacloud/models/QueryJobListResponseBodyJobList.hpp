// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobList& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
    };
    QueryJobListResponseBodyJobList() = default ;
    QueryJobListResponseBodyJobList(const QueryJobListResponseBodyJobList &) = default ;
    QueryJobListResponseBodyJobList(QueryJobListResponseBodyJobList &&) = default ;
    QueryJobListResponseBodyJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobList() = default ;
    QueryJobListResponseBodyJobList& operator=(const QueryJobListResponseBodyJobList &) = default ;
    QueryJobListResponseBodyJobList& operator=(QueryJobListResponseBodyJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->job_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const vector<Models::QueryJobListResponseBodyJobListJob> & job() const { DARABONBA_PTR_GET_CONST(job_, vector<Models::QueryJobListResponseBodyJobListJob>) };
    inline vector<Models::QueryJobListResponseBodyJobListJob> job() { DARABONBA_PTR_GET(job_, vector<Models::QueryJobListResponseBodyJobListJob>) };
    inline QueryJobListResponseBodyJobList& setJob(const vector<Models::QueryJobListResponseBodyJobListJob> & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline QueryJobListResponseBodyJobList& setJob(vector<Models::QueryJobListResponseBodyJobListJob> && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


  protected:
    std::shared_ptr<vector<Models::QueryJobListResponseBodyJobListJob>> job_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
