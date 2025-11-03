// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPluginsInstancesResponseBodyDataInstanceTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListPluginsInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginsInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(instance_id, instanceId_);
      DARABONBA_PTR_TO_JSON(instance_name, instanceName_);
      DARABONBA_PTR_TO_JSON(instance_tag, instanceTag_);
      DARABONBA_PTR_TO_JSON(os_name, osName_);
      DARABONBA_PTR_TO_JSON(private_ip, privateIp_);
      DARABONBA_PTR_TO_JSON(public_ip, publicIp_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(resource_group_name, resourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginsInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(instance_id, instanceId_);
      DARABONBA_PTR_FROM_JSON(instance_name, instanceName_);
      DARABONBA_PTR_FROM_JSON(instance_tag, instanceTag_);
      DARABONBA_PTR_FROM_JSON(os_name, osName_);
      DARABONBA_PTR_FROM_JSON(private_ip, privateIp_);
      DARABONBA_PTR_FROM_JSON(public_ip, publicIp_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(resource_group_name, resourceGroupName_);
    };
    ListPluginsInstancesResponseBodyData() = default ;
    ListPluginsInstancesResponseBodyData(const ListPluginsInstancesResponseBodyData &) = default ;
    ListPluginsInstancesResponseBodyData(ListPluginsInstancesResponseBodyData &&) = default ;
    ListPluginsInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginsInstancesResponseBodyData() = default ;
    ListPluginsInstancesResponseBodyData& operator=(const ListPluginsInstancesResponseBodyData &) = default ;
    ListPluginsInstancesResponseBodyData& operator=(ListPluginsInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr && return this->instanceTag_ == nullptr && return this->osName_ == nullptr && return this->privateIp_ == nullptr && return this->publicIp_ == nullptr
        && return this->region_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceGroupName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListPluginsInstancesResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListPluginsInstancesResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceTag Field Functions 
    bool hasInstanceTag() const { return this->instanceTag_ != nullptr;};
    void deleteInstanceTag() { this->instanceTag_ = nullptr;};
    inline const vector<Models::ListPluginsInstancesResponseBodyDataInstanceTag> & instanceTag() const { DARABONBA_PTR_GET_CONST(instanceTag_, vector<Models::ListPluginsInstancesResponseBodyDataInstanceTag>) };
    inline vector<Models::ListPluginsInstancesResponseBodyDataInstanceTag> instanceTag() { DARABONBA_PTR_GET(instanceTag_, vector<Models::ListPluginsInstancesResponseBodyDataInstanceTag>) };
    inline ListPluginsInstancesResponseBodyData& setInstanceTag(const vector<Models::ListPluginsInstancesResponseBodyDataInstanceTag> & instanceTag) { DARABONBA_PTR_SET_VALUE(instanceTag_, instanceTag) };
    inline ListPluginsInstancesResponseBodyData& setInstanceTag(vector<Models::ListPluginsInstancesResponseBodyDataInstanceTag> && instanceTag) { DARABONBA_PTR_SET_RVALUE(instanceTag_, instanceTag) };


    // osName Field Functions 
    bool hasOsName() const { return this->osName_ != nullptr;};
    void deleteOsName() { this->osName_ = nullptr;};
    inline string osName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
    inline ListPluginsInstancesResponseBodyData& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


    // privateIp Field Functions 
    bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
    void deletePrivateIp() { this->privateIp_ = nullptr;};
    inline string privateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
    inline ListPluginsInstancesResponseBodyData& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline ListPluginsInstancesResponseBodyData& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListPluginsInstancesResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPluginsInstancesResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline ListPluginsInstancesResponseBodyData& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<vector<Models::ListPluginsInstancesResponseBodyDataInstanceTag>> instanceTag_ = nullptr;
    std::shared_ptr<string> osName_ = nullptr;
    std::shared_ptr<string> privateIp_ = nullptr;
    std::shared_ptr<string> publicIp_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
