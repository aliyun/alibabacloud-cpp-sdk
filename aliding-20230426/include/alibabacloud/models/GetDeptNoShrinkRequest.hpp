// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPTNOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEPTNOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDeptNoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeptNoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(deptId, deptId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeptNoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(deptId, deptId_);
    };
    GetDeptNoShrinkRequest() = default ;
    GetDeptNoShrinkRequest(const GetDeptNoShrinkRequest &) = default ;
    GetDeptNoShrinkRequest(GetDeptNoShrinkRequest &&) = default ;
    GetDeptNoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeptNoShrinkRequest() = default ;
    GetDeptNoShrinkRequest& operator=(const GetDeptNoShrinkRequest &) = default ;
    GetDeptNoShrinkRequest& operator=(GetDeptNoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->deptId_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetDeptNoShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // deptId Field Functions 
    bool hasDeptId() const { return this->deptId_ != nullptr;};
    void deleteDeptId() { this->deptId_ = nullptr;};
    inline string getDeptId() const { DARABONBA_PTR_GET_DEFAULT(deptId_, "") };
    inline GetDeptNoShrinkRequest& setDeptId(string deptId) { DARABONBA_PTR_SET_VALUE(deptId_, deptId) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> deptId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
