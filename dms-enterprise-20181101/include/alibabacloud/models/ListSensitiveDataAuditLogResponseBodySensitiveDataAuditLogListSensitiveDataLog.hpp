// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVEDATAAUDITLOGRESPONSEBODYSENSITIVEDATAAUDITLOGLISTSENSITIVEDATALOG_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVEDATAAUDITLOGRESPONSEBODYSENSITIVEDATAAUDITLOGLISTSENSITIVEDATALOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnPermissionType, columnPermissionType_);
      DARABONBA_PTR_TO_JSON(DesensitizationRule, desensitizationRule_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnPermissionType, columnPermissionType_);
      DARABONBA_PTR_FROM_JSON(DesensitizationRule, desensitizationRule_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog() = default ;
    ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog(const ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog &) = default ;
    ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog(ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog &&) = default ;
    ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog() = default ;
    ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog& operator=(const ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog &) = default ;
    ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog& operator=(ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnName_ == nullptr
        && return this->columnPermissionType_ == nullptr && return this->desensitizationRule_ == nullptr && return this->securityLevel_ == nullptr && return this->tableName_ == nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnPermissionType Field Functions 
    bool hasColumnPermissionType() const { return this->columnPermissionType_ != nullptr;};
    void deleteColumnPermissionType() { this->columnPermissionType_ = nullptr;};
    inline string columnPermissionType() const { DARABONBA_PTR_GET_DEFAULT(columnPermissionType_, "") };
    inline ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog& setColumnPermissionType(string columnPermissionType) { DARABONBA_PTR_SET_VALUE(columnPermissionType_, columnPermissionType) };


    // desensitizationRule Field Functions 
    bool hasDesensitizationRule() const { return this->desensitizationRule_ != nullptr;};
    void deleteDesensitizationRule() { this->desensitizationRule_ = nullptr;};
    inline string desensitizationRule() const { DARABONBA_PTR_GET_DEFAULT(desensitizationRule_, "") };
    inline ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog& setDesensitizationRule(string desensitizationRule) { DARABONBA_PTR_SET_VALUE(desensitizationRule_, desensitizationRule) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline string securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
    inline ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListSensitiveDataAuditLogResponseBodySensitiveDataAuditLogListSensitiveDataLog& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The name of the column that contains sensitive data.
    std::shared_ptr<string> columnName_ = nullptr;
    // The permission that the user has on the column. Valid values:
    // 
    // *   **No permission**
    // *   **Partial redaction**
    // *   **Plaintext**
    // *   **Change**
    // *   **Enable data masking**
    // *   **Disable data masking**
    std::shared_ptr<string> columnPermissionType_ = nullptr;
    // The algorithm used for data masking.
    std::shared_ptr<string> desensitizationRule_ = nullptr;
    // The sensitivity level of the data. Valid values:
    // 
    // *   **Low**
    // *   **Medium**
    // *   **High**
    std::shared_ptr<string> securityLevel_ = nullptr;
    // The name of the table that stores the sensitive data.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
