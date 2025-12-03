// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ListGroupsForUserResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsForUserResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(groupMemberRelationSourceId, groupMemberRelationSourceId_);
      DARABONBA_PTR_TO_JSON(groupMemberRelationSourceType, groupMemberRelationSourceType_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsForUserResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(groupMemberRelationSourceId, groupMemberRelationSourceId_);
      DARABONBA_PTR_FROM_JSON(groupMemberRelationSourceType, groupMemberRelationSourceType_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
    };
    ListGroupsForUserResponseBodyData() = default ;
    ListGroupsForUserResponseBodyData(const ListGroupsForUserResponseBodyData &) = default ;
    ListGroupsForUserResponseBodyData(ListGroupsForUserResponseBodyData &&) = default ;
    ListGroupsForUserResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsForUserResponseBodyData() = default ;
    ListGroupsForUserResponseBodyData& operator=(const ListGroupsForUserResponseBodyData &) = default ;
    ListGroupsForUserResponseBodyData& operator=(ListGroupsForUserResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->groupMemberRelationSourceId_ == nullptr && return this->groupMemberRelationSourceType_ == nullptr && return this->instanceId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListGroupsForUserResponseBodyData& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupMemberRelationSourceId Field Functions 
    bool hasGroupMemberRelationSourceId() const { return this->groupMemberRelationSourceId_ != nullptr;};
    void deleteGroupMemberRelationSourceId() { this->groupMemberRelationSourceId_ = nullptr;};
    inline string groupMemberRelationSourceId() const { DARABONBA_PTR_GET_DEFAULT(groupMemberRelationSourceId_, "") };
    inline ListGroupsForUserResponseBodyData& setGroupMemberRelationSourceId(string groupMemberRelationSourceId) { DARABONBA_PTR_SET_VALUE(groupMemberRelationSourceId_, groupMemberRelationSourceId) };


    // groupMemberRelationSourceType Field Functions 
    bool hasGroupMemberRelationSourceType() const { return this->groupMemberRelationSourceType_ != nullptr;};
    void deleteGroupMemberRelationSourceType() { this->groupMemberRelationSourceType_ = nullptr;};
    inline string groupMemberRelationSourceType() const { DARABONBA_PTR_GET_DEFAULT(groupMemberRelationSourceType_, "") };
    inline ListGroupsForUserResponseBodyData& setGroupMemberRelationSourceType(string groupMemberRelationSourceType) { DARABONBA_PTR_SET_VALUE(groupMemberRelationSourceType_, groupMemberRelationSourceType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListGroupsForUserResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> groupMemberRelationSourceId_ = nullptr;
    std::shared_ptr<string> groupMemberRelationSourceType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
