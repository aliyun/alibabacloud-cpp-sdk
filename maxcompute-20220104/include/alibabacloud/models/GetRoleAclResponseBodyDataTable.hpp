// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROLEACLRESPONSEBODYDATATABLE_HPP_
#define ALIBABACLOUD_MODELS_GETROLEACLRESPONSEBODYDATATABLE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetRoleAclResponseBodyDataTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoleAclResponseBodyDataTable& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoleAclResponseBodyDataTable& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
    };
    GetRoleAclResponseBodyDataTable() = default ;
    GetRoleAclResponseBodyDataTable(const GetRoleAclResponseBodyDataTable &) = default ;
    GetRoleAclResponseBodyDataTable(GetRoleAclResponseBodyDataTable &&) = default ;
    GetRoleAclResponseBodyDataTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoleAclResponseBodyDataTable() = default ;
    GetRoleAclResponseBodyDataTable& operator=(const GetRoleAclResponseBodyDataTable &) = default ;
    GetRoleAclResponseBodyDataTable& operator=(GetRoleAclResponseBodyDataTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && return this->name_ == nullptr && return this->schemaName_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<string> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
    inline vector<string> actions() { DARABONBA_PTR_GET(actions_, vector<string>) };
    inline GetRoleAclResponseBodyDataTable& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline GetRoleAclResponseBodyDataTable& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRoleAclResponseBodyDataTable& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetRoleAclResponseBodyDataTable& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


  protected:
    // The operations that were performed on the table.
    std::shared_ptr<vector<string>> actions_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> name_ = nullptr;
    // The Schema name.
    std::shared_ptr<string> schemaName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
