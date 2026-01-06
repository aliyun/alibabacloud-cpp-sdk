// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEETINGROOMGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEETINGROOMGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteMeetingRoomGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMeetingRoomGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMeetingRoomGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    DeleteMeetingRoomGroupShrinkRequest() = default ;
    DeleteMeetingRoomGroupShrinkRequest(const DeleteMeetingRoomGroupShrinkRequest &) = default ;
    DeleteMeetingRoomGroupShrinkRequest(DeleteMeetingRoomGroupShrinkRequest &&) = default ;
    DeleteMeetingRoomGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMeetingRoomGroupShrinkRequest() = default ;
    DeleteMeetingRoomGroupShrinkRequest& operator=(const DeleteMeetingRoomGroupShrinkRequest &) = default ;
    DeleteMeetingRoomGroupShrinkRequest& operator=(DeleteMeetingRoomGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->tenantContextShrink_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DeleteMeetingRoomGroupShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline DeleteMeetingRoomGroupShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
