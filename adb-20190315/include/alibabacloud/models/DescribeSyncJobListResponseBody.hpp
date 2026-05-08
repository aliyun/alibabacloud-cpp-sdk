// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCJOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSyncJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SyncJobs, syncJobs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SyncJobs, syncJobs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSyncJobListResponseBody() = default ;
    DescribeSyncJobListResponseBody(const DescribeSyncJobListResponseBody &) = default ;
    DescribeSyncJobListResponseBody(DescribeSyncJobListResponseBody &&) = default ;
    DescribeSyncJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncJobListResponseBody() = default ;
    DescribeSyncJobListResponseBody& operator=(const DescribeSyncJobListResponseBody &) = default ;
    DescribeSyncJobListResponseBody& operator=(DescribeSyncJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SyncJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SyncJobs& obj) { 
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SourceDBClusterDescription, sourceDBClusterDescription_);
        DARABONBA_PTR_TO_JSON(SourceDBClusterId, sourceDBClusterId_);
        DARABONBA_PTR_TO_JSON(SourceDBType, sourceDBType_);
        DARABONBA_PTR_TO_JSON(SourceStorageSize, sourceStorageSize_);
        DARABONBA_PTR_TO_JSON(SourceTableNumber, sourceTableNumber_);
        DARABONBA_PTR_TO_JSON(SyncPlatform, syncPlatform_);
      };
      friend void from_json(const Darabonba::Json& j, SyncJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SourceDBClusterDescription, sourceDBClusterDescription_);
        DARABONBA_PTR_FROM_JSON(SourceDBClusterId, sourceDBClusterId_);
        DARABONBA_PTR_FROM_JSON(SourceDBType, sourceDBType_);
        DARABONBA_PTR_FROM_JSON(SourceStorageSize, sourceStorageSize_);
        DARABONBA_PTR_FROM_JSON(SourceTableNumber, sourceTableNumber_);
        DARABONBA_PTR_FROM_JSON(SyncPlatform, syncPlatform_);
      };
      SyncJobs() = default ;
      SyncJobs(const SyncJobs &) = default ;
      SyncJobs(SyncJobs &&) = default ;
      SyncJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SyncJobs() = default ;
      SyncJobs& operator=(const SyncJobs &) = default ;
      SyncJobs& operator=(SyncJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->jobId_ == nullptr
        && this->regionId_ == nullptr && this->sourceDBClusterDescription_ == nullptr && this->sourceDBClusterId_ == nullptr && this->sourceDBType_ == nullptr && this->sourceStorageSize_ == nullptr
        && this->sourceTableNumber_ == nullptr && this->syncPlatform_ == nullptr; };
      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline SyncJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SyncJobs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // sourceDBClusterDescription Field Functions 
      bool hasSourceDBClusterDescription() const { return this->sourceDBClusterDescription_ != nullptr;};
      void deleteSourceDBClusterDescription() { this->sourceDBClusterDescription_ = nullptr;};
      inline string getSourceDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(sourceDBClusterDescription_, "") };
      inline SyncJobs& setSourceDBClusterDescription(string sourceDBClusterDescription) { DARABONBA_PTR_SET_VALUE(sourceDBClusterDescription_, sourceDBClusterDescription) };


      // sourceDBClusterId Field Functions 
      bool hasSourceDBClusterId() const { return this->sourceDBClusterId_ != nullptr;};
      void deleteSourceDBClusterId() { this->sourceDBClusterId_ = nullptr;};
      inline string getSourceDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceDBClusterId_, "") };
      inline SyncJobs& setSourceDBClusterId(string sourceDBClusterId) { DARABONBA_PTR_SET_VALUE(sourceDBClusterId_, sourceDBClusterId) };


      // sourceDBType Field Functions 
      bool hasSourceDBType() const { return this->sourceDBType_ != nullptr;};
      void deleteSourceDBType() { this->sourceDBType_ = nullptr;};
      inline string getSourceDBType() const { DARABONBA_PTR_GET_DEFAULT(sourceDBType_, "") };
      inline SyncJobs& setSourceDBType(string sourceDBType) { DARABONBA_PTR_SET_VALUE(sourceDBType_, sourceDBType) };


      // sourceStorageSize Field Functions 
      bool hasSourceStorageSize() const { return this->sourceStorageSize_ != nullptr;};
      void deleteSourceStorageSize() { this->sourceStorageSize_ = nullptr;};
      inline int32_t getSourceStorageSize() const { DARABONBA_PTR_GET_DEFAULT(sourceStorageSize_, 0) };
      inline SyncJobs& setSourceStorageSize(int32_t sourceStorageSize) { DARABONBA_PTR_SET_VALUE(sourceStorageSize_, sourceStorageSize) };


      // sourceTableNumber Field Functions 
      bool hasSourceTableNumber() const { return this->sourceTableNumber_ != nullptr;};
      void deleteSourceTableNumber() { this->sourceTableNumber_ = nullptr;};
      inline int32_t getSourceTableNumber() const { DARABONBA_PTR_GET_DEFAULT(sourceTableNumber_, 0) };
      inline SyncJobs& setSourceTableNumber(int32_t sourceTableNumber) { DARABONBA_PTR_SET_VALUE(sourceTableNumber_, sourceTableNumber) };


      // syncPlatform Field Functions 
      bool hasSyncPlatform() const { return this->syncPlatform_ != nullptr;};
      void deleteSyncPlatform() { this->syncPlatform_ = nullptr;};
      inline string getSyncPlatform() const { DARABONBA_PTR_GET_DEFAULT(syncPlatform_, "") };
      inline SyncJobs& setSyncPlatform(string syncPlatform) { DARABONBA_PTR_SET_VALUE(syncPlatform_, syncPlatform) };


    protected:
      // The ID of the Spark job.
      shared_ptr<string> jobId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The description of the source instance or cluster.
      shared_ptr<string> sourceDBClusterDescription_ {};
      // The ID of the source cluster. You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/170879.html) operation to query backup set IDs.
      // 
      // >  If you want to restore the data of an ApsaraDB for ClickHouse cluster, this parameter is required.
      shared_ptr<string> sourceDBClusterId_ {};
      // The database type of the source instance or cluster.
      shared_ptr<string> sourceDBType_ {};
      // The storage size of the source instance or cluster.
      shared_ptr<int32_t> sourceStorageSize_ {};
      // The number of tables in the source instance or cluster.
      shared_ptr<int32_t> sourceTableNumber_ {};
      // The synchronization platform.
      shared_ptr<string> syncPlatform_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->syncJobs_ == nullptr && this->totalCount_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline int32_t getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, 0) };
    inline DescribeSyncJobListResponseBody& setDBClusterId(int32_t DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSyncJobListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSyncJobListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSyncJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncJobs Field Functions 
    bool hasSyncJobs() const { return this->syncJobs_ != nullptr;};
    void deleteSyncJobs() { this->syncJobs_ = nullptr;};
    inline const vector<DescribeSyncJobListResponseBody::SyncJobs> & getSyncJobs() const { DARABONBA_PTR_GET_CONST(syncJobs_, vector<DescribeSyncJobListResponseBody::SyncJobs>) };
    inline vector<DescribeSyncJobListResponseBody::SyncJobs> getSyncJobs() { DARABONBA_PTR_GET(syncJobs_, vector<DescribeSyncJobListResponseBody::SyncJobs>) };
    inline DescribeSyncJobListResponseBody& setSyncJobs(const vector<DescribeSyncJobListResponseBody::SyncJobs> & syncJobs) { DARABONBA_PTR_SET_VALUE(syncJobs_, syncJobs) };
    inline DescribeSyncJobListResponseBody& setSyncJobs(vector<DescribeSyncJobListResponseBody::SyncJobs> && syncJobs) { DARABONBA_PTR_SET_RVALUE(syncJobs_, syncJobs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSyncJobListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cluster ID.
    shared_ptr<int32_t> DBClusterId_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried synchronization jobs.
    shared_ptr<vector<DescribeSyncJobListResponseBody::SyncJobs>> syncJobs_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
