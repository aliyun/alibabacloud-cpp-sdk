// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLFLASHBACKTASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLFLASHBACKTASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeSqlFlashbackTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlFlashbackTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlFlashbackTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSqlFlashbackTaskListResponseBody() = default ;
    DescribeSqlFlashbackTaskListResponseBody(const DescribeSqlFlashbackTaskListResponseBody &) = default ;
    DescribeSqlFlashbackTaskListResponseBody(DescribeSqlFlashbackTaskListResponseBody &&) = default ;
    DescribeSqlFlashbackTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlFlashbackTaskListResponseBody() = default ;
    DescribeSqlFlashbackTaskListResponseBody& operator=(const DescribeSqlFlashbackTaskListResponseBody &) = default ;
    DescribeSqlFlashbackTaskListResponseBody& operator=(DescribeSqlFlashbackTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SqlFlashbackTasks, sqlFlashbackTasks_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SqlFlashbackTasks, sqlFlashbackTasks_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SqlFlashbackTasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SqlFlashbackTasks& obj) { 
          DARABONBA_PTR_TO_JSON(DbName, dbName_);
          DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InstId, instId_);
          DARABONBA_PTR_TO_JSON(RecallProgress, recallProgress_);
          DARABONBA_PTR_TO_JSON(RecallRestoreType, recallRestoreType_);
          DARABONBA_PTR_TO_JSON(RecallStatus, recallStatus_);
          DARABONBA_PTR_TO_JSON(RecallType, recallType_);
          DARABONBA_PTR_TO_JSON(SearchEndTime, searchEndTime_);
          DARABONBA_PTR_TO_JSON(SearchStartTime, searchStartTime_);
          DARABONBA_PTR_TO_JSON(SqlCounter, sqlCounter_);
          DARABONBA_PTR_TO_JSON(SqlPk, sqlPk_);
          DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(TraceId, traceId_);
        };
        friend void from_json(const Darabonba::Json& j, SqlFlashbackTasks& obj) { 
          DARABONBA_PTR_FROM_JSON(DbName, dbName_);
          DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InstId, instId_);
          DARABONBA_PTR_FROM_JSON(RecallProgress, recallProgress_);
          DARABONBA_PTR_FROM_JSON(RecallRestoreType, recallRestoreType_);
          DARABONBA_PTR_FROM_JSON(RecallStatus, recallStatus_);
          DARABONBA_PTR_FROM_JSON(RecallType, recallType_);
          DARABONBA_PTR_FROM_JSON(SearchEndTime, searchEndTime_);
          DARABONBA_PTR_FROM_JSON(SearchStartTime, searchStartTime_);
          DARABONBA_PTR_FROM_JSON(SqlCounter, sqlCounter_);
          DARABONBA_PTR_FROM_JSON(SqlPk, sqlPk_);
          DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
        };
        SqlFlashbackTasks() = default ;
        SqlFlashbackTasks(const SqlFlashbackTasks &) = default ;
        SqlFlashbackTasks(SqlFlashbackTasks &&) = default ;
        SqlFlashbackTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SqlFlashbackTasks() = default ;
        SqlFlashbackTasks& operator=(const SqlFlashbackTasks &) = default ;
        SqlFlashbackTasks& operator=(SqlFlashbackTasks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dbName_ == nullptr
        && this->downloadUrl_ == nullptr && this->expireTime_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->instId_ == nullptr && this->recallProgress_ == nullptr && this->recallRestoreType_ == nullptr && this->recallStatus_ == nullptr && this->recallType_ == nullptr
        && this->searchEndTime_ == nullptr && this->searchStartTime_ == nullptr && this->sqlCounter_ == nullptr && this->sqlPk_ == nullptr && this->sqlType_ == nullptr
        && this->tableName_ == nullptr && this->traceId_ == nullptr; };
        // dbName Field Functions 
        bool hasDbName() const { return this->dbName_ != nullptr;};
        void deleteDbName() { this->dbName_ = nullptr;};
        inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
        inline SqlFlashbackTasks& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


        // downloadUrl Field Functions 
        bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
        void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
        inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
        inline SqlFlashbackTasks& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline SqlFlashbackTasks& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline SqlFlashbackTasks& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline SqlFlashbackTasks& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline SqlFlashbackTasks& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // instId Field Functions 
        bool hasInstId() const { return this->instId_ != nullptr;};
        void deleteInstId() { this->instId_ = nullptr;};
        inline string getInstId() const { DARABONBA_PTR_GET_DEFAULT(instId_, "") };
        inline SqlFlashbackTasks& setInstId(string instId) { DARABONBA_PTR_SET_VALUE(instId_, instId) };


        // recallProgress Field Functions 
        bool hasRecallProgress() const { return this->recallProgress_ != nullptr;};
        void deleteRecallProgress() { this->recallProgress_ = nullptr;};
        inline string getRecallProgress() const { DARABONBA_PTR_GET_DEFAULT(recallProgress_, "") };
        inline SqlFlashbackTasks& setRecallProgress(string recallProgress) { DARABONBA_PTR_SET_VALUE(recallProgress_, recallProgress) };


        // recallRestoreType Field Functions 
        bool hasRecallRestoreType() const { return this->recallRestoreType_ != nullptr;};
        void deleteRecallRestoreType() { this->recallRestoreType_ = nullptr;};
        inline string getRecallRestoreType() const { DARABONBA_PTR_GET_DEFAULT(recallRestoreType_, "") };
        inline SqlFlashbackTasks& setRecallRestoreType(string recallRestoreType) { DARABONBA_PTR_SET_VALUE(recallRestoreType_, recallRestoreType) };


        // recallStatus Field Functions 
        bool hasRecallStatus() const { return this->recallStatus_ != nullptr;};
        void deleteRecallStatus() { this->recallStatus_ = nullptr;};
        inline string getRecallStatus() const { DARABONBA_PTR_GET_DEFAULT(recallStatus_, "") };
        inline SqlFlashbackTasks& setRecallStatus(string recallStatus) { DARABONBA_PTR_SET_VALUE(recallStatus_, recallStatus) };


        // recallType Field Functions 
        bool hasRecallType() const { return this->recallType_ != nullptr;};
        void deleteRecallType() { this->recallType_ = nullptr;};
        inline string getRecallType() const { DARABONBA_PTR_GET_DEFAULT(recallType_, "") };
        inline SqlFlashbackTasks& setRecallType(string recallType) { DARABONBA_PTR_SET_VALUE(recallType_, recallType) };


        // searchEndTime Field Functions 
        bool hasSearchEndTime() const { return this->searchEndTime_ != nullptr;};
        void deleteSearchEndTime() { this->searchEndTime_ = nullptr;};
        inline string getSearchEndTime() const { DARABONBA_PTR_GET_DEFAULT(searchEndTime_, "") };
        inline SqlFlashbackTasks& setSearchEndTime(string searchEndTime) { DARABONBA_PTR_SET_VALUE(searchEndTime_, searchEndTime) };


        // searchStartTime Field Functions 
        bool hasSearchStartTime() const { return this->searchStartTime_ != nullptr;};
        void deleteSearchStartTime() { this->searchStartTime_ = nullptr;};
        inline string getSearchStartTime() const { DARABONBA_PTR_GET_DEFAULT(searchStartTime_, "") };
        inline SqlFlashbackTasks& setSearchStartTime(string searchStartTime) { DARABONBA_PTR_SET_VALUE(searchStartTime_, searchStartTime) };


        // sqlCounter Field Functions 
        bool hasSqlCounter() const { return this->sqlCounter_ != nullptr;};
        void deleteSqlCounter() { this->sqlCounter_ = nullptr;};
        inline string getSqlCounter() const { DARABONBA_PTR_GET_DEFAULT(sqlCounter_, "") };
        inline SqlFlashbackTasks& setSqlCounter(string sqlCounter) { DARABONBA_PTR_SET_VALUE(sqlCounter_, sqlCounter) };


        // sqlPk Field Functions 
        bool hasSqlPk() const { return this->sqlPk_ != nullptr;};
        void deleteSqlPk() { this->sqlPk_ = nullptr;};
        inline string getSqlPk() const { DARABONBA_PTR_GET_DEFAULT(sqlPk_, "") };
        inline SqlFlashbackTasks& setSqlPk(string sqlPk) { DARABONBA_PTR_SET_VALUE(sqlPk_, sqlPk) };


        // sqlType Field Functions 
        bool hasSqlType() const { return this->sqlType_ != nullptr;};
        void deleteSqlType() { this->sqlType_ = nullptr;};
        inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
        inline SqlFlashbackTasks& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline SqlFlashbackTasks& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // traceId Field Functions 
        bool hasTraceId() const { return this->traceId_ != nullptr;};
        void deleteTraceId() { this->traceId_ = nullptr;};
        inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
        inline SqlFlashbackTasks& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


      protected:
        shared_ptr<string> dbName_ {};
        shared_ptr<string> downloadUrl_ {};
        shared_ptr<string> expireTime_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> instId_ {};
        shared_ptr<string> recallProgress_ {};
        shared_ptr<string> recallRestoreType_ {};
        shared_ptr<string> recallStatus_ {};
        shared_ptr<string> recallType_ {};
        shared_ptr<string> searchEndTime_ {};
        shared_ptr<string> searchStartTime_ {};
        shared_ptr<string> sqlCounter_ {};
        shared_ptr<string> sqlPk_ {};
        shared_ptr<string> sqlType_ {};
        shared_ptr<string> tableName_ {};
        shared_ptr<string> traceId_ {};
      };

      virtual bool empty() const override { return this->sqlFlashbackTasks_ == nullptr; };
      // sqlFlashbackTasks Field Functions 
      bool hasSqlFlashbackTasks() const { return this->sqlFlashbackTasks_ != nullptr;};
      void deleteSqlFlashbackTasks() { this->sqlFlashbackTasks_ = nullptr;};
      inline const vector<Data::SqlFlashbackTasks> & getSqlFlashbackTasks() const { DARABONBA_PTR_GET_CONST(sqlFlashbackTasks_, vector<Data::SqlFlashbackTasks>) };
      inline vector<Data::SqlFlashbackTasks> getSqlFlashbackTasks() { DARABONBA_PTR_GET(sqlFlashbackTasks_, vector<Data::SqlFlashbackTasks>) };
      inline Data& setSqlFlashbackTasks(const vector<Data::SqlFlashbackTasks> & sqlFlashbackTasks) { DARABONBA_PTR_SET_VALUE(sqlFlashbackTasks_, sqlFlashbackTasks) };
      inline Data& setSqlFlashbackTasks(vector<Data::SqlFlashbackTasks> && sqlFlashbackTasks) { DARABONBA_PTR_SET_RVALUE(sqlFlashbackTasks_, sqlFlashbackTasks) };


    protected:
      shared_ptr<vector<Data::SqlFlashbackTasks>> sqlFlashbackTasks_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSqlFlashbackTaskListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSqlFlashbackTaskListResponseBody::Data) };
    inline DescribeSqlFlashbackTaskListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSqlFlashbackTaskListResponseBody::Data) };
    inline DescribeSqlFlashbackTaskListResponseBody& setData(const DescribeSqlFlashbackTaskListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSqlFlashbackTaskListResponseBody& setData(DescribeSqlFlashbackTaskListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSqlFlashbackTaskListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSqlFlashbackTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSqlFlashbackTaskListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeSqlFlashbackTaskListResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
