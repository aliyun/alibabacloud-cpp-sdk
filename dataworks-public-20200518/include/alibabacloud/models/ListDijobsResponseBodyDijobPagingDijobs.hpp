// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBSRESPONSEBODYDIJOBPAGINGDIJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBSRESPONSEBODYDIJOBPAGINGDIJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDIJobsResponseBodyDIJobPagingDIJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobsResponseBodyDIJobPagingDIJobs& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceType, sourceDataSourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobsResponseBodyDIJobPagingDIJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceType, sourceDataSourceType_);
    };
    ListDIJobsResponseBodyDIJobPagingDIJobs() = default ;
    ListDIJobsResponseBodyDIJobPagingDIJobs(const ListDIJobsResponseBodyDIJobPagingDIJobs &) = default ;
    ListDIJobsResponseBodyDIJobPagingDIJobs(ListDIJobsResponseBodyDIJobPagingDIJobs &&) = default ;
    ListDIJobsResponseBodyDIJobPagingDIJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobsResponseBodyDIJobPagingDIJobs() = default ;
    ListDIJobsResponseBodyDIJobPagingDIJobs& operator=(const ListDIJobsResponseBodyDIJobPagingDIJobs &) = default ;
    ListDIJobsResponseBodyDIJobPagingDIJobs& operator=(ListDIJobsResponseBodyDIJobPagingDIJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIJobId_ != nullptr
        && this->destinationDataSourceType_ != nullptr && this->jobName_ != nullptr && this->jobStatus_ != nullptr && this->migrationType_ != nullptr && this->projectId_ != nullptr
        && this->sourceDataSourceType_ != nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline ListDIJobsResponseBodyDIJobPagingDIJobs& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // destinationDataSourceType Field Functions 
    bool hasDestinationDataSourceType() const { return this->destinationDataSourceType_ != nullptr;};
    void deleteDestinationDataSourceType() { this->destinationDataSourceType_ = nullptr;};
    inline string destinationDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(destinationDataSourceType_, "") };
    inline ListDIJobsResponseBodyDIJobPagingDIJobs& setDestinationDataSourceType(string destinationDataSourceType) { DARABONBA_PTR_SET_VALUE(destinationDataSourceType_, destinationDataSourceType) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListDIJobsResponseBodyDIJobPagingDIJobs& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline ListDIJobsResponseBodyDIJobPagingDIJobs& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline string migrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
    inline ListDIJobsResponseBodyDIJobPagingDIJobs& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDIJobsResponseBodyDIJobPagingDIJobs& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sourceDataSourceType Field Functions 
    bool hasSourceDataSourceType() const { return this->sourceDataSourceType_ != nullptr;};
    void deleteSourceDataSourceType() { this->sourceDataSourceType_ = nullptr;};
    inline string sourceDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSourceType_, "") };
    inline ListDIJobsResponseBodyDIJobPagingDIJobs& setSourceDataSourceType(string sourceDataSourceType) { DARABONBA_PTR_SET_VALUE(sourceDataSourceType_, sourceDataSourceType) };


  protected:
    // The task ID.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The type of the destination. The value Hologres is returned.
    std::shared_ptr<string> destinationDataSourceType_ = nullptr;
    // The task name.
    std::shared_ptr<string> jobName_ = nullptr;
    // The task status. Valid values:
    // 
    // *   Finished
    // *   Initialized
    // *   Stopped
    // *   Failed
    // *   Running
    // *   Stopping
    std::shared_ptr<string> jobStatus_ = nullptr;
    // The synchronization type. Valid values:
    // 
    // *   FullAndRealtimeIncremental: one-time full synchronization and real-time incremental synchronization
    // *   RealtimeIncremental: real-time incremental synchronization
    // *   Full: one-time full synchronization
    std::shared_ptr<string> migrationType_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The type of the source. The value MySQL is returned.
    std::shared_ptr<string> sourceDataSourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
