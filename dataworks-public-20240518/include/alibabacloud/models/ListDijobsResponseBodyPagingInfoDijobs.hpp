// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBSRESPONSEBODYPAGINGINFODIJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBSRESPONSEBODYPAGINGINFODIJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobsResponseBodyPagingInfoDIJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobsResponseBodyPagingInfoDIJobs& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceType, sourceDataSourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobsResponseBodyPagingInfoDIJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceType, sourceDataSourceType_);
    };
    ListDIJobsResponseBodyPagingInfoDIJobs() = default ;
    ListDIJobsResponseBodyPagingInfoDIJobs(const ListDIJobsResponseBodyPagingInfoDIJobs &) = default ;
    ListDIJobsResponseBodyPagingInfoDIJobs(ListDIJobsResponseBodyPagingInfoDIJobs &&) = default ;
    ListDIJobsResponseBodyPagingInfoDIJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobsResponseBodyPagingInfoDIJobs() = default ;
    ListDIJobsResponseBodyPagingInfoDIJobs& operator=(const ListDIJobsResponseBodyPagingInfoDIJobs &) = default ;
    ListDIJobsResponseBodyPagingInfoDIJobs& operator=(ListDIJobsResponseBodyPagingInfoDIJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIJobId_ != nullptr
        && this->destinationDataSourceType_ != nullptr && this->id_ != nullptr && this->jobName_ != nullptr && this->jobStatus_ != nullptr && this->migrationType_ != nullptr
        && this->projectId_ != nullptr && this->sourceDataSourceType_ != nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline ListDIJobsResponseBodyPagingInfoDIJobs& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // destinationDataSourceType Field Functions 
    bool hasDestinationDataSourceType() const { return this->destinationDataSourceType_ != nullptr;};
    void deleteDestinationDataSourceType() { this->destinationDataSourceType_ = nullptr;};
    inline string destinationDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(destinationDataSourceType_, "") };
    inline ListDIJobsResponseBodyPagingInfoDIJobs& setDestinationDataSourceType(string destinationDataSourceType) { DARABONBA_PTR_SET_VALUE(destinationDataSourceType_, destinationDataSourceType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDIJobsResponseBodyPagingInfoDIJobs& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListDIJobsResponseBodyPagingInfoDIJobs& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline ListDIJobsResponseBodyPagingInfoDIJobs& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline string migrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
    inline ListDIJobsResponseBodyPagingInfoDIJobs& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDIJobsResponseBodyPagingInfoDIJobs& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sourceDataSourceType Field Functions 
    bool hasSourceDataSourceType() const { return this->sourceDataSourceType_ != nullptr;};
    void deleteSourceDataSourceType() { this->sourceDataSourceType_ = nullptr;};
    inline string sourceDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSourceType_, "") };
    inline ListDIJobsResponseBodyPagingInfoDIJobs& setSourceDataSourceType(string sourceDataSourceType) { DARABONBA_PTR_SET_VALUE(sourceDataSourceType_, sourceDataSourceType) };


  protected:
    // This parameter is deprecated. Use the Id parameter instead.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The destination type. Valid values: Hologres, OSS-HDFS, OSS, MaxCompute, Loghub, STARROCKS, DataHub, ANALYTICDB_FOR_MYSQL, Kafka, and Hive.
    std::shared_ptr<string> destinationDataSourceType_ = nullptr;
    // The ID of the synchronization task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the synchronization task.
    std::shared_ptr<string> jobName_ = nullptr;
    // The status of the synchronization task. Valid values:
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
    // *   Full: full synchronization
    // *   OfflineIncremental: batch incremental synchronization
    // *   FullAndOfflineIncremental: one-time full synchronization and batch incremental synchronization
    std::shared_ptr<string> migrationType_ = nullptr;
    // The ID of the DataWorks workspace to which the synchronization task belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The source type. Valid values: PolarDB, MySQL, Kafka, Loghub, Hologres, Oracle, OceanBase, MongoDB, RedShift, Hive, SqlServer, Doris, and ClickHouse. If you do not configure this parameter, the API operation returns synchronization tasks that use all types of sources.
    std::shared_ptr<string> sourceDataSourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
