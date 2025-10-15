// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSFORGROUPRESPONSEBODYUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSFORGROUPRESPONSEBODYUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListUsersForGroupResponseBodyUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersForGroupResponseBodyUsers& obj) { 
      DARABONBA_PTR_TO_JSON(GroupMemberRelationSourceId, groupMemberRelationSourceId_);
      DARABONBA_PTR_TO_JSON(GroupMemberRelationSourceType, groupMemberRelationSourceType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersForGroupResponseBodyUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupMemberRelationSourceId, groupMemberRelationSourceId_);
      DARABONBA_PTR_FROM_JSON(GroupMemberRelationSourceType, groupMemberRelationSourceType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListUsersForGroupResponseBodyUsers() = default ;
    ListUsersForGroupResponseBodyUsers(const ListUsersForGroupResponseBodyUsers &) = default ;
    ListUsersForGroupResponseBodyUsers(ListUsersForGroupResponseBodyUsers &&) = default ;
    ListUsersForGroupResponseBodyUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersForGroupResponseBodyUsers() = default ;
    ListUsersForGroupResponseBodyUsers& operator=(const ListUsersForGroupResponseBodyUsers &) = default ;
    ListUsersForGroupResponseBodyUsers& operator=(ListUsersForGroupResponseBodyUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupMemberRelationSourceId_ == nullptr
        && return this->groupMemberRelationSourceType_ == nullptr && return this->userId_ == nullptr; };
    // groupMemberRelationSourceId Field Functions 
    bool hasGroupMemberRelationSourceId() const { return this->groupMemberRelationSourceId_ != nullptr;};
    void deleteGroupMemberRelationSourceId() { this->groupMemberRelationSourceId_ = nullptr;};
    inline string groupMemberRelationSourceId() const { DARABONBA_PTR_GET_DEFAULT(groupMemberRelationSourceId_, "") };
    inline ListUsersForGroupResponseBodyUsers& setGroupMemberRelationSourceId(string groupMemberRelationSourceId) { DARABONBA_PTR_SET_VALUE(groupMemberRelationSourceId_, groupMemberRelationSourceId) };


    // groupMemberRelationSourceType Field Functions 
    bool hasGroupMemberRelationSourceType() const { return this->groupMemberRelationSourceType_ != nullptr;};
    void deleteGroupMemberRelationSourceType() { this->groupMemberRelationSourceType_ = nullptr;};
    inline string groupMemberRelationSourceType() const { DARABONBA_PTR_GET_DEFAULT(groupMemberRelationSourceType_, "") };
    inline ListUsersForGroupResponseBodyUsers& setGroupMemberRelationSourceType(string groupMemberRelationSourceType) { DARABONBA_PTR_SET_VALUE(groupMemberRelationSourceType_, groupMemberRelationSourceType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUsersForGroupResponseBodyUsers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Account membership source id
    std::shared_ptr<string> groupMemberRelationSourceId_ = nullptr;
    // Account membership source type
    std::shared_ptr<string> groupMemberRelationSourceType_ = nullptr;
    // The account ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
