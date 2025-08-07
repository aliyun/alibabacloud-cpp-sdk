// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPISECSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPISECSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyApisecStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApisecStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApisecStatus, apisecStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroups, resourceGroups_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApisecStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApisecStatus, apisecStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroups, resourceGroups_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    ModifyApisecStatusRequest() = default ;
    ModifyApisecStatusRequest(const ModifyApisecStatusRequest &) = default ;
    ModifyApisecStatusRequest(ModifyApisecStatusRequest &&) = default ;
    ModifyApisecStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApisecStatusRequest() = default ;
    ModifyApisecStatusRequest& operator=(const ModifyApisecStatusRequest &) = default ;
    ModifyApisecStatusRequest& operator=(ModifyApisecStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apisecStatus_ != nullptr
        && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->resourceGroups_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->resources_ != nullptr; };
    // apisecStatus Field Functions 
    bool hasApisecStatus() const { return this->apisecStatus_ != nullptr;};
    void deleteApisecStatus() { this->apisecStatus_ = nullptr;};
    inline int32_t apisecStatus() const { DARABONBA_PTR_GET_DEFAULT(apisecStatus_, 0) };
    inline ModifyApisecStatusRequest& setApisecStatus(int32_t apisecStatus) { DARABONBA_PTR_SET_VALUE(apisecStatus_, apisecStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyApisecStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApisecStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroups Field Functions 
    bool hasResourceGroups() const { return this->resourceGroups_ != nullptr;};
    void deleteResourceGroups() { this->resourceGroups_ = nullptr;};
    inline string resourceGroups() const { DARABONBA_PTR_GET_DEFAULT(resourceGroups_, "") };
    inline ModifyApisecStatusRequest& setResourceGroups(string resourceGroups) { DARABONBA_PTR_SET_VALUE(resourceGroups_, resourceGroups) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyApisecStatusRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline ModifyApisecStatusRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


  protected:
    // The status of the API security module. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> apisecStatus_ = nullptr;
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region in which the Web Application Firewall (WAF) instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland
    // *   **ap-southeast-1**: outside the Chinese mainland
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the protected object group to which the protected object belongs.
    std::shared_ptr<string> resourceGroups_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The name of the protected object.
    std::shared_ptr<string> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
