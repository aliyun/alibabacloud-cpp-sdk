// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESTATEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESTATEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Field.hpp>
#include <alibabacloud/models/ColumnMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ExecuteStatementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteStatementResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretArn, secretArn_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteStatementResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretArn, secretArn_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ExecuteStatementResponseBody() = default ;
    ExecuteStatementResponseBody(const ExecuteStatementResponseBody &) = default ;
    ExecuteStatementResponseBody(ExecuteStatementResponseBody &&) = default ;
    ExecuteStatementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteStatementResponseBody() = default ;
    ExecuteStatementResponseBody& operator=(const ExecuteStatementResponseBody &) = default ;
    ExecuteStatementResponseBody& operator=(ExecuteStatementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ColumnMetadata, columnMetadata_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(TotalNumRows, totalNumRows_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ColumnMetadata, columnMetadata_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(TotalNumRows, totalNumRows_);
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
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(Records, records_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(Records, records_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RecordsItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RecordsItem& obj) { 
            DARABONBA_PTR_TO_JSON(Record, record_);
          };
          friend void from_json(const Darabonba::Json& j, RecordsItem& obj) { 
            DARABONBA_PTR_FROM_JSON(Record, record_);
          };
          RecordsItem() = default ;
          RecordsItem(const RecordsItem &) = default ;
          RecordsItem(RecordsItem &&) = default ;
          RecordsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RecordsItem() = default ;
          RecordsItem& operator=(const RecordsItem &) = default ;
          RecordsItem& operator=(RecordsItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->record_ == nullptr; };
          // record Field Functions 
          bool hasRecord() const { return this->record_ != nullptr;};
          void deleteRecord() { this->record_ = nullptr;};
          inline const vector<Field> & getRecord() const { DARABONBA_PTR_GET_CONST(record_, vector<Field>) };
          inline vector<Field> getRecord() { DARABONBA_PTR_GET(record_, vector<Field>) };
          inline RecordsItem& setRecord(const vector<Field> & record) { DARABONBA_PTR_SET_VALUE(record_, record) };
          inline RecordsItem& setRecord(vector<Field> && record) { DARABONBA_PTR_SET_RVALUE(record_, record) };


        protected:
          shared_ptr<vector<Field>> record_ {};
        };

        virtual bool empty() const override { return this->records_ == nullptr; };
        // records Field Functions 
        bool hasRecords() const { return this->records_ != nullptr;};
        void deleteRecords() { this->records_ = nullptr;};
        inline const vector<Records::RecordsItem> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Records::RecordsItem>) };
        inline vector<Records::RecordsItem> getRecords() { DARABONBA_PTR_GET(records_, vector<Records::RecordsItem>) };
        inline Records& setRecords(const vector<Records::RecordsItem> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
        inline Records& setRecords(vector<Records::RecordsItem> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      protected:
        shared_ptr<vector<Records::RecordsItem>> records_ {};
      };

      class ColumnMetadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ColumnMetadata& obj) { 
          DARABONBA_PTR_TO_JSON(ColumnMetadata, columnMetadata_);
        };
        friend void from_json(const Darabonba::Json& j, ColumnMetadata& obj) { 
          DARABONBA_PTR_FROM_JSON(ColumnMetadata, columnMetadata_);
        };
        ColumnMetadata() = default ;
        ColumnMetadata(const ColumnMetadata &) = default ;
        ColumnMetadata(ColumnMetadata &&) = default ;
        ColumnMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ColumnMetadata() = default ;
        ColumnMetadata& operator=(const ColumnMetadata &) = default ;
        ColumnMetadata& operator=(ColumnMetadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->columnMetadata_ == nullptr; };
        // columnMetadata Field Functions 
        bool hasColumnMetadata() const { return this->columnMetadata_ != nullptr;};
        void deleteColumnMetadata() { this->columnMetadata_ = nullptr;};
        inline const vector<ColumnMetadata> & getColumnMetadata() const { DARABONBA_PTR_GET_CONST(columnMetadata_, vector<ColumnMetadata>) };
        inline vector<ColumnMetadata> getColumnMetadata() { DARABONBA_PTR_GET(columnMetadata_, vector<ColumnMetadata>) };
        inline ColumnMetadata& setColumnMetadata(const vector<ColumnMetadata> & columnMetadata) { DARABONBA_PTR_SET_VALUE(columnMetadata_, columnMetadata) };
        inline ColumnMetadata& setColumnMetadata(vector<ColumnMetadata> && columnMetadata) { DARABONBA_PTR_SET_RVALUE(columnMetadata_, columnMetadata) };


      protected:
        shared_ptr<vector<ColumnMetadata>> columnMetadata_ {};
      };

      virtual bool empty() const override { return this->columnMetadata_ == nullptr
        && this->records_ == nullptr && this->totalNumRows_ == nullptr; };
      // columnMetadata Field Functions 
      bool hasColumnMetadata() const { return this->columnMetadata_ != nullptr;};
      void deleteColumnMetadata() { this->columnMetadata_ = nullptr;};
      inline const Data::ColumnMetadata & getColumnMetadata() const { DARABONBA_PTR_GET_CONST(columnMetadata_, Data::ColumnMetadata) };
      inline Data::ColumnMetadata getColumnMetadata() { DARABONBA_PTR_GET(columnMetadata_, Data::ColumnMetadata) };
      inline Data& setColumnMetadata(const Data::ColumnMetadata & columnMetadata) { DARABONBA_PTR_SET_VALUE(columnMetadata_, columnMetadata) };
      inline Data& setColumnMetadata(Data::ColumnMetadata && columnMetadata) { DARABONBA_PTR_SET_RVALUE(columnMetadata_, columnMetadata) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const Data::Records & getRecords() const { DARABONBA_PTR_GET_CONST(records_, Data::Records) };
      inline Data::Records getRecords() { DARABONBA_PTR_GET(records_, Data::Records) };
      inline Data& setRecords(const Data::Records & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Data& setRecords(Data::Records && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // totalNumRows Field Functions 
      bool hasTotalNumRows() const { return this->totalNumRows_ != nullptr;};
      void deleteTotalNumRows() { this->totalNumRows_ = nullptr;};
      inline int64_t getTotalNumRows() const { DARABONBA_PTR_GET_DEFAULT(totalNumRows_, 0L) };
      inline Data& setTotalNumRows(int64_t totalNumRows) { DARABONBA_PTR_SET_VALUE(totalNumRows_, totalNumRows) };


    protected:
      // The metadata of the columns.
      shared_ptr<Data::ColumnMetadata> columnMetadata_ {};
      // The rows of data.
      shared_ptr<Data::Records> records_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalNumRows_ {};
    };

    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->DBInstanceId_ == nullptr && this->data_ == nullptr && this->database_ == nullptr && this->id_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->secretArn_ == nullptr && this->status_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ExecuteStatementResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ExecuteStatementResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExecuteStatementResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ExecuteStatementResponseBody::Data) };
    inline ExecuteStatementResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ExecuteStatementResponseBody::Data) };
    inline ExecuteStatementResponseBody& setData(const ExecuteStatementResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExecuteStatementResponseBody& setData(ExecuteStatementResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline ExecuteStatementResponseBody& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ExecuteStatementResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExecuteStatementResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteStatementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretArn Field Functions 
    bool hasSecretArn() const { return this->secretArn_ != nullptr;};
    void deleteSecretArn() { this->secretArn_ = nullptr;};
    inline string getSecretArn() const { DARABONBA_PTR_GET_DEFAULT(secretArn_, "") };
    inline ExecuteStatementResponseBody& setSecretArn(string secretArn) { DARABONBA_PTR_SET_VALUE(secretArn_, secretArn) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ExecuteStatementResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the SQL statements were created.
    shared_ptr<string> createdAt_ {};
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The returned results of the synchronous call.
    shared_ptr<ExecuteStatementResponseBody::Data> data_ {};
    // The name of the database.
    shared_ptr<string> database_ {};
    // The ID of the job for asynchronously executing the SQL statements.
    shared_ptr<string> id_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ARN of the access credential for the created Data API account.
    shared_ptr<string> secretArn_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
