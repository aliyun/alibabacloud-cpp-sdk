// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERMISSIONCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_PERMISSIONCOLUMNS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class PermissionColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PermissionColumns& obj) { 
      DARABONBA_PTR_TO_JSON(columnNames, columnNames_);
      DARABONBA_PTR_TO_JSON(excludedColumnNames, excludedColumnNames_);
    };
    friend void from_json(const Darabonba::Json& j, PermissionColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(columnNames, columnNames_);
      DARABONBA_PTR_FROM_JSON(excludedColumnNames, excludedColumnNames_);
    };
    PermissionColumns() = default ;
    PermissionColumns(const PermissionColumns &) = default ;
    PermissionColumns(PermissionColumns &&) = default ;
    PermissionColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PermissionColumns() = default ;
    PermissionColumns& operator=(const PermissionColumns &) = default ;
    PermissionColumns& operator=(PermissionColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnNames_ != nullptr
        && this->excludedColumnNames_ != nullptr; };
    // columnNames Field Functions 
    bool hasColumnNames() const { return this->columnNames_ != nullptr;};
    void deleteColumnNames() { this->columnNames_ = nullptr;};
    inline const vector<string> & columnNames() const { DARABONBA_PTR_GET_CONST(columnNames_, vector<string>) };
    inline vector<string> columnNames() { DARABONBA_PTR_GET(columnNames_, vector<string>) };
    inline PermissionColumns& setColumnNames(const vector<string> & columnNames) { DARABONBA_PTR_SET_VALUE(columnNames_, columnNames) };
    inline PermissionColumns& setColumnNames(vector<string> && columnNames) { DARABONBA_PTR_SET_RVALUE(columnNames_, columnNames) };


    // excludedColumnNames Field Functions 
    bool hasExcludedColumnNames() const { return this->excludedColumnNames_ != nullptr;};
    void deleteExcludedColumnNames() { this->excludedColumnNames_ = nullptr;};
    inline const vector<string> & excludedColumnNames() const { DARABONBA_PTR_GET_CONST(excludedColumnNames_, vector<string>) };
    inline vector<string> excludedColumnNames() { DARABONBA_PTR_GET(excludedColumnNames_, vector<string>) };
    inline PermissionColumns& setExcludedColumnNames(const vector<string> & excludedColumnNames) { DARABONBA_PTR_SET_VALUE(excludedColumnNames_, excludedColumnNames) };
    inline PermissionColumns& setExcludedColumnNames(vector<string> && excludedColumnNames) { DARABONBA_PTR_SET_RVALUE(excludedColumnNames_, excludedColumnNames) };


  protected:
    std::shared_ptr<vector<string>> columnNames_ = nullptr;
    std::shared_ptr<vector<string>> excludedColumnNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
