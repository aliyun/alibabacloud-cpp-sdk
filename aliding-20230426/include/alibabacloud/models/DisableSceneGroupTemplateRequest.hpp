// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLESCENEGROUPTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLESCENEGROUPTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DisableSceneGroupTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableSceneGroupTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, DisableSceneGroupTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    DisableSceneGroupTemplateRequest() = default ;
    DisableSceneGroupTemplateRequest(const DisableSceneGroupTemplateRequest &) = default ;
    DisableSceneGroupTemplateRequest(DisableSceneGroupTemplateRequest &&) = default ;
    DisableSceneGroupTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableSceneGroupTemplateRequest() = default ;
    DisableSceneGroupTemplateRequest& operator=(const DisableSceneGroupTemplateRequest &) = default ;
    DisableSceneGroupTemplateRequest& operator=(DisableSceneGroupTemplateRequest &&) = default ;
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

    virtual bool empty() const override { return this->openConversationId_ == nullptr
        && this->templateId_ == nullptr && this->tenantContext_ == nullptr; };
    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string getOpenConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline DisableSceneGroupTemplateRequest& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DisableSceneGroupTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DisableSceneGroupTemplateRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DisableSceneGroupTemplateRequest::TenantContext) };
    inline DisableSceneGroupTemplateRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, DisableSceneGroupTemplateRequest::TenantContext) };
    inline DisableSceneGroupTemplateRequest& setTenantContext(const DisableSceneGroupTemplateRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DisableSceneGroupTemplateRequest& setTenantContext(DisableSceneGroupTemplateRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> openConversationId_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    shared_ptr<DisableSceneGroupTemplateRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
