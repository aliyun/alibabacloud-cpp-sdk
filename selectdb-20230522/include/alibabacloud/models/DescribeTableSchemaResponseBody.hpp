// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLESCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLESCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeTableSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateStatement, createStatement_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Table, table_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateStatement, createStatement_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
    };
    DescribeTableSchemaResponseBody() = default ;
    DescribeTableSchemaResponseBody(const DescribeTableSchemaResponseBody &) = default ;
    DescribeTableSchemaResponseBody(DescribeTableSchemaResponseBody &&) = default ;
    DescribeTableSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableSchemaResponseBody() = default ;
    DescribeTableSchemaResponseBody& operator=(const DescribeTableSchemaResponseBody &) = default ;
    DescribeTableSchemaResponseBody& operator=(DescribeTableSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createStatement_ == nullptr
        && this->database_ == nullptr && this->requestId_ == nullptr && this->table_ == nullptr; };
    // createStatement Field Functions 
    bool hasCreateStatement() const { return this->createStatement_ != nullptr;};
    void deleteCreateStatement() { this->createStatement_ = nullptr;};
    inline string getCreateStatement() const { DARABONBA_PTR_GET_DEFAULT(createStatement_, "") };
    inline DescribeTableSchemaResponseBody& setCreateStatement(string createStatement) { DARABONBA_PTR_SET_VALUE(createStatement_, createStatement) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeTableSchemaResponseBody& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTableSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline DescribeTableSchemaResponseBody& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    shared_ptr<string> createStatement_ {};
    shared_ptr<string> database_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> table_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
