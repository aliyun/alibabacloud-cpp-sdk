// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DiscoverEventSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiscoverEventSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DiscoverEventSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DiscoverEventSourceResponseBody() = default ;
    DiscoverEventSourceResponseBody(const DiscoverEventSourceResponseBody &) = default ;
    DiscoverEventSourceResponseBody(DiscoverEventSourceResponseBody &&) = default ;
    DiscoverEventSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiscoverEventSourceResponseBody() = default ;
    DiscoverEventSourceResponseBody& operator=(const DiscoverEventSourceResponseBody &) = default ;
    DiscoverEventSourceResponseBody& operator=(DiscoverEventSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SourceMySQLDiscovery, sourceMySQLDiscovery_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SourceMySQLDiscovery, sourceMySQLDiscovery_);
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
      class SourceMySQLDiscovery : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceMySQLDiscovery& obj) { 
          DARABONBA_PTR_TO_JSON(DatabaseNames, databaseNames_);
          DARABONBA_PTR_TO_JSON(EstimatedRows, estimatedRows_);
          DARABONBA_PTR_TO_JSON(ExpireLogsDays, expireLogsDays_);
          DARABONBA_PTR_TO_JSON(SimpleData, simpleData_);
          DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
          DARABONBA_PTR_TO_JSON(TableSchema, tableSchema_);
          DARABONBA_PTR_TO_JSON(WaitTimeout, waitTimeout_);
        };
        friend void from_json(const Darabonba::Json& j, SourceMySQLDiscovery& obj) { 
          DARABONBA_PTR_FROM_JSON(DatabaseNames, databaseNames_);
          DARABONBA_PTR_FROM_JSON(EstimatedRows, estimatedRows_);
          DARABONBA_PTR_FROM_JSON(ExpireLogsDays, expireLogsDays_);
          DARABONBA_PTR_FROM_JSON(SimpleData, simpleData_);
          DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
          DARABONBA_PTR_FROM_JSON(TableSchema, tableSchema_);
          DARABONBA_PTR_FROM_JSON(WaitTimeout, waitTimeout_);
        };
        SourceMySQLDiscovery() = default ;
        SourceMySQLDiscovery(const SourceMySQLDiscovery &) = default ;
        SourceMySQLDiscovery(SourceMySQLDiscovery &&) = default ;
        SourceMySQLDiscovery(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceMySQLDiscovery() = default ;
        SourceMySQLDiscovery& operator=(const SourceMySQLDiscovery &) = default ;
        SourceMySQLDiscovery& operator=(SourceMySQLDiscovery &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TableSchema : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TableSchema& obj) { 
            DARABONBA_PTR_TO_JSON(Columns, columns_);
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
          };
          friend void from_json(const Darabonba::Json& j, TableSchema& obj) { 
            DARABONBA_PTR_FROM_JSON(Columns, columns_);
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          };
          TableSchema() = default ;
          TableSchema(const TableSchema &) = default ;
          TableSchema(TableSchema &&) = default ;
          TableSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TableSchema() = default ;
          TableSchema& operator=(const TableSchema &) = default ;
          TableSchema& operator=(TableSchema &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Columns : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Columns& obj) { 
              DARABONBA_PTR_TO_JSON(Extra, extra_);
              DARABONBA_PTR_TO_JSON(Field, field_);
              DARABONBA_PTR_TO_JSON(IsNull, isNull_);
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Columns& obj) { 
              DARABONBA_PTR_FROM_JSON(Extra, extra_);
              DARABONBA_PTR_FROM_JSON(Field, field_);
              DARABONBA_PTR_FROM_JSON(IsNull, isNull_);
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Columns() = default ;
            Columns(const Columns &) = default ;
            Columns(Columns &&) = default ;
            Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Columns() = default ;
            Columns& operator=(const Columns &) = default ;
            Columns& operator=(Columns &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->extra_ == nullptr
        && this->field_ == nullptr && this->isNull_ == nullptr && this->key_ == nullptr && this->type_ == nullptr; };
            // extra Field Functions 
            bool hasExtra() const { return this->extra_ != nullptr;};
            void deleteExtra() { this->extra_ = nullptr;};
            inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
            inline Columns& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


            // field Field Functions 
            bool hasField() const { return this->field_ != nullptr;};
            void deleteField() { this->field_ = nullptr;};
            inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
            inline Columns& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


            // isNull Field Functions 
            bool hasIsNull() const { return this->isNull_ != nullptr;};
            void deleteIsNull() { this->isNull_ = nullptr;};
            inline string getIsNull() const { DARABONBA_PTR_GET_DEFAULT(isNull_, "") };
            inline Columns& setIsNull(string isNull) { DARABONBA_PTR_SET_VALUE(isNull_, isNull) };


            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Columns& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Columns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> extra_ {};
            shared_ptr<string> field_ {};
            shared_ptr<string> isNull_ {};
            shared_ptr<string> key_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->columns_ == nullptr
        && this->tableName_ == nullptr; };
          // columns Field Functions 
          bool hasColumns() const { return this->columns_ != nullptr;};
          void deleteColumns() { this->columns_ = nullptr;};
          inline const vector<TableSchema::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<TableSchema::Columns>) };
          inline vector<TableSchema::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<TableSchema::Columns>) };
          inline TableSchema& setColumns(const vector<TableSchema::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
          inline TableSchema& setColumns(vector<TableSchema::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline TableSchema& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        protected:
          shared_ptr<vector<TableSchema::Columns>> columns_ {};
          shared_ptr<string> tableName_ {};
        };

        virtual bool empty() const override { return this->databaseNames_ == nullptr
        && this->estimatedRows_ == nullptr && this->expireLogsDays_ == nullptr && this->simpleData_ == nullptr && this->tableNames_ == nullptr && this->tableSchema_ == nullptr
        && this->waitTimeout_ == nullptr; };
        // databaseNames Field Functions 
        bool hasDatabaseNames() const { return this->databaseNames_ != nullptr;};
        void deleteDatabaseNames() { this->databaseNames_ = nullptr;};
        inline const vector<string> & getDatabaseNames() const { DARABONBA_PTR_GET_CONST(databaseNames_, vector<string>) };
        inline vector<string> getDatabaseNames() { DARABONBA_PTR_GET(databaseNames_, vector<string>) };
        inline SourceMySQLDiscovery& setDatabaseNames(const vector<string> & databaseNames) { DARABONBA_PTR_SET_VALUE(databaseNames_, databaseNames) };
        inline SourceMySQLDiscovery& setDatabaseNames(vector<string> && databaseNames) { DARABONBA_PTR_SET_RVALUE(databaseNames_, databaseNames) };


        // estimatedRows Field Functions 
        bool hasEstimatedRows() const { return this->estimatedRows_ != nullptr;};
        void deleteEstimatedRows() { this->estimatedRows_ = nullptr;};
        inline int64_t getEstimatedRows() const { DARABONBA_PTR_GET_DEFAULT(estimatedRows_, 0L) };
        inline SourceMySQLDiscovery& setEstimatedRows(int64_t estimatedRows) { DARABONBA_PTR_SET_VALUE(estimatedRows_, estimatedRows) };


        // expireLogsDays Field Functions 
        bool hasExpireLogsDays() const { return this->expireLogsDays_ != nullptr;};
        void deleteExpireLogsDays() { this->expireLogsDays_ = nullptr;};
        inline int32_t getExpireLogsDays() const { DARABONBA_PTR_GET_DEFAULT(expireLogsDays_, 0) };
        inline SourceMySQLDiscovery& setExpireLogsDays(int32_t expireLogsDays) { DARABONBA_PTR_SET_VALUE(expireLogsDays_, expireLogsDays) };


        // simpleData Field Functions 
        bool hasSimpleData() const { return this->simpleData_ != nullptr;};
        void deleteSimpleData() { this->simpleData_ = nullptr;};
        inline string getSimpleData() const { DARABONBA_PTR_GET_DEFAULT(simpleData_, "") };
        inline SourceMySQLDiscovery& setSimpleData(string simpleData) { DARABONBA_PTR_SET_VALUE(simpleData_, simpleData) };


        // tableNames Field Functions 
        bool hasTableNames() const { return this->tableNames_ != nullptr;};
        void deleteTableNames() { this->tableNames_ = nullptr;};
        inline const vector<string> & getTableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
        inline vector<string> getTableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
        inline SourceMySQLDiscovery& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
        inline SourceMySQLDiscovery& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


        // tableSchema Field Functions 
        bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
        void deleteTableSchema() { this->tableSchema_ = nullptr;};
        inline const SourceMySQLDiscovery::TableSchema & getTableSchema() const { DARABONBA_PTR_GET_CONST(tableSchema_, SourceMySQLDiscovery::TableSchema) };
        inline SourceMySQLDiscovery::TableSchema getTableSchema() { DARABONBA_PTR_GET(tableSchema_, SourceMySQLDiscovery::TableSchema) };
        inline SourceMySQLDiscovery& setTableSchema(const SourceMySQLDiscovery::TableSchema & tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };
        inline SourceMySQLDiscovery& setTableSchema(SourceMySQLDiscovery::TableSchema && tableSchema) { DARABONBA_PTR_SET_RVALUE(tableSchema_, tableSchema) };


        // waitTimeout Field Functions 
        bool hasWaitTimeout() const { return this->waitTimeout_ != nullptr;};
        void deleteWaitTimeout() { this->waitTimeout_ = nullptr;};
        inline int32_t getWaitTimeout() const { DARABONBA_PTR_GET_DEFAULT(waitTimeout_, 0) };
        inline SourceMySQLDiscovery& setWaitTimeout(int32_t waitTimeout) { DARABONBA_PTR_SET_VALUE(waitTimeout_, waitTimeout) };


      protected:
        shared_ptr<vector<string>> databaseNames_ {};
        shared_ptr<int64_t> estimatedRows_ {};
        shared_ptr<int32_t> expireLogsDays_ {};
        shared_ptr<string> simpleData_ {};
        shared_ptr<vector<string>> tableNames_ {};
        shared_ptr<SourceMySQLDiscovery::TableSchema> tableSchema_ {};
        shared_ptr<int32_t> waitTimeout_ {};
      };

      virtual bool empty() const override { return this->sourceMySQLDiscovery_ == nullptr; };
      // sourceMySQLDiscovery Field Functions 
      bool hasSourceMySQLDiscovery() const { return this->sourceMySQLDiscovery_ != nullptr;};
      void deleteSourceMySQLDiscovery() { this->sourceMySQLDiscovery_ = nullptr;};
      inline const Data::SourceMySQLDiscovery & getSourceMySQLDiscovery() const { DARABONBA_PTR_GET_CONST(sourceMySQLDiscovery_, Data::SourceMySQLDiscovery) };
      inline Data::SourceMySQLDiscovery getSourceMySQLDiscovery() { DARABONBA_PTR_GET(sourceMySQLDiscovery_, Data::SourceMySQLDiscovery) };
      inline Data& setSourceMySQLDiscovery(const Data::SourceMySQLDiscovery & sourceMySQLDiscovery) { DARABONBA_PTR_SET_VALUE(sourceMySQLDiscovery_, sourceMySQLDiscovery) };
      inline Data& setSourceMySQLDiscovery(Data::SourceMySQLDiscovery && sourceMySQLDiscovery) { DARABONBA_PTR_SET_RVALUE(sourceMySQLDiscovery_, sourceMySQLDiscovery) };


    protected:
      shared_ptr<Data::SourceMySQLDiscovery> sourceMySQLDiscovery_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DiscoverEventSourceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DiscoverEventSourceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DiscoverEventSourceResponseBody::Data) };
    inline DiscoverEventSourceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DiscoverEventSourceResponseBody::Data) };
    inline DiscoverEventSourceResponseBody& setData(const DiscoverEventSourceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DiscoverEventSourceResponseBody& setData(DiscoverEventSourceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DiscoverEventSourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DiscoverEventSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DiscoverEventSourceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DiscoverEventSourceResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
