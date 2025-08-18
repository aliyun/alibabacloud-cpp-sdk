// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTENANTMEMBERSREQUESTADDCOMMANDUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_ADDTENANTMEMBERSREQUESTADDCOMMANDUSERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddTenantMembersRequestAddCommandUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTenantMembersRequestAddCommandUserList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RoleList, roleList_);
    };
    friend void from_json(const Darabonba::Json& j, AddTenantMembersRequestAddCommandUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RoleList, roleList_);
    };
    AddTenantMembersRequestAddCommandUserList() = default ;
    AddTenantMembersRequestAddCommandUserList(const AddTenantMembersRequestAddCommandUserList &) = default ;
    AddTenantMembersRequestAddCommandUserList(AddTenantMembersRequestAddCommandUserList &&) = default ;
    AddTenantMembersRequestAddCommandUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTenantMembersRequestAddCommandUserList() = default ;
    AddTenantMembersRequestAddCommandUserList& operator=(const AddTenantMembersRequestAddCommandUserList &) = default ;
    AddTenantMembersRequestAddCommandUserList& operator=(AddTenantMembersRequestAddCommandUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->roleList_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline AddTenantMembersRequestAddCommandUserList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // roleList Field Functions 
    bool hasRoleList() const { return this->roleList_ != nullptr;};
    void deleteRoleList() { this->roleList_ = nullptr;};
    inline const vector<string> & roleList() const { DARABONBA_PTR_GET_CONST(roleList_, vector<string>) };
    inline vector<string> roleList() { DARABONBA_PTR_GET(roleList_, vector<string>) };
    inline AddTenantMembersRequestAddCommandUserList& setRoleList(const vector<string> & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
    inline AddTenantMembersRequestAddCommandUserList& setRoleList(vector<string> && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<vector<string>> roleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
