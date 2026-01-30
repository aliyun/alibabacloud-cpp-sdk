// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESOURCETABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESOURCETABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListInstanceResourceTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResourceTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResourceTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstanceResourceTablesResponseBody() = default ;
    ListInstanceResourceTablesResponseBody(const ListInstanceResourceTablesResponseBody &) = default ;
    ListInstanceResourceTablesResponseBody(ListInstanceResourceTablesResponseBody &&) = default ;
    ListInstanceResourceTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResourceTablesResponseBody() = default ;
    ListInstanceResourceTablesResponseBody& operator=(const ListInstanceResourceTablesResponseBody &) = default ;
    ListInstanceResourceTablesResponseBody& operator=(ListInstanceResourceTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tables& obj) { 
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, Tables& obj) { 
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
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
      virtual bool empty() const override { return this->tableName_ == nullptr; };
      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Tables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tables_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceResourceTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<ListInstanceResourceTablesResponseBody::Tables> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<ListInstanceResourceTablesResponseBody::Tables>) };
    inline vector<ListInstanceResourceTablesResponseBody::Tables> getTables() { DARABONBA_PTR_GET(tables_, vector<ListInstanceResourceTablesResponseBody::Tables>) };
    inline ListInstanceResourceTablesResponseBody& setTables(const vector<ListInstanceResourceTablesResponseBody::Tables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline ListInstanceResourceTablesResponseBody& setTables(vector<ListInstanceResourceTablesResponseBody::Tables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListInstanceResourceTablesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListInstanceResourceTablesResponseBody::Tables>> tables_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
