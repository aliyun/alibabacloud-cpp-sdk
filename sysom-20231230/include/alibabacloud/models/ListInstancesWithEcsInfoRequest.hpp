// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESWITHECSINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESWITHECSINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstancesWithEcsInfoRequestInstanceTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListInstancesWithEcsInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesWithEcsInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(current, current_);
      DARABONBA_PTR_TO_JSON(health_status, healthStatus_);
      DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
      DARABONBA_PTR_TO_JSON(instance_id_name, instanceIdName_);
      DARABONBA_PTR_TO_JSON(instance_name, instanceName_);
      DARABONBA_PTR_TO_JSON(instance_tag, instanceTag_);
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
    friend void from_json(const Darabonba::Json& j, ListInstancesWithEcsInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(current, current_);
      DARABONBA_PTR_FROM_JSON(health_status, healthStatus_);
      DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
      DARABONBA_PTR_FROM_JSON(instance_id_name, instanceIdName_);
      DARABONBA_PTR_FROM_JSON(instance_name, instanceName_);
      DARABONBA_PTR_FROM_JSON(instance_tag, instanceTag_);
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
    ListInstancesWithEcsInfoRequest() = default ;
    ListInstancesWithEcsInfoRequest(const ListInstancesWithEcsInfoRequest &) = default ;
    ListInstancesWithEcsInfoRequest(ListInstancesWithEcsInfoRequest &&) = default ;
    ListInstancesWithEcsInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesWithEcsInfoRequest() = default ;
    ListInstancesWithEcsInfoRequest& operator=(const ListInstancesWithEcsInfoRequest &) = default ;
    ListInstancesWithEcsInfoRequest& operator=(ListInstancesWithEcsInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->current_ != nullptr
        && this->healthStatus_ != nullptr && this->instanceId_ != nullptr && this->instanceIdName_ != nullptr && this->instanceName_ != nullptr && this->instanceTag_ != nullptr
        && this->isManaged_ != nullptr && this->osName_ != nullptr && this->pageSize_ != nullptr && this->privateIp_ != nullptr && this->publicIp_ != nullptr
        && this->region_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceGroupIdName_ != nullptr && this->resourceGroupName_ != nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListInstancesWithEcsInfoRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline ListInstancesWithEcsInfoRequest& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesWithEcsInfoRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIdName Field Functions 
    bool hasInstanceIdName() const { return this->instanceIdName_ != nullptr;};
    void deleteInstanceIdName() { this->instanceIdName_ = nullptr;};
    inline string instanceIdName() const { DARABONBA_PTR_GET_DEFAULT(instanceIdName_, "") };
    inline ListInstancesWithEcsInfoRequest& setInstanceIdName(string instanceIdName) { DARABONBA_PTR_SET_VALUE(instanceIdName_, instanceIdName) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListInstancesWithEcsInfoRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceTag Field Functions 
    bool hasInstanceTag() const { return this->instanceTag_ != nullptr;};
    void deleteInstanceTag() { this->instanceTag_ = nullptr;};
    inline const ListInstancesWithEcsInfoRequestInstanceTag & instanceTag() const { DARABONBA_PTR_GET_CONST(instanceTag_, ListInstancesWithEcsInfoRequestInstanceTag) };
    inline ListInstancesWithEcsInfoRequestInstanceTag instanceTag() { DARABONBA_PTR_GET(instanceTag_, ListInstancesWithEcsInfoRequestInstanceTag) };
    inline ListInstancesWithEcsInfoRequest& setInstanceTag(const ListInstancesWithEcsInfoRequestInstanceTag & instanceTag) { DARABONBA_PTR_SET_VALUE(instanceTag_, instanceTag) };
    inline ListInstancesWithEcsInfoRequest& setInstanceTag(ListInstancesWithEcsInfoRequestInstanceTag && instanceTag) { DARABONBA_PTR_SET_RVALUE(instanceTag_, instanceTag) };


    // isManaged Field Functions 
    bool hasIsManaged() const { return this->isManaged_ != nullptr;};
    void deleteIsManaged() { this->isManaged_ = nullptr;};
    inline int32_t isManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, 0) };
    inline ListInstancesWithEcsInfoRequest& setIsManaged(int32_t isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


    // osName Field Functions 
    bool hasOsName() const { return this->osName_ != nullptr;};
    void deleteOsName() { this->osName_ = nullptr;};
    inline string osName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
    inline ListInstancesWithEcsInfoRequest& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstancesWithEcsInfoRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // privateIp Field Functions 
    bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
    void deletePrivateIp() { this->privateIp_ = nullptr;};
    inline string privateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
    inline ListInstancesWithEcsInfoRequest& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline ListInstancesWithEcsInfoRequest& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListInstancesWithEcsInfoRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListInstancesWithEcsInfoRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupIdName Field Functions 
    bool hasResourceGroupIdName() const { return this->resourceGroupIdName_ != nullptr;};
    void deleteResourceGroupIdName() { this->resourceGroupIdName_ = nullptr;};
    inline string resourceGroupIdName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdName_, "") };
    inline ListInstancesWithEcsInfoRequest& setResourceGroupIdName(string resourceGroupIdName) { DARABONBA_PTR_SET_VALUE(resourceGroupIdName_, resourceGroupIdName) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline ListInstancesWithEcsInfoRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


  protected:
    std::shared_ptr<int32_t> current_ = nullptr;
    std::shared_ptr<string> healthStatus_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceIdName_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<ListInstancesWithEcsInfoRequestInstanceTag> instanceTag_ = nullptr;
    std::shared_ptr<int32_t> isManaged_ = nullptr;
    std::shared_ptr<string> osName_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> privateIp_ = nullptr;
    std::shared_ptr<string> publicIp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceGroupIdName_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
