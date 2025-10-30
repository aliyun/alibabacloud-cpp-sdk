// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENANTMEMBERSRESPONSEBODYPAGERESULTUSERLISTUSERGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTENANTMEMBERSRESPONSEBODYPAGERESULTUSERLISTUSERGROUPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListTenantMembersResponseBodyPageResultUserListUserGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTenantMembersResponseBodyPageResultUserListUserGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListTenantMembersResponseBodyPageResultUserListUserGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListTenantMembersResponseBodyPageResultUserListUserGroupList() = default ;
    ListTenantMembersResponseBodyPageResultUserListUserGroupList(const ListTenantMembersResponseBodyPageResultUserListUserGroupList &) = default ;
    ListTenantMembersResponseBodyPageResultUserListUserGroupList(ListTenantMembersResponseBodyPageResultUserListUserGroupList &&) = default ;
    ListTenantMembersResponseBodyPageResultUserListUserGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTenantMembersResponseBodyPageResultUserListUserGroupList() = default ;
    ListTenantMembersResponseBodyPageResultUserListUserGroupList& operator=(const ListTenantMembersResponseBodyPageResultUserListUserGroupList &) = default ;
    ListTenantMembersResponseBodyPageResultUserListUserGroupList& operator=(ListTenantMembersResponseBodyPageResultUserListUserGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->description_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline ListTenantMembersResponseBodyPageResultUserListUserGroupList& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTenantMembersResponseBodyPageResultUserListUserGroupList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListTenantMembersResponseBodyPageResultUserListUserGroupList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTenantMembersResponseBodyPageResultUserListUserGroupList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<bool> active_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
