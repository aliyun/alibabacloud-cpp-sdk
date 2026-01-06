// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDINGTALKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDINGTALKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
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

    virtual bool empty() const override { return this->dingTalkId_ == nullptr
        && this->tenantContext_ == nullptr; };
    // dingTalkId Field Functions 
    bool hasDingTalkId() const { return this->dingTalkId_ != nullptr;};
    void deleteDingTalkId() { this->dingTalkId_ = nullptr;};
    inline string getDingTalkId() const { DARABONBA_PTR_GET_DEFAULT(dingTalkId_, "") };
    inline ChangeDingTalkIdRequest& setDingTalkId(string dingTalkId) { DARABONBA_PTR_SET_VALUE(dingTalkId_, dingTalkId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const ChangeDingTalkIdRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, ChangeDingTalkIdRequest::TenantContext) };
    inline ChangeDingTalkIdRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, ChangeDingTalkIdRequest::TenantContext) };
    inline ChangeDingTalkIdRequest& setTenantContext(const ChangeDingTalkIdRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline ChangeDingTalkIdRequest& setTenantContext(ChangeDingTalkIdRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> dingTalkId_ {};
    shared_ptr<ChangeDingTalkIdRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
