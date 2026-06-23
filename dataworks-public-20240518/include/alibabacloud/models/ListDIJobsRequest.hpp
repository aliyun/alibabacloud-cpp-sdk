// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_TO_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceType, sourceDataSourceType_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationDataSourceType, destinationDataSourceType_);
      DARABONBA_PTR_FROM_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceType, sourceDataSourceType_);
      DARABONBA_PTR_FROM_JSON(SpecType, specType_);
    };
    ListDIJobsRequest() = default ;
    ListDIJobsRequest(const ListDIJobsRequest &) = default ;
    ListDIJobsRequest(ListDIJobsRequest &&) = default ;
    ListDIJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobsRequest() = default ;
    ListDIJobsRequest& operator=(const ListDIJobsRequest &) = default ;
    ListDIJobsRequest& operator=(ListDIJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationDataSourceType_ == nullptr
        && this->migrationType_ == nullptr && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr
        && this->sourceDataSourceType_ == nullptr && this->specType_ == nullptr; };
    // destinationDataSourceType Field Functions 
    bool hasDestinationDataSourceType() const { return this->destinationDataSourceType_ != nullptr;};
    void deleteDestinationDataSourceType() { this->destinationDataSourceType_ = nullptr;};
    inline string getDestinationDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(destinationDataSourceType_, "") };
    inline ListDIJobsRequest& setDestinationDataSourceType(string destinationDataSourceType) { DARABONBA_PTR_SET_VALUE(destinationDataSourceType_, destinationDataSourceType) };


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline string getMigrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
    inline ListDIJobsRequest& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDIJobsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListDIJobsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDIJobsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDIJobsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sourceDataSourceType Field Functions 
    bool hasSourceDataSourceType() const { return this->sourceDataSourceType_ != nullptr;};
    void deleteSourceDataSourceType() { this->sourceDataSourceType_ = nullptr;};
    inline string getSourceDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSourceType_, "") };
    inline ListDIJobsRequest& setSourceDataSourceType(string sourceDataSourceType) { DARABONBA_PTR_SET_VALUE(sourceDataSourceType_, sourceDataSourceType) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline ListDIJobsRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


  protected:
    // The type of the destination data source. If you do not specify this parameter, jobs are not filtered by this criterion. Valid values: `Hologres`, `OSS-HDFS`, `OSS`, `MaxCompute`, `LogHub`, `StarRocks`, `DataHub`, `AnalyticDB_For_MySQL`, `Kafka`, and `Hive`.
    shared_ptr<string> destinationDataSourceType_ {};
    // The synchronization type. Valid values:
    // 
    // - `FullAndRealtimeIncremental`: full and real-time incremental synchronization
    // 
    // - `RealtimeIncremental`: real-time incremental synchronization
    // 
    // - `Full`: full synchronization
    // 
    // - `OfflineIncremental`: offline incremental synchronization
    // 
    // - `FullAndOfflineIncremental`: full and offline incremental synchronization
    shared_ptr<string> migrationType_ {};
    // The name of the Data Integration job.
    // 
    // The name must be unique within the DataWorks workspace.
    shared_ptr<string> name_ {};
    // The page number. Pages are numbered starting from 1. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Default: 10. Maximum: 100.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the DataWorks workspace.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The type of the source data source. If you do not specify this parameter, jobs are not filtered by this criterion. Valid values: `PolarDB`, `MySQL`, `Kafka`, `LogHub`, `Hologres`, `Oracle`, `OceanBase`, `MongoDB`, `RedShift`, `Hive`, `SQLServer`, `Doris`, and `ClickHouse`.
    shared_ptr<string> sourceDataSourceType_ {};
    // The configuration type of the job. Valid values: `FILESPEC`, `CLASSIC`, and `ALL`. `FILESPEC` indicates a new job type configured based on a structured file specification. `CLASSIC` indicates a job configured in the traditional mode. If you set this parameter to `ALL`, jobs of both types are returned.
    shared_ptr<string> specType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
