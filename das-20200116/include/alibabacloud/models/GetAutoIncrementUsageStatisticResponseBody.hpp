// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOINCREMENTUSAGESTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOINCREMENTUSAGESTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutoIncrementUsageStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoIncrementUsageStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoIncrementUsageStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAutoIncrementUsageStatisticResponseBody() = default ;
    GetAutoIncrementUsageStatisticResponseBody(const GetAutoIncrementUsageStatisticResponseBody &) = default ;
    GetAutoIncrementUsageStatisticResponseBody(GetAutoIncrementUsageStatisticResponseBody &&) = default ;
    GetAutoIncrementUsageStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoIncrementUsageStatisticResponseBody() = default ;
    GetAutoIncrementUsageStatisticResponseBody& operator=(const GetAutoIncrementUsageStatisticResponseBody &) = default ;
    GetAutoIncrementUsageStatisticResponseBody& operator=(GetAutoIncrementUsageStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AutoIncrementUsageList, autoIncrementUsageList_);
        DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
        DARABONBA_PTR_TO_JSON(Finish, finish_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoIncrementUsageList, autoIncrementUsageList_);
        DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
        DARABONBA_PTR_FROM_JSON(Finish, finish_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
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
      class AutoIncrementUsageList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoIncrementUsageList& obj) { 
          DARABONBA_PTR_TO_JSON(AutoIncrementCurrentValue, autoIncrementCurrentValue_);
          DARABONBA_PTR_TO_JSON(AutoIncrementRatio, autoIncrementRatio_);
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(DbName, dbName_);
          DARABONBA_PTR_TO_JSON(MaximumValue, maximumValue_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, AutoIncrementUsageList& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoIncrementCurrentValue, autoIncrementCurrentValue_);
          DARABONBA_PTR_FROM_JSON(AutoIncrementRatio, autoIncrementRatio_);
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(DbName, dbName_);
          DARABONBA_PTR_FROM_JSON(MaximumValue, maximumValue_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        AutoIncrementUsageList() = default ;
        AutoIncrementUsageList(const AutoIncrementUsageList &) = default ;
        AutoIncrementUsageList(AutoIncrementUsageList &&) = default ;
        AutoIncrementUsageList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoIncrementUsageList() = default ;
        AutoIncrementUsageList& operator=(const AutoIncrementUsageList &) = default ;
        AutoIncrementUsageList& operator=(AutoIncrementUsageList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoIncrementCurrentValue_ == nullptr
        && this->autoIncrementRatio_ == nullptr && this->columnName_ == nullptr && this->dbName_ == nullptr && this->maximumValue_ == nullptr && this->tableName_ == nullptr; };
        // autoIncrementCurrentValue Field Functions 
        bool hasAutoIncrementCurrentValue() const { return this->autoIncrementCurrentValue_ != nullptr;};
        void deleteAutoIncrementCurrentValue() { this->autoIncrementCurrentValue_ = nullptr;};
        inline int64_t getAutoIncrementCurrentValue() const { DARABONBA_PTR_GET_DEFAULT(autoIncrementCurrentValue_, 0L) };
        inline AutoIncrementUsageList& setAutoIncrementCurrentValue(int64_t autoIncrementCurrentValue) { DARABONBA_PTR_SET_VALUE(autoIncrementCurrentValue_, autoIncrementCurrentValue) };


        // autoIncrementRatio Field Functions 
        bool hasAutoIncrementRatio() const { return this->autoIncrementRatio_ != nullptr;};
        void deleteAutoIncrementRatio() { this->autoIncrementRatio_ = nullptr;};
        inline double getAutoIncrementRatio() const { DARABONBA_PTR_GET_DEFAULT(autoIncrementRatio_, 0.0) };
        inline AutoIncrementUsageList& setAutoIncrementRatio(double autoIncrementRatio) { DARABONBA_PTR_SET_VALUE(autoIncrementRatio_, autoIncrementRatio) };


        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline AutoIncrementUsageList& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // dbName Field Functions 
        bool hasDbName() const { return this->dbName_ != nullptr;};
        void deleteDbName() { this->dbName_ = nullptr;};
        inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
        inline AutoIncrementUsageList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


        // maximumValue Field Functions 
        bool hasMaximumValue() const { return this->maximumValue_ != nullptr;};
        void deleteMaximumValue() { this->maximumValue_ = nullptr;};
        inline int64_t getMaximumValue() const { DARABONBA_PTR_GET_DEFAULT(maximumValue_, 0L) };
        inline AutoIncrementUsageList& setMaximumValue(int64_t maximumValue) { DARABONBA_PTR_SET_VALUE(maximumValue_, maximumValue) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline AutoIncrementUsageList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        // The latest auto-increment ID.
        shared_ptr<int64_t> autoIncrementCurrentValue_ {};
        // The usage ratio of auto-increment IDs.
        shared_ptr<double> autoIncrementRatio_ {};
        // The column name.
        shared_ptr<string> columnName_ {};
        // The database name.
        shared_ptr<string> dbName_ {};
        // The maximum auto-increment ID that is supported by the current data type.
        shared_ptr<int64_t> maximumValue_ {};
        // The table name.
        shared_ptr<string> tableName_ {};
      };

      virtual bool empty() const override { return this->autoIncrementUsageList_ == nullptr
        && this->errorInfo_ == nullptr && this->finish_ == nullptr && this->taskStatus_ == nullptr && this->timestamp_ == nullptr; };
      // autoIncrementUsageList Field Functions 
      bool hasAutoIncrementUsageList() const { return this->autoIncrementUsageList_ != nullptr;};
      void deleteAutoIncrementUsageList() { this->autoIncrementUsageList_ = nullptr;};
      inline const vector<Data::AutoIncrementUsageList> & getAutoIncrementUsageList() const { DARABONBA_PTR_GET_CONST(autoIncrementUsageList_, vector<Data::AutoIncrementUsageList>) };
      inline vector<Data::AutoIncrementUsageList> getAutoIncrementUsageList() { DARABONBA_PTR_GET(autoIncrementUsageList_, vector<Data::AutoIncrementUsageList>) };
      inline Data& setAutoIncrementUsageList(const vector<Data::AutoIncrementUsageList> & autoIncrementUsageList) { DARABONBA_PTR_SET_VALUE(autoIncrementUsageList_, autoIncrementUsageList) };
      inline Data& setAutoIncrementUsageList(vector<Data::AutoIncrementUsageList> && autoIncrementUsageList) { DARABONBA_PTR_SET_RVALUE(autoIncrementUsageList_, autoIncrementUsageList) };


      // errorInfo Field Functions 
      bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
      void deleteErrorInfo() { this->errorInfo_ = nullptr;};
      inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
      inline Data& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


      // finish Field Functions 
      bool hasFinish() const { return this->finish_ != nullptr;};
      void deleteFinish() { this->finish_ = nullptr;};
      inline bool getFinish() const { DARABONBA_PTR_GET_DEFAULT(finish_, false) };
      inline Data& setFinish(bool finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Data& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The usage details of auto-increment IDs.
      shared_ptr<vector<Data::AutoIncrementUsageList>> autoIncrementUsageList_ {};
      // The error message returned if the task fails.
      shared_ptr<string> errorInfo_ {};
      // Indicates whether the task is complete. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> finish_ {};
      // The task status. Valid values:
      // 
      // *   **INIT**: The task is being initialized.
      // *   **RUNNING**: The task is being executed.
      // *   **SUCCESS**: The task succeeds.
      // *   **FAIL**: The task fails.
      shared_ptr<string> taskStatus_ {};
      // The time when the request was made. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetAutoIncrementUsageStatisticResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAutoIncrementUsageStatisticResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAutoIncrementUsageStatisticResponseBody::Data) };
    inline GetAutoIncrementUsageStatisticResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAutoIncrementUsageStatisticResponseBody::Data) };
    inline GetAutoIncrementUsageStatisticResponseBody& setData(const GetAutoIncrementUsageStatisticResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAutoIncrementUsageStatisticResponseBody& setData(GetAutoIncrementUsageStatisticResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAutoIncrementUsageStatisticResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutoIncrementUsageStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAutoIncrementUsageStatisticResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The returned data.
    shared_ptr<GetAutoIncrementUsageStatisticResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request is successful, **Successful** is returned. Otherwise, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
