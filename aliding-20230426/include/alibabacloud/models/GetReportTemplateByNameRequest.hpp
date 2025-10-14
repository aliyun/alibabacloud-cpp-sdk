// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTTEMPLATEBYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTTEMPLATEBYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetReportTemplateByNameRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetReportTemplateByNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportTemplateByNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportTemplateByNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetReportTemplateByNameRequest() = default ;
    GetReportTemplateByNameRequest(const GetReportTemplateByNameRequest &) = default ;
    GetReportTemplateByNameRequest(GetReportTemplateByNameRequest &&) = default ;
    GetReportTemplateByNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportTemplateByNameRequest() = default ;
    GetReportTemplateByNameRequest& operator=(const GetReportTemplateByNameRequest &) = default ;
    GetReportTemplateByNameRequest& operator=(GetReportTemplateByNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateName_ == nullptr
        && return this->tenantContext_ == nullptr; };
    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetReportTemplateByNameRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetReportTemplateByNameRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetReportTemplateByNameRequestTenantContext) };
    inline GetReportTemplateByNameRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetReportTemplateByNameRequestTenantContext) };
    inline GetReportTemplateByNameRequest& setTenantContext(const GetReportTemplateByNameRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetReportTemplateByNameRequest& setTenantContext(GetReportTemplateByNameRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<GetReportTemplateByNameRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
