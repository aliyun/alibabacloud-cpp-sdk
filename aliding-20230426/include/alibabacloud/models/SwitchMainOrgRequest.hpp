// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHMAINORGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHMAINORGREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->targetOrgId_ == nullptr
        && this->tenantContext_ == nullptr; };
    // targetOrgId Field Functions 
    bool hasTargetOrgId() const { return this->targetOrgId_ != nullptr;};
    void deleteTargetOrgId() { this->targetOrgId_ = nullptr;};
    inline int64_t getTargetOrgId() const { DARABONBA_PTR_GET_DEFAULT(targetOrgId_, 0L) };
    inline SwitchMainOrgRequest& setTargetOrgId(int64_t targetOrgId) { DARABONBA_PTR_SET_VALUE(targetOrgId_, targetOrgId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const SwitchMainOrgRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, SwitchMainOrgRequest::TenantContext) };
    inline SwitchMainOrgRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, SwitchMainOrgRequest::TenantContext) };
    inline SwitchMainOrgRequest& setTenantContext(const SwitchMainOrgRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline SwitchMainOrgRequest& setTenantContext(SwitchMainOrgRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    shared_ptr<int64_t> targetOrgId_ {};
    shared_ptr<SwitchMainOrgRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
