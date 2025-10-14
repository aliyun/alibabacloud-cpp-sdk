// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEETINGROOMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEETINGROOMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteMeetingRoomRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteMeetingRoomRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMeetingRoomRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoomId, roomId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMeetingRoomRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    DeleteMeetingRoomRequest() = default ;
    DeleteMeetingRoomRequest(const DeleteMeetingRoomRequest &) = default ;
    DeleteMeetingRoomRequest(DeleteMeetingRoomRequest &&) = default ;
    DeleteMeetingRoomRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMeetingRoomRequest() = default ;
    DeleteMeetingRoomRequest& operator=(const DeleteMeetingRoomRequest &) = default ;
    DeleteMeetingRoomRequest& operator=(DeleteMeetingRoomRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roomId_ == nullptr
        && return this->tenantContext_ == nullptr; };
    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline string roomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
    inline DeleteMeetingRoomRequest& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteMeetingRoomRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteMeetingRoomRequestTenantContext) };
    inline DeleteMeetingRoomRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteMeetingRoomRequestTenantContext) };
    inline DeleteMeetingRoomRequest& setTenantContext(const DeleteMeetingRoomRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteMeetingRoomRequest& setTenantContext(DeleteMeetingRoomRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> roomId_ = nullptr;
    std::shared_ptr<DeleteMeetingRoomRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
