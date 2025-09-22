// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTEMPLATERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTEMPLATERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyTemplateResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTemplateResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindAssets, bindAssets_);
      DARABONBA_PTR_TO_JSON(BindResourceGroups, bindResourceGroups_);
      DARABONBA_PTR_TO_JSON(BindResources, bindResources_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(UnbindAssets, unbindAssets_);
      DARABONBA_PTR_TO_JSON(UnbindResourceGroups, unbindResourceGroups_);
      DARABONBA_PTR_TO_JSON(UnbindResources, unbindResources_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTemplateResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindAssets, bindAssets_);
      DARABONBA_PTR_FROM_JSON(BindResourceGroups, bindResourceGroups_);
      DARABONBA_PTR_FROM_JSON(BindResources, bindResources_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(UnbindAssets, unbindAssets_);
      DARABONBA_PTR_FROM_JSON(UnbindResourceGroups, unbindResourceGroups_);
      DARABONBA_PTR_FROM_JSON(UnbindResources, unbindResources_);
    };
    ModifyTemplateResourcesRequest() = default ;
    ModifyTemplateResourcesRequest(const ModifyTemplateResourcesRequest &) = default ;
    ModifyTemplateResourcesRequest(ModifyTemplateResourcesRequest &&) = default ;
    ModifyTemplateResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTemplateResourcesRequest() = default ;
    ModifyTemplateResourcesRequest& operator=(const ModifyTemplateResourcesRequest &) = default ;
    ModifyTemplateResourcesRequest& operator=(ModifyTemplateResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindAssets_ != nullptr
        && this->bindResourceGroups_ != nullptr && this->bindResources_ != nullptr && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr
        && this->templateId_ != nullptr && this->unbindAssets_ != nullptr && this->unbindResourceGroups_ != nullptr && this->unbindResources_ != nullptr; };
    // bindAssets Field Functions 
    bool hasBindAssets() const { return this->bindAssets_ != nullptr;};
    void deleteBindAssets() { this->bindAssets_ = nullptr;};
    inline const vector<string> & bindAssets() const { DARABONBA_PTR_GET_CONST(bindAssets_, vector<string>) };
    inline vector<string> bindAssets() { DARABONBA_PTR_GET(bindAssets_, vector<string>) };
    inline ModifyTemplateResourcesRequest& setBindAssets(const vector<string> & bindAssets) { DARABONBA_PTR_SET_VALUE(bindAssets_, bindAssets) };
    inline ModifyTemplateResourcesRequest& setBindAssets(vector<string> && bindAssets) { DARABONBA_PTR_SET_RVALUE(bindAssets_, bindAssets) };


    // bindResourceGroups Field Functions 
    bool hasBindResourceGroups() const { return this->bindResourceGroups_ != nullptr;};
    void deleteBindResourceGroups() { this->bindResourceGroups_ = nullptr;};
    inline const vector<string> & bindResourceGroups() const { DARABONBA_PTR_GET_CONST(bindResourceGroups_, vector<string>) };
    inline vector<string> bindResourceGroups() { DARABONBA_PTR_GET(bindResourceGroups_, vector<string>) };
    inline ModifyTemplateResourcesRequest& setBindResourceGroups(const vector<string> & bindResourceGroups) { DARABONBA_PTR_SET_VALUE(bindResourceGroups_, bindResourceGroups) };
    inline ModifyTemplateResourcesRequest& setBindResourceGroups(vector<string> && bindResourceGroups) { DARABONBA_PTR_SET_RVALUE(bindResourceGroups_, bindResourceGroups) };


    // bindResources Field Functions 
    bool hasBindResources() const { return this->bindResources_ != nullptr;};
    void deleteBindResources() { this->bindResources_ = nullptr;};
    inline const vector<string> & bindResources() const { DARABONBA_PTR_GET_CONST(bindResources_, vector<string>) };
    inline vector<string> bindResources() { DARABONBA_PTR_GET(bindResources_, vector<string>) };
    inline ModifyTemplateResourcesRequest& setBindResources(const vector<string> & bindResources) { DARABONBA_PTR_SET_VALUE(bindResources_, bindResources) };
    inline ModifyTemplateResourcesRequest& setBindResources(vector<string> && bindResources) { DARABONBA_PTR_SET_RVALUE(bindResources_, bindResources) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyTemplateResourcesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyTemplateResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyTemplateResourcesRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ModifyTemplateResourcesRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // unbindAssets Field Functions 
    bool hasUnbindAssets() const { return this->unbindAssets_ != nullptr;};
    void deleteUnbindAssets() { this->unbindAssets_ = nullptr;};
    inline const vector<string> & unbindAssets() const { DARABONBA_PTR_GET_CONST(unbindAssets_, vector<string>) };
    inline vector<string> unbindAssets() { DARABONBA_PTR_GET(unbindAssets_, vector<string>) };
    inline ModifyTemplateResourcesRequest& setUnbindAssets(const vector<string> & unbindAssets) { DARABONBA_PTR_SET_VALUE(unbindAssets_, unbindAssets) };
    inline ModifyTemplateResourcesRequest& setUnbindAssets(vector<string> && unbindAssets) { DARABONBA_PTR_SET_RVALUE(unbindAssets_, unbindAssets) };


    // unbindResourceGroups Field Functions 
    bool hasUnbindResourceGroups() const { return this->unbindResourceGroups_ != nullptr;};
    void deleteUnbindResourceGroups() { this->unbindResourceGroups_ = nullptr;};
    inline const vector<string> & unbindResourceGroups() const { DARABONBA_PTR_GET_CONST(unbindResourceGroups_, vector<string>) };
    inline vector<string> unbindResourceGroups() { DARABONBA_PTR_GET(unbindResourceGroups_, vector<string>) };
    inline ModifyTemplateResourcesRequest& setUnbindResourceGroups(const vector<string> & unbindResourceGroups) { DARABONBA_PTR_SET_VALUE(unbindResourceGroups_, unbindResourceGroups) };
    inline ModifyTemplateResourcesRequest& setUnbindResourceGroups(vector<string> && unbindResourceGroups) { DARABONBA_PTR_SET_RVALUE(unbindResourceGroups_, unbindResourceGroups) };


    // unbindResources Field Functions 
    bool hasUnbindResources() const { return this->unbindResources_ != nullptr;};
    void deleteUnbindResources() { this->unbindResources_ = nullptr;};
    inline const vector<string> & unbindResources() const { DARABONBA_PTR_GET_CONST(unbindResources_, vector<string>) };
    inline vector<string> unbindResources() { DARABONBA_PTR_GET(unbindResources_, vector<string>) };
    inline ModifyTemplateResourcesRequest& setUnbindResources(const vector<string> & unbindResources) { DARABONBA_PTR_SET_VALUE(unbindResources_, unbindResources) };
    inline ModifyTemplateResourcesRequest& setUnbindResources(vector<string> && unbindResources) { DARABONBA_PTR_SET_RVALUE(unbindResources_, unbindResources) };


  protected:
    std::shared_ptr<vector<string>> bindAssets_ = nullptr;
    // The protected object groups that you want to associate with the template. Specify the value in the [**"group1","group2",...**] format.
    std::shared_ptr<vector<string>> bindResourceGroups_ = nullptr;
    // The protected objects that you want to associate with the template. Specify the value in the [**"XX1","XX2",...**] format.
    std::shared_ptr<vector<string>> bindResources_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to obtain the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The ID of the protection rule template.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> templateId_ = nullptr;
    std::shared_ptr<vector<string>> unbindAssets_ = nullptr;
    // The protected object groups that you want to disassociate from the template. Specify the value in the [**"group1","group2",...**] format.
    std::shared_ptr<vector<string>> unbindResourceGroups_ = nullptr;
    // The protected objects that you want to disassociate from the template. Specify the value in the [**"XX1","XX2",...**] format.
    std::shared_ptr<vector<string>> unbindResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
