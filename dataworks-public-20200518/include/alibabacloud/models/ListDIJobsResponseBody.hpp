// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDIJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobPaging, DIJobPaging_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobPaging, DIJobPaging_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDIJobsResponseBody() = default ;
    ListDIJobsResponseBody(const ListDIJobsResponseBody &) = default ;
    ListDIJobsResponseBody(ListDIJobsResponseBody &&) = default ;
    ListDIJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobsResponseBody() = default ;
    ListDIJobsResponseBody& operator=(const ListDIJobsResponseBody &) = default ;
    ListDIJobsResponseBody& operator=(ListDIJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DIJobPaging : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DIJobPaging& obj) { 
        DARABONBA_PTR_TO_JSON(DIJobs, DIJobs_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, DIJobPaging& obj) { 
        DARABONBA_PTR_FROM_JSON(DIJobs, DIJobs_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      DIJobPaging() = default ;
      DIJobPaging(const DIJobPaging &) = default ;
      DIJobPaging(DIJobPaging &&) = default ;
      DIJobPaging(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DIJobPaging() = default ;
      DIJobPaging& operator=(const DIJobPaging &) = default ;
      DIJobPaging& operator=(DIJobPaging &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DIJobs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DIJobs& obj) { 
          DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
          DARABONBA_PTR_TO_JSON(DestinationDataSourceType, destinationDataSourceType_);
          DARABONBA_PTR_TO_JSON(JobName, jobName_);
          DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
          DARABONBA_PTR_TO_JSON(MigrationType, migrationType_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(SourceDataSourceType, sourceDataSourceType_);
        };
        friend void from_json(const Darabonba::Json& j, DIJobs& obj) { 
          DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
          DARABONBA_PTR_FROM_JSON(DestinationDataSourceType, destinationDataSourceType_);
          DARABONBA_PTR_FROM_JSON(JobName, jobName_);
          DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
          DARABONBA_PTR_FROM_JSON(MigrationType, migrationType_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(SourceDataSourceType, sourceDataSourceType_);
        };
        DIJobs() = default ;
        DIJobs(const DIJobs &) = default ;
        DIJobs(DIJobs &&) = default ;
        DIJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DIJobs() = default ;
        DIJobs& operator=(const DIJobs &) = default ;
        DIJobs& operator=(DIJobs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DIJobId_ == nullptr
        && this->destinationDataSourceType_ == nullptr && this->jobName_ == nullptr && this->jobStatus_ == nullptr && this->migrationType_ == nullptr && this->projectId_ == nullptr
        && this->sourceDataSourceType_ == nullptr; };
        // DIJobId Field Functions 
        bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
        void deleteDIJobId() { this->DIJobId_ = nullptr;};
        inline int64_t getDIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
        inline DIJobs& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


        // destinationDataSourceType Field Functions 
        bool hasDestinationDataSourceType() const { return this->destinationDataSourceType_ != nullptr;};
        void deleteDestinationDataSourceType() { this->destinationDataSourceType_ = nullptr;};
        inline string getDestinationDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(destinationDataSourceType_, "") };
        inline DIJobs& setDestinationDataSourceType(string destinationDataSourceType) { DARABONBA_PTR_SET_VALUE(destinationDataSourceType_, destinationDataSourceType) };


        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline DIJobs& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // jobStatus Field Functions 
        bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
        void deleteJobStatus() { this->jobStatus_ = nullptr;};
        inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
        inline DIJobs& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


        // migrationType Field Functions 
        bool hasMigrationType() const { return this->migrationType_ != nullptr;};
        void deleteMigrationType() { this->migrationType_ = nullptr;};
        inline string getMigrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
        inline DIJobs& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline DIJobs& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // sourceDataSourceType Field Functions 
        bool hasSourceDataSourceType() const { return this->sourceDataSourceType_ != nullptr;};
        void deleteSourceDataSourceType() { this->sourceDataSourceType_ = nullptr;};
        inline string getSourceDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSourceType_, "") };
        inline DIJobs& setSourceDataSourceType(string sourceDataSourceType) { DARABONBA_PTR_SET_VALUE(sourceDataSourceType_, sourceDataSourceType) };


      protected:
        // The task ID.
        shared_ptr<int64_t> DIJobId_ {};
        // The type of the destination. The value Hologres is returned.
        shared_ptr<string> destinationDataSourceType_ {};
        // The task name.
        shared_ptr<string> jobName_ {};
        // The task status. Valid values:
        // 
        // *   Finished
        // *   Initialized
        // *   Stopped
        // *   Failed
        // *   Running
        // *   Stopping
        shared_ptr<string> jobStatus_ {};
        // The synchronization type. Valid values:
        // 
        // *   FullAndRealtimeIncremental: one-time full synchronization and real-time incremental synchronization
        // *   RealtimeIncremental: real-time incremental synchronization
        // *   Full: one-time full synchronization
        shared_ptr<string> migrationType_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The type of the source. The value MySQL is returned.
        shared_ptr<string> sourceDataSourceType_ {};
      };

      virtual bool empty() const override { return this->DIJobs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // DIJobs Field Functions 
      bool hasDIJobs() const { return this->DIJobs_ != nullptr;};
      void deleteDIJobs() { this->DIJobs_ = nullptr;};
      inline const vector<DIJobPaging::DIJobs> & getDIJobs() const { DARABONBA_PTR_GET_CONST(DIJobs_, vector<DIJobPaging::DIJobs>) };
      inline vector<DIJobPaging::DIJobs> getDIJobs() { DARABONBA_PTR_GET(DIJobs_, vector<DIJobPaging::DIJobs>) };
      inline DIJobPaging& setDIJobs(const vector<DIJobPaging::DIJobs> & dIJobs) { DARABONBA_PTR_SET_VALUE(DIJobs_, dIJobs) };
      inline DIJobPaging& setDIJobs(vector<DIJobPaging::DIJobs> && dIJobs) { DARABONBA_PTR_SET_RVALUE(DIJobs_, dIJobs) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline DIJobPaging& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline DIJobPaging& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline DIJobPaging& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of tasks.
      shared_ptr<vector<DIJobPaging::DIJobs>> DIJobs_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->DIJobPaging_ == nullptr
        && this->requestId_ == nullptr; };
    // DIJobPaging Field Functions 
    bool hasDIJobPaging() const { return this->DIJobPaging_ != nullptr;};
    void deleteDIJobPaging() { this->DIJobPaging_ = nullptr;};
    inline const ListDIJobsResponseBody::DIJobPaging & getDIJobPaging() const { DARABONBA_PTR_GET_CONST(DIJobPaging_, ListDIJobsResponseBody::DIJobPaging) };
    inline ListDIJobsResponseBody::DIJobPaging getDIJobPaging() { DARABONBA_PTR_GET(DIJobPaging_, ListDIJobsResponseBody::DIJobPaging) };
    inline ListDIJobsResponseBody& setDIJobPaging(const ListDIJobsResponseBody::DIJobPaging & dIJobPaging) { DARABONBA_PTR_SET_VALUE(DIJobPaging_, dIJobPaging) };
    inline ListDIJobsResponseBody& setDIJobPaging(ListDIJobsResponseBody::DIJobPaging && dIJobPaging) { DARABONBA_PTR_SET_RVALUE(DIJobPaging_, dIJobPaging) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDIJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListDIJobsResponseBody::DIJobPaging> DIJobPaging_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
