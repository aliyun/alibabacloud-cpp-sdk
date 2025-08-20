// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGESREQUESTACCOUNTPRIVILEGESPRIVILEGEOBJECT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGESREQUESTACCOUNTPRIVILEGESPRIVILEGEOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Table, table_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
    };
    ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject() = default ;
    ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject(const ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject &) = default ;
    ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject(ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject &&) = default ;
    ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject() = default ;
    ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject& operator=(const ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject &) = default ;
    ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject& operator=(ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->column_ != nullptr
        && this->database_ != nullptr && this->table_ != nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline string column() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
    inline ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline ModifyAccountPrivilegesRequestAccountPrivilegesPrivilegeObject& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    // The columns on which you want to grant permissions. This parameter must be specified when the PrivilegeType parameter is set to Column.
    std::shared_ptr<string> column_ = nullptr;
    // The databases on which you want to grant permissions. This parameter must be specified when the PrivilegeType parameter is set to Database, Table, or Column.
    std::shared_ptr<string> database_ = nullptr;
    // The tables on which you want to grant permissions. This parameter must be specified when the PrivilegeType parameter is set to Table or Column.
    std::shared_ptr<string> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
