// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGROUPLIVEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYGROUPLIVEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryGroupLiveInfoRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryGroupLiveInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGroupLiveInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnchorUnionId, anchorUnionId_);
      DARABONBA_PTR_TO_JSON(LiveUuid, liveUuid_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGroupLiveInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnchorUnionId, anchorUnionId_);
      DARABONBA_PTR_FROM_JSON(LiveUuid, liveUuid_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    QueryGroupLiveInfoRequest() = default ;
    QueryGroupLiveInfoRequest(const QueryGroupLiveInfoRequest &) = default ;
    QueryGroupLiveInfoRequest(QueryGroupLiveInfoRequest &&) = default ;
    QueryGroupLiveInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGroupLiveInfoRequest() = default ;
    QueryGroupLiveInfoRequest& operator=(const QueryGroupLiveInfoRequest &) = default ;
    QueryGroupLiveInfoRequest& operator=(QueryGroupLiveInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->anchorUnionId_ != nullptr
        && this->liveUuid_ != nullptr && this->tenantContext_ != nullptr; };
    // anchorUnionId Field Functions 
    bool hasAnchorUnionId() const { return this->anchorUnionId_ != nullptr;};
    void deleteAnchorUnionId() { this->anchorUnionId_ = nullptr;};
    inline string anchorUnionId() const { DARABONBA_PTR_GET_DEFAULT(anchorUnionId_, "") };
    inline QueryGroupLiveInfoRequest& setAnchorUnionId(string anchorUnionId) { DARABONBA_PTR_SET_VALUE(anchorUnionId_, anchorUnionId) };


    // liveUuid Field Functions 
    bool hasLiveUuid() const { return this->liveUuid_ != nullptr;};
    void deleteLiveUuid() { this->liveUuid_ = nullptr;};
    inline string liveUuid() const { DARABONBA_PTR_GET_DEFAULT(liveUuid_, "") };
    inline QueryGroupLiveInfoRequest& setLiveUuid(string liveUuid) { DARABONBA_PTR_SET_VALUE(liveUuid_, liveUuid) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryGroupLiveInfoRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryGroupLiveInfoRequestTenantContext) };
    inline QueryGroupLiveInfoRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryGroupLiveInfoRequestTenantContext) };
    inline QueryGroupLiveInfoRequest& setTenantContext(const QueryGroupLiveInfoRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryGroupLiveInfoRequest& setTenantContext(QueryGroupLiveInfoRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> anchorUnionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> liveUuid_ = nullptr;
    std::shared_ptr<QueryGroupLiveInfoRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
