// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEETINGROOMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEETINGROOMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMeetingRoomRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMeetingRoomRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMeetingRoomRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoomId, roomId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMeetingRoomRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    QueryMeetingRoomRequest() = default ;
    QueryMeetingRoomRequest(const QueryMeetingRoomRequest &) = default ;
    QueryMeetingRoomRequest(QueryMeetingRoomRequest &&) = default ;
    QueryMeetingRoomRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMeetingRoomRequest() = default ;
    QueryMeetingRoomRequest& operator=(const QueryMeetingRoomRequest &) = default ;
    QueryMeetingRoomRequest& operator=(QueryMeetingRoomRequest &&) = default ;
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
    inline QueryMeetingRoomRequest& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryMeetingRoomRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryMeetingRoomRequestTenantContext) };
    inline QueryMeetingRoomRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryMeetingRoomRequestTenantContext) };
    inline QueryMeetingRoomRequest& setTenantContext(const QueryMeetingRoomRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryMeetingRoomRequest& setTenantContext(QueryMeetingRoomRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> roomId_ = nullptr;
    std::shared_ptr<QueryMeetingRoomRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
