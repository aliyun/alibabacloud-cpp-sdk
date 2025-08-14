// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTCENTERRESOURCERESPONSEBODYCOSTCENTERRESOURCEDTOLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTCENTERRESOURCERESPONSEBODYCOSTCENTERRESOURCEDTOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryCostCenterResourceResponseBodyCostCenterResourceDtoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& obj) { 
      DARABONBA_PTR_TO_JSON(ApportionItemCode, apportionItemCode_);
      DARABONBA_PTR_TO_JSON(ApportionItemName, apportionItemName_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_TO_JSON(CostCenterCode, costCenterCode_);
      DARABONBA_PTR_TO_JSON(CostCenterCreateTime, costCenterCreateTime_);
      DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_TO_JSON(CostCenterName, costCenterName_);
      DARABONBA_PTR_TO_JSON(CostCenterUpdateTime, costCenterUpdateTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_TO_JSON(OwnerAccountName, ownerAccountName_);
      DARABONBA_PTR_TO_JSON(ParentCostCenterId, parentCostCenterId_);
      DARABONBA_PTR_TO_JSON(PipCode, pipCode_);
      DARABONBA_PTR_TO_JSON(PipName, pipName_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceNick, resourceNick_);
      DARABONBA_PTR_TO_JSON(ResourceSource, resourceSource_);
      DARABONBA_PTR_TO_JSON(ResourceTag, resourceTag_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceUpdateTime, resourceUpdateTime_);
      DARABONBA_PTR_TO_JSON(ResourceUserId, resourceUserId_);
      DARABONBA_PTR_TO_JSON(ResourceUserName, resourceUserName_);
      DARABONBA_PTR_TO_JSON(RootCostCenterId, rootCostCenterId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApportionItemCode, apportionItemCode_);
      DARABONBA_PTR_FROM_JSON(ApportionItemName, apportionItemName_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_FROM_JSON(CostCenterCode, costCenterCode_);
      DARABONBA_PTR_FROM_JSON(CostCenterCreateTime, costCenterCreateTime_);
      DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_FROM_JSON(CostCenterName, costCenterName_);
      DARABONBA_PTR_FROM_JSON(CostCenterUpdateTime, costCenterUpdateTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountName, ownerAccountName_);
      DARABONBA_PTR_FROM_JSON(ParentCostCenterId, parentCostCenterId_);
      DARABONBA_PTR_FROM_JSON(PipCode, pipCode_);
      DARABONBA_PTR_FROM_JSON(PipName, pipName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceNick, resourceNick_);
      DARABONBA_PTR_FROM_JSON(ResourceSource, resourceSource_);
      DARABONBA_PTR_FROM_JSON(ResourceTag, resourceTag_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceUpdateTime, resourceUpdateTime_);
      DARABONBA_PTR_FROM_JSON(ResourceUserId, resourceUserId_);
      DARABONBA_PTR_FROM_JSON(ResourceUserName, resourceUserName_);
      DARABONBA_PTR_FROM_JSON(RootCostCenterId, rootCostCenterId_);
    };
    QueryCostCenterResourceResponseBodyCostCenterResourceDtoList() = default ;
    QueryCostCenterResourceResponseBodyCostCenterResourceDtoList(const QueryCostCenterResourceResponseBodyCostCenterResourceDtoList &) = default ;
    QueryCostCenterResourceResponseBodyCostCenterResourceDtoList(QueryCostCenterResourceResponseBodyCostCenterResourceDtoList &&) = default ;
    QueryCostCenterResourceResponseBodyCostCenterResourceDtoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostCenterResourceResponseBodyCostCenterResourceDtoList() = default ;
    QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& operator=(const QueryCostCenterResourceResponseBodyCostCenterResourceDtoList &) = default ;
    QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& operator=(QueryCostCenterResourceResponseBodyCostCenterResourceDtoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apportionItemCode_ != nullptr
        && this->apportionItemName_ != nullptr && this->commodityCode_ != nullptr && this->commodityName_ != nullptr && this->costCenterCode_ != nullptr && this->costCenterCreateTime_ != nullptr
        && this->costCenterId_ != nullptr && this->costCenterName_ != nullptr && this->costCenterUpdateTime_ != nullptr && this->instanceId_ != nullptr && this->ownerAccountId_ != nullptr
        && this->ownerAccountName_ != nullptr && this->parentCostCenterId_ != nullptr && this->pipCode_ != nullptr && this->pipName_ != nullptr && this->resourceGroup_ != nullptr
        && this->resourceId_ != nullptr && this->resourceNick_ != nullptr && this->resourceSource_ != nullptr && this->resourceTag_ != nullptr && this->resourceType_ != nullptr
        && this->resourceUpdateTime_ != nullptr && this->resourceUserId_ != nullptr && this->resourceUserName_ != nullptr && this->rootCostCenterId_ != nullptr; };
    // apportionItemCode Field Functions 
    bool hasApportionItemCode() const { return this->apportionItemCode_ != nullptr;};
    void deleteApportionItemCode() { this->apportionItemCode_ = nullptr;};
    inline string apportionItemCode() const { DARABONBA_PTR_GET_DEFAULT(apportionItemCode_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setApportionItemCode(string apportionItemCode) { DARABONBA_PTR_SET_VALUE(apportionItemCode_, apportionItemCode) };


    // apportionItemName Field Functions 
    bool hasApportionItemName() const { return this->apportionItemName_ != nullptr;};
    void deleteApportionItemName() { this->apportionItemName_ = nullptr;};
    inline string apportionItemName() const { DARABONBA_PTR_GET_DEFAULT(apportionItemName_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setApportionItemName(string apportionItemName) { DARABONBA_PTR_SET_VALUE(apportionItemName_, apportionItemName) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // commodityName Field Functions 
    bool hasCommodityName() const { return this->commodityName_ != nullptr;};
    void deleteCommodityName() { this->commodityName_ = nullptr;};
    inline string commodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


    // costCenterCode Field Functions 
    bool hasCostCenterCode() const { return this->costCenterCode_ != nullptr;};
    void deleteCostCenterCode() { this->costCenterCode_ = nullptr;};
    inline string costCenterCode() const { DARABONBA_PTR_GET_DEFAULT(costCenterCode_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setCostCenterCode(string costCenterCode) { DARABONBA_PTR_SET_VALUE(costCenterCode_, costCenterCode) };


    // costCenterCreateTime Field Functions 
    bool hasCostCenterCreateTime() const { return this->costCenterCreateTime_ != nullptr;};
    void deleteCostCenterCreateTime() { this->costCenterCreateTime_ = nullptr;};
    inline string costCenterCreateTime() const { DARABONBA_PTR_GET_DEFAULT(costCenterCreateTime_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setCostCenterCreateTime(string costCenterCreateTime) { DARABONBA_PTR_SET_VALUE(costCenterCreateTime_, costCenterCreateTime) };


    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // costCenterUpdateTime Field Functions 
    bool hasCostCenterUpdateTime() const { return this->costCenterUpdateTime_ != nullptr;};
    void deleteCostCenterUpdateTime() { this->costCenterUpdateTime_ = nullptr;};
    inline string costCenterUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(costCenterUpdateTime_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setCostCenterUpdateTime(string costCenterUpdateTime) { DARABONBA_PTR_SET_VALUE(costCenterUpdateTime_, costCenterUpdateTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t ownerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


    // ownerAccountName Field Functions 
    bool hasOwnerAccountName() const { return this->ownerAccountName_ != nullptr;};
    void deleteOwnerAccountName() { this->ownerAccountName_ = nullptr;};
    inline string ownerAccountName() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountName_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setOwnerAccountName(string ownerAccountName) { DARABONBA_PTR_SET_VALUE(ownerAccountName_, ownerAccountName) };


    // parentCostCenterId Field Functions 
    bool hasParentCostCenterId() const { return this->parentCostCenterId_ != nullptr;};
    void deleteParentCostCenterId() { this->parentCostCenterId_ = nullptr;};
    inline int64_t parentCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(parentCostCenterId_, 0L) };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setParentCostCenterId(int64_t parentCostCenterId) { DARABONBA_PTR_SET_VALUE(parentCostCenterId_, parentCostCenterId) };


    // pipCode Field Functions 
    bool hasPipCode() const { return this->pipCode_ != nullptr;};
    void deletePipCode() { this->pipCode_ = nullptr;};
    inline string pipCode() const { DARABONBA_PTR_GET_DEFAULT(pipCode_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setPipCode(string pipCode) { DARABONBA_PTR_SET_VALUE(pipCode_, pipCode) };


    // pipName Field Functions 
    bool hasPipName() const { return this->pipName_ != nullptr;};
    void deletePipName() { this->pipName_ = nullptr;};
    inline string pipName() const { DARABONBA_PTR_GET_DEFAULT(pipName_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setPipName(string pipName) { DARABONBA_PTR_SET_VALUE(pipName_, pipName) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceNick Field Functions 
    bool hasResourceNick() const { return this->resourceNick_ != nullptr;};
    void deleteResourceNick() { this->resourceNick_ = nullptr;};
    inline string resourceNick() const { DARABONBA_PTR_GET_DEFAULT(resourceNick_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setResourceNick(string resourceNick) { DARABONBA_PTR_SET_VALUE(resourceNick_, resourceNick) };


    // resourceSource Field Functions 
    bool hasResourceSource() const { return this->resourceSource_ != nullptr;};
    void deleteResourceSource() { this->resourceSource_ = nullptr;};
    inline string resourceSource() const { DARABONBA_PTR_GET_DEFAULT(resourceSource_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setResourceSource(string resourceSource) { DARABONBA_PTR_SET_VALUE(resourceSource_, resourceSource) };


    // resourceTag Field Functions 
    bool hasResourceTag() const { return this->resourceTag_ != nullptr;};
    void deleteResourceTag() { this->resourceTag_ = nullptr;};
    inline string resourceTag() const { DARABONBA_PTR_GET_DEFAULT(resourceTag_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setResourceTag(string resourceTag) { DARABONBA_PTR_SET_VALUE(resourceTag_, resourceTag) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceUpdateTime Field Functions 
    bool hasResourceUpdateTime() const { return this->resourceUpdateTime_ != nullptr;};
    void deleteResourceUpdateTime() { this->resourceUpdateTime_ = nullptr;};
    inline string resourceUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceUpdateTime_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setResourceUpdateTime(string resourceUpdateTime) { DARABONBA_PTR_SET_VALUE(resourceUpdateTime_, resourceUpdateTime) };


    // resourceUserId Field Functions 
    bool hasResourceUserId() const { return this->resourceUserId_ != nullptr;};
    void deleteResourceUserId() { this->resourceUserId_ = nullptr;};
    inline int64_t resourceUserId() const { DARABONBA_PTR_GET_DEFAULT(resourceUserId_, 0L) };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setResourceUserId(int64_t resourceUserId) { DARABONBA_PTR_SET_VALUE(resourceUserId_, resourceUserId) };


    // resourceUserName Field Functions 
    bool hasResourceUserName() const { return this->resourceUserName_ != nullptr;};
    void deleteResourceUserName() { this->resourceUserName_ = nullptr;};
    inline string resourceUserName() const { DARABONBA_PTR_GET_DEFAULT(resourceUserName_, "") };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setResourceUserName(string resourceUserName) { DARABONBA_PTR_SET_VALUE(resourceUserName_, resourceUserName) };


    // rootCostCenterId Field Functions 
    bool hasRootCostCenterId() const { return this->rootCostCenterId_ != nullptr;};
    void deleteRootCostCenterId() { this->rootCostCenterId_ = nullptr;};
    inline int64_t rootCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(rootCostCenterId_, 0L) };
    inline QueryCostCenterResourceResponseBodyCostCenterResourceDtoList& setRootCostCenterId(int64_t rootCostCenterId) { DARABONBA_PTR_SET_VALUE(rootCostCenterId_, rootCostCenterId) };


  protected:
    std::shared_ptr<string> apportionItemCode_ = nullptr;
    std::shared_ptr<string> apportionItemName_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> commodityName_ = nullptr;
    std::shared_ptr<string> costCenterCode_ = nullptr;
    std::shared_ptr<string> costCenterCreateTime_ = nullptr;
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<string> costCenterUpdateTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerAccountId_ = nullptr;
    std::shared_ptr<string> ownerAccountName_ = nullptr;
    std::shared_ptr<int64_t> parentCostCenterId_ = nullptr;
    std::shared_ptr<string> pipCode_ = nullptr;
    std::shared_ptr<string> pipName_ = nullptr;
    std::shared_ptr<string> resourceGroup_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceNick_ = nullptr;
    std::shared_ptr<string> resourceSource_ = nullptr;
    std::shared_ptr<string> resourceTag_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> resourceUpdateTime_ = nullptr;
    std::shared_ptr<int64_t> resourceUserId_ = nullptr;
    std::shared_ptr<string> resourceUserName_ = nullptr;
    std::shared_ptr<int64_t> rootCostCenterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
