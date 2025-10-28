// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORITYRESPONSEBODYAUTHORITYLISTAUTHORITY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORITYRESPONSEBODYAUTHORITYLISTAUTHORITY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAuthorityResponseBodyAuthorityListAuthorityActionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListAuthorityResponseBodyAuthorityListAuthority : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorityResponseBodyAuthorityListAuthority& obj) { 
      DARABONBA_PTR_TO_JSON(ActionList, actionList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorityResponseBodyAuthorityListAuthority& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionList, actionList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListAuthorityResponseBodyAuthorityListAuthority() = default ;
    ListAuthorityResponseBodyAuthorityListAuthority(const ListAuthorityResponseBodyAuthorityListAuthority &) = default ;
    ListAuthorityResponseBodyAuthorityListAuthority(ListAuthorityResponseBodyAuthorityListAuthority &&) = default ;
    ListAuthorityResponseBodyAuthorityListAuthority(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorityResponseBodyAuthorityListAuthority() = default ;
    ListAuthorityResponseBodyAuthorityListAuthority& operator=(const ListAuthorityResponseBodyAuthorityListAuthority &) = default ;
    ListAuthorityResponseBodyAuthorityListAuthority& operator=(ListAuthorityResponseBodyAuthorityListAuthority &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionList_ == nullptr
        && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->name_ == nullptr; };
    // actionList Field Functions 
    bool hasActionList() const { return this->actionList_ != nullptr;};
    void deleteActionList() { this->actionList_ = nullptr;};
    inline const Models::ListAuthorityResponseBodyAuthorityListAuthorityActionList & actionList() const { DARABONBA_PTR_GET_CONST(actionList_, Models::ListAuthorityResponseBodyAuthorityListAuthorityActionList) };
    inline Models::ListAuthorityResponseBodyAuthorityListAuthorityActionList actionList() { DARABONBA_PTR_GET(actionList_, Models::ListAuthorityResponseBodyAuthorityListAuthorityActionList) };
    inline ListAuthorityResponseBodyAuthorityListAuthority& setActionList(const Models::ListAuthorityResponseBodyAuthorityListAuthorityActionList & actionList) { DARABONBA_PTR_SET_VALUE(actionList_, actionList) };
    inline ListAuthorityResponseBodyAuthorityListAuthority& setActionList(Models::ListAuthorityResponseBodyAuthorityListAuthorityActionList && actionList) { DARABONBA_PTR_SET_RVALUE(actionList_, actionList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAuthorityResponseBodyAuthorityListAuthority& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListAuthorityResponseBodyAuthorityListAuthority& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAuthorityResponseBodyAuthorityListAuthority& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The set of permissions.
    std::shared_ptr<Models::ListAuthorityResponseBodyAuthorityListAuthorityActionList> actionList_ = nullptr;
    // The description of the permission group.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the permission group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the permission group.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
