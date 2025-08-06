// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODYGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListGroupsForUserResponseBodyGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsForUserResponseBodyGroups& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupMemberRelationSourceId, groupMemberRelationSourceId_);
      DARABONBA_PTR_TO_JSON(GroupMemberRelationSourceType, groupMemberRelationSourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsForUserResponseBodyGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupMemberRelationSourceId, groupMemberRelationSourceId_);
      DARABONBA_PTR_FROM_JSON(GroupMemberRelationSourceType, groupMemberRelationSourceType_);
    };
    ListGroupsForUserResponseBodyGroups() = default ;
    ListGroupsForUserResponseBodyGroups(const ListGroupsForUserResponseBodyGroups &) = default ;
    ListGroupsForUserResponseBodyGroups(ListGroupsForUserResponseBodyGroups &&) = default ;
    ListGroupsForUserResponseBodyGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsForUserResponseBodyGroups() = default ;
    ListGroupsForUserResponseBodyGroups& operator=(const ListGroupsForUserResponseBodyGroups &) = default ;
    ListGroupsForUserResponseBodyGroups& operator=(ListGroupsForUserResponseBodyGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->groupMemberRelationSourceId_ != nullptr && this->groupMemberRelationSourceType_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListGroupsForUserResponseBodyGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupMemberRelationSourceId Field Functions 
    bool hasGroupMemberRelationSourceId() const { return this->groupMemberRelationSourceId_ != nullptr;};
    void deleteGroupMemberRelationSourceId() { this->groupMemberRelationSourceId_ = nullptr;};
    inline string groupMemberRelationSourceId() const { DARABONBA_PTR_GET_DEFAULT(groupMemberRelationSourceId_, "") };
    inline ListGroupsForUserResponseBodyGroups& setGroupMemberRelationSourceId(string groupMemberRelationSourceId) { DARABONBA_PTR_SET_VALUE(groupMemberRelationSourceId_, groupMemberRelationSourceId) };


    // groupMemberRelationSourceType Field Functions 
    bool hasGroupMemberRelationSourceType() const { return this->groupMemberRelationSourceType_ != nullptr;};
    void deleteGroupMemberRelationSourceType() { this->groupMemberRelationSourceType_ = nullptr;};
    inline string groupMemberRelationSourceType() const { DARABONBA_PTR_GET_DEFAULT(groupMemberRelationSourceType_, "") };
    inline ListGroupsForUserResponseBodyGroups& setGroupMemberRelationSourceType(string groupMemberRelationSourceType) { DARABONBA_PTR_SET_VALUE(groupMemberRelationSourceType_, groupMemberRelationSourceType) };


  protected:
    // The group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // Account membership source ID
    std::shared_ptr<string> groupMemberRelationSourceId_ = nullptr;
    // Account membership source type
    std::shared_ptr<string> groupMemberRelationSourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
