// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribeInstanceSpecsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSpecsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSpecsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeInstanceSpecsRequest() = default ;
    DescribeInstanceSpecsRequest(const DescribeInstanceSpecsRequest &) = default ;
    DescribeInstanceSpecsRequest(DescribeInstanceSpecsRequest &&) = default ;
    DescribeInstanceSpecsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSpecsRequest() = default ;
    DescribeInstanceSpecsRequest& operator=(const DescribeInstanceSpecsRequest &) = default ;
    DescribeInstanceSpecsRequest& operator=(DescribeInstanceSpecsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdList_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline string getInstanceIdList() const { DARABONBA_PTR_GET_DEFAULT(instanceIdList_, "") };
    inline DescribeInstanceSpecsRequest& setInstanceIdList(string instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceSpecsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInstanceSpecsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The IDs of the Anti-DDoS Origin instances to query. The value is a JSON array converted to a string. Each element in the JSON array represents an instance ID in string format. Multiple IDs are separated by commas (,).
    // 
    // > You can call the [DescribeInstanceList](https://help.aliyun.com/document_detail/118698.html) operation to query the IDs of all Anti-DDoS Origin instances in a specified region.
    // 
    // This parameter is required.
    shared_ptr<string> instanceIdList_ {};
    // The region ID of the Anti-DDoS Origin instance. Default value: **cn-hangzhou**, which indicates the China (Hangzhou) region.
    // 
    // > If your instance is not in the China (Hangzhou) region, you must specify the region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/118703.html) operation to query all region IDs.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the Anti-DDoS Origin instance belongs in Resource Management. Default value: empty, which indicates the default resource group.
    // 
    // For more information about resource groups, see [Create a resource group](https://help.aliyun.com/document_detail/94485.html).
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
