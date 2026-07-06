// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIGNOUTORGACCOUNTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SIGNOUTORGACCOUNTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SignOutOrgAccountShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SignOutOrgAccountShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ReasonI18nForEmployee, reasonI18nForEmployeeShrink_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SignOutOrgAccountShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ReasonI18nForEmployee, reasonI18nForEmployeeShrink_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    SignOutOrgAccountShrinkRequest() = default ;
    SignOutOrgAccountShrinkRequest(const SignOutOrgAccountShrinkRequest &) = default ;
    SignOutOrgAccountShrinkRequest(SignOutOrgAccountShrinkRequest &&) = default ;
    SignOutOrgAccountShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SignOutOrgAccountShrinkRequest() = default ;
    SignOutOrgAccountShrinkRequest& operator=(const SignOutOrgAccountShrinkRequest &) = default ;
    SignOutOrgAccountShrinkRequest& operator=(SignOutOrgAccountShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reason_ == nullptr
        && this->reasonI18nForEmployeeShrink_ == nullptr && this->tenantContextShrink_ == nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline SignOutOrgAccountShrinkRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // reasonI18nForEmployeeShrink Field Functions 
    bool hasReasonI18nForEmployeeShrink() const { return this->reasonI18nForEmployeeShrink_ != nullptr;};
    void deleteReasonI18nForEmployeeShrink() { this->reasonI18nForEmployeeShrink_ = nullptr;};
    inline string getReasonI18nForEmployeeShrink() const { DARABONBA_PTR_GET_DEFAULT(reasonI18nForEmployeeShrink_, "") };
    inline SignOutOrgAccountShrinkRequest& setReasonI18nForEmployeeShrink(string reasonI18nForEmployeeShrink) { DARABONBA_PTR_SET_VALUE(reasonI18nForEmployeeShrink_, reasonI18nForEmployeeShrink) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline SignOutOrgAccountShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> reason_ {};
    shared_ptr<string> reasonI18nForEmployeeShrink_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
