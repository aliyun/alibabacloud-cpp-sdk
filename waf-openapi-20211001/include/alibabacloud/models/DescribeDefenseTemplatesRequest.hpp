// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSETEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSETEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(DefenseSubScene, defenseSubScene_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateIds, templateIds_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(DefenseSubScene, defenseSubScene_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateIds, templateIds_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    DescribeDefenseTemplatesRequest() = default ;
    DescribeDefenseTemplatesRequest(const DescribeDefenseTemplatesRequest &) = default ;
    DescribeDefenseTemplatesRequest(DescribeDefenseTemplatesRequest &&) = default ;
    DescribeDefenseTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseTemplatesRequest() = default ;
    DescribeDefenseTemplatesRequest& operator=(const DescribeDefenseTemplatesRequest &) = default ;
    DescribeDefenseTemplatesRequest& operator=(DescribeDefenseTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defenseScene_ == nullptr
        && this->defenseSubScene_ == nullptr && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->resource_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->resourceType_ == nullptr && this->templateId_ == nullptr && this->templateIds_ == nullptr
        && this->templateName_ == nullptr && this->templateType_ == nullptr; };
    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline DescribeDefenseTemplatesRequest& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // defenseSubScene Field Functions 
    bool hasDefenseSubScene() const { return this->defenseSubScene_ != nullptr;};
    void deleteDefenseSubScene() { this->defenseSubScene_ = nullptr;};
    inline string getDefenseSubScene() const { DARABONBA_PTR_GET_DEFAULT(defenseSubScene_, "") };
    inline DescribeDefenseTemplatesRequest& setDefenseSubScene(string defenseSubScene) { DARABONBA_PTR_SET_VALUE(defenseSubScene_, defenseSubScene) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDefenseTemplatesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDefenseTemplatesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDefenseTemplatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDefenseTemplatesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeDefenseTemplatesRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeDefenseTemplatesRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeDefenseTemplatesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeDefenseTemplatesRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline string getTemplateIds() const { DARABONBA_PTR_GET_DEFAULT(templateIds_, "") };
    inline DescribeDefenseTemplatesRequest& setTemplateIds(string templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeDefenseTemplatesRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline DescribeDefenseTemplatesRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The scenario in which the protection template is used.
    // 
    // *   **waf_group**: basic protection.
    // *   **antiscan**: scan protection.
    // *   **ip_blacklist**: IP address blacklist.
    // *   **custom_acl**: custom rule.
    // *   **whitelist**: whitelist.
    // *   **region_block**: region blacklist.
    // *   **custom_response**: custom response.
    // *   **cc**: HTTP flood protection.
    // *   **tamperproof**: website tamper-proofing.
    // *   **dlp**: data leakage prevention.
    shared_ptr<string> defenseScene_ {};
    // The sub-scenario in which the protection template is used. Valid values:
    // 
    // *   **web**: bot management for website protection.
    // *   **app**: bot management for app protection.
    // *   **basic**: bot management for basic protection.
    shared_ptr<string> defenseSubScene_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // > You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The page number. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The name of the protected object or protected object group.
    // 
    // >  If you specify ResourceType, you must specify this parameter.
    shared_ptr<string> resource_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The type of the protected resource. Valid values:
    // 
    // *   **single**: protected object. This is the default value.
    // *   **group**: protected object group.
    // 
    // >  If you specify Resource, you must specify this parameter.
    shared_ptr<string> resourceType_ {};
    // The ID of the protection template.
    shared_ptr<int64_t> templateId_ {};
    // The IDs of the protection templates that you want to query. Separate multiple template IDs with commas (,).
    shared_ptr<string> templateIds_ {};
    // The name of the protection template.
    shared_ptr<string> templateName_ {};
    // The type of the protection template. Valid values:
    // 
    // *   **user_default**: default template.
    // *   **user_custom**: custom template.
    shared_ptr<string> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
