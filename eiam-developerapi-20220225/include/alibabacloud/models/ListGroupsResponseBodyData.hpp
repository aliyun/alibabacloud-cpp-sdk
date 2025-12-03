// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ListGroupsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(groupExternalId, groupExternalId_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(groupSourceId, groupSourceId_);
      DARABONBA_PTR_TO_JSON(groupSourceType, groupSourceType_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(groupExternalId, groupExternalId_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(groupSourceId, groupSourceId_);
      DARABONBA_PTR_FROM_JSON(groupSourceType, groupSourceType_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    ListGroupsResponseBodyData() = default ;
    ListGroupsResponseBodyData(const ListGroupsResponseBodyData &) = default ;
    ListGroupsResponseBodyData(ListGroupsResponseBodyData &&) = default ;
    ListGroupsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsResponseBodyData() = default ;
    ListGroupsResponseBodyData& operator=(const ListGroupsResponseBodyData &) = default ;
    ListGroupsResponseBodyData& operator=(ListGroupsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->groupExternalId_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->groupSourceId_ == nullptr
        && return this->groupSourceType_ == nullptr && return this->instanceId_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListGroupsResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListGroupsResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupExternalId Field Functions 
    bool hasGroupExternalId() const { return this->groupExternalId_ != nullptr;};
    void deleteGroupExternalId() { this->groupExternalId_ = nullptr;};
    inline string groupExternalId() const { DARABONBA_PTR_GET_DEFAULT(groupExternalId_, "") };
    inline ListGroupsResponseBodyData& setGroupExternalId(string groupExternalId) { DARABONBA_PTR_SET_VALUE(groupExternalId_, groupExternalId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListGroupsResponseBodyData& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListGroupsResponseBodyData& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupSourceId Field Functions 
    bool hasGroupSourceId() const { return this->groupSourceId_ != nullptr;};
    void deleteGroupSourceId() { this->groupSourceId_ = nullptr;};
    inline string groupSourceId() const { DARABONBA_PTR_GET_DEFAULT(groupSourceId_, "") };
    inline ListGroupsResponseBodyData& setGroupSourceId(string groupSourceId) { DARABONBA_PTR_SET_VALUE(groupSourceId_, groupSourceId) };


    // groupSourceType Field Functions 
    bool hasGroupSourceType() const { return this->groupSourceType_ != nullptr;};
    void deleteGroupSourceType() { this->groupSourceType_ = nullptr;};
    inline string groupSourceType() const { DARABONBA_PTR_GET_DEFAULT(groupSourceType_, "") };
    inline ListGroupsResponseBodyData& setGroupSourceType(string groupSourceType) { DARABONBA_PTR_SET_VALUE(groupSourceType_, groupSourceType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListGroupsResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListGroupsResponseBodyData& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the group was created. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The group description.
    std::shared_ptr<string> description_ = nullptr;
    // The external ID of the group.
    std::shared_ptr<string> groupExternalId_ = nullptr;
    // The group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The group name.
    std::shared_ptr<string> groupName_ = nullptr;
    // The source ID of the group.
    std::shared_ptr<string> groupSourceId_ = nullptr;
    // The source type of the group. Valid values: build_in, ding_talk, ad, and ldap.
    std::shared_ptr<string> groupSourceType_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The time when the group was last updated. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
