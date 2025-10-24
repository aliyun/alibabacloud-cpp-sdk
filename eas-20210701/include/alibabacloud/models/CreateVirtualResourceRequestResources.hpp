// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRTUALRESOURCEREQUESTRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRTUALRESOURCEREQUESTRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateVirtualResourceRequestResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirtualResourceRequestResources& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirtualResourceRequestResources& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
    };
    CreateVirtualResourceRequestResources() = default ;
    CreateVirtualResourceRequestResources(const CreateVirtualResourceRequestResources &) = default ;
    CreateVirtualResourceRequestResources(CreateVirtualResourceRequestResources &&) = default ;
    CreateVirtualResourceRequestResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirtualResourceRequestResources() = default ;
    CreateVirtualResourceRequestResources& operator=(const CreateVirtualResourceRequestResources &) = default ;
    CreateVirtualResourceRequestResources& operator=(CreateVirtualResourceRequestResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr
        && return this->priority_ == nullptr && return this->quotaId_ == nullptr && return this->region_ == nullptr && return this->resourceId_ == nullptr && return this->spotPriceLimit_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateVirtualResourceRequestResources& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateVirtualResourceRequestResources& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline CreateVirtualResourceRequestResources& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateVirtualResourceRequestResources& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateVirtualResourceRequestResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float spotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline CreateVirtualResourceRequestResources& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


  protected:
    // The instance type of the public resource group.
    // 
    // >  You must specify one and only one of the InstanceType, ResourceId, and QuotaId parameters.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The priority of resource scheduling. A greater number indicates a higher priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the Lingjun resource quota.
    // 
    // >  You must specify one and only one of the InstanceType, ResourceId, and QuotaId parameters.
    std::shared_ptr<string> quotaId_ = nullptr;
    // The region in which the resource resides.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the dedicated resource group. For information about how to obtain the ID of a dedicated resource group, see [ListResources](https://help.aliyun.com/document_detail/412133.html).
    // 
    // >  You must specify one and only one of the InstanceType, ResourceId, and QuotaId parameters.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The maximum price of preemptible instances in a public resource group.
    // 
    // >  If you leave this parameter empty, preemptible instances are not used.
    std::shared_ptr<float> spotPriceLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
