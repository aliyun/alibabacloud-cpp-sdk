// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEETINGROOMGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEETINGROOMGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMeetingRoomGroupRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMeetingRoomGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMeetingRoomGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ParentGroupId, parentGroupId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMeetingRoomGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ParentGroupId, parentGroupId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    CreateMeetingRoomGroupRequest() = default ;
    CreateMeetingRoomGroupRequest(const CreateMeetingRoomGroupRequest &) = default ;
    CreateMeetingRoomGroupRequest(CreateMeetingRoomGroupRequest &&) = default ;
    CreateMeetingRoomGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMeetingRoomGroupRequest() = default ;
    CreateMeetingRoomGroupRequest& operator=(const CreateMeetingRoomGroupRequest &) = default ;
    CreateMeetingRoomGroupRequest& operator=(CreateMeetingRoomGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr
        && this->parentGroupId_ != nullptr && this->tenantContext_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateMeetingRoomGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // parentGroupId Field Functions 
    bool hasParentGroupId() const { return this->parentGroupId_ != nullptr;};
    void deleteParentGroupId() { this->parentGroupId_ = nullptr;};
    inline int64_t parentGroupId() const { DARABONBA_PTR_GET_DEFAULT(parentGroupId_, 0L) };
    inline CreateMeetingRoomGroupRequest& setParentGroupId(int64_t parentGroupId) { DARABONBA_PTR_SET_VALUE(parentGroupId_, parentGroupId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateMeetingRoomGroupRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateMeetingRoomGroupRequestTenantContext) };
    inline CreateMeetingRoomGroupRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateMeetingRoomGroupRequestTenantContext) };
    inline CreateMeetingRoomGroupRequest& setTenantContext(const CreateMeetingRoomGroupRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateMeetingRoomGroupRequest& setTenantContext(CreateMeetingRoomGroupRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<string> groupName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> parentGroupId_ = nullptr;
    std::shared_ptr<CreateMeetingRoomGroupRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
