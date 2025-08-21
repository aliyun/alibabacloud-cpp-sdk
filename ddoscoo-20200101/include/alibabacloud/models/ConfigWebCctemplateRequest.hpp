// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGWEBCCTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGWEBCCTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigWebCCTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigWebCCTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigWebCCTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    ConfigWebCCTemplateRequest() = default ;
    ConfigWebCCTemplateRequest(const ConfigWebCCTemplateRequest &) = default ;
    ConfigWebCCTemplateRequest(ConfigWebCCTemplateRequest &&) = default ;
    ConfigWebCCTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigWebCCTemplateRequest() = default ;
    ConfigWebCCTemplateRequest& operator=(const ConfigWebCCTemplateRequest &) = default ;
    ConfigWebCCTemplateRequest& operator=(ConfigWebCCTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->resourceGroupId_ != nullptr && this->template_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ConfigWebCCTemplateRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigWebCCTemplateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline ConfigWebCCTemplateRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The domain name of the website.
    // 
    // > A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The mode of the Frequency Control policy. Valid values:
    // 
    // *   **default**: Normal
    // *   **gf_under_attack**: Emergency
    // *   **gf_sos_verify**: Strict
    // *   **gf_sos_enhance**: Super Strict
    // 
    // This parameter is required.
    std::shared_ptr<string> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
