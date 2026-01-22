// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTETABLELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTETABLELISTRESPONSEBODY_HPP_
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
  class DescribeDistributeTableListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDistributeTableListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDistributeTableListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDistributeTableListResponseBody() = default ;
    DescribeDistributeTableListResponseBody(const DescribeDistributeTableListResponseBody &) = default ;
    DescribeDistributeTableListResponseBody(DescribeDistributeTableListResponseBody &&) = default ;
    DescribeDistributeTableListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDistributeTableListResponseBody() = default ;
    DescribeDistributeTableListResponseBody& operator=(const DescribeDistributeTableListResponseBody &) = default ;
    DescribeDistributeTableListResponseBody& operator=(DescribeDistributeTableListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Tables, tables_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Tables, tables_);
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
      class Tables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tables& obj) { 
          DARABONBA_PTR_TO_JSON(DbKey, dbKey_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(TableType, tableType_);
          DARABONBA_PTR_TO_JSON(TbKey, tbKey_);
        };
        friend void from_json(const Darabonba::Json& j, Tables& obj) { 
          DARABONBA_PTR_FROM_JSON(DbKey, dbKey_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(TableType, tableType_);
          DARABONBA_PTR_FROM_JSON(TbKey, tbKey_);
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
        virtual bool empty() const override { return this->dbKey_ == nullptr
        && this->tableName_ == nullptr && this->tableType_ == nullptr && this->tbKey_ == nullptr; };
        // dbKey Field Functions 
        bool hasDbKey() const { return this->dbKey_ != nullptr;};
        void deleteDbKey() { this->dbKey_ = nullptr;};
        inline string getDbKey() const { DARABONBA_PTR_GET_DEFAULT(dbKey_, "") };
        inline Tables& setDbKey(string dbKey) { DARABONBA_PTR_SET_VALUE(dbKey_, dbKey) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline Tables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // tableType Field Functions 
        bool hasTableType() const { return this->tableType_ != nullptr;};
        void deleteTableType() { this->tableType_ = nullptr;};
        inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
        inline Tables& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


        // tbKey Field Functions 
        bool hasTbKey() const { return this->tbKey_ != nullptr;};
        void deleteTbKey() { this->tbKey_ = nullptr;};
        inline string getTbKey() const { DARABONBA_PTR_GET_DEFAULT(tbKey_, "") };
        inline Tables& setTbKey(string tbKey) { DARABONBA_PTR_SET_VALUE(tbKey_, tbKey) };


      protected:
        shared_ptr<string> dbKey_ {};
        shared_ptr<string> tableName_ {};
        shared_ptr<string> tableType_ {};
        shared_ptr<string> tbKey_ {};
      };

      virtual bool empty() const override { return this->tables_ == nullptr; };
      // tables Field Functions 
      bool hasTables() const { return this->tables_ != nullptr;};
      void deleteTables() { this->tables_ = nullptr;};
      inline const vector<Data::Tables> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Data::Tables>) };
      inline vector<Data::Tables> getTables() { DARABONBA_PTR_GET(tables_, vector<Data::Tables>) };
      inline Data& setTables(const vector<Data::Tables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
      inline Data& setTables(vector<Data::Tables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    protected:
      shared_ptr<vector<Data::Tables>> tables_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDistributeTableListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDistributeTableListResponseBody::Data) };
    inline DescribeDistributeTableListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDistributeTableListResponseBody::Data) };
    inline DescribeDistributeTableListResponseBody& setData(const DescribeDistributeTableListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDistributeTableListResponseBody& setData(DescribeDistributeTableListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDistributeTableListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDistributeTableListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDistributeTableListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeDistributeTableListResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
