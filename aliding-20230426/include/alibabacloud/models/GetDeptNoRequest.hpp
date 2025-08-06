// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPTNOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEPTNOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDeptNoRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDeptNoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeptNoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(deptId, deptId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeptNoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(deptId, deptId_);
    };
    GetDeptNoRequest() = default ;
    GetDeptNoRequest(const GetDeptNoRequest &) = default ;
    GetDeptNoRequest(GetDeptNoRequest &&) = default ;
    GetDeptNoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeptNoRequest() = default ;
    GetDeptNoRequest& operator=(const GetDeptNoRequest &) = default ;
    GetDeptNoRequest& operator=(GetDeptNoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantContext_ != nullptr
        && this->deptId_ != nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetDeptNoRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetDeptNoRequestTenantContext) };
    inline GetDeptNoRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetDeptNoRequestTenantContext) };
    inline GetDeptNoRequest& setTenantContext(const GetDeptNoRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetDeptNoRequest& setTenantContext(GetDeptNoRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // deptId Field Functions 
    bool hasDeptId() const { return this->deptId_ != nullptr;};
    void deleteDeptId() { this->deptId_ = nullptr;};
    inline string deptId() const { DARABONBA_PTR_GET_DEFAULT(deptId_, "") };
    inline GetDeptNoRequest& setDeptId(string deptId) { DARABONBA_PTR_SET_VALUE(deptId_, deptId) };


  protected:
    std::shared_ptr<GetDeptNoRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
