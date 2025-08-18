// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODYPAGERESULTUSERGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSRESPONSEBODYPAGERESULTUSERGROUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserGroupsResponseBodyPageResultUserGroupListAdminList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListUserGroupsResponseBodyPageResultUserGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsResponseBodyPageResultUserGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(AdminList, adminList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MyRole, myRole_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsResponseBodyPageResultUserGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(AdminList, adminList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MyRole, myRole_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListUserGroupsResponseBodyPageResultUserGroupList() = default ;
    ListUserGroupsResponseBodyPageResultUserGroupList(const ListUserGroupsResponseBodyPageResultUserGroupList &) = default ;
    ListUserGroupsResponseBodyPageResultUserGroupList(ListUserGroupsResponseBodyPageResultUserGroupList &&) = default ;
    ListUserGroupsResponseBodyPageResultUserGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsResponseBodyPageResultUserGroupList() = default ;
    ListUserGroupsResponseBodyPageResultUserGroupList& operator=(const ListUserGroupsResponseBodyPageResultUserGroupList &) = default ;
    ListUserGroupsResponseBodyPageResultUserGroupList& operator=(ListUserGroupsResponseBodyPageResultUserGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->active_ != nullptr
        && this->adminList_ != nullptr && this->description_ != nullptr && this->id_ != nullptr && this->myRole_ != nullptr && this->name_ != nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline ListUserGroupsResponseBodyPageResultUserGroupList& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // adminList Field Functions 
    bool hasAdminList() const { return this->adminList_ != nullptr;};
    void deleteAdminList() { this->adminList_ = nullptr;};
    inline const vector<Models::ListUserGroupsResponseBodyPageResultUserGroupListAdminList> & adminList() const { DARABONBA_PTR_GET_CONST(adminList_, vector<Models::ListUserGroupsResponseBodyPageResultUserGroupListAdminList>) };
    inline vector<Models::ListUserGroupsResponseBodyPageResultUserGroupListAdminList> adminList() { DARABONBA_PTR_GET(adminList_, vector<Models::ListUserGroupsResponseBodyPageResultUserGroupListAdminList>) };
    inline ListUserGroupsResponseBodyPageResultUserGroupList& setAdminList(const vector<Models::ListUserGroupsResponseBodyPageResultUserGroupListAdminList> & adminList) { DARABONBA_PTR_SET_VALUE(adminList_, adminList) };
    inline ListUserGroupsResponseBodyPageResultUserGroupList& setAdminList(vector<Models::ListUserGroupsResponseBodyPageResultUserGroupListAdminList> && adminList) { DARABONBA_PTR_SET_RVALUE(adminList_, adminList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListUserGroupsResponseBodyPageResultUserGroupList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListUserGroupsResponseBodyPageResultUserGroupList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // myRole Field Functions 
    bool hasMyRole() const { return this->myRole_ != nullptr;};
    void deleteMyRole() { this->myRole_ = nullptr;};
    inline string myRole() const { DARABONBA_PTR_GET_DEFAULT(myRole_, "") };
    inline ListUserGroupsResponseBodyPageResultUserGroupList& setMyRole(string myRole) { DARABONBA_PTR_SET_VALUE(myRole_, myRole) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUserGroupsResponseBodyPageResultUserGroupList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<bool> active_ = nullptr;
    std::shared_ptr<vector<Models::ListUserGroupsResponseBodyPageResultUserGroupListAdminList>> adminList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> myRole_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
