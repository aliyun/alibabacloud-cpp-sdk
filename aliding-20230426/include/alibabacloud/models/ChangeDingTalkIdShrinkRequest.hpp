// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDINGTALKIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDINGTALKIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ChangeDingTalkIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDingTalkIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DingTalkId, dingTalkId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDingTalkIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DingTalkId, dingTalkId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    ChangeDingTalkIdShrinkRequest() = default ;
    ChangeDingTalkIdShrinkRequest(const ChangeDingTalkIdShrinkRequest &) = default ;
    ChangeDingTalkIdShrinkRequest(ChangeDingTalkIdShrinkRequest &&) = default ;
    ChangeDingTalkIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDingTalkIdShrinkRequest() = default ;
    ChangeDingTalkIdShrinkRequest& operator=(const ChangeDingTalkIdShrinkRequest &) = default ;
    ChangeDingTalkIdShrinkRequest& operator=(ChangeDingTalkIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dingTalkId_ == nullptr
        && this->tenantContextShrink_ == nullptr; };
    // dingTalkId Field Functions 
    bool hasDingTalkId() const { return this->dingTalkId_ != nullptr;};
    void deleteDingTalkId() { this->dingTalkId_ = nullptr;};
    inline string getDingTalkId() const { DARABONBA_PTR_GET_DEFAULT(dingTalkId_, "") };
    inline ChangeDingTalkIdShrinkRequest& setDingTalkId(string dingTalkId) { DARABONBA_PTR_SET_VALUE(dingTalkId_, dingTalkId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline ChangeDingTalkIdShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> dingTalkId_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
