// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATERESOURCECOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATERESOURCECOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeTemplateResourceCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplateResourceCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(TemplateIds, templateIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplateResourceCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TemplateIds, templateIds_);
    };
    DescribeTemplateResourceCountRequest() = default ;
    DescribeTemplateResourceCountRequest(const DescribeTemplateResourceCountRequest &) = default ;
    DescribeTemplateResourceCountRequest(DescribeTemplateResourceCountRequest &&) = default ;
    DescribeTemplateResourceCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplateResourceCountRequest() = default ;
    DescribeTemplateResourceCountRequest& operator=(const DescribeTemplateResourceCountRequest &) = default ;
    DescribeTemplateResourceCountRequest& operator=(DescribeTemplateResourceCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->templateIds_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeTemplateResourceCountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeTemplateResourceCountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeTemplateResourceCountRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline string templateIds() const { DARABONBA_PTR_GET_DEFAULT(templateIds_, "") };
    inline DescribeTemplateResourceCountRequest& setTemplateIds(string templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };


  protected:
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The IDs of the protection templates that you want to query. Separate multiple template IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> templateIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
