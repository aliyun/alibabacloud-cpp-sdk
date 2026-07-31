// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESQLBYSEMANTICSQLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATESQLBYSEMANTICSQLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GenerateSqlBySemanticSqlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateSqlBySemanticSqlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateSqlBySemanticSqlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
    };
    GenerateSqlBySemanticSqlRequest() = default ;
    GenerateSqlBySemanticSqlRequest(const GenerateSqlBySemanticSqlRequest &) = default ;
    GenerateSqlBySemanticSqlRequest(GenerateSqlBySemanticSqlRequest &&) = default ;
    GenerateSqlBySemanticSqlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateSqlBySemanticSqlRequest() = default ;
    GenerateSqlBySemanticSqlRequest& operator=(const GenerateSqlBySemanticSqlRequest &) = default ;
    GenerateSqlBySemanticSqlRequest& operator=(GenerateSqlBySemanticSqlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->schemaName_ == nullptr && this->sql_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GenerateSqlBySemanticSqlRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GenerateSqlBySemanticSqlRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline GenerateSqlBySemanticSqlRequest& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


  protected:
    // The ID of the ADB cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The schema name.
    shared_ptr<string> schemaName_ {};
    // The SQL statement that queries the semantic view.
    // 
    // This parameter is required.
    shared_ptr<string> sql_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
