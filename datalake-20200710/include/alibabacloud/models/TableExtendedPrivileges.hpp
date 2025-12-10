// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLEEXTENDEDPRIVILEGES_HPP_
#define ALIBABACLOUD_MODELS_TABLEEXTENDEDPRIVILEGES_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/TableExtendedPrivilegesRolePrivilegesValue.hpp>
#include <alibabacloud/models/TableExtendedPrivilegesUserPrivilegesValue.hpp>
#include <alibabacloud/models/TableExtendedPrivilegesGroupPrivilegesValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class TableExtendedPrivileges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableExtendedPrivileges& obj) { 
      DARABONBA_PTR_TO_JSON(RolePrivileges, rolePrivileges_);
      DARABONBA_PTR_TO_JSON(UserPrivileges, userPrivileges_);
      DARABONBA_PTR_TO_JSON(groupPrivileges, groupPrivileges_);
    };
    friend void from_json(const Darabonba::Json& j, TableExtendedPrivileges& obj) { 
      DARABONBA_PTR_FROM_JSON(RolePrivileges, rolePrivileges_);
      DARABONBA_PTR_FROM_JSON(UserPrivileges, userPrivileges_);
      DARABONBA_PTR_FROM_JSON(groupPrivileges, groupPrivileges_);
    };
    TableExtendedPrivileges() = default ;
    TableExtendedPrivileges(const TableExtendedPrivileges &) = default ;
    TableExtendedPrivileges(TableExtendedPrivileges &&) = default ;
    TableExtendedPrivileges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableExtendedPrivileges() = default ;
    TableExtendedPrivileges& operator=(const TableExtendedPrivileges &) = default ;
    TableExtendedPrivileges& operator=(TableExtendedPrivileges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rolePrivileges_ == nullptr
        && return this->userPrivileges_ == nullptr && return this->groupPrivileges_ == nullptr; };
    // rolePrivileges Field Functions 
    bool hasRolePrivileges() const { return this->rolePrivileges_ != nullptr;};
    void deleteRolePrivileges() { this->rolePrivileges_ = nullptr;};
    inline const map<string, vector<Models::TableExtendedPrivilegesRolePrivilegesValue>> & rolePrivileges() const { DARABONBA_PTR_GET_CONST(rolePrivileges_, map<string, vector<Models::TableExtendedPrivilegesRolePrivilegesValue>>) };
    inline map<string, vector<Models::TableExtendedPrivilegesRolePrivilegesValue>> rolePrivileges() { DARABONBA_PTR_GET(rolePrivileges_, map<string, vector<Models::TableExtendedPrivilegesRolePrivilegesValue>>) };
    inline TableExtendedPrivileges& setRolePrivileges(const map<string, vector<Models::TableExtendedPrivilegesRolePrivilegesValue>> & rolePrivileges) { DARABONBA_PTR_SET_VALUE(rolePrivileges_, rolePrivileges) };
    inline TableExtendedPrivileges& setRolePrivileges(map<string, vector<Models::TableExtendedPrivilegesRolePrivilegesValue>> && rolePrivileges) { DARABONBA_PTR_SET_RVALUE(rolePrivileges_, rolePrivileges) };


    // userPrivileges Field Functions 
    bool hasUserPrivileges() const { return this->userPrivileges_ != nullptr;};
    void deleteUserPrivileges() { this->userPrivileges_ = nullptr;};
    inline const map<string, vector<Models::TableExtendedPrivilegesUserPrivilegesValue>> & userPrivileges() const { DARABONBA_PTR_GET_CONST(userPrivileges_, map<string, vector<Models::TableExtendedPrivilegesUserPrivilegesValue>>) };
    inline map<string, vector<Models::TableExtendedPrivilegesUserPrivilegesValue>> userPrivileges() { DARABONBA_PTR_GET(userPrivileges_, map<string, vector<Models::TableExtendedPrivilegesUserPrivilegesValue>>) };
    inline TableExtendedPrivileges& setUserPrivileges(const map<string, vector<Models::TableExtendedPrivilegesUserPrivilegesValue>> & userPrivileges) { DARABONBA_PTR_SET_VALUE(userPrivileges_, userPrivileges) };
    inline TableExtendedPrivileges& setUserPrivileges(map<string, vector<Models::TableExtendedPrivilegesUserPrivilegesValue>> && userPrivileges) { DARABONBA_PTR_SET_RVALUE(userPrivileges_, userPrivileges) };


    // groupPrivileges Field Functions 
    bool hasGroupPrivileges() const { return this->groupPrivileges_ != nullptr;};
    void deleteGroupPrivileges() { this->groupPrivileges_ = nullptr;};
    inline const map<string, vector<Models::TableExtendedPrivilegesGroupPrivilegesValue>> & groupPrivileges() const { DARABONBA_PTR_GET_CONST(groupPrivileges_, map<string, vector<Models::TableExtendedPrivilegesGroupPrivilegesValue>>) };
    inline map<string, vector<Models::TableExtendedPrivilegesGroupPrivilegesValue>> groupPrivileges() { DARABONBA_PTR_GET(groupPrivileges_, map<string, vector<Models::TableExtendedPrivilegesGroupPrivilegesValue>>) };
    inline TableExtendedPrivileges& setGroupPrivileges(const map<string, vector<Models::TableExtendedPrivilegesGroupPrivilegesValue>> & groupPrivileges) { DARABONBA_PTR_SET_VALUE(groupPrivileges_, groupPrivileges) };
    inline TableExtendedPrivileges& setGroupPrivileges(map<string, vector<Models::TableExtendedPrivilegesGroupPrivilegesValue>> && groupPrivileges) { DARABONBA_PTR_SET_RVALUE(groupPrivileges_, groupPrivileges) };


  protected:
    std::shared_ptr<map<string, vector<Models::TableExtendedPrivilegesRolePrivilegesValue>>> rolePrivileges_ = nullptr;
    std::shared_ptr<map<string, vector<Models::TableExtendedPrivilegesUserPrivilegesValue>>> userPrivileges_ = nullptr;
    std::shared_ptr<map<string, vector<Models::TableExtendedPrivilegesGroupPrivilegesValue>>> groupPrivileges_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
