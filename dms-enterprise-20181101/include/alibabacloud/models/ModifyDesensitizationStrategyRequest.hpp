// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESENSITIZATIONSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESENSITIZATIONSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ModifyDesensitizationStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesensitizationStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(IsLogic, isLogic_);
      DARABONBA_PTR_TO_JSON(IsReset, isReset_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesensitizationStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(IsLogic, isLogic_);
      DARABONBA_PTR_FROM_JSON(IsReset, isReset_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ModifyDesensitizationStrategyRequest() = default ;
    ModifyDesensitizationStrategyRequest(const ModifyDesensitizationStrategyRequest &) = default ;
    ModifyDesensitizationStrategyRequest(ModifyDesensitizationStrategyRequest &&) = default ;
    ModifyDesensitizationStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesensitizationStrategyRequest() = default ;
    ModifyDesensitizationStrategyRequest& operator=(const ModifyDesensitizationStrategyRequest &) = default ;
    ModifyDesensitizationStrategyRequest& operator=(ModifyDesensitizationStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->dbId_ != nullptr && this->isDefault_ != nullptr && this->isLogic_ != nullptr && this->isReset_ != nullptr && this->ruleId_ != nullptr
        && this->schemaName_ != nullptr && this->tableName_ != nullptr && this->tid_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ModifyDesensitizationStrategyRequest& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline ModifyDesensitizationStrategyRequest& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ModifyDesensitizationStrategyRequest& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // isLogic Field Functions 
    bool hasIsLogic() const { return this->isLogic_ != nullptr;};
    void deleteIsLogic() { this->isLogic_ = nullptr;};
    inline bool isLogic() const { DARABONBA_PTR_GET_DEFAULT(isLogic_, false) };
    inline ModifyDesensitizationStrategyRequest& setIsLogic(bool isLogic) { DARABONBA_PTR_SET_VALUE(isLogic_, isLogic) };


    // isReset Field Functions 
    bool hasIsReset() const { return this->isReset_ != nullptr;};
    void deleteIsReset() { this->isReset_ = nullptr;};
    inline bool isReset() const { DARABONBA_PTR_GET_DEFAULT(isReset_, false) };
    inline ModifyDesensitizationStrategyRequest& setIsReset(bool isReset) { DARABONBA_PTR_SET_VALUE(isReset_, isReset) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int32_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
    inline ModifyDesensitizationStrategyRequest& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ModifyDesensitizationStrategyRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ModifyDesensitizationStrategyRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ModifyDesensitizationStrategyRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The name of the field. You can call the [ListSensitiveColumns](https://help.aliyun.com/document_detail/188103.html) operation to obtain the field name.
    // 
    // >  You can also call the [ListColumns](https://help.aliyun.com/document_detail/141870.html) operation to obtain the field name.
    // 
    // This parameter is required.
    std::shared_ptr<string> columnName_ = nullptr;
    // The ID of the database. You can call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> dbId_ = nullptr;
    // The desensitization algorithm of the field setting. The default value is false. The values are as follows:
    // 
    // - **true**: default desensitization algorithm.
    // 
    // - **false** :semi-desensitization algorithm.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // Specifies whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a physical database.
    // *   **false**: The database is a logical database.
    // 
    // This parameter is required.
    std::shared_ptr<bool> isLogic_ = nullptr;
    // Specifies whether to reset the masking rule. Valid value:
    // 
    // *   **true**: Reset the masking rule.
    // *   **false**: Do not reset the masking rule. This is the default value.
    std::shared_ptr<bool> isReset_ = nullptr;
    // The ID of the masking rule.
    std::shared_ptr<int32_t> ruleId_ = nullptr;
    // The name of the database. You can call the [ListSensitiveColumns](https://help.aliyun.com/document_detail/188103.html) operation to obtain the database name.
    // 
    // > 
    // 
    // *   If the database is a physical database, you can call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to obtain the database name.
    // 
    // *   If the database is a logical database, you can call the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to obtain the name of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name of the table. You can call the [ListSensitiveColumns](https://help.aliyun.com/document_detail/188103.html) operation to obtain the table name.
    // 
    // >  You can also call the [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to obtain the table name.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) in the topic "Manage DMS tenants."
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
