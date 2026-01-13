// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTATEMENTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTATEMENTRESULTRESPONSEBODY_HPP_
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
  class GetStatementResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStatementResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetStatementResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetStatementResultResponseBody() = default ;
    GetStatementResultResponseBody(const GetStatementResultResponseBody &) = default ;
    GetStatementResultResponseBody(GetStatementResultResponseBody &&) = default ;
    GetStatementResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStatementResultResponseBody() = default ;
    GetStatementResultResponseBody& operator=(const GetStatementResultResponseBody &) = default ;
    GetStatementResultResponseBody& operator=(GetStatementResultResponseBody &&) = default ;
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
      // List of column metadata.
      shared_ptr<Data::ColumnMetadata> columnMetadata_ {};
      // Multiple rows of data.
      shared_ptr<Data::Records> records_ {};
      // Total number of entries.
      shared_ptr<int64_t> totalNumRows_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetStatementResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetStatementResultResponseBody::Data) };
    inline GetStatementResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetStatementResultResponseBody::Data) };
    inline GetStatementResultResponseBody& setData(const GetStatementResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetStatementResultResponseBody& setData(GetStatementResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetStatementResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStatementResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetStatementResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The result of the asynchronous call.
    shared_ptr<GetStatementResultResponseBody::Data> data_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // API execution status, with values as follows:
    // 
    // - **false**: Execution failed.
    // - **true**: Execution succeeded.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
