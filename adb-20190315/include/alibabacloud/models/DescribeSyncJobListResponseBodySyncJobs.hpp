// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCJOBLISTRESPONSEBODYSYNCJOBS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCJOBLISTRESPONSEBODYSYNCJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSyncJobListResponseBodySyncJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncJobListResponseBodySyncJobs& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceDBClusterDescription, sourceDBClusterDescription_);
      DARABONBA_PTR_TO_JSON(SourceDBClusterId, sourceDBClusterId_);
      DARABONBA_PTR_TO_JSON(SourceDBType, sourceDBType_);
      DARABONBA_PTR_TO_JSON(SourceStorageSize, sourceStorageSize_);
      DARABONBA_PTR_TO_JSON(SourceTableNumber, sourceTableNumber_);
      DARABONBA_PTR_TO_JSON(SyncPlatform, syncPlatform_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncJobListResponseBodySyncJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceDBClusterDescription, sourceDBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(SourceDBClusterId, sourceDBClusterId_);
      DARABONBA_PTR_FROM_JSON(SourceDBType, sourceDBType_);
      DARABONBA_PTR_FROM_JSON(SourceStorageSize, sourceStorageSize_);
      DARABONBA_PTR_FROM_JSON(SourceTableNumber, sourceTableNumber_);
      DARABONBA_PTR_FROM_JSON(SyncPlatform, syncPlatform_);
    };
    DescribeSyncJobListResponseBodySyncJobs() = default ;
    DescribeSyncJobListResponseBodySyncJobs(const DescribeSyncJobListResponseBodySyncJobs &) = default ;
    DescribeSyncJobListResponseBodySyncJobs(DescribeSyncJobListResponseBodySyncJobs &&) = default ;
    DescribeSyncJobListResponseBodySyncJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncJobListResponseBodySyncJobs() = default ;
    DescribeSyncJobListResponseBodySyncJobs& operator=(const DescribeSyncJobListResponseBodySyncJobs &) = default ;
    DescribeSyncJobListResponseBodySyncJobs& operator=(DescribeSyncJobListResponseBodySyncJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->regionId_ != nullptr && this->sourceDBClusterDescription_ != nullptr && this->sourceDBClusterId_ != nullptr && this->sourceDBType_ != nullptr && this->sourceStorageSize_ != nullptr
        && this->sourceTableNumber_ != nullptr && this->syncPlatform_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeSyncJobListResponseBodySyncJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSyncJobListResponseBodySyncJobs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceDBClusterDescription Field Functions 
    bool hasSourceDBClusterDescription() const { return this->sourceDBClusterDescription_ != nullptr;};
    void deleteSourceDBClusterDescription() { this->sourceDBClusterDescription_ = nullptr;};
    inline string sourceDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(sourceDBClusterDescription_, "") };
    inline DescribeSyncJobListResponseBodySyncJobs& setSourceDBClusterDescription(string sourceDBClusterDescription) { DARABONBA_PTR_SET_VALUE(sourceDBClusterDescription_, sourceDBClusterDescription) };


    // sourceDBClusterId Field Functions 
    bool hasSourceDBClusterId() const { return this->sourceDBClusterId_ != nullptr;};
    void deleteSourceDBClusterId() { this->sourceDBClusterId_ = nullptr;};
    inline string sourceDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceDBClusterId_, "") };
    inline DescribeSyncJobListResponseBodySyncJobs& setSourceDBClusterId(string sourceDBClusterId) { DARABONBA_PTR_SET_VALUE(sourceDBClusterId_, sourceDBClusterId) };


    // sourceDBType Field Functions 
    bool hasSourceDBType() const { return this->sourceDBType_ != nullptr;};
    void deleteSourceDBType() { this->sourceDBType_ = nullptr;};
    inline string sourceDBType() const { DARABONBA_PTR_GET_DEFAULT(sourceDBType_, "") };
    inline DescribeSyncJobListResponseBodySyncJobs& setSourceDBType(string sourceDBType) { DARABONBA_PTR_SET_VALUE(sourceDBType_, sourceDBType) };


    // sourceStorageSize Field Functions 
    bool hasSourceStorageSize() const { return this->sourceStorageSize_ != nullptr;};
    void deleteSourceStorageSize() { this->sourceStorageSize_ = nullptr;};
    inline int32_t sourceStorageSize() const { DARABONBA_PTR_GET_DEFAULT(sourceStorageSize_, 0) };
    inline DescribeSyncJobListResponseBodySyncJobs& setSourceStorageSize(int32_t sourceStorageSize) { DARABONBA_PTR_SET_VALUE(sourceStorageSize_, sourceStorageSize) };


    // sourceTableNumber Field Functions 
    bool hasSourceTableNumber() const { return this->sourceTableNumber_ != nullptr;};
    void deleteSourceTableNumber() { this->sourceTableNumber_ = nullptr;};
    inline int32_t sourceTableNumber() const { DARABONBA_PTR_GET_DEFAULT(sourceTableNumber_, 0) };
    inline DescribeSyncJobListResponseBodySyncJobs& setSourceTableNumber(int32_t sourceTableNumber) { DARABONBA_PTR_SET_VALUE(sourceTableNumber_, sourceTableNumber) };


    // syncPlatform Field Functions 
    bool hasSyncPlatform() const { return this->syncPlatform_ != nullptr;};
    void deleteSyncPlatform() { this->syncPlatform_ = nullptr;};
    inline string syncPlatform() const { DARABONBA_PTR_GET_DEFAULT(syncPlatform_, "") };
    inline DescribeSyncJobListResponseBodySyncJobs& setSyncPlatform(string syncPlatform) { DARABONBA_PTR_SET_VALUE(syncPlatform_, syncPlatform) };


  protected:
    // The ID of the Spark job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The description of the source instance or cluster.
    std::shared_ptr<string> sourceDBClusterDescription_ = nullptr;
    // The ID of the source cluster. You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/170879.html) operation to query backup set IDs.
    // 
    // >  If you want to restore the data of an ApsaraDB for ClickHouse cluster, this parameter is required.
    std::shared_ptr<string> sourceDBClusterId_ = nullptr;
    // The database type of the source instance or cluster.
    std::shared_ptr<string> sourceDBType_ = nullptr;
    // The storage size of the source instance or cluster.
    std::shared_ptr<int32_t> sourceStorageSize_ = nullptr;
    // The number of tables in the source instance or cluster.
    std::shared_ptr<int32_t> sourceTableNumber_ = nullptr;
    // The synchronization platform.
    std::shared_ptr<string> syncPlatform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
