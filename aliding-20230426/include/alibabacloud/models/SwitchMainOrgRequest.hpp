// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHMAINORGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHMAINORGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SwitchMainOrgRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SwitchMainOrgRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchMainOrgRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TargetOrgId, targetOrgId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchMainOrgRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetOrgId, targetOrgId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    SwitchMainOrgRequest() = default ;
    SwitchMainOrgRequest(const SwitchMainOrgRequest &) = default ;
    SwitchMainOrgRequest(SwitchMainOrgRequest &&) = default ;
    SwitchMainOrgRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchMainOrgRequest() = default ;
    SwitchMainOrgRequest& operator=(const SwitchMainOrgRequest &) = default ;
    SwitchMainOrgRequest& operator=(SwitchMainOrgRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetOrgId_ != nullptr
        && this->tenantContext_ != nullptr; };
    // targetOrgId Field Functions 
    bool hasTargetOrgId() const { return this->targetOrgId_ != nullptr;};
    void deleteTargetOrgId() { this->targetOrgId_ = nullptr;};
    inline int64_t targetOrgId() const { DARABONBA_PTR_GET_DEFAULT(targetOrgId_, 0L) };
    inline SwitchMainOrgRequest& setTargetOrgId(int64_t targetOrgId) { DARABONBA_PTR_SET_VALUE(targetOrgId_, targetOrgId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const SwitchMainOrgRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, SwitchMainOrgRequestTenantContext) };
    inline SwitchMainOrgRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, SwitchMainOrgRequestTenantContext) };
    inline SwitchMainOrgRequest& setTenantContext(const SwitchMainOrgRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline SwitchMainOrgRequest& setTenantContext(SwitchMainOrgRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<int64_t> targetOrgId_ = nullptr;
    std::shared_ptr<SwitchMainOrgRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
