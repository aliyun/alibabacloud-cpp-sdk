// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTAUTHORITYREQUESTDMLAUTHSETTING_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTAUTHORITYREQUESTDMLAUTHSETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyAccountAuthorityRequestDmlAuthSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountAuthorityRequestDmlAuthSetting& obj) { 
      DARABONBA_PTR_TO_JSON(AllowDatabases, allowDatabases_);
      DARABONBA_PTR_TO_JSON(AllowDictionaries, allowDictionaries_);
      DARABONBA_PTR_TO_JSON(DdlAuthority, ddlAuthority_);
      DARABONBA_PTR_TO_JSON(DmlAuthority, dmlAuthority_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountAuthorityRequestDmlAuthSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowDatabases, allowDatabases_);
      DARABONBA_PTR_FROM_JSON(AllowDictionaries, allowDictionaries_);
      DARABONBA_PTR_FROM_JSON(DdlAuthority, ddlAuthority_);
      DARABONBA_PTR_FROM_JSON(DmlAuthority, dmlAuthority_);
    };
    ModifyAccountAuthorityRequestDmlAuthSetting() = default ;
    ModifyAccountAuthorityRequestDmlAuthSetting(const ModifyAccountAuthorityRequestDmlAuthSetting &) = default ;
    ModifyAccountAuthorityRequestDmlAuthSetting(ModifyAccountAuthorityRequestDmlAuthSetting &&) = default ;
    ModifyAccountAuthorityRequestDmlAuthSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountAuthorityRequestDmlAuthSetting() = default ;
    ModifyAccountAuthorityRequestDmlAuthSetting& operator=(const ModifyAccountAuthorityRequestDmlAuthSetting &) = default ;
    ModifyAccountAuthorityRequestDmlAuthSetting& operator=(ModifyAccountAuthorityRequestDmlAuthSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowDatabases_ == nullptr
        && return this->allowDictionaries_ == nullptr && return this->ddlAuthority_ == nullptr && return this->dmlAuthority_ == nullptr; };
    // allowDatabases Field Functions 
    bool hasAllowDatabases() const { return this->allowDatabases_ != nullptr;};
    void deleteAllowDatabases() { this->allowDatabases_ = nullptr;};
    inline const vector<string> & allowDatabases() const { DARABONBA_PTR_GET_CONST(allowDatabases_, vector<string>) };
    inline vector<string> allowDatabases() { DARABONBA_PTR_GET(allowDatabases_, vector<string>) };
    inline ModifyAccountAuthorityRequestDmlAuthSetting& setAllowDatabases(const vector<string> & allowDatabases) { DARABONBA_PTR_SET_VALUE(allowDatabases_, allowDatabases) };
    inline ModifyAccountAuthorityRequestDmlAuthSetting& setAllowDatabases(vector<string> && allowDatabases) { DARABONBA_PTR_SET_RVALUE(allowDatabases_, allowDatabases) };


    // allowDictionaries Field Functions 
    bool hasAllowDictionaries() const { return this->allowDictionaries_ != nullptr;};
    void deleteAllowDictionaries() { this->allowDictionaries_ = nullptr;};
    inline const vector<string> & allowDictionaries() const { DARABONBA_PTR_GET_CONST(allowDictionaries_, vector<string>) };
    inline vector<string> allowDictionaries() { DARABONBA_PTR_GET(allowDictionaries_, vector<string>) };
    inline ModifyAccountAuthorityRequestDmlAuthSetting& setAllowDictionaries(const vector<string> & allowDictionaries) { DARABONBA_PTR_SET_VALUE(allowDictionaries_, allowDictionaries) };
    inline ModifyAccountAuthorityRequestDmlAuthSetting& setAllowDictionaries(vector<string> && allowDictionaries) { DARABONBA_PTR_SET_RVALUE(allowDictionaries_, allowDictionaries) };


    // ddlAuthority Field Functions 
    bool hasDdlAuthority() const { return this->ddlAuthority_ != nullptr;};
    void deleteDdlAuthority() { this->ddlAuthority_ = nullptr;};
    inline bool ddlAuthority() const { DARABONBA_PTR_GET_DEFAULT(ddlAuthority_, false) };
    inline ModifyAccountAuthorityRequestDmlAuthSetting& setDdlAuthority(bool ddlAuthority) { DARABONBA_PTR_SET_VALUE(ddlAuthority_, ddlAuthority) };


    // dmlAuthority Field Functions 
    bool hasDmlAuthority() const { return this->dmlAuthority_ != nullptr;};
    void deleteDmlAuthority() { this->dmlAuthority_ = nullptr;};
    inline int32_t dmlAuthority() const { DARABONBA_PTR_GET_DEFAULT(dmlAuthority_, 0) };
    inline ModifyAccountAuthorityRequestDmlAuthSetting& setDmlAuthority(int32_t dmlAuthority) { DARABONBA_PTR_SET_VALUE(dmlAuthority_, dmlAuthority) };


  protected:
    // The databases on which you want to grant permissions. Separate multiple databases with commas (,).
    std::shared_ptr<vector<string>> allowDatabases_ = nullptr;
    // The dictionaries on which you want to grant permissions. Separate multiple dictionaries with commas (,).
    std::shared_ptr<vector<string>> allowDictionaries_ = nullptr;
    // Specifies whether to grant the DDL permissions to the database account. Valid values:
    // 
    // *   **true**: The account has the permissions to execute DDL statements.
    // *   **false**: The account does not have the permissions to execute DDL statements.
    // 
    // This parameter is required.
    std::shared_ptr<bool> ddlAuthority_ = nullptr;
    // Specifies whether to grant the DML permissions to the database account. Valid values:
    // 
    // *   **0**: The account has the permissions to read data from the database, write data to the database, and modify the settings of the database.
    // *   **1**: The account only has the permissions to read data from the database.
    // *   **2**: The account only has the permissions to read data from the database and modify the settings of the database.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> dmlAuthority_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
