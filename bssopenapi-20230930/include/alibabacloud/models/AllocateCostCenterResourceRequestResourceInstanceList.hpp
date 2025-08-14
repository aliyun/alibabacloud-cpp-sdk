// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATECOSTCENTERRESOURCEREQUESTRESOURCEINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATECOSTCENTERRESOURCEREQUESTRESOURCEINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class AllocateCostCenterResourceRequestResourceInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateCostCenterResourceRequestResourceInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(ApportionCode, apportionCode_);
      DARABONBA_PTR_TO_JSON(ApportionName, apportionName_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PipCode, pipCode_);
      DARABONBA_PTR_TO_JSON(RelatedResources, relatedResources_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceNick, resourceNick_);
      DARABONBA_PTR_TO_JSON(ResourceSource, resourceSource_);
      DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_TO_JSON(ResourceTag, resourceTag_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceUserId, resourceUserId_);
      DARABONBA_PTR_TO_JSON(ResourceUserName, resourceUserName_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateCostCenterResourceRequestResourceInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApportionCode, apportionCode_);
      DARABONBA_PTR_FROM_JSON(ApportionName, apportionName_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PipCode, pipCode_);
      DARABONBA_PTR_FROM_JSON(RelatedResources, relatedResources_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceNick, resourceNick_);
      DARABONBA_PTR_FROM_JSON(ResourceSource, resourceSource_);
      DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceTag, resourceTag_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceUserId, resourceUserId_);
      DARABONBA_PTR_FROM_JSON(ResourceUserName, resourceUserName_);
    };
    AllocateCostCenterResourceRequestResourceInstanceList() = default ;
    AllocateCostCenterResourceRequestResourceInstanceList(const AllocateCostCenterResourceRequestResourceInstanceList &) = default ;
    AllocateCostCenterResourceRequestResourceInstanceList(AllocateCostCenterResourceRequestResourceInstanceList &&) = default ;
    AllocateCostCenterResourceRequestResourceInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateCostCenterResourceRequestResourceInstanceList() = default ;
    AllocateCostCenterResourceRequestResourceInstanceList& operator=(const AllocateCostCenterResourceRequestResourceInstanceList &) = default ;
    AllocateCostCenterResourceRequestResourceInstanceList& operator=(AllocateCostCenterResourceRequestResourceInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apportionCode_ != nullptr
        && this->apportionName_ != nullptr && this->commodityCode_ != nullptr && this->commodityName_ != nullptr && this->instanceId_ != nullptr && this->pipCode_ != nullptr
        && this->relatedResources_ != nullptr && this->resourceGroup_ != nullptr && this->resourceId_ != nullptr && this->resourceNick_ != nullptr && this->resourceSource_ != nullptr
        && this->resourceStatus_ != nullptr && this->resourceTag_ != nullptr && this->resourceType_ != nullptr && this->resourceUserId_ != nullptr && this->resourceUserName_ != nullptr; };
    // apportionCode Field Functions 
    bool hasApportionCode() const { return this->apportionCode_ != nullptr;};
    void deleteApportionCode() { this->apportionCode_ = nullptr;};
    inline string apportionCode() const { DARABONBA_PTR_GET_DEFAULT(apportionCode_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setApportionCode(string apportionCode) { DARABONBA_PTR_SET_VALUE(apportionCode_, apportionCode) };


    // apportionName Field Functions 
    bool hasApportionName() const { return this->apportionName_ != nullptr;};
    void deleteApportionName() { this->apportionName_ = nullptr;};
    inline string apportionName() const { DARABONBA_PTR_GET_DEFAULT(apportionName_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setApportionName(string apportionName) { DARABONBA_PTR_SET_VALUE(apportionName_, apportionName) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // commodityName Field Functions 
    bool hasCommodityName() const { return this->commodityName_ != nullptr;};
    void deleteCommodityName() { this->commodityName_ = nullptr;};
    inline string commodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pipCode Field Functions 
    bool hasPipCode() const { return this->pipCode_ != nullptr;};
    void deletePipCode() { this->pipCode_ = nullptr;};
    inline string pipCode() const { DARABONBA_PTR_GET_DEFAULT(pipCode_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setPipCode(string pipCode) { DARABONBA_PTR_SET_VALUE(pipCode_, pipCode) };


    // relatedResources Field Functions 
    bool hasRelatedResources() const { return this->relatedResources_ != nullptr;};
    void deleteRelatedResources() { this->relatedResources_ = nullptr;};
    inline string relatedResources() const { DARABONBA_PTR_GET_DEFAULT(relatedResources_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setRelatedResources(string relatedResources) { DARABONBA_PTR_SET_VALUE(relatedResources_, relatedResources) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceNick Field Functions 
    bool hasResourceNick() const { return this->resourceNick_ != nullptr;};
    void deleteResourceNick() { this->resourceNick_ = nullptr;};
    inline string resourceNick() const { DARABONBA_PTR_GET_DEFAULT(resourceNick_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setResourceNick(string resourceNick) { DARABONBA_PTR_SET_VALUE(resourceNick_, resourceNick) };


    // resourceSource Field Functions 
    bool hasResourceSource() const { return this->resourceSource_ != nullptr;};
    void deleteResourceSource() { this->resourceSource_ = nullptr;};
    inline string resourceSource() const { DARABONBA_PTR_GET_DEFAULT(resourceSource_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setResourceSource(string resourceSource) { DARABONBA_PTR_SET_VALUE(resourceSource_, resourceSource) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline string resourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


    // resourceTag Field Functions 
    bool hasResourceTag() const { return this->resourceTag_ != nullptr;};
    void deleteResourceTag() { this->resourceTag_ = nullptr;};
    inline string resourceTag() const { DARABONBA_PTR_GET_DEFAULT(resourceTag_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setResourceTag(string resourceTag) { DARABONBA_PTR_SET_VALUE(resourceTag_, resourceTag) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceUserId Field Functions 
    bool hasResourceUserId() const { return this->resourceUserId_ != nullptr;};
    void deleteResourceUserId() { this->resourceUserId_ = nullptr;};
    inline int64_t resourceUserId() const { DARABONBA_PTR_GET_DEFAULT(resourceUserId_, 0L) };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setResourceUserId(int64_t resourceUserId) { DARABONBA_PTR_SET_VALUE(resourceUserId_, resourceUserId) };


    // resourceUserName Field Functions 
    bool hasResourceUserName() const { return this->resourceUserName_ != nullptr;};
    void deleteResourceUserName() { this->resourceUserName_ = nullptr;};
    inline string resourceUserName() const { DARABONBA_PTR_GET_DEFAULT(resourceUserName_, "") };
    inline AllocateCostCenterResourceRequestResourceInstanceList& setResourceUserName(string resourceUserName) { DARABONBA_PTR_SET_VALUE(resourceUserName_, resourceUserName) };


  protected:
    std::shared_ptr<string> apportionCode_ = nullptr;
    std::shared_ptr<string> apportionName_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> commodityName_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> pipCode_ = nullptr;
    std::shared_ptr<string> relatedResources_ = nullptr;
    std::shared_ptr<string> resourceGroup_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceNick_ = nullptr;
    std::shared_ptr<string> resourceSource_ = nullptr;
    std::shared_ptr<string> resourceStatus_ = nullptr;
    std::shared_ptr<string> resourceTag_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<int64_t> resourceUserId_ = nullptr;
    std::shared_ptr<string> resourceUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
