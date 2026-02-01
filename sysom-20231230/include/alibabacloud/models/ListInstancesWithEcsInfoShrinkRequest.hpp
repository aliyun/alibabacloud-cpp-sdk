// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESWITHECSINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESWITHECSINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListInstancesWithEcsInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesWithEcsInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(current, current_);
      DARABONBA_PTR_TO_JSON(health_status, healthStatus_);
      DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
      DARABONBA_PTR_TO_JSON(instance_id_name, instanceIdName_);
      DARABONBA_PTR_TO_JSON(instance_name, instanceName_);
      DARABONBA_PTR_TO_JSON(instance_tag, instanceTagShrink_);
      DARABONBA_PTR_TO_JSON(is_managed, isManaged_);
      DARABONBA_PTR_TO_JSON(os_name, osName_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(private_ip, privateIp_);
      DARABONBA_PTR_TO_JSON(public_ip, publicIp_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(resource_group_id_name, resourceGroupIdName_);
      DARABONBA_PTR_TO_JSON(resource_group_name, resourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesWithEcsInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(current, current_);
      DARABONBA_PTR_FROM_JSON(health_status, healthStatus_);
      DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
      DARABONBA_PTR_FROM_JSON(instance_id_name, instanceIdName_);
      DARABONBA_PTR_FROM_JSON(instance_name, instanceName_);
      DARABONBA_PTR_FROM_JSON(instance_tag, instanceTagShrink_);
      DARABONBA_PTR_FROM_JSON(is_managed, isManaged_);
      DARABONBA_PTR_FROM_JSON(os_name, osName_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(private_ip, privateIp_);
      DARABONBA_PTR_FROM_JSON(public_ip, publicIp_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(resource_group_id_name, resourceGroupIdName_);
      DARABONBA_PTR_FROM_JSON(resource_group_name, resourceGroupName_);
    };
    ListInstancesWithEcsInfoShrinkRequest() = default ;
    ListInstancesWithEcsInfoShrinkRequest(const ListInstancesWithEcsInfoShrinkRequest &) = default ;
    ListInstancesWithEcsInfoShrinkRequest(ListInstancesWithEcsInfoShrinkRequest &&) = default ;
    ListInstancesWithEcsInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesWithEcsInfoShrinkRequest() = default ;
    ListInstancesWithEcsInfoShrinkRequest& operator=(const ListInstancesWithEcsInfoShrinkRequest &) = default ;
    ListInstancesWithEcsInfoShrinkRequest& operator=(ListInstancesWithEcsInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->current_ == nullptr
        && this->healthStatus_ == nullptr && this->instanceId_ == nullptr && this->instanceIdName_ == nullptr && this->instanceName_ == nullptr && this->instanceTagShrink_ == nullptr
        && this->isManaged_ == nullptr && this->osName_ == nullptr && this->pageSize_ == nullptr && this->privateIp_ == nullptr && this->publicIp_ == nullptr
        && this->region_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceGroupIdName_ == nullptr && this->resourceGroupName_ == nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListInstancesWithEcsInfoShrinkRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline ListInstancesWithEcsInfoShrinkRequest& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesWithEcsInfoShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIdName Field Functions 
    bool hasInstanceIdName() const { return this->instanceIdName_ != nullptr;};
    void deleteInstanceIdName() { this->instanceIdName_ = nullptr;};
    inline string getInstanceIdName() const { DARABONBA_PTR_GET_DEFAULT(instanceIdName_, "") };
    inline ListInstancesWithEcsInfoShrinkRequest& setInstanceIdName(string instanceIdName) { DARABONBA_PTR_SET_VALUE(instanceIdName_, instanceIdName) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListInstancesWithEcsInfoShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceTagShrink Field Functions 
    bool hasInstanceTagShrink() const { return this->instanceTagShrink_ != nullptr;};
    void deleteInstanceTagShrink() { this->instanceTagShrink_ = nullptr;};
    inline string getInstanceTagShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceTagShrink_, "") };
    inline ListInstancesWithEcsInfoShrinkRequest& setInstanceTagShrink(string instanceTagShrink) { DARABONBA_PTR_SET_VALUE(instanceTagShrink_, instanceTagShrink) };


    // isManaged Field Functions 
    bool hasIsManaged() const { return this->isManaged_ != nullptr;};
    void deleteIsManaged() { this->isManaged_ = nullptr;};
    inline int32_t getIsManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, 0) };
    inline ListInstancesWithEcsInfoShrinkRequest& setIsManaged(int32_t isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


    // osName Field Functions 
    bool hasOsName() const { return this->osName_ != nullptr;};
    void deleteOsName() { this->osName_ = nullptr;};
    inline string getOsName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
    inline ListInstancesWithEcsInfoShrinkRequest& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstancesWithEcsInfoShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // privateIp Field Functions 
    bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
    void deletePrivateIp() { this->privateIp_ = nullptr;};
    inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
    inline ListInstancesWithEcsInfoShrinkRequest& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline ListInstancesWithEcsInfoShrinkRequest& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListInstancesWithEcsInfoShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListInstancesWithEcsInfoShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupIdName Field Functions 
    bool hasResourceGroupIdName() const { return this->resourceGroupIdName_ != nullptr;};
    void deleteResourceGroupIdName() { this->resourceGroupIdName_ = nullptr;};
    inline string getResourceGroupIdName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdName_, "") };
    inline ListInstancesWithEcsInfoShrinkRequest& setResourceGroupIdName(string resourceGroupIdName) { DARABONBA_PTR_SET_VALUE(resourceGroupIdName_, resourceGroupIdName) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline ListInstancesWithEcsInfoShrinkRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


  protected:
    shared_ptr<int32_t> current_ {};
    shared_ptr<string> healthStatus_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceIdName_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> instanceTagShrink_ {};
    shared_ptr<int32_t> isManaged_ {};
    shared_ptr<string> osName_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> privateIp_ {};
    shared_ptr<string> publicIp_ {};
    // This parameter is required.
    shared_ptr<string> region_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceGroupIdName_ {};
    shared_ptr<string> resourceGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
