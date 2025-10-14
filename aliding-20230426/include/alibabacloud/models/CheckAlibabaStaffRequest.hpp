// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKALIBABASTAFFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKALIBABASTAFFREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CheckAlibabaStaffRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CheckAlibabaStaffRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAlibabaStaffRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAlibabaStaffRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    CheckAlibabaStaffRequest() = default ;
    CheckAlibabaStaffRequest(const CheckAlibabaStaffRequest &) = default ;
    CheckAlibabaStaffRequest(CheckAlibabaStaffRequest &&) = default ;
    CheckAlibabaStaffRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAlibabaStaffRequest() = default ;
    CheckAlibabaStaffRequest& operator=(const CheckAlibabaStaffRequest &) = default ;
    CheckAlibabaStaffRequest& operator=(CheckAlibabaStaffRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mobile_ == nullptr
        && return this->tenantContext_ == nullptr; };
    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline CheckAlibabaStaffRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CheckAlibabaStaffRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CheckAlibabaStaffRequestTenantContext) };
    inline CheckAlibabaStaffRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CheckAlibabaStaffRequestTenantContext) };
    inline CheckAlibabaStaffRequest& setTenantContext(const CheckAlibabaStaffRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CheckAlibabaStaffRequest& setTenantContext(CheckAlibabaStaffRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<CheckAlibabaStaffRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
