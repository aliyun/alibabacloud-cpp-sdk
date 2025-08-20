// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCERESPONSEBODYSCHEMASSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCERESPONSEBODYSCHEMASSCHEMA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAllDataSourceResponseBodySchemasSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDataSourceResponseBodySchemasSchema& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDataSourceResponseBodySchemasSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
    };
    DescribeAllDataSourceResponseBodySchemasSchema() = default ;
    DescribeAllDataSourceResponseBodySchemasSchema(const DescribeAllDataSourceResponseBodySchemasSchema &) = default ;
    DescribeAllDataSourceResponseBodySchemasSchema(DescribeAllDataSourceResponseBodySchemasSchema &&) = default ;
    DescribeAllDataSourceResponseBodySchemasSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDataSourceResponseBodySchemasSchema() = default ;
    DescribeAllDataSourceResponseBodySchemasSchema& operator=(const DescribeAllDataSourceResponseBodySchemasSchema &) = default ;
    DescribeAllDataSourceResponseBodySchemasSchema& operator=(DescribeAllDataSourceResponseBodySchemasSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->schemaName_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAllDataSourceResponseBodySchemasSchema& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeAllDataSourceResponseBodySchemasSchema& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The logical name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
