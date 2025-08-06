// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEETINGROOMGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEETINGROOMGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteMeetingRoomGroupRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteMeetingRoomGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMeetingRoomGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMeetingRoomGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    DeleteMeetingRoomGroupRequest() = default ;
    DeleteMeetingRoomGroupRequest(const DeleteMeetingRoomGroupRequest &) = default ;
    DeleteMeetingRoomGroupRequest(DeleteMeetingRoomGroupRequest &&) = default ;
    DeleteMeetingRoomGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMeetingRoomGroupRequest() = default ;
    DeleteMeetingRoomGroupRequest& operator=(const DeleteMeetingRoomGroupRequest &) = default ;
    DeleteMeetingRoomGroupRequest& operator=(DeleteMeetingRoomGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->tenantContext_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DeleteMeetingRoomGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteMeetingRoomGroupRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteMeetingRoomGroupRequestTenantContext) };
    inline DeleteMeetingRoomGroupRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteMeetingRoomGroupRequestTenantContext) };
    inline DeleteMeetingRoomGroupRequest& setTenantContext(const DeleteMeetingRoomGroupRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteMeetingRoomGroupRequest& setTenantContext(DeleteMeetingRoomGroupRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<DeleteMeetingRoomGroupRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
