// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDINGTALKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDINGTALKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChangeDingTalkIdRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ChangeDingTalkIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDingTalkIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DingTalkId, dingTalkId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDingTalkIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DingTalkId, dingTalkId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    ChangeDingTalkIdRequest() = default ;
    ChangeDingTalkIdRequest(const ChangeDingTalkIdRequest &) = default ;
    ChangeDingTalkIdRequest(ChangeDingTalkIdRequest &&) = default ;
    ChangeDingTalkIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDingTalkIdRequest() = default ;
    ChangeDingTalkIdRequest& operator=(const ChangeDingTalkIdRequest &) = default ;
    ChangeDingTalkIdRequest& operator=(ChangeDingTalkIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dingTalkId_ != nullptr
        && this->tenantContext_ != nullptr; };
    // dingTalkId Field Functions 
    bool hasDingTalkId() const { return this->dingTalkId_ != nullptr;};
    void deleteDingTalkId() { this->dingTalkId_ = nullptr;};
    inline string dingTalkId() const { DARABONBA_PTR_GET_DEFAULT(dingTalkId_, "") };
    inline ChangeDingTalkIdRequest& setDingTalkId(string dingTalkId) { DARABONBA_PTR_SET_VALUE(dingTalkId_, dingTalkId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const ChangeDingTalkIdRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, ChangeDingTalkIdRequestTenantContext) };
    inline ChangeDingTalkIdRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, ChangeDingTalkIdRequestTenantContext) };
    inline ChangeDingTalkIdRequest& setTenantContext(const ChangeDingTalkIdRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline ChangeDingTalkIdRequest& setTenantContext(ChangeDingTalkIdRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dingTalkId_ = nullptr;
    std::shared_ptr<ChangeDingTalkIdRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
