// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEETINGROOMGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEETINGROOMGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateMeetingRoomGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMeetingRoomGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMeetingRoomGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    UpdateMeetingRoomGroupShrinkRequest() = default ;
    UpdateMeetingRoomGroupShrinkRequest(const UpdateMeetingRoomGroupShrinkRequest &) = default ;
    UpdateMeetingRoomGroupShrinkRequest(UpdateMeetingRoomGroupShrinkRequest &&) = default ;
    UpdateMeetingRoomGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMeetingRoomGroupShrinkRequest() = default ;
    UpdateMeetingRoomGroupShrinkRequest& operator=(const UpdateMeetingRoomGroupShrinkRequest &) = default ;
    UpdateMeetingRoomGroupShrinkRequest& operator=(UpdateMeetingRoomGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->groupName_ != nullptr && this->tenantContextShrink_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateMeetingRoomGroupShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateMeetingRoomGroupShrinkRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline UpdateMeetingRoomGroupShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
