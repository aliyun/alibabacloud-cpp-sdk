// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODYGROUPSGROUP_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODYGROUPSGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListGroupsForUserResponseBodyGroupsGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsForUserResponseBodyGroupsGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(JoinDate, joinDate_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsForUserResponseBodyGroupsGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(JoinDate, joinDate_);
    };
    ListGroupsForUserResponseBodyGroupsGroup() = default ;
    ListGroupsForUserResponseBodyGroupsGroup(const ListGroupsForUserResponseBodyGroupsGroup &) = default ;
    ListGroupsForUserResponseBodyGroupsGroup(ListGroupsForUserResponseBodyGroupsGroup &&) = default ;
    ListGroupsForUserResponseBodyGroupsGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsForUserResponseBodyGroupsGroup() = default ;
    ListGroupsForUserResponseBodyGroupsGroup& operator=(const ListGroupsForUserResponseBodyGroupsGroup &) = default ;
    ListGroupsForUserResponseBodyGroupsGroup& operator=(ListGroupsForUserResponseBodyGroupsGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comments_ != nullptr
        && this->displayName_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr && this->joinDate_ != nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline ListGroupsForUserResponseBodyGroupsGroup& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListGroupsForUserResponseBodyGroupsGroup& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListGroupsForUserResponseBodyGroupsGroup& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListGroupsForUserResponseBodyGroupsGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // joinDate Field Functions 
    bool hasJoinDate() const { return this->joinDate_ != nullptr;};
    void deleteJoinDate() { this->joinDate_ = nullptr;};
    inline string joinDate() const { DARABONBA_PTR_GET_DEFAULT(joinDate_, "") };
    inline ListGroupsForUserResponseBodyGroupsGroup& setJoinDate(string joinDate) { DARABONBA_PTR_SET_VALUE(joinDate_, joinDate) };


  protected:
    // The description.
    std::shared_ptr<string> comments_ = nullptr;
    // The display name of the RAM user group.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the RAM user group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the RAM user group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The time when the RAM user was added.
    std::shared_ptr<string> joinDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
