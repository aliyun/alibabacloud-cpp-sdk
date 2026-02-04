// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODY_HPP_
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
  class DescribeMigrationJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(MigrationJobs, migrationJobs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(MigrationJobs, migrationJobs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeMigrationJobsResponseBody() = default ;
    DescribeMigrationJobsResponseBody(const DescribeMigrationJobsResponseBody &) = default ;
    DescribeMigrationJobsResponseBody(DescribeMigrationJobsResponseBody &&) = default ;
    DescribeMigrationJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobsResponseBody() = default ;
    DescribeMigrationJobsResponseBody& operator=(const DescribeMigrationJobsResponseBody &) = default ;
    DescribeMigrationJobsResponseBody& operator=(DescribeMigrationJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MigrationJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MigrationJobs& obj) { 
        DARABONBA_PTR_TO_JSON(MigrationJob, migrationJob_);
      };
      friend void from_json(const Darabonba::Json& j, MigrationJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(MigrationJob, migrationJob_);
      };
      MigrationJobs() = default ;
      MigrationJobs(const MigrationJobs &) = default ;
      MigrationJobs(MigrationJobs &&) = default ;
      MigrationJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MigrationJobs() = default ;
      MigrationJobs& operator=(const MigrationJobs &) = default ;
      MigrationJobs& operator=(MigrationJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MigrationJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MigrationJob& obj) { 
          DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
          DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
          DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
          DARABONBA_PTR_TO_JSON(InstanceCreateTime, instanceCreateTime_);
          DARABONBA_PTR_TO_JSON(JobCreateTime, jobCreateTime_);
          DARABONBA_PTR_TO_JSON(MigrationJobClass, migrationJobClass_);
          DARABONBA_PTR_TO_JSON(MigrationJobID, migrationJobID_);
          DARABONBA_PTR_TO_JSON(MigrationJobName, migrationJobName_);
          DARABONBA_PTR_TO_JSON(MigrationJobStatus, migrationJobStatus_);
          DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
          DARABONBA_PTR_TO_JSON(MigrationObject, migrationObject_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(Precheck, precheck_);
          DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
          DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, MigrationJob& obj) { 
          DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
          DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
          DARABONBA_PTR_FROM_JSON(InstanceCreateTime, instanceCreateTime_);
          DARABONBA_PTR_FROM_JSON(JobCreateTime, jobCreateTime_);
          DARABONBA_PTR_FROM_JSON(MigrationJobClass, migrationJobClass_);
          DARABONBA_PTR_FROM_JSON(MigrationJobID, migrationJobID_);
          DARABONBA_PTR_FROM_JSON(MigrationJobName, migrationJobName_);
          DARABONBA_PTR_FROM_JSON(MigrationJobStatus, migrationJobStatus_);
          DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
          DARABONBA_PTR_FROM_JSON(MigrationObject, migrationObject_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(Precheck, precheck_);
          DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
          DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        MigrationJob() = default ;
        MigrationJob(const MigrationJob &) = default ;
        MigrationJob(MigrationJob &&) = default ;
        MigrationJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MigrationJob() = default ;
        MigrationJob& operator=(const MigrationJob &) = default ;
        MigrationJob& operator=(MigrationJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
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
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key.
            shared_ptr<string> key_ {};
            // The tag value that corresponds to the tag key.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class StructureInitialization : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StructureInitialization& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(status, status_);
          };
          friend void from_json(const Darabonba::Json& j, StructureInitialization& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(status, status_);
          };
          StructureInitialization() = default ;
          StructureInitialization(const StructureInitialization &) = default ;
          StructureInitialization(StructureInitialization &&) = default ;
          StructureInitialization(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StructureInitialization() = default ;
          StructureInitialization& operator=(const StructureInitialization &) = default ;
          StructureInitialization& operator=(StructureInitialization &&) = default ;
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
          inline StructureInitialization& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline StructureInitialization& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline StructureInitialization& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline StructureInitialization& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if schema migration failed.
          shared_ptr<string> errorMessage_ {};
          // The progress of schema migration. Unit: %.
          shared_ptr<string> percent_ {};
          // The number of tables whose schemas have been migrated.
          shared_ptr<string> progress_ {};
          // The status of schema migration. Valid values:
          // 
          // *   **NotStarted**: Schema migration is not started.
          // *   **Migrating**: Schema migration is in progress.
          // *   **Failed**: Schema migration failed.
          // *   **Finished**: Schema migration is completed.
          shared_ptr<string> status_ {};
        };

        class SourceEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_TO_JSON(EngineName, engineName_);
            DARABONBA_PTR_TO_JSON(IP, IP_);
            DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
            DARABONBA_PTR_FROM_JSON(IP, IP_);
            DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
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
          virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->engineName_ == nullptr && this->IP_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->oracleSID_ == nullptr
        && this->port_ == nullptr && this->userName_ == nullptr; };
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


          // IP Field Functions 
          bool hasIP() const { return this->IP_ != nullptr;};
          void deleteIP() { this->IP_ = nullptr;};
          inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
          inline SourceEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


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


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline SourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // The name of the database to which the migration object in the source instance belongs.
          shared_ptr<string> databaseName_ {};
          // The database type of the source instance.
          shared_ptr<string> engineName_ {};
          // The endpoint of the source instance.
          shared_ptr<string> IP_ {};
          // The ID of the source instance.
          shared_ptr<string> instanceID_ {};
          // The type of the source instance.
          shared_ptr<string> instanceType_ {};
          // This parameter is returned only if the database type of the source instance is **Oracle**.
          shared_ptr<string> oracleSID_ {};
          // The database service port of the source instance.
          shared_ptr<string> port_ {};
          // The database account of the source instance.
          shared_ptr<string> userName_ {};
        };

        class Precheck : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Precheck& obj) { 
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, Precheck& obj) { 
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          Precheck() = default ;
          Precheck(const Precheck &) = default ;
          Precheck(Precheck &&) = default ;
          Precheck(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Precheck() = default ;
          Precheck& operator=(const Precheck &) = default ;
          Precheck& operator=(Precheck &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->percent_ == nullptr
        && this->status_ == nullptr; };
          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline Precheck& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Precheck& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The precheck progress. Unit: %.
          shared_ptr<string> percent_ {};
          // The precheck result. Valid values:
          // 
          // *   **Success**: The task passed the precheck.
          // *   **Failed**: The task failed to pass the precheck.
          shared_ptr<string> status_ {};
        };

        class MigrationObject : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MigrationObject& obj) { 
            DARABONBA_PTR_TO_JSON(SynchronousObject, synchronousObject_);
          };
          friend void from_json(const Darabonba::Json& j, MigrationObject& obj) { 
            DARABONBA_PTR_FROM_JSON(SynchronousObject, synchronousObject_);
          };
          MigrationObject() = default ;
          MigrationObject(const MigrationObject &) = default ;
          MigrationObject(MigrationObject &&) = default ;
          MigrationObject(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MigrationObject() = default ;
          MigrationObject& operator=(const MigrationObject &) = default ;
          MigrationObject& operator=(MigrationObject &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SynchronousObject : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SynchronousObject& obj) { 
              DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
              DARABONBA_PTR_TO_JSON(TableList, tableList_);
              DARABONBA_PTR_TO_JSON(WholeDatabase, wholeDatabase_);
            };
            friend void from_json(const Darabonba::Json& j, SynchronousObject& obj) { 
              DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
              DARABONBA_PTR_FROM_JSON(TableList, tableList_);
              DARABONBA_PTR_FROM_JSON(WholeDatabase, wholeDatabase_);
            };
            SynchronousObject() = default ;
            SynchronousObject(const SynchronousObject &) = default ;
            SynchronousObject(SynchronousObject &&) = default ;
            SynchronousObject(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SynchronousObject() = default ;
            SynchronousObject& operator=(const SynchronousObject &) = default ;
            SynchronousObject& operator=(SynchronousObject &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class TableList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const TableList& obj) { 
                DARABONBA_PTR_TO_JSON(Table, table_);
              };
              friend void from_json(const Darabonba::Json& j, TableList& obj) { 
                DARABONBA_PTR_FROM_JSON(Table, table_);
              };
              TableList() = default ;
              TableList(const TableList &) = default ;
              TableList(TableList &&) = default ;
              TableList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~TableList() = default ;
              TableList& operator=(const TableList &) = default ;
              TableList& operator=(TableList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->table_ == nullptr; };
              // table Field Functions 
              bool hasTable() const { return this->table_ != nullptr;};
              void deleteTable() { this->table_ = nullptr;};
              inline const vector<string> & getTable() const { DARABONBA_PTR_GET_CONST(table_, vector<string>) };
              inline vector<string> getTable() { DARABONBA_PTR_GET(table_, vector<string>) };
              inline TableList& setTable(const vector<string> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
              inline TableList& setTable(vector<string> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


            protected:
              shared_ptr<vector<string>> table_ {};
            };

            virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->tableList_ == nullptr && this->wholeDatabase_ == nullptr; };
            // databaseName Field Functions 
            bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
            void deleteDatabaseName() { this->databaseName_ = nullptr;};
            inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
            inline SynchronousObject& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


            // tableList Field Functions 
            bool hasTableList() const { return this->tableList_ != nullptr;};
            void deleteTableList() { this->tableList_ = nullptr;};
            inline const SynchronousObject::TableList & getTableList() const { DARABONBA_PTR_GET_CONST(tableList_, SynchronousObject::TableList) };
            inline SynchronousObject::TableList getTableList() { DARABONBA_PTR_GET(tableList_, SynchronousObject::TableList) };
            inline SynchronousObject& setTableList(const SynchronousObject::TableList & tableList) { DARABONBA_PTR_SET_VALUE(tableList_, tableList) };
            inline SynchronousObject& setTableList(SynchronousObject::TableList && tableList) { DARABONBA_PTR_SET_RVALUE(tableList_, tableList) };


            // wholeDatabase Field Functions 
            bool hasWholeDatabase() const { return this->wholeDatabase_ != nullptr;};
            void deleteWholeDatabase() { this->wholeDatabase_ = nullptr;};
            inline string getWholeDatabase() const { DARABONBA_PTR_GET_DEFAULT(wholeDatabase_, "") };
            inline SynchronousObject& setWholeDatabase(string wholeDatabase) { DARABONBA_PTR_SET_VALUE(wholeDatabase_, wholeDatabase) };


          protected:
            // The name of the database to which the migration object in the source instance belongs.
            shared_ptr<string> databaseName_ {};
            // The names of the migrated tables.
            shared_ptr<SynchronousObject::TableList> tableList_ {};
            // Indicates whether an entire database is migrated. Valid values:
            // 
            // *   **true**: yes
            // *   **false**: no
            shared_ptr<string> wholeDatabase_ {};
          };

          virtual bool empty() const override { return this->synchronousObject_ == nullptr; };
          // synchronousObject Field Functions 
          bool hasSynchronousObject() const { return this->synchronousObject_ != nullptr;};
          void deleteSynchronousObject() { this->synchronousObject_ = nullptr;};
          inline const vector<MigrationObject::SynchronousObject> & getSynchronousObject() const { DARABONBA_PTR_GET_CONST(synchronousObject_, vector<MigrationObject::SynchronousObject>) };
          inline vector<MigrationObject::SynchronousObject> getSynchronousObject() { DARABONBA_PTR_GET(synchronousObject_, vector<MigrationObject::SynchronousObject>) };
          inline MigrationObject& setSynchronousObject(const vector<MigrationObject::SynchronousObject> & synchronousObject) { DARABONBA_PTR_SET_VALUE(synchronousObject_, synchronousObject) };
          inline MigrationObject& setSynchronousObject(vector<MigrationObject::SynchronousObject> && synchronousObject) { DARABONBA_PTR_SET_RVALUE(synchronousObject_, synchronousObject) };


        protected:
          shared_ptr<vector<MigrationObject::SynchronousObject>> synchronousObject_ {};
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
          // Indicates whether full data migration is performed. Valid values:
          // 
          // *   **true**: yes
          // *   **false**: no
          shared_ptr<bool> dataInitialization_ {};
          // Indicates whether incremental data migration is performed. Valid values:
          // 
          // *   **true**: yes
          // *   **false**: no
          shared_ptr<bool> dataSynchronization_ {};
          // Indicates whether schema migration is performed. Valid values:
          // 
          // *   **true**: yes
          // *   **false**: no
          shared_ptr<bool> structureInitialization_ {};
        };

        class DestinationEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DestinationEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_TO_JSON(EngineName, engineName_);
            DARABONBA_PTR_TO_JSON(IP, IP_);
            DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
            DARABONBA_PTR_FROM_JSON(IP, IP_);
            DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
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
          virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->engineName_ == nullptr && this->IP_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->oracleSID_ == nullptr
        && this->port_ == nullptr && this->userName_ == nullptr; };
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


          // IP Field Functions 
          bool hasIP() const { return this->IP_ != nullptr;};
          void deleteIP() { this->IP_ = nullptr;};
          inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
          inline DestinationEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


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
          // The endpoint of the destination instance.
          shared_ptr<string> IP_ {};
          // The ID of the destination instance.
          shared_ptr<string> instanceID_ {};
          // The type of the destination instance.
          shared_ptr<string> instanceType_ {};
          // This parameter is returned only if the database type of the destination instance is **Oracle**.
          shared_ptr<string> oracleSID_ {};
          // The database service port of the destination instance.
          shared_ptr<string> port_ {};
          // The database account of the destination instance.
          shared_ptr<string> userName_ {};
        };

        class DataSynchronization : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSynchronization& obj) { 
            DARABONBA_PTR_TO_JSON(Delay, delay_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(status, status_);
          };
          friend void from_json(const Darabonba::Json& j, DataSynchronization& obj) { 
            DARABONBA_PTR_FROM_JSON(Delay, delay_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(status, status_);
          };
          DataSynchronization() = default ;
          DataSynchronization(const DataSynchronization &) = default ;
          DataSynchronization(DataSynchronization &&) = default ;
          DataSynchronization(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataSynchronization() = default ;
          DataSynchronization& operator=(const DataSynchronization &) = default ;
          DataSynchronization& operator=(DataSynchronization &&) = default ;
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
          inline DataSynchronization& setDelay(string delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline DataSynchronization& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline DataSynchronization& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DataSynchronization& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The latency of incremental data migration. Unit: seconds.
          shared_ptr<string> delay_ {};
          // The error message returned if incremental data migration failed.
          shared_ptr<string> errorMessage_ {};
          // The progress of incremental data migration. Unit: %.
          shared_ptr<string> percent_ {};
          // The status of incremental data migration. Valid values:
          // 
          // *   **NotStarted**: Incremental data migration is not started.
          // *   **Migrating**: Incremental data migration is in progress.
          // *   **Failed**: Incremental data migration failed.
          // *   **Finished**: Incremental data migration is completed.
          // *   **Catched**: Incremental data migration is not delayed.
          shared_ptr<string> status_ {};
        };

        class DataInitialization : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataInitialization& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(status, status_);
          };
          friend void from_json(const Darabonba::Json& j, DataInitialization& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(status, status_);
          };
          DataInitialization() = default ;
          DataInitialization(const DataInitialization &) = default ;
          DataInitialization(DataInitialization &&) = default ;
          DataInitialization(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataInitialization() = default ;
          DataInitialization& operator=(const DataInitialization &) = default ;
          DataInitialization& operator=(DataInitialization &&) = default ;
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
          inline DataInitialization& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline DataInitialization& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline DataInitialization& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DataInitialization& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if full data migration failed.
          shared_ptr<string> errorMessage_ {};
          // The migration progress. Unit: %.
          shared_ptr<string> percent_ {};
          // The number of records that have been migrated during full data migration.
          shared_ptr<string> progress_ {};
          // The status of full data migration. Valid values:
          // 
          // *   **NotStarted**: Full data migration is not started.
          // *   **Migrating**: Full data migration is in progress.
          // *   **Failed**: Full data migration failed.
          // *   **Finished**: Full data migration is completed.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->dataInitialization_ == nullptr
        && this->dataSynchronization_ == nullptr && this->destinationEndpoint_ == nullptr && this->instanceCreateTime_ == nullptr && this->jobCreateTime_ == nullptr && this->migrationJobClass_ == nullptr
        && this->migrationJobID_ == nullptr && this->migrationJobName_ == nullptr && this->migrationJobStatus_ == nullptr && this->migrationMode_ == nullptr && this->migrationObject_ == nullptr
        && this->payType_ == nullptr && this->precheck_ == nullptr && this->sourceEndpoint_ == nullptr && this->structureInitialization_ == nullptr && this->tags_ == nullptr; };
        // dataInitialization Field Functions 
        bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
        void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
        inline const MigrationJob::DataInitialization & getDataInitialization() const { DARABONBA_PTR_GET_CONST(dataInitialization_, MigrationJob::DataInitialization) };
        inline MigrationJob::DataInitialization getDataInitialization() { DARABONBA_PTR_GET(dataInitialization_, MigrationJob::DataInitialization) };
        inline MigrationJob& setDataInitialization(const MigrationJob::DataInitialization & dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };
        inline MigrationJob& setDataInitialization(MigrationJob::DataInitialization && dataInitialization) { DARABONBA_PTR_SET_RVALUE(dataInitialization_, dataInitialization) };


        // dataSynchronization Field Functions 
        bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
        void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
        inline const MigrationJob::DataSynchronization & getDataSynchronization() const { DARABONBA_PTR_GET_CONST(dataSynchronization_, MigrationJob::DataSynchronization) };
        inline MigrationJob::DataSynchronization getDataSynchronization() { DARABONBA_PTR_GET(dataSynchronization_, MigrationJob::DataSynchronization) };
        inline MigrationJob& setDataSynchronization(const MigrationJob::DataSynchronization & dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };
        inline MigrationJob& setDataSynchronization(MigrationJob::DataSynchronization && dataSynchronization) { DARABONBA_PTR_SET_RVALUE(dataSynchronization_, dataSynchronization) };


        // destinationEndpoint Field Functions 
        bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
        void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
        inline const MigrationJob::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, MigrationJob::DestinationEndpoint) };
        inline MigrationJob::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, MigrationJob::DestinationEndpoint) };
        inline MigrationJob& setDestinationEndpoint(const MigrationJob::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
        inline MigrationJob& setDestinationEndpoint(MigrationJob::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


        // instanceCreateTime Field Functions 
        bool hasInstanceCreateTime() const { return this->instanceCreateTime_ != nullptr;};
        void deleteInstanceCreateTime() { this->instanceCreateTime_ = nullptr;};
        inline string getInstanceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(instanceCreateTime_, "") };
        inline MigrationJob& setInstanceCreateTime(string instanceCreateTime) { DARABONBA_PTR_SET_VALUE(instanceCreateTime_, instanceCreateTime) };


        // jobCreateTime Field Functions 
        bool hasJobCreateTime() const { return this->jobCreateTime_ != nullptr;};
        void deleteJobCreateTime() { this->jobCreateTime_ = nullptr;};
        inline string getJobCreateTime() const { DARABONBA_PTR_GET_DEFAULT(jobCreateTime_, "") };
        inline MigrationJob& setJobCreateTime(string jobCreateTime) { DARABONBA_PTR_SET_VALUE(jobCreateTime_, jobCreateTime) };


        // migrationJobClass Field Functions 
        bool hasMigrationJobClass() const { return this->migrationJobClass_ != nullptr;};
        void deleteMigrationJobClass() { this->migrationJobClass_ = nullptr;};
        inline string getMigrationJobClass() const { DARABONBA_PTR_GET_DEFAULT(migrationJobClass_, "") };
        inline MigrationJob& setMigrationJobClass(string migrationJobClass) { DARABONBA_PTR_SET_VALUE(migrationJobClass_, migrationJobClass) };


        // migrationJobID Field Functions 
        bool hasMigrationJobID() const { return this->migrationJobID_ != nullptr;};
        void deleteMigrationJobID() { this->migrationJobID_ = nullptr;};
        inline string getMigrationJobID() const { DARABONBA_PTR_GET_DEFAULT(migrationJobID_, "") };
        inline MigrationJob& setMigrationJobID(string migrationJobID) { DARABONBA_PTR_SET_VALUE(migrationJobID_, migrationJobID) };


        // migrationJobName Field Functions 
        bool hasMigrationJobName() const { return this->migrationJobName_ != nullptr;};
        void deleteMigrationJobName() { this->migrationJobName_ = nullptr;};
        inline string getMigrationJobName() const { DARABONBA_PTR_GET_DEFAULT(migrationJobName_, "") };
        inline MigrationJob& setMigrationJobName(string migrationJobName) { DARABONBA_PTR_SET_VALUE(migrationJobName_, migrationJobName) };


        // migrationJobStatus Field Functions 
        bool hasMigrationJobStatus() const { return this->migrationJobStatus_ != nullptr;};
        void deleteMigrationJobStatus() { this->migrationJobStatus_ = nullptr;};
        inline string getMigrationJobStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationJobStatus_, "") };
        inline MigrationJob& setMigrationJobStatus(string migrationJobStatus) { DARABONBA_PTR_SET_VALUE(migrationJobStatus_, migrationJobStatus) };


        // migrationMode Field Functions 
        bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
        void deleteMigrationMode() { this->migrationMode_ = nullptr;};
        inline const MigrationJob::MigrationMode & getMigrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, MigrationJob::MigrationMode) };
        inline MigrationJob::MigrationMode getMigrationMode() { DARABONBA_PTR_GET(migrationMode_, MigrationJob::MigrationMode) };
        inline MigrationJob& setMigrationMode(const MigrationJob::MigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
        inline MigrationJob& setMigrationMode(MigrationJob::MigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


        // migrationObject Field Functions 
        bool hasMigrationObject() const { return this->migrationObject_ != nullptr;};
        void deleteMigrationObject() { this->migrationObject_ = nullptr;};
        inline const MigrationJob::MigrationObject & getMigrationObject() const { DARABONBA_PTR_GET_CONST(migrationObject_, MigrationJob::MigrationObject) };
        inline MigrationJob::MigrationObject getMigrationObject() { DARABONBA_PTR_GET(migrationObject_, MigrationJob::MigrationObject) };
        inline MigrationJob& setMigrationObject(const MigrationJob::MigrationObject & migrationObject) { DARABONBA_PTR_SET_VALUE(migrationObject_, migrationObject) };
        inline MigrationJob& setMigrationObject(MigrationJob::MigrationObject && migrationObject) { DARABONBA_PTR_SET_RVALUE(migrationObject_, migrationObject) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline MigrationJob& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // precheck Field Functions 
        bool hasPrecheck() const { return this->precheck_ != nullptr;};
        void deletePrecheck() { this->precheck_ = nullptr;};
        inline const MigrationJob::Precheck & getPrecheck() const { DARABONBA_PTR_GET_CONST(precheck_, MigrationJob::Precheck) };
        inline MigrationJob::Precheck getPrecheck() { DARABONBA_PTR_GET(precheck_, MigrationJob::Precheck) };
        inline MigrationJob& setPrecheck(const MigrationJob::Precheck & precheck) { DARABONBA_PTR_SET_VALUE(precheck_, precheck) };
        inline MigrationJob& setPrecheck(MigrationJob::Precheck && precheck) { DARABONBA_PTR_SET_RVALUE(precheck_, precheck) };


        // sourceEndpoint Field Functions 
        bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
        void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
        inline const MigrationJob::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, MigrationJob::SourceEndpoint) };
        inline MigrationJob::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, MigrationJob::SourceEndpoint) };
        inline MigrationJob& setSourceEndpoint(const MigrationJob::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
        inline MigrationJob& setSourceEndpoint(MigrationJob::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


        // structureInitialization Field Functions 
        bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
        void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
        inline const MigrationJob::StructureInitialization & getStructureInitialization() const { DARABONBA_PTR_GET_CONST(structureInitialization_, MigrationJob::StructureInitialization) };
        inline MigrationJob::StructureInitialization getStructureInitialization() { DARABONBA_PTR_GET(structureInitialization_, MigrationJob::StructureInitialization) };
        inline MigrationJob& setStructureInitialization(const MigrationJob::StructureInitialization & structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };
        inline MigrationJob& setStructureInitialization(MigrationJob::StructureInitialization && structureInitialization) { DARABONBA_PTR_SET_RVALUE(structureInitialization_, structureInitialization) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const MigrationJob::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, MigrationJob::Tags) };
        inline MigrationJob::Tags getTags() { DARABONBA_PTR_GET(tags_, MigrationJob::Tags) };
        inline MigrationJob& setTags(const MigrationJob::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline MigrationJob& setTags(MigrationJob::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The details of full data migration.
        shared_ptr<MigrationJob::DataInitialization> dataInitialization_ {};
        // The details of incremental data migration.
        shared_ptr<MigrationJob::DataSynchronization> dataSynchronization_ {};
        // The connection settings of the destination instance.
        shared_ptr<MigrationJob::DestinationEndpoint> destinationEndpoint_ {};
        // The time when the data migration instance was created. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
        shared_ptr<string> instanceCreateTime_ {};
        // The time when the data migration task was created. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
        shared_ptr<string> jobCreateTime_ {};
        // The specification of the data migration instance. Valid values: **small**, **medium**, **large**, **xlarge**, and **2xlarge**. For more information, see [Specifications of data migration instances](https://help.aliyun.com/document_detail/26606.html).
        shared_ptr<string> migrationJobClass_ {};
        // The ID of the data migration instance.
        shared_ptr<string> migrationJobID_ {};
        // The name of the data migration task.
        shared_ptr<string> migrationJobName_ {};
        // The status of the data migration task. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Prechecking**: The task is being prechecked.
        // *   **PrecheckFailed**: The task failed to pass the precheck.
        // *   **Migrating**: The task is migrating data.
        // *   **Suspending**: The task is paused.
        // *   **MigrationFailed**: The task failed to migrate data.
        // *   **Finished**: The task is completed.
        shared_ptr<string> migrationJobStatus_ {};
        // The migration types.
        shared_ptr<MigrationJob::MigrationMode> migrationMode_ {};
        // The objects that are migrated by the task.
        shared_ptr<MigrationJob::MigrationObject> migrationObject_ {};
        // The billing method of the data migration instance. The value is **PostPaid** (pay-as-you-go).
        shared_ptr<string> payType_ {};
        // The precheck details.
        shared_ptr<MigrationJob::Precheck> precheck_ {};
        // The connection settings of the source instance.
        shared_ptr<MigrationJob::SourceEndpoint> sourceEndpoint_ {};
        // The details of schema migration.
        shared_ptr<MigrationJob::StructureInitialization> structureInitialization_ {};
        // The collection of tags.
        shared_ptr<MigrationJob::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->migrationJob_ == nullptr; };
      // migrationJob Field Functions 
      bool hasMigrationJob() const { return this->migrationJob_ != nullptr;};
      void deleteMigrationJob() { this->migrationJob_ = nullptr;};
      inline const vector<MigrationJobs::MigrationJob> & getMigrationJob() const { DARABONBA_PTR_GET_CONST(migrationJob_, vector<MigrationJobs::MigrationJob>) };
      inline vector<MigrationJobs::MigrationJob> getMigrationJob() { DARABONBA_PTR_GET(migrationJob_, vector<MigrationJobs::MigrationJob>) };
      inline MigrationJobs& setMigrationJob(const vector<MigrationJobs::MigrationJob> & migrationJob) { DARABONBA_PTR_SET_VALUE(migrationJob_, migrationJob) };
      inline MigrationJobs& setMigrationJob(vector<MigrationJobs::MigrationJob> && migrationJob) { DARABONBA_PTR_SET_RVALUE(migrationJob_, migrationJob) };


    protected:
      shared_ptr<vector<MigrationJobs::MigrationJob>> migrationJob_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->migrationJobs_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalRecordCount_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeMigrationJobsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeMigrationJobsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // migrationJobs Field Functions 
    bool hasMigrationJobs() const { return this->migrationJobs_ != nullptr;};
    void deleteMigrationJobs() { this->migrationJobs_ = nullptr;};
    inline const DescribeMigrationJobsResponseBody::MigrationJobs & getMigrationJobs() const { DARABONBA_PTR_GET_CONST(migrationJobs_, DescribeMigrationJobsResponseBody::MigrationJobs) };
    inline DescribeMigrationJobsResponseBody::MigrationJobs getMigrationJobs() { DARABONBA_PTR_GET(migrationJobs_, DescribeMigrationJobsResponseBody::MigrationJobs) };
    inline DescribeMigrationJobsResponseBody& setMigrationJobs(const DescribeMigrationJobsResponseBody::MigrationJobs & migrationJobs) { DARABONBA_PTR_SET_VALUE(migrationJobs_, migrationJobs) };
    inline DescribeMigrationJobsResponseBody& setMigrationJobs(DescribeMigrationJobsResponseBody::MigrationJobs && migrationJobs) { DARABONBA_PTR_SET_RVALUE(migrationJobs_, migrationJobs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMigrationJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeMigrationJobsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMigrationJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeMigrationJobsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeMigrationJobsResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The error code returned if the call failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errMessage_ {};
    // The list of data migration instances and the details of each instance.
    shared_ptr<DescribeMigrationJobsResponseBody::MigrationJobs> migrationJobs_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of entries that can be displayed on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<string> success_ {};
    // The total number of data migration instances that belong to your Alibaba Cloud account.
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
