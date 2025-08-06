// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCARDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCardTemplateRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetCardTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCardTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetCardTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetCardTemplateRequest() = default ;
    GetCardTemplateRequest(const GetCardTemplateRequest &) = default ;
    GetCardTemplateRequest(GetCardTemplateRequest &&) = default ;
    GetCardTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCardTemplateRequest() = default ;
    GetCardTemplateRequest& operator=(const GetCardTemplateRequest &) = default ;
    GetCardTemplateRequest& operator=(GetCardTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->templateId_ != nullptr
        && this->tenantContext_ != nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetCardTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetCardTemplateRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetCardTemplateRequestTenantContext) };
    inline GetCardTemplateRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetCardTemplateRequestTenantContext) };
    inline GetCardTemplateRequest& setTenantContext(const GetCardTemplateRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetCardTemplateRequest& setTenantContext(GetCardTemplateRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<GetCardTemplateRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
