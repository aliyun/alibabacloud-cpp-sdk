// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIBEEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIBEEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubscribeEventRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SubscribeEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscribeEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, SubscribeEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    SubscribeEventRequest() = default ;
    SubscribeEventRequest(const SubscribeEventRequest &) = default ;
    SubscribeEventRequest(SubscribeEventRequest &&) = default ;
    SubscribeEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscribeEventRequest() = default ;
    SubscribeEventRequest& operator=(const SubscribeEventRequest &) = default ;
    SubscribeEventRequest& operator=(SubscribeEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scope_ != nullptr
        && this->scopeId_ != nullptr && this->tenantContext_ != nullptr; };
    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline SubscribeEventRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // scopeId Field Functions 
    bool hasScopeId() const { return this->scopeId_ != nullptr;};
    void deleteScopeId() { this->scopeId_ = nullptr;};
    inline string scopeId() const { DARABONBA_PTR_GET_DEFAULT(scopeId_, "") };
    inline SubscribeEventRequest& setScopeId(string scopeId) { DARABONBA_PTR_SET_VALUE(scopeId_, scopeId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const SubscribeEventRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, SubscribeEventRequestTenantContext) };
    inline SubscribeEventRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, SubscribeEventRequestTenantContext) };
    inline SubscribeEventRequest& setTenantContext(const SubscribeEventRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline SubscribeEventRequest& setTenantContext(SubscribeEventRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> scope_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scopeId_ = nullptr;
    std::shared_ptr<SubscribeEventRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
