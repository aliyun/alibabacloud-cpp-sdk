// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERLATESTPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERLATESTPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserLatestPlanRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserLatestPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserLatestPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserLatestPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetUserLatestPlanRequest() = default ;
    GetUserLatestPlanRequest(const GetUserLatestPlanRequest &) = default ;
    GetUserLatestPlanRequest(GetUserLatestPlanRequest &&) = default ;
    GetUserLatestPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserLatestPlanRequest() = default ;
    GetUserLatestPlanRequest& operator=(const GetUserLatestPlanRequest &) = default ;
    GetUserLatestPlanRequest& operator=(GetUserLatestPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantContext_ != nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetUserLatestPlanRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetUserLatestPlanRequestTenantContext) };
    inline GetUserLatestPlanRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetUserLatestPlanRequestTenantContext) };
    inline GetUserLatestPlanRequest& setTenantContext(const GetUserLatestPlanRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetUserLatestPlanRequest& setTenantContext(GetUserLatestPlanRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<GetUserLatestPlanRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
