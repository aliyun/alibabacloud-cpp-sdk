// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class AddIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AddIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    AddIpRequest() = default ;
    AddIpRequest(const AddIpRequest &) = default ;
    AddIpRequest(AddIpRequest &&) = default ;
    AddIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddIpRequest() = default ;
    AddIpRequest& operator=(const AddIpRequest &) = default ;
    AddIpRequest& operator=(AddIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->ipList_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddIpRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline string getIpList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
    inline AddIpRequest& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddIpRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AddIpRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the Anti-DDoS Origin instance to manage.
    // 
    // > Call [DescribeInstanceList](https://help.aliyun.com/document_detail/118698.html) to query the IDs of all Anti-DDoS Origin instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The list of IP addresses to add to the Anti-DDoS Origin instance for protection. The value is a string that is converted from a JSON array. Each element in the JSON array is a struct that contains the following fields:
    // 
    // - **ip**: The IP address to add. This parameter is of the String type and is required.
    // 
    // - **member_uid**: The ID of the member account that owns the asset. This parameter is of the String type and is optional. Specify this parameter only when you add an asset that belongs to a member account. For example: [{"ip":"121.41.XX.XX","member_uid":"120100811162\\*\\*\\*\\*"}]
    // 
    // This parameter is required.
    shared_ptr<string> ipList_ {};
    // The region ID of the Anti-DDoS Origin instance.
    // 
    // > Call [DescribeRegions](https://help.aliyun.com/document_detail/118703.html) to query information about all regions that Anti-DDoS Origin supports.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group in Resource Management to which the Anti-DDoS Origin instance belongs. If you leave this parameter empty, the instance is added to the default resource group.
    // 
    // For more information about resource groups, see [Create a resource group](https://help.aliyun.com/document_detail/94485.html).
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
