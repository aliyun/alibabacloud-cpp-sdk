// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTRESPONSEBODYJOBSLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTRESPONSEBODYJOBSLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryJobsWithResultResponseBodyJobsListLatestTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class QueryJobsWithResultResponseBodyJobsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobsWithResultResponseBodyJobsList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JobFailureReason, jobFailureReason_);
      DARABONBA_PTR_TO_JSON(LatestTask, latestTask_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusName, statusName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobsWithResultResponseBodyJobsList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JobFailureReason, jobFailureReason_);
      DARABONBA_PTR_FROM_JSON(LatestTask, latestTask_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
    };
    QueryJobsWithResultResponseBodyJobsList() = default ;
    QueryJobsWithResultResponseBodyJobsList(const QueryJobsWithResultResponseBodyJobsList &) = default ;
    QueryJobsWithResultResponseBodyJobsList(QueryJobsWithResultResponseBodyJobsList &&) = default ;
    QueryJobsWithResultResponseBodyJobsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobsWithResultResponseBodyJobsList() = default ;
    QueryJobsWithResultResponseBodyJobsList& operator=(const QueryJobsWithResultResponseBodyJobsList &) = default ;
    QueryJobsWithResultResponseBodyJobsList& operator=(QueryJobsWithResultResponseBodyJobsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->jobFailureReason_ == nullptr && return this->latestTask_ == nullptr && return this->status_ == nullptr && return this->statusName_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryJobsWithResultResponseBodyJobsList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobFailureReason Field Functions 
    bool hasJobFailureReason() const { return this->jobFailureReason_ != nullptr;};
    void deleteJobFailureReason() { this->jobFailureReason_ = nullptr;};
    inline string jobFailureReason() const { DARABONBA_PTR_GET_DEFAULT(jobFailureReason_, "") };
    inline QueryJobsWithResultResponseBodyJobsList& setJobFailureReason(string jobFailureReason) { DARABONBA_PTR_SET_VALUE(jobFailureReason_, jobFailureReason) };


    // latestTask Field Functions 
    bool hasLatestTask() const { return this->latestTask_ != nullptr;};
    void deleteLatestTask() { this->latestTask_ = nullptr;};
    inline const Models::QueryJobsWithResultResponseBodyJobsListLatestTask & latestTask() const { DARABONBA_PTR_GET_CONST(latestTask_, Models::QueryJobsWithResultResponseBodyJobsListLatestTask) };
    inline Models::QueryJobsWithResultResponseBodyJobsListLatestTask latestTask() { DARABONBA_PTR_GET(latestTask_, Models::QueryJobsWithResultResponseBodyJobsListLatestTask) };
    inline QueryJobsWithResultResponseBodyJobsList& setLatestTask(const Models::QueryJobsWithResultResponseBodyJobsListLatestTask & latestTask) { DARABONBA_PTR_SET_VALUE(latestTask_, latestTask) };
    inline QueryJobsWithResultResponseBodyJobsList& setLatestTask(Models::QueryJobsWithResultResponseBodyJobsListLatestTask && latestTask) { DARABONBA_PTR_SET_RVALUE(latestTask_, latestTask) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryJobsWithResultResponseBodyJobsList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusName Field Functions 
    bool hasStatusName() const { return this->statusName_ != nullptr;};
    void deleteStatusName() { this->statusName_ = nullptr;};
    inline string statusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
    inline QueryJobsWithResultResponseBodyJobsList& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> jobFailureReason_ = nullptr;
    std::shared_ptr<Models::QueryJobsWithResultResponseBodyJobsListLatestTask> latestTask_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
