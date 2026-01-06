// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEETINGROOMGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEETINGROOMGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateMeetingRoomGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMeetingRoomGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMeetingRoomGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    UpdateMeetingRoomGroupRequest() = default ;
    UpdateMeetingRoomGroupRequest(const UpdateMeetingRoomGroupRequest &) = default ;
    UpdateMeetingRoomGroupRequest(UpdateMeetingRoomGroupRequest &&) = default ;
    UpdateMeetingRoomGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMeetingRoomGroupRequest() = default ;
    UpdateMeetingRoomGroupRequest& operator=(const UpdateMeetingRoomGroupRequest &) = default ;
    UpdateMeetingRoomGroupRequest& operator=(UpdateMeetingRoomGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupName_ == nullptr && this->tenantContext_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateMeetingRoomGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateMeetingRoomGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateMeetingRoomGroupRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateMeetingRoomGroupRequest::TenantContext) };
    inline UpdateMeetingRoomGroupRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateMeetingRoomGroupRequest::TenantContext) };
    inline UpdateMeetingRoomGroupRequest& setTenantContext(const UpdateMeetingRoomGroupRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateMeetingRoomGroupRequest& setTenantContext(UpdateMeetingRoomGroupRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    shared_ptr<string> groupName_ {};
    shared_ptr<UpdateMeetingRoomGroupRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
