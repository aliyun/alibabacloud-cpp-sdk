// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERMISSION_HPP_
#define ALIBABACLOUD_MODELS_PERMISSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PermissionColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class Permission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Permission& obj) { 
      DARABONBA_PTR_TO_JSON(access, access_);
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(database, database_);
      DARABONBA_PTR_TO_JSON(function, function_);
      DARABONBA_PTR_TO_JSON(principal, principal_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(table, table_);
      DARABONBA_PTR_TO_JSON(view, view_);
    };
    friend void from_json(const Darabonba::Json& j, Permission& obj) { 
      DARABONBA_PTR_FROM_JSON(access, access_);
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(function, function_);
      DARABONBA_PTR_FROM_JSON(principal, principal_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(table, table_);
      DARABONBA_PTR_FROM_JSON(view, view_);
    };
    Permission() = default ;
    Permission(const Permission &) = default ;
    Permission(Permission &&) = default ;
    Permission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Permission() = default ;
    Permission& operator=(const Permission &) = default ;
    Permission& operator=(Permission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->access_ != nullptr
        && this->columns_ != nullptr && this->database_ != nullptr && this->function_ != nullptr && this->principal_ != nullptr && this->resourceType_ != nullptr
        && this->table_ != nullptr && this->view_ != nullptr; };
    // access Field Functions 
    bool hasAccess() const { return this->access_ != nullptr;};
    void deleteAccess() { this->access_ = nullptr;};
    inline string access() const { DARABONBA_PTR_GET_DEFAULT(access_, "") };
    inline Permission& setAccess(string access) { DARABONBA_PTR_SET_VALUE(access_, access) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const PermissionColumns & columns() const { DARABONBA_PTR_GET_CONST(columns_, PermissionColumns) };
    inline PermissionColumns columns() { DARABONBA_PTR_GET(columns_, PermissionColumns) };
    inline Permission& setColumns(const PermissionColumns & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline Permission& setColumns(PermissionColumns && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline Permission& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string function() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline Permission& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // principal Field Functions 
    bool hasPrincipal() const { return this->principal_ != nullptr;};
    void deletePrincipal() { this->principal_ = nullptr;};
    inline string principal() const { DARABONBA_PTR_GET_DEFAULT(principal_, "") };
    inline Permission& setPrincipal(string principal) { DARABONBA_PTR_SET_VALUE(principal_, principal) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline Permission& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline Permission& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


    // view Field Functions 
    bool hasView() const { return this->view_ != nullptr;};
    void deleteView() { this->view_ = nullptr;};
    inline string view() const { DARABONBA_PTR_GET_DEFAULT(view_, "") };
    inline Permission& setView(string view) { DARABONBA_PTR_SET_VALUE(view_, view) };


  protected:
    std::shared_ptr<string> access_ = nullptr;
    std::shared_ptr<PermissionColumns> columns_ = nullptr;
    std::shared_ptr<string> database_ = nullptr;
    std::shared_ptr<string> function_ = nullptr;
    std::shared_ptr<string> principal_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> table_ = nullptr;
    std::shared_ptr<string> view_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
