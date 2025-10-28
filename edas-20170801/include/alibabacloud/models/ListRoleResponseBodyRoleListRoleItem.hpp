// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLERESPONSEBODYROLELISTROLEITEM_HPP_
#define ALIBABACLOUD_MODELS_LISTROLERESPONSEBODYROLELISTROLEITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRoleResponseBodyRoleListRoleItemActionList.hpp>
#include <alibabacloud/models/ListRoleResponseBodyRoleListRoleItemRole.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListRoleResponseBodyRoleListRoleItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoleResponseBodyRoleListRoleItem& obj) { 
      DARABONBA_PTR_TO_JSON(ActionList, actionList_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoleResponseBodyRoleListRoleItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionList, actionList_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    ListRoleResponseBodyRoleListRoleItem() = default ;
    ListRoleResponseBodyRoleListRoleItem(const ListRoleResponseBodyRoleListRoleItem &) = default ;
    ListRoleResponseBodyRoleListRoleItem(ListRoleResponseBodyRoleListRoleItem &&) = default ;
    ListRoleResponseBodyRoleListRoleItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoleResponseBodyRoleListRoleItem() = default ;
    ListRoleResponseBodyRoleListRoleItem& operator=(const ListRoleResponseBodyRoleListRoleItem &) = default ;
    ListRoleResponseBodyRoleListRoleItem& operator=(ListRoleResponseBodyRoleListRoleItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionList_ == nullptr
        && return this->role_ == nullptr; };
    // actionList Field Functions 
    bool hasActionList() const { return this->actionList_ != nullptr;};
    void deleteActionList() { this->actionList_ = nullptr;};
    inline const Models::ListRoleResponseBodyRoleListRoleItemActionList & actionList() const { DARABONBA_PTR_GET_CONST(actionList_, Models::ListRoleResponseBodyRoleListRoleItemActionList) };
    inline Models::ListRoleResponseBodyRoleListRoleItemActionList actionList() { DARABONBA_PTR_GET(actionList_, Models::ListRoleResponseBodyRoleListRoleItemActionList) };
    inline ListRoleResponseBodyRoleListRoleItem& setActionList(const Models::ListRoleResponseBodyRoleListRoleItemActionList & actionList) { DARABONBA_PTR_SET_VALUE(actionList_, actionList) };
    inline ListRoleResponseBodyRoleListRoleItem& setActionList(Models::ListRoleResponseBodyRoleListRoleItemActionList && actionList) { DARABONBA_PTR_SET_RVALUE(actionList_, actionList) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline const Models::ListRoleResponseBodyRoleListRoleItemRole & role() const { DARABONBA_PTR_GET_CONST(role_, Models::ListRoleResponseBodyRoleListRoleItemRole) };
    inline Models::ListRoleResponseBodyRoleListRoleItemRole role() { DARABONBA_PTR_GET(role_, Models::ListRoleResponseBodyRoleListRoleItemRole) };
    inline ListRoleResponseBodyRoleListRoleItem& setRole(const Models::ListRoleResponseBodyRoleListRoleItemRole & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
    inline ListRoleResponseBodyRoleListRoleItem& setRole(Models::ListRoleResponseBodyRoleListRoleItemRole && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


  protected:
    // The set of permissions to be granted to the role.
    std::shared_ptr<Models::ListRoleResponseBodyRoleListRoleItemActionList> actionList_ = nullptr;
    // The roles.
    std::shared_ptr<Models::ListRoleResponseBodyRoleListRoleItemRole> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
