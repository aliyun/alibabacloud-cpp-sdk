// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIGNOUTORGACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SIGNOUTORGACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SignOutOrgAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SignOutOrgAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ReasonI18nForEmployee, reasonI18nForEmployee_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, SignOutOrgAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ReasonI18nForEmployee, reasonI18nForEmployee_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    SignOutOrgAccountRequest() = default ;
    SignOutOrgAccountRequest(const SignOutOrgAccountRequest &) = default ;
    SignOutOrgAccountRequest(SignOutOrgAccountRequest &&) = default ;
    SignOutOrgAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SignOutOrgAccountRequest() = default ;
    SignOutOrgAccountRequest& operator=(const SignOutOrgAccountRequest &) = default ;
    SignOutOrgAccountRequest& operator=(SignOutOrgAccountRequest &&) = default ;
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

    virtual bool empty() const override { return this->reason_ == nullptr
        && this->reasonI18nForEmployee_ == nullptr && this->tenantContext_ == nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline SignOutOrgAccountRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // reasonI18nForEmployee Field Functions 
    bool hasReasonI18nForEmployee() const { return this->reasonI18nForEmployee_ != nullptr;};
    void deleteReasonI18nForEmployee() { this->reasonI18nForEmployee_ = nullptr;};
    inline const map<string, string> & getReasonI18nForEmployee() const { DARABONBA_PTR_GET_CONST(reasonI18nForEmployee_, map<string, string>) };
    inline map<string, string> getReasonI18nForEmployee() { DARABONBA_PTR_GET(reasonI18nForEmployee_, map<string, string>) };
    inline SignOutOrgAccountRequest& setReasonI18nForEmployee(const map<string, string> & reasonI18nForEmployee) { DARABONBA_PTR_SET_VALUE(reasonI18nForEmployee_, reasonI18nForEmployee) };
    inline SignOutOrgAccountRequest& setReasonI18nForEmployee(map<string, string> && reasonI18nForEmployee) { DARABONBA_PTR_SET_RVALUE(reasonI18nForEmployee_, reasonI18nForEmployee) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const SignOutOrgAccountRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, SignOutOrgAccountRequest::TenantContext) };
    inline SignOutOrgAccountRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, SignOutOrgAccountRequest::TenantContext) };
    inline SignOutOrgAccountRequest& setTenantContext(const SignOutOrgAccountRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline SignOutOrgAccountRequest& setTenantContext(SignOutOrgAccountRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> reason_ {};
    shared_ptr<map<string, string>> reasonI18nForEmployee_ {};
    shared_ptr<SignOutOrgAccountRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
