// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEETINGROOMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEETINGROOMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMeetingRoomShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMeetingRoomShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoomId, roomId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMeetingRoomShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    QueryMeetingRoomShrinkRequest() = default ;
    QueryMeetingRoomShrinkRequest(const QueryMeetingRoomShrinkRequest &) = default ;
    QueryMeetingRoomShrinkRequest(QueryMeetingRoomShrinkRequest &&) = default ;
    QueryMeetingRoomShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMeetingRoomShrinkRequest() = default ;
    QueryMeetingRoomShrinkRequest& operator=(const QueryMeetingRoomShrinkRequest &) = default ;
    QueryMeetingRoomShrinkRequest& operator=(QueryMeetingRoomShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roomId_ != nullptr
        && this->tenantContextShrink_ != nullptr; };
    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline string roomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
    inline QueryMeetingRoomShrinkRequest& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline QueryMeetingRoomShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> roomId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
