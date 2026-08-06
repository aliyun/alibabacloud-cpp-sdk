// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEMANTICJOBRUNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSEMANTICJOBRUNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListSemanticJobRunsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSemanticJobRunsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSemanticJobRunsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSemanticJobRunsResponseBody() = default ;
    ListSemanticJobRunsResponseBody(const ListSemanticJobRunsResponseBody &) = default ;
    ListSemanticJobRunsResponseBody(ListSemanticJobRunsResponseBody &&) = default ;
    ListSemanticJobRunsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSemanticJobRunsResponseBody() = default ;
    ListSemanticJobRunsResponseBody& operator=(const ListSemanticJobRunsResponseBody &) = default ;
    ListSemanticJobRunsResponseBody& operator=(ListSemanticJobRunsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(JobRuns, jobRuns_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(JobRuns, jobRuns_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class JobRuns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobRuns& obj) { 
          DARABONBA_PTR_TO_JSON(ExecutorJobId, executorJobId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(JobName, jobName_);
          DARABONBA_PTR_TO_JSON(JobRunId, jobRunId_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, JobRuns& obj) { 
          DARABONBA_PTR_FROM_JSON(ExecutorJobId, executorJobId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(JobName, jobName_);
          DARABONBA_PTR_FROM_JSON(JobRunId, jobRunId_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        JobRuns() = default ;
        JobRuns(const JobRuns &) = default ;
        JobRuns(JobRuns &&) = default ;
        JobRuns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobRuns() = default ;
        JobRuns& operator=(const JobRuns &) = default ;
        JobRuns& operator=(JobRuns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->executorJobId_ == nullptr
        && this->gmtCreate_ == nullptr && this->jobName_ == nullptr && this->jobRunId_ == nullptr && this->userId_ == nullptr; };
        // executorJobId Field Functions 
        bool hasExecutorJobId() const { return this->executorJobId_ != nullptr;};
        void deleteExecutorJobId() { this->executorJobId_ = nullptr;};
        inline string getExecutorJobId() const { DARABONBA_PTR_GET_DEFAULT(executorJobId_, "") };
        inline JobRuns& setExecutorJobId(string executorJobId) { DARABONBA_PTR_SET_VALUE(executorJobId_, executorJobId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline JobRuns& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline JobRuns& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // jobRunId Field Functions 
        bool hasJobRunId() const { return this->jobRunId_ != nullptr;};
        void deleteJobRunId() { this->jobRunId_ = nullptr;};
        inline string getJobRunId() const { DARABONBA_PTR_GET_DEFAULT(jobRunId_, "") };
        inline JobRuns& setJobRunId(string jobRunId) { DARABONBA_PTR_SET_VALUE(jobRunId_, jobRunId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline JobRuns& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The executor job ID. Pass this value as the ExecutorJobId parameter to GetSemanticJobDetail, GetSemanticJobLog, or KillSemanticJob.
        shared_ptr<string> executorJobId_ {};
        // The time when the run record was created. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> gmtCreate_ {};
        // The name of the job to which this run belongs. You can use this value to rerun the job, query run records, or download results.
        shared_ptr<string> jobName_ {};
        // The semantic job run ID. Pass this value as the JobRunId parameter to DownloadSemanticResults to download the results of this run.
        shared_ptr<string> jobRunId_ {};
        // The ID of the user who submitted this run.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->jobRuns_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // jobRuns Field Functions 
      bool hasJobRuns() const { return this->jobRuns_ != nullptr;};
      void deleteJobRuns() { this->jobRuns_ = nullptr;};
      inline const vector<Data::JobRuns> & getJobRuns() const { DARABONBA_PTR_GET_CONST(jobRuns_, vector<Data::JobRuns>) };
      inline vector<Data::JobRuns> getJobRuns() { DARABONBA_PTR_GET(jobRuns_, vector<Data::JobRuns>) };
      inline Data& setJobRuns(const vector<Data::JobRuns> & jobRuns) { DARABONBA_PTR_SET_VALUE(jobRuns_, jobRuns) };
      inline Data& setJobRuns(vector<Data::JobRuns> && jobRuns) { DARABONBA_PTR_SET_RVALUE(jobRuns_, jobRuns) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of run records.
      shared_ptr<vector<Data::JobRuns>> jobRuns_ {};
      // The page number of the returned page, starting from 1.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of records per page in the current response.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of run records that match the current job criteria.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSemanticJobRunsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSemanticJobRunsResponseBody::Data) };
    inline ListSemanticJobRunsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSemanticJobRunsResponseBody::Data) };
    inline ListSemanticJobRunsResponseBody& setData(const ListSemanticJobRunsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSemanticJobRunsResponseBody& setData(ListSemanticJobRunsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSemanticJobRunsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSemanticJobRunsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The paginated run record results. Use the JobRunId to download the results of a specific run, and use the ExecutorJobId to query details, retrieve logs, or stop a run.
    shared_ptr<ListSemanticJobRunsResponseBody::Data> data_ {};
    // The request ID. You can use this ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
