// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHMAINORGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHMAINORGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SwitchMainOrgShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchMainOrgShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TargetOrgId, targetOrgId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchMainOrgShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetOrgId, targetOrgId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    SwitchMainOrgShrinkRequest() = default ;
    SwitchMainOrgShrinkRequest(const SwitchMainOrgShrinkRequest &) = default ;
    SwitchMainOrgShrinkRequest(SwitchMainOrgShrinkRequest &&) = default ;
    SwitchMainOrgShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchMainOrgShrinkRequest() = default ;
    SwitchMainOrgShrinkRequest& operator=(const SwitchMainOrgShrinkRequest &) = default ;
    SwitchMainOrgShrinkRequest& operator=(SwitchMainOrgShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetOrgId_ == nullptr
        && this->tenantContextShrink_ == nullptr; };
    // targetOrgId Field Functions 
    bool hasTargetOrgId() const { return this->targetOrgId_ != nullptr;};
    void deleteTargetOrgId() { this->targetOrgId_ = nullptr;};
    inline int64_t getTargetOrgId() const { DARABONBA_PTR_GET_DEFAULT(targetOrgId_, 0L) };
    inline SwitchMainOrgShrinkRequest& setTargetOrgId(int64_t targetOrgId) { DARABONBA_PTR_SET_VALUE(targetOrgId_, targetOrgId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline SwitchMainOrgShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    shared_ptr<int64_t> targetOrgId_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
