// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTTEMPLATEBYNAMESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTTEMPLATEBYNAMESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetReportTemplateByNameShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportTemplateByNameShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportTemplateByNameShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    GetReportTemplateByNameShrinkRequest() = default ;
    GetReportTemplateByNameShrinkRequest(const GetReportTemplateByNameShrinkRequest &) = default ;
    GetReportTemplateByNameShrinkRequest(GetReportTemplateByNameShrinkRequest &&) = default ;
    GetReportTemplateByNameShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportTemplateByNameShrinkRequest() = default ;
    GetReportTemplateByNameShrinkRequest& operator=(const GetReportTemplateByNameShrinkRequest &) = default ;
    GetReportTemplateByNameShrinkRequest& operator=(GetReportTemplateByNameShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateName_ == nullptr
        && this->tenantContextShrink_ == nullptr; };
    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetReportTemplateByNameShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetReportTemplateByNameShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
