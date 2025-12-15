// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSREQUESTJOBFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSREQUESTJOBFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobsRequestJobFilterDiagnosis.hpp>
#include <alibabacloud/models/ListJobsRequestJobFilterSortBy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListJobsRequestJobFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsRequestJobFilter& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_TO_JSON(Diagnosis, diagnosis_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Queues, queues_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsRequestJobFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_FROM_JSON(Diagnosis, diagnosis_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Queues, queues_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListJobsRequestJobFilter() = default ;
    ListJobsRequestJobFilter(const ListJobsRequestJobFilter &) = default ;
    ListJobsRequestJobFilter(ListJobsRequestJobFilter &&) = default ;
    ListJobsRequestJobFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsRequestJobFilter() = default ;
    ListJobsRequestJobFilter& operator=(const ListJobsRequestJobFilter &) = default ;
    ListJobsRequestJobFilter& operator=(ListJobsRequestJobFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTimeEnd_ == nullptr
        && return this->createTimeStart_ == nullptr && return this->diagnosis_ == nullptr && return this->jobName_ == nullptr && return this->jobStatus_ == nullptr && return this->nodes_ == nullptr
        && return this->queues_ == nullptr && return this->sortBy_ == nullptr && return this->users_ == nullptr; };
    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline string createTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, "") };
    inline ListJobsRequestJobFilter& setCreateTimeEnd(string createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline string createTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, "") };
    inline ListJobsRequestJobFilter& setCreateTimeStart(string createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


    // diagnosis Field Functions 
    bool hasDiagnosis() const { return this->diagnosis_ != nullptr;};
    void deleteDiagnosis() { this->diagnosis_ = nullptr;};
    inline const vector<Models::ListJobsRequestJobFilterDiagnosis> & diagnosis() const { DARABONBA_PTR_GET_CONST(diagnosis_, vector<Models::ListJobsRequestJobFilterDiagnosis>) };
    inline vector<Models::ListJobsRequestJobFilterDiagnosis> diagnosis() { DARABONBA_PTR_GET(diagnosis_, vector<Models::ListJobsRequestJobFilterDiagnosis>) };
    inline ListJobsRequestJobFilter& setDiagnosis(const vector<Models::ListJobsRequestJobFilterDiagnosis> & diagnosis) { DARABONBA_PTR_SET_VALUE(diagnosis_, diagnosis) };
    inline ListJobsRequestJobFilter& setDiagnosis(vector<Models::ListJobsRequestJobFilterDiagnosis> && diagnosis) { DARABONBA_PTR_SET_RVALUE(diagnosis_, diagnosis) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListJobsRequestJobFilter& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline ListJobsRequestJobFilter& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<string> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<string>) };
    inline vector<string> nodes() { DARABONBA_PTR_GET(nodes_, vector<string>) };
    inline ListJobsRequestJobFilter& setNodes(const vector<string> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ListJobsRequestJobFilter& setNodes(vector<string> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // queues Field Functions 
    bool hasQueues() const { return this->queues_ != nullptr;};
    void deleteQueues() { this->queues_ = nullptr;};
    inline const vector<string> & queues() const { DARABONBA_PTR_GET_CONST(queues_, vector<string>) };
    inline vector<string> queues() { DARABONBA_PTR_GET(queues_, vector<string>) };
    inline ListJobsRequestJobFilter& setQueues(const vector<string> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
    inline ListJobsRequestJobFilter& setQueues(vector<string> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline const Models::ListJobsRequestJobFilterSortBy & sortBy() const { DARABONBA_PTR_GET_CONST(sortBy_, Models::ListJobsRequestJobFilterSortBy) };
    inline Models::ListJobsRequestJobFilterSortBy sortBy() { DARABONBA_PTR_GET(sortBy_, Models::ListJobsRequestJobFilterSortBy) };
    inline ListJobsRequestJobFilter& setSortBy(const Models::ListJobsRequestJobFilterSortBy & sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };
    inline ListJobsRequestJobFilter& setSortBy(Models::ListJobsRequestJobFilterSortBy && sortBy) { DARABONBA_PTR_SET_RVALUE(sortBy_, sortBy) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> users() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline ListJobsRequestJobFilter& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListJobsRequestJobFilter& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The time when the job was last updated. The value is a UNIX timestamp representing the number of seconds that have elapsed since 1970-01-01T00:00:00Z.
    std::shared_ptr<string> createTimeEnd_ = nullptr;
    // The time when the job started. The value is a UNIX timestamp representing the number of seconds that have elapsed since 1970-01-01T00:00:00Z.
    std::shared_ptr<string> createTimeStart_ = nullptr;
    // Job diagnosis and analysis list.
    std::shared_ptr<vector<Models::ListJobsRequestJobFilterDiagnosis>> diagnosis_ = nullptr;
    // The job name. Fuzzy match is supported.
    std::shared_ptr<string> jobName_ = nullptr;
    // The job status. Valid values:
    // 
    // *   all: returns all jobs.
    // *   finished: returns completed jobs.
    // *   notfinish: returns uncompleted jobs.
    // 
    // Default value: all.
    std::shared_ptr<string> jobStatus_ = nullptr;
    // The compute nodes that run the jobs.
    std::shared_ptr<vector<string>> nodes_ = nullptr;
    // The queues to which the jobs belong.
    std::shared_ptr<vector<string>> queues_ = nullptr;
    // The result sorting configurations.
    std::shared_ptr<Models::ListJobsRequestJobFilterSortBy> sortBy_ = nullptr;
    // The users that run the jobs.
    std::shared_ptr<vector<string>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
