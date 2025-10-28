// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLERESPONSEBODYROLELISTROLEITEMACTIONLISTACTION_HPP_
#define ALIBABACLOUD_MODELS_LISTROLERESPONSEBODYROLELISTROLEITEMACTIONLISTACTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListRoleResponseBodyRoleListRoleItemActionListAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoleResponseBodyRoleListRoleItemActionListAction& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoleResponseBodyRoleListRoleItemActionListAction& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListRoleResponseBodyRoleListRoleItemActionListAction() = default ;
    ListRoleResponseBodyRoleListRoleItemActionListAction(const ListRoleResponseBodyRoleListRoleItemActionListAction &) = default ;
    ListRoleResponseBodyRoleListRoleItemActionListAction(ListRoleResponseBodyRoleListRoleItemActionListAction &&) = default ;
    ListRoleResponseBodyRoleListRoleItemActionListAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoleResponseBodyRoleListRoleItemActionListAction() = default ;
    ListRoleResponseBodyRoleListRoleItemActionListAction& operator=(const ListRoleResponseBodyRoleListRoleItemActionListAction &) = default ;
    ListRoleResponseBodyRoleListRoleItemActionListAction& operator=(ListRoleResponseBodyRoleListRoleItemActionListAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->name_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRoleResponseBodyRoleListRoleItemActionListAction& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListRoleResponseBodyRoleListRoleItemActionListAction& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListRoleResponseBodyRoleListRoleItemActionListAction& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRoleResponseBodyRoleListRoleItemActionListAction& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The serial number of the permission that is granted to the role.
    std::shared_ptr<string> code_ = nullptr;
    // The description of the permission to be granted to the role.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the permission group to which the permission that is granted to the role belongs.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the permission to be granted to the role.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
