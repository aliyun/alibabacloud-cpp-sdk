// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResourceLogStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceLogStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceLogStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    DescribeResourceLogStatusRequest() = default ;
    DescribeResourceLogStatusRequest(const DescribeResourceLogStatusRequest &) = default ;
    DescribeResourceLogStatusRequest(DescribeResourceLogStatusRequest &&) = default ;
    DescribeResourceLogStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceLogStatusRequest() = default ;
    DescribeResourceLogStatusRequest& operator=(const DescribeResourceLogStatusRequest &) = default ;
    DescribeResourceLogStatusRequest& operator=(DescribeResourceLogStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->resources_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeResourceLogStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeResourceLogStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeResourceLogStatusRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline DescribeResourceLogStatusRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


  protected:
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to obtain the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // *   **cn-hangzhou:** the Chinese mainland
    // *   **ap-southeast-1:** outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The protected object that you want to query. You can specify multiple protected objects. Separate the protected objects with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
