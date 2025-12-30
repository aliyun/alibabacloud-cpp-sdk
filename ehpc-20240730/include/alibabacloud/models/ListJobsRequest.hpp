// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobFilter, jobFilter_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobFilter, jobFilter_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListJobsRequest() = default ;
    ListJobsRequest(const ListJobsRequest &) = default ;
    ListJobsRequest(ListJobsRequest &&) = default ;
    ListJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsRequest() = default ;
    ListJobsRequest& operator=(const ListJobsRequest &) = default ;
    ListJobsRequest& operator=(ListJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobFilter& obj) { 
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
      friend void from_json(const Darabonba::Json& j, JobFilter& obj) { 
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
      JobFilter() = default ;
      JobFilter(const JobFilter &) = default ;
      JobFilter(JobFilter &&) = default ;
      JobFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobFilter() = default ;
      JobFilter& operator=(const JobFilter &) = default ;
      JobFilter& operator=(JobFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SortBy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SortBy& obj) { 
          DARABONBA_PTR_TO_JSON(ExecuteOrder, executeOrder_);
          DARABONBA_PTR_TO_JSON(PendOrder, pendOrder_);
          DARABONBA_PTR_TO_JSON(SubmitOrder, submitOrder_);
        };
        friend void from_json(const Darabonba::Json& j, SortBy& obj) { 
          DARABONBA_PTR_FROM_JSON(ExecuteOrder, executeOrder_);
          DARABONBA_PTR_FROM_JSON(PendOrder, pendOrder_);
          DARABONBA_PTR_FROM_JSON(SubmitOrder, submitOrder_);
        };
        SortBy() = default ;
        SortBy(const SortBy &) = default ;
        SortBy(SortBy &&) = default ;
        SortBy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SortBy() = default ;
        SortBy& operator=(const SortBy &) = default ;
        SortBy& operator=(SortBy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->executeOrder_ == nullptr
        && this->pendOrder_ == nullptr && this->submitOrder_ == nullptr; };
        // executeOrder Field Functions 
        bool hasExecuteOrder() const { return this->executeOrder_ != nullptr;};
        void deleteExecuteOrder() { this->executeOrder_ = nullptr;};
        inline string getExecuteOrder() const { DARABONBA_PTR_GET_DEFAULT(executeOrder_, "") };
        inline SortBy& setExecuteOrder(string executeOrder) { DARABONBA_PTR_SET_VALUE(executeOrder_, executeOrder) };


        // pendOrder Field Functions 
        bool hasPendOrder() const { return this->pendOrder_ != nullptr;};
        void deletePendOrder() { this->pendOrder_ = nullptr;};
        inline string getPendOrder() const { DARABONBA_PTR_GET_DEFAULT(pendOrder_, "") };
        inline SortBy& setPendOrder(string pendOrder) { DARABONBA_PTR_SET_VALUE(pendOrder_, pendOrder) };


        // submitOrder Field Functions 
        bool hasSubmitOrder() const { return this->submitOrder_ != nullptr;};
        void deleteSubmitOrder() { this->submitOrder_ = nullptr;};
        inline string getSubmitOrder() const { DARABONBA_PTR_GET_DEFAULT(submitOrder_, "") };
        inline SortBy& setSubmitOrder(string submitOrder) { DARABONBA_PTR_SET_VALUE(submitOrder_, submitOrder) };


      protected:
        // The order in which jobs are sorted based on their execution time. Valid values:
        // 
        // *   asc: in ascending order.
        // *   desc: in descending order.
        // 
        // Default value: desc.
        shared_ptr<string> executeOrder_ {};
        // The order in which jobs are sorted based on their queuing time. Valid values:
        // 
        // *   asc: in ascending order.
        // *   desc: in descending order.
        // 
        // Default value: desc.
        shared_ptr<string> pendOrder_ {};
        // The order in which jobs are sorted based on their submitting time. Valid values:
        // 
        // *   asc: in ascending order.
        // *   desc: in descending order.
        // 
        // Default value: desc.
        shared_ptr<string> submitOrder_ {};
      };

      class Diagnosis : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Diagnosis& obj) { 
          DARABONBA_PTR_TO_JSON(Operator, operator_);
          DARABONBA_PTR_TO_JSON(Option, option_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        };
        friend void from_json(const Darabonba::Json& j, Diagnosis& obj) { 
          DARABONBA_PTR_FROM_JSON(Operator, operator_);
          DARABONBA_PTR_FROM_JSON(Option, option_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        };
        Diagnosis() = default ;
        Diagnosis(const Diagnosis &) = default ;
        Diagnosis(Diagnosis &&) = default ;
        Diagnosis(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Diagnosis() = default ;
        Diagnosis& operator=(const Diagnosis &) = default ;
        Diagnosis& operator=(Diagnosis &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->operator_ == nullptr
        && this->option_ == nullptr && this->threshold_ == nullptr; };
        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline Diagnosis& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // option Field Functions 
        bool hasOption() const { return this->option_ != nullptr;};
        void deleteOption() { this->option_ = nullptr;};
        inline string getOption() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
        inline Diagnosis& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
        inline Diagnosis& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      protected:
        // Job diagnosis threshold comparator.
        shared_ptr<string> operator_ {};
        // Job diagnosis and analysis metrics
        shared_ptr<string> option_ {};
        // Job diagnosis threshold.
        shared_ptr<string> threshold_ {};
      };

      virtual bool empty() const override { return this->createTimeEnd_ == nullptr
        && this->createTimeStart_ == nullptr && this->diagnosis_ == nullptr && this->jobName_ == nullptr && this->jobStatus_ == nullptr && this->nodes_ == nullptr
        && this->queues_ == nullptr && this->sortBy_ == nullptr && this->users_ == nullptr; };
      // createTimeEnd Field Functions 
      bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
      void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
      inline string getCreateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, "") };
      inline JobFilter& setCreateTimeEnd(string createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


      // createTimeStart Field Functions 
      bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
      void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
      inline string getCreateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, "") };
      inline JobFilter& setCreateTimeStart(string createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


      // diagnosis Field Functions 
      bool hasDiagnosis() const { return this->diagnosis_ != nullptr;};
      void deleteDiagnosis() { this->diagnosis_ = nullptr;};
      inline const vector<JobFilter::Diagnosis> & getDiagnosis() const { DARABONBA_PTR_GET_CONST(diagnosis_, vector<JobFilter::Diagnosis>) };
      inline vector<JobFilter::Diagnosis> getDiagnosis() { DARABONBA_PTR_GET(diagnosis_, vector<JobFilter::Diagnosis>) };
      inline JobFilter& setDiagnosis(const vector<JobFilter::Diagnosis> & diagnosis) { DARABONBA_PTR_SET_VALUE(diagnosis_, diagnosis) };
      inline JobFilter& setDiagnosis(vector<JobFilter::Diagnosis> && diagnosis) { DARABONBA_PTR_SET_RVALUE(diagnosis_, diagnosis) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline JobFilter& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
      inline JobFilter& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<string> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<string>) };
      inline vector<string> getNodes() { DARABONBA_PTR_GET(nodes_, vector<string>) };
      inline JobFilter& setNodes(const vector<string> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline JobFilter& setNodes(vector<string> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // queues Field Functions 
      bool hasQueues() const { return this->queues_ != nullptr;};
      void deleteQueues() { this->queues_ = nullptr;};
      inline const vector<string> & getQueues() const { DARABONBA_PTR_GET_CONST(queues_, vector<string>) };
      inline vector<string> getQueues() { DARABONBA_PTR_GET(queues_, vector<string>) };
      inline JobFilter& setQueues(const vector<string> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
      inline JobFilter& setQueues(vector<string> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


      // sortBy Field Functions 
      bool hasSortBy() const { return this->sortBy_ != nullptr;};
      void deleteSortBy() { this->sortBy_ = nullptr;};
      inline const JobFilter::SortBy & getSortBy() const { DARABONBA_PTR_GET_CONST(sortBy_, JobFilter::SortBy) };
      inline JobFilter::SortBy getSortBy() { DARABONBA_PTR_GET(sortBy_, JobFilter::SortBy) };
      inline JobFilter& setSortBy(const JobFilter::SortBy & sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };
      inline JobFilter& setSortBy(JobFilter::SortBy && sortBy) { DARABONBA_PTR_SET_RVALUE(sortBy_, sortBy) };


      // users Field Functions 
      bool hasUsers() const { return this->users_ != nullptr;};
      void deleteUsers() { this->users_ = nullptr;};
      inline const vector<string> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
      inline vector<string> getUsers() { DARABONBA_PTR_GET(users_, vector<string>) };
      inline JobFilter& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
      inline JobFilter& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


    protected:
      // The time when the job was last updated. The value is a UNIX timestamp representing the number of seconds that have elapsed since 1970-01-01T00:00:00Z.
      shared_ptr<string> createTimeEnd_ {};
      // The time when the job started. The value is a UNIX timestamp representing the number of seconds that have elapsed since 1970-01-01T00:00:00Z.
      shared_ptr<string> createTimeStart_ {};
      // Job diagnosis and analysis list.
      shared_ptr<vector<JobFilter::Diagnosis>> diagnosis_ {};
      // The job name. Fuzzy match is supported.
      shared_ptr<string> jobName_ {};
      // The job status. Valid values:
      // 
      // *   all: returns all jobs.
      // *   finished: returns completed jobs.
      // *   notfinish: returns uncompleted jobs.
      // 
      // Default value: all.
      shared_ptr<string> jobStatus_ {};
      // The compute nodes that run the jobs.
      shared_ptr<vector<string>> nodes_ {};
      // The queues to which the jobs belong.
      shared_ptr<vector<string>> queues_ {};
      // The result sorting configurations.
      shared_ptr<JobFilter::SortBy> sortBy_ {};
      // The users that run the jobs.
      shared_ptr<vector<string>> users_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->jobFilter_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListJobsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobFilter Field Functions 
    bool hasJobFilter() const { return this->jobFilter_ != nullptr;};
    void deleteJobFilter() { this->jobFilter_ = nullptr;};
    inline const ListJobsRequest::JobFilter & getJobFilter() const { DARABONBA_PTR_GET_CONST(jobFilter_, ListJobsRequest::JobFilter) };
    inline ListJobsRequest::JobFilter getJobFilter() { DARABONBA_PTR_GET(jobFilter_, ListJobsRequest::JobFilter) };
    inline ListJobsRequest& setJobFilter(const ListJobsRequest::JobFilter & jobFilter) { DARABONBA_PTR_SET_VALUE(jobFilter_, jobFilter) };
    inline ListJobsRequest& setJobFilter(ListJobsRequest::JobFilter && jobFilter) { DARABONBA_PTR_SET_RVALUE(jobFilter_, jobFilter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListJobsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListJobsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The job filter information.
    shared_ptr<ListJobsRequest::JobFilter> jobFilter_ {};
    // The page number of the page to return.
    // 
    // *   Pages start from page 1.
    // *   Default value: 1
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    // 
    // *   Maximum value: 50.
    // *   Default value: 10
    shared_ptr<string> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
