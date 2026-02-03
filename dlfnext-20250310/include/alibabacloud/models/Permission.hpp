// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERMISSION_HPP_
#define ALIBABACLOUD_MODELS_PERMISSION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RowFilter.hpp>
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
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(function, function_);
      DARABONBA_PTR_TO_JSON(principal, principal_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(rowFilter, rowFilter_);
      DARABONBA_PTR_TO_JSON(table, table_);
      DARABONBA_PTR_TO_JSON(view, view_);
    };
    friend void from_json(const Darabonba::Json& j, Permission& obj) { 
      DARABONBA_PTR_FROM_JSON(access, access_);
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(function, function_);
      DARABONBA_PTR_FROM_JSON(principal, principal_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(rowFilter, rowFilter_);
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
    class Columns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Columns& obj) { 
        DARABONBA_PTR_TO_JSON(columnNames, columnNames_);
        DARABONBA_PTR_TO_JSON(excludedColumnNames, excludedColumnNames_);
      };
      friend void from_json(const Darabonba::Json& j, Columns& obj) { 
        DARABONBA_PTR_FROM_JSON(columnNames, columnNames_);
        DARABONBA_PTR_FROM_JSON(excludedColumnNames, excludedColumnNames_);
      };
      Columns() = default ;
      Columns(const Columns &) = default ;
      Columns(Columns &&) = default ;
      Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Columns() = default ;
      Columns& operator=(const Columns &) = default ;
      Columns& operator=(Columns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->columnNames_ == nullptr
        && this->excludedColumnNames_ == nullptr; };
      // columnNames Field Functions 
      bool hasColumnNames() const { return this->columnNames_ != nullptr;};
      void deleteColumnNames() { this->columnNames_ = nullptr;};
      inline const vector<string> & getColumnNames() const { DARABONBA_PTR_GET_CONST(columnNames_, vector<string>) };
      inline vector<string> getColumnNames() { DARABONBA_PTR_GET(columnNames_, vector<string>) };
      inline Columns& setColumnNames(const vector<string> & columnNames) { DARABONBA_PTR_SET_VALUE(columnNames_, columnNames) };
      inline Columns& setColumnNames(vector<string> && columnNames) { DARABONBA_PTR_SET_RVALUE(columnNames_, columnNames) };


      // excludedColumnNames Field Functions 
      bool hasExcludedColumnNames() const { return this->excludedColumnNames_ != nullptr;};
      void deleteExcludedColumnNames() { this->excludedColumnNames_ = nullptr;};
      inline const vector<string> & getExcludedColumnNames() const { DARABONBA_PTR_GET_CONST(excludedColumnNames_, vector<string>) };
      inline vector<string> getExcludedColumnNames() { DARABONBA_PTR_GET(excludedColumnNames_, vector<string>) };
      inline Columns& setExcludedColumnNames(const vector<string> & excludedColumnNames) { DARABONBA_PTR_SET_VALUE(excludedColumnNames_, excludedColumnNames) };
      inline Columns& setExcludedColumnNames(vector<string> && excludedColumnNames) { DARABONBA_PTR_SET_RVALUE(excludedColumnNames_, excludedColumnNames) };


    protected:
      shared_ptr<vector<string>> columnNames_ {};
      shared_ptr<vector<string>> excludedColumnNames_ {};
    };

    virtual bool empty() const override { return this->access_ == nullptr
        && this->columns_ == nullptr && this->database_ == nullptr && this->expireTime_ == nullptr && this->function_ == nullptr && this->principal_ == nullptr
        && this->resourceType_ == nullptr && this->rowFilter_ == nullptr && this->table_ == nullptr && this->view_ == nullptr; };
    // access Field Functions 
    bool hasAccess() const { return this->access_ != nullptr;};
    void deleteAccess() { this->access_ = nullptr;};
    inline string getAccess() const { DARABONBA_PTR_GET_DEFAULT(access_, "") };
    inline Permission& setAccess(string access) { DARABONBA_PTR_SET_VALUE(access_, access) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const Permission::Columns & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, Permission::Columns) };
    inline Permission::Columns getColumns() { DARABONBA_PTR_GET(columns_, Permission::Columns) };
    inline Permission& setColumns(const Permission::Columns & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline Permission& setColumns(Permission::Columns && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline Permission& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline Permission& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline Permission& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // principal Field Functions 
    bool hasPrincipal() const { return this->principal_ != nullptr;};
    void deletePrincipal() { this->principal_ = nullptr;};
    inline string getPrincipal() const { DARABONBA_PTR_GET_DEFAULT(principal_, "") };
    inline Permission& setPrincipal(string principal) { DARABONBA_PTR_SET_VALUE(principal_, principal) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline Permission& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // rowFilter Field Functions 
    bool hasRowFilter() const { return this->rowFilter_ != nullptr;};
    void deleteRowFilter() { this->rowFilter_ = nullptr;};
    inline const RowFilter & getRowFilter() const { DARABONBA_PTR_GET_CONST(rowFilter_, RowFilter) };
    inline RowFilter getRowFilter() { DARABONBA_PTR_GET(rowFilter_, RowFilter) };
    inline Permission& setRowFilter(const RowFilter & rowFilter) { DARABONBA_PTR_SET_VALUE(rowFilter_, rowFilter) };
    inline Permission& setRowFilter(RowFilter && rowFilter) { DARABONBA_PTR_SET_RVALUE(rowFilter_, rowFilter) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline Permission& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


    // view Field Functions 
    bool hasView() const { return this->view_ != nullptr;};
    void deleteView() { this->view_ = nullptr;};
    inline string getView() const { DARABONBA_PTR_GET_DEFAULT(view_, "") };
    inline Permission& setView(string view) { DARABONBA_PTR_SET_VALUE(view_, view) };


  protected:
    shared_ptr<string> access_ {};
    shared_ptr<Permission::Columns> columns_ {};
    shared_ptr<string> database_ {};
    shared_ptr<string> expireTime_ {};
    shared_ptr<string> function_ {};
    shared_ptr<string> principal_ {};
    shared_ptr<string> resourceType_ {};
    shared_ptr<RowFilter> rowFilter_ {};
    shared_ptr<string> table_ {};
    shared_ptr<string> view_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
