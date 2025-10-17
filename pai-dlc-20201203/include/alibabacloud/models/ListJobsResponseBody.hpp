// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/JobItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ListJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListJobsResponseBody() = default ;
    ListJobsResponseBody(const ListJobsResponseBody &) = default ;
    ListJobsResponseBody(ListJobsResponseBody &&) = default ;
    ListJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBody() = default ;
    ListJobsResponseBody& operator=(const ListJobsResponseBody &) = default ;
    ListJobsResponseBody& operator=(ListJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobs_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<JobItem> & jobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<JobItem>) };
    inline vector<JobItem> jobs() { DARABONBA_PTR_GET(jobs_, vector<JobItem>) };
    inline ListJobsResponseBody& setJobs(const vector<JobItem> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline ListJobsResponseBody& setJobs(vector<JobItem> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListJobsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The jobs.
    std::shared_ptr<vector<JobItem>> jobs_ = nullptr;
    // The request ID used to troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of jobs that meet the filter conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
