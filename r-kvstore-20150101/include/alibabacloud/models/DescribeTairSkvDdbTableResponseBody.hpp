// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAIRSKVDDBTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAIRSKVDDBTABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeTairSkvDdbTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTairSkvDdbTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTairSkvDdbTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    DescribeTairSkvDdbTableResponseBody() = default ;
    DescribeTairSkvDdbTableResponseBody(const DescribeTairSkvDdbTableResponseBody &) = default ;
    DescribeTairSkvDdbTableResponseBody(DescribeTairSkvDdbTableResponseBody &&) = default ;
    DescribeTairSkvDdbTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTairSkvDdbTableResponseBody() = default ;
    DescribeTairSkvDdbTableResponseBody& operator=(const DescribeTairSkvDdbTableResponseBody &) = default ;
    DescribeTairSkvDdbTableResponseBody& operator=(DescribeTairSkvDdbTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tables& obj) { 
        DARABONBA_PTR_TO_JSON(Table, table_);
      };
      friend void from_json(const Darabonba::Json& j, Tables& obj) { 
        DARABONBA_PTR_FROM_JSON(Table, table_);
      };
      Tables() = default ;
      Tables(const Tables &) = default ;
      Tables(Tables &&) = default ;
      Tables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tables() = default ;
      Tables& operator=(const Tables &) = default ;
      Tables& operator=(Tables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Table : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Table& obj) { 
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(Connections, connections_);
          DARABONBA_PTR_TO_JSON(TableId, tableId_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, Table& obj) { 
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(Connections, connections_);
          DARABONBA_PTR_FROM_JSON(TableId, tableId_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        Table() = default ;
        Table(const Table &) = default ;
        Table(Table &&) = default ;
        Table(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Table() = default ;
        Table& operator=(const Table &) = default ;
        Table& operator=(Table &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->connections_ == nullptr && this->tableId_ == nullptr && this->tableName_ == nullptr; };
        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
        inline Table& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // connections Field Functions 
        bool hasConnections() const { return this->connections_ != nullptr;};
        void deleteConnections() { this->connections_ = nullptr;};
        inline int64_t getConnections() const { DARABONBA_PTR_GET_DEFAULT(connections_, 0L) };
        inline Table& setConnections(int64_t connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };


        // tableId Field Functions 
        bool hasTableId() const { return this->tableId_ != nullptr;};
        void deleteTableId() { this->tableId_ = nullptr;};
        inline string getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
        inline Table& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline Table& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        shared_ptr<int64_t> bandwidth_ {};
        shared_ptr<int64_t> connections_ {};
        shared_ptr<string> tableId_ {};
        shared_ptr<string> tableName_ {};
      };

      virtual bool empty() const override { return this->table_ == nullptr; };
      // table Field Functions 
      bool hasTable() const { return this->table_ != nullptr;};
      void deleteTable() { this->table_ = nullptr;};
      inline const vector<Tables::Table> & getTable() const { DARABONBA_PTR_GET_CONST(table_, vector<Tables::Table>) };
      inline vector<Tables::Table> getTable() { DARABONBA_PTR_GET(table_, vector<Tables::Table>) };
      inline Tables& setTable(const vector<Tables::Table> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
      inline Tables& setTable(vector<Tables::Table> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    protected:
      shared_ptr<vector<Tables::Table>> table_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tables_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTairSkvDdbTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const DescribeTairSkvDdbTableResponseBody::Tables & getTables() const { DARABONBA_PTR_GET_CONST(tables_, DescribeTairSkvDdbTableResponseBody::Tables) };
    inline DescribeTairSkvDdbTableResponseBody::Tables getTables() { DARABONBA_PTR_GET(tables_, DescribeTairSkvDdbTableResponseBody::Tables) };
    inline DescribeTairSkvDdbTableResponseBody& setTables(const DescribeTairSkvDdbTableResponseBody::Tables & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeTairSkvDdbTableResponseBody& setTables(DescribeTairSkvDdbTableResponseBody::Tables && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    // The request ID, which is used to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeTairSkvDdbTableResponseBody::Tables> tables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
