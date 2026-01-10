// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCorrectOrderDetail, dataCorrectOrderDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCorrectOrderDetail, dataCorrectOrderDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataCorrectOrderDetailResponseBody() = default ;
    GetDataCorrectOrderDetailResponseBody(const GetDataCorrectOrderDetailResponseBody &) = default ;
    GetDataCorrectOrderDetailResponseBody(GetDataCorrectOrderDetailResponseBody &&) = default ;
    GetDataCorrectOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectOrderDetailResponseBody() = default ;
    GetDataCorrectOrderDetailResponseBody& operator=(const GetDataCorrectOrderDetailResponseBody &) = default ;
    GetDataCorrectOrderDetailResponseBody& operator=(GetDataCorrectOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataCorrectOrderDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataCorrectOrderDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigDetail, configDetail_);
        DARABONBA_PTR_TO_JSON(DatabaseList, databaseList_);
        DARABONBA_PTR_TO_JSON(ExecMode, execMode_);
        DARABONBA_PTR_TO_JSON(OrderDetail, orderDetail_);
        DARABONBA_PTR_TO_JSON(PreCheckDetail, preCheckDetail_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DataCorrectOrderDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigDetail, configDetail_);
        DARABONBA_PTR_FROM_JSON(DatabaseList, databaseList_);
        DARABONBA_PTR_FROM_JSON(ExecMode, execMode_);
        DARABONBA_PTR_FROM_JSON(OrderDetail, orderDetail_);
        DARABONBA_PTR_FROM_JSON(PreCheckDetail, preCheckDetail_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DataCorrectOrderDetail() = default ;
      DataCorrectOrderDetail(const DataCorrectOrderDetail &) = default ;
      DataCorrectOrderDetail(DataCorrectOrderDetail &&) = default ;
      DataCorrectOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataCorrectOrderDetail() = default ;
      DataCorrectOrderDetail& operator=(const DataCorrectOrderDetail &) = default ;
      DataCorrectOrderDetail& operator=(DataCorrectOrderDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PreCheckDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreCheckDetail& obj) { 
          DARABONBA_PTR_TO_JSON(TaskCheckDO, taskCheckDO_);
        };
        friend void from_json(const Darabonba::Json& j, PreCheckDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(TaskCheckDO, taskCheckDO_);
        };
        PreCheckDetail() = default ;
        PreCheckDetail(const PreCheckDetail &) = default ;
        PreCheckDetail(PreCheckDetail &&) = default ;
        PreCheckDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreCheckDetail() = default ;
        PreCheckDetail& operator=(const PreCheckDetail &) = default ;
        PreCheckDetail& operator=(PreCheckDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TaskCheckDO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TaskCheckDO& obj) { 
            DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
            DARABONBA_PTR_TO_JSON(CheckStep, checkStep_);
            DARABONBA_PTR_TO_JSON(UserTip, userTip_);
          };
          friend void from_json(const Darabonba::Json& j, TaskCheckDO& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
            DARABONBA_PTR_FROM_JSON(CheckStep, checkStep_);
            DARABONBA_PTR_FROM_JSON(UserTip, userTip_);
          };
          TaskCheckDO() = default ;
          TaskCheckDO(const TaskCheckDO &) = default ;
          TaskCheckDO(TaskCheckDO &&) = default ;
          TaskCheckDO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TaskCheckDO() = default ;
          TaskCheckDO& operator=(const TaskCheckDO &) = default ;
          TaskCheckDO& operator=(TaskCheckDO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checkStatus_ == nullptr
        && this->checkStep_ == nullptr && this->userTip_ == nullptr; };
          // checkStatus Field Functions 
          bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
          void deleteCheckStatus() { this->checkStatus_ = nullptr;};
          inline string getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, "") };
          inline TaskCheckDO& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


          // checkStep Field Functions 
          bool hasCheckStep() const { return this->checkStep_ != nullptr;};
          void deleteCheckStep() { this->checkStep_ = nullptr;};
          inline string getCheckStep() const { DARABONBA_PTR_GET_DEFAULT(checkStep_, "") };
          inline TaskCheckDO& setCheckStep(string checkStep) { DARABONBA_PTR_SET_VALUE(checkStep_, checkStep) };


          // userTip Field Functions 
          bool hasUserTip() const { return this->userTip_ != nullptr;};
          void deleteUserTip() { this->userTip_ = nullptr;};
          inline string getUserTip() const { DARABONBA_PTR_GET_DEFAULT(userTip_, "") };
          inline TaskCheckDO& setUserTip(string userTip) { DARABONBA_PTR_SET_VALUE(userTip_, userTip) };


        protected:
          // The state of the precheck. Valid values:
          // 
          // *   **WAITING**: The ticket is pending precheck.
          // *   **RUNNING**: The ticket is being prechecked.
          // *   **SUCCESS**: The ticket passes the precheck.
          // *   **FAIL**: The ticket fails the precheck.
          shared_ptr<string> checkStatus_ {};
          // The check step of the precheck. Valid values:
          // 
          // *   **SQL_PARSE**: The system checks the syntax of the SQL statement.
          // *   **SQL_TYPE_CHECK**: The system checks the type of the SQL statement.
          // *   **PERMISSION_CHECK**: The system checks the permissions required for the data change.
          // *   **ROW_CHECK**: The system checks the number of affected rows.
          shared_ptr<string> checkStep_ {};
          // The message that appears when a check step is executed.
          shared_ptr<string> userTip_ {};
        };

        virtual bool empty() const override { return this->taskCheckDO_ == nullptr; };
        // taskCheckDO Field Functions 
        bool hasTaskCheckDO() const { return this->taskCheckDO_ != nullptr;};
        void deleteTaskCheckDO() { this->taskCheckDO_ = nullptr;};
        inline const vector<PreCheckDetail::TaskCheckDO> & getTaskCheckDO() const { DARABONBA_PTR_GET_CONST(taskCheckDO_, vector<PreCheckDetail::TaskCheckDO>) };
        inline vector<PreCheckDetail::TaskCheckDO> getTaskCheckDO() { DARABONBA_PTR_GET(taskCheckDO_, vector<PreCheckDetail::TaskCheckDO>) };
        inline PreCheckDetail& setTaskCheckDO(const vector<PreCheckDetail::TaskCheckDO> & taskCheckDO) { DARABONBA_PTR_SET_VALUE(taskCheckDO_, taskCheckDO) };
        inline PreCheckDetail& setTaskCheckDO(vector<PreCheckDetail::TaskCheckDO> && taskCheckDO) { DARABONBA_PTR_SET_RVALUE(taskCheckDO_, taskCheckDO) };


      protected:
        shared_ptr<vector<PreCheckDetail::TaskCheckDO>> taskCheckDO_ {};
      };

      class OrderDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrderDetail& obj) { 
          DARABONBA_PTR_TO_JSON(ActualAffectRows, actualAffectRows_);
          DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
          DARABONBA_PTR_TO_JSON(Classify, classify_);
          DARABONBA_PTR_TO_JSON(EstimateAffectRows, estimateAffectRows_);
          DARABONBA_PTR_TO_JSON(ExeSQL, exeSQL_);
          DARABONBA_PTR_TO_JSON(IgnoreAffectRows, ignoreAffectRows_);
          DARABONBA_PTR_TO_JSON(IgnoreAffectRowsReason, ignoreAffectRowsReason_);
          DARABONBA_PTR_TO_JSON(RbAttachmentName, rbAttachmentName_);
          DARABONBA_PTR_TO_JSON(RbSQL, rbSQL_);
          DARABONBA_PTR_TO_JSON(RbSQLType, rbSQLType_);
          DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
        };
        friend void from_json(const Darabonba::Json& j, OrderDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(ActualAffectRows, actualAffectRows_);
          DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
          DARABONBA_PTR_FROM_JSON(Classify, classify_);
          DARABONBA_PTR_FROM_JSON(EstimateAffectRows, estimateAffectRows_);
          DARABONBA_PTR_FROM_JSON(ExeSQL, exeSQL_);
          DARABONBA_PTR_FROM_JSON(IgnoreAffectRows, ignoreAffectRows_);
          DARABONBA_PTR_FROM_JSON(IgnoreAffectRowsReason, ignoreAffectRowsReason_);
          DARABONBA_PTR_FROM_JSON(RbAttachmentName, rbAttachmentName_);
          DARABONBA_PTR_FROM_JSON(RbSQL, rbSQL_);
          DARABONBA_PTR_FROM_JSON(RbSQLType, rbSQLType_);
          DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
        };
        OrderDetail() = default ;
        OrderDetail(const OrderDetail &) = default ;
        OrderDetail(OrderDetail &&) = default ;
        OrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OrderDetail() = default ;
        OrderDetail& operator=(const OrderDetail &) = default ;
        OrderDetail& operator=(OrderDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actualAffectRows_ == nullptr
        && this->attachmentName_ == nullptr && this->classify_ == nullptr && this->estimateAffectRows_ == nullptr && this->exeSQL_ == nullptr && this->ignoreAffectRows_ == nullptr
        && this->ignoreAffectRowsReason_ == nullptr && this->rbAttachmentName_ == nullptr && this->rbSQL_ == nullptr && this->rbSQLType_ == nullptr && this->sqlType_ == nullptr; };
        // actualAffectRows Field Functions 
        bool hasActualAffectRows() const { return this->actualAffectRows_ != nullptr;};
        void deleteActualAffectRows() { this->actualAffectRows_ = nullptr;};
        inline int64_t getActualAffectRows() const { DARABONBA_PTR_GET_DEFAULT(actualAffectRows_, 0L) };
        inline OrderDetail& setActualAffectRows(int64_t actualAffectRows) { DARABONBA_PTR_SET_VALUE(actualAffectRows_, actualAffectRows) };


        // attachmentName Field Functions 
        bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
        void deleteAttachmentName() { this->attachmentName_ = nullptr;};
        inline string getAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
        inline OrderDetail& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


        // classify Field Functions 
        bool hasClassify() const { return this->classify_ != nullptr;};
        void deleteClassify() { this->classify_ = nullptr;};
        inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
        inline OrderDetail& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


        // estimateAffectRows Field Functions 
        bool hasEstimateAffectRows() const { return this->estimateAffectRows_ != nullptr;};
        void deleteEstimateAffectRows() { this->estimateAffectRows_ = nullptr;};
        inline int64_t getEstimateAffectRows() const { DARABONBA_PTR_GET_DEFAULT(estimateAffectRows_, 0L) };
        inline OrderDetail& setEstimateAffectRows(int64_t estimateAffectRows) { DARABONBA_PTR_SET_VALUE(estimateAffectRows_, estimateAffectRows) };


        // exeSQL Field Functions 
        bool hasExeSQL() const { return this->exeSQL_ != nullptr;};
        void deleteExeSQL() { this->exeSQL_ = nullptr;};
        inline string getExeSQL() const { DARABONBA_PTR_GET_DEFAULT(exeSQL_, "") };
        inline OrderDetail& setExeSQL(string exeSQL) { DARABONBA_PTR_SET_VALUE(exeSQL_, exeSQL) };


        // ignoreAffectRows Field Functions 
        bool hasIgnoreAffectRows() const { return this->ignoreAffectRows_ != nullptr;};
        void deleteIgnoreAffectRows() { this->ignoreAffectRows_ = nullptr;};
        inline bool getIgnoreAffectRows() const { DARABONBA_PTR_GET_DEFAULT(ignoreAffectRows_, false) };
        inline OrderDetail& setIgnoreAffectRows(bool ignoreAffectRows) { DARABONBA_PTR_SET_VALUE(ignoreAffectRows_, ignoreAffectRows) };


        // ignoreAffectRowsReason Field Functions 
        bool hasIgnoreAffectRowsReason() const { return this->ignoreAffectRowsReason_ != nullptr;};
        void deleteIgnoreAffectRowsReason() { this->ignoreAffectRowsReason_ = nullptr;};
        inline string getIgnoreAffectRowsReason() const { DARABONBA_PTR_GET_DEFAULT(ignoreAffectRowsReason_, "") };
        inline OrderDetail& setIgnoreAffectRowsReason(string ignoreAffectRowsReason) { DARABONBA_PTR_SET_VALUE(ignoreAffectRowsReason_, ignoreAffectRowsReason) };


        // rbAttachmentName Field Functions 
        bool hasRbAttachmentName() const { return this->rbAttachmentName_ != nullptr;};
        void deleteRbAttachmentName() { this->rbAttachmentName_ = nullptr;};
        inline string getRbAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(rbAttachmentName_, "") };
        inline OrderDetail& setRbAttachmentName(string rbAttachmentName) { DARABONBA_PTR_SET_VALUE(rbAttachmentName_, rbAttachmentName) };


        // rbSQL Field Functions 
        bool hasRbSQL() const { return this->rbSQL_ != nullptr;};
        void deleteRbSQL() { this->rbSQL_ = nullptr;};
        inline string getRbSQL() const { DARABONBA_PTR_GET_DEFAULT(rbSQL_, "") };
        inline OrderDetail& setRbSQL(string rbSQL) { DARABONBA_PTR_SET_VALUE(rbSQL_, rbSQL) };


        // rbSQLType Field Functions 
        bool hasRbSQLType() const { return this->rbSQLType_ != nullptr;};
        void deleteRbSQLType() { this->rbSQLType_ = nullptr;};
        inline string getRbSQLType() const { DARABONBA_PTR_GET_DEFAULT(rbSQLType_, "") };
        inline OrderDetail& setRbSQLType(string rbSQLType) { DARABONBA_PTR_SET_VALUE(rbSQLType_, rbSQLType) };


        // sqlType Field Functions 
        bool hasSqlType() const { return this->sqlType_ != nullptr;};
        void deleteSqlType() { this->sqlType_ = nullptr;};
        inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
        inline OrderDetail& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


      protected:
        // The number of affected rows that is obtained by the precheck.
        shared_ptr<int64_t> actualAffectRows_ {};
        // The name of the attachment that contains the SQL statements used to change data.
        shared_ptr<string> attachmentName_ {};
        // The category of the reason for the data change.
        shared_ptr<string> classify_ {};
        // The estimated number of affected rows.
        shared_ptr<int64_t> estimateAffectRows_ {};
        // The executed SQL statements.
        shared_ptr<string> exeSQL_ {};
        // Indicates whether the precheck result is ignored. Valid values:
        // 
        // - **true**: The precheck result is ignored.
        // - **false**: The precheck result is not ignored.
        shared_ptr<bool> ignoreAffectRows_ {};
        // The reason why the precheck result is ignored.
        shared_ptr<string> ignoreAffectRowsReason_ {};
        // The name of the attachment that contains the SQL statements used to roll back the data change.
        shared_ptr<string> rbAttachmentName_ {};
        // The SQL statements used to roll back the data change.
        shared_ptr<string> rbSQL_ {};
        // The format of the SQL statements used to roll back the data change. Valid values:
        // 
        // - **TEXT**: text
        // - **ATTACHMENT**: attachment
        shared_ptr<string> rbSQLType_ {};
        // The format of the SQL statements used to change data. Valid values:
        // 
        // - **TEXT**: text
        // - **ATTACHMENT**: attachment
        shared_ptr<string> sqlType_ {};
      };

      class DatabaseList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DatabaseList& obj) { 
          DARABONBA_PTR_TO_JSON(Database, database_);
        };
        friend void from_json(const Darabonba::Json& j, DatabaseList& obj) { 
          DARABONBA_PTR_FROM_JSON(Database, database_);
        };
        DatabaseList() = default ;
        DatabaseList(const DatabaseList &) = default ;
        DatabaseList(DatabaseList &&) = default ;
        DatabaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DatabaseList() = default ;
        DatabaseList& operator=(const DatabaseList &) = default ;
        DatabaseList& operator=(DatabaseList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Database : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Database& obj) { 
            DARABONBA_PTR_TO_JSON(DbId, dbId_);
            DARABONBA_PTR_TO_JSON(DbType, dbType_);
            DARABONBA_PTR_TO_JSON(EnvType, envType_);
            DARABONBA_PTR_TO_JSON(Logic, logic_);
            DARABONBA_PTR_TO_JSON(SearchName, searchName_);
          };
          friend void from_json(const Darabonba::Json& j, Database& obj) { 
            DARABONBA_PTR_FROM_JSON(DbId, dbId_);
            DARABONBA_PTR_FROM_JSON(DbType, dbType_);
            DARABONBA_PTR_FROM_JSON(EnvType, envType_);
            DARABONBA_PTR_FROM_JSON(Logic, logic_);
            DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
          };
          Database() = default ;
          Database(const Database &) = default ;
          Database(Database &&) = default ;
          Database(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Database() = default ;
          Database& operator=(const Database &) = default ;
          Database& operator=(Database &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dbId_ == nullptr
        && this->dbType_ == nullptr && this->envType_ == nullptr && this->logic_ == nullptr && this->searchName_ == nullptr; };
          // dbId Field Functions 
          bool hasDbId() const { return this->dbId_ != nullptr;};
          void deleteDbId() { this->dbId_ = nullptr;};
          inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
          inline Database& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


          // dbType Field Functions 
          bool hasDbType() const { return this->dbType_ != nullptr;};
          void deleteDbType() { this->dbType_ = nullptr;};
          inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
          inline Database& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


          // envType Field Functions 
          bool hasEnvType() const { return this->envType_ != nullptr;};
          void deleteEnvType() { this->envType_ = nullptr;};
          inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
          inline Database& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


          // logic Field Functions 
          bool hasLogic() const { return this->logic_ != nullptr;};
          void deleteLogic() { this->logic_ = nullptr;};
          inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
          inline Database& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


          // searchName Field Functions 
          bool hasSearchName() const { return this->searchName_ != nullptr;};
          void deleteSearchName() { this->searchName_ = nullptr;};
          inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
          inline Database& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


        protected:
          // The database ID.
          shared_ptr<int32_t> dbId_ {};
          // The engine of the database.
          shared_ptr<string> dbType_ {};
          // The type of the environment to which the database belongs. Valid values:
          // 
          // *   product: production environment.
          // *   dev: development environment.
          // *   pre: pre-release environment.
          // *   test: test environment.
          // *   sit: system integration testing (SIT) environment
          // *   uat: user acceptance testing (UAT) environment.
          // *   pet: stress testing environment.
          // *   stag: staging environment.
          shared_ptr<string> envType_ {};
          // Indicates whether the database is a logical database. Valid values:
          // 
          // *   **true.**: The database is a logical database.
          // *   **false**: The database is a physical database.
          shared_ptr<bool> logic_ {};
          // The name that is used to search for the database.
          shared_ptr<string> searchName_ {};
        };

        virtual bool empty() const override { return this->database_ == nullptr; };
        // database Field Functions 
        bool hasDatabase() const { return this->database_ != nullptr;};
        void deleteDatabase() { this->database_ = nullptr;};
        inline const vector<DatabaseList::Database> & getDatabase() const { DARABONBA_PTR_GET_CONST(database_, vector<DatabaseList::Database>) };
        inline vector<DatabaseList::Database> getDatabase() { DARABONBA_PTR_GET(database_, vector<DatabaseList::Database>) };
        inline DatabaseList& setDatabase(const vector<DatabaseList::Database> & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
        inline DatabaseList& setDatabase(vector<DatabaseList::Database> && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


      protected:
        shared_ptr<vector<DatabaseList::Database>> database_ {};
      };

      class ConfigDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigDetail& obj) { 
          DARABONBA_PTR_TO_JSON(Cron, cron_);
          DARABONBA_PTR_TO_JSON(CronCallTimes, cronCallTimes_);
          DARABONBA_PTR_TO_JSON(CronExtConfig, cronExtConfig_);
          DARABONBA_PTR_TO_JSON(CronFormat, cronFormat_);
          DARABONBA_PTR_TO_JSON(CronLastCallStartTime, cronLastCallStartTime_);
          DARABONBA_PTR_TO_JSON(CronNextCallTime, cronNextCallTime_);
          DARABONBA_PTR_TO_JSON(CronStatus, cronStatus_);
          DARABONBA_PTR_TO_JSON(CsvTableName, csvTableName_);
          DARABONBA_PTR_TO_JSON(CurrentTaskId, currentTaskId_);
          DARABONBA_PTR_TO_JSON(DetailType, detailType_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(FileEncoding, fileEncoding_);
          DARABONBA_PTR_TO_JSON(FileType, fileType_);
          DARABONBA_PTR_TO_JSON(ImportExtConfig, importExtConfig_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(Cron, cron_);
          DARABONBA_PTR_FROM_JSON(CronCallTimes, cronCallTimes_);
          DARABONBA_PTR_FROM_JSON(CronExtConfig, cronExtConfig_);
          DARABONBA_PTR_FROM_JSON(CronFormat, cronFormat_);
          DARABONBA_PTR_FROM_JSON(CronLastCallStartTime, cronLastCallStartTime_);
          DARABONBA_PTR_FROM_JSON(CronNextCallTime, cronNextCallTime_);
          DARABONBA_PTR_FROM_JSON(CronStatus, cronStatus_);
          DARABONBA_PTR_FROM_JSON(CsvTableName, csvTableName_);
          DARABONBA_PTR_FROM_JSON(CurrentTaskId, currentTaskId_);
          DARABONBA_PTR_FROM_JSON(DetailType, detailType_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(FileEncoding, fileEncoding_);
          DARABONBA_PTR_FROM_JSON(FileType, fileType_);
          DARABONBA_PTR_FROM_JSON(ImportExtConfig, importExtConfig_);
        };
        ConfigDetail() = default ;
        ConfigDetail(const ConfigDetail &) = default ;
        ConfigDetail(ConfigDetail &&) = default ;
        ConfigDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigDetail() = default ;
        ConfigDetail& operator=(const ConfigDetail &) = default ;
        ConfigDetail& operator=(ConfigDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ImportExtConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImportExtConfig& obj) { 
            DARABONBA_PTR_TO_JSON(CsvFirstRowIsColumnDef, csvFirstRowIsColumnDef_);
            DARABONBA_PTR_TO_JSON(IgnoreError, ignoreError_);
            DARABONBA_PTR_TO_JSON(ImportMode, importMode_);
            DARABONBA_PTR_TO_JSON(InsertType, insertType_);
          };
          friend void from_json(const Darabonba::Json& j, ImportExtConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(CsvFirstRowIsColumnDef, csvFirstRowIsColumnDef_);
            DARABONBA_PTR_FROM_JSON(IgnoreError, ignoreError_);
            DARABONBA_PTR_FROM_JSON(ImportMode, importMode_);
            DARABONBA_PTR_FROM_JSON(InsertType, insertType_);
          };
          ImportExtConfig() = default ;
          ImportExtConfig(const ImportExtConfig &) = default ;
          ImportExtConfig(ImportExtConfig &&) = default ;
          ImportExtConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImportExtConfig() = default ;
          ImportExtConfig& operator=(const ImportExtConfig &) = default ;
          ImportExtConfig& operator=(ImportExtConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->csvFirstRowIsColumnDef_ == nullptr
        && this->ignoreError_ == nullptr && this->importMode_ == nullptr && this->insertType_ == nullptr; };
          // csvFirstRowIsColumnDef Field Functions 
          bool hasCsvFirstRowIsColumnDef() const { return this->csvFirstRowIsColumnDef_ != nullptr;};
          void deleteCsvFirstRowIsColumnDef() { this->csvFirstRowIsColumnDef_ = nullptr;};
          inline bool getCsvFirstRowIsColumnDef() const { DARABONBA_PTR_GET_DEFAULT(csvFirstRowIsColumnDef_, false) };
          inline ImportExtConfig& setCsvFirstRowIsColumnDef(bool csvFirstRowIsColumnDef) { DARABONBA_PTR_SET_VALUE(csvFirstRowIsColumnDef_, csvFirstRowIsColumnDef) };


          // ignoreError Field Functions 
          bool hasIgnoreError() const { return this->ignoreError_ != nullptr;};
          void deleteIgnoreError() { this->ignoreError_ = nullptr;};
          inline bool getIgnoreError() const { DARABONBA_PTR_GET_DEFAULT(ignoreError_, false) };
          inline ImportExtConfig& setIgnoreError(bool ignoreError) { DARABONBA_PTR_SET_VALUE(ignoreError_, ignoreError) };


          // importMode Field Functions 
          bool hasImportMode() const { return this->importMode_ != nullptr;};
          void deleteImportMode() { this->importMode_ = nullptr;};
          inline string getImportMode() const { DARABONBA_PTR_GET_DEFAULT(importMode_, "") };
          inline ImportExtConfig& setImportMode(string importMode) { DARABONBA_PTR_SET_VALUE(importMode_, importMode) };


          // insertType Field Functions 
          bool hasInsertType() const { return this->insertType_ != nullptr;};
          void deleteInsertType() { this->insertType_ = nullptr;};
          inline string getInsertType() const { DARABONBA_PTR_GET_DEFAULT(insertType_, "") };
          inline ImportExtConfig& setInsertType(string insertType) { DARABONBA_PTR_SET_VALUE(insertType_, insertType) };


        protected:
          // Indicates whether the first row of the CSV file contains field names. Valid values:
          // 
          // *   **true**: The first row in the CSV file contains field names.
          // *   **false**: The first row in the CSV file contains data.
          // 
          // >  This parameter is valid if the value of **FileType** is **CSV** or **EXCEL**.
          shared_ptr<bool> csvFirstRowIsColumnDef_ {};
          // Indicates whether an error that occurs is ignored. Valid values:
          // 
          // *   **true**: If an error occurs when SQL statements are being executed, DMS skips the current SQL statement and continues to execute subsequent SQL statements.
          // *   **false**: If an error occurs when SQL statements are being executed, DMS stops executing subsequent SQL statements.
          shared_ptr<bool> ignoreError_ {};
          // The import mode. Valid values:
          // 
          // *   **FAST_MODE**: fast mode. In the Execute step, the uploaded file is read and SQL statements are executed to import data to the specified destination database. Compared with the security mode, this mode can be used to import data in a less secure but more efficient manner.
          // *   **SAFE_MODE**: security mode. In the Precheck step, the uploaded file is parsed, and SQL statements or CSV file data is cached. In the Execute step, the cached SQL statements are read and executed to import data, or the cached CSV file data is read and imported to the specified destination database. Compared with the fast mode, this mode can be used to import data in a more secure but less efficient manner.
          shared_ptr<string> importMode_ {};
          // The mode in which data is to be imported to the destination table. Valid values:
          // 
          // *   **INSERT**: The database checks the primary key during data insertion. If the primary key is duplicated, an error is reported.
          // *   **INSERT_IGNORE**: If the imported data contains data records that are the same as those in the destination table, the new data records are ignored.
          // *   **REPLACE_INTO**: If the imported data contains a row that has the same value for the primary key or unique index as an existing row in the destination table, the system deletes the existing row and inserts the new row into the destination table.
          // 
          // >  This parameter is valid if the value of FileType is CSV or EXCEL.
          shared_ptr<string> insertType_ {};
        };

        class CronExtConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CronExtConfig& obj) { 
            DARABONBA_PTR_TO_JSON(CurrentClearTaskCount, currentClearTaskCount_);
            DARABONBA_PTR_TO_JSON(OptimizeTableAfterEveryClearTimes, optimizeTableAfterEveryClearTimes_);
          };
          friend void from_json(const Darabonba::Json& j, CronExtConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(CurrentClearTaskCount, currentClearTaskCount_);
            DARABONBA_PTR_FROM_JSON(OptimizeTableAfterEveryClearTimes, optimizeTableAfterEveryClearTimes_);
          };
          CronExtConfig() = default ;
          CronExtConfig(const CronExtConfig &) = default ;
          CronExtConfig(CronExtConfig &&) = default ;
          CronExtConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CronExtConfig() = default ;
          CronExtConfig& operator=(const CronExtConfig &) = default ;
          CronExtConfig& operator=(CronExtConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->currentClearTaskCount_ == nullptr
        && this->optimizeTableAfterEveryClearTimes_ == nullptr; };
          // currentClearTaskCount Field Functions 
          bool hasCurrentClearTaskCount() const { return this->currentClearTaskCount_ != nullptr;};
          void deleteCurrentClearTaskCount() { this->currentClearTaskCount_ = nullptr;};
          inline int32_t getCurrentClearTaskCount() const { DARABONBA_PTR_GET_DEFAULT(currentClearTaskCount_, 0) };
          inline CronExtConfig& setCurrentClearTaskCount(int32_t currentClearTaskCount) { DARABONBA_PTR_SET_VALUE(currentClearTaskCount_, currentClearTaskCount) };


          // optimizeTableAfterEveryClearTimes Field Functions 
          bool hasOptimizeTableAfterEveryClearTimes() const { return this->optimizeTableAfterEveryClearTimes_ != nullptr;};
          void deleteOptimizeTableAfterEveryClearTimes() { this->optimizeTableAfterEveryClearTimes_ = nullptr;};
          inline int32_t getOptimizeTableAfterEveryClearTimes() const { DARABONBA_PTR_GET_DEFAULT(optimizeTableAfterEveryClearTimes_, 0) };
          inline CronExtConfig& setOptimizeTableAfterEveryClearTimes(int32_t optimizeTableAfterEveryClearTimes) { DARABONBA_PTR_SET_VALUE(optimizeTableAfterEveryClearTimes_, optimizeTableAfterEveryClearTimes) };


        protected:
          // The number of times defragmentation is performed. This parameter is valid only if the value of OptimizeTableAfterEveryClearTimes is greater than 0.
          shared_ptr<int32_t> currentClearTaskCount_ {};
          // Indicates whether the Periodically Optimize Table feature is enabled. Valid values:
          // 
          // *   **0** (default): The feature is disabled.
          // *   **A value greater than 0**: The feature is enabled. The value indicates the number of cleanups after which the system performs defragmentation.
          shared_ptr<int32_t> optimizeTableAfterEveryClearTimes_ {};
        };

        virtual bool empty() const override { return this->cron_ == nullptr
        && this->cronCallTimes_ == nullptr && this->cronExtConfig_ == nullptr && this->cronFormat_ == nullptr && this->cronLastCallStartTime_ == nullptr && this->cronNextCallTime_ == nullptr
        && this->cronStatus_ == nullptr && this->csvTableName_ == nullptr && this->currentTaskId_ == nullptr && this->detailType_ == nullptr && this->duration_ == nullptr
        && this->fileEncoding_ == nullptr && this->fileType_ == nullptr && this->importExtConfig_ == nullptr; };
        // cron Field Functions 
        bool hasCron() const { return this->cron_ != nullptr;};
        void deleteCron() { this->cron_ = nullptr;};
        inline bool getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, false) };
        inline ConfigDetail& setCron(bool cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


        // cronCallTimes Field Functions 
        bool hasCronCallTimes() const { return this->cronCallTimes_ != nullptr;};
        void deleteCronCallTimes() { this->cronCallTimes_ = nullptr;};
        inline int32_t getCronCallTimes() const { DARABONBA_PTR_GET_DEFAULT(cronCallTimes_, 0) };
        inline ConfigDetail& setCronCallTimes(int32_t cronCallTimes) { DARABONBA_PTR_SET_VALUE(cronCallTimes_, cronCallTimes) };


        // cronExtConfig Field Functions 
        bool hasCronExtConfig() const { return this->cronExtConfig_ != nullptr;};
        void deleteCronExtConfig() { this->cronExtConfig_ = nullptr;};
        inline const ConfigDetail::CronExtConfig & getCronExtConfig() const { DARABONBA_PTR_GET_CONST(cronExtConfig_, ConfigDetail::CronExtConfig) };
        inline ConfigDetail::CronExtConfig getCronExtConfig() { DARABONBA_PTR_GET(cronExtConfig_, ConfigDetail::CronExtConfig) };
        inline ConfigDetail& setCronExtConfig(const ConfigDetail::CronExtConfig & cronExtConfig) { DARABONBA_PTR_SET_VALUE(cronExtConfig_, cronExtConfig) };
        inline ConfigDetail& setCronExtConfig(ConfigDetail::CronExtConfig && cronExtConfig) { DARABONBA_PTR_SET_RVALUE(cronExtConfig_, cronExtConfig) };


        // cronFormat Field Functions 
        bool hasCronFormat() const { return this->cronFormat_ != nullptr;};
        void deleteCronFormat() { this->cronFormat_ = nullptr;};
        inline string getCronFormat() const { DARABONBA_PTR_GET_DEFAULT(cronFormat_, "") };
        inline ConfigDetail& setCronFormat(string cronFormat) { DARABONBA_PTR_SET_VALUE(cronFormat_, cronFormat) };


        // cronLastCallStartTime Field Functions 
        bool hasCronLastCallStartTime() const { return this->cronLastCallStartTime_ != nullptr;};
        void deleteCronLastCallStartTime() { this->cronLastCallStartTime_ = nullptr;};
        inline string getCronLastCallStartTime() const { DARABONBA_PTR_GET_DEFAULT(cronLastCallStartTime_, "") };
        inline ConfigDetail& setCronLastCallStartTime(string cronLastCallStartTime) { DARABONBA_PTR_SET_VALUE(cronLastCallStartTime_, cronLastCallStartTime) };


        // cronNextCallTime Field Functions 
        bool hasCronNextCallTime() const { return this->cronNextCallTime_ != nullptr;};
        void deleteCronNextCallTime() { this->cronNextCallTime_ = nullptr;};
        inline string getCronNextCallTime() const { DARABONBA_PTR_GET_DEFAULT(cronNextCallTime_, "") };
        inline ConfigDetail& setCronNextCallTime(string cronNextCallTime) { DARABONBA_PTR_SET_VALUE(cronNextCallTime_, cronNextCallTime) };


        // cronStatus Field Functions 
        bool hasCronStatus() const { return this->cronStatus_ != nullptr;};
        void deleteCronStatus() { this->cronStatus_ = nullptr;};
        inline string getCronStatus() const { DARABONBA_PTR_GET_DEFAULT(cronStatus_, "") };
        inline ConfigDetail& setCronStatus(string cronStatus) { DARABONBA_PTR_SET_VALUE(cronStatus_, cronStatus) };


        // csvTableName Field Functions 
        bool hasCsvTableName() const { return this->csvTableName_ != nullptr;};
        void deleteCsvTableName() { this->csvTableName_ = nullptr;};
        inline string getCsvTableName() const { DARABONBA_PTR_GET_DEFAULT(csvTableName_, "") };
        inline ConfigDetail& setCsvTableName(string csvTableName) { DARABONBA_PTR_SET_VALUE(csvTableName_, csvTableName) };


        // currentTaskId Field Functions 
        bool hasCurrentTaskId() const { return this->currentTaskId_ != nullptr;};
        void deleteCurrentTaskId() { this->currentTaskId_ = nullptr;};
        inline int64_t getCurrentTaskId() const { DARABONBA_PTR_GET_DEFAULT(currentTaskId_, 0L) };
        inline ConfigDetail& setCurrentTaskId(int64_t currentTaskId) { DARABONBA_PTR_SET_VALUE(currentTaskId_, currentTaskId) };


        // detailType Field Functions 
        bool hasDetailType() const { return this->detailType_ != nullptr;};
        void deleteDetailType() { this->detailType_ = nullptr;};
        inline string getDetailType() const { DARABONBA_PTR_GET_DEFAULT(detailType_, "") };
        inline ConfigDetail& setDetailType(string detailType) { DARABONBA_PTR_SET_VALUE(detailType_, detailType) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline ConfigDetail& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // fileEncoding Field Functions 
        bool hasFileEncoding() const { return this->fileEncoding_ != nullptr;};
        void deleteFileEncoding() { this->fileEncoding_ = nullptr;};
        inline string getFileEncoding() const { DARABONBA_PTR_GET_DEFAULT(fileEncoding_, "") };
        inline ConfigDetail& setFileEncoding(string fileEncoding) { DARABONBA_PTR_SET_VALUE(fileEncoding_, fileEncoding) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
        inline ConfigDetail& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // importExtConfig Field Functions 
        bool hasImportExtConfig() const { return this->importExtConfig_ != nullptr;};
        void deleteImportExtConfig() { this->importExtConfig_ = nullptr;};
        inline const ConfigDetail::ImportExtConfig & getImportExtConfig() const { DARABONBA_PTR_GET_CONST(importExtConfig_, ConfigDetail::ImportExtConfig) };
        inline ConfigDetail::ImportExtConfig getImportExtConfig() { DARABONBA_PTR_GET(importExtConfig_, ConfigDetail::ImportExtConfig) };
        inline ConfigDetail& setImportExtConfig(const ConfigDetail::ImportExtConfig & importExtConfig) { DARABONBA_PTR_SET_VALUE(importExtConfig_, importExtConfig) };
        inline ConfigDetail& setImportExtConfig(ConfigDetail::ImportExtConfig && importExtConfig) { DARABONBA_PTR_SET_RVALUE(importExtConfig_, importExtConfig) };


      protected:
        // Indicates whether the task is a scheduled task for historical data cleanup. This parameter is a reserved parameter and is valid only if the value of DetailType is CRON_CLEAR_DATA.
        shared_ptr<bool> cron_ {};
        // The number of times the scheduled task is run. This parameter is valid only if the value of DetailType is CRON_CLEAR_DATA.
        shared_ptr<int32_t> cronCallTimes_ {};
        // The additional configuration information about historical data cleanup. This parameter is valid only if the value of DetailType is CRON_CLEAR_DATA.
        shared_ptr<ConfigDetail::CronExtConfig> cronExtConfig_ {};
        // The CRON expression of the scheduled task. This parameter is valid only if the value of DetailType is CRON_CLEAR_DATA.
        shared_ptr<string> cronFormat_ {};
        // The time when the task was last run.
        shared_ptr<string> cronLastCallStartTime_ {};
        // The time when the task is run next time. This parameter is returned only if the value of CronStatus is SUCCESS.
        shared_ptr<string> cronNextCallTime_ {};
        // The state of the scheduled task. If this parameter is empty, the task is not run. Valid values:
        // 
        // *   PAUSE: The task is suspended.
        // *   WAITING: The task is waiting to be run.
        // *   SUCCESS: The task is run.
        shared_ptr<string> cronStatus_ {};
        // The name of the table to which data is to be imported. This parameter is valid only if the value of DetailType is BIG_FILE. If the value of FileType is SQL, this parameter is empty.
        shared_ptr<string> csvTableName_ {};
        // The ID of the current data change task. This is a reserved parameter and can be ignored.
        shared_ptr<int64_t> currentTaskId_ {};
        // The type of the ticket. Valid values:
        // 
        // *   COMMON: regular data change.
        // *   CHUNK_DML: lock-free data change.
        // *   BIG_FILE: large data import.
        // *   CRON_CLEAR_DATA: historical data cleanup.
        // *   PROCEDURE: programmable object change.
        shared_ptr<string> detailType_ {};
        // The execution duration of the scheduled task. Unit: hour. This parameter is valid only if the value of DetailType is CRON_CLEAR_DATA. If the value is greater than 0, an execution duration is set.
        shared_ptr<int32_t> duration_ {};
        // The encoding method of the file. This parameter may be empty, which indicates the value of AUTO. Valid values:
        // 
        // *   **AUTO**: automatic identification.
        // *   **UTF-8**: UTF-8 encoding.
        // *   **GBK**: GBK encoding.
        // *   **ISO-8859-1**: ISO-8859-1 encoding.
        shared_ptr<string> fileEncoding_ {};
        // The type of the file to be imported. This parameter is valid if the value of DetailType is BIG_FILE. Valid values:
        // 
        // *   **SQL**: an SQL file.
        // *   **CSV**: a CSV file.
        // *   **EXCEL**: an Excel file.
        // *   **JSON**: a JSON file, which is supported only by MongoDB databases.
        shared_ptr<string> fileType_ {};
        // The additional configuration information about data import. This parameter is valid if the value of DetailType is BIG_FILE.
        shared_ptr<ConfigDetail::ImportExtConfig> importExtConfig_ {};
      };

      virtual bool empty() const override { return this->configDetail_ == nullptr
        && this->databaseList_ == nullptr && this->execMode_ == nullptr && this->orderDetail_ == nullptr && this->preCheckDetail_ == nullptr && this->status_ == nullptr; };
      // configDetail Field Functions 
      bool hasConfigDetail() const { return this->configDetail_ != nullptr;};
      void deleteConfigDetail() { this->configDetail_ = nullptr;};
      inline const DataCorrectOrderDetail::ConfigDetail & getConfigDetail() const { DARABONBA_PTR_GET_CONST(configDetail_, DataCorrectOrderDetail::ConfigDetail) };
      inline DataCorrectOrderDetail::ConfigDetail getConfigDetail() { DARABONBA_PTR_GET(configDetail_, DataCorrectOrderDetail::ConfigDetail) };
      inline DataCorrectOrderDetail& setConfigDetail(const DataCorrectOrderDetail::ConfigDetail & configDetail) { DARABONBA_PTR_SET_VALUE(configDetail_, configDetail) };
      inline DataCorrectOrderDetail& setConfigDetail(DataCorrectOrderDetail::ConfigDetail && configDetail) { DARABONBA_PTR_SET_RVALUE(configDetail_, configDetail) };


      // databaseList Field Functions 
      bool hasDatabaseList() const { return this->databaseList_ != nullptr;};
      void deleteDatabaseList() { this->databaseList_ = nullptr;};
      inline const DataCorrectOrderDetail::DatabaseList & getDatabaseList() const { DARABONBA_PTR_GET_CONST(databaseList_, DataCorrectOrderDetail::DatabaseList) };
      inline DataCorrectOrderDetail::DatabaseList getDatabaseList() { DARABONBA_PTR_GET(databaseList_, DataCorrectOrderDetail::DatabaseList) };
      inline DataCorrectOrderDetail& setDatabaseList(const DataCorrectOrderDetail::DatabaseList & databaseList) { DARABONBA_PTR_SET_VALUE(databaseList_, databaseList) };
      inline DataCorrectOrderDetail& setDatabaseList(DataCorrectOrderDetail::DatabaseList && databaseList) { DARABONBA_PTR_SET_RVALUE(databaseList_, databaseList) };


      // execMode Field Functions 
      bool hasExecMode() const { return this->execMode_ != nullptr;};
      void deleteExecMode() { this->execMode_ = nullptr;};
      inline string getExecMode() const { DARABONBA_PTR_GET_DEFAULT(execMode_, "") };
      inline DataCorrectOrderDetail& setExecMode(string execMode) { DARABONBA_PTR_SET_VALUE(execMode_, execMode) };


      // orderDetail Field Functions 
      bool hasOrderDetail() const { return this->orderDetail_ != nullptr;};
      void deleteOrderDetail() { this->orderDetail_ = nullptr;};
      inline const DataCorrectOrderDetail::OrderDetail & getOrderDetail() const { DARABONBA_PTR_GET_CONST(orderDetail_, DataCorrectOrderDetail::OrderDetail) };
      inline DataCorrectOrderDetail::OrderDetail getOrderDetail() { DARABONBA_PTR_GET(orderDetail_, DataCorrectOrderDetail::OrderDetail) };
      inline DataCorrectOrderDetail& setOrderDetail(const DataCorrectOrderDetail::OrderDetail & orderDetail) { DARABONBA_PTR_SET_VALUE(orderDetail_, orderDetail) };
      inline DataCorrectOrderDetail& setOrderDetail(DataCorrectOrderDetail::OrderDetail && orderDetail) { DARABONBA_PTR_SET_RVALUE(orderDetail_, orderDetail) };


      // preCheckDetail Field Functions 
      bool hasPreCheckDetail() const { return this->preCheckDetail_ != nullptr;};
      void deletePreCheckDetail() { this->preCheckDetail_ = nullptr;};
      inline const DataCorrectOrderDetail::PreCheckDetail & getPreCheckDetail() const { DARABONBA_PTR_GET_CONST(preCheckDetail_, DataCorrectOrderDetail::PreCheckDetail) };
      inline DataCorrectOrderDetail::PreCheckDetail getPreCheckDetail() { DARABONBA_PTR_GET(preCheckDetail_, DataCorrectOrderDetail::PreCheckDetail) };
      inline DataCorrectOrderDetail& setPreCheckDetail(const DataCorrectOrderDetail::PreCheckDetail & preCheckDetail) { DARABONBA_PTR_SET_VALUE(preCheckDetail_, preCheckDetail) };
      inline DataCorrectOrderDetail& setPreCheckDetail(DataCorrectOrderDetail::PreCheckDetail && preCheckDetail) { DARABONBA_PTR_SET_RVALUE(preCheckDetail_, preCheckDetail) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataCorrectOrderDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The configurations of the ticket. This parameter is used to store the configuration information specific to a data change ticket type.
      shared_ptr<DataCorrectOrderDetail::ConfigDetail> configDetail_ {};
      // The information about the database in which data is changed.
      shared_ptr<DataCorrectOrderDetail::DatabaseList> databaseList_ {};
      // The execution mode of the ticket after the ticket is approved. Valid values:
      // 
      // - **COMMITOR**: The data change is performed by the user who submits the ticket.
      // - **AUTO**: The data change is automatically performed after the ticket is approved.
      // - **LAST_AUDITOR**: The data change is performed by the last approver of the ticket.
      shared_ptr<string> execMode_ {};
      // The details of the ticket.
      shared_ptr<DataCorrectOrderDetail::OrderDetail> orderDetail_ {};
      // The precheck details of the ticket.
      shared_ptr<DataCorrectOrderDetail::PreCheckDetail> preCheckDetail_ {};
      // The specific state of the data change ticket. Valid values:
      // 
      // >  The state of the ticket is not exactly equivalent to the status code for the ticket. To query the status code of the ticket, you can call the [GetOrderBaseInfo](https://help.aliyun.com/document_detail/465868.html) operation and check the value of StatusCode in the response.
      // 
      // *   **new**: The ticket is created.
      // *   **precheck**: The ticket is in the pre-check phase.
      // *   **precheckFailed**: The ticket failed to pass the precheck.
      // *   **precheck_success**: The ticket passes the precheck and waits to be submitted for approval.
      // *   **toaudit**: The ticket is being reviewed.
      // *   **Approved**: The ticket is approved.
      // *   **reject**: The ticket is rejected.
      // *   **waiting**: The task is submitted and waits to be scheduled.
      // *   **processing**: The task is being executed.
      // *   **Success**: The task is successful.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->dataCorrectOrderDetail_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // dataCorrectOrderDetail Field Functions 
    bool hasDataCorrectOrderDetail() const { return this->dataCorrectOrderDetail_ != nullptr;};
    void deleteDataCorrectOrderDetail() { this->dataCorrectOrderDetail_ = nullptr;};
    inline const GetDataCorrectOrderDetailResponseBody::DataCorrectOrderDetail & getDataCorrectOrderDetail() const { DARABONBA_PTR_GET_CONST(dataCorrectOrderDetail_, GetDataCorrectOrderDetailResponseBody::DataCorrectOrderDetail) };
    inline GetDataCorrectOrderDetailResponseBody::DataCorrectOrderDetail getDataCorrectOrderDetail() { DARABONBA_PTR_GET(dataCorrectOrderDetail_, GetDataCorrectOrderDetailResponseBody::DataCorrectOrderDetail) };
    inline GetDataCorrectOrderDetailResponseBody& setDataCorrectOrderDetail(const GetDataCorrectOrderDetailResponseBody::DataCorrectOrderDetail & dataCorrectOrderDetail) { DARABONBA_PTR_SET_VALUE(dataCorrectOrderDetail_, dataCorrectOrderDetail) };
    inline GetDataCorrectOrderDetailResponseBody& setDataCorrectOrderDetail(GetDataCorrectOrderDetailResponseBody::DataCorrectOrderDetail && dataCorrectOrderDetail) { DARABONBA_PTR_SET_RVALUE(dataCorrectOrderDetail_, dataCorrectOrderDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataCorrectOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataCorrectOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCorrectOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCorrectOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the data change ticket.
    shared_ptr<GetDataCorrectOrderDetailResponseBody::DataCorrectOrderDetail> dataCorrectOrderDetail_ {};
    // The error code returned if the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request fails.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
