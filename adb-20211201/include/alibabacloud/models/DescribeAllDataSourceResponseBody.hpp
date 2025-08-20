// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAllDataSourceResponseBodyColumns.hpp>
#include <alibabacloud/models/DescribeAllDataSourceResponseBodySchemas.hpp>
#include <alibabacloud/models/DescribeAllDataSourceResponseBodyTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAllDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    DescribeAllDataSourceResponseBody() = default ;
    DescribeAllDataSourceResponseBody(const DescribeAllDataSourceResponseBody &) = default ;
    DescribeAllDataSourceResponseBody(DescribeAllDataSourceResponseBody &&) = default ;
    DescribeAllDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDataSourceResponseBody() = default ;
    DescribeAllDataSourceResponseBody& operator=(const DescribeAllDataSourceResponseBody &) = default ;
    DescribeAllDataSourceResponseBody& operator=(DescribeAllDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columns_ != nullptr
        && this->requestId_ != nullptr && this->schemas_ != nullptr && this->tables_ != nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const DescribeAllDataSourceResponseBodyColumns & columns() const { DARABONBA_PTR_GET_CONST(columns_, DescribeAllDataSourceResponseBodyColumns) };
    inline DescribeAllDataSourceResponseBodyColumns columns() { DARABONBA_PTR_GET(columns_, DescribeAllDataSourceResponseBodyColumns) };
    inline DescribeAllDataSourceResponseBody& setColumns(const DescribeAllDataSourceResponseBodyColumns & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline DescribeAllDataSourceResponseBody& setColumns(DescribeAllDataSourceResponseBodyColumns && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const DescribeAllDataSourceResponseBodySchemas & schemas() const { DARABONBA_PTR_GET_CONST(schemas_, DescribeAllDataSourceResponseBodySchemas) };
    inline DescribeAllDataSourceResponseBodySchemas schemas() { DARABONBA_PTR_GET(schemas_, DescribeAllDataSourceResponseBodySchemas) };
    inline DescribeAllDataSourceResponseBody& setSchemas(const DescribeAllDataSourceResponseBodySchemas & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline DescribeAllDataSourceResponseBody& setSchemas(DescribeAllDataSourceResponseBodySchemas && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const DescribeAllDataSourceResponseBodyTables & tables() const { DARABONBA_PTR_GET_CONST(tables_, DescribeAllDataSourceResponseBodyTables) };
    inline DescribeAllDataSourceResponseBodyTables tables() { DARABONBA_PTR_GET(tables_, DescribeAllDataSourceResponseBodyTables) };
    inline DescribeAllDataSourceResponseBody& setTables(const DescribeAllDataSourceResponseBodyTables & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeAllDataSourceResponseBody& setTables(DescribeAllDataSourceResponseBodyTables && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    // The queried columns.
    std::shared_ptr<DescribeAllDataSourceResponseBodyColumns> columns_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried databases.
    std::shared_ptr<DescribeAllDataSourceResponseBodySchemas> schemas_ = nullptr;
    // The queried tables.
    std::shared_ptr<DescribeAllDataSourceResponseBodyTables> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
