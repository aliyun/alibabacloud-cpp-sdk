// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTCENTERRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTCENTERRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryCostCenterResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostCenterResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterResourceDtoList, costCenterResourceDtoList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostCenterResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterResourceDtoList, costCenterResourceDtoList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryCostCenterResourceResponseBody() = default ;
    QueryCostCenterResourceResponseBody(const QueryCostCenterResourceResponseBody &) = default ;
    QueryCostCenterResourceResponseBody(QueryCostCenterResourceResponseBody &&) = default ;
    QueryCostCenterResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostCenterResourceResponseBody() = default ;
    QueryCostCenterResourceResponseBody& operator=(const QueryCostCenterResourceResponseBody &) = default ;
    QueryCostCenterResourceResponseBody& operator=(QueryCostCenterResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CostCenterResourceDtoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CostCenterResourceDtoList& obj) { 
        DARABONBA_PTR_TO_JSON(AddStrategy, addStrategy_);
        DARABONBA_PTR_TO_JSON(AddStrategyName, addStrategyName_);
        DARABONBA_PTR_TO_JSON(ApplicablePeriodNum, applicablePeriodNum_);
        DARABONBA_PTR_TO_JSON(ApportionItemCode, apportionItemCode_);
        DARABONBA_PTR_TO_JSON(ApportionItemName, apportionItemName_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_TO_JSON(CostCenterCode, costCenterCode_);
        DARABONBA_PTR_TO_JSON(CostCenterCreateTime, costCenterCreateTime_);
        DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
        DARABONBA_PTR_TO_JSON(CostCenterName, costCenterName_);
        DARABONBA_PTR_TO_JSON(CostCenterUpdateTime, costCenterUpdateTime_);
        DARABONBA_PTR_TO_JSON(FinanceUnitRuleVersion, financeUnitRuleVersion_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MasterCommodityCode, masterCommodityCode_);
        DARABONBA_PTR_TO_JSON(MasterInstanceId, masterInstanceId_);
        DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
        DARABONBA_PTR_TO_JSON(OwnerAccountName, ownerAccountName_);
        DARABONBA_PTR_TO_JSON(ParentCostCenterId, parentCostCenterId_);
        DARABONBA_PTR_TO_JSON(PipCode, pipCode_);
        DARABONBA_PTR_TO_JSON(PipName, pipName_);
        DARABONBA_PTR_TO_JSON(RecentBillingMonth, recentBillingMonth_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
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
        DARABONBA_PTR_TO_JSON(StartBillingMonth, startBillingMonth_);
      };
      friend void from_json(const Darabonba::Json& j, CostCenterResourceDtoList& obj) { 
        DARABONBA_PTR_FROM_JSON(AddStrategy, addStrategy_);
        DARABONBA_PTR_FROM_JSON(AddStrategyName, addStrategyName_);
        DARABONBA_PTR_FROM_JSON(ApplicablePeriodNum, applicablePeriodNum_);
        DARABONBA_PTR_FROM_JSON(ApportionItemCode, apportionItemCode_);
        DARABONBA_PTR_FROM_JSON(ApportionItemName, apportionItemName_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_FROM_JSON(CostCenterCode, costCenterCode_);
        DARABONBA_PTR_FROM_JSON(CostCenterCreateTime, costCenterCreateTime_);
        DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
        DARABONBA_PTR_FROM_JSON(CostCenterName, costCenterName_);
        DARABONBA_PTR_FROM_JSON(CostCenterUpdateTime, costCenterUpdateTime_);
        DARABONBA_PTR_FROM_JSON(FinanceUnitRuleVersion, financeUnitRuleVersion_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MasterCommodityCode, masterCommodityCode_);
        DARABONBA_PTR_FROM_JSON(MasterInstanceId, masterInstanceId_);
        DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
        DARABONBA_PTR_FROM_JSON(OwnerAccountName, ownerAccountName_);
        DARABONBA_PTR_FROM_JSON(ParentCostCenterId, parentCostCenterId_);
        DARABONBA_PTR_FROM_JSON(PipCode, pipCode_);
        DARABONBA_PTR_FROM_JSON(PipName, pipName_);
        DARABONBA_PTR_FROM_JSON(RecentBillingMonth, recentBillingMonth_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
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
        DARABONBA_PTR_FROM_JSON(StartBillingMonth, startBillingMonth_);
      };
      CostCenterResourceDtoList() = default ;
      CostCenterResourceDtoList(const CostCenterResourceDtoList &) = default ;
      CostCenterResourceDtoList(CostCenterResourceDtoList &&) = default ;
      CostCenterResourceDtoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CostCenterResourceDtoList() = default ;
      CostCenterResourceDtoList& operator=(const CostCenterResourceDtoList &) = default ;
      CostCenterResourceDtoList& operator=(CostCenterResourceDtoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addStrategy_ == nullptr
        && this->addStrategyName_ == nullptr && this->applicablePeriodNum_ == nullptr && this->apportionItemCode_ == nullptr && this->apportionItemName_ == nullptr && this->commodityCode_ == nullptr
        && this->commodityName_ == nullptr && this->costCenterCode_ == nullptr && this->costCenterCreateTime_ == nullptr && this->costCenterId_ == nullptr && this->costCenterName_ == nullptr
        && this->costCenterUpdateTime_ == nullptr && this->financeUnitRuleVersion_ == nullptr && this->instanceId_ == nullptr && this->masterCommodityCode_ == nullptr && this->masterInstanceId_ == nullptr
        && this->ownerAccountId_ == nullptr && this->ownerAccountName_ == nullptr && this->parentCostCenterId_ == nullptr && this->pipCode_ == nullptr && this->pipName_ == nullptr
        && this->recentBillingMonth_ == nullptr && this->regionName_ == nullptr && this->regionNo_ == nullptr && this->resourceGroup_ == nullptr && this->resourceId_ == nullptr
        && this->resourceNick_ == nullptr && this->resourceSource_ == nullptr && this->resourceTag_ == nullptr && this->resourceType_ == nullptr && this->resourceUpdateTime_ == nullptr
        && this->resourceUserId_ == nullptr && this->resourceUserName_ == nullptr && this->rootCostCenterId_ == nullptr && this->startBillingMonth_ == nullptr; };
      // addStrategy Field Functions 
      bool hasAddStrategy() const { return this->addStrategy_ != nullptr;};
      void deleteAddStrategy() { this->addStrategy_ = nullptr;};
      inline string getAddStrategy() const { DARABONBA_PTR_GET_DEFAULT(addStrategy_, "") };
      inline CostCenterResourceDtoList& setAddStrategy(string addStrategy) { DARABONBA_PTR_SET_VALUE(addStrategy_, addStrategy) };


      // addStrategyName Field Functions 
      bool hasAddStrategyName() const { return this->addStrategyName_ != nullptr;};
      void deleteAddStrategyName() { this->addStrategyName_ = nullptr;};
      inline string getAddStrategyName() const { DARABONBA_PTR_GET_DEFAULT(addStrategyName_, "") };
      inline CostCenterResourceDtoList& setAddStrategyName(string addStrategyName) { DARABONBA_PTR_SET_VALUE(addStrategyName_, addStrategyName) };


      // applicablePeriodNum Field Functions 
      bool hasApplicablePeriodNum() const { return this->applicablePeriodNum_ != nullptr;};
      void deleteApplicablePeriodNum() { this->applicablePeriodNum_ = nullptr;};
      inline int64_t getApplicablePeriodNum() const { DARABONBA_PTR_GET_DEFAULT(applicablePeriodNum_, 0L) };
      inline CostCenterResourceDtoList& setApplicablePeriodNum(int64_t applicablePeriodNum) { DARABONBA_PTR_SET_VALUE(applicablePeriodNum_, applicablePeriodNum) };


      // apportionItemCode Field Functions 
      bool hasApportionItemCode() const { return this->apportionItemCode_ != nullptr;};
      void deleteApportionItemCode() { this->apportionItemCode_ = nullptr;};
      inline string getApportionItemCode() const { DARABONBA_PTR_GET_DEFAULT(apportionItemCode_, "") };
      inline CostCenterResourceDtoList& setApportionItemCode(string apportionItemCode) { DARABONBA_PTR_SET_VALUE(apportionItemCode_, apportionItemCode) };


      // apportionItemName Field Functions 
      bool hasApportionItemName() const { return this->apportionItemName_ != nullptr;};
      void deleteApportionItemName() { this->apportionItemName_ = nullptr;};
      inline string getApportionItemName() const { DARABONBA_PTR_GET_DEFAULT(apportionItemName_, "") };
      inline CostCenterResourceDtoList& setApportionItemName(string apportionItemName) { DARABONBA_PTR_SET_VALUE(apportionItemName_, apportionItemName) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline CostCenterResourceDtoList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // commodityName Field Functions 
      bool hasCommodityName() const { return this->commodityName_ != nullptr;};
      void deleteCommodityName() { this->commodityName_ = nullptr;};
      inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
      inline CostCenterResourceDtoList& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


      // costCenterCode Field Functions 
      bool hasCostCenterCode() const { return this->costCenterCode_ != nullptr;};
      void deleteCostCenterCode() { this->costCenterCode_ = nullptr;};
      inline string getCostCenterCode() const { DARABONBA_PTR_GET_DEFAULT(costCenterCode_, "") };
      inline CostCenterResourceDtoList& setCostCenterCode(string costCenterCode) { DARABONBA_PTR_SET_VALUE(costCenterCode_, costCenterCode) };


      // costCenterCreateTime Field Functions 
      bool hasCostCenterCreateTime() const { return this->costCenterCreateTime_ != nullptr;};
      void deleteCostCenterCreateTime() { this->costCenterCreateTime_ = nullptr;};
      inline string getCostCenterCreateTime() const { DARABONBA_PTR_GET_DEFAULT(costCenterCreateTime_, "") };
      inline CostCenterResourceDtoList& setCostCenterCreateTime(string costCenterCreateTime) { DARABONBA_PTR_SET_VALUE(costCenterCreateTime_, costCenterCreateTime) };


      // costCenterId Field Functions 
      bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
      void deleteCostCenterId() { this->costCenterId_ = nullptr;};
      inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
      inline CostCenterResourceDtoList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


      // costCenterName Field Functions 
      bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
      void deleteCostCenterName() { this->costCenterName_ = nullptr;};
      inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
      inline CostCenterResourceDtoList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


      // costCenterUpdateTime Field Functions 
      bool hasCostCenterUpdateTime() const { return this->costCenterUpdateTime_ != nullptr;};
      void deleteCostCenterUpdateTime() { this->costCenterUpdateTime_ = nullptr;};
      inline string getCostCenterUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(costCenterUpdateTime_, "") };
      inline CostCenterResourceDtoList& setCostCenterUpdateTime(string costCenterUpdateTime) { DARABONBA_PTR_SET_VALUE(costCenterUpdateTime_, costCenterUpdateTime) };


      // financeUnitRuleVersion Field Functions 
      bool hasFinanceUnitRuleVersion() const { return this->financeUnitRuleVersion_ != nullptr;};
      void deleteFinanceUnitRuleVersion() { this->financeUnitRuleVersion_ = nullptr;};
      inline int64_t getFinanceUnitRuleVersion() const { DARABONBA_PTR_GET_DEFAULT(financeUnitRuleVersion_, 0L) };
      inline CostCenterResourceDtoList& setFinanceUnitRuleVersion(int64_t financeUnitRuleVersion) { DARABONBA_PTR_SET_VALUE(financeUnitRuleVersion_, financeUnitRuleVersion) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CostCenterResourceDtoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // masterCommodityCode Field Functions 
      bool hasMasterCommodityCode() const { return this->masterCommodityCode_ != nullptr;};
      void deleteMasterCommodityCode() { this->masterCommodityCode_ = nullptr;};
      inline string getMasterCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(masterCommodityCode_, "") };
      inline CostCenterResourceDtoList& setMasterCommodityCode(string masterCommodityCode) { DARABONBA_PTR_SET_VALUE(masterCommodityCode_, masterCommodityCode) };


      // masterInstanceId Field Functions 
      bool hasMasterInstanceId() const { return this->masterInstanceId_ != nullptr;};
      void deleteMasterInstanceId() { this->masterInstanceId_ = nullptr;};
      inline string getMasterInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceId_, "") };
      inline CostCenterResourceDtoList& setMasterInstanceId(string masterInstanceId) { DARABONBA_PTR_SET_VALUE(masterInstanceId_, masterInstanceId) };


      // ownerAccountId Field Functions 
      bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
      void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
      inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
      inline CostCenterResourceDtoList& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


      // ownerAccountName Field Functions 
      bool hasOwnerAccountName() const { return this->ownerAccountName_ != nullptr;};
      void deleteOwnerAccountName() { this->ownerAccountName_ = nullptr;};
      inline string getOwnerAccountName() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountName_, "") };
      inline CostCenterResourceDtoList& setOwnerAccountName(string ownerAccountName) { DARABONBA_PTR_SET_VALUE(ownerAccountName_, ownerAccountName) };


      // parentCostCenterId Field Functions 
      bool hasParentCostCenterId() const { return this->parentCostCenterId_ != nullptr;};
      void deleteParentCostCenterId() { this->parentCostCenterId_ = nullptr;};
      inline int64_t getParentCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(parentCostCenterId_, 0L) };
      inline CostCenterResourceDtoList& setParentCostCenterId(int64_t parentCostCenterId) { DARABONBA_PTR_SET_VALUE(parentCostCenterId_, parentCostCenterId) };


      // pipCode Field Functions 
      bool hasPipCode() const { return this->pipCode_ != nullptr;};
      void deletePipCode() { this->pipCode_ = nullptr;};
      inline string getPipCode() const { DARABONBA_PTR_GET_DEFAULT(pipCode_, "") };
      inline CostCenterResourceDtoList& setPipCode(string pipCode) { DARABONBA_PTR_SET_VALUE(pipCode_, pipCode) };


      // pipName Field Functions 
      bool hasPipName() const { return this->pipName_ != nullptr;};
      void deletePipName() { this->pipName_ = nullptr;};
      inline string getPipName() const { DARABONBA_PTR_GET_DEFAULT(pipName_, "") };
      inline CostCenterResourceDtoList& setPipName(string pipName) { DARABONBA_PTR_SET_VALUE(pipName_, pipName) };


      // recentBillingMonth Field Functions 
      bool hasRecentBillingMonth() const { return this->recentBillingMonth_ != nullptr;};
      void deleteRecentBillingMonth() { this->recentBillingMonth_ = nullptr;};
      inline int64_t getRecentBillingMonth() const { DARABONBA_PTR_GET_DEFAULT(recentBillingMonth_, 0L) };
      inline CostCenterResourceDtoList& setRecentBillingMonth(int64_t recentBillingMonth) { DARABONBA_PTR_SET_VALUE(recentBillingMonth_, recentBillingMonth) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline CostCenterResourceDtoList& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline CostCenterResourceDtoList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // resourceGroup Field Functions 
      bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
      void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
      inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
      inline CostCenterResourceDtoList& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline CostCenterResourceDtoList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceNick Field Functions 
      bool hasResourceNick() const { return this->resourceNick_ != nullptr;};
      void deleteResourceNick() { this->resourceNick_ = nullptr;};
      inline string getResourceNick() const { DARABONBA_PTR_GET_DEFAULT(resourceNick_, "") };
      inline CostCenterResourceDtoList& setResourceNick(string resourceNick) { DARABONBA_PTR_SET_VALUE(resourceNick_, resourceNick) };


      // resourceSource Field Functions 
      bool hasResourceSource() const { return this->resourceSource_ != nullptr;};
      void deleteResourceSource() { this->resourceSource_ = nullptr;};
      inline string getResourceSource() const { DARABONBA_PTR_GET_DEFAULT(resourceSource_, "") };
      inline CostCenterResourceDtoList& setResourceSource(string resourceSource) { DARABONBA_PTR_SET_VALUE(resourceSource_, resourceSource) };


      // resourceTag Field Functions 
      bool hasResourceTag() const { return this->resourceTag_ != nullptr;};
      void deleteResourceTag() { this->resourceTag_ = nullptr;};
      inline string getResourceTag() const { DARABONBA_PTR_GET_DEFAULT(resourceTag_, "") };
      inline CostCenterResourceDtoList& setResourceTag(string resourceTag) { DARABONBA_PTR_SET_VALUE(resourceTag_, resourceTag) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline CostCenterResourceDtoList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // resourceUpdateTime Field Functions 
      bool hasResourceUpdateTime() const { return this->resourceUpdateTime_ != nullptr;};
      void deleteResourceUpdateTime() { this->resourceUpdateTime_ = nullptr;};
      inline string getResourceUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceUpdateTime_, "") };
      inline CostCenterResourceDtoList& setResourceUpdateTime(string resourceUpdateTime) { DARABONBA_PTR_SET_VALUE(resourceUpdateTime_, resourceUpdateTime) };


      // resourceUserId Field Functions 
      bool hasResourceUserId() const { return this->resourceUserId_ != nullptr;};
      void deleteResourceUserId() { this->resourceUserId_ = nullptr;};
      inline int64_t getResourceUserId() const { DARABONBA_PTR_GET_DEFAULT(resourceUserId_, 0L) };
      inline CostCenterResourceDtoList& setResourceUserId(int64_t resourceUserId) { DARABONBA_PTR_SET_VALUE(resourceUserId_, resourceUserId) };


      // resourceUserName Field Functions 
      bool hasResourceUserName() const { return this->resourceUserName_ != nullptr;};
      void deleteResourceUserName() { this->resourceUserName_ = nullptr;};
      inline string getResourceUserName() const { DARABONBA_PTR_GET_DEFAULT(resourceUserName_, "") };
      inline CostCenterResourceDtoList& setResourceUserName(string resourceUserName) { DARABONBA_PTR_SET_VALUE(resourceUserName_, resourceUserName) };


      // rootCostCenterId Field Functions 
      bool hasRootCostCenterId() const { return this->rootCostCenterId_ != nullptr;};
      void deleteRootCostCenterId() { this->rootCostCenterId_ = nullptr;};
      inline int64_t getRootCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(rootCostCenterId_, 0L) };
      inline CostCenterResourceDtoList& setRootCostCenterId(int64_t rootCostCenterId) { DARABONBA_PTR_SET_VALUE(rootCostCenterId_, rootCostCenterId) };


      // startBillingMonth Field Functions 
      bool hasStartBillingMonth() const { return this->startBillingMonth_ != nullptr;};
      void deleteStartBillingMonth() { this->startBillingMonth_ = nullptr;};
      inline int64_t getStartBillingMonth() const { DARABONBA_PTR_GET_DEFAULT(startBillingMonth_, 0L) };
      inline CostCenterResourceDtoList& setStartBillingMonth(int64_t startBillingMonth) { DARABONBA_PTR_SET_VALUE(startBillingMonth_, startBillingMonth) };


    protected:
      shared_ptr<string> addStrategy_ {};
      shared_ptr<string> addStrategyName_ {};
      shared_ptr<int64_t> applicablePeriodNum_ {};
      shared_ptr<string> apportionItemCode_ {};
      shared_ptr<string> apportionItemName_ {};
      shared_ptr<string> commodityCode_ {};
      shared_ptr<string> commodityName_ {};
      shared_ptr<string> costCenterCode_ {};
      shared_ptr<string> costCenterCreateTime_ {};
      shared_ptr<int64_t> costCenterId_ {};
      shared_ptr<string> costCenterName_ {};
      shared_ptr<string> costCenterUpdateTime_ {};
      shared_ptr<int64_t> financeUnitRuleVersion_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> masterCommodityCode_ {};
      shared_ptr<string> masterInstanceId_ {};
      shared_ptr<int64_t> ownerAccountId_ {};
      shared_ptr<string> ownerAccountName_ {};
      shared_ptr<int64_t> parentCostCenterId_ {};
      shared_ptr<string> pipCode_ {};
      shared_ptr<string> pipName_ {};
      shared_ptr<int64_t> recentBillingMonth_ {};
      shared_ptr<string> regionName_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<string> resourceGroup_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> resourceNick_ {};
      shared_ptr<string> resourceSource_ {};
      shared_ptr<string> resourceTag_ {};
      shared_ptr<string> resourceType_ {};
      shared_ptr<string> resourceUpdateTime_ {};
      shared_ptr<int64_t> resourceUserId_ {};
      shared_ptr<string> resourceUserName_ {};
      shared_ptr<int64_t> rootCostCenterId_ {};
      shared_ptr<int64_t> startBillingMonth_ {};
    };

    virtual bool empty() const override { return this->costCenterResourceDtoList_ == nullptr
        && this->maxResults_ == nullptr && this->metadata_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // costCenterResourceDtoList Field Functions 
    bool hasCostCenterResourceDtoList() const { return this->costCenterResourceDtoList_ != nullptr;};
    void deleteCostCenterResourceDtoList() { this->costCenterResourceDtoList_ = nullptr;};
    inline const vector<QueryCostCenterResourceResponseBody::CostCenterResourceDtoList> & getCostCenterResourceDtoList() const { DARABONBA_PTR_GET_CONST(costCenterResourceDtoList_, vector<QueryCostCenterResourceResponseBody::CostCenterResourceDtoList>) };
    inline vector<QueryCostCenterResourceResponseBody::CostCenterResourceDtoList> getCostCenterResourceDtoList() { DARABONBA_PTR_GET(costCenterResourceDtoList_, vector<QueryCostCenterResourceResponseBody::CostCenterResourceDtoList>) };
    inline QueryCostCenterResourceResponseBody& setCostCenterResourceDtoList(const vector<QueryCostCenterResourceResponseBody::CostCenterResourceDtoList> & costCenterResourceDtoList) { DARABONBA_PTR_SET_VALUE(costCenterResourceDtoList_, costCenterResourceDtoList) };
    inline QueryCostCenterResourceResponseBody& setCostCenterResourceDtoList(vector<QueryCostCenterResourceResponseBody::CostCenterResourceDtoList> && costCenterResourceDtoList) { DARABONBA_PTR_SET_RVALUE(costCenterResourceDtoList_, costCenterResourceDtoList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryCostCenterResourceResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline QueryCostCenterResourceResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline QueryCostCenterResourceResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryCostCenterResourceResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCostCenterResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryCostCenterResourceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<QueryCostCenterResourceResponseBody::CostCenterResourceDtoList>> costCenterResourceDtoList_ {};
    shared_ptr<int32_t> maxResults_ {};
    Darabonba::Json metadata_ {};
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
