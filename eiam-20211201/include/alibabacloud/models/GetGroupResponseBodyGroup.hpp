// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGROUPRESPONSEBODYGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETGROUPRESPONSEBODYGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetGroupResponseBodyGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGroupResponseBodyGroup& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupExternalId, groupExternalId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupSourceId, groupSourceId_);
      DARABONBA_PTR_TO_JSON(GroupSourceType, groupSourceType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetGroupResponseBodyGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupExternalId, groupExternalId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupSourceId, groupSourceId_);
      DARABONBA_PTR_FROM_JSON(GroupSourceType, groupSourceType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetGroupResponseBodyGroup() = default ;
    GetGroupResponseBodyGroup(const GetGroupResponseBodyGroup &) = default ;
    GetGroupResponseBodyGroup(GetGroupResponseBodyGroup &&) = default ;
    GetGroupResponseBodyGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGroupResponseBodyGroup() = default ;
    GetGroupResponseBodyGroup& operator=(const GetGroupResponseBodyGroup &) = default ;
    GetGroupResponseBodyGroup& operator=(GetGroupResponseBodyGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->groupExternalId_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr && this->groupSourceId_ != nullptr
        && this->groupSourceType_ != nullptr && this->instanceId_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetGroupResponseBodyGroup& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetGroupResponseBodyGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupExternalId Field Functions 
    bool hasGroupExternalId() const { return this->groupExternalId_ != nullptr;};
    void deleteGroupExternalId() { this->groupExternalId_ = nullptr;};
    inline string groupExternalId() const { DARABONBA_PTR_GET_DEFAULT(groupExternalId_, "") };
    inline GetGroupResponseBodyGroup& setGroupExternalId(string groupExternalId) { DARABONBA_PTR_SET_VALUE(groupExternalId_, groupExternalId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetGroupResponseBodyGroup& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetGroupResponseBodyGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupSourceId Field Functions 
    bool hasGroupSourceId() const { return this->groupSourceId_ != nullptr;};
    void deleteGroupSourceId() { this->groupSourceId_ = nullptr;};
    inline string groupSourceId() const { DARABONBA_PTR_GET_DEFAULT(groupSourceId_, "") };
    inline GetGroupResponseBodyGroup& setGroupSourceId(string groupSourceId) { DARABONBA_PTR_SET_VALUE(groupSourceId_, groupSourceId) };


    // groupSourceType Field Functions 
    bool hasGroupSourceType() const { return this->groupSourceType_ != nullptr;};
    void deleteGroupSourceType() { this->groupSourceType_ = nullptr;};
    inline string groupSourceType() const { DARABONBA_PTR_GET_DEFAULT(groupSourceType_, "") };
    inline GetGroupResponseBodyGroup& setGroupSourceType(string groupSourceType) { DARABONBA_PTR_SET_VALUE(groupSourceType_, groupSourceType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetGroupResponseBodyGroup& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetGroupResponseBodyGroup& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time at which the group was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the group.
    std::shared_ptr<string> description_ = nullptr;
    // The external ID of the group, which can be used to associate the group with an external system. By default, the external ID is the group ID.
    std::shared_ptr<string> groupExternalId_ = nullptr;
    // The group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The source ID of the group. By default, the source ID is the instance ID.
    std::shared_ptr<string> groupSourceId_ = nullptr;
    // The source type of the group. Only build_in may be returned, which indicates that the group was created in IDaaS.
    // 
    // *build_in:Create By Self.
    std::shared_ptr<string> groupSourceType_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The time at which the group was last updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
