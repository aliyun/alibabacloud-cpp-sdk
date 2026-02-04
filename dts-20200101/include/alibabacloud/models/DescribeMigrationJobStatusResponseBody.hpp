// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSTATUSRESPONSEBODY_HPP_
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
  class DescribeMigrationJobStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(MigrationJobClass, migrationJobClass_);
      DARABONBA_PTR_TO_JSON(MigrationJobId, migrationJobId_);
      DARABONBA_PTR_TO_JSON(MigrationJobName, migrationJobName_);
      DARABONBA_PTR_TO_JSON(MigrationJobStatus, migrationJobStatus_);
      DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_TO_JSON(MigrationObject, migrationObject_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(MigrationJobClass, migrationJobClass_);
      DARABONBA_PTR_FROM_JSON(MigrationJobId, migrationJobId_);
      DARABONBA_PTR_FROM_JSON(MigrationJobName, migrationJobName_);
      DARABONBA_PTR_FROM_JSON(MigrationJobStatus, migrationJobStatus_);
      DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_FROM_JSON(MigrationObject, migrationObject_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeMigrationJobStatusResponseBody() = default ;
    DescribeMigrationJobStatusResponseBody(const DescribeMigrationJobStatusResponseBody &) = default ;
    DescribeMigrationJobStatusResponseBody(DescribeMigrationJobStatusResponseBody &&) = default ;
    DescribeMigrationJobStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobStatusResponseBody() = default ;
    DescribeMigrationJobStatusResponseBody& operator=(const DescribeMigrationJobStatusResponseBody &) = default ;
    DescribeMigrationJobStatusResponseBody& operator=(DescribeMigrationJobStatusResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
        DARABONBA_PTR_TO_JSON(oracleSID, oracleSID_);
      };
      friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
        DARABONBA_PTR_FROM_JSON(oracleSID, oracleSID_);
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
        && this->engineName_ == nullptr && this->IP_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->port_ == nullptr
        && this->userName_ == nullptr && this->oracleSID_ == nullptr; };
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


      // oracleSID Field Functions 
      bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
      void deleteOracleSID() { this->oracleSID_ = nullptr;};
      inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
      inline SourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


    protected:
      // The name of the database to which the migration object in the source instance belongs.
      shared_ptr<string> databaseName_ {};
      // The database type of the source instance.
      shared_ptr<string> engineName_ {};
      // The endpoint of the source instance.
      shared_ptr<string> IP_ {};
      // The ID of the source instance.
      shared_ptr<string> instanceId_ {};
      // The type of the source instance.
      // 
      // *   **RDS**: ApsaraDB RDS instance
      // *   **ECS**: self-managed database that is hosted on Elastic Compute Service (ECS)
      // *   **LocalInstance**: self-managed database with a public IP address
      // *   **Express**: self-managed database that is connected over Express Connect, VPN Gateway, or Smart Access Gateway
      // *   **MongoDB**: ApsaraDB for MongoDB instance
      // *   **POLARDB**: PolarDB for MySQL cluster (available only for the China site)
      shared_ptr<string> instanceType_ {};
      // The database service port of the source instance.
      shared_ptr<string> port_ {};
      // The database account of the source instance.
      shared_ptr<string> userName_ {};
      // The SID of the Oracle database.
      // 
      // >  This parameter is returned only if the database type of the source instance is **Oracle**.
      shared_ptr<string> oracleSID_ {};
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
          DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
        };
        friend void from_json(const Darabonba::Json& j, Detail& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
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
        class CheckItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CheckItem& obj) { 
            DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(ItemName, itemName_);
            DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
          };
          friend void from_json(const Darabonba::Json& j, CheckItem& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
            DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
          };
          CheckItem() = default ;
          CheckItem(const CheckItem &) = default ;
          CheckItem(CheckItem &&) = default ;
          CheckItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CheckItem() = default ;
          CheckItem& operator=(const CheckItem &) = default ;
          CheckItem& operator=(CheckItem &&) = default ;
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
          inline CheckItem& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline CheckItem& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // itemName Field Functions 
          bool hasItemName() const { return this->itemName_ != nullptr;};
          void deleteItemName() { this->itemName_ = nullptr;};
          inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
          inline CheckItem& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


          // repairMethod Field Functions 
          bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
          void deleteRepairMethod() { this->repairMethod_ = nullptr;};
          inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
          inline CheckItem& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


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

        virtual bool empty() const override { return this->checkItem_ == nullptr; };
        // checkItem Field Functions 
        bool hasCheckItem() const { return this->checkItem_ != nullptr;};
        void deleteCheckItem() { this->checkItem_ = nullptr;};
        inline const vector<Detail::CheckItem> & getCheckItem() const { DARABONBA_PTR_GET_CONST(checkItem_, vector<Detail::CheckItem>) };
        inline vector<Detail::CheckItem> getCheckItem() { DARABONBA_PTR_GET(checkItem_, vector<Detail::CheckItem>) };
        inline Detail& setCheckItem(const vector<Detail::CheckItem> & checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };
        inline Detail& setCheckItem(vector<Detail::CheckItem> && checkItem) { DARABONBA_PTR_SET_RVALUE(checkItem_, checkItem) };


      protected:
        shared_ptr<vector<Detail::CheckItem>> checkItem_ {};
      };

      virtual bool empty() const override { return this->detail_ == nullptr
        && this->percent_ == nullptr && this->status_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline const PrecheckStatus::Detail & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, PrecheckStatus::Detail) };
      inline PrecheckStatus::Detail getDetail() { DARABONBA_PTR_GET(detail_, PrecheckStatus::Detail) };
      inline PrecheckStatus& setDetail(const PrecheckStatus::Detail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
      inline PrecheckStatus& setDetail(PrecheckStatus::Detail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


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
      shared_ptr<PrecheckStatus::Detail> detail_ {};
      // The precheck progress. Unit: %.
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

    class MigrationMode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MigrationMode& obj) { 
        DARABONBA_PTR_TO_JSON(dataInitialization, dataInitialization_);
        DARABONBA_PTR_TO_JSON(dataSynchronization, dataSynchronization_);
        DARABONBA_PTR_TO_JSON(structureInitialization, structureInitialization_);
      };
      friend void from_json(const Darabonba::Json& j, MigrationMode& obj) { 
        DARABONBA_PTR_FROM_JSON(dataInitialization, dataInitialization_);
        DARABONBA_PTR_FROM_JSON(dataSynchronization, dataSynchronization_);
        DARABONBA_PTR_FROM_JSON(structureInitialization, structureInitialization_);
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
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
        DARABONBA_PTR_TO_JSON(oracleSID, oracleSID_);
      };
      friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
        DARABONBA_PTR_FROM_JSON(oracleSID, oracleSID_);
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
        && this->engineName_ == nullptr && this->IP_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->port_ == nullptr
        && this->userName_ == nullptr && this->oracleSID_ == nullptr; };
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


      // oracleSID Field Functions 
      bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
      void deleteOracleSID() { this->oracleSID_ = nullptr;};
      inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
      inline DestinationEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


    protected:
      // The name of the database to which the migration object in the destination instance belongs.
      shared_ptr<string> databaseName_ {};
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
      // The system ID (SID) of the Oracle database.
      // 
      // >  This parameter is returned only if the database type of the destination instance is **Oracle**.
      shared_ptr<string> oracleSID_ {};
    };

    class DataSynchronizationStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSynchronizationStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
        DARABONBA_PTR_TO_JSON(Delay, delay_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Percent, percent_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DataSynchronizationStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
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
      virtual bool empty() const override { return this->checkpoint_ == nullptr
        && this->delay_ == nullptr && this->errorMessage_ == nullptr && this->percent_ == nullptr && this->status_ == nullptr; };
      // checkpoint Field Functions 
      bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
      void deleteCheckpoint() { this->checkpoint_ = nullptr;};
      inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
      inline DataSynchronizationStatus& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


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
      // The UNIX timestamp generated when the latest incremental data is migrated. Unit: seconds.
      shared_ptr<string> checkpoint_ {};
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

    virtual bool empty() const override { return this->dataInitializationStatus_ == nullptr
        && this->dataSynchronizationStatus_ == nullptr && this->destinationEndpoint_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->migrationJobClass_ == nullptr
        && this->migrationJobId_ == nullptr && this->migrationJobName_ == nullptr && this->migrationJobStatus_ == nullptr && this->migrationMode_ == nullptr && this->migrationObject_ == nullptr
        && this->payType_ == nullptr && this->precheckStatus_ == nullptr && this->requestId_ == nullptr && this->sourceEndpoint_ == nullptr && this->structureInitializationStatus_ == nullptr
        && this->success_ == nullptr && this->taskId_ == nullptr; };
    // dataInitializationStatus Field Functions 
    bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
    void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
    inline const DescribeMigrationJobStatusResponseBody::DataInitializationStatus & getDataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, DescribeMigrationJobStatusResponseBody::DataInitializationStatus) };
    inline DescribeMigrationJobStatusResponseBody::DataInitializationStatus getDataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, DescribeMigrationJobStatusResponseBody::DataInitializationStatus) };
    inline DescribeMigrationJobStatusResponseBody& setDataInitializationStatus(const DescribeMigrationJobStatusResponseBody::DataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
    inline DescribeMigrationJobStatusResponseBody& setDataInitializationStatus(DescribeMigrationJobStatusResponseBody::DataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


    // dataSynchronizationStatus Field Functions 
    bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
    void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
    inline const DescribeMigrationJobStatusResponseBody::DataSynchronizationStatus & getDataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, DescribeMigrationJobStatusResponseBody::DataSynchronizationStatus) };
    inline DescribeMigrationJobStatusResponseBody::DataSynchronizationStatus getDataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, DescribeMigrationJobStatusResponseBody::DataSynchronizationStatus) };
    inline DescribeMigrationJobStatusResponseBody& setDataSynchronizationStatus(const DescribeMigrationJobStatusResponseBody::DataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
    inline DescribeMigrationJobStatusResponseBody& setDataSynchronizationStatus(DescribeMigrationJobStatusResponseBody::DataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const DescribeMigrationJobStatusResponseBody::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, DescribeMigrationJobStatusResponseBody::DestinationEndpoint) };
    inline DescribeMigrationJobStatusResponseBody::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, DescribeMigrationJobStatusResponseBody::DestinationEndpoint) };
    inline DescribeMigrationJobStatusResponseBody& setDestinationEndpoint(const DescribeMigrationJobStatusResponseBody::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline DescribeMigrationJobStatusResponseBody& setDestinationEndpoint(DescribeMigrationJobStatusResponseBody::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeMigrationJobStatusResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeMigrationJobStatusResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // migrationJobClass Field Functions 
    bool hasMigrationJobClass() const { return this->migrationJobClass_ != nullptr;};
    void deleteMigrationJobClass() { this->migrationJobClass_ = nullptr;};
    inline string getMigrationJobClass() const { DARABONBA_PTR_GET_DEFAULT(migrationJobClass_, "") };
    inline DescribeMigrationJobStatusResponseBody& setMigrationJobClass(string migrationJobClass) { DARABONBA_PTR_SET_VALUE(migrationJobClass_, migrationJobClass) };


    // migrationJobId Field Functions 
    bool hasMigrationJobId() const { return this->migrationJobId_ != nullptr;};
    void deleteMigrationJobId() { this->migrationJobId_ = nullptr;};
    inline string getMigrationJobId() const { DARABONBA_PTR_GET_DEFAULT(migrationJobId_, "") };
    inline DescribeMigrationJobStatusResponseBody& setMigrationJobId(string migrationJobId) { DARABONBA_PTR_SET_VALUE(migrationJobId_, migrationJobId) };


    // migrationJobName Field Functions 
    bool hasMigrationJobName() const { return this->migrationJobName_ != nullptr;};
    void deleteMigrationJobName() { this->migrationJobName_ = nullptr;};
    inline string getMigrationJobName() const { DARABONBA_PTR_GET_DEFAULT(migrationJobName_, "") };
    inline DescribeMigrationJobStatusResponseBody& setMigrationJobName(string migrationJobName) { DARABONBA_PTR_SET_VALUE(migrationJobName_, migrationJobName) };


    // migrationJobStatus Field Functions 
    bool hasMigrationJobStatus() const { return this->migrationJobStatus_ != nullptr;};
    void deleteMigrationJobStatus() { this->migrationJobStatus_ = nullptr;};
    inline string getMigrationJobStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationJobStatus_, "") };
    inline DescribeMigrationJobStatusResponseBody& setMigrationJobStatus(string migrationJobStatus) { DARABONBA_PTR_SET_VALUE(migrationJobStatus_, migrationJobStatus) };


    // migrationMode Field Functions 
    bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
    void deleteMigrationMode() { this->migrationMode_ = nullptr;};
    inline const DescribeMigrationJobStatusResponseBody::MigrationMode & getMigrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, DescribeMigrationJobStatusResponseBody::MigrationMode) };
    inline DescribeMigrationJobStatusResponseBody::MigrationMode getMigrationMode() { DARABONBA_PTR_GET(migrationMode_, DescribeMigrationJobStatusResponseBody::MigrationMode) };
    inline DescribeMigrationJobStatusResponseBody& setMigrationMode(const DescribeMigrationJobStatusResponseBody::MigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
    inline DescribeMigrationJobStatusResponseBody& setMigrationMode(DescribeMigrationJobStatusResponseBody::MigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


    // migrationObject Field Functions 
    bool hasMigrationObject() const { return this->migrationObject_ != nullptr;};
    void deleteMigrationObject() { this->migrationObject_ = nullptr;};
    inline string getMigrationObject() const { DARABONBA_PTR_GET_DEFAULT(migrationObject_, "") };
    inline DescribeMigrationJobStatusResponseBody& setMigrationObject(string migrationObject) { DARABONBA_PTR_SET_VALUE(migrationObject_, migrationObject) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeMigrationJobStatusResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // precheckStatus Field Functions 
    bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
    void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
    inline const DescribeMigrationJobStatusResponseBody::PrecheckStatus & getPrecheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, DescribeMigrationJobStatusResponseBody::PrecheckStatus) };
    inline DescribeMigrationJobStatusResponseBody::PrecheckStatus getPrecheckStatus() { DARABONBA_PTR_GET(precheckStatus_, DescribeMigrationJobStatusResponseBody::PrecheckStatus) };
    inline DescribeMigrationJobStatusResponseBody& setPrecheckStatus(const DescribeMigrationJobStatusResponseBody::PrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
    inline DescribeMigrationJobStatusResponseBody& setPrecheckStatus(DescribeMigrationJobStatusResponseBody::PrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMigrationJobStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const DescribeMigrationJobStatusResponseBody::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, DescribeMigrationJobStatusResponseBody::SourceEndpoint) };
    inline DescribeMigrationJobStatusResponseBody::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, DescribeMigrationJobStatusResponseBody::SourceEndpoint) };
    inline DescribeMigrationJobStatusResponseBody& setSourceEndpoint(const DescribeMigrationJobStatusResponseBody::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeMigrationJobStatusResponseBody& setSourceEndpoint(DescribeMigrationJobStatusResponseBody::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // structureInitializationStatus Field Functions 
    bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
    void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
    inline const DescribeMigrationJobStatusResponseBody::StructureInitializationStatus & getStructureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, DescribeMigrationJobStatusResponseBody::StructureInitializationStatus) };
    inline DescribeMigrationJobStatusResponseBody::StructureInitializationStatus getStructureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, DescribeMigrationJobStatusResponseBody::StructureInitializationStatus) };
    inline DescribeMigrationJobStatusResponseBody& setStructureInitializationStatus(const DescribeMigrationJobStatusResponseBody::StructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
    inline DescribeMigrationJobStatusResponseBody& setStructureInitializationStatus(DescribeMigrationJobStatusResponseBody::StructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeMigrationJobStatusResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeMigrationJobStatusResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The status of full data migration.
    shared_ptr<DescribeMigrationJobStatusResponseBody::DataInitializationStatus> dataInitializationStatus_ {};
    // The status of incremental data migration.
    shared_ptr<DescribeMigrationJobStatusResponseBody::DataSynchronizationStatus> dataSynchronizationStatus_ {};
    // The connection settings of the destination instance.
    shared_ptr<DescribeMigrationJobStatusResponseBody::DestinationEndpoint> destinationEndpoint_ {};
    // The error code returned if the call failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errMessage_ {};
    // The specification of the data migration instance. Valid values: **small**, **medium**, **large**, **xlarge**, and **2xlarge**. For more information, see [Specifications of data migration instances](https://help.aliyun.com/document_detail/26606.html).
    shared_ptr<string> migrationJobClass_ {};
    // The ID of the data migration instance.
    shared_ptr<string> migrationJobId_ {};
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
    shared_ptr<DescribeMigrationJobStatusResponseBody::MigrationMode> migrationMode_ {};
    // The objects that are migrated by the task.
    shared_ptr<string> migrationObject_ {};
    // The billing method of the data migration instance. The value is **PostPaid** (pay-as-you-go).
    shared_ptr<string> payType_ {};
    // The precheck details.
    shared_ptr<DescribeMigrationJobStatusResponseBody::PrecheckStatus> precheckStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The connection settings of the source instance.
    shared_ptr<DescribeMigrationJobStatusResponseBody::SourceEndpoint> sourceEndpoint_ {};
    // The status of schema migration.
    shared_ptr<DescribeMigrationJobStatusResponseBody::StructureInitializationStatus> structureInitializationStatus_ {};
    // Indicates whether the call was successful.
    shared_ptr<string> success_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
