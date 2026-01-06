// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEETINGROOMGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEETINGROOMGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMeetingRoomGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMeetingRoomGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ParentGroupId, parentGroupId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMeetingRoomGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ParentGroupId, parentGroupId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    CreateMeetingRoomGroupShrinkRequest() = default ;
    CreateMeetingRoomGroupShrinkRequest(const CreateMeetingRoomGroupShrinkRequest &) = default ;
    CreateMeetingRoomGroupShrinkRequest(CreateMeetingRoomGroupShrinkRequest &&) = default ;
    CreateMeetingRoomGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMeetingRoomGroupShrinkRequest() = default ;
    CreateMeetingRoomGroupShrinkRequest& operator=(const CreateMeetingRoomGroupShrinkRequest &) = default ;
    CreateMeetingRoomGroupShrinkRequest& operator=(CreateMeetingRoomGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && this->parentGroupId_ == nullptr && this->tenantContextShrink_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateMeetingRoomGroupShrinkRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // parentGroupId Field Functions 
    bool hasParentGroupId() const { return this->parentGroupId_ != nullptr;};
    void deleteParentGroupId() { this->parentGroupId_ = nullptr;};
    inline int64_t getParentGroupId() const { DARABONBA_PTR_GET_DEFAULT(parentGroupId_, 0L) };
    inline CreateMeetingRoomGroupShrinkRequest& setParentGroupId(int64_t parentGroupId) { DARABONBA_PTR_SET_VALUE(parentGroupId_, parentGroupId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CreateMeetingRoomGroupShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    shared_ptr<string> groupName_ {};
    // This parameter is required.
    shared_ptr<int64_t> parentGroupId_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
