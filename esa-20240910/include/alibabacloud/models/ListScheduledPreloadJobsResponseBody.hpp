// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULEDPRELOADJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULEDPRELOADJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListScheduledPreloadJobsResponseBodyJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListScheduledPreloadJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduledPreloadJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduledPreloadJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScheduledPreloadJobsResponseBody() = default ;
    ListScheduledPreloadJobsResponseBody(const ListScheduledPreloadJobsResponseBody &) = default ;
    ListScheduledPreloadJobsResponseBody(ListScheduledPreloadJobsResponseBody &&) = default ;
    ListScheduledPreloadJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduledPreloadJobsResponseBody() = default ;
    ListScheduledPreloadJobsResponseBody& operator=(const ListScheduledPreloadJobsResponseBody &) = default ;
    ListScheduledPreloadJobsResponseBody& operator=(ListScheduledPreloadJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobs_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<ListScheduledPreloadJobsResponseBodyJobs> & jobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<ListScheduledPreloadJobsResponseBodyJobs>) };
    inline vector<ListScheduledPreloadJobsResponseBodyJobs> jobs() { DARABONBA_PTR_GET(jobs_, vector<ListScheduledPreloadJobsResponseBodyJobs>) };
    inline ListScheduledPreloadJobsResponseBody& setJobs(const vector<ListScheduledPreloadJobsResponseBodyJobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline ListScheduledPreloadJobsResponseBody& setJobs(vector<ListScheduledPreloadJobsResponseBodyJobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScheduledPreloadJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListScheduledPreloadJobsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of the prefetch tasks.
    std::shared_ptr<vector<ListScheduledPreloadJobsResponseBodyJobs>> jobs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of tasks returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
