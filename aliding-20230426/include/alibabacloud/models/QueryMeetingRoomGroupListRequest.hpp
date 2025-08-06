// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEETINGROOMGROUPLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEETINGROOMGROUPLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMeetingRoomGroupListRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMeetingRoomGroupListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMeetingRoomGroupListRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMeetingRoomGroupListRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    QueryMeetingRoomGroupListRequest() = default ;
    QueryMeetingRoomGroupListRequest(const QueryMeetingRoomGroupListRequest &) = default ;
    QueryMeetingRoomGroupListRequest(QueryMeetingRoomGroupListRequest &&) = default ;
    QueryMeetingRoomGroupListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMeetingRoomGroupListRequest() = default ;
    QueryMeetingRoomGroupListRequest& operator=(const QueryMeetingRoomGroupListRequest &) = default ;
    QueryMeetingRoomGroupListRequest& operator=(QueryMeetingRoomGroupListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->request_ != nullptr
        && this->tenantContext_ != nullptr; };
    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline     const Darabonba::Json & request() const { DARABONBA_GET(request_) };
    Darabonba::Json & request() { DARABONBA_GET(request_) };
    inline QueryMeetingRoomGroupListRequest& setRequest(const Darabonba::Json & request) { DARABONBA_SET_VALUE(request_, request) };
    inline QueryMeetingRoomGroupListRequest& setRequest(Darabonba::Json & request) { DARABONBA_SET_RVALUE(request_, request) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryMeetingRoomGroupListRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryMeetingRoomGroupListRequestTenantContext) };
    inline QueryMeetingRoomGroupListRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryMeetingRoomGroupListRequestTenantContext) };
    inline QueryMeetingRoomGroupListRequest& setTenantContext(const QueryMeetingRoomGroupListRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryMeetingRoomGroupListRequest& setTenantContext(QueryMeetingRoomGroupListRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    Darabonba::Json request_ = nullptr;
    std::shared_ptr<QueryMeetingRoomGroupListRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
