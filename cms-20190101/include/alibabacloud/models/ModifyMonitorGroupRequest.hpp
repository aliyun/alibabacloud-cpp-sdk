// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMONITORGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMONITORGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyMonitorGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMonitorGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMonitorGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyMonitorGroupRequest() = default ;
    ModifyMonitorGroupRequest(const ModifyMonitorGroupRequest &) = default ;
    ModifyMonitorGroupRequest(ModifyMonitorGroupRequest &&) = default ;
    ModifyMonitorGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMonitorGroupRequest() = default ;
    ModifyMonitorGroupRequest& operator=(const ModifyMonitorGroupRequest &) = default ;
    ModifyMonitorGroupRequest& operator=(ModifyMonitorGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroups_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->regionId_ == nullptr; };
    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline string contactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
    inline ModifyMonitorGroupRequest& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyMonitorGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyMonitorGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyMonitorGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The alert groups that can receive alert notifications for the application group.
    std::shared_ptr<string> contactGroups_ = nullptr;
    // The ID of the application group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the application group.
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
