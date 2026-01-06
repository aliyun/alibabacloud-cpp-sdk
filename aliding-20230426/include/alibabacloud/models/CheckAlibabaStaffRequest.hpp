// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKALIBABASTAFFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKALIBABASTAFFREQUEST_HPP_
#include <darabonba/Core.hpp>
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

    virtual bool empty() const override { return this->mobile_ == nullptr
        && this->tenantContext_ == nullptr; };
    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline CheckAlibabaStaffRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CheckAlibabaStaffRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CheckAlibabaStaffRequest::TenantContext) };
    inline CheckAlibabaStaffRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, CheckAlibabaStaffRequest::TenantContext) };
    inline CheckAlibabaStaffRequest& setTenantContext(const CheckAlibabaStaffRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CheckAlibabaStaffRequest& setTenantContext(CheckAlibabaStaffRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    shared_ptr<string> mobile_ {};
    shared_ptr<CheckAlibabaStaffRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
