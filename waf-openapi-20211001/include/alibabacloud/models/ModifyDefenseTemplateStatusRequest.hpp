// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEFENSETEMPLATESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEFENSETEMPLATESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyDefenseTemplateStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDefenseTemplateStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDefenseTemplateStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
    };
    ModifyDefenseTemplateStatusRequest() = default ;
    ModifyDefenseTemplateStatusRequest(const ModifyDefenseTemplateStatusRequest &) = default ;
    ModifyDefenseTemplateStatusRequest(ModifyDefenseTemplateStatusRequest &&) = default ;
    ModifyDefenseTemplateStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDefenseTemplateStatusRequest() = default ;
    ModifyDefenseTemplateStatusRequest& operator=(const ModifyDefenseTemplateStatusRequest &) = default ;
    ModifyDefenseTemplateStatusRequest& operator=(ModifyDefenseTemplateStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->templateId_ == nullptr && this->templateStatus_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDefenseTemplateStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDefenseTemplateStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyDefenseTemplateStatusRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ModifyDefenseTemplateStatusRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateStatus Field Functions 
    bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
    void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
    inline int32_t getTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, 0) };
    inline ModifyDefenseTemplateStatusRequest& setTemplateStatus(int32_t templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


  protected:
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to obtain the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // *   **cn-hangzhou:** the Chinese mainland.
    // *   **ap-southeast-1:** outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The ID of the protection rule template whose status you want to change.
    // 
    // This parameter is required.
    shared_ptr<int64_t> templateId_ {};
    // The new status of the protection rule template. Valid values:
    // 
    // *   **0:** disabled.
    // *   **1:** enabled.
    // 
    // This parameter is required.
    shared_ptr<int32_t> templateStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
