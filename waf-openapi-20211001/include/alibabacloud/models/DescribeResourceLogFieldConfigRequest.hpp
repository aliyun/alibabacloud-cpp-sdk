// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGFIELDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGFIELDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResourceLogFieldConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceLogFieldConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceLogFieldConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeResourceLogFieldConfigRequest() = default ;
    DescribeResourceLogFieldConfigRequest(const DescribeResourceLogFieldConfigRequest &) = default ;
    DescribeResourceLogFieldConfigRequest(DescribeResourceLogFieldConfigRequest &&) = default ;
    DescribeResourceLogFieldConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceLogFieldConfigRequest() = default ;
    DescribeResourceLogFieldConfigRequest& operator=(const DescribeResourceLogFieldConfigRequest &) = default ;
    DescribeResourceLogFieldConfigRequest& operator=(DescribeResourceLogFieldConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryType_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->resource_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr; };
    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline string deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
    inline DescribeResourceLogFieldConfigRequest& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeResourceLogFieldConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeResourceLogFieldConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeResourceLogFieldConfigRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeResourceLogFieldConfigRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deliveryType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resource_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
