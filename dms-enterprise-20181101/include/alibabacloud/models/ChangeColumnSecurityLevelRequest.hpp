// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECOLUMNSECURITYLEVELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGECOLUMNSECURITYLEVELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ChangeColumnSecurityLevelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeColumnSecurityLevelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(IsLogic, isLogic_);
      DARABONBA_PTR_TO_JSON(NewSensitivityLevel, newSensitivityLevel_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeColumnSecurityLevelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(IsLogic, isLogic_);
      DARABONBA_PTR_FROM_JSON(NewSensitivityLevel, newSensitivityLevel_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ChangeColumnSecurityLevelRequest() = default ;
    ChangeColumnSecurityLevelRequest(const ChangeColumnSecurityLevelRequest &) = default ;
    ChangeColumnSecurityLevelRequest(ChangeColumnSecurityLevelRequest &&) = default ;
    ChangeColumnSecurityLevelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeColumnSecurityLevelRequest() = default ;
    ChangeColumnSecurityLevelRequest& operator=(const ChangeColumnSecurityLevelRequest &) = default ;
    ChangeColumnSecurityLevelRequest& operator=(ChangeColumnSecurityLevelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->dbId_ != nullptr && this->isLogic_ != nullptr && this->newSensitivityLevel_ != nullptr && this->schemaName_ != nullptr && this->tableName_ != nullptr
        && this->tid_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ChangeColumnSecurityLevelRequest& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ChangeColumnSecurityLevelRequest& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // isLogic Field Functions 
    bool hasIsLogic() const { return this->isLogic_ != nullptr;};
    void deleteIsLogic() { this->isLogic_ = nullptr;};
    inline bool isLogic() const { DARABONBA_PTR_GET_DEFAULT(isLogic_, false) };
    inline ChangeColumnSecurityLevelRequest& setIsLogic(bool isLogic) { DARABONBA_PTR_SET_VALUE(isLogic_, isLogic) };


    // newSensitivityLevel Field Functions 
    bool hasNewSensitivityLevel() const { return this->newSensitivityLevel_ != nullptr;};
    void deleteNewSensitivityLevel() { this->newSensitivityLevel_ = nullptr;};
    inline string newSensitivityLevel() const { DARABONBA_PTR_GET_DEFAULT(newSensitivityLevel_, "") };
    inline ChangeColumnSecurityLevelRequest& setNewSensitivityLevel(string newSensitivityLevel) { DARABONBA_PTR_SET_VALUE(newSensitivityLevel_, newSensitivityLevel) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ChangeColumnSecurityLevelRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ChangeColumnSecurityLevelRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ChangeColumnSecurityLevelRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> columnName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isLogic_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> newSensitivityLevel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> schemaName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
