// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DtsJobList, dtsJobList_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(EtlDemoList, etlDemoList_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsJobList, dtsJobList_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(EtlDemoList, etlDemoList_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeDtsJobsResponseBody() = default ;
    DescribeDtsJobsResponseBody(const DescribeDtsJobsResponseBody &) = default ;
    DescribeDtsJobsResponseBody(DescribeDtsJobsResponseBody &&) = default ;
    DescribeDtsJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsResponseBody() = default ;
    DescribeDtsJobsResponseBody& operator=(const DescribeDtsJobsResponseBody &) = default ;
    DescribeDtsJobsResponseBody& operator=(DescribeDtsJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EtlDemoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EtlDemoList& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(BeginTimestamp, beginTimestamp_);
        DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
        DARABONBA_PTR_TO_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
        DARABONBA_PTR_TO_JSON(ConsumptionClient, consumptionClient_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataEtlStatus, dataEtlStatus_);
        DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
        DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
        DARABONBA_PTR_TO_JSON(DbObject, dbObject_);
        DARABONBA_PTR_TO_JSON(Delay, delay_);
        DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
        DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
        DARABONBA_PTR_TO_JSON(DtsJobClass, dtsJobClass_);
        DARABONBA_PTR_TO_JSON(DtsJobDirection, dtsJobDirection_);
        DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
        DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
        DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
        DARABONBA_PTR_TO_JSON(OriginType, originType_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(Performance, performance_);
        DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
        DARABONBA_PTR_TO_JSON(Reserved, reserved_);
        DARABONBA_PTR_TO_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RetryState, retryState_);
        DARABONBA_PTR_TO_JSON(ReverseJob, reverseJob_);
        DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
        DARABONBA_PTR_TO_JSON(TagList, tagList_);
      };
      friend void from_json(const Darabonba::Json& j, EtlDemoList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(BeginTimestamp, beginTimestamp_);
        DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
        DARABONBA_PTR_FROM_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
        DARABONBA_PTR_FROM_JSON(ConsumptionClient, consumptionClient_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataEtlStatus, dataEtlStatus_);
        DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
        DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
        DARABONBA_PTR_FROM_JSON(DbObject, dbObject_);
        DARABONBA_PTR_FROM_JSON(Delay, delay_);
        DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
        DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
        DARABONBA_PTR_FROM_JSON(DtsJobClass, dtsJobClass_);
        DARABONBA_PTR_FROM_JSON(DtsJobDirection, dtsJobDirection_);
        DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
        DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
        DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
        DARABONBA_PTR_FROM_JSON(OriginType, originType_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(Performance, performance_);
        DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
        DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RetryState, retryState_);
        DARABONBA_PTR_FROM_JSON(ReverseJob, reverseJob_);
        DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
        DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      };
      EtlDemoList() = default ;
      EtlDemoList(const EtlDemoList &) = default ;
      EtlDemoList(EtlDemoList &&) = default ;
      EtlDemoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EtlDemoList() = default ;
      EtlDemoList& operator=(const EtlDemoList &) = default ;
      EtlDemoList& operator=(EtlDemoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagList& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, TagList& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        TagList() = default ;
        TagList(const TagList &) = default ;
        TagList(TagList &&) = default ;
        TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagList() = default ;
        TagList& operator=(const TagList &) = default ;
        TagList& operator=(TagList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline TagList& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline TagList& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      class StructureInitializationStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StructureInitializationStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, StructureInitializationStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        StructureInitializationStatus() = default ;
        StructureInitializationStatus(const StructureInitializationStatus &) = default ;
        StructureInitializationStatus(StructureInitializationStatus &&) = default ;
        StructureInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StructureInitializationStatus() = default ;
        StructureInitializationStatus& operator=(const StructureInitializationStatus &) = default ;
        StructureInitializationStatus& operator=(StructureInitializationStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline StructureInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline StructureInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline StructureInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline StructureInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if schema migration or initial schema synchronization failed.
        shared_ptr<string> errorMessage_ {};
        // The progress of schema migration or initial schema synchronization. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The number of tables that have been migrated or synchronized during schema migration or initial schema synchronization.
        shared_ptr<string> progress_ {};
        // The state of schema migration or initial schema synchronization. Valid values:
        // 
        // - **NotStarted**: The task is not started. 
        // - **Migrating**: The task is in progress. 
        // - **Failed**: The task failed. 
        // - **Finished**: The task is complete.
        shared_ptr<string> status_ {};
      };

      class SourceEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(EngineName, engineName_);
          DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
          DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        SourceEndpoint() = default ;
        SourceEndpoint(const SourceEndpoint &) = default ;
        SourceEndpoint(SourceEndpoint &&) = default ;
        SourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceEndpoint() = default ;
        SourceEndpoint& operator=(const SourceEndpoint &) = default ;
        SourceEndpoint& operator=(SourceEndpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr && this->oracleSID_ == nullptr
        && this->port_ == nullptr && this->region_ == nullptr && this->sslSolutionEnum_ == nullptr && this->userName_ == nullptr; };
        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline SourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // engineName Field Functions 
        bool hasEngineName() const { return this->engineName_ != nullptr;};
        void deleteEngineName() { this->engineName_ = nullptr;};
        inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
        inline SourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


        // instanceID Field Functions 
        bool hasInstanceID() const { return this->instanceID_ != nullptr;};
        void deleteInstanceID() { this->instanceID_ = nullptr;};
        inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
        inline SourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline SourceEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // oracleSID Field Functions 
        bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
        void deleteOracleSID() { this->oracleSID_ = nullptr;};
        inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
        inline SourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline SourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline SourceEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // sslSolutionEnum Field Functions 
        bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
        void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
        inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
        inline SourceEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline SourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The name of the database that contains the objects to be migrated from the source instance.
        shared_ptr<string> databaseName_ {};
        // The database engine of the source instance.
        shared_ptr<string> engineName_ {};
        // The ID of the source instance.
        shared_ptr<string> instanceID_ {};
        // The type of the source instance.
        shared_ptr<string> instanceType_ {};
        // The endpoint of the source instance.
        shared_ptr<string> ip_ {};
        // The SID of the Oracle database. 
        // 
        // > This parameter is returned only if the returned value of **EngineName** of the source instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
        shared_ptr<string> oracleSID_ {};
        // The port number of the source instance.
        shared_ptr<string> port_ {};
        // The ID of the region in which the source instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
        shared_ptr<string> region_ {};
        // Indicates whether SSL encryption is enabled. Valid values:
        // 
        // - **DISABLE**: SSL encryption is disabled. 
        // - **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded. 
        // - **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection with an AWS MongoDB Altas database. 
        // - **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection with a Kafka cluster.
        shared_ptr<string> sslSolutionEnum_ {};
        // The database account of the source instance.
        shared_ptr<string> userName_ {};
      };

      class ReverseJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReverseJob& obj) { 
          DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
          DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
          DARABONBA_PTR_TO_JSON(DbObject, dbObject_);
          DARABONBA_PTR_TO_JSON(Delay, delay_);
          DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
          DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
          DARABONBA_PTR_TO_JSON(DtsJobClass, dtsJobClass_);
          DARABONBA_PTR_TO_JSON(DtsJobDirection, dtsJobDirection_);
          DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
          DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(Performance, performance_);
          DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
        };
        friend void from_json(const Darabonba::Json& j, ReverseJob& obj) { 
          DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
          DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
          DARABONBA_PTR_FROM_JSON(DbObject, dbObject_);
          DARABONBA_PTR_FROM_JSON(Delay, delay_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
          DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
          DARABONBA_PTR_FROM_JSON(DtsJobClass, dtsJobClass_);
          DARABONBA_PTR_FROM_JSON(DtsJobDirection, dtsJobDirection_);
          DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
          DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(Performance, performance_);
          DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
        };
        ReverseJob() = default ;
        ReverseJob(const ReverseJob &) = default ;
        ReverseJob(ReverseJob &&) = default ;
        ReverseJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReverseJob() = default ;
        ReverseJob& operator=(const ReverseJob &) = default ;
        ReverseJob& operator=(ReverseJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StructureInitializationStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StructureInitializationStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, StructureInitializationStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          StructureInitializationStatus() = default ;
          StructureInitializationStatus(const StructureInitializationStatus &) = default ;
          StructureInitializationStatus(StructureInitializationStatus &&) = default ;
          StructureInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StructureInitializationStatus() = default ;
          StructureInitializationStatus& operator=(const StructureInitializationStatus &) = default ;
          StructureInitializationStatus& operator=(StructureInitializationStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline StructureInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline StructureInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline StructureInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline StructureInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if initial schema synchronization failed.
          shared_ptr<string> errorMessage_ {};
          // The progress of initial schema synchronization. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The number of tables that have been synchronized during initial schema synchronization.
          shared_ptr<string> progress_ {};
          // The state of initial schema synchronization. Valid values:
          // 
          // - **NotStarted**: The task is not started. 
          // - **Migrating**: The task is in progress. 
          // - **Failed**: The task failed. 
          // - **Finished**: The task is complete.
          shared_ptr<string> status_ {};
        };

        class SourceEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_TO_JSON(EngineName, engineName_);
            DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(Ip, ip_);
            DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
            DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(Ip, ip_);
            DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_FROM_JSON(UserName, userName_);
          };
          SourceEndpoint() = default ;
          SourceEndpoint(const SourceEndpoint &) = default ;
          SourceEndpoint(SourceEndpoint &&) = default ;
          SourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceEndpoint() = default ;
          SourceEndpoint& operator=(const SourceEndpoint &) = default ;
          SourceEndpoint& operator=(SourceEndpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr && this->oracleSID_ == nullptr
        && this->port_ == nullptr && this->region_ == nullptr && this->sslSolutionEnum_ == nullptr && this->userName_ == nullptr; };
          // databaseName Field Functions 
          bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
          void deleteDatabaseName() { this->databaseName_ = nullptr;};
          inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
          inline SourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


          // engineName Field Functions 
          bool hasEngineName() const { return this->engineName_ != nullptr;};
          void deleteEngineName() { this->engineName_ = nullptr;};
          inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
          inline SourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


          // instanceID Field Functions 
          bool hasInstanceID() const { return this->instanceID_ != nullptr;};
          void deleteInstanceID() { this->instanceID_ = nullptr;};
          inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
          inline SourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
          inline SourceEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


          // oracleSID Field Functions 
          bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
          void deleteOracleSID() { this->oracleSID_ = nullptr;};
          inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
          inline SourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
          inline SourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline SourceEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // sslSolutionEnum Field Functions 
          bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
          void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
          inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
          inline SourceEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline SourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // The name of the database that contains the objects to be migrated from the source instance.
          shared_ptr<string> databaseName_ {};
          // The database engine of the source instance.
          shared_ptr<string> engineName_ {};
          // The ID of the source instance.
          shared_ptr<string> instanceID_ {};
          // The type of the source instance.
          shared_ptr<string> instanceType_ {};
          // The endpoint of the source instance.
          shared_ptr<string> ip_ {};
          // The SID of the Oracle database. 
          // 
          // > This parameter is returned only if the returned value of **EngineName** of the source instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
          shared_ptr<string> oracleSID_ {};
          // The port number of the source instance.
          shared_ptr<string> port_ {};
          // The ID of the region in which the source instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
          shared_ptr<string> region_ {};
          // Indicates whether SSL encryption is enabled. Valid values:
          // 
          // - **DISABLE**: SSL encryption is disabled. 
          // - **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded. 
          // - **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection with an AWS MongoDB Altas database. 
          // - **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection with a Kafka cluster.
          shared_ptr<string> sslSolutionEnum_ {};
          // The database account of the source instance.
          shared_ptr<string> userName_ {};
        };

        class PrecheckStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrecheckStatus& obj) { 
            DARABONBA_PTR_TO_JSON(Detail, detail_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, PrecheckStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(Detail, detail_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          PrecheckStatus() = default ;
          PrecheckStatus(const PrecheckStatus &) = default ;
          PrecheckStatus(PrecheckStatus &&) = default ;
          PrecheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrecheckStatus() = default ;
          PrecheckStatus& operator=(const PrecheckStatus &) = default ;
          PrecheckStatus& operator=(PrecheckStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Detail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Detail& obj) { 
              DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
              DARABONBA_PTR_TO_JSON(CheckItemDescription, checkItemDescription_);
              DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
              DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
              DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
            };
            friend void from_json(const Darabonba::Json& j, Detail& obj) { 
              DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
              DARABONBA_PTR_FROM_JSON(CheckItemDescription, checkItemDescription_);
              DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
              DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
              DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
            };
            Detail() = default ;
            Detail(const Detail &) = default ;
            Detail(Detail &&) = default ;
            Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Detail() = default ;
            Detail& operator=(const Detail &) = default ;
            Detail& operator=(Detail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->checkItem_ == nullptr
        && this->checkItemDescription_ == nullptr && this->checkResult_ == nullptr && this->failedReason_ == nullptr && this->repairMethod_ == nullptr; };
            // checkItem Field Functions 
            bool hasCheckItem() const { return this->checkItem_ != nullptr;};
            void deleteCheckItem() { this->checkItem_ = nullptr;};
            inline string getCheckItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
            inline Detail& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


            // checkItemDescription Field Functions 
            bool hasCheckItemDescription() const { return this->checkItemDescription_ != nullptr;};
            void deleteCheckItemDescription() { this->checkItemDescription_ = nullptr;};
            inline string getCheckItemDescription() const { DARABONBA_PTR_GET_DEFAULT(checkItemDescription_, "") };
            inline Detail& setCheckItemDescription(string checkItemDescription) { DARABONBA_PTR_SET_VALUE(checkItemDescription_, checkItemDescription) };


            // checkResult Field Functions 
            bool hasCheckResult() const { return this->checkResult_ != nullptr;};
            void deleteCheckResult() { this->checkResult_ = nullptr;};
            inline string getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
            inline Detail& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


            // failedReason Field Functions 
            bool hasFailedReason() const { return this->failedReason_ != nullptr;};
            void deleteFailedReason() { this->failedReason_ = nullptr;};
            inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
            inline Detail& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


            // repairMethod Field Functions 
            bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
            void deleteRepairMethod() { this->repairMethod_ = nullptr;};
            inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
            inline Detail& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


          protected:
            // The name of the precheck item.
            shared_ptr<string> checkItem_ {};
            // The description of the precheck item.
            shared_ptr<string> checkItemDescription_ {};
            // The precheck result. Valid values:
            // 
            // - **Success**
            // - **Failed**
            shared_ptr<string> checkResult_ {};
            // The error message returned if the task failed to pass the precheck. 
            // 
            // > This parameter is returned only if the returned value of **CheckResult** is **Failed**.
            shared_ptr<string> failedReason_ {};
            // The method to fix a precheck failure. 
            // 
            // > This parameter is returned only if the returned value of **CheckResult** is **Failed**.
            shared_ptr<string> repairMethod_ {};
          };

          virtual bool empty() const override { return this->detail_ == nullptr
        && this->errorMessage_ == nullptr && this->percent_ == nullptr && this->status_ == nullptr; };
          // detail Field Functions 
          bool hasDetail() const { return this->detail_ != nullptr;};
          void deleteDetail() { this->detail_ = nullptr;};
          inline const vector<PrecheckStatus::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<PrecheckStatus::Detail>) };
          inline vector<PrecheckStatus::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<PrecheckStatus::Detail>) };
          inline PrecheckStatus& setDetail(const vector<PrecheckStatus::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
          inline PrecheckStatus& setDetail(vector<PrecheckStatus::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline PrecheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline PrecheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline PrecheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The result of each precheck item.
          shared_ptr<vector<PrecheckStatus::Detail>> detail_ {};
          // The error message returned if the precheck failed.
          shared_ptr<string> errorMessage_ {};
          // The precheck progress. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The precheck state. Valid values:
          // 
          // - **NotStarted**: The precheck is not started. 
          // - **Suspending**: The precheck is paused. 
          // - **Checking**: The precheck is in progress. 
          // - **Failed**: The precheck failed. 
          // - **Finished**: The precheck is complete.
          shared_ptr<string> status_ {};
        };

        class Performance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Performance& obj) { 
            DARABONBA_PTR_TO_JSON(Flow, flow_);
            DARABONBA_PTR_TO_JSON(Rps, rps_);
          };
          friend void from_json(const Darabonba::Json& j, Performance& obj) { 
            DARABONBA_PTR_FROM_JSON(Flow, flow_);
            DARABONBA_PTR_FROM_JSON(Rps, rps_);
          };
          Performance() = default ;
          Performance(const Performance &) = default ;
          Performance(Performance &&) = default ;
          Performance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Performance() = default ;
          Performance& operator=(const Performance &) = default ;
          Performance& operator=(Performance &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->flow_ == nullptr
        && this->rps_ == nullptr; };
          // flow Field Functions 
          bool hasFlow() const { return this->flow_ != nullptr;};
          void deleteFlow() { this->flow_ = nullptr;};
          inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
          inline Performance& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


          // rps Field Functions 
          bool hasRps() const { return this->rps_ != nullptr;};
          void deleteRps() { this->rps_ = nullptr;};
          inline string getRps() const { DARABONBA_PTR_GET_DEFAULT(rps_, "") };
          inline Performance& setRps(string rps) { DARABONBA_PTR_SET_VALUE(rps_, rps) };


        protected:
          // The size of data that is migrated or synchronized per second. Unit: MB/s.
          shared_ptr<string> flow_ {};
          // The number of times that SQL statements are migrated or synchronized per second, including BEGIN, COMMIT, DML, and DDL statements. DML statements include INSERT, DELETE, and UPDATE.
          shared_ptr<string> rps_ {};
        };

        class MigrationMode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MigrationMode& obj) { 
            DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
            DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
            DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
          };
          friend void from_json(const Darabonba::Json& j, MigrationMode& obj) { 
            DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
            DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
            DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
          };
          MigrationMode() = default ;
          MigrationMode(const MigrationMode &) = default ;
          MigrationMode(MigrationMode &&) = default ;
          MigrationMode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MigrationMode() = default ;
          MigrationMode& operator=(const MigrationMode &) = default ;
          MigrationMode& operator=(MigrationMode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dataInitialization_ == nullptr
        && this->dataSynchronization_ == nullptr && this->structureInitialization_ == nullptr; };
          // dataInitialization Field Functions 
          bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
          void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
          inline bool getDataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
          inline MigrationMode& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


          // dataSynchronization Field Functions 
          bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
          void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
          inline bool getDataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
          inline MigrationMode& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


          // structureInitialization Field Functions 
          bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
          void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
          inline bool getStructureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
          inline MigrationMode& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


        protected:
          // Indicates whether full data migration or initial full data synchronization is performed. Valid values:
          // 
          // - **true**
          // - **false**
          shared_ptr<bool> dataInitialization_ {};
          // Indicates whether incremental data migration or synchronization is performed. Valid values:
          // 
          // - **true**
          // - **false**
          shared_ptr<bool> dataSynchronization_ {};
          // Indicates whether schema migration or initial schema synchronization is performed. Valid values:
          // 
          // - **true**
          // - **false**
          shared_ptr<bool> structureInitialization_ {};
        };

        class DestinationEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DestinationEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_TO_JSON(EngineName, engineName_);
            DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(Ip, ip_);
            DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
            DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(Ip, ip_);
            DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_FROM_JSON(UserName, userName_);
          };
          DestinationEndpoint() = default ;
          DestinationEndpoint(const DestinationEndpoint &) = default ;
          DestinationEndpoint(DestinationEndpoint &&) = default ;
          DestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DestinationEndpoint() = default ;
          DestinationEndpoint& operator=(const DestinationEndpoint &) = default ;
          DestinationEndpoint& operator=(DestinationEndpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr && this->oracleSID_ == nullptr
        && this->port_ == nullptr && this->region_ == nullptr && this->sslSolutionEnum_ == nullptr && this->userName_ == nullptr; };
          // databaseName Field Functions 
          bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
          void deleteDatabaseName() { this->databaseName_ = nullptr;};
          inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
          inline DestinationEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


          // engineName Field Functions 
          bool hasEngineName() const { return this->engineName_ != nullptr;};
          void deleteEngineName() { this->engineName_ = nullptr;};
          inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
          inline DestinationEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


          // instanceID Field Functions 
          bool hasInstanceID() const { return this->instanceID_ != nullptr;};
          void deleteInstanceID() { this->instanceID_ = nullptr;};
          inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
          inline DestinationEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline DestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
          inline DestinationEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


          // oracleSID Field Functions 
          bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
          void deleteOracleSID() { this->oracleSID_ = nullptr;};
          inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
          inline DestinationEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
          inline DestinationEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline DestinationEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // sslSolutionEnum Field Functions 
          bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
          void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
          inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
          inline DestinationEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline DestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // The name of the database that contains the synchronized objects in the destination instance.
          shared_ptr<string> databaseName_ {};
          // The database engine of the destination instance.
          shared_ptr<string> engineName_ {};
          // The ID of the destination instance.
          shared_ptr<string> instanceID_ {};
          // The type of the destination instance.
          shared_ptr<string> instanceType_ {};
          // The endpoint of the destination instance.
          shared_ptr<string> ip_ {};
          // The SID of the Oracle database. 
          // 
          // > This parameter is returned only if the returned value of **EngineName** of the destination instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
          shared_ptr<string> oracleSID_ {};
          // The port number of the destination instance.
          shared_ptr<string> port_ {};
          // The ID of the region in which the destination instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
          shared_ptr<string> region_ {};
          // Indicates whether SSL encryption is enabled. Valid values:
          // 
          // - **DISABLE**: SSL encryption is disabled. 
          // - **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded. 
          // - **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection with an AWS MongoDB Altas database. 
          // - **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection with a Kafka cluster.
          shared_ptr<string> sslSolutionEnum_ {};
          // The database account of the destination instance.
          shared_ptr<string> userName_ {};
        };

        class DataSynchronizationStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSynchronizationStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, DataSynchronizationStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          DataSynchronizationStatus() = default ;
          DataSynchronizationStatus(const DataSynchronizationStatus &) = default ;
          DataSynchronizationStatus(DataSynchronizationStatus &&) = default ;
          DataSynchronizationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataSynchronizationStatus() = default ;
          DataSynchronizationStatus& operator=(const DataSynchronizationStatus &) = default ;
          DataSynchronizationStatus& operator=(DataSynchronizationStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline DataSynchronizationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // needUpgrade Field Functions 
          bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
          void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
          inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
          inline DataSynchronizationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline DataSynchronizationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline DataSynchronizationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DataSynchronizationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if incremental data synchronization failed.
          shared_ptr<string> errorMessage_ {};
          // Indicates whether the instance needs to be upgraded. Valid values:
          // 
          // - **true**
          // - **false**
          // 
          // > To upgrade a DTS instance, call the [TransferInstanceClass](https://help.aliyun.com/document_detail/281093.html) operation.
          shared_ptr<bool> needUpgrade_ {};
          // The progress of incremental data synchronization. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The number of entries that have been migrated or synchronized during incremental data migration or synchronization.
          shared_ptr<string> progress_ {};
          // The state of incremental data synchronization.
          shared_ptr<string> status_ {};
        };

        class DataInitializationStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataInitializationStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, DataInitializationStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          DataInitializationStatus() = default ;
          DataInitializationStatus(const DataInitializationStatus &) = default ;
          DataInitializationStatus(DataInitializationStatus &&) = default ;
          DataInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataInitializationStatus() = default ;
          DataInitializationStatus& operator=(const DataInitializationStatus &) = default ;
          DataInitializationStatus& operator=(DataInitializationStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline DataInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline DataInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline DataInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DataInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if initial full data synchronization failed.
          shared_ptr<string> errorMessage_ {};
          // The progress of initial full data synchronization. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The number of entries that have been synchronized during initial full data synchronization.
          shared_ptr<string> progress_ {};
          // The state of initial full data synchronization. Valid values:
          // 
          // - **NotStarted**: The task is not started. 
          // - **Migrating**: The task is in progress. 
          // - **Failed**: The task failed. 
          // - **Finished**: The task is complete.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->checkpoint_ == nullptr
        && this->createTime_ == nullptr && this->dataInitializationStatus_ == nullptr && this->dataSynchronizationStatus_ == nullptr && this->dbObject_ == nullptr && this->delay_ == nullptr
        && this->destinationEndpoint_ == nullptr && this->dtsInstanceID_ == nullptr && this->dtsJobClass_ == nullptr && this->dtsJobDirection_ == nullptr && this->dtsJobId_ == nullptr
        && this->dtsJobName_ == nullptr && this->errorMessage_ == nullptr && this->etlSafeCheckpoint_ == nullptr && this->expireTime_ == nullptr && this->migrationMode_ == nullptr
        && this->payType_ == nullptr && this->performance_ == nullptr && this->precheckStatus_ == nullptr && this->reserved_ == nullptr && this->sourceEndpoint_ == nullptr
        && this->status_ == nullptr && this->structureInitializationStatus_ == nullptr; };
        // checkpoint Field Functions 
        bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
        void deleteCheckpoint() { this->checkpoint_ = nullptr;};
        inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
        inline ReverseJob& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ReverseJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataInitializationStatus Field Functions 
        bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
        void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
        inline const ReverseJob::DataInitializationStatus & getDataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, ReverseJob::DataInitializationStatus) };
        inline ReverseJob::DataInitializationStatus getDataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, ReverseJob::DataInitializationStatus) };
        inline ReverseJob& setDataInitializationStatus(const ReverseJob::DataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
        inline ReverseJob& setDataInitializationStatus(ReverseJob::DataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


        // dataSynchronizationStatus Field Functions 
        bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
        void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
        inline const ReverseJob::DataSynchronizationStatus & getDataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, ReverseJob::DataSynchronizationStatus) };
        inline ReverseJob::DataSynchronizationStatus getDataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, ReverseJob::DataSynchronizationStatus) };
        inline ReverseJob& setDataSynchronizationStatus(const ReverseJob::DataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
        inline ReverseJob& setDataSynchronizationStatus(ReverseJob::DataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


        // dbObject Field Functions 
        bool hasDbObject() const { return this->dbObject_ != nullptr;};
        void deleteDbObject() { this->dbObject_ = nullptr;};
        inline string getDbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
        inline ReverseJob& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


        // delay Field Functions 
        bool hasDelay() const { return this->delay_ != nullptr;};
        void deleteDelay() { this->delay_ = nullptr;};
        inline int64_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
        inline ReverseJob& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


        // destinationEndpoint Field Functions 
        bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
        void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
        inline const ReverseJob::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, ReverseJob::DestinationEndpoint) };
        inline ReverseJob::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, ReverseJob::DestinationEndpoint) };
        inline ReverseJob& setDestinationEndpoint(const ReverseJob::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
        inline ReverseJob& setDestinationEndpoint(ReverseJob::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


        // dtsInstanceID Field Functions 
        bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
        void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
        inline string getDtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
        inline ReverseJob& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


        // dtsJobClass Field Functions 
        bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
        void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
        inline string getDtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
        inline ReverseJob& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


        // dtsJobDirection Field Functions 
        bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
        void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
        inline string getDtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
        inline ReverseJob& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


        // dtsJobId Field Functions 
        bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
        void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
        inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
        inline ReverseJob& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


        // dtsJobName Field Functions 
        bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
        void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
        inline string getDtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
        inline ReverseJob& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline ReverseJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // etlSafeCheckpoint Field Functions 
        bool hasEtlSafeCheckpoint() const { return this->etlSafeCheckpoint_ != nullptr;};
        void deleteEtlSafeCheckpoint() { this->etlSafeCheckpoint_ = nullptr;};
        inline string getEtlSafeCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(etlSafeCheckpoint_, "") };
        inline ReverseJob& setEtlSafeCheckpoint(string etlSafeCheckpoint) { DARABONBA_PTR_SET_VALUE(etlSafeCheckpoint_, etlSafeCheckpoint) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline ReverseJob& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // migrationMode Field Functions 
        bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
        void deleteMigrationMode() { this->migrationMode_ = nullptr;};
        inline const ReverseJob::MigrationMode & getMigrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, ReverseJob::MigrationMode) };
        inline ReverseJob::MigrationMode getMigrationMode() { DARABONBA_PTR_GET(migrationMode_, ReverseJob::MigrationMode) };
        inline ReverseJob& setMigrationMode(const ReverseJob::MigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
        inline ReverseJob& setMigrationMode(ReverseJob::MigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline ReverseJob& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // performance Field Functions 
        bool hasPerformance() const { return this->performance_ != nullptr;};
        void deletePerformance() { this->performance_ = nullptr;};
        inline const ReverseJob::Performance & getPerformance() const { DARABONBA_PTR_GET_CONST(performance_, ReverseJob::Performance) };
        inline ReverseJob::Performance getPerformance() { DARABONBA_PTR_GET(performance_, ReverseJob::Performance) };
        inline ReverseJob& setPerformance(const ReverseJob::Performance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
        inline ReverseJob& setPerformance(ReverseJob::Performance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


        // precheckStatus Field Functions 
        bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
        void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
        inline const ReverseJob::PrecheckStatus & getPrecheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, ReverseJob::PrecheckStatus) };
        inline ReverseJob::PrecheckStatus getPrecheckStatus() { DARABONBA_PTR_GET(precheckStatus_, ReverseJob::PrecheckStatus) };
        inline ReverseJob& setPrecheckStatus(const ReverseJob::PrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
        inline ReverseJob& setPrecheckStatus(ReverseJob::PrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline string getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
        inline ReverseJob& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // sourceEndpoint Field Functions 
        bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
        void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
        inline const ReverseJob::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, ReverseJob::SourceEndpoint) };
        inline ReverseJob::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, ReverseJob::SourceEndpoint) };
        inline ReverseJob& setSourceEndpoint(const ReverseJob::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
        inline ReverseJob& setSourceEndpoint(ReverseJob::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ReverseJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // structureInitializationStatus Field Functions 
        bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
        void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
        inline const ReverseJob::StructureInitializationStatus & getStructureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, ReverseJob::StructureInitializationStatus) };
        inline ReverseJob::StructureInitializationStatus getStructureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, ReverseJob::StructureInitializationStatus) };
        inline ReverseJob& setStructureInitializationStatus(const ReverseJob::StructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
        inline ReverseJob& setStructureInitializationStatus(ReverseJob::StructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


      protected:
        // The start offset of incremental data synchronization. This value is a UNIX timestamp representing the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<string> checkpoint_ {};
        // The time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The state of initial full data synchronization.
        shared_ptr<ReverseJob::DataInitializationStatus> dataInitializationStatus_ {};
        // The state of incremental data synchronization.
        shared_ptr<ReverseJob::DataSynchronizationStatus> dataSynchronizationStatus_ {};
        // The schema of the objects that you want to synchronize. The value is a JSON string and can contain regular expressions. For more information, see Objects of DTS tasks.
        shared_ptr<string> dbObject_ {};
        // The latency of incremental data synchronization. Unit: seconds.
        shared_ptr<int64_t> delay_ {};
        // The connection settings of the destination instance.
        shared_ptr<ReverseJob::DestinationEndpoint> destinationEndpoint_ {};
        // The ID of the data synchronization instance.
        shared_ptr<string> dtsInstanceID_ {};
        // The instance class. 
        // 
        // > For more information about the test performance of each instance class, see [Specifications of data synchronization instances](https://help.aliyun.com/document_detail/26605.html).
        shared_ptr<string> dtsJobClass_ {};
        // The synchronization direction. **Reverse** is returned.
        shared_ptr<string> dtsJobDirection_ {};
        // The ID of the synchronization task.
        shared_ptr<string> dtsJobId_ {};
        // The name of the data synchronization task.
        shared_ptr<string> dtsJobName_ {};
        // The error message returned if the task failed.
        shared_ptr<string> errorMessage_ {};
        // The checkpoint of the ETL task.
        shared_ptr<string> etlSafeCheckpoint_ {};
        // The time when the instance expires. The time follows the ISO 8601 standard in the* yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC. 
        // 
        // > This parameter is returned only if the returned value of **PayType** is **PrePaid**.
        shared_ptr<string> expireTime_ {};
        // The migration types or initial synchronization types.
        shared_ptr<ReverseJob::MigrationMode> migrationMode_ {};
        // The billing method of the DTS instance. Valid values:
        // 
        // - **PrePaid**: subscription
        // - **PostPaid**: pay-as-you-go
        shared_ptr<string> payType_ {};
        // The performance of the data migration or synchronization instance.
        shared_ptr<ReverseJob::Performance> performance_ {};
        // The precheck state.
        shared_ptr<ReverseJob::PrecheckStatus> precheckStatus_ {};
        // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, for example, whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
        shared_ptr<string> reserved_ {};
        // The connection settings of the source instance.
        shared_ptr<ReverseJob::SourceEndpoint> sourceEndpoint_ {};
        // The state of the DTS instance. For more information about the valid values, see the description of the request parameter **Status**.
        shared_ptr<string> status_ {};
        // The state of initial schema synchronization.
        shared_ptr<ReverseJob::StructureInitializationStatus> structureInitializationStatus_ {};
      };

      class RetryState : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RetryState& obj) { 
          DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(MaxRetryTime, maxRetryTime_);
          DARABONBA_PTR_TO_JSON(Module, module_);
          DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
          DARABONBA_PTR_TO_JSON(RetryTarget, retryTarget_);
          DARABONBA_PTR_TO_JSON(RetryTime, retryTime_);
          DARABONBA_PTR_TO_JSON(Retrying, retrying_);
        };
        friend void from_json(const Darabonba::Json& j, RetryState& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(MaxRetryTime, maxRetryTime_);
          DARABONBA_PTR_FROM_JSON(Module, module_);
          DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
          DARABONBA_PTR_FROM_JSON(RetryTarget, retryTarget_);
          DARABONBA_PTR_FROM_JSON(RetryTime, retryTime_);
          DARABONBA_PTR_FROM_JSON(Retrying, retrying_);
        };
        RetryState() = default ;
        RetryState(const RetryState &) = default ;
        RetryState(RetryState &&) = default ;
        RetryState(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RetryState() = default ;
        RetryState& operator=(const RetryState &) = default ;
        RetryState& operator=(RetryState &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errMessage_ == nullptr
        && this->jobId_ == nullptr && this->maxRetryTime_ == nullptr && this->module_ == nullptr && this->retryCount_ == nullptr && this->retryTarget_ == nullptr
        && this->retryTime_ == nullptr && this->retrying_ == nullptr; };
        // errMessage Field Functions 
        bool hasErrMessage() const { return this->errMessage_ != nullptr;};
        void deleteErrMessage() { this->errMessage_ = nullptr;};
        inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
        inline RetryState& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline RetryState& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // maxRetryTime Field Functions 
        bool hasMaxRetryTime() const { return this->maxRetryTime_ != nullptr;};
        void deleteMaxRetryTime() { this->maxRetryTime_ = nullptr;};
        inline int32_t getMaxRetryTime() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTime_, 0) };
        inline RetryState& setMaxRetryTime(int32_t maxRetryTime) { DARABONBA_PTR_SET_VALUE(maxRetryTime_, maxRetryTime) };


        // module Field Functions 
        bool hasModule() const { return this->module_ != nullptr;};
        void deleteModule() { this->module_ = nullptr;};
        inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
        inline RetryState& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


        // retryCount Field Functions 
        bool hasRetryCount() const { return this->retryCount_ != nullptr;};
        void deleteRetryCount() { this->retryCount_ = nullptr;};
        inline int32_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
        inline RetryState& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


        // retryTarget Field Functions 
        bool hasRetryTarget() const { return this->retryTarget_ != nullptr;};
        void deleteRetryTarget() { this->retryTarget_ = nullptr;};
        inline string getRetryTarget() const { DARABONBA_PTR_GET_DEFAULT(retryTarget_, "") };
        inline RetryState& setRetryTarget(string retryTarget) { DARABONBA_PTR_SET_VALUE(retryTarget_, retryTarget) };


        // retryTime Field Functions 
        bool hasRetryTime() const { return this->retryTime_ != nullptr;};
        void deleteRetryTime() { this->retryTime_ = nullptr;};
        inline int32_t getRetryTime() const { DARABONBA_PTR_GET_DEFAULT(retryTime_, 0) };
        inline RetryState& setRetryTime(int32_t retryTime) { DARABONBA_PTR_SET_VALUE(retryTime_, retryTime) };


        // retrying Field Functions 
        bool hasRetrying() const { return this->retrying_ != nullptr;};
        void deleteRetrying() { this->retrying_ = nullptr;};
        inline bool getRetrying() const { DARABONBA_PTR_GET_DEFAULT(retrying_, false) };
        inline RetryState& setRetrying(bool retrying) { DARABONBA_PTR_SET_VALUE(retrying_, retrying) };


      protected:
        // The error message returned if these retries failed.
        shared_ptr<string> errMessage_ {};
        // The task ID.
        shared_ptr<string> jobId_ {};
        // The maximum duration of a retry. Unit: seconds.
        shared_ptr<int32_t> maxRetryTime_ {};
        // The progress of the instance when DTS retries.
        shared_ptr<string> module_ {};
        // The number of retries that have been performed.
        shared_ptr<int32_t> retryCount_ {};
        // The object on which these retries are performed. Valid values:
        // 
        // - **srcDB**: the source database 
        // - **destDB**: the destination database 
        // - **inner_module**: an internal module of DTS
        shared_ptr<string> retryTarget_ {};
        // The time that has elapsed from the time when the first retry starts. Unit: seconds.
        shared_ptr<int32_t> retryTime_ {};
        // Indicates whether the task is being retried. Valid values:
        // 
        // - **true**
        // - **false**
        shared_ptr<bool> retrying_ {};
      };

      class PrecheckStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrecheckStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PrecheckStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PrecheckStatus() = default ;
        PrecheckStatus(const PrecheckStatus &) = default ;
        PrecheckStatus(PrecheckStatus &&) = default ;
        PrecheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrecheckStatus() = default ;
        PrecheckStatus& operator=(const PrecheckStatus &) = default ;
        PrecheckStatus& operator=(PrecheckStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Detail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Detail& obj) { 
            DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
            DARABONBA_PTR_TO_JSON(CheckItemDescription, checkItemDescription_);
            DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
            DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
            DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
          };
          friend void from_json(const Darabonba::Json& j, Detail& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
            DARABONBA_PTR_FROM_JSON(CheckItemDescription, checkItemDescription_);
            DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
            DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
            DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
          };
          Detail() = default ;
          Detail(const Detail &) = default ;
          Detail(Detail &&) = default ;
          Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Detail() = default ;
          Detail& operator=(const Detail &) = default ;
          Detail& operator=(Detail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checkItem_ == nullptr
        && this->checkItemDescription_ == nullptr && this->checkResult_ == nullptr && this->failedReason_ == nullptr && this->repairMethod_ == nullptr; };
          // checkItem Field Functions 
          bool hasCheckItem() const { return this->checkItem_ != nullptr;};
          void deleteCheckItem() { this->checkItem_ = nullptr;};
          inline string getCheckItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
          inline Detail& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


          // checkItemDescription Field Functions 
          bool hasCheckItemDescription() const { return this->checkItemDescription_ != nullptr;};
          void deleteCheckItemDescription() { this->checkItemDescription_ = nullptr;};
          inline string getCheckItemDescription() const { DARABONBA_PTR_GET_DEFAULT(checkItemDescription_, "") };
          inline Detail& setCheckItemDescription(string checkItemDescription) { DARABONBA_PTR_SET_VALUE(checkItemDescription_, checkItemDescription) };


          // checkResult Field Functions 
          bool hasCheckResult() const { return this->checkResult_ != nullptr;};
          void deleteCheckResult() { this->checkResult_ = nullptr;};
          inline string getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
          inline Detail& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


          // failedReason Field Functions 
          bool hasFailedReason() const { return this->failedReason_ != nullptr;};
          void deleteFailedReason() { this->failedReason_ = nullptr;};
          inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
          inline Detail& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


          // repairMethod Field Functions 
          bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
          void deleteRepairMethod() { this->repairMethod_ = nullptr;};
          inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
          inline Detail& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


        protected:
          // The name of the precheck item.
          shared_ptr<string> checkItem_ {};
          // The description of the precheck item.
          shared_ptr<string> checkItemDescription_ {};
          // The precheck result. Valid values:
          // 
          // - **Success**
          // - **Failed**
          shared_ptr<string> checkResult_ {};
          // The error message returned if the task failed to pass the precheck. 
          // 
          // > This parameter is returned only if the returned value of **CheckResult** is **Failed**.
          shared_ptr<string> failedReason_ {};
          // The method to fix a precheck failure. 
          // 
          // > This parameter is returned only if the returned value of **CheckResult** is **Failed**.
          shared_ptr<string> repairMethod_ {};
        };

        virtual bool empty() const override { return this->detail_ == nullptr
        && this->errorMessage_ == nullptr && this->percent_ == nullptr && this->status_ == nullptr; };
        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline const vector<PrecheckStatus::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<PrecheckStatus::Detail>) };
        inline vector<PrecheckStatus::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<PrecheckStatus::Detail>) };
        inline PrecheckStatus& setDetail(const vector<PrecheckStatus::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
        inline PrecheckStatus& setDetail(vector<PrecheckStatus::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline PrecheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline PrecheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PrecheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The result of each precheck item.
        shared_ptr<vector<PrecheckStatus::Detail>> detail_ {};
        // The error message returned if the precheck failed.
        shared_ptr<string> errorMessage_ {};
        // The precheck progress. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The precheck state. Valid values:
        // 
        // - **NotStarted**: The precheck is not started. 
        // - **Suspending**: The precheck is paused. 
        // - **Checking**: The precheck is in progress. 
        // - **Failed**: The precheck failed. 
        // - **Finished**: The precheck is complete.
        shared_ptr<string> status_ {};
      };

      class Performance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Performance& obj) { 
          DARABONBA_PTR_TO_JSON(Flow, flow_);
          DARABONBA_PTR_TO_JSON(Rps, rps_);
        };
        friend void from_json(const Darabonba::Json& j, Performance& obj) { 
          DARABONBA_PTR_FROM_JSON(Flow, flow_);
          DARABONBA_PTR_FROM_JSON(Rps, rps_);
        };
        Performance() = default ;
        Performance(const Performance &) = default ;
        Performance(Performance &&) = default ;
        Performance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Performance() = default ;
        Performance& operator=(const Performance &) = default ;
        Performance& operator=(Performance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flow_ == nullptr
        && this->rps_ == nullptr; };
        // flow Field Functions 
        bool hasFlow() const { return this->flow_ != nullptr;};
        void deleteFlow() { this->flow_ = nullptr;};
        inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
        inline Performance& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


        // rps Field Functions 
        bool hasRps() const { return this->rps_ != nullptr;};
        void deleteRps() { this->rps_ = nullptr;};
        inline string getRps() const { DARABONBA_PTR_GET_DEFAULT(rps_, "") };
        inline Performance& setRps(string rps) { DARABONBA_PTR_SET_VALUE(rps_, rps) };


      protected:
        // The size of data that is migrated or synchronized per second. Unit: MB/s.
        shared_ptr<string> flow_ {};
        // The number of times that SQL statements are migrated or synchronized per second, including BEGIN, COMMIT, DML, and DDL statements. DML statements include INSERT, DELETE, and UPDATE.
        shared_ptr<string> rps_ {};
      };

      class MigrationMode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MigrationMode& obj) { 
          DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
          DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
          DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
        };
        friend void from_json(const Darabonba::Json& j, MigrationMode& obj) { 
          DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
          DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
          DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
        };
        MigrationMode() = default ;
        MigrationMode(const MigrationMode &) = default ;
        MigrationMode(MigrationMode &&) = default ;
        MigrationMode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MigrationMode() = default ;
        MigrationMode& operator=(const MigrationMode &) = default ;
        MigrationMode& operator=(MigrationMode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataInitialization_ == nullptr
        && this->dataSynchronization_ == nullptr && this->structureInitialization_ == nullptr; };
        // dataInitialization Field Functions 
        bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
        void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
        inline bool getDataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
        inline MigrationMode& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


        // dataSynchronization Field Functions 
        bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
        void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
        inline bool getDataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
        inline MigrationMode& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


        // structureInitialization Field Functions 
        bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
        void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
        inline bool getStructureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
        inline MigrationMode& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


      protected:
        // Indicates whether full data migration or initial full data synchronization is performed. Valid values:
        // 
        // - **true**
        // - **false**
        shared_ptr<bool> dataInitialization_ {};
        // Indicates whether incremental data migration or synchronization is performed. Valid values:
        // 
        // - **true**
        // - **false**
        shared_ptr<bool> dataSynchronization_ {};
        // Indicates whether schema migration or initial schema synchronization is performed. Valid values:
        // 
        // - **true**
        // - **false**
        shared_ptr<bool> structureInitialization_ {};
      };

      class DestinationEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DestinationEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(EngineName, engineName_);
          DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
          DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        DestinationEndpoint() = default ;
        DestinationEndpoint(const DestinationEndpoint &) = default ;
        DestinationEndpoint(DestinationEndpoint &&) = default ;
        DestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DestinationEndpoint() = default ;
        DestinationEndpoint& operator=(const DestinationEndpoint &) = default ;
        DestinationEndpoint& operator=(DestinationEndpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr && this->oracleSID_ == nullptr
        && this->port_ == nullptr && this->region_ == nullptr && this->sslSolutionEnum_ == nullptr && this->userName_ == nullptr; };
        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline DestinationEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // engineName Field Functions 
        bool hasEngineName() const { return this->engineName_ != nullptr;};
        void deleteEngineName() { this->engineName_ = nullptr;};
        inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
        inline DestinationEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


        // instanceID Field Functions 
        bool hasInstanceID() const { return this->instanceID_ != nullptr;};
        void deleteInstanceID() { this->instanceID_ = nullptr;};
        inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
        inline DestinationEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline DestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline DestinationEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // oracleSID Field Functions 
        bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
        void deleteOracleSID() { this->oracleSID_ = nullptr;};
        inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
        inline DestinationEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline DestinationEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline DestinationEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // sslSolutionEnum Field Functions 
        bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
        void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
        inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
        inline DestinationEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline DestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The name of the database that contains the migrated objects in the destination instance.
        shared_ptr<string> databaseName_ {};
        // The database engine of the destination instance.
        shared_ptr<string> engineName_ {};
        // The ID of the destination instance.
        shared_ptr<string> instanceID_ {};
        // The type of the destination instance.
        shared_ptr<string> instanceType_ {};
        // The endpoint of the destination instance.
        shared_ptr<string> ip_ {};
        // The SID of the Oracle database. 
        // 
        // > This parameter is returned only if the returned value of **EngineName** of the destination instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
        shared_ptr<string> oracleSID_ {};
        // The port number of the destination instance.
        shared_ptr<string> port_ {};
        // The ID of the region in which the destination instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
        shared_ptr<string> region_ {};
        // Indicates whether SSL encryption is enabled. Valid values:
        // 
        // - **DISABLE**: SSL encryption is disabled. 
        // - **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded. 
        // - **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection with an AWS MongoDB Altas database. 
        // - **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection with a Kafka cluster.
        shared_ptr<string> sslSolutionEnum_ {};
        // The database account of the destination instance.
        shared_ptr<string> userName_ {};
      };

      class DataSynchronizationStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSynchronizationStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataSynchronizationStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataSynchronizationStatus() = default ;
        DataSynchronizationStatus(const DataSynchronizationStatus &) = default ;
        DataSynchronizationStatus(DataSynchronizationStatus &&) = default ;
        DataSynchronizationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSynchronizationStatus() = default ;
        DataSynchronizationStatus& operator=(const DataSynchronizationStatus &) = default ;
        DataSynchronizationStatus& operator=(DataSynchronizationStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataSynchronizationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // needUpgrade Field Functions 
        bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
        void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
        inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
        inline DataSynchronizationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline DataSynchronizationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline DataSynchronizationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataSynchronizationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if incremental data migration or synchronization failed.
        shared_ptr<string> errorMessage_ {};
        // Indicates whether the instance needs to be upgraded. Valid values:
        // 
        // - **true**
        // - **false**
        // 
        // > To upgrade a DTS instance, call the [TransferInstanceClass](https://help.aliyun.com/document_detail/281093.html) operation.
        shared_ptr<bool> needUpgrade_ {};
        // The progress of incremental data migration or synchronization. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The number of entries that have been migrated or synchronized during incremental data migration or synchronization.
        shared_ptr<string> progress_ {};
        // The state of incremental data migration or synchronization. Valid values:
        // 
        // - **NotStarted**: The task is not started. 
        // - **Migrating**: The task is in progress. 
        // - **Failed**: The task failed. 
        // - **Finished**: The task is complete. 
        // - **Catched**: The task is not delayed.
        shared_ptr<string> status_ {};
      };

      class DataInitializationStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataInitializationStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataInitializationStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataInitializationStatus() = default ;
        DataInitializationStatus(const DataInitializationStatus &) = default ;
        DataInitializationStatus(DataInitializationStatus &&) = default ;
        DataInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataInitializationStatus() = default ;
        DataInitializationStatus& operator=(const DataInitializationStatus &) = default ;
        DataInitializationStatus& operator=(DataInitializationStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline DataInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline DataInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if full data migration or initial full data synchronization failed.
        shared_ptr<string> errorMessage_ {};
        // The progress of full data migration or initial full data synchronization. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The number of entries that have been migrated or synchronized during full data migration or initial full data synchronization.
        shared_ptr<string> progress_ {};
        // The state of full data migration or initial full data synchronization. Valid values:
        // 
        // - **NotStarted**: The task is not started. 
        // - **Migrating**: The task is in progress. 
        // - **Failed**: The task failed. 
        // - **Finished**: The task is complete.
        shared_ptr<string> status_ {};
      };

      class DataEtlStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataEtlStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataEtlStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataEtlStatus() = default ;
        DataEtlStatus(const DataEtlStatus &) = default ;
        DataEtlStatus(DataEtlStatus &&) = default ;
        DataEtlStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataEtlStatus() = default ;
        DataEtlStatus& operator=(const DataEtlStatus &) = default ;
        DataEtlStatus& operator=(DataEtlStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataEtlStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline DataEtlStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline DataEtlStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataEtlStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if the ETL task failed.
        shared_ptr<string> errorMessage_ {};
        // The progress of the ETL task. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The number of entries that have been processed by the ETL task.
        shared_ptr<string> progress_ {};
        // The state of the ETL task. Valid values:
        // 
        // - **NotStarted**: The task is not started. 
        // - **Migrating**: The task is in progress. 
        // - **Failed**: The task failed. 
        // - **Finished**: The task is complete. 
        // - **Catched**: The task is not delayed.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->appName_ == nullptr
        && this->beginTimestamp_ == nullptr && this->checkpoint_ == nullptr && this->consumptionCheckpoint_ == nullptr && this->consumptionClient_ == nullptr && this->createTime_ == nullptr
        && this->dataEtlStatus_ == nullptr && this->dataInitializationStatus_ == nullptr && this->dataSynchronizationStatus_ == nullptr && this->dbObject_ == nullptr && this->delay_ == nullptr
        && this->destinationEndpoint_ == nullptr && this->dtsInstanceID_ == nullptr && this->dtsJobClass_ == nullptr && this->dtsJobDirection_ == nullptr && this->dtsJobId_ == nullptr
        && this->dtsJobName_ == nullptr && this->endTimestamp_ == nullptr && this->errorMessage_ == nullptr && this->etlSafeCheckpoint_ == nullptr && this->expireTime_ == nullptr
        && this->jobType_ == nullptr && this->migrationMode_ == nullptr && this->originType_ == nullptr && this->payType_ == nullptr && this->performance_ == nullptr
        && this->precheckStatus_ == nullptr && this->reserved_ == nullptr && this->resourceGroupDisplayName_ == nullptr && this->resourceGroupId_ == nullptr && this->retryState_ == nullptr
        && this->reverseJob_ == nullptr && this->sourceEndpoint_ == nullptr && this->status_ == nullptr && this->structureInitializationStatus_ == nullptr && this->tagList_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline EtlDemoList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // beginTimestamp Field Functions 
      bool hasBeginTimestamp() const { return this->beginTimestamp_ != nullptr;};
      void deleteBeginTimestamp() { this->beginTimestamp_ = nullptr;};
      inline string getBeginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(beginTimestamp_, "") };
      inline EtlDemoList& setBeginTimestamp(string beginTimestamp) { DARABONBA_PTR_SET_VALUE(beginTimestamp_, beginTimestamp) };


      // checkpoint Field Functions 
      bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
      void deleteCheckpoint() { this->checkpoint_ = nullptr;};
      inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
      inline EtlDemoList& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


      // consumptionCheckpoint Field Functions 
      bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
      void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
      inline string getConsumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
      inline EtlDemoList& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


      // consumptionClient Field Functions 
      bool hasConsumptionClient() const { return this->consumptionClient_ != nullptr;};
      void deleteConsumptionClient() { this->consumptionClient_ = nullptr;};
      inline string getConsumptionClient() const { DARABONBA_PTR_GET_DEFAULT(consumptionClient_, "") };
      inline EtlDemoList& setConsumptionClient(string consumptionClient) { DARABONBA_PTR_SET_VALUE(consumptionClient_, consumptionClient) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline EtlDemoList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataEtlStatus Field Functions 
      bool hasDataEtlStatus() const { return this->dataEtlStatus_ != nullptr;};
      void deleteDataEtlStatus() { this->dataEtlStatus_ = nullptr;};
      inline const EtlDemoList::DataEtlStatus & getDataEtlStatus() const { DARABONBA_PTR_GET_CONST(dataEtlStatus_, EtlDemoList::DataEtlStatus) };
      inline EtlDemoList::DataEtlStatus getDataEtlStatus() { DARABONBA_PTR_GET(dataEtlStatus_, EtlDemoList::DataEtlStatus) };
      inline EtlDemoList& setDataEtlStatus(const EtlDemoList::DataEtlStatus & dataEtlStatus) { DARABONBA_PTR_SET_VALUE(dataEtlStatus_, dataEtlStatus) };
      inline EtlDemoList& setDataEtlStatus(EtlDemoList::DataEtlStatus && dataEtlStatus) { DARABONBA_PTR_SET_RVALUE(dataEtlStatus_, dataEtlStatus) };


      // dataInitializationStatus Field Functions 
      bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
      void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
      inline const EtlDemoList::DataInitializationStatus & getDataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, EtlDemoList::DataInitializationStatus) };
      inline EtlDemoList::DataInitializationStatus getDataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, EtlDemoList::DataInitializationStatus) };
      inline EtlDemoList& setDataInitializationStatus(const EtlDemoList::DataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
      inline EtlDemoList& setDataInitializationStatus(EtlDemoList::DataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


      // dataSynchronizationStatus Field Functions 
      bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
      void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
      inline const EtlDemoList::DataSynchronizationStatus & getDataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, EtlDemoList::DataSynchronizationStatus) };
      inline EtlDemoList::DataSynchronizationStatus getDataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, EtlDemoList::DataSynchronizationStatus) };
      inline EtlDemoList& setDataSynchronizationStatus(const EtlDemoList::DataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
      inline EtlDemoList& setDataSynchronizationStatus(EtlDemoList::DataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


      // dbObject Field Functions 
      bool hasDbObject() const { return this->dbObject_ != nullptr;};
      void deleteDbObject() { this->dbObject_ = nullptr;};
      inline string getDbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
      inline EtlDemoList& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


      // delay Field Functions 
      bool hasDelay() const { return this->delay_ != nullptr;};
      void deleteDelay() { this->delay_ = nullptr;};
      inline int64_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
      inline EtlDemoList& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


      // destinationEndpoint Field Functions 
      bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
      void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
      inline const EtlDemoList::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, EtlDemoList::DestinationEndpoint) };
      inline EtlDemoList::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, EtlDemoList::DestinationEndpoint) };
      inline EtlDemoList& setDestinationEndpoint(const EtlDemoList::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
      inline EtlDemoList& setDestinationEndpoint(EtlDemoList::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


      // dtsInstanceID Field Functions 
      bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
      void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
      inline string getDtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
      inline EtlDemoList& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


      // dtsJobClass Field Functions 
      bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
      void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
      inline string getDtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
      inline EtlDemoList& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


      // dtsJobDirection Field Functions 
      bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
      void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
      inline string getDtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
      inline EtlDemoList& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


      // dtsJobId Field Functions 
      bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
      void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
      inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
      inline EtlDemoList& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


      // dtsJobName Field Functions 
      bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
      void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
      inline string getDtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
      inline EtlDemoList& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


      // endTimestamp Field Functions 
      bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
      void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
      inline string getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
      inline EtlDemoList& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline EtlDemoList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // etlSafeCheckpoint Field Functions 
      bool hasEtlSafeCheckpoint() const { return this->etlSafeCheckpoint_ != nullptr;};
      void deleteEtlSafeCheckpoint() { this->etlSafeCheckpoint_ = nullptr;};
      inline string getEtlSafeCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(etlSafeCheckpoint_, "") };
      inline EtlDemoList& setEtlSafeCheckpoint(string etlSafeCheckpoint) { DARABONBA_PTR_SET_VALUE(etlSafeCheckpoint_, etlSafeCheckpoint) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline EtlDemoList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline EtlDemoList& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // migrationMode Field Functions 
      bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
      void deleteMigrationMode() { this->migrationMode_ = nullptr;};
      inline const EtlDemoList::MigrationMode & getMigrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, EtlDemoList::MigrationMode) };
      inline EtlDemoList::MigrationMode getMigrationMode() { DARABONBA_PTR_GET(migrationMode_, EtlDemoList::MigrationMode) };
      inline EtlDemoList& setMigrationMode(const EtlDemoList::MigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
      inline EtlDemoList& setMigrationMode(EtlDemoList::MigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


      // originType Field Functions 
      bool hasOriginType() const { return this->originType_ != nullptr;};
      void deleteOriginType() { this->originType_ = nullptr;};
      inline string getOriginType() const { DARABONBA_PTR_GET_DEFAULT(originType_, "") };
      inline EtlDemoList& setOriginType(string originType) { DARABONBA_PTR_SET_VALUE(originType_, originType) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline EtlDemoList& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // performance Field Functions 
      bool hasPerformance() const { return this->performance_ != nullptr;};
      void deletePerformance() { this->performance_ = nullptr;};
      inline const EtlDemoList::Performance & getPerformance() const { DARABONBA_PTR_GET_CONST(performance_, EtlDemoList::Performance) };
      inline EtlDemoList::Performance getPerformance() { DARABONBA_PTR_GET(performance_, EtlDemoList::Performance) };
      inline EtlDemoList& setPerformance(const EtlDemoList::Performance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
      inline EtlDemoList& setPerformance(EtlDemoList::Performance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


      // precheckStatus Field Functions 
      bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
      void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
      inline const EtlDemoList::PrecheckStatus & getPrecheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, EtlDemoList::PrecheckStatus) };
      inline EtlDemoList::PrecheckStatus getPrecheckStatus() { DARABONBA_PTR_GET(precheckStatus_, EtlDemoList::PrecheckStatus) };
      inline EtlDemoList& setPrecheckStatus(const EtlDemoList::PrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
      inline EtlDemoList& setPrecheckStatus(EtlDemoList::PrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


      // reserved Field Functions 
      bool hasReserved() const { return this->reserved_ != nullptr;};
      void deleteReserved() { this->reserved_ = nullptr;};
      inline string getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
      inline EtlDemoList& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


      // resourceGroupDisplayName Field Functions 
      bool hasResourceGroupDisplayName() const { return this->resourceGroupDisplayName_ != nullptr;};
      void deleteResourceGroupDisplayName() { this->resourceGroupDisplayName_ = nullptr;};
      inline string getResourceGroupDisplayName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupDisplayName_, "") };
      inline EtlDemoList& setResourceGroupDisplayName(string resourceGroupDisplayName) { DARABONBA_PTR_SET_VALUE(resourceGroupDisplayName_, resourceGroupDisplayName) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline EtlDemoList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // retryState Field Functions 
      bool hasRetryState() const { return this->retryState_ != nullptr;};
      void deleteRetryState() { this->retryState_ = nullptr;};
      inline const EtlDemoList::RetryState & getRetryState() const { DARABONBA_PTR_GET_CONST(retryState_, EtlDemoList::RetryState) };
      inline EtlDemoList::RetryState getRetryState() { DARABONBA_PTR_GET(retryState_, EtlDemoList::RetryState) };
      inline EtlDemoList& setRetryState(const EtlDemoList::RetryState & retryState) { DARABONBA_PTR_SET_VALUE(retryState_, retryState) };
      inline EtlDemoList& setRetryState(EtlDemoList::RetryState && retryState) { DARABONBA_PTR_SET_RVALUE(retryState_, retryState) };


      // reverseJob Field Functions 
      bool hasReverseJob() const { return this->reverseJob_ != nullptr;};
      void deleteReverseJob() { this->reverseJob_ = nullptr;};
      inline const EtlDemoList::ReverseJob & getReverseJob() const { DARABONBA_PTR_GET_CONST(reverseJob_, EtlDemoList::ReverseJob) };
      inline EtlDemoList::ReverseJob getReverseJob() { DARABONBA_PTR_GET(reverseJob_, EtlDemoList::ReverseJob) };
      inline EtlDemoList& setReverseJob(const EtlDemoList::ReverseJob & reverseJob) { DARABONBA_PTR_SET_VALUE(reverseJob_, reverseJob) };
      inline EtlDemoList& setReverseJob(EtlDemoList::ReverseJob && reverseJob) { DARABONBA_PTR_SET_RVALUE(reverseJob_, reverseJob) };


      // sourceEndpoint Field Functions 
      bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
      void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
      inline const EtlDemoList::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, EtlDemoList::SourceEndpoint) };
      inline EtlDemoList::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, EtlDemoList::SourceEndpoint) };
      inline EtlDemoList& setSourceEndpoint(const EtlDemoList::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
      inline EtlDemoList& setSourceEndpoint(EtlDemoList::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EtlDemoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // structureInitializationStatus Field Functions 
      bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
      void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
      inline const EtlDemoList::StructureInitializationStatus & getStructureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, EtlDemoList::StructureInitializationStatus) };
      inline EtlDemoList::StructureInitializationStatus getStructureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, EtlDemoList::StructureInitializationStatus) };
      inline EtlDemoList& setStructureInitializationStatus(const EtlDemoList::StructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
      inline EtlDemoList& setStructureInitializationStatus(EtlDemoList::StructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<EtlDemoList::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<EtlDemoList::TagList>) };
      inline vector<EtlDemoList::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<EtlDemoList::TagList>) };
      inline EtlDemoList& setTagList(const vector<EtlDemoList::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline EtlDemoList& setTagList(vector<EtlDemoList::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    protected:
      // Indicates whether the **new** change tracking feature is used. 
      // 
      // > This parameter is returned only for change tracking instances of the new version.
      shared_ptr<string> appName_ {};
      // The start of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> beginTimestamp_ {};
      // The start offset of incremental data migration or data synchronization. This value is a UNIX timestamp representing the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<string> checkpoint_ {};
      // The consumption checkpoint of the change tracking instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> consumptionCheckpoint_ {};
      // The downstream client information in the following format: <IP address of the downstream client>:<Random ID generated by DTS>.
      shared_ptr<string> consumptionClient_ {};
      // The time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:s*sZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The state of the ETL task. 
      // 
      // > This parameter collection is returned only if an ETL task is configured.
      shared_ptr<EtlDemoList::DataEtlStatus> dataEtlStatus_ {};
      // The state of full data migration or initial full data synchronization.
      shared_ptr<EtlDemoList::DataInitializationStatus> dataInitializationStatus_ {};
      // The state of incremental data migration or synchronization.
      shared_ptr<EtlDemoList::DataSynchronizationStatus> dataSynchronizationStatus_ {};
      // The objects of the data migration, data synchronization, or change tracking task. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
      shared_ptr<string> dbObject_ {};
      // The latency of incremental data migration or synchronization. 
      // 
      // > If you query data migration tasks, the unit of this parameter is milliseconds. If you query data synchronization tasks, the unit of this parameter is seconds.
      shared_ptr<int64_t> delay_ {};
      // The connection settings of the destination instance.
      shared_ptr<EtlDemoList::DestinationEndpoint> destinationEndpoint_ {};
      // The ID of the data migration, data synchronization, or change tracking instance.
      shared_ptr<string> dtsInstanceID_ {};
      // The instance class. 
      // 
      // > For more information about the test performance of each instance class, see [Specifications of data migration instances](https://help.aliyun.com/document_detail/26606.html) and [Specifications of data synchronization instances](https://help.aliyun.com/document_detail/26605.html).
      shared_ptr<string> dtsJobClass_ {};
      // The synchronization direction. Valid values:
      // 
      // - **Forward**
      // - **Reverse**
      // 
      // > This parameter is returned only if the topology of the data synchronization instance is two-way synchronization.
      shared_ptr<string> dtsJobDirection_ {};
      // The ID of the data migration, data synchronization, or change tracking task.
      shared_ptr<string> dtsJobId_ {};
      // The name of the data migration, data synchronization, or change tracking task.
      shared_ptr<string> dtsJobName_ {};
      // The end of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> endTimestamp_ {};
      // The error message returned if the task failed.
      shared_ptr<string> errorMessage_ {};
      // The checkpoint of the ETL task.
      shared_ptr<string> etlSafeCheckpoint_ {};
      // The time when the instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      // 
      // > This parameter is returned only if the returned value of **PayType** is **PrePaid**.
      shared_ptr<string> expireTime_ {};
      // The type of the DTS task. Valid values:
      // 
      // - **MIGRATION**: data migration task 
      // - **SYNC**: data synchronization task 
      // - **SUBSCRIBE**: change tracking task
      shared_ptr<string> jobType_ {};
      // The migration types or initial synchronization types.
      shared_ptr<EtlDemoList::MigrationMode> migrationMode_ {};
      // The source of the task.
      // - **PTS**
      // - **DMS**
      // - **DTS**
      shared_ptr<string> originType_ {};
      // The billing method of the DTS instance. Valid values:
      // 
      // - **PrePaid**: subscription 
      // - **PostPaid**: pay-as-you-go
      shared_ptr<string> payType_ {};
      // The performance of the data migration or synchronization instance.
      shared_ptr<EtlDemoList::Performance> performance_ {};
      // The precheck state.
      shared_ptr<EtlDemoList::PrecheckStatus> precheckStatus_ {};
      // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, for example, whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
      shared_ptr<string> reserved_ {};
      // The name of the resource group.
      shared_ptr<string> resourceGroupDisplayName_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The information about the retries performed by DTS due to an exception.
      shared_ptr<EtlDemoList::RetryState> retryState_ {};
      // The details of the data synchronization task in the reverse direction. 
      // 
      // > This parameter is returned only for two-way data synchronization tasks.
      shared_ptr<EtlDemoList::ReverseJob> reverseJob_ {};
      // The connection settings of the source instance.
      shared_ptr<EtlDemoList::SourceEndpoint> sourceEndpoint_ {};
      // The state of the DTS instance. For more information about the valid values, see the description of the request parameter **Status**.
      shared_ptr<string> status_ {};
      // The state of schema migration or initial schema synchronization.
      shared_ptr<EtlDemoList::StructureInitializationStatus> structureInitializationStatus_ {};
      // The tags of the task.
      shared_ptr<vector<EtlDemoList::TagList>> tagList_ {};
    };

    class DtsJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DtsJobList& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(BeginTimestamp, beginTimestamp_);
        DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
        DARABONBA_PTR_TO_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
        DARABONBA_PTR_TO_JSON(ConsumptionClient, consumptionClient_);
        DARABONBA_PTR_TO_JSON(CpuUsage, cpuUsage_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataCloudStatus, dataCloudStatus_);
        DARABONBA_PTR_TO_JSON(DataEtlStatus, dataEtlStatus_);
        DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
        DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
        DARABONBA_PTR_TO_JSON(DbObject, dbObject_);
        DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
        DARABONBA_PTR_TO_JSON(Delay, delay_);
        DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
        DARABONBA_PTR_TO_JSON(DtsBisLabel, dtsBisLabel_);
        DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
        DARABONBA_PTR_TO_JSON(DtsJobClass, dtsJobClass_);
        DARABONBA_PTR_TO_JSON(DtsJobDirection, dtsJobDirection_);
        DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
        DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
        DARABONBA_PTR_TO_JSON(DuRealUsage, duRealUsage_);
        DARABONBA_PTR_TO_JSON(DuUsage, duUsage_);
        DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
        DARABONBA_PTR_TO_JSON(ErrorDetails, errorDetails_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(FullDataCheckStatus, fullDataCheckStatus_);
        DARABONBA_PTR_TO_JSON(IncDataCheckStatus, incDataCheckStatus_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(MaxDu, maxDu_);
        DARABONBA_PTR_TO_JSON(MemUsage, memUsage_);
        DARABONBA_PTR_TO_JSON(MigrationErrCode, migrationErrCode_);
        DARABONBA_PTR_TO_JSON(MigrationErrHelpDocId, migrationErrHelpDocId_);
        DARABONBA_PTR_TO_JSON(MigrationErrHelpDocKey, migrationErrHelpDocKey_);
        DARABONBA_PTR_TO_JSON(MigrationErrMsg, migrationErrMsg_);
        DARABONBA_PTR_TO_JSON(MigrationErrType, migrationErrType_);
        DARABONBA_PTR_TO_JSON(MigrationErrWorkaround, migrationErrWorkaround_);
        DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
        DARABONBA_PTR_TO_JSON(MinDu, minDu_);
        DARABONBA_PTR_TO_JSON(OriginType, originType_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(Performance, performance_);
        DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
        DARABONBA_PTR_TO_JSON(Reserved, reserved_);
        DARABONBA_PTR_TO_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RetryState, retryState_);
        DARABONBA_PTR_TO_JSON(ReverseJob, reverseJob_);
        DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StructureDataCheckStatus, structureDataCheckStatus_);
        DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
        DARABONBA_PTR_TO_JSON(TagList, tagList_);
      };
      friend void from_json(const Darabonba::Json& j, DtsJobList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(BeginTimestamp, beginTimestamp_);
        DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
        DARABONBA_PTR_FROM_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
        DARABONBA_PTR_FROM_JSON(ConsumptionClient, consumptionClient_);
        DARABONBA_PTR_FROM_JSON(CpuUsage, cpuUsage_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataCloudStatus, dataCloudStatus_);
        DARABONBA_PTR_FROM_JSON(DataEtlStatus, dataEtlStatus_);
        DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
        DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
        DARABONBA_PTR_FROM_JSON(DbObject, dbObject_);
        DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
        DARABONBA_PTR_FROM_JSON(Delay, delay_);
        DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
        DARABONBA_PTR_FROM_JSON(DtsBisLabel, dtsBisLabel_);
        DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
        DARABONBA_PTR_FROM_JSON(DtsJobClass, dtsJobClass_);
        DARABONBA_PTR_FROM_JSON(DtsJobDirection, dtsJobDirection_);
        DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
        DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
        DARABONBA_PTR_FROM_JSON(DuRealUsage, duRealUsage_);
        DARABONBA_PTR_FROM_JSON(DuUsage, duUsage_);
        DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
        DARABONBA_PTR_FROM_JSON(ErrorDetails, errorDetails_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(FullDataCheckStatus, fullDataCheckStatus_);
        DARABONBA_PTR_FROM_JSON(IncDataCheckStatus, incDataCheckStatus_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(MaxDu, maxDu_);
        DARABONBA_PTR_FROM_JSON(MemUsage, memUsage_);
        DARABONBA_PTR_FROM_JSON(MigrationErrCode, migrationErrCode_);
        DARABONBA_PTR_FROM_JSON(MigrationErrHelpDocId, migrationErrHelpDocId_);
        DARABONBA_PTR_FROM_JSON(MigrationErrHelpDocKey, migrationErrHelpDocKey_);
        DARABONBA_PTR_FROM_JSON(MigrationErrMsg, migrationErrMsg_);
        DARABONBA_PTR_FROM_JSON(MigrationErrType, migrationErrType_);
        DARABONBA_PTR_FROM_JSON(MigrationErrWorkaround, migrationErrWorkaround_);
        DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
        DARABONBA_PTR_FROM_JSON(MinDu, minDu_);
        DARABONBA_PTR_FROM_JSON(OriginType, originType_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(Performance, performance_);
        DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
        DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RetryState, retryState_);
        DARABONBA_PTR_FROM_JSON(ReverseJob, reverseJob_);
        DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StructureDataCheckStatus, structureDataCheckStatus_);
        DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
        DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      };
      DtsJobList() = default ;
      DtsJobList(const DtsJobList &) = default ;
      DtsJobList(DtsJobList &&) = default ;
      DtsJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DtsJobList() = default ;
      DtsJobList& operator=(const DtsJobList &) = default ;
      DtsJobList& operator=(DtsJobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagList& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, TagList& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        TagList() = default ;
        TagList(const TagList &) = default ;
        TagList(TagList &&) = default ;
        TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagList() = default ;
        TagList& operator=(const TagList &) = default ;
        TagList& operator=(TagList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline TagList& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline TagList& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The key of the tag.
        shared_ptr<string> tagKey_ {};
        // The value of the tag.
        shared_ptr<string> tagValue_ {};
      };

      class StructureInitializationStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StructureInitializationStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, StructureInitializationStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        StructureInitializationStatus() = default ;
        StructureInitializationStatus(const StructureInitializationStatus &) = default ;
        StructureInitializationStatus(StructureInitializationStatus &&) = default ;
        StructureInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StructureInitializationStatus() = default ;
        StructureInitializationStatus& operator=(const StructureInitializationStatus &) = default ;
        StructureInitializationStatus& operator=(StructureInitializationStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline StructureInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline StructureInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline StructureInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline StructureInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if schema migration or initial schema synchronization failed.
        shared_ptr<string> errorMessage_ {};
        // The progress of schema migration or initial schema synchronization. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The number of tables that have been migrated or synchronized during schema migration or initial schema synchronization.
        shared_ptr<string> progress_ {};
        // The state of schema migration or initial schema synchronization. Valid values:
        // 
        // - **NotStarted**: The task is not started. 
        // - **Migrating**: The task is in progress. 
        // - **Failed**: The task failed. 
        // - **Finished**: The task is complete.
        shared_ptr<string> status_ {};
      };

      class StructureDataCheckStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StructureDataCheckStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, StructureDataCheckStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        StructureDataCheckStatus() = default ;
        StructureDataCheckStatus(const StructureDataCheckStatus &) = default ;
        StructureDataCheckStatus(StructureDataCheckStatus &&) = default ;
        StructureDataCheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StructureDataCheckStatus() = default ;
        StructureDataCheckStatus& operator=(const StructureDataCheckStatus &) = default ;
        StructureDataCheckStatus& operator=(StructureDataCheckStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline StructureDataCheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline StructureDataCheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline StructureDataCheckStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline StructureDataCheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> errorMessage_ {};
        shared_ptr<string> percent_ {};
        shared_ptr<string> progress_ {};
        shared_ptr<string> status_ {};
      };

      class SourceEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(EngineName, engineName_);
          DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
          DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        SourceEndpoint() = default ;
        SourceEndpoint(const SourceEndpoint &) = default ;
        SourceEndpoint(SourceEndpoint &&) = default ;
        SourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceEndpoint() = default ;
        SourceEndpoint& operator=(const SourceEndpoint &) = default ;
        SourceEndpoint& operator=(SourceEndpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr && this->oracleSID_ == nullptr
        && this->port_ == nullptr && this->region_ == nullptr && this->sslSolutionEnum_ == nullptr && this->userName_ == nullptr; };
        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline SourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // engineName Field Functions 
        bool hasEngineName() const { return this->engineName_ != nullptr;};
        void deleteEngineName() { this->engineName_ = nullptr;};
        inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
        inline SourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


        // instanceID Field Functions 
        bool hasInstanceID() const { return this->instanceID_ != nullptr;};
        void deleteInstanceID() { this->instanceID_ = nullptr;};
        inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
        inline SourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline SourceEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // oracleSID Field Functions 
        bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
        void deleteOracleSID() { this->oracleSID_ = nullptr;};
        inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
        inline SourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline SourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline SourceEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // sslSolutionEnum Field Functions 
        bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
        void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
        inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
        inline SourceEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline SourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The name of the database that contains the objects to be migrated from the source instance.
        shared_ptr<string> databaseName_ {};
        // The database engine of the source instance.
        shared_ptr<string> engineName_ {};
        // The ID of the source instance.
        shared_ptr<string> instanceID_ {};
        // The type of the source instance.
        shared_ptr<string> instanceType_ {};
        // The endpoint of the source instance.
        shared_ptr<string> ip_ {};
        // The SID of the Oracle database. 
        // 
        // > This parameter is returned only if the returned value of **EngineName** of the source instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
        shared_ptr<string> oracleSID_ {};
        // The port number of the source instance.
        shared_ptr<string> port_ {};
        // The ID of the region in which the source instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
        shared_ptr<string> region_ {};
        // Indicates whether SSL encryption is enabled. Valid values:
        // 
        // - **DISABLE**: SSL encryption is disabled. 
        // - **ENABLE_WITH_CERTIFICAT**E: SSL encryption is enabled and the CA certificate is uploaded. 
        // - **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection with an AWS MongoDB Altas database. 
        // - **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection with a Kafka cluster.
        shared_ptr<string> sslSolutionEnum_ {};
        // The database account of the source instance.
        shared_ptr<string> userName_ {};
      };

      class ReverseJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReverseJob& obj) { 
          DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
          DARABONBA_PTR_TO_JSON(CpuUsage, cpuUsage_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
          DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
          DARABONBA_PTR_TO_JSON(DbObject, dbObject_);
          DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
          DARABONBA_PTR_TO_JSON(Delay, delay_);
          DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
          DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
          DARABONBA_PTR_TO_JSON(DtsJobClass, dtsJobClass_);
          DARABONBA_PTR_TO_JSON(DtsJobDirection, dtsJobDirection_);
          DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
          DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
          DARABONBA_PTR_TO_JSON(DuUsage, duUsage_);
          DARABONBA_PTR_TO_JSON(ErrorDetails, errorDetails_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(FullDataCheckStatus, fullDataCheckStatus_);
          DARABONBA_PTR_TO_JSON(IncDataCheckStatus, incDataCheckStatus_);
          DARABONBA_PTR_TO_JSON(MaxDu, maxDu_);
          DARABONBA_PTR_TO_JSON(MemUsage, memUsage_);
          DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
          DARABONBA_PTR_TO_JSON(MinDu, minDu_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(Performance, performance_);
          DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StructureDataCheckStatus, structureDataCheckStatus_);
          DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
        };
        friend void from_json(const Darabonba::Json& j, ReverseJob& obj) { 
          DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
          DARABONBA_PTR_FROM_JSON(CpuUsage, cpuUsage_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
          DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
          DARABONBA_PTR_FROM_JSON(DbObject, dbObject_);
          DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
          DARABONBA_PTR_FROM_JSON(Delay, delay_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
          DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
          DARABONBA_PTR_FROM_JSON(DtsJobClass, dtsJobClass_);
          DARABONBA_PTR_FROM_JSON(DtsJobDirection, dtsJobDirection_);
          DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
          DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
          DARABONBA_PTR_FROM_JSON(DuUsage, duUsage_);
          DARABONBA_PTR_FROM_JSON(ErrorDetails, errorDetails_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(FullDataCheckStatus, fullDataCheckStatus_);
          DARABONBA_PTR_FROM_JSON(IncDataCheckStatus, incDataCheckStatus_);
          DARABONBA_PTR_FROM_JSON(MaxDu, maxDu_);
          DARABONBA_PTR_FROM_JSON(MemUsage, memUsage_);
          DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
          DARABONBA_PTR_FROM_JSON(MinDu, minDu_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(Performance, performance_);
          DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StructureDataCheckStatus, structureDataCheckStatus_);
          DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
        };
        ReverseJob() = default ;
        ReverseJob(const ReverseJob &) = default ;
        ReverseJob(ReverseJob &&) = default ;
        ReverseJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReverseJob() = default ;
        ReverseJob& operator=(const ReverseJob &) = default ;
        ReverseJob& operator=(ReverseJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StructureInitializationStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StructureInitializationStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, StructureInitializationStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          StructureInitializationStatus() = default ;
          StructureInitializationStatus(const StructureInitializationStatus &) = default ;
          StructureInitializationStatus(StructureInitializationStatus &&) = default ;
          StructureInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StructureInitializationStatus() = default ;
          StructureInitializationStatus& operator=(const StructureInitializationStatus &) = default ;
          StructureInitializationStatus& operator=(StructureInitializationStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline StructureInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline StructureInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline StructureInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline StructureInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if initial schema synchronization failed.
          shared_ptr<string> errorMessage_ {};
          // The progress of initial schema synchronization. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The number of tables that have been synchronized during initial schema synchronization.
          shared_ptr<string> progress_ {};
          // The state of initial schema synchronization. Valid values:
          // 
          // - **NotStarted**: The task is not started. 
          // - **Migrating**: The task is in progress. 
          // - **Failed**: The task failed. 
          // - **Finished**: The task is complete.
          shared_ptr<string> status_ {};
        };

        class StructureDataCheckStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StructureDataCheckStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, StructureDataCheckStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          StructureDataCheckStatus() = default ;
          StructureDataCheckStatus(const StructureDataCheckStatus &) = default ;
          StructureDataCheckStatus(StructureDataCheckStatus &&) = default ;
          StructureDataCheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StructureDataCheckStatus() = default ;
          StructureDataCheckStatus& operator=(const StructureDataCheckStatus &) = default ;
          StructureDataCheckStatus& operator=(StructureDataCheckStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline StructureDataCheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline StructureDataCheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline StructureDataCheckStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline StructureDataCheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          shared_ptr<string> errorMessage_ {};
          shared_ptr<string> percent_ {};
          shared_ptr<string> progress_ {};
          shared_ptr<string> status_ {};
        };

        class SourceEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_TO_JSON(EngineName, engineName_);
            DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(Ip, ip_);
            DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
            DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(Ip, ip_);
            DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_FROM_JSON(UserName, userName_);
          };
          SourceEndpoint() = default ;
          SourceEndpoint(const SourceEndpoint &) = default ;
          SourceEndpoint(SourceEndpoint &&) = default ;
          SourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceEndpoint() = default ;
          SourceEndpoint& operator=(const SourceEndpoint &) = default ;
          SourceEndpoint& operator=(SourceEndpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr && this->oracleSID_ == nullptr
        && this->port_ == nullptr && this->region_ == nullptr && this->sslSolutionEnum_ == nullptr && this->userName_ == nullptr; };
          // databaseName Field Functions 
          bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
          void deleteDatabaseName() { this->databaseName_ = nullptr;};
          inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
          inline SourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


          // engineName Field Functions 
          bool hasEngineName() const { return this->engineName_ != nullptr;};
          void deleteEngineName() { this->engineName_ = nullptr;};
          inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
          inline SourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


          // instanceID Field Functions 
          bool hasInstanceID() const { return this->instanceID_ != nullptr;};
          void deleteInstanceID() { this->instanceID_ = nullptr;};
          inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
          inline SourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
          inline SourceEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


          // oracleSID Field Functions 
          bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
          void deleteOracleSID() { this->oracleSID_ = nullptr;};
          inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
          inline SourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
          inline SourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline SourceEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // sslSolutionEnum Field Functions 
          bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
          void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
          inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
          inline SourceEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline SourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // The name of the database that contains the objects to be migrated from the source instance.
          shared_ptr<string> databaseName_ {};
          // The database engine of the source instance.
          shared_ptr<string> engineName_ {};
          // The ID of the source instance.
          shared_ptr<string> instanceID_ {};
          // The type of the source instance.
          shared_ptr<string> instanceType_ {};
          // The endpoint of the source instance.
          shared_ptr<string> ip_ {};
          // The SID of the Oracle database. 
          // 
          // > This parameter is returned only if the returned value of **EngineName** of the source instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
          shared_ptr<string> oracleSID_ {};
          // The port number of the source instance.
          shared_ptr<string> port_ {};
          // The ID of the region in which the source instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
          shared_ptr<string> region_ {};
          // Indicates whether SSL encryption is enabled. Valid values:
          // 
          // - **DISABLE**: SSL encryption is disabled. 
          // - **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded. 
          // - **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection with an AWS MongoDB Altas database. 
          // - **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection with a Kafka cluster.
          shared_ptr<string> sslSolutionEnum_ {};
          // The database account of the source instance.
          shared_ptr<string> userName_ {};
        };

        class PrecheckStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrecheckStatus& obj) { 
            DARABONBA_PTR_TO_JSON(Detail, detail_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, PrecheckStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(Detail, detail_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          PrecheckStatus() = default ;
          PrecheckStatus(const PrecheckStatus &) = default ;
          PrecheckStatus(PrecheckStatus &&) = default ;
          PrecheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrecheckStatus() = default ;
          PrecheckStatus& operator=(const PrecheckStatus &) = default ;
          PrecheckStatus& operator=(PrecheckStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Detail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Detail& obj) { 
              DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
              DARABONBA_PTR_TO_JSON(CheckItemDescription, checkItemDescription_);
              DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
              DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
              DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
            };
            friend void from_json(const Darabonba::Json& j, Detail& obj) { 
              DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
              DARABONBA_PTR_FROM_JSON(CheckItemDescription, checkItemDescription_);
              DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
              DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
              DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
            };
            Detail() = default ;
            Detail(const Detail &) = default ;
            Detail(Detail &&) = default ;
            Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Detail() = default ;
            Detail& operator=(const Detail &) = default ;
            Detail& operator=(Detail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->checkItem_ == nullptr
        && this->checkItemDescription_ == nullptr && this->checkResult_ == nullptr && this->failedReason_ == nullptr && this->repairMethod_ == nullptr; };
            // checkItem Field Functions 
            bool hasCheckItem() const { return this->checkItem_ != nullptr;};
            void deleteCheckItem() { this->checkItem_ = nullptr;};
            inline string getCheckItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
            inline Detail& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


            // checkItemDescription Field Functions 
            bool hasCheckItemDescription() const { return this->checkItemDescription_ != nullptr;};
            void deleteCheckItemDescription() { this->checkItemDescription_ = nullptr;};
            inline string getCheckItemDescription() const { DARABONBA_PTR_GET_DEFAULT(checkItemDescription_, "") };
            inline Detail& setCheckItemDescription(string checkItemDescription) { DARABONBA_PTR_SET_VALUE(checkItemDescription_, checkItemDescription) };


            // checkResult Field Functions 
            bool hasCheckResult() const { return this->checkResult_ != nullptr;};
            void deleteCheckResult() { this->checkResult_ = nullptr;};
            inline string getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
            inline Detail& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


            // failedReason Field Functions 
            bool hasFailedReason() const { return this->failedReason_ != nullptr;};
            void deleteFailedReason() { this->failedReason_ = nullptr;};
            inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
            inline Detail& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


            // repairMethod Field Functions 
            bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
            void deleteRepairMethod() { this->repairMethod_ = nullptr;};
            inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
            inline Detail& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


          protected:
            // The name of the precheck item.
            shared_ptr<string> checkItem_ {};
            // The description of the precheck item.
            shared_ptr<string> checkItemDescription_ {};
            // The precheck result. Valid values:
            // 
            // - **Success**
            // - **Failed**
            shared_ptr<string> checkResult_ {};
            // The error message returned if the task failed to pass the precheck.
            shared_ptr<string> failedReason_ {};
            // The method to fix a precheck failure.
            shared_ptr<string> repairMethod_ {};
          };

          virtual bool empty() const override { return this->detail_ == nullptr
        && this->errorMessage_ == nullptr && this->percent_ == nullptr && this->status_ == nullptr; };
          // detail Field Functions 
          bool hasDetail() const { return this->detail_ != nullptr;};
          void deleteDetail() { this->detail_ = nullptr;};
          inline const vector<PrecheckStatus::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<PrecheckStatus::Detail>) };
          inline vector<PrecheckStatus::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<PrecheckStatus::Detail>) };
          inline PrecheckStatus& setDetail(const vector<PrecheckStatus::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
          inline PrecheckStatus& setDetail(vector<PrecheckStatus::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline PrecheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline PrecheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline PrecheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The result of each precheck item.
          shared_ptr<vector<PrecheckStatus::Detail>> detail_ {};
          // The error message returned if the precheck failed.
          shared_ptr<string> errorMessage_ {};
          // The precheck progress. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The precheck state. Valid values:
          // 
          // - **NotStarted**: The precheck is not started. 
          // - **Suspending**: The precheck is paused. 
          // - **Checking**: The precheck is in progress. 
          // - **Failed**: The precheck failed. 
          // - **Finished**: The precheck is complete.
          shared_ptr<string> status_ {};
        };

        class Performance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Performance& obj) { 
            DARABONBA_PTR_TO_JSON(Flow, flow_);
            DARABONBA_PTR_TO_JSON(Rps, rps_);
          };
          friend void from_json(const Darabonba::Json& j, Performance& obj) { 
            DARABONBA_PTR_FROM_JSON(Flow, flow_);
            DARABONBA_PTR_FROM_JSON(Rps, rps_);
          };
          Performance() = default ;
          Performance(const Performance &) = default ;
          Performance(Performance &&) = default ;
          Performance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Performance() = default ;
          Performance& operator=(const Performance &) = default ;
          Performance& operator=(Performance &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->flow_ == nullptr
        && this->rps_ == nullptr; };
          // flow Field Functions 
          bool hasFlow() const { return this->flow_ != nullptr;};
          void deleteFlow() { this->flow_ = nullptr;};
          inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
          inline Performance& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


          // rps Field Functions 
          bool hasRps() const { return this->rps_ != nullptr;};
          void deleteRps() { this->rps_ = nullptr;};
          inline string getRps() const { DARABONBA_PTR_GET_DEFAULT(rps_, "") };
          inline Performance& setRps(string rps) { DARABONBA_PTR_SET_VALUE(rps_, rps) };


        protected:
          // The size of data that is synchronized per second. Unit: MB/s.
          shared_ptr<string> flow_ {};
          // The number of times that SQL statements are synchronized per second, including BEGIN, COMMIT, DML, and DDL statements. DML statements include INSERT, DELETE, and UPDATE.
          shared_ptr<string> rps_ {};
        };

        class MigrationMode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MigrationMode& obj) { 
            DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
            DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
            DARABONBA_PTR_TO_JSON(FullDataCheck, fullDataCheck_);
            DARABONBA_PTR_TO_JSON(IncDataCheck, incDataCheck_);
            DARABONBA_PTR_TO_JSON(StructureDataCheck, structureDataCheck_);
            DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
          };
          friend void from_json(const Darabonba::Json& j, MigrationMode& obj) { 
            DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
            DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
            DARABONBA_PTR_FROM_JSON(FullDataCheck, fullDataCheck_);
            DARABONBA_PTR_FROM_JSON(IncDataCheck, incDataCheck_);
            DARABONBA_PTR_FROM_JSON(StructureDataCheck, structureDataCheck_);
            DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
          };
          MigrationMode() = default ;
          MigrationMode(const MigrationMode &) = default ;
          MigrationMode(MigrationMode &&) = default ;
          MigrationMode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MigrationMode() = default ;
          MigrationMode& operator=(const MigrationMode &) = default ;
          MigrationMode& operator=(MigrationMode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dataInitialization_ == nullptr
        && this->dataSynchronization_ == nullptr && this->fullDataCheck_ == nullptr && this->incDataCheck_ == nullptr && this->structureDataCheck_ == nullptr && this->structureInitialization_ == nullptr; };
          // dataInitialization Field Functions 
          bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
          void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
          inline bool getDataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
          inline MigrationMode& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


          // dataSynchronization Field Functions 
          bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
          void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
          inline bool getDataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
          inline MigrationMode& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


          // fullDataCheck Field Functions 
          bool hasFullDataCheck() const { return this->fullDataCheck_ != nullptr;};
          void deleteFullDataCheck() { this->fullDataCheck_ = nullptr;};
          inline bool getFullDataCheck() const { DARABONBA_PTR_GET_DEFAULT(fullDataCheck_, false) };
          inline MigrationMode& setFullDataCheck(bool fullDataCheck) { DARABONBA_PTR_SET_VALUE(fullDataCheck_, fullDataCheck) };


          // incDataCheck Field Functions 
          bool hasIncDataCheck() const { return this->incDataCheck_ != nullptr;};
          void deleteIncDataCheck() { this->incDataCheck_ = nullptr;};
          inline bool getIncDataCheck() const { DARABONBA_PTR_GET_DEFAULT(incDataCheck_, false) };
          inline MigrationMode& setIncDataCheck(bool incDataCheck) { DARABONBA_PTR_SET_VALUE(incDataCheck_, incDataCheck) };


          // structureDataCheck Field Functions 
          bool hasStructureDataCheck() const { return this->structureDataCheck_ != nullptr;};
          void deleteStructureDataCheck() { this->structureDataCheck_ = nullptr;};
          inline bool getStructureDataCheck() const { DARABONBA_PTR_GET_DEFAULT(structureDataCheck_, false) };
          inline MigrationMode& setStructureDataCheck(bool structureDataCheck) { DARABONBA_PTR_SET_VALUE(structureDataCheck_, structureDataCheck) };


          // structureInitialization Field Functions 
          bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
          void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
          inline bool getStructureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
          inline MigrationMode& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


        protected:
          // Indicates whether initial full data synchronization is performed. Valid values:
          // 
          // -  **true**
          // -  **false**
          shared_ptr<bool> dataInitialization_ {};
          // Indicates whether incremental data synchronization is performed. Valid values:
          // -  **true**
          // -  **false**
          shared_ptr<bool> dataSynchronization_ {};
          // Indicates whether full data verification is performed. Valid values:
          // -  **true**: yes
          // -  **false**: no
          shared_ptr<bool> fullDataCheck_ {};
          // Indicates whether incremental data verification is performed. Valid values:
          // -  **true**: yes
          // -  **false**: no
          shared_ptr<bool> incDataCheck_ {};
          shared_ptr<bool> structureDataCheck_ {};
          // Indicates whether initial schema synchronization is performed. Valid values:
          // -  **true**
          // -  **false**
          shared_ptr<bool> structureInitialization_ {};
        };

        class IncDataCheckStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IncDataCheckStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, IncDataCheckStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          IncDataCheckStatus() = default ;
          IncDataCheckStatus(const IncDataCheckStatus &) = default ;
          IncDataCheckStatus(IncDataCheckStatus &&) = default ;
          IncDataCheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IncDataCheckStatus() = default ;
          IncDataCheckStatus& operator=(const IncDataCheckStatus &) = default ;
          IncDataCheckStatus& operator=(IncDataCheckStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline IncDataCheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline IncDataCheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline IncDataCheckStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline IncDataCheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if the task failed.
          shared_ptr<string> errorMessage_ {};
          // The progress of the incremental data verification task. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The progress of the incremental data verification task.
          shared_ptr<string> progress_ {};
          // The state of the incremental data verification task. Valid values:
          // 
          // - **Catched**: The verification is delayed. 
          // - **NotStarted**: The verification is not started. 
          // - **Checking**: The verification is in progress. 
          // - **Failed**: The verification failed.
          shared_ptr<string> status_ {};
        };

        class FullDataCheckStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FullDataCheckStatus& obj) { 
            DARABONBA_PTR_TO_JSON(CanSwitch, canSwitch_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, FullDataCheckStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(CanSwitch, canSwitch_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          FullDataCheckStatus() = default ;
          FullDataCheckStatus(const FullDataCheckStatus &) = default ;
          FullDataCheckStatus(FullDataCheckStatus &&) = default ;
          FullDataCheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FullDataCheckStatus() = default ;
          FullDataCheckStatus& operator=(const FullDataCheckStatus &) = default ;
          FullDataCheckStatus& operator=(FullDataCheckStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->canSwitch_ == nullptr
        && this->errorMessage_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // canSwitch Field Functions 
          bool hasCanSwitch() const { return this->canSwitch_ != nullptr;};
          void deleteCanSwitch() { this->canSwitch_ = nullptr;};
          inline bool getCanSwitch() const { DARABONBA_PTR_GET_DEFAULT(canSwitch_, false) };
          inline FullDataCheckStatus& setCanSwitch(bool canSwitch) { DARABONBA_PTR_SET_VALUE(canSwitch_, canSwitch) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline FullDataCheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline FullDataCheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline FullDataCheckStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline FullDataCheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          shared_ptr<bool> canSwitch_ {};
          // The error message returned if the task failed.
          shared_ptr<string> errorMessage_ {};
          // The progress of the full data verification task. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The progress of the full data verification task.
          shared_ptr<string> progress_ {};
          // The state of the full data verification task. Valid values:
          // 
          // - **NotStarted**: The verification is not started. 
          // - **Checking**: The verification is in progress. 
          // - **Failed**: The verification failed. 
          // - **Finished**: The verification is complete.
          shared_ptr<string> status_ {};
        };

        class ErrorDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ErrorDetails& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(HelpUrl, helpUrl_);
          };
          friend void from_json(const Darabonba::Json& j, ErrorDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(HelpUrl, helpUrl_);
          };
          ErrorDetails() = default ;
          ErrorDetails(const ErrorDetails &) = default ;
          ErrorDetails(ErrorDetails &&) = default ;
          ErrorDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ErrorDetails() = default ;
          ErrorDetails& operator=(const ErrorDetails &) = default ;
          ErrorDetails& operator=(ErrorDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->helpUrl_ == nullptr; };
          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline ErrorDetails& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // helpUrl Field Functions 
          bool hasHelpUrl() const { return this->helpUrl_ != nullptr;};
          void deleteHelpUrl() { this->helpUrl_ = nullptr;};
          inline string getHelpUrl() const { DARABONBA_PTR_GET_DEFAULT(helpUrl_, "") };
          inline ErrorDetails& setHelpUrl(string helpUrl) { DARABONBA_PTR_SET_VALUE(helpUrl_, helpUrl) };


        protected:
          // The error code returned.
          shared_ptr<string> errorCode_ {};
          // The URL of the documentation.
          shared_ptr<string> helpUrl_ {};
        };

        class DestinationEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DestinationEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_TO_JSON(EngineName, engineName_);
            DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(Ip, ip_);
            DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
            DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(Ip, ip_);
            DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_FROM_JSON(UserName, userName_);
          };
          DestinationEndpoint() = default ;
          DestinationEndpoint(const DestinationEndpoint &) = default ;
          DestinationEndpoint(DestinationEndpoint &&) = default ;
          DestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DestinationEndpoint() = default ;
          DestinationEndpoint& operator=(const DestinationEndpoint &) = default ;
          DestinationEndpoint& operator=(DestinationEndpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr && this->oracleSID_ == nullptr
        && this->port_ == nullptr && this->region_ == nullptr && this->sslSolutionEnum_ == nullptr && this->userName_ == nullptr; };
          // databaseName Field Functions 
          bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
          void deleteDatabaseName() { this->databaseName_ = nullptr;};
          inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
          inline DestinationEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


          // engineName Field Functions 
          bool hasEngineName() const { return this->engineName_ != nullptr;};
          void deleteEngineName() { this->engineName_ = nullptr;};
          inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
          inline DestinationEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


          // instanceID Field Functions 
          bool hasInstanceID() const { return this->instanceID_ != nullptr;};
          void deleteInstanceID() { this->instanceID_ = nullptr;};
          inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
          inline DestinationEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline DestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
          inline DestinationEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


          // oracleSID Field Functions 
          bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
          void deleteOracleSID() { this->oracleSID_ = nullptr;};
          inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
          inline DestinationEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
          inline DestinationEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline DestinationEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // sslSolutionEnum Field Functions 
          bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
          void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
          inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
          inline DestinationEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline DestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // The name of the database that contains the synchronized objects in the destination instance.
          shared_ptr<string> databaseName_ {};
          // The database engine of the destination instance.
          shared_ptr<string> engineName_ {};
          // The ID of the destination instance.
          shared_ptr<string> instanceID_ {};
          // The type of the destination instance.
          shared_ptr<string> instanceType_ {};
          // The endpoint of the destination instance.
          shared_ptr<string> ip_ {};
          // The SID of the Oracle database. 
          // 
          // > This parameter is returned only if the returned value of **EngineName** of the destination instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
          shared_ptr<string> oracleSID_ {};
          // The port number of the destination instance.
          shared_ptr<string> port_ {};
          // The ID of the region in which the destination instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
          shared_ptr<string> region_ {};
          // Indicates whether SSL encryption is enabled. Valid values:
          // 
          // - **DISABLE**: SSL encryption is disabled. 
          // - **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded. 
          // - **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection with an AWS MongoDB Altas database. 
          // - **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection with a Kafka cluster.
          shared_ptr<string> sslSolutionEnum_ {};
          // The database account of the destination instance.
          shared_ptr<string> userName_ {};
        };

        class DataSynchronizationStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSynchronizationStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, DataSynchronizationStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          DataSynchronizationStatus() = default ;
          DataSynchronizationStatus(const DataSynchronizationStatus &) = default ;
          DataSynchronizationStatus(DataSynchronizationStatus &&) = default ;
          DataSynchronizationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataSynchronizationStatus() = default ;
          DataSynchronizationStatus& operator=(const DataSynchronizationStatus &) = default ;
          DataSynchronizationStatus& operator=(DataSynchronizationStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline DataSynchronizationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // needUpgrade Field Functions 
          bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
          void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
          inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
          inline DataSynchronizationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline DataSynchronizationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline DataSynchronizationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DataSynchronizationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if incremental data synchronization failed.
          shared_ptr<string> errorMessage_ {};
          // Indicates whether the instance needs to be upgraded. Valid values:
          // 
          // - **true**
          // - **false**
          // 
          // > To upgrade a DTS instance, call the [TransferInstanceClass](https://help.aliyun.com/document_detail/281093.html) operation.
          shared_ptr<bool> needUpgrade_ {};
          // The progress of incremental data synchronization. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The number of entries that have been migrated or synchronized during incremental data migration or synchronization.
          shared_ptr<string> progress_ {};
          // The state of incremental data synchronization.
          shared_ptr<string> status_ {};
        };

        class DataInitializationStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataInitializationStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, DataInitializationStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          DataInitializationStatus() = default ;
          DataInitializationStatus(const DataInitializationStatus &) = default ;
          DataInitializationStatus(DataInitializationStatus &&) = default ;
          DataInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataInitializationStatus() = default ;
          DataInitializationStatus& operator=(const DataInitializationStatus &) = default ;
          DataInitializationStatus& operator=(DataInitializationStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline DataInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline DataInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline DataInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DataInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if initial full data synchronization failed.
          shared_ptr<string> errorMessage_ {};
          // The progress of initial full data synchronization. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The number of entries that have been synchronized during initial full data synchronization.
          shared_ptr<string> progress_ {};
          // The state of initial full data synchronization. Valid values:
          // 
          // - **NotStarted**: The task is not started. 
          // - **Migrating**: The task is in progress. 
          // - **Failed**: The task failed. 
          // - **Finished**: The task is complete.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->checkpoint_ == nullptr
        && this->cpuUsage_ == nullptr && this->createTime_ == nullptr && this->dataInitializationStatus_ == nullptr && this->dataSynchronizationStatus_ == nullptr && this->dbObject_ == nullptr
        && this->dedicatedClusterId_ == nullptr && this->delay_ == nullptr && this->destinationEndpoint_ == nullptr && this->dtsInstanceID_ == nullptr && this->dtsJobClass_ == nullptr
        && this->dtsJobDirection_ == nullptr && this->dtsJobId_ == nullptr && this->dtsJobName_ == nullptr && this->duUsage_ == nullptr && this->errorDetails_ == nullptr
        && this->errorMessage_ == nullptr && this->etlSafeCheckpoint_ == nullptr && this->expireTime_ == nullptr && this->fullDataCheckStatus_ == nullptr && this->incDataCheckStatus_ == nullptr
        && this->maxDu_ == nullptr && this->memUsage_ == nullptr && this->migrationMode_ == nullptr && this->minDu_ == nullptr && this->payType_ == nullptr
        && this->performance_ == nullptr && this->precheckStatus_ == nullptr && this->reserved_ == nullptr && this->sourceEndpoint_ == nullptr && this->status_ == nullptr
        && this->structureDataCheckStatus_ == nullptr && this->structureInitializationStatus_ == nullptr; };
        // checkpoint Field Functions 
        bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
        void deleteCheckpoint() { this->checkpoint_ = nullptr;};
        inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
        inline ReverseJob& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


        // cpuUsage Field Functions 
        bool hasCpuUsage() const { return this->cpuUsage_ != nullptr;};
        void deleteCpuUsage() { this->cpuUsage_ = nullptr;};
        inline string getCpuUsage() const { DARABONBA_PTR_GET_DEFAULT(cpuUsage_, "") };
        inline ReverseJob& setCpuUsage(string cpuUsage) { DARABONBA_PTR_SET_VALUE(cpuUsage_, cpuUsage) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ReverseJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataInitializationStatus Field Functions 
        bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
        void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
        inline const ReverseJob::DataInitializationStatus & getDataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, ReverseJob::DataInitializationStatus) };
        inline ReverseJob::DataInitializationStatus getDataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, ReverseJob::DataInitializationStatus) };
        inline ReverseJob& setDataInitializationStatus(const ReverseJob::DataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
        inline ReverseJob& setDataInitializationStatus(ReverseJob::DataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


        // dataSynchronizationStatus Field Functions 
        bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
        void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
        inline const ReverseJob::DataSynchronizationStatus & getDataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, ReverseJob::DataSynchronizationStatus) };
        inline ReverseJob::DataSynchronizationStatus getDataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, ReverseJob::DataSynchronizationStatus) };
        inline ReverseJob& setDataSynchronizationStatus(const ReverseJob::DataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
        inline ReverseJob& setDataSynchronizationStatus(ReverseJob::DataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


        // dbObject Field Functions 
        bool hasDbObject() const { return this->dbObject_ != nullptr;};
        void deleteDbObject() { this->dbObject_ = nullptr;};
        inline string getDbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
        inline ReverseJob& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


        // dedicatedClusterId Field Functions 
        bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
        void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
        inline string getDedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
        inline ReverseJob& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


        // delay Field Functions 
        bool hasDelay() const { return this->delay_ != nullptr;};
        void deleteDelay() { this->delay_ = nullptr;};
        inline int64_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
        inline ReverseJob& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


        // destinationEndpoint Field Functions 
        bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
        void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
        inline const ReverseJob::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, ReverseJob::DestinationEndpoint) };
        inline ReverseJob::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, ReverseJob::DestinationEndpoint) };
        inline ReverseJob& setDestinationEndpoint(const ReverseJob::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
        inline ReverseJob& setDestinationEndpoint(ReverseJob::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


        // dtsInstanceID Field Functions 
        bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
        void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
        inline string getDtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
        inline ReverseJob& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


        // dtsJobClass Field Functions 
        bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
        void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
        inline string getDtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
        inline ReverseJob& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


        // dtsJobDirection Field Functions 
        bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
        void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
        inline string getDtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
        inline ReverseJob& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


        // dtsJobId Field Functions 
        bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
        void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
        inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
        inline ReverseJob& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


        // dtsJobName Field Functions 
        bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
        void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
        inline string getDtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
        inline ReverseJob& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


        // duUsage Field Functions 
        bool hasDuUsage() const { return this->duUsage_ != nullptr;};
        void deleteDuUsage() { this->duUsage_ = nullptr;};
        inline int64_t getDuUsage() const { DARABONBA_PTR_GET_DEFAULT(duUsage_, 0L) };
        inline ReverseJob& setDuUsage(int64_t duUsage) { DARABONBA_PTR_SET_VALUE(duUsage_, duUsage) };


        // errorDetails Field Functions 
        bool hasErrorDetails() const { return this->errorDetails_ != nullptr;};
        void deleteErrorDetails() { this->errorDetails_ = nullptr;};
        inline const vector<ReverseJob::ErrorDetails> & getErrorDetails() const { DARABONBA_PTR_GET_CONST(errorDetails_, vector<ReverseJob::ErrorDetails>) };
        inline vector<ReverseJob::ErrorDetails> getErrorDetails() { DARABONBA_PTR_GET(errorDetails_, vector<ReverseJob::ErrorDetails>) };
        inline ReverseJob& setErrorDetails(const vector<ReverseJob::ErrorDetails> & errorDetails) { DARABONBA_PTR_SET_VALUE(errorDetails_, errorDetails) };
        inline ReverseJob& setErrorDetails(vector<ReverseJob::ErrorDetails> && errorDetails) { DARABONBA_PTR_SET_RVALUE(errorDetails_, errorDetails) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline ReverseJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // etlSafeCheckpoint Field Functions 
        bool hasEtlSafeCheckpoint() const { return this->etlSafeCheckpoint_ != nullptr;};
        void deleteEtlSafeCheckpoint() { this->etlSafeCheckpoint_ = nullptr;};
        inline string getEtlSafeCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(etlSafeCheckpoint_, "") };
        inline ReverseJob& setEtlSafeCheckpoint(string etlSafeCheckpoint) { DARABONBA_PTR_SET_VALUE(etlSafeCheckpoint_, etlSafeCheckpoint) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline ReverseJob& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // fullDataCheckStatus Field Functions 
        bool hasFullDataCheckStatus() const { return this->fullDataCheckStatus_ != nullptr;};
        void deleteFullDataCheckStatus() { this->fullDataCheckStatus_ = nullptr;};
        inline const ReverseJob::FullDataCheckStatus & getFullDataCheckStatus() const { DARABONBA_PTR_GET_CONST(fullDataCheckStatus_, ReverseJob::FullDataCheckStatus) };
        inline ReverseJob::FullDataCheckStatus getFullDataCheckStatus() { DARABONBA_PTR_GET(fullDataCheckStatus_, ReverseJob::FullDataCheckStatus) };
        inline ReverseJob& setFullDataCheckStatus(const ReverseJob::FullDataCheckStatus & fullDataCheckStatus) { DARABONBA_PTR_SET_VALUE(fullDataCheckStatus_, fullDataCheckStatus) };
        inline ReverseJob& setFullDataCheckStatus(ReverseJob::FullDataCheckStatus && fullDataCheckStatus) { DARABONBA_PTR_SET_RVALUE(fullDataCheckStatus_, fullDataCheckStatus) };


        // incDataCheckStatus Field Functions 
        bool hasIncDataCheckStatus() const { return this->incDataCheckStatus_ != nullptr;};
        void deleteIncDataCheckStatus() { this->incDataCheckStatus_ = nullptr;};
        inline const ReverseJob::IncDataCheckStatus & getIncDataCheckStatus() const { DARABONBA_PTR_GET_CONST(incDataCheckStatus_, ReverseJob::IncDataCheckStatus) };
        inline ReverseJob::IncDataCheckStatus getIncDataCheckStatus() { DARABONBA_PTR_GET(incDataCheckStatus_, ReverseJob::IncDataCheckStatus) };
        inline ReverseJob& setIncDataCheckStatus(const ReverseJob::IncDataCheckStatus & incDataCheckStatus) { DARABONBA_PTR_SET_VALUE(incDataCheckStatus_, incDataCheckStatus) };
        inline ReverseJob& setIncDataCheckStatus(ReverseJob::IncDataCheckStatus && incDataCheckStatus) { DARABONBA_PTR_SET_RVALUE(incDataCheckStatus_, incDataCheckStatus) };


        // maxDu Field Functions 
        bool hasMaxDu() const { return this->maxDu_ != nullptr;};
        void deleteMaxDu() { this->maxDu_ = nullptr;};
        inline double getMaxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0.0) };
        inline ReverseJob& setMaxDu(double maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


        // memUsage Field Functions 
        bool hasMemUsage() const { return this->memUsage_ != nullptr;};
        void deleteMemUsage() { this->memUsage_ = nullptr;};
        inline string getMemUsage() const { DARABONBA_PTR_GET_DEFAULT(memUsage_, "") };
        inline ReverseJob& setMemUsage(string memUsage) { DARABONBA_PTR_SET_VALUE(memUsage_, memUsage) };


        // migrationMode Field Functions 
        bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
        void deleteMigrationMode() { this->migrationMode_ = nullptr;};
        inline const ReverseJob::MigrationMode & getMigrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, ReverseJob::MigrationMode) };
        inline ReverseJob::MigrationMode getMigrationMode() { DARABONBA_PTR_GET(migrationMode_, ReverseJob::MigrationMode) };
        inline ReverseJob& setMigrationMode(const ReverseJob::MigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
        inline ReverseJob& setMigrationMode(ReverseJob::MigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


        // minDu Field Functions 
        bool hasMinDu() const { return this->minDu_ != nullptr;};
        void deleteMinDu() { this->minDu_ = nullptr;};
        inline double getMinDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0.0) };
        inline ReverseJob& setMinDu(double minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline ReverseJob& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // performance Field Functions 
        bool hasPerformance() const { return this->performance_ != nullptr;};
        void deletePerformance() { this->performance_ = nullptr;};
        inline const ReverseJob::Performance & getPerformance() const { DARABONBA_PTR_GET_CONST(performance_, ReverseJob::Performance) };
        inline ReverseJob::Performance getPerformance() { DARABONBA_PTR_GET(performance_, ReverseJob::Performance) };
        inline ReverseJob& setPerformance(const ReverseJob::Performance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
        inline ReverseJob& setPerformance(ReverseJob::Performance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


        // precheckStatus Field Functions 
        bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
        void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
        inline const ReverseJob::PrecheckStatus & getPrecheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, ReverseJob::PrecheckStatus) };
        inline ReverseJob::PrecheckStatus getPrecheckStatus() { DARABONBA_PTR_GET(precheckStatus_, ReverseJob::PrecheckStatus) };
        inline ReverseJob& setPrecheckStatus(const ReverseJob::PrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
        inline ReverseJob& setPrecheckStatus(ReverseJob::PrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline string getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
        inline ReverseJob& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // sourceEndpoint Field Functions 
        bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
        void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
        inline const ReverseJob::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, ReverseJob::SourceEndpoint) };
        inline ReverseJob::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, ReverseJob::SourceEndpoint) };
        inline ReverseJob& setSourceEndpoint(const ReverseJob::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
        inline ReverseJob& setSourceEndpoint(ReverseJob::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ReverseJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // structureDataCheckStatus Field Functions 
        bool hasStructureDataCheckStatus() const { return this->structureDataCheckStatus_ != nullptr;};
        void deleteStructureDataCheckStatus() { this->structureDataCheckStatus_ = nullptr;};
        inline const ReverseJob::StructureDataCheckStatus & getStructureDataCheckStatus() const { DARABONBA_PTR_GET_CONST(structureDataCheckStatus_, ReverseJob::StructureDataCheckStatus) };
        inline ReverseJob::StructureDataCheckStatus getStructureDataCheckStatus() { DARABONBA_PTR_GET(structureDataCheckStatus_, ReverseJob::StructureDataCheckStatus) };
        inline ReverseJob& setStructureDataCheckStatus(const ReverseJob::StructureDataCheckStatus & structureDataCheckStatus) { DARABONBA_PTR_SET_VALUE(structureDataCheckStatus_, structureDataCheckStatus) };
        inline ReverseJob& setStructureDataCheckStatus(ReverseJob::StructureDataCheckStatus && structureDataCheckStatus) { DARABONBA_PTR_SET_RVALUE(structureDataCheckStatus_, structureDataCheckStatus) };


        // structureInitializationStatus Field Functions 
        bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
        void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
        inline const ReverseJob::StructureInitializationStatus & getStructureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, ReverseJob::StructureInitializationStatus) };
        inline ReverseJob::StructureInitializationStatus getStructureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, ReverseJob::StructureInitializationStatus) };
        inline ReverseJob& setStructureInitializationStatus(const ReverseJob::StructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
        inline ReverseJob& setStructureInitializationStatus(ReverseJob::StructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


      protected:
        // The start offset of incremental data synchronization. This value is a UNIX timestamp representing the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<string> checkpoint_ {};
        // The CPU utilization of the instance. Unit: percentage.
        shared_ptr<string> cpuUsage_ {};
        // The time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The state of initial full data synchronization.
        shared_ptr<ReverseJob::DataInitializationStatus> dataInitializationStatus_ {};
        // The state of incremental data synchronization.
        shared_ptr<ReverseJob::DataSynchronizationStatus> dataSynchronizationStatus_ {};
        // The schema of the objects that you want to synchronize. The value is a JSON string and can contain regular expressions. For more information, see Objects of DTS tasks.
        shared_ptr<string> dbObject_ {};
        // The ID of the DTS dedicated cluster on which a DTS task runs.
        shared_ptr<string> dedicatedClusterId_ {};
        // The latency of incremental data synchronization. Unit: seconds.
        shared_ptr<int64_t> delay_ {};
        // The connection settings of the destination instance.
        shared_ptr<ReverseJob::DestinationEndpoint> destinationEndpoint_ {};
        // The ID of the data synchronization instance.
        shared_ptr<string> dtsInstanceID_ {};
        // The instance class. 
        // 
        // > For more information about the test performance of each instance class, see [Specifications of data synchronization instances](https://help.aliyun.com/document_detail/26605.html).
        shared_ptr<string> dtsJobClass_ {};
        // The synchronization direction. **Reverse** is returned.
        shared_ptr<string> dtsJobDirection_ {};
        // The ID of the synchronization task.
        shared_ptr<string> dtsJobId_ {};
        // The name of the data synchronization task.
        shared_ptr<string> dtsJobName_ {};
        // The number of DUs that have been used.
        shared_ptr<int64_t> duUsage_ {};
        // The error message returned.
        shared_ptr<vector<ReverseJob::ErrorDetails>> errorDetails_ {};
        // The error message returned if the task failed.
        shared_ptr<string> errorMessage_ {};
        // The checkpoint of the ETL task.
        shared_ptr<string> etlSafeCheckpoint_ {};
        // The time when the instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC. 
        // 
        // > This parameter is returned only if the returned value of **PayType** is **PrePaid**.
        shared_ptr<string> expireTime_ {};
        // The state information about the full data verification task.
        shared_ptr<ReverseJob::FullDataCheckStatus> fullDataCheckStatus_ {};
        // The state information about the incremental data verification task.
        shared_ptr<ReverseJob::IncDataCheckStatus> incDataCheckStatus_ {};
        // Upper limit of DU.
        // 
        // > Only supported by Serverless instances.
        shared_ptr<double> maxDu_ {};
        // The memory that has been used. Unit: MB.
        shared_ptr<string> memUsage_ {};
        // The initial synchronization types.
        shared_ptr<ReverseJob::MigrationMode> migrationMode_ {};
        // Lower limit of DU.
        // 
        // > Only supported by Serverless instances.
        shared_ptr<double> minDu_ {};
        // The billing method of the DTS instance. Valid values:
        // 
        // - **PrePaid**: subscription
        // - **PostPaid**: pay-as-you-go
        shared_ptr<string> payType_ {};
        // The performance of the data synchronization instance.
        shared_ptr<ReverseJob::Performance> performance_ {};
        // The precheck state.
        shared_ptr<ReverseJob::PrecheckStatus> precheckStatus_ {};
        // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, for example, whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
        shared_ptr<string> reserved_ {};
        // The connection settings of the source instance.
        shared_ptr<ReverseJob::SourceEndpoint> sourceEndpoint_ {};
        // The state of the DTS instance. For more information about the valid values, see the description of the request parameter **Status**.
        shared_ptr<string> status_ {};
        shared_ptr<ReverseJob::StructureDataCheckStatus> structureDataCheckStatus_ {};
        // The state of initial schema synchronization.
        shared_ptr<ReverseJob::StructureInitializationStatus> structureInitializationStatus_ {};
      };

      class RetryState : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RetryState& obj) { 
          DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(MaxRetryTime, maxRetryTime_);
          DARABONBA_PTR_TO_JSON(MigrationErrCode, migrationErrCode_);
          DARABONBA_PTR_TO_JSON(MigrationErrHelpDocId, migrationErrHelpDocId_);
          DARABONBA_PTR_TO_JSON(MigrationErrHelpDocKey, migrationErrHelpDocKey_);
          DARABONBA_PTR_TO_JSON(MigrationErrMsg, migrationErrMsg_);
          DARABONBA_PTR_TO_JSON(MigrationErrType, migrationErrType_);
          DARABONBA_PTR_TO_JSON(MigrationErrWorkaround, migrationErrWorkaround_);
          DARABONBA_PTR_TO_JSON(Module, module_);
          DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
          DARABONBA_PTR_TO_JSON(RetryTarget, retryTarget_);
          DARABONBA_PTR_TO_JSON(RetryTime, retryTime_);
          DARABONBA_PTR_TO_JSON(Retrying, retrying_);
        };
        friend void from_json(const Darabonba::Json& j, RetryState& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(MaxRetryTime, maxRetryTime_);
          DARABONBA_PTR_FROM_JSON(MigrationErrCode, migrationErrCode_);
          DARABONBA_PTR_FROM_JSON(MigrationErrHelpDocId, migrationErrHelpDocId_);
          DARABONBA_PTR_FROM_JSON(MigrationErrHelpDocKey, migrationErrHelpDocKey_);
          DARABONBA_PTR_FROM_JSON(MigrationErrMsg, migrationErrMsg_);
          DARABONBA_PTR_FROM_JSON(MigrationErrType, migrationErrType_);
          DARABONBA_PTR_FROM_JSON(MigrationErrWorkaround, migrationErrWorkaround_);
          DARABONBA_PTR_FROM_JSON(Module, module_);
          DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
          DARABONBA_PTR_FROM_JSON(RetryTarget, retryTarget_);
          DARABONBA_PTR_FROM_JSON(RetryTime, retryTime_);
          DARABONBA_PTR_FROM_JSON(Retrying, retrying_);
        };
        RetryState() = default ;
        RetryState(const RetryState &) = default ;
        RetryState(RetryState &&) = default ;
        RetryState(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RetryState() = default ;
        RetryState& operator=(const RetryState &) = default ;
        RetryState& operator=(RetryState &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errMessage_ == nullptr
        && this->jobId_ == nullptr && this->maxRetryTime_ == nullptr && this->migrationErrCode_ == nullptr && this->migrationErrHelpDocId_ == nullptr && this->migrationErrHelpDocKey_ == nullptr
        && this->migrationErrMsg_ == nullptr && this->migrationErrType_ == nullptr && this->migrationErrWorkaround_ == nullptr && this->module_ == nullptr && this->retryCount_ == nullptr
        && this->retryTarget_ == nullptr && this->retryTime_ == nullptr && this->retrying_ == nullptr; };
        // errMessage Field Functions 
        bool hasErrMessage() const { return this->errMessage_ != nullptr;};
        void deleteErrMessage() { this->errMessage_ = nullptr;};
        inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
        inline RetryState& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline RetryState& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // maxRetryTime Field Functions 
        bool hasMaxRetryTime() const { return this->maxRetryTime_ != nullptr;};
        void deleteMaxRetryTime() { this->maxRetryTime_ = nullptr;};
        inline int32_t getMaxRetryTime() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTime_, 0) };
        inline RetryState& setMaxRetryTime(int32_t maxRetryTime) { DARABONBA_PTR_SET_VALUE(maxRetryTime_, maxRetryTime) };


        // migrationErrCode Field Functions 
        bool hasMigrationErrCode() const { return this->migrationErrCode_ != nullptr;};
        void deleteMigrationErrCode() { this->migrationErrCode_ = nullptr;};
        inline string getMigrationErrCode() const { DARABONBA_PTR_GET_DEFAULT(migrationErrCode_, "") };
        inline RetryState& setMigrationErrCode(string migrationErrCode) { DARABONBA_PTR_SET_VALUE(migrationErrCode_, migrationErrCode) };


        // migrationErrHelpDocId Field Functions 
        bool hasMigrationErrHelpDocId() const { return this->migrationErrHelpDocId_ != nullptr;};
        void deleteMigrationErrHelpDocId() { this->migrationErrHelpDocId_ = nullptr;};
        inline string getMigrationErrHelpDocId() const { DARABONBA_PTR_GET_DEFAULT(migrationErrHelpDocId_, "") };
        inline RetryState& setMigrationErrHelpDocId(string migrationErrHelpDocId) { DARABONBA_PTR_SET_VALUE(migrationErrHelpDocId_, migrationErrHelpDocId) };


        // migrationErrHelpDocKey Field Functions 
        bool hasMigrationErrHelpDocKey() const { return this->migrationErrHelpDocKey_ != nullptr;};
        void deleteMigrationErrHelpDocKey() { this->migrationErrHelpDocKey_ = nullptr;};
        inline string getMigrationErrHelpDocKey() const { DARABONBA_PTR_GET_DEFAULT(migrationErrHelpDocKey_, "") };
        inline RetryState& setMigrationErrHelpDocKey(string migrationErrHelpDocKey) { DARABONBA_PTR_SET_VALUE(migrationErrHelpDocKey_, migrationErrHelpDocKey) };


        // migrationErrMsg Field Functions 
        bool hasMigrationErrMsg() const { return this->migrationErrMsg_ != nullptr;};
        void deleteMigrationErrMsg() { this->migrationErrMsg_ = nullptr;};
        inline string getMigrationErrMsg() const { DARABONBA_PTR_GET_DEFAULT(migrationErrMsg_, "") };
        inline RetryState& setMigrationErrMsg(string migrationErrMsg) { DARABONBA_PTR_SET_VALUE(migrationErrMsg_, migrationErrMsg) };


        // migrationErrType Field Functions 
        bool hasMigrationErrType() const { return this->migrationErrType_ != nullptr;};
        void deleteMigrationErrType() { this->migrationErrType_ = nullptr;};
        inline string getMigrationErrType() const { DARABONBA_PTR_GET_DEFAULT(migrationErrType_, "") };
        inline RetryState& setMigrationErrType(string migrationErrType) { DARABONBA_PTR_SET_VALUE(migrationErrType_, migrationErrType) };


        // migrationErrWorkaround Field Functions 
        bool hasMigrationErrWorkaround() const { return this->migrationErrWorkaround_ != nullptr;};
        void deleteMigrationErrWorkaround() { this->migrationErrWorkaround_ = nullptr;};
        inline string getMigrationErrWorkaround() const { DARABONBA_PTR_GET_DEFAULT(migrationErrWorkaround_, "") };
        inline RetryState& setMigrationErrWorkaround(string migrationErrWorkaround) { DARABONBA_PTR_SET_VALUE(migrationErrWorkaround_, migrationErrWorkaround) };


        // module Field Functions 
        bool hasModule() const { return this->module_ != nullptr;};
        void deleteModule() { this->module_ = nullptr;};
        inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
        inline RetryState& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


        // retryCount Field Functions 
        bool hasRetryCount() const { return this->retryCount_ != nullptr;};
        void deleteRetryCount() { this->retryCount_ = nullptr;};
        inline int32_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
        inline RetryState& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


        // retryTarget Field Functions 
        bool hasRetryTarget() const { return this->retryTarget_ != nullptr;};
        void deleteRetryTarget() { this->retryTarget_ = nullptr;};
        inline string getRetryTarget() const { DARABONBA_PTR_GET_DEFAULT(retryTarget_, "") };
        inline RetryState& setRetryTarget(string retryTarget) { DARABONBA_PTR_SET_VALUE(retryTarget_, retryTarget) };


        // retryTime Field Functions 
        bool hasRetryTime() const { return this->retryTime_ != nullptr;};
        void deleteRetryTime() { this->retryTime_ = nullptr;};
        inline int32_t getRetryTime() const { DARABONBA_PTR_GET_DEFAULT(retryTime_, 0) };
        inline RetryState& setRetryTime(int32_t retryTime) { DARABONBA_PTR_SET_VALUE(retryTime_, retryTime) };


        // retrying Field Functions 
        bool hasRetrying() const { return this->retrying_ != nullptr;};
        void deleteRetrying() { this->retrying_ = nullptr;};
        inline bool getRetrying() const { DARABONBA_PTR_GET_DEFAULT(retrying_, false) };
        inline RetryState& setRetrying(bool retrying) { DARABONBA_PTR_SET_VALUE(retrying_, retrying) };


      protected:
        // The error message returned if these retries failed.
        shared_ptr<string> errMessage_ {};
        // The task ID.
        shared_ptr<string> jobId_ {};
        // The maximum duration of a retry. Unit: seconds.
        shared_ptr<int32_t> maxRetryTime_ {};
        // The error code.
        shared_ptr<string> migrationErrCode_ {};
        // The ID of the error code-related documentation.
        shared_ptr<string> migrationErrHelpDocId_ {};
        // The key of the error code-related documentation.
        shared_ptr<string> migrationErrHelpDocKey_ {};
        // The error message.
        shared_ptr<string> migrationErrMsg_ {};
        // The type of the error code.
        shared_ptr<string> migrationErrType_ {};
        // The solution to the error.
        shared_ptr<string> migrationErrWorkaround_ {};
        // The progress of the instance when DTS retries.
        shared_ptr<string> module_ {};
        // The number of retries that have been performed.
        shared_ptr<int32_t> retryCount_ {};
        // The object on which these retries are performed. Valid values:
        // 
        // - **srcDB**: the source database 
        // - **destDB**: the destination database 
        // - **inner_module**: an internal module of DTS
        shared_ptr<string> retryTarget_ {};
        // The time that has elapsed from the time when the first retry starts. Unit: seconds.
        shared_ptr<int32_t> retryTime_ {};
        // Indicates whether the task is being retried. Valid values:
        // 
        // - **true**
        // - **false**
        shared_ptr<bool> retrying_ {};
      };

      class PrecheckStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrecheckStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PrecheckStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PrecheckStatus() = default ;
        PrecheckStatus(const PrecheckStatus &) = default ;
        PrecheckStatus(PrecheckStatus &&) = default ;
        PrecheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrecheckStatus() = default ;
        PrecheckStatus& operator=(const PrecheckStatus &) = default ;
        PrecheckStatus& operator=(PrecheckStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Detail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Detail& obj) { 
            DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
            DARABONBA_PTR_TO_JSON(CheckItemDescription, checkItemDescription_);
            DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
            DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
            DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
          };
          friend void from_json(const Darabonba::Json& j, Detail& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
            DARABONBA_PTR_FROM_JSON(CheckItemDescription, checkItemDescription_);
            DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
            DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
            DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
          };
          Detail() = default ;
          Detail(const Detail &) = default ;
          Detail(Detail &&) = default ;
          Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Detail() = default ;
          Detail& operator=(const Detail &) = default ;
          Detail& operator=(Detail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checkItem_ == nullptr
        && this->checkItemDescription_ == nullptr && this->checkResult_ == nullptr && this->failedReason_ == nullptr && this->repairMethod_ == nullptr; };
          // checkItem Field Functions 
          bool hasCheckItem() const { return this->checkItem_ != nullptr;};
          void deleteCheckItem() { this->checkItem_ = nullptr;};
          inline string getCheckItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
          inline Detail& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


          // checkItemDescription Field Functions 
          bool hasCheckItemDescription() const { return this->checkItemDescription_ != nullptr;};
          void deleteCheckItemDescription() { this->checkItemDescription_ = nullptr;};
          inline string getCheckItemDescription() const { DARABONBA_PTR_GET_DEFAULT(checkItemDescription_, "") };
          inline Detail& setCheckItemDescription(string checkItemDescription) { DARABONBA_PTR_SET_VALUE(checkItemDescription_, checkItemDescription) };


          // checkResult Field Functions 
          bool hasCheckResult() const { return this->checkResult_ != nullptr;};
          void deleteCheckResult() { this->checkResult_ = nullptr;};
          inline string getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
          inline Detail& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


          // failedReason Field Functions 
          bool hasFailedReason() const { return this->failedReason_ != nullptr;};
          void deleteFailedReason() { this->failedReason_ = nullptr;};
          inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
          inline Detail& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


          // repairMethod Field Functions 
          bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
          void deleteRepairMethod() { this->repairMethod_ = nullptr;};
          inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
          inline Detail& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


        protected:
          // The name of the precheck item.
          shared_ptr<string> checkItem_ {};
          // The description of the precheck item.
          shared_ptr<string> checkItemDescription_ {};
          // The precheck result. Valid values:
          // 
          // *   **Success**
          // *   **Failed**
          shared_ptr<string> checkResult_ {};
          // The error message returned if the task failed to pass the precheck.
          // 
          // >  This parameter is returned only if the value of the **CheckResult** parameter is **Failed**.
          shared_ptr<string> failedReason_ {};
          // The method to fix the precheck failure.
          // 
          // >  This parameter is returned only if the value of the **CheckResult** parameter is **Failed**.
          shared_ptr<string> repairMethod_ {};
        };

        virtual bool empty() const override { return this->detail_ == nullptr
        && this->errorMessage_ == nullptr && this->percent_ == nullptr && this->status_ == nullptr; };
        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline const vector<PrecheckStatus::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<PrecheckStatus::Detail>) };
        inline vector<PrecheckStatus::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<PrecheckStatus::Detail>) };
        inline PrecheckStatus& setDetail(const vector<PrecheckStatus::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
        inline PrecheckStatus& setDetail(vector<PrecheckStatus::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline PrecheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline PrecheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PrecheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The result of each precheck item.
        shared_ptr<vector<PrecheckStatus::Detail>> detail_ {};
        // The cause of the precheck failure.
        shared_ptr<string> errorMessage_ {};
        // The precheck progress. This is expressed as a percentage.
        shared_ptr<string> percent_ {};
        // The precheck status. Valid values:
        // 
        // *   **NotStarted**
        // *   **Suspending**:
        // *   **Checking**
        // *   **Failed**
        // *   **Finished**
        shared_ptr<string> status_ {};
      };

      class Performance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Performance& obj) { 
          DARABONBA_PTR_TO_JSON(Flow, flow_);
          DARABONBA_PTR_TO_JSON(Rps, rps_);
        };
        friend void from_json(const Darabonba::Json& j, Performance& obj) { 
          DARABONBA_PTR_FROM_JSON(Flow, flow_);
          DARABONBA_PTR_FROM_JSON(Rps, rps_);
        };
        Performance() = default ;
        Performance(const Performance &) = default ;
        Performance(Performance &&) = default ;
        Performance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Performance() = default ;
        Performance& operator=(const Performance &) = default ;
        Performance& operator=(Performance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flow_ == nullptr
        && this->rps_ == nullptr; };
        // flow Field Functions 
        bool hasFlow() const { return this->flow_ != nullptr;};
        void deleteFlow() { this->flow_ = nullptr;};
        inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
        inline Performance& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


        // rps Field Functions 
        bool hasRps() const { return this->rps_ != nullptr;};
        void deleteRps() { this->rps_ = nullptr;};
        inline string getRps() const { DARABONBA_PTR_GET_DEFAULT(rps_, "") };
        inline Performance& setRps(string rps) { DARABONBA_PTR_SET_VALUE(rps_, rps) };


      protected:
        // The size of data that is migrated or synchronized per second. Unit: MB/s.
        shared_ptr<string> flow_ {};
        // The number of times that SQL statements are migrated or synchronized per second, including BEGIN, COMMIT, DML, and DDL statements. DML statements include INSERT, DELETE, and UPDATE.
        shared_ptr<string> rps_ {};
      };

      class MigrationMode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MigrationMode& obj) { 
          DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
          DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
          DARABONBA_PTR_TO_JSON(FullDataCheck, fullDataCheck_);
          DARABONBA_PTR_TO_JSON(IncDataCheck, incDataCheck_);
          DARABONBA_PTR_TO_JSON(StructureDataCheck, structureDataCheck_);
          DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
        };
        friend void from_json(const Darabonba::Json& j, MigrationMode& obj) { 
          DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
          DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
          DARABONBA_PTR_FROM_JSON(FullDataCheck, fullDataCheck_);
          DARABONBA_PTR_FROM_JSON(IncDataCheck, incDataCheck_);
          DARABONBA_PTR_FROM_JSON(StructureDataCheck, structureDataCheck_);
          DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
        };
        MigrationMode() = default ;
        MigrationMode(const MigrationMode &) = default ;
        MigrationMode(MigrationMode &&) = default ;
        MigrationMode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MigrationMode() = default ;
        MigrationMode& operator=(const MigrationMode &) = default ;
        MigrationMode& operator=(MigrationMode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataInitialization_ == nullptr
        && this->dataSynchronization_ == nullptr && this->fullDataCheck_ == nullptr && this->incDataCheck_ == nullptr && this->structureDataCheck_ == nullptr && this->structureInitialization_ == nullptr; };
        // dataInitialization Field Functions 
        bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
        void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
        inline bool getDataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
        inline MigrationMode& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


        // dataSynchronization Field Functions 
        bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
        void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
        inline bool getDataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
        inline MigrationMode& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


        // fullDataCheck Field Functions 
        bool hasFullDataCheck() const { return this->fullDataCheck_ != nullptr;};
        void deleteFullDataCheck() { this->fullDataCheck_ = nullptr;};
        inline bool getFullDataCheck() const { DARABONBA_PTR_GET_DEFAULT(fullDataCheck_, false) };
        inline MigrationMode& setFullDataCheck(bool fullDataCheck) { DARABONBA_PTR_SET_VALUE(fullDataCheck_, fullDataCheck) };


        // incDataCheck Field Functions 
        bool hasIncDataCheck() const { return this->incDataCheck_ != nullptr;};
        void deleteIncDataCheck() { this->incDataCheck_ = nullptr;};
        inline bool getIncDataCheck() const { DARABONBA_PTR_GET_DEFAULT(incDataCheck_, false) };
        inline MigrationMode& setIncDataCheck(bool incDataCheck) { DARABONBA_PTR_SET_VALUE(incDataCheck_, incDataCheck) };


        // structureDataCheck Field Functions 
        bool hasStructureDataCheck() const { return this->structureDataCheck_ != nullptr;};
        void deleteStructureDataCheck() { this->structureDataCheck_ = nullptr;};
        inline bool getStructureDataCheck() const { DARABONBA_PTR_GET_DEFAULT(structureDataCheck_, false) };
        inline MigrationMode& setStructureDataCheck(bool structureDataCheck) { DARABONBA_PTR_SET_VALUE(structureDataCheck_, structureDataCheck) };


        // structureInitialization Field Functions 
        bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
        void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
        inline bool getStructureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
        inline MigrationMode& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


      protected:
        // Indicates whether full data migration or synchronization is performed. Valid values:
        // 
        // *   **true**: yes
        // *   **false**: no
        shared_ptr<bool> dataInitialization_ {};
        // Indicates whether incremental data migration or synchronization is performed. Valid values:
        // 
        // *   **true**: yes
        // *   **false**: no
        shared_ptr<bool> dataSynchronization_ {};
        // Indicates whether full data verification is performed. Valid values:
        // -  **true**: yes
        // -  **false**: no
        shared_ptr<bool> fullDataCheck_ {};
        // Indicates whether incremental data verification is performed. Valid values:
        // -  **true**: yes
        // -  **false**: no
        shared_ptr<bool> incDataCheck_ {};
        shared_ptr<bool> structureDataCheck_ {};
        // Indicates whether schema migration or schema synchronization is performed. Valid values:
        // 
        // *   **true**: yes
        // *   **false**: no
        shared_ptr<bool> structureInitialization_ {};
      };

      class IncDataCheckStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IncDataCheckStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, IncDataCheckStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        IncDataCheckStatus() = default ;
        IncDataCheckStatus(const IncDataCheckStatus &) = default ;
        IncDataCheckStatus(IncDataCheckStatus &&) = default ;
        IncDataCheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IncDataCheckStatus() = default ;
        IncDataCheckStatus& operator=(const IncDataCheckStatus &) = default ;
        IncDataCheckStatus& operator=(IncDataCheckStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline IncDataCheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline IncDataCheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline IncDataCheckStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline IncDataCheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if the task failed.
        shared_ptr<string> errorMessage_ {};
        // The progress of the incremental data verification task. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The progress of the incremental data verification task.
        shared_ptr<string> progress_ {};
        // The state of the incremental data verification task. Valid values:
        // 
        // - **Catched**: The verification is delayed. 
        // - **NotStarted**: The verification is not started. 
        // - **Checking**: The verification is in progress. 
        // - **Failed**: The verification failed.
        shared_ptr<string> status_ {};
      };

      class FullDataCheckStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FullDataCheckStatus& obj) { 
          DARABONBA_PTR_TO_JSON(CanSwitch, canSwitch_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, FullDataCheckStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(CanSwitch, canSwitch_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        FullDataCheckStatus() = default ;
        FullDataCheckStatus(const FullDataCheckStatus &) = default ;
        FullDataCheckStatus(FullDataCheckStatus &&) = default ;
        FullDataCheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FullDataCheckStatus() = default ;
        FullDataCheckStatus& operator=(const FullDataCheckStatus &) = default ;
        FullDataCheckStatus& operator=(FullDataCheckStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->canSwitch_ == nullptr
        && this->errorMessage_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // canSwitch Field Functions 
        bool hasCanSwitch() const { return this->canSwitch_ != nullptr;};
        void deleteCanSwitch() { this->canSwitch_ = nullptr;};
        inline bool getCanSwitch() const { DARABONBA_PTR_GET_DEFAULT(canSwitch_, false) };
        inline FullDataCheckStatus& setCanSwitch(bool canSwitch) { DARABONBA_PTR_SET_VALUE(canSwitch_, canSwitch) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline FullDataCheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline FullDataCheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline FullDataCheckStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline FullDataCheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<bool> canSwitch_ {};
        // The error message returned if the task failed.
        shared_ptr<string> errorMessage_ {};
        // The progress of the full data verification task. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The progress of the full data verification task.
        shared_ptr<string> progress_ {};
        // The state of the full data verification task. Valid values:
        // 
        // - **NotStarted**: The verification is not started. 
        // - **Checking**: The verification is in progress. 
        // - **Failed**: The verification failed. 
        // - **Finished**: The verification is complete.
        shared_ptr<string> status_ {};
      };

      class ErrorDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorDetails& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(HelpUrl, helpUrl_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(HelpUrl, helpUrl_);
        };
        ErrorDetails() = default ;
        ErrorDetails(const ErrorDetails &) = default ;
        ErrorDetails(ErrorDetails &&) = default ;
        ErrorDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorDetails() = default ;
        ErrorDetails& operator=(const ErrorDetails &) = default ;
        ErrorDetails& operator=(ErrorDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->helpUrl_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline ErrorDetails& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // helpUrl Field Functions 
        bool hasHelpUrl() const { return this->helpUrl_ != nullptr;};
        void deleteHelpUrl() { this->helpUrl_ = nullptr;};
        inline string getHelpUrl() const { DARABONBA_PTR_GET_DEFAULT(helpUrl_, "") };
        inline ErrorDetails& setHelpUrl(string helpUrl) { DARABONBA_PTR_SET_VALUE(helpUrl_, helpUrl) };


      protected:
        // The error code returned.
        shared_ptr<string> errorCode_ {};
        // The URL of the documentation.
        shared_ptr<string> helpUrl_ {};
      };

      class DestinationEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DestinationEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(EngineName, engineName_);
          DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
          DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        DestinationEndpoint() = default ;
        DestinationEndpoint(const DestinationEndpoint &) = default ;
        DestinationEndpoint(DestinationEndpoint &&) = default ;
        DestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DestinationEndpoint() = default ;
        DestinationEndpoint& operator=(const DestinationEndpoint &) = default ;
        DestinationEndpoint& operator=(DestinationEndpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr && this->oracleSID_ == nullptr
        && this->port_ == nullptr && this->region_ == nullptr && this->sslSolutionEnum_ == nullptr && this->userName_ == nullptr; };
        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline DestinationEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // engineName Field Functions 
        bool hasEngineName() const { return this->engineName_ != nullptr;};
        void deleteEngineName() { this->engineName_ = nullptr;};
        inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
        inline DestinationEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


        // instanceID Field Functions 
        bool hasInstanceID() const { return this->instanceID_ != nullptr;};
        void deleteInstanceID() { this->instanceID_ = nullptr;};
        inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
        inline DestinationEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline DestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline DestinationEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // oracleSID Field Functions 
        bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
        void deleteOracleSID() { this->oracleSID_ = nullptr;};
        inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
        inline DestinationEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline DestinationEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline DestinationEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // sslSolutionEnum Field Functions 
        bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
        void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
        inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
        inline DestinationEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline DestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The name of the database to which the migration object in the destination instance belongs.
        shared_ptr<string> databaseName_ {};
        // The database type of the destination instance.
        shared_ptr<string> engineName_ {};
        // The ID of the destination instance.
        shared_ptr<string> instanceID_ {};
        // The type of the destination instance.
        shared_ptr<string> instanceType_ {};
        // The endpoint of the destination instance.
        shared_ptr<string> ip_ {};
        // The SID of the Oracle database.
        // 
        // >  This parameter is returned only if the **EngineName** parameter of the destination instance is set to **Oracle** and the Oracle database is deployed in a non-RAC architecture.
        shared_ptr<string> oracleSID_ {};
        // The database service port of the destination instance.
        shared_ptr<string> port_ {};
        // The ID of the region in which the destination instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
        shared_ptr<string> region_ {};
        // Indicates whether SSL encryption is enabled. Valid values:
        // 
        // *   **DISABLE**: SSL encryption is disabled.
        // *   **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled, and the CA certificate is uploaded.
        // *   **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection to an AWS MongoDB Altas database.
        // *   **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection to a Kafka cluster.
        shared_ptr<string> sslSolutionEnum_ {};
        // The database account of the destination instance.
        shared_ptr<string> userName_ {};
      };

      class DataSynchronizationStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSynchronizationStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataSynchronizationStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataSynchronizationStatus() = default ;
        DataSynchronizationStatus(const DataSynchronizationStatus &) = default ;
        DataSynchronizationStatus(DataSynchronizationStatus &&) = default ;
        DataSynchronizationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSynchronizationStatus() = default ;
        DataSynchronizationStatus& operator=(const DataSynchronizationStatus &) = default ;
        DataSynchronizationStatus& operator=(DataSynchronizationStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataSynchronizationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // needUpgrade Field Functions 
        bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
        void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
        inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
        inline DataSynchronizationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline DataSynchronizationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline DataSynchronizationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataSynchronizationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if incremental data migration or synchronization failed.
        shared_ptr<string> errorMessage_ {};
        // Indicates whether the instance needs to be upgraded. Valid values:
        // 
        // *   **true**: yes
        // *   **false**: no
        // 
        // >  To upgrade a DTS instance, call the [TransferInstanceClass](https://help.aliyun.com/document_detail/281093.html) operation.
        shared_ptr<bool> needUpgrade_ {};
        // The progress of incremental data migration or synchronization.
        shared_ptr<string> percent_ {};
        // The number of records that have been migrated or synchronized during incremental data migration or synchronization.
        shared_ptr<string> progress_ {};
        // The state of incremental data migration or synchronization. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Migrating**: The task is in progress.
        // *   **Failed**: The task failed.
        // *   **Finished**: The task is complete.
        // *   **Catched**: The task is not delayed.
        shared_ptr<string> status_ {};
      };

      class DataInitializationStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataInitializationStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataInitializationStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataInitializationStatus() = default ;
        DataInitializationStatus(const DataInitializationStatus &) = default ;
        DataInitializationStatus(DataInitializationStatus &&) = default ;
        DataInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataInitializationStatus() = default ;
        DataInitializationStatus& operator=(const DataInitializationStatus &) = default ;
        DataInitializationStatus& operator=(DataInitializationStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline DataInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline DataInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if full data synchronization failed.
        shared_ptr<string> errorMessage_ {};
        // The progress of full data synchronization. This is expressed as a percentage.
        shared_ptr<string> percent_ {};
        // The number of records that have been synchronized during full data synchronization.
        shared_ptr<string> progress_ {};
        // The state of full data synchronization. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Migrating**: The task is in progress.
        // *   **Failed**: The task failed.
        // *   **Finished**: The task is complete.
        shared_ptr<string> status_ {};
      };

      class DataEtlStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataEtlStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataEtlStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataEtlStatus() = default ;
        DataEtlStatus(const DataEtlStatus &) = default ;
        DataEtlStatus(DataEtlStatus &&) = default ;
        DataEtlStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataEtlStatus() = default ;
        DataEtlStatus& operator=(const DataEtlStatus &) = default ;
        DataEtlStatus& operator=(DataEtlStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataEtlStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline DataEtlStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline DataEtlStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataEtlStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if the task failed.
        shared_ptr<string> errorMessage_ {};
        // The progress of the ETL task.
        shared_ptr<string> percent_ {};
        // The number of records that have been processed by the ETL task.
        shared_ptr<string> progress_ {};
        // The state of the ETL task. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Migrating**: The task is in progress.
        // *   **Failed**: The task failed.
        // *   **Finished**: The task is complete.
        // *   **Catched**: The task is not delayed.
        shared_ptr<string> status_ {};
      };

      class DataCloudStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataCloudStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataCloudStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataCloudStatus() = default ;
        DataCloudStatus(const DataCloudStatus &) = default ;
        DataCloudStatus(DataCloudStatus &&) = default ;
        DataCloudStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataCloudStatus() = default ;
        DataCloudStatus& operator=(const DataCloudStatus &) = default ;
        DataCloudStatus& operator=(DataCloudStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataCloudStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // needUpgrade Field Functions 
        bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
        void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
        inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
        inline DataCloudStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline DataCloudStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline DataCloudStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataCloudStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if the task failed.
        shared_ptr<string> errorMessage_ {};
        // Indicates whether the instance needs to be upgraded. Valid values:
        // 
        // - **true** 
        // - **false**
        shared_ptr<bool> needUpgrade_ {};
        // The progress of the task. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The number of tables that have been migrated.
        shared_ptr<string> progress_ {};
        // The state of the task. For more information about the valid values, see the description of the request parameter **Status**.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->appName_ == nullptr
        && this->beginTimestamp_ == nullptr && this->checkpoint_ == nullptr && this->consumptionCheckpoint_ == nullptr && this->consumptionClient_ == nullptr && this->cpuUsage_ == nullptr
        && this->createTime_ == nullptr && this->dataCloudStatus_ == nullptr && this->dataEtlStatus_ == nullptr && this->dataInitializationStatus_ == nullptr && this->dataSynchronizationStatus_ == nullptr
        && this->dbObject_ == nullptr && this->dedicatedClusterId_ == nullptr && this->delay_ == nullptr && this->destinationEndpoint_ == nullptr && this->dtsBisLabel_ == nullptr
        && this->dtsInstanceID_ == nullptr && this->dtsJobClass_ == nullptr && this->dtsJobDirection_ == nullptr && this->dtsJobId_ == nullptr && this->dtsJobName_ == nullptr
        && this->duRealUsage_ == nullptr && this->duUsage_ == nullptr && this->endTimestamp_ == nullptr && this->errorDetails_ == nullptr && this->errorMessage_ == nullptr
        && this->etlSafeCheckpoint_ == nullptr && this->expireTime_ == nullptr && this->fullDataCheckStatus_ == nullptr && this->incDataCheckStatus_ == nullptr && this->jobType_ == nullptr
        && this->maxDu_ == nullptr && this->memUsage_ == nullptr && this->migrationErrCode_ == nullptr && this->migrationErrHelpDocId_ == nullptr && this->migrationErrHelpDocKey_ == nullptr
        && this->migrationErrMsg_ == nullptr && this->migrationErrType_ == nullptr && this->migrationErrWorkaround_ == nullptr && this->migrationMode_ == nullptr && this->minDu_ == nullptr
        && this->originType_ == nullptr && this->payType_ == nullptr && this->performance_ == nullptr && this->precheckStatus_ == nullptr && this->reserved_ == nullptr
        && this->resourceGroupDisplayName_ == nullptr && this->resourceGroupId_ == nullptr && this->retryState_ == nullptr && this->reverseJob_ == nullptr && this->sourceEndpoint_ == nullptr
        && this->status_ == nullptr && this->structureDataCheckStatus_ == nullptr && this->structureInitializationStatus_ == nullptr && this->tagList_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline DtsJobList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // beginTimestamp Field Functions 
      bool hasBeginTimestamp() const { return this->beginTimestamp_ != nullptr;};
      void deleteBeginTimestamp() { this->beginTimestamp_ = nullptr;};
      inline string getBeginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(beginTimestamp_, "") };
      inline DtsJobList& setBeginTimestamp(string beginTimestamp) { DARABONBA_PTR_SET_VALUE(beginTimestamp_, beginTimestamp) };


      // checkpoint Field Functions 
      bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
      void deleteCheckpoint() { this->checkpoint_ = nullptr;};
      inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
      inline DtsJobList& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


      // consumptionCheckpoint Field Functions 
      bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
      void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
      inline string getConsumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
      inline DtsJobList& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


      // consumptionClient Field Functions 
      bool hasConsumptionClient() const { return this->consumptionClient_ != nullptr;};
      void deleteConsumptionClient() { this->consumptionClient_ = nullptr;};
      inline string getConsumptionClient() const { DARABONBA_PTR_GET_DEFAULT(consumptionClient_, "") };
      inline DtsJobList& setConsumptionClient(string consumptionClient) { DARABONBA_PTR_SET_VALUE(consumptionClient_, consumptionClient) };


      // cpuUsage Field Functions 
      bool hasCpuUsage() const { return this->cpuUsage_ != nullptr;};
      void deleteCpuUsage() { this->cpuUsage_ = nullptr;};
      inline string getCpuUsage() const { DARABONBA_PTR_GET_DEFAULT(cpuUsage_, "") };
      inline DtsJobList& setCpuUsage(string cpuUsage) { DARABONBA_PTR_SET_VALUE(cpuUsage_, cpuUsage) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DtsJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataCloudStatus Field Functions 
      bool hasDataCloudStatus() const { return this->dataCloudStatus_ != nullptr;};
      void deleteDataCloudStatus() { this->dataCloudStatus_ = nullptr;};
      inline const DtsJobList::DataCloudStatus & getDataCloudStatus() const { DARABONBA_PTR_GET_CONST(dataCloudStatus_, DtsJobList::DataCloudStatus) };
      inline DtsJobList::DataCloudStatus getDataCloudStatus() { DARABONBA_PTR_GET(dataCloudStatus_, DtsJobList::DataCloudStatus) };
      inline DtsJobList& setDataCloudStatus(const DtsJobList::DataCloudStatus & dataCloudStatus) { DARABONBA_PTR_SET_VALUE(dataCloudStatus_, dataCloudStatus) };
      inline DtsJobList& setDataCloudStatus(DtsJobList::DataCloudStatus && dataCloudStatus) { DARABONBA_PTR_SET_RVALUE(dataCloudStatus_, dataCloudStatus) };


      // dataEtlStatus Field Functions 
      bool hasDataEtlStatus() const { return this->dataEtlStatus_ != nullptr;};
      void deleteDataEtlStatus() { this->dataEtlStatus_ = nullptr;};
      inline const DtsJobList::DataEtlStatus & getDataEtlStatus() const { DARABONBA_PTR_GET_CONST(dataEtlStatus_, DtsJobList::DataEtlStatus) };
      inline DtsJobList::DataEtlStatus getDataEtlStatus() { DARABONBA_PTR_GET(dataEtlStatus_, DtsJobList::DataEtlStatus) };
      inline DtsJobList& setDataEtlStatus(const DtsJobList::DataEtlStatus & dataEtlStatus) { DARABONBA_PTR_SET_VALUE(dataEtlStatus_, dataEtlStatus) };
      inline DtsJobList& setDataEtlStatus(DtsJobList::DataEtlStatus && dataEtlStatus) { DARABONBA_PTR_SET_RVALUE(dataEtlStatus_, dataEtlStatus) };


      // dataInitializationStatus Field Functions 
      bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
      void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
      inline const DtsJobList::DataInitializationStatus & getDataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, DtsJobList::DataInitializationStatus) };
      inline DtsJobList::DataInitializationStatus getDataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, DtsJobList::DataInitializationStatus) };
      inline DtsJobList& setDataInitializationStatus(const DtsJobList::DataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
      inline DtsJobList& setDataInitializationStatus(DtsJobList::DataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


      // dataSynchronizationStatus Field Functions 
      bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
      void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
      inline const DtsJobList::DataSynchronizationStatus & getDataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, DtsJobList::DataSynchronizationStatus) };
      inline DtsJobList::DataSynchronizationStatus getDataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, DtsJobList::DataSynchronizationStatus) };
      inline DtsJobList& setDataSynchronizationStatus(const DtsJobList::DataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
      inline DtsJobList& setDataSynchronizationStatus(DtsJobList::DataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


      // dbObject Field Functions 
      bool hasDbObject() const { return this->dbObject_ != nullptr;};
      void deleteDbObject() { this->dbObject_ = nullptr;};
      inline string getDbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
      inline DtsJobList& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


      // dedicatedClusterId Field Functions 
      bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
      void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
      inline string getDedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
      inline DtsJobList& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


      // delay Field Functions 
      bool hasDelay() const { return this->delay_ != nullptr;};
      void deleteDelay() { this->delay_ = nullptr;};
      inline int64_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
      inline DtsJobList& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


      // destinationEndpoint Field Functions 
      bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
      void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
      inline const DtsJobList::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, DtsJobList::DestinationEndpoint) };
      inline DtsJobList::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, DtsJobList::DestinationEndpoint) };
      inline DtsJobList& setDestinationEndpoint(const DtsJobList::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
      inline DtsJobList& setDestinationEndpoint(DtsJobList::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


      // dtsBisLabel Field Functions 
      bool hasDtsBisLabel() const { return this->dtsBisLabel_ != nullptr;};
      void deleteDtsBisLabel() { this->dtsBisLabel_ = nullptr;};
      inline string getDtsBisLabel() const { DARABONBA_PTR_GET_DEFAULT(dtsBisLabel_, "") };
      inline DtsJobList& setDtsBisLabel(string dtsBisLabel) { DARABONBA_PTR_SET_VALUE(dtsBisLabel_, dtsBisLabel) };


      // dtsInstanceID Field Functions 
      bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
      void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
      inline string getDtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
      inline DtsJobList& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


      // dtsJobClass Field Functions 
      bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
      void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
      inline string getDtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
      inline DtsJobList& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


      // dtsJobDirection Field Functions 
      bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
      void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
      inline string getDtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
      inline DtsJobList& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


      // dtsJobId Field Functions 
      bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
      void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
      inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
      inline DtsJobList& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


      // dtsJobName Field Functions 
      bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
      void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
      inline string getDtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
      inline DtsJobList& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


      // duRealUsage Field Functions 
      bool hasDuRealUsage() const { return this->duRealUsage_ != nullptr;};
      void deleteDuRealUsage() { this->duRealUsage_ = nullptr;};
      inline string getDuRealUsage() const { DARABONBA_PTR_GET_DEFAULT(duRealUsage_, "") };
      inline DtsJobList& setDuRealUsage(string duRealUsage) { DARABONBA_PTR_SET_VALUE(duRealUsage_, duRealUsage) };


      // duUsage Field Functions 
      bool hasDuUsage() const { return this->duUsage_ != nullptr;};
      void deleteDuUsage() { this->duUsage_ = nullptr;};
      inline int64_t getDuUsage() const { DARABONBA_PTR_GET_DEFAULT(duUsage_, 0L) };
      inline DtsJobList& setDuUsage(int64_t duUsage) { DARABONBA_PTR_SET_VALUE(duUsage_, duUsage) };


      // endTimestamp Field Functions 
      bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
      void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
      inline string getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
      inline DtsJobList& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


      // errorDetails Field Functions 
      bool hasErrorDetails() const { return this->errorDetails_ != nullptr;};
      void deleteErrorDetails() { this->errorDetails_ = nullptr;};
      inline const vector<DtsJobList::ErrorDetails> & getErrorDetails() const { DARABONBA_PTR_GET_CONST(errorDetails_, vector<DtsJobList::ErrorDetails>) };
      inline vector<DtsJobList::ErrorDetails> getErrorDetails() { DARABONBA_PTR_GET(errorDetails_, vector<DtsJobList::ErrorDetails>) };
      inline DtsJobList& setErrorDetails(const vector<DtsJobList::ErrorDetails> & errorDetails) { DARABONBA_PTR_SET_VALUE(errorDetails_, errorDetails) };
      inline DtsJobList& setErrorDetails(vector<DtsJobList::ErrorDetails> && errorDetails) { DARABONBA_PTR_SET_RVALUE(errorDetails_, errorDetails) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline DtsJobList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // etlSafeCheckpoint Field Functions 
      bool hasEtlSafeCheckpoint() const { return this->etlSafeCheckpoint_ != nullptr;};
      void deleteEtlSafeCheckpoint() { this->etlSafeCheckpoint_ = nullptr;};
      inline string getEtlSafeCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(etlSafeCheckpoint_, "") };
      inline DtsJobList& setEtlSafeCheckpoint(string etlSafeCheckpoint) { DARABONBA_PTR_SET_VALUE(etlSafeCheckpoint_, etlSafeCheckpoint) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline DtsJobList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // fullDataCheckStatus Field Functions 
      bool hasFullDataCheckStatus() const { return this->fullDataCheckStatus_ != nullptr;};
      void deleteFullDataCheckStatus() { this->fullDataCheckStatus_ = nullptr;};
      inline const DtsJobList::FullDataCheckStatus & getFullDataCheckStatus() const { DARABONBA_PTR_GET_CONST(fullDataCheckStatus_, DtsJobList::FullDataCheckStatus) };
      inline DtsJobList::FullDataCheckStatus getFullDataCheckStatus() { DARABONBA_PTR_GET(fullDataCheckStatus_, DtsJobList::FullDataCheckStatus) };
      inline DtsJobList& setFullDataCheckStatus(const DtsJobList::FullDataCheckStatus & fullDataCheckStatus) { DARABONBA_PTR_SET_VALUE(fullDataCheckStatus_, fullDataCheckStatus) };
      inline DtsJobList& setFullDataCheckStatus(DtsJobList::FullDataCheckStatus && fullDataCheckStatus) { DARABONBA_PTR_SET_RVALUE(fullDataCheckStatus_, fullDataCheckStatus) };


      // incDataCheckStatus Field Functions 
      bool hasIncDataCheckStatus() const { return this->incDataCheckStatus_ != nullptr;};
      void deleteIncDataCheckStatus() { this->incDataCheckStatus_ = nullptr;};
      inline const DtsJobList::IncDataCheckStatus & getIncDataCheckStatus() const { DARABONBA_PTR_GET_CONST(incDataCheckStatus_, DtsJobList::IncDataCheckStatus) };
      inline DtsJobList::IncDataCheckStatus getIncDataCheckStatus() { DARABONBA_PTR_GET(incDataCheckStatus_, DtsJobList::IncDataCheckStatus) };
      inline DtsJobList& setIncDataCheckStatus(const DtsJobList::IncDataCheckStatus & incDataCheckStatus) { DARABONBA_PTR_SET_VALUE(incDataCheckStatus_, incDataCheckStatus) };
      inline DtsJobList& setIncDataCheckStatus(DtsJobList::IncDataCheckStatus && incDataCheckStatus) { DARABONBA_PTR_SET_RVALUE(incDataCheckStatus_, incDataCheckStatus) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline DtsJobList& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // maxDu Field Functions 
      bool hasMaxDu() const { return this->maxDu_ != nullptr;};
      void deleteMaxDu() { this->maxDu_ = nullptr;};
      inline double getMaxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0.0) };
      inline DtsJobList& setMaxDu(double maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


      // memUsage Field Functions 
      bool hasMemUsage() const { return this->memUsage_ != nullptr;};
      void deleteMemUsage() { this->memUsage_ = nullptr;};
      inline string getMemUsage() const { DARABONBA_PTR_GET_DEFAULT(memUsage_, "") };
      inline DtsJobList& setMemUsage(string memUsage) { DARABONBA_PTR_SET_VALUE(memUsage_, memUsage) };


      // migrationErrCode Field Functions 
      bool hasMigrationErrCode() const { return this->migrationErrCode_ != nullptr;};
      void deleteMigrationErrCode() { this->migrationErrCode_ = nullptr;};
      inline string getMigrationErrCode() const { DARABONBA_PTR_GET_DEFAULT(migrationErrCode_, "") };
      inline DtsJobList& setMigrationErrCode(string migrationErrCode) { DARABONBA_PTR_SET_VALUE(migrationErrCode_, migrationErrCode) };


      // migrationErrHelpDocId Field Functions 
      bool hasMigrationErrHelpDocId() const { return this->migrationErrHelpDocId_ != nullptr;};
      void deleteMigrationErrHelpDocId() { this->migrationErrHelpDocId_ = nullptr;};
      inline string getMigrationErrHelpDocId() const { DARABONBA_PTR_GET_DEFAULT(migrationErrHelpDocId_, "") };
      inline DtsJobList& setMigrationErrHelpDocId(string migrationErrHelpDocId) { DARABONBA_PTR_SET_VALUE(migrationErrHelpDocId_, migrationErrHelpDocId) };


      // migrationErrHelpDocKey Field Functions 
      bool hasMigrationErrHelpDocKey() const { return this->migrationErrHelpDocKey_ != nullptr;};
      void deleteMigrationErrHelpDocKey() { this->migrationErrHelpDocKey_ = nullptr;};
      inline string getMigrationErrHelpDocKey() const { DARABONBA_PTR_GET_DEFAULT(migrationErrHelpDocKey_, "") };
      inline DtsJobList& setMigrationErrHelpDocKey(string migrationErrHelpDocKey) { DARABONBA_PTR_SET_VALUE(migrationErrHelpDocKey_, migrationErrHelpDocKey) };


      // migrationErrMsg Field Functions 
      bool hasMigrationErrMsg() const { return this->migrationErrMsg_ != nullptr;};
      void deleteMigrationErrMsg() { this->migrationErrMsg_ = nullptr;};
      inline string getMigrationErrMsg() const { DARABONBA_PTR_GET_DEFAULT(migrationErrMsg_, "") };
      inline DtsJobList& setMigrationErrMsg(string migrationErrMsg) { DARABONBA_PTR_SET_VALUE(migrationErrMsg_, migrationErrMsg) };


      // migrationErrType Field Functions 
      bool hasMigrationErrType() const { return this->migrationErrType_ != nullptr;};
      void deleteMigrationErrType() { this->migrationErrType_ = nullptr;};
      inline string getMigrationErrType() const { DARABONBA_PTR_GET_DEFAULT(migrationErrType_, "") };
      inline DtsJobList& setMigrationErrType(string migrationErrType) { DARABONBA_PTR_SET_VALUE(migrationErrType_, migrationErrType) };


      // migrationErrWorkaround Field Functions 
      bool hasMigrationErrWorkaround() const { return this->migrationErrWorkaround_ != nullptr;};
      void deleteMigrationErrWorkaround() { this->migrationErrWorkaround_ = nullptr;};
      inline string getMigrationErrWorkaround() const { DARABONBA_PTR_GET_DEFAULT(migrationErrWorkaround_, "") };
      inline DtsJobList& setMigrationErrWorkaround(string migrationErrWorkaround) { DARABONBA_PTR_SET_VALUE(migrationErrWorkaround_, migrationErrWorkaround) };


      // migrationMode Field Functions 
      bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
      void deleteMigrationMode() { this->migrationMode_ = nullptr;};
      inline const DtsJobList::MigrationMode & getMigrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, DtsJobList::MigrationMode) };
      inline DtsJobList::MigrationMode getMigrationMode() { DARABONBA_PTR_GET(migrationMode_, DtsJobList::MigrationMode) };
      inline DtsJobList& setMigrationMode(const DtsJobList::MigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
      inline DtsJobList& setMigrationMode(DtsJobList::MigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


      // minDu Field Functions 
      bool hasMinDu() const { return this->minDu_ != nullptr;};
      void deleteMinDu() { this->minDu_ = nullptr;};
      inline double getMinDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0.0) };
      inline DtsJobList& setMinDu(double minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


      // originType Field Functions 
      bool hasOriginType() const { return this->originType_ != nullptr;};
      void deleteOriginType() { this->originType_ = nullptr;};
      inline string getOriginType() const { DARABONBA_PTR_GET_DEFAULT(originType_, "") };
      inline DtsJobList& setOriginType(string originType) { DARABONBA_PTR_SET_VALUE(originType_, originType) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline DtsJobList& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // performance Field Functions 
      bool hasPerformance() const { return this->performance_ != nullptr;};
      void deletePerformance() { this->performance_ = nullptr;};
      inline const DtsJobList::Performance & getPerformance() const { DARABONBA_PTR_GET_CONST(performance_, DtsJobList::Performance) };
      inline DtsJobList::Performance getPerformance() { DARABONBA_PTR_GET(performance_, DtsJobList::Performance) };
      inline DtsJobList& setPerformance(const DtsJobList::Performance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
      inline DtsJobList& setPerformance(DtsJobList::Performance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


      // precheckStatus Field Functions 
      bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
      void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
      inline const DtsJobList::PrecheckStatus & getPrecheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, DtsJobList::PrecheckStatus) };
      inline DtsJobList::PrecheckStatus getPrecheckStatus() { DARABONBA_PTR_GET(precheckStatus_, DtsJobList::PrecheckStatus) };
      inline DtsJobList& setPrecheckStatus(const DtsJobList::PrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
      inline DtsJobList& setPrecheckStatus(DtsJobList::PrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


      // reserved Field Functions 
      bool hasReserved() const { return this->reserved_ != nullptr;};
      void deleteReserved() { this->reserved_ = nullptr;};
      inline string getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
      inline DtsJobList& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


      // resourceGroupDisplayName Field Functions 
      bool hasResourceGroupDisplayName() const { return this->resourceGroupDisplayName_ != nullptr;};
      void deleteResourceGroupDisplayName() { this->resourceGroupDisplayName_ = nullptr;};
      inline string getResourceGroupDisplayName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupDisplayName_, "") };
      inline DtsJobList& setResourceGroupDisplayName(string resourceGroupDisplayName) { DARABONBA_PTR_SET_VALUE(resourceGroupDisplayName_, resourceGroupDisplayName) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline DtsJobList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // retryState Field Functions 
      bool hasRetryState() const { return this->retryState_ != nullptr;};
      void deleteRetryState() { this->retryState_ = nullptr;};
      inline const DtsJobList::RetryState & getRetryState() const { DARABONBA_PTR_GET_CONST(retryState_, DtsJobList::RetryState) };
      inline DtsJobList::RetryState getRetryState() { DARABONBA_PTR_GET(retryState_, DtsJobList::RetryState) };
      inline DtsJobList& setRetryState(const DtsJobList::RetryState & retryState) { DARABONBA_PTR_SET_VALUE(retryState_, retryState) };
      inline DtsJobList& setRetryState(DtsJobList::RetryState && retryState) { DARABONBA_PTR_SET_RVALUE(retryState_, retryState) };


      // reverseJob Field Functions 
      bool hasReverseJob() const { return this->reverseJob_ != nullptr;};
      void deleteReverseJob() { this->reverseJob_ = nullptr;};
      inline const DtsJobList::ReverseJob & getReverseJob() const { DARABONBA_PTR_GET_CONST(reverseJob_, DtsJobList::ReverseJob) };
      inline DtsJobList::ReverseJob getReverseJob() { DARABONBA_PTR_GET(reverseJob_, DtsJobList::ReverseJob) };
      inline DtsJobList& setReverseJob(const DtsJobList::ReverseJob & reverseJob) { DARABONBA_PTR_SET_VALUE(reverseJob_, reverseJob) };
      inline DtsJobList& setReverseJob(DtsJobList::ReverseJob && reverseJob) { DARABONBA_PTR_SET_RVALUE(reverseJob_, reverseJob) };


      // sourceEndpoint Field Functions 
      bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
      void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
      inline const DtsJobList::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, DtsJobList::SourceEndpoint) };
      inline DtsJobList::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, DtsJobList::SourceEndpoint) };
      inline DtsJobList& setSourceEndpoint(const DtsJobList::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
      inline DtsJobList& setSourceEndpoint(DtsJobList::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DtsJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // structureDataCheckStatus Field Functions 
      bool hasStructureDataCheckStatus() const { return this->structureDataCheckStatus_ != nullptr;};
      void deleteStructureDataCheckStatus() { this->structureDataCheckStatus_ = nullptr;};
      inline const DtsJobList::StructureDataCheckStatus & getStructureDataCheckStatus() const { DARABONBA_PTR_GET_CONST(structureDataCheckStatus_, DtsJobList::StructureDataCheckStatus) };
      inline DtsJobList::StructureDataCheckStatus getStructureDataCheckStatus() { DARABONBA_PTR_GET(structureDataCheckStatus_, DtsJobList::StructureDataCheckStatus) };
      inline DtsJobList& setStructureDataCheckStatus(const DtsJobList::StructureDataCheckStatus & structureDataCheckStatus) { DARABONBA_PTR_SET_VALUE(structureDataCheckStatus_, structureDataCheckStatus) };
      inline DtsJobList& setStructureDataCheckStatus(DtsJobList::StructureDataCheckStatus && structureDataCheckStatus) { DARABONBA_PTR_SET_RVALUE(structureDataCheckStatus_, structureDataCheckStatus) };


      // structureInitializationStatus Field Functions 
      bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
      void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
      inline const DtsJobList::StructureInitializationStatus & getStructureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, DtsJobList::StructureInitializationStatus) };
      inline DtsJobList::StructureInitializationStatus getStructureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, DtsJobList::StructureInitializationStatus) };
      inline DtsJobList& setStructureInitializationStatus(const DtsJobList::StructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
      inline DtsJobList& setStructureInitializationStatus(DtsJobList::StructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<DtsJobList::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<DtsJobList::TagList>) };
      inline vector<DtsJobList::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<DtsJobList::TagList>) };
      inline DtsJobList& setTagList(const vector<DtsJobList::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline DtsJobList& setTagList(vector<DtsJobList::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    protected:
      // Indicates whether the **new** change tracking feature is used.
      // 
      // >  This parameter is returned only for change tracking instances of the new version.
      shared_ptr<string> appName_ {};
      // The start of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> beginTimestamp_ {};
      // The start offset of incremental data synchronization. The value is a UNIX timestamp representing the number of seconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
      shared_ptr<string> checkpoint_ {};
      // The consumption checkpoint of the change tracking instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> consumptionCheckpoint_ {};
      // The downstream client information, in the following format: \\<IP address of the downstream client>:\\<Random ID generated by DTS>.
      shared_ptr<string> consumptionClient_ {};
      // The CPU utilization of the instance. Unit: percentage.
      shared_ptr<string> cpuUsage_ {};
      // The point in time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The state of the physical gateway-based migration task.
      shared_ptr<DtsJobList::DataCloudStatus> dataCloudStatus_ {};
      // The state of the extract, transform, and load (ETL) task. Valid values:
      // 
      // >  This parameter collection is returned only if an ETL task is configured.
      shared_ptr<DtsJobList::DataEtlStatus> dataEtlStatus_ {};
      // The state of full data synchronization.
      shared_ptr<DtsJobList::DataInitializationStatus> dataInitializationStatus_ {};
      // The state of incremental data migration or synchronization.
      shared_ptr<DtsJobList::DataSynchronizationStatus> dataSynchronizationStatus_ {};
      // The objects that you want to synchronize. The value is a JSON string and can contain regular expressions. For more information, see "Objects of DTS tasks".
      shared_ptr<string> dbObject_ {};
      // The ID of the DTS dedicated cluster on which a DTS task runs.
      shared_ptr<string> dedicatedClusterId_ {};
      // The latency of incremental data synchronization. Unit: seconds.
      shared_ptr<int64_t> delay_ {};
      // The connection settings of the destination instance.
      shared_ptr<DtsJobList::DestinationEndpoint> destinationEndpoint_ {};
      // The environment tag of the DTS instance. Valid values:
      // 
      // - **normal**
      // - **online**
      shared_ptr<string> dtsBisLabel_ {};
      // The ID of the data synchronization instance.
      shared_ptr<string> dtsInstanceID_ {};
      // The instance class.
      // 
      // >  For more information about the test performance of each instance class, see [Specifications of data synchronization instances](https://help.aliyun.com/document_detail/26605.html).
      shared_ptr<string> dtsJobClass_ {};
      // The synchronization direction. The value is **Reverse**.
      shared_ptr<string> dtsJobDirection_ {};
      // The ID of the data synchronization task.
      shared_ptr<string> dtsJobId_ {};
      // The name of the data synchronization task.
      shared_ptr<string> dtsJobName_ {};
      // The DTS Units (DUs) usage of a task in a DTS dedicated cluster.
      shared_ptr<string> duRealUsage_ {};
      // The number of DUs that have been used.
      shared_ptr<int64_t> duUsage_ {};
      // The end of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> endTimestamp_ {};
      // The error message returned.
      shared_ptr<vector<DtsJobList::ErrorDetails>> errorDetails_ {};
      // The error message returned if the task failed.
      shared_ptr<string> errorMessage_ {};
      // The checkpoint of the ETL task.
      shared_ptr<string> etlSafeCheckpoint_ {};
      // The point in time when the instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      // 
      // >  This parameter is returned only if the value of the **PayType** parameter is **PrePaid**.
      shared_ptr<string> expireTime_ {};
      // The state information about the full data verification task.
      shared_ptr<DtsJobList::FullDataCheckStatus> fullDataCheckStatus_ {};
      // The state information about the incremental data verification task.
      shared_ptr<DtsJobList::IncDataCheckStatus> incDataCheckStatus_ {};
      // The type of the DTS task. Valid values:
      // 
      // - **MIGRATION**: data migration task 
      // - **SYNC**: data synchronization task 
      // - **SUBSCRIBE**: change tracking task
      shared_ptr<string> jobType_ {};
      // Upper limit of DU.
      // 
      // > Only supported by Serverless instances.
      shared_ptr<double> maxDu_ {};
      // The memory that has been used. Unit: MB.
      shared_ptr<string> memUsage_ {};
      // The error code.
      shared_ptr<string> migrationErrCode_ {};
      // The ID of the error code-related documentation.
      shared_ptr<string> migrationErrHelpDocId_ {};
      // The key of the error code-related documentation.
      shared_ptr<string> migrationErrHelpDocKey_ {};
      // The error message.
      shared_ptr<string> migrationErrMsg_ {};
      // The type of the error code.
      shared_ptr<string> migrationErrType_ {};
      // The solution to the error.
      shared_ptr<string> migrationErrWorkaround_ {};
      // The migration or synchronization modes.
      shared_ptr<DtsJobList::MigrationMode> migrationMode_ {};
      // Lower limit of DU.
      // 
      // > Only supported by Serverless instances.
      shared_ptr<double> minDu_ {};
      // The source of the task. Valid values:
      // 
      // *   **PTS**
      // *   **DMS**
      // *   **DTS**
      shared_ptr<string> originType_ {};
      // The billing method of the DTS instance. Valid values:
      // 
      // *   **PrePaid**: subscription
      // *   **PostPaid**: pay-as-you-go
      shared_ptr<string> payType_ {};
      // The performance of the data migration or synchronization instance.
      shared_ptr<DtsJobList::Performance> performance_ {};
      // The precheck state.
      shared_ptr<DtsJobList::PrecheckStatus> precheckStatus_ {};
      // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, for example, whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
      shared_ptr<string> reserved_ {};
      // The name of the resource group.
      shared_ptr<string> resourceGroupDisplayName_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The information about the retries performed by DTS due to an exception.
      shared_ptr<DtsJobList::RetryState> retryState_ {};
      // The details of the data synchronization task in the reverse direction. 
      // 
      // > This parameter is returned only for two-way data synchronization tasks.
      shared_ptr<DtsJobList::ReverseJob> reverseJob_ {};
      // The connection settings of the source instance.
      shared_ptr<DtsJobList::SourceEndpoint> sourceEndpoint_ {};
      // The state of the DTS instance. For more information about the valid values, see the description of the request parameter **Status**.
      shared_ptr<string> status_ {};
      shared_ptr<DtsJobList::StructureDataCheckStatus> structureDataCheckStatus_ {};
      // The state of schema migration or initial schema synchronization.
      shared_ptr<DtsJobList::StructureInitializationStatus> structureInitializationStatus_ {};
      // The tags of the task.
      shared_ptr<vector<DtsJobList::TagList>> tagList_ {};
    };

    virtual bool empty() const override { return this->dtsJobList_ == nullptr
        && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->etlDemoList_ == nullptr
        && this->httpStatusCode_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->totalRecordCount_ == nullptr; };
    // dtsJobList Field Functions 
    bool hasDtsJobList() const { return this->dtsJobList_ != nullptr;};
    void deleteDtsJobList() { this->dtsJobList_ = nullptr;};
    inline const vector<DescribeDtsJobsResponseBody::DtsJobList> & getDtsJobList() const { DARABONBA_PTR_GET_CONST(dtsJobList_, vector<DescribeDtsJobsResponseBody::DtsJobList>) };
    inline vector<DescribeDtsJobsResponseBody::DtsJobList> getDtsJobList() { DARABONBA_PTR_GET(dtsJobList_, vector<DescribeDtsJobsResponseBody::DtsJobList>) };
    inline DescribeDtsJobsResponseBody& setDtsJobList(const vector<DescribeDtsJobsResponseBody::DtsJobList> & dtsJobList) { DARABONBA_PTR_SET_VALUE(dtsJobList_, dtsJobList) };
    inline DescribeDtsJobsResponseBody& setDtsJobList(vector<DescribeDtsJobsResponseBody::DtsJobList> && dtsJobList) { DARABONBA_PTR_SET_RVALUE(dtsJobList_, dtsJobList) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeDtsJobsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeDtsJobsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDtsJobsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDtsJobsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // etlDemoList Field Functions 
    bool hasEtlDemoList() const { return this->etlDemoList_ != nullptr;};
    void deleteEtlDemoList() { this->etlDemoList_ = nullptr;};
    inline const vector<DescribeDtsJobsResponseBody::EtlDemoList> & getEtlDemoList() const { DARABONBA_PTR_GET_CONST(etlDemoList_, vector<DescribeDtsJobsResponseBody::EtlDemoList>) };
    inline vector<DescribeDtsJobsResponseBody::EtlDemoList> getEtlDemoList() { DARABONBA_PTR_GET(etlDemoList_, vector<DescribeDtsJobsResponseBody::EtlDemoList>) };
    inline DescribeDtsJobsResponseBody& setEtlDemoList(const vector<DescribeDtsJobsResponseBody::EtlDemoList> & etlDemoList) { DARABONBA_PTR_SET_VALUE(etlDemoList_, etlDemoList) };
    inline DescribeDtsJobsResponseBody& setEtlDemoList(vector<DescribeDtsJobsResponseBody::EtlDemoList> && etlDemoList) { DARABONBA_PTR_SET_RVALUE(etlDemoList_, etlDemoList) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeDtsJobsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDtsJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDtsJobsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDtsJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDtsJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeDtsJobsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The Data Transmission Service (DTS) tasks and the details of each task.
    shared_ptr<vector<DescribeDtsJobsResponseBody::DtsJobList>> dtsJobList_ {};
    // The dynamic error code. This parameter will be removed in the future.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic part in the error message. The value of this parameter is used to replace the **%s** variable in the value of the **ErrMessage** parameter.
    // 
    // >  For example, if the value of the **ErrMessage** parameter is **The Value of Input Parameter %s is not valid** and the value of the **DynamicMessage** parameter is **Type**, the specified **Type** parameter is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The error code returned if the call failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errMessage_ {};
    // The DTS tasks and the details of each task.
    shared_ptr<vector<DescribeDtsJobsResponseBody::EtlDemoList>> etlDemoList_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
    // The total number of DTS tasks that meet the query condition.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
