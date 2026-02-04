// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSRESPONSEBODY_HPP_
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
  class DescribeSynchronizationJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SynchronizationInstances, synchronizationInstances_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationInstances, synchronizationInstances_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeSynchronizationJobsResponseBody() = default ;
    DescribeSynchronizationJobsResponseBody(const DescribeSynchronizationJobsResponseBody &) = default ;
    DescribeSynchronizationJobsResponseBody(DescribeSynchronizationJobsResponseBody &&) = default ;
    DescribeSynchronizationJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobsResponseBody() = default ;
    DescribeSynchronizationJobsResponseBody& operator=(const DescribeSynchronizationJobsResponseBody &) = default ;
    DescribeSynchronizationJobsResponseBody& operator=(DescribeSynchronizationJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SynchronizationInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SynchronizationInstances& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
        DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
        DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
        DARABONBA_PTR_TO_JSON(Delay, delay_);
        DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(InstanceCreateTime, instanceCreateTime_);
        DARABONBA_PTR_TO_JSON(JobCreateTime, jobCreateTime_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(Performance, performance_);
        DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
        DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
        DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
        DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
        DARABONBA_PTR_TO_JSON(SynchronizationJobClass, synchronizationJobClass_);
        DARABONBA_PTR_TO_JSON(SynchronizationJobId, synchronizationJobId_);
        DARABONBA_PTR_TO_JSON(SynchronizationJobName, synchronizationJobName_);
        DARABONBA_PTR_TO_JSON(SynchronizationObjects, synchronizationObjects_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, SynchronizationInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
        DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
        DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
        DARABONBA_PTR_FROM_JSON(Delay, delay_);
        DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(InstanceCreateTime, instanceCreateTime_);
        DARABONBA_PTR_FROM_JSON(JobCreateTime, jobCreateTime_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(Performance, performance_);
        DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
        DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
        DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
        DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
        DARABONBA_PTR_FROM_JSON(SynchronizationJobClass, synchronizationJobClass_);
        DARABONBA_PTR_FROM_JSON(SynchronizationJobId, synchronizationJobId_);
        DARABONBA_PTR_FROM_JSON(SynchronizationJobName, synchronizationJobName_);
        DARABONBA_PTR_FROM_JSON(SynchronizationObjects, synchronizationObjects_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      SynchronizationInstances() = default ;
      SynchronizationInstances(const SynchronizationInstances &) = default ;
      SynchronizationInstances(SynchronizationInstances &&) = default ;
      SynchronizationInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SynchronizationInstances() = default ;
      SynchronizationInstances& operator=(const SynchronizationInstances &) = default ;
      SynchronizationInstances& operator=(SynchronizationInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value that corresponds to the tag key.
        shared_ptr<string> value_ {};
      };

      class SynchronizationObjects : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SynchronizationObjects& obj) { 
          DARABONBA_PTR_TO_JSON(NewSchemaName, newSchemaName_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(TableExcludes, tableExcludes_);
          DARABONBA_PTR_TO_JSON(TableIncludes, tableIncludes_);
        };
        friend void from_json(const Darabonba::Json& j, SynchronizationObjects& obj) { 
          DARABONBA_PTR_FROM_JSON(NewSchemaName, newSchemaName_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(TableExcludes, tableExcludes_);
          DARABONBA_PTR_FROM_JSON(TableIncludes, tableIncludes_);
        };
        SynchronizationObjects() = default ;
        SynchronizationObjects(const SynchronizationObjects &) = default ;
        SynchronizationObjects(SynchronizationObjects &&) = default ;
        SynchronizationObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SynchronizationObjects() = default ;
        SynchronizationObjects& operator=(const SynchronizationObjects &) = default ;
        SynchronizationObjects& operator=(SynchronizationObjects &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TableIncludes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TableIncludes& obj) { 
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
          };
          friend void from_json(const Darabonba::Json& j, TableIncludes& obj) { 
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          };
          TableIncludes() = default ;
          TableIncludes(const TableIncludes &) = default ;
          TableIncludes(TableIncludes &&) = default ;
          TableIncludes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TableIncludes() = default ;
          TableIncludes& operator=(const TableIncludes &) = default ;
          TableIncludes& operator=(TableIncludes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tableName_ == nullptr; };
          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline TableIncludes& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        protected:
          // The name of the synchronized table.
          shared_ptr<string> tableName_ {};
        };

        class TableExcludes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TableExcludes& obj) { 
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
          };
          friend void from_json(const Darabonba::Json& j, TableExcludes& obj) { 
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          };
          TableExcludes() = default ;
          TableExcludes(const TableExcludes &) = default ;
          TableExcludes(TableExcludes &&) = default ;
          TableExcludes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TableExcludes() = default ;
          TableExcludes& operator=(const TableExcludes &) = default ;
          TableExcludes& operator=(TableExcludes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tableName_ == nullptr; };
          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline TableExcludes& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        protected:
          // The name of the excluded table.
          shared_ptr<string> tableName_ {};
        };

        virtual bool empty() const override { return this->newSchemaName_ == nullptr
        && this->schemaName_ == nullptr && this->tableExcludes_ == nullptr && this->tableIncludes_ == nullptr; };
        // newSchemaName Field Functions 
        bool hasNewSchemaName() const { return this->newSchemaName_ != nullptr;};
        void deleteNewSchemaName() { this->newSchemaName_ = nullptr;};
        inline string getNewSchemaName() const { DARABONBA_PTR_GET_DEFAULT(newSchemaName_, "") };
        inline SynchronizationObjects& setNewSchemaName(string newSchemaName) { DARABONBA_PTR_SET_VALUE(newSchemaName_, newSchemaName) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline SynchronizationObjects& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // tableExcludes Field Functions 
        bool hasTableExcludes() const { return this->tableExcludes_ != nullptr;};
        void deleteTableExcludes() { this->tableExcludes_ = nullptr;};
        inline const vector<SynchronizationObjects::TableExcludes> & getTableExcludes() const { DARABONBA_PTR_GET_CONST(tableExcludes_, vector<SynchronizationObjects::TableExcludes>) };
        inline vector<SynchronizationObjects::TableExcludes> getTableExcludes() { DARABONBA_PTR_GET(tableExcludes_, vector<SynchronizationObjects::TableExcludes>) };
        inline SynchronizationObjects& setTableExcludes(const vector<SynchronizationObjects::TableExcludes> & tableExcludes) { DARABONBA_PTR_SET_VALUE(tableExcludes_, tableExcludes) };
        inline SynchronizationObjects& setTableExcludes(vector<SynchronizationObjects::TableExcludes> && tableExcludes) { DARABONBA_PTR_SET_RVALUE(tableExcludes_, tableExcludes) };


        // tableIncludes Field Functions 
        bool hasTableIncludes() const { return this->tableIncludes_ != nullptr;};
        void deleteTableIncludes() { this->tableIncludes_ = nullptr;};
        inline const vector<SynchronizationObjects::TableIncludes> & getTableIncludes() const { DARABONBA_PTR_GET_CONST(tableIncludes_, vector<SynchronizationObjects::TableIncludes>) };
        inline vector<SynchronizationObjects::TableIncludes> getTableIncludes() { DARABONBA_PTR_GET(tableIncludes_, vector<SynchronizationObjects::TableIncludes>) };
        inline SynchronizationObjects& setTableIncludes(const vector<SynchronizationObjects::TableIncludes> & tableIncludes) { DARABONBA_PTR_SET_VALUE(tableIncludes_, tableIncludes) };
        inline SynchronizationObjects& setTableIncludes(vector<SynchronizationObjects::TableIncludes> && tableIncludes) { DARABONBA_PTR_SET_RVALUE(tableIncludes_, tableIncludes) };


      protected:
        // The database name that is used in the destination instance.
        shared_ptr<string> newSchemaName_ {};
        // The name of the synchronized database.
        shared_ptr<string> schemaName_ {};
        // The source tables that are excluded from the data synchronization task.
        shared_ptr<vector<SynchronizationObjects::TableExcludes>> tableExcludes_ {};
        // The tables that are synchronized by the task.
        shared_ptr<vector<SynchronizationObjects::TableIncludes>> tableIncludes_ {};
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
        // The error message returned if schema synchronization failed.
        shared_ptr<string> errorMessage_ {};
        // The progress of schema synchronization. Unit: %.
        shared_ptr<string> percent_ {};
        // The number of tables whose schemas have been synchronized.
        shared_ptr<string> progress_ {};
        // The status of schema synchronization. Valid values:
        // 
        // *   **NotStarted**: Schema synchronization is not started.
        // *   **Migrating**: Schema synchronization is in progress.
        // *   **Failed**: Schema synchronization failed.
        // *   **Finished**: Schema synchronization is completed.
        shared_ptr<string> status_ {};
      };

      class SourceEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(EngineName, engineName_);
          DARABONBA_PTR_TO_JSON(IP, IP_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
          DARABONBA_PTR_FROM_JSON(IP, IP_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
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
        virtual bool empty() const override { return this->engineName_ == nullptr
        && this->IP_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->port_ == nullptr && this->userName_ == nullptr; };
        // engineName Field Functions 
        bool hasEngineName() const { return this->engineName_ != nullptr;};
        void deleteEngineName() { this->engineName_ = nullptr;};
        inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
        inline SourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


        // IP Field Functions 
        bool hasIP() const { return this->IP_ != nullptr;};
        void deleteIP() { this->IP_ = nullptr;};
        inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
        inline SourceEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SourceEndpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline SourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline SourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The database type of the source instance.
        shared_ptr<string> engineName_ {};
        // The endpoint of the source instance.
        shared_ptr<string> IP_ {};
        // The ID of the source instance.
        shared_ptr<string> instanceId_ {};
        // The type of the source instance.
        shared_ptr<string> instanceType_ {};
        // The database service port of the source instance.
        shared_ptr<string> port_ {};
        // The database account of the source instance.
        shared_ptr<string> userName_ {};
      };

      class PrecheckStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrecheckStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PrecheckStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
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
            DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(ItemName, itemName_);
            DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
          };
          friend void from_json(const Darabonba::Json& j, Detail& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
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
          virtual bool empty() const override { return this->checkStatus_ == nullptr
        && this->errorMessage_ == nullptr && this->itemName_ == nullptr && this->repairMethod_ == nullptr; };
          // checkStatus Field Functions 
          bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
          void deleteCheckStatus() { this->checkStatus_ = nullptr;};
          inline string getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, "") };
          inline Detail& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline Detail& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // itemName Field Functions 
          bool hasItemName() const { return this->itemName_ != nullptr;};
          void deleteItemName() { this->itemName_ = nullptr;};
          inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
          inline Detail& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


          // repairMethod Field Functions 
          bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
          void deleteRepairMethod() { this->repairMethod_ = nullptr;};
          inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
          inline Detail& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


        protected:
          // The precheck result. Valid values:
          // 
          // *   **Success**: The task passed the precheck.
          // *   **Failed**: The task failed to pass the precheck.
          shared_ptr<string> checkStatus_ {};
          // The error message returned if the task failed to pass the precheck.
          // 
          // >  This parameter is returned only if the return value of the **CheckStatus** parameter is **Failed**.
          shared_ptr<string> errorMessage_ {};
          // The name of the precheck item.
          shared_ptr<string> itemName_ {};
          // The method to fix the precheck failure.
          // 
          // >  This parameter is returned only if the return value of the **CheckStatus** parameter is **Failed**.
          shared_ptr<string> repairMethod_ {};
        };

        virtual bool empty() const override { return this->detail_ == nullptr
        && this->percent_ == nullptr && this->status_ == nullptr; };
        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline const vector<PrecheckStatus::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<PrecheckStatus::Detail>) };
        inline vector<PrecheckStatus::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<PrecheckStatus::Detail>) };
        inline PrecheckStatus& setDetail(const vector<PrecheckStatus::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
        inline PrecheckStatus& setDetail(vector<PrecheckStatus::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


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
        // The precheck progress. Unit: %.
        shared_ptr<string> percent_ {};
        // The precheck result. Valid values:
        // 
        // *   **Success**: The task passed the precheck.
        // *   **Failed**: The task failed to pass the precheck.
        shared_ptr<string> status_ {};
      };

      class Performance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Performance& obj) { 
          DARABONBA_PTR_TO_JSON(FLOW, FLOW_);
          DARABONBA_PTR_TO_JSON(RPS, RPS_);
        };
        friend void from_json(const Darabonba::Json& j, Performance& obj) { 
          DARABONBA_PTR_FROM_JSON(FLOW, FLOW_);
          DARABONBA_PTR_FROM_JSON(RPS, RPS_);
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
        virtual bool empty() const override { return this->FLOW_ == nullptr
        && this->RPS_ == nullptr; };
        // FLOW Field Functions 
        bool hasFLOW() const { return this->FLOW_ != nullptr;};
        void deleteFLOW() { this->FLOW_ = nullptr;};
        inline string getFLOW() const { DARABONBA_PTR_GET_DEFAULT(FLOW_, "") };
        inline Performance& setFLOW(string FLOW) { DARABONBA_PTR_SET_VALUE(FLOW_, FLOW) };


        // RPS Field Functions 
        bool hasRPS() const { return this->RPS_ != nullptr;};
        void deleteRPS() { this->RPS_ = nullptr;};
        inline string getRPS() const { DARABONBA_PTR_GET_DEFAULT(RPS_, "") };
        inline Performance& setRPS(string RPS) { DARABONBA_PTR_SET_VALUE(RPS_, RPS) };


      protected:
        // The data traffic that is synchronized per second. Unit: MB/s.
        shared_ptr<string> FLOW_ {};
        // The number of times SQL statements are synchronized per second, including BEGIN, COMMIT, DML, and DDL statements. DML statements include INSERT, DELETE, and UPDATE.
        shared_ptr<string> RPS_ {};
      };

      class DestinationEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DestinationEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(EngineName, engineName_);
          DARABONBA_PTR_TO_JSON(IP, IP_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
          DARABONBA_PTR_FROM_JSON(IP, IP_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
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
        virtual bool empty() const override { return this->engineName_ == nullptr
        && this->IP_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->port_ == nullptr && this->userName_ == nullptr; };
        // engineName Field Functions 
        bool hasEngineName() const { return this->engineName_ != nullptr;};
        void deleteEngineName() { this->engineName_ = nullptr;};
        inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
        inline DestinationEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


        // IP Field Functions 
        bool hasIP() const { return this->IP_ != nullptr;};
        void deleteIP() { this->IP_ = nullptr;};
        inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
        inline DestinationEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline DestinationEndpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline DestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline DestinationEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline DestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The database type of the destination instance.
        shared_ptr<string> engineName_ {};
        // The endpoint of the destination instance.
        shared_ptr<string> IP_ {};
        // The ID of the destination instance.
        shared_ptr<string> instanceId_ {};
        // The type of the destination instance.
        shared_ptr<string> instanceType_ {};
        // The database service port of the destination instance.
        shared_ptr<string> port_ {};
        // The database account of the destination instance.
        shared_ptr<string> userName_ {};
      };

      class DataSynchronizationStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSynchronizationStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Delay, delay_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataSynchronizationStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Delay, delay_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
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
        virtual bool empty() const override { return this->delay_ == nullptr
        && this->errorMessage_ == nullptr && this->percent_ == nullptr && this->status_ == nullptr; };
        // delay Field Functions 
        bool hasDelay() const { return this->delay_ != nullptr;};
        void deleteDelay() { this->delay_ = nullptr;};
        inline string getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, "") };
        inline DataSynchronizationStatus& setDelay(string delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataSynchronizationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline DataSynchronizationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataSynchronizationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The synchronization latency.
        // 
        // >  This parameter is no longer available.
        shared_ptr<string> delay_ {};
        // The error message returned if incremental data synchronization failed.
        // 
        // >  This parameter is no longer available.
        shared_ptr<string> errorMessage_ {};
        // The progress of incremental data synchronization. Unit: %.
        // 
        // >  This parameter is no longer available.
        shared_ptr<string> percent_ {};
        // The status of incremental data synchronization.
        // 
        // >  This parameter is no longer available.
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
        // The progress of full data synchronization. Unit: %.
        shared_ptr<string> percent_ {};
        // The number of records that have been synchronized during full data synchronization.
        shared_ptr<string> progress_ {};
        // The status of full data synchronization. Valid values:
        // 
        // *   **NotStarted**: Full data synchronization is not started.
        // *   **Migrating**: Full data synchronization is in progress.
        // *   **Failed**: Full data synchronization failed.
        // *   **Finished**: Full data synchronization is completed.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataInitialization_ == nullptr && this->dataInitializationStatus_ == nullptr && this->dataSynchronizationStatus_ == nullptr && this->delay_ == nullptr && this->destinationEndpoint_ == nullptr
        && this->errorMessage_ == nullptr && this->expireTime_ == nullptr && this->instanceCreateTime_ == nullptr && this->jobCreateTime_ == nullptr && this->payType_ == nullptr
        && this->performance_ == nullptr && this->precheckStatus_ == nullptr && this->sourceEndpoint_ == nullptr && this->status_ == nullptr && this->structureInitialization_ == nullptr
        && this->structureInitializationStatus_ == nullptr && this->synchronizationDirection_ == nullptr && this->synchronizationJobClass_ == nullptr && this->synchronizationJobId_ == nullptr && this->synchronizationJobName_ == nullptr
        && this->synchronizationObjects_ == nullptr && this->tags_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SynchronizationInstances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataInitialization Field Functions 
      bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
      void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
      inline string getDataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, "") };
      inline SynchronizationInstances& setDataInitialization(string dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


      // dataInitializationStatus Field Functions 
      bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
      void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
      inline const SynchronizationInstances::DataInitializationStatus & getDataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, SynchronizationInstances::DataInitializationStatus) };
      inline SynchronizationInstances::DataInitializationStatus getDataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, SynchronizationInstances::DataInitializationStatus) };
      inline SynchronizationInstances& setDataInitializationStatus(const SynchronizationInstances::DataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
      inline SynchronizationInstances& setDataInitializationStatus(SynchronizationInstances::DataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


      // dataSynchronizationStatus Field Functions 
      bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
      void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
      inline const SynchronizationInstances::DataSynchronizationStatus & getDataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, SynchronizationInstances::DataSynchronizationStatus) };
      inline SynchronizationInstances::DataSynchronizationStatus getDataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, SynchronizationInstances::DataSynchronizationStatus) };
      inline SynchronizationInstances& setDataSynchronizationStatus(const SynchronizationInstances::DataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
      inline SynchronizationInstances& setDataSynchronizationStatus(SynchronizationInstances::DataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


      // delay Field Functions 
      bool hasDelay() const { return this->delay_ != nullptr;};
      void deleteDelay() { this->delay_ = nullptr;};
      inline string getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, "") };
      inline SynchronizationInstances& setDelay(string delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


      // destinationEndpoint Field Functions 
      bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
      void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
      inline const SynchronizationInstances::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, SynchronizationInstances::DestinationEndpoint) };
      inline SynchronizationInstances::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, SynchronizationInstances::DestinationEndpoint) };
      inline SynchronizationInstances& setDestinationEndpoint(const SynchronizationInstances::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
      inline SynchronizationInstances& setDestinationEndpoint(SynchronizationInstances::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline SynchronizationInstances& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline SynchronizationInstances& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // instanceCreateTime Field Functions 
      bool hasInstanceCreateTime() const { return this->instanceCreateTime_ != nullptr;};
      void deleteInstanceCreateTime() { this->instanceCreateTime_ = nullptr;};
      inline string getInstanceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(instanceCreateTime_, "") };
      inline SynchronizationInstances& setInstanceCreateTime(string instanceCreateTime) { DARABONBA_PTR_SET_VALUE(instanceCreateTime_, instanceCreateTime) };


      // jobCreateTime Field Functions 
      bool hasJobCreateTime() const { return this->jobCreateTime_ != nullptr;};
      void deleteJobCreateTime() { this->jobCreateTime_ = nullptr;};
      inline string getJobCreateTime() const { DARABONBA_PTR_GET_DEFAULT(jobCreateTime_, "") };
      inline SynchronizationInstances& setJobCreateTime(string jobCreateTime) { DARABONBA_PTR_SET_VALUE(jobCreateTime_, jobCreateTime) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline SynchronizationInstances& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // performance Field Functions 
      bool hasPerformance() const { return this->performance_ != nullptr;};
      void deletePerformance() { this->performance_ = nullptr;};
      inline const SynchronizationInstances::Performance & getPerformance() const { DARABONBA_PTR_GET_CONST(performance_, SynchronizationInstances::Performance) };
      inline SynchronizationInstances::Performance getPerformance() { DARABONBA_PTR_GET(performance_, SynchronizationInstances::Performance) };
      inline SynchronizationInstances& setPerformance(const SynchronizationInstances::Performance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
      inline SynchronizationInstances& setPerformance(SynchronizationInstances::Performance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


      // precheckStatus Field Functions 
      bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
      void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
      inline const SynchronizationInstances::PrecheckStatus & getPrecheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, SynchronizationInstances::PrecheckStatus) };
      inline SynchronizationInstances::PrecheckStatus getPrecheckStatus() { DARABONBA_PTR_GET(precheckStatus_, SynchronizationInstances::PrecheckStatus) };
      inline SynchronizationInstances& setPrecheckStatus(const SynchronizationInstances::PrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
      inline SynchronizationInstances& setPrecheckStatus(SynchronizationInstances::PrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


      // sourceEndpoint Field Functions 
      bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
      void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
      inline const SynchronizationInstances::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, SynchronizationInstances::SourceEndpoint) };
      inline SynchronizationInstances::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, SynchronizationInstances::SourceEndpoint) };
      inline SynchronizationInstances& setSourceEndpoint(const SynchronizationInstances::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
      inline SynchronizationInstances& setSourceEndpoint(SynchronizationInstances::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SynchronizationInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // structureInitialization Field Functions 
      bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
      void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
      inline string getStructureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, "") };
      inline SynchronizationInstances& setStructureInitialization(string structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


      // structureInitializationStatus Field Functions 
      bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
      void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
      inline const SynchronizationInstances::StructureInitializationStatus & getStructureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, SynchronizationInstances::StructureInitializationStatus) };
      inline SynchronizationInstances::StructureInitializationStatus getStructureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, SynchronizationInstances::StructureInitializationStatus) };
      inline SynchronizationInstances& setStructureInitializationStatus(const SynchronizationInstances::StructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
      inline SynchronizationInstances& setStructureInitializationStatus(SynchronizationInstances::StructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


      // synchronizationDirection Field Functions 
      bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
      void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
      inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
      inline SynchronizationInstances& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


      // synchronizationJobClass Field Functions 
      bool hasSynchronizationJobClass() const { return this->synchronizationJobClass_ != nullptr;};
      void deleteSynchronizationJobClass() { this->synchronizationJobClass_ = nullptr;};
      inline string getSynchronizationJobClass() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobClass_, "") };
      inline SynchronizationInstances& setSynchronizationJobClass(string synchronizationJobClass) { DARABONBA_PTR_SET_VALUE(synchronizationJobClass_, synchronizationJobClass) };


      // synchronizationJobId Field Functions 
      bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
      void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
      inline string getSynchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
      inline SynchronizationInstances& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


      // synchronizationJobName Field Functions 
      bool hasSynchronizationJobName() const { return this->synchronizationJobName_ != nullptr;};
      void deleteSynchronizationJobName() { this->synchronizationJobName_ = nullptr;};
      inline string getSynchronizationJobName() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobName_, "") };
      inline SynchronizationInstances& setSynchronizationJobName(string synchronizationJobName) { DARABONBA_PTR_SET_VALUE(synchronizationJobName_, synchronizationJobName) };


      // synchronizationObjects Field Functions 
      bool hasSynchronizationObjects() const { return this->synchronizationObjects_ != nullptr;};
      void deleteSynchronizationObjects() { this->synchronizationObjects_ = nullptr;};
      inline const vector<SynchronizationInstances::SynchronizationObjects> & getSynchronizationObjects() const { DARABONBA_PTR_GET_CONST(synchronizationObjects_, vector<SynchronizationInstances::SynchronizationObjects>) };
      inline vector<SynchronizationInstances::SynchronizationObjects> getSynchronizationObjects() { DARABONBA_PTR_GET(synchronizationObjects_, vector<SynchronizationInstances::SynchronizationObjects>) };
      inline SynchronizationInstances& setSynchronizationObjects(const vector<SynchronizationInstances::SynchronizationObjects> & synchronizationObjects) { DARABONBA_PTR_SET_VALUE(synchronizationObjects_, synchronizationObjects) };
      inline SynchronizationInstances& setSynchronizationObjects(vector<SynchronizationInstances::SynchronizationObjects> && synchronizationObjects) { DARABONBA_PTR_SET_RVALUE(synchronizationObjects_, synchronizationObjects) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<SynchronizationInstances::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<SynchronizationInstances::Tags>) };
      inline vector<SynchronizationInstances::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<SynchronizationInstances::Tags>) };
      inline SynchronizationInstances& setTags(const vector<SynchronizationInstances::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline SynchronizationInstances& setTags(vector<SynchronizationInstances::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The time when the data synchronization task was created. The time is displayed in the *yyyy-MM-dd* *HH:mm:ss*.0 format (UTC+8).
      shared_ptr<string> createTime_ {};
      // Indicates whether full data synchronization is performed. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<string> dataInitialization_ {};
      // The status of full data synchronization.
      shared_ptr<SynchronizationInstances::DataInitializationStatus> dataInitializationStatus_ {};
      // The status of incremental data synchronization.
      // 
      // >  This parameter and its sub-parameters are no longer available.
      shared_ptr<SynchronizationInstances::DataSynchronizationStatus> dataSynchronizationStatus_ {};
      // The synchronization latency, in seconds.
      shared_ptr<string> delay_ {};
      // The connection settings of the destination instance.
      shared_ptr<SynchronizationInstances::DestinationEndpoint> destinationEndpoint_ {};
      // The error message returned if data synchronization failed.
      shared_ptr<string> errorMessage_ {};
      // The time when the data synchronization instance expires. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
      // 
      // >  This parameter is returned only if the return value of the **PayType** parameter is **PrePaid**.
      shared_ptr<string> expireTime_ {};
      // The time when the instance was created. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
      shared_ptr<string> instanceCreateTime_ {};
      // The time when the data synchronization task was created. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
      shared_ptr<string> jobCreateTime_ {};
      // The billing method of the data synchronization instance. Valid values:
      // 
      // *   **PrePaid**: subscription
      // *   **PostPaid**: pay-as-you-go
      shared_ptr<string> payType_ {};
      // The performance of the data synchronization instance.
      shared_ptr<SynchronizationInstances::Performance> performance_ {};
      // The precheck status.
      shared_ptr<SynchronizationInstances::PrecheckStatus> precheckStatus_ {};
      // The connection settings of the source instance.
      shared_ptr<SynchronizationInstances::SourceEndpoint> sourceEndpoint_ {};
      // The status of the data synchronization task. Valid values:
      // 
      // *   **NotStarted**: The task is not started.
      // *   **Prechecking**: The task is being prechecked.
      // *   **PrecheckFailed**: The task failed to pass the precheck.
      // *   **Initializing**: The task is performing initial synchronization.
      // *   **InitializeFailed**: Initial synchronization failed.
      // *   **Synchronizing**: The task is synchronizing data.
      // *   **Failed**: The task failed to synchronize data.
      // *   **Suspending**: The task is paused.
      // *   **Modifying**: The objects in the task are being modified.
      // *   **Finished**: The task is completed.
      shared_ptr<string> status_ {};
      // Indicates whether schema synchronization is performed. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<string> structureInitialization_ {};
      // The status of schema synchronization.
      shared_ptr<SynchronizationInstances::StructureInitializationStatus> structureInitializationStatus_ {};
      // The synchronization direction. Valid values:
      // 
      // *   **Forward**
      // *   **Reverse**
      shared_ptr<string> synchronizationDirection_ {};
      // The specification of the data synchronization instance.
      shared_ptr<string> synchronizationJobClass_ {};
      // The ID of the data synchronization instance.
      shared_ptr<string> synchronizationJobId_ {};
      // The name of the data synchronization task.
      shared_ptr<string> synchronizationJobName_ {};
      // The objects that are synchronized by the task.
      shared_ptr<vector<SynchronizationInstances::SynchronizationObjects>> synchronizationObjects_ {};
      // The collection of tags.
      shared_ptr<vector<SynchronizationInstances::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->synchronizationInstances_ == nullptr && this->totalRecordCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSynchronizationJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeSynchronizationJobsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSynchronizationJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // synchronizationInstances Field Functions 
    bool hasSynchronizationInstances() const { return this->synchronizationInstances_ != nullptr;};
    void deleteSynchronizationInstances() { this->synchronizationInstances_ = nullptr;};
    inline const vector<DescribeSynchronizationJobsResponseBody::SynchronizationInstances> & getSynchronizationInstances() const { DARABONBA_PTR_GET_CONST(synchronizationInstances_, vector<DescribeSynchronizationJobsResponseBody::SynchronizationInstances>) };
    inline vector<DescribeSynchronizationJobsResponseBody::SynchronizationInstances> getSynchronizationInstances() { DARABONBA_PTR_GET(synchronizationInstances_, vector<DescribeSynchronizationJobsResponseBody::SynchronizationInstances>) };
    inline DescribeSynchronizationJobsResponseBody& setSynchronizationInstances(const vector<DescribeSynchronizationJobsResponseBody::SynchronizationInstances> & synchronizationInstances) { DARABONBA_PTR_SET_VALUE(synchronizationInstances_, synchronizationInstances) };
    inline DescribeSynchronizationJobsResponseBody& setSynchronizationInstances(vector<DescribeSynchronizationJobsResponseBody::SynchronizationInstances> && synchronizationInstances) { DARABONBA_PTR_SET_RVALUE(synchronizationInstances_, synchronizationInstances) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeSynchronizationJobsResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of entries that can be displayed on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of data synchronization instances and the details of each instance.
    shared_ptr<vector<DescribeSynchronizationJobsResponseBody::SynchronizationInstances>> synchronizationInstances_ {};
    // The total number of data synchronization instances that belong to your Alibaba Cloud account.
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
