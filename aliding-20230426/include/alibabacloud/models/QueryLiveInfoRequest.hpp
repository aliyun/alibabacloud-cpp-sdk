// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLIVEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYLIVEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryLiveInfoRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryLiveInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLiveInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LiveId, liveId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLiveInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveId, liveId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    QueryLiveInfoRequest() = default ;
    QueryLiveInfoRequest(const QueryLiveInfoRequest &) = default ;
    QueryLiveInfoRequest(QueryLiveInfoRequest &&) = default ;
    QueryLiveInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLiveInfoRequest() = default ;
    QueryLiveInfoRequest& operator=(const QueryLiveInfoRequest &) = default ;
    QueryLiveInfoRequest& operator=(QueryLiveInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveId_ == nullptr
        && return this->tenantContext_ == nullptr; };
    // liveId Field Functions 
    bool hasLiveId() const { return this->liveId_ != nullptr;};
    void deleteLiveId() { this->liveId_ = nullptr;};
    inline string liveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
    inline QueryLiveInfoRequest& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryLiveInfoRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryLiveInfoRequestTenantContext) };
    inline QueryLiveInfoRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryLiveInfoRequestTenantContext) };
    inline QueryLiveInfoRequest& setTenantContext(const QueryLiveInfoRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryLiveInfoRequest& setTenantContext(QueryLiveInfoRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> liveId_ = nullptr;
    std::shared_ptr<QueryLiveInfoRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
