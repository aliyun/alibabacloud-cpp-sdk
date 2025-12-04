// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAllDataSourcesResponseBodyColumns.hpp>
#include <alibabacloud/models/DescribeAllDataSourcesResponseBodySchemas.hpp>
#include <alibabacloud/models/DescribeAllDataSourcesResponseBodyTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeAllDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    DescribeAllDataSourcesResponseBody() = default ;
    DescribeAllDataSourcesResponseBody(const DescribeAllDataSourcesResponseBody &) = default ;
    DescribeAllDataSourcesResponseBody(DescribeAllDataSourcesResponseBody &&) = default ;
    DescribeAllDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDataSourcesResponseBody() = default ;
    DescribeAllDataSourcesResponseBody& operator=(const DescribeAllDataSourcesResponseBody &) = default ;
    DescribeAllDataSourcesResponseBody& operator=(DescribeAllDataSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && return this->requestId_ == nullptr && return this->schemas_ == nullptr && return this->tables_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const DescribeAllDataSourcesResponseBodyColumns & columns() const { DARABONBA_PTR_GET_CONST(columns_, DescribeAllDataSourcesResponseBodyColumns) };
    inline DescribeAllDataSourcesResponseBodyColumns columns() { DARABONBA_PTR_GET(columns_, DescribeAllDataSourcesResponseBodyColumns) };
    inline DescribeAllDataSourcesResponseBody& setColumns(const DescribeAllDataSourcesResponseBodyColumns & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline DescribeAllDataSourcesResponseBody& setColumns(DescribeAllDataSourcesResponseBodyColumns && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const DescribeAllDataSourcesResponseBodySchemas & schemas() const { DARABONBA_PTR_GET_CONST(schemas_, DescribeAllDataSourcesResponseBodySchemas) };
    inline DescribeAllDataSourcesResponseBodySchemas schemas() { DARABONBA_PTR_GET(schemas_, DescribeAllDataSourcesResponseBodySchemas) };
    inline DescribeAllDataSourcesResponseBody& setSchemas(const DescribeAllDataSourcesResponseBodySchemas & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline DescribeAllDataSourcesResponseBody& setSchemas(DescribeAllDataSourcesResponseBodySchemas && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const DescribeAllDataSourcesResponseBodyTables & tables() const { DARABONBA_PTR_GET_CONST(tables_, DescribeAllDataSourcesResponseBodyTables) };
    inline DescribeAllDataSourcesResponseBodyTables tables() { DARABONBA_PTR_GET(tables_, DescribeAllDataSourcesResponseBodyTables) };
    inline DescribeAllDataSourcesResponseBody& setTables(const DescribeAllDataSourcesResponseBodyTables & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeAllDataSourcesResponseBody& setTables(DescribeAllDataSourcesResponseBodyTables && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    // Details of the columns.
    std::shared_ptr<DescribeAllDataSourcesResponseBodyColumns> columns_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the databases.
    std::shared_ptr<DescribeAllDataSourcesResponseBodySchemas> schemas_ = nullptr;
    // The information about the tables.
    std::shared_ptr<DescribeAllDataSourcesResponseBodyTables> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
