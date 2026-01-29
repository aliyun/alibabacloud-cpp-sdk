// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTUNITRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTUNITRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCostUnitResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostUnitResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostUnitResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCostUnitResourceResponseBody() = default ;
    QueryCostUnitResourceResponseBody(const QueryCostUnitResourceResponseBody &) = default ;
    QueryCostUnitResourceResponseBody(QueryCostUnitResourceResponseBody &&) = default ;
    QueryCostUnitResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostUnitResourceResponseBody() = default ;
    QueryCostUnitResourceResponseBody& operator=(const QueryCostUnitResourceResponseBody &) = default ;
    QueryCostUnitResourceResponseBody& operator=(QueryCostUnitResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CostUnit, costUnit_);
        DARABONBA_PTR_TO_JSON(CostUnitStatisInfo, costUnitStatisInfo_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceDtoList, resourceInstanceDtoList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CostUnit, costUnit_);
        DARABONBA_PTR_FROM_JSON(CostUnitStatisInfo, costUnitStatisInfo_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceDtoList, resourceInstanceDtoList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceInstanceDtoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceInstanceDtoList& obj) { 
          DARABONBA_PTR_TO_JSON(ApportionCode, apportionCode_);
          DARABONBA_PTR_TO_JSON(ApportionName, apportionName_);
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
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
        friend void from_json(const Darabonba::Json& j, ResourceInstanceDtoList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApportionCode, apportionCode_);
          DARABONBA_PTR_FROM_JSON(ApportionName, apportionName_);
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
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
        ResourceInstanceDtoList() = default ;
        ResourceInstanceDtoList(const ResourceInstanceDtoList &) = default ;
        ResourceInstanceDtoList(ResourceInstanceDtoList &&) = default ;
        ResourceInstanceDtoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceInstanceDtoList() = default ;
        ResourceInstanceDtoList& operator=(const ResourceInstanceDtoList &) = default ;
        ResourceInstanceDtoList& operator=(ResourceInstanceDtoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apportionCode_ == nullptr
        && this->apportionName_ == nullptr && this->commodityCode_ == nullptr && this->commodityName_ == nullptr && this->pipCode_ == nullptr && this->relatedResources_ == nullptr
        && this->resourceGroup_ == nullptr && this->resourceId_ == nullptr && this->resourceNick_ == nullptr && this->resourceSource_ == nullptr && this->resourceStatus_ == nullptr
        && this->resourceTag_ == nullptr && this->resourceType_ == nullptr && this->resourceUserId_ == nullptr && this->resourceUserName_ == nullptr; };
        // apportionCode Field Functions 
        bool hasApportionCode() const { return this->apportionCode_ != nullptr;};
        void deleteApportionCode() { this->apportionCode_ = nullptr;};
        inline string getApportionCode() const { DARABONBA_PTR_GET_DEFAULT(apportionCode_, "") };
        inline ResourceInstanceDtoList& setApportionCode(string apportionCode) { DARABONBA_PTR_SET_VALUE(apportionCode_, apportionCode) };


        // apportionName Field Functions 
        bool hasApportionName() const { return this->apportionName_ != nullptr;};
        void deleteApportionName() { this->apportionName_ = nullptr;};
        inline string getApportionName() const { DARABONBA_PTR_GET_DEFAULT(apportionName_, "") };
        inline ResourceInstanceDtoList& setApportionName(string apportionName) { DARABONBA_PTR_SET_VALUE(apportionName_, apportionName) };


        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline ResourceInstanceDtoList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // commodityName Field Functions 
        bool hasCommodityName() const { return this->commodityName_ != nullptr;};
        void deleteCommodityName() { this->commodityName_ = nullptr;};
        inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
        inline ResourceInstanceDtoList& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


        // pipCode Field Functions 
        bool hasPipCode() const { return this->pipCode_ != nullptr;};
        void deletePipCode() { this->pipCode_ = nullptr;};
        inline string getPipCode() const { DARABONBA_PTR_GET_DEFAULT(pipCode_, "") };
        inline ResourceInstanceDtoList& setPipCode(string pipCode) { DARABONBA_PTR_SET_VALUE(pipCode_, pipCode) };


        // relatedResources Field Functions 
        bool hasRelatedResources() const { return this->relatedResources_ != nullptr;};
        void deleteRelatedResources() { this->relatedResources_ = nullptr;};
        inline string getRelatedResources() const { DARABONBA_PTR_GET_DEFAULT(relatedResources_, "") };
        inline ResourceInstanceDtoList& setRelatedResources(string relatedResources) { DARABONBA_PTR_SET_VALUE(relatedResources_, relatedResources) };


        // resourceGroup Field Functions 
        bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
        void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
        inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
        inline ResourceInstanceDtoList& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline ResourceInstanceDtoList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceNick Field Functions 
        bool hasResourceNick() const { return this->resourceNick_ != nullptr;};
        void deleteResourceNick() { this->resourceNick_ = nullptr;};
        inline string getResourceNick() const { DARABONBA_PTR_GET_DEFAULT(resourceNick_, "") };
        inline ResourceInstanceDtoList& setResourceNick(string resourceNick) { DARABONBA_PTR_SET_VALUE(resourceNick_, resourceNick) };


        // resourceSource Field Functions 
        bool hasResourceSource() const { return this->resourceSource_ != nullptr;};
        void deleteResourceSource() { this->resourceSource_ = nullptr;};
        inline string getResourceSource() const { DARABONBA_PTR_GET_DEFAULT(resourceSource_, "") };
        inline ResourceInstanceDtoList& setResourceSource(string resourceSource) { DARABONBA_PTR_SET_VALUE(resourceSource_, resourceSource) };


        // resourceStatus Field Functions 
        bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
        void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
        inline string getResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
        inline ResourceInstanceDtoList& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


        // resourceTag Field Functions 
        bool hasResourceTag() const { return this->resourceTag_ != nullptr;};
        void deleteResourceTag() { this->resourceTag_ = nullptr;};
        inline string getResourceTag() const { DARABONBA_PTR_GET_DEFAULT(resourceTag_, "") };
        inline ResourceInstanceDtoList& setResourceTag(string resourceTag) { DARABONBA_PTR_SET_VALUE(resourceTag_, resourceTag) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline ResourceInstanceDtoList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // resourceUserId Field Functions 
        bool hasResourceUserId() const { return this->resourceUserId_ != nullptr;};
        void deleteResourceUserId() { this->resourceUserId_ = nullptr;};
        inline int64_t getResourceUserId() const { DARABONBA_PTR_GET_DEFAULT(resourceUserId_, 0L) };
        inline ResourceInstanceDtoList& setResourceUserId(int64_t resourceUserId) { DARABONBA_PTR_SET_VALUE(resourceUserId_, resourceUserId) };


        // resourceUserName Field Functions 
        bool hasResourceUserName() const { return this->resourceUserName_ != nullptr;};
        void deleteResourceUserName() { this->resourceUserName_ = nullptr;};
        inline string getResourceUserName() const { DARABONBA_PTR_GET_DEFAULT(resourceUserName_, "") };
        inline ResourceInstanceDtoList& setResourceUserName(string resourceUserName) { DARABONBA_PTR_SET_VALUE(resourceUserName_, resourceUserName) };


      protected:
        // The split code of the resource.
        shared_ptr<string> apportionCode_ {};
        // The split name of the resource.
        shared_ptr<string> apportionName_ {};
        // The product code of the resource.
        shared_ptr<string> commodityCode_ {};
        // The commodity name of the resource.
        shared_ptr<string> commodityName_ {};
        // The code of the service. The code is the same as that in Cost Center.
        shared_ptr<string> pipCode_ {};
        // The resources related to the resource instance.
        shared_ptr<string> relatedResources_ {};
        // The resource group to which the resource belongs.
        shared_ptr<string> resourceGroup_ {};
        // The instance ID of the resource.
        shared_ptr<string> resourceId_ {};
        // The custom name of the resource.
        shared_ptr<string> resourceNick_ {};
        // The source of the resource. Value:
        // - AUTO_ALLOCATE
        // - MANUAL_ALLOCATE
        shared_ptr<string> resourceSource_ {};
        // The status of the resource.
        shared_ptr<string> resourceStatus_ {};
        // The tags of the resource.
        shared_ptr<string> resourceTag_ {};
        // The type of the resource.
        shared_ptr<string> resourceType_ {};
        // The user ID of the resource owner.
        shared_ptr<int64_t> resourceUserId_ {};
        // The username of the resource owner.
        shared_ptr<string> resourceUserName_ {};
      };

      class CostUnitStatisInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CostUnitStatisInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
          DARABONBA_PTR_TO_JSON(ResourceGroupCount, resourceGroupCount_);
          DARABONBA_PTR_TO_JSON(SubUnitCount, subUnitCount_);
          DARABONBA_PTR_TO_JSON(TotalResourceCount, totalResourceCount_);
          DARABONBA_PTR_TO_JSON(TotalResourceGroupCount, totalResourceGroupCount_);
          DARABONBA_PTR_TO_JSON(TotalUserCount, totalUserCount_);
          DARABONBA_PTR_TO_JSON(UserCount, userCount_);
        };
        friend void from_json(const Darabonba::Json& j, CostUnitStatisInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupCount, resourceGroupCount_);
          DARABONBA_PTR_FROM_JSON(SubUnitCount, subUnitCount_);
          DARABONBA_PTR_FROM_JSON(TotalResourceCount, totalResourceCount_);
          DARABONBA_PTR_FROM_JSON(TotalResourceGroupCount, totalResourceGroupCount_);
          DARABONBA_PTR_FROM_JSON(TotalUserCount, totalUserCount_);
          DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
        };
        CostUnitStatisInfo() = default ;
        CostUnitStatisInfo(const CostUnitStatisInfo &) = default ;
        CostUnitStatisInfo(CostUnitStatisInfo &&) = default ;
        CostUnitStatisInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CostUnitStatisInfo() = default ;
        CostUnitStatisInfo& operator=(const CostUnitStatisInfo &) = default ;
        CostUnitStatisInfo& operator=(CostUnitStatisInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceCount_ == nullptr
        && this->resourceGroupCount_ == nullptr && this->subUnitCount_ == nullptr && this->totalResourceCount_ == nullptr && this->totalResourceGroupCount_ == nullptr && this->totalUserCount_ == nullptr
        && this->userCount_ == nullptr; };
        // resourceCount Field Functions 
        bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
        void deleteResourceCount() { this->resourceCount_ = nullptr;};
        inline int64_t getResourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0L) };
        inline CostUnitStatisInfo& setResourceCount(int64_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


        // resourceGroupCount Field Functions 
        bool hasResourceGroupCount() const { return this->resourceGroupCount_ != nullptr;};
        void deleteResourceGroupCount() { this->resourceGroupCount_ = nullptr;};
        inline int64_t getResourceGroupCount() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupCount_, 0L) };
        inline CostUnitStatisInfo& setResourceGroupCount(int64_t resourceGroupCount) { DARABONBA_PTR_SET_VALUE(resourceGroupCount_, resourceGroupCount) };


        // subUnitCount Field Functions 
        bool hasSubUnitCount() const { return this->subUnitCount_ != nullptr;};
        void deleteSubUnitCount() { this->subUnitCount_ = nullptr;};
        inline int64_t getSubUnitCount() const { DARABONBA_PTR_GET_DEFAULT(subUnitCount_, 0L) };
        inline CostUnitStatisInfo& setSubUnitCount(int64_t subUnitCount) { DARABONBA_PTR_SET_VALUE(subUnitCount_, subUnitCount) };


        // totalResourceCount Field Functions 
        bool hasTotalResourceCount() const { return this->totalResourceCount_ != nullptr;};
        void deleteTotalResourceCount() { this->totalResourceCount_ = nullptr;};
        inline int64_t getTotalResourceCount() const { DARABONBA_PTR_GET_DEFAULT(totalResourceCount_, 0L) };
        inline CostUnitStatisInfo& setTotalResourceCount(int64_t totalResourceCount) { DARABONBA_PTR_SET_VALUE(totalResourceCount_, totalResourceCount) };


        // totalResourceGroupCount Field Functions 
        bool hasTotalResourceGroupCount() const { return this->totalResourceGroupCount_ != nullptr;};
        void deleteTotalResourceGroupCount() { this->totalResourceGroupCount_ = nullptr;};
        inline int64_t getTotalResourceGroupCount() const { DARABONBA_PTR_GET_DEFAULT(totalResourceGroupCount_, 0L) };
        inline CostUnitStatisInfo& setTotalResourceGroupCount(int64_t totalResourceGroupCount) { DARABONBA_PTR_SET_VALUE(totalResourceGroupCount_, totalResourceGroupCount) };


        // totalUserCount Field Functions 
        bool hasTotalUserCount() const { return this->totalUserCount_ != nullptr;};
        void deleteTotalUserCount() { this->totalUserCount_ = nullptr;};
        inline int64_t getTotalUserCount() const { DARABONBA_PTR_GET_DEFAULT(totalUserCount_, 0L) };
        inline CostUnitStatisInfo& setTotalUserCount(int64_t totalUserCount) { DARABONBA_PTR_SET_VALUE(totalUserCount_, totalUserCount) };


        // userCount Field Functions 
        bool hasUserCount() const { return this->userCount_ != nullptr;};
        void deleteUserCount() { this->userCount_ = nullptr;};
        inline int64_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0L) };
        inline CostUnitStatisInfo& setUserCount(int64_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


      protected:
        // The number of resource instances in the cost center.
        shared_ptr<int64_t> resourceCount_ {};
        // The number of resource groups in the cost center.
        shared_ptr<int64_t> resourceGroupCount_ {};
        // The number of sub-cost centers in the cost center.
        shared_ptr<int64_t> subUnitCount_ {};
        // The total number of resource instances, including resource instances of sub-cost centers, in the cost center.
        shared_ptr<int64_t> totalResourceCount_ {};
        // The total number of resource groups, including resource groups of sub-cost centers, in the cost center.
        shared_ptr<int64_t> totalResourceGroupCount_ {};
        // The total number of the associated accounts, including associated accounts of sub-cost centers, in the cost center.
        shared_ptr<int64_t> totalUserCount_ {};
        // The number of sub-cost centers in the cost center.
        shared_ptr<int64_t> userCount_ {};
      };

      class CostUnit : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CostUnit& obj) { 
          DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
          DARABONBA_PTR_TO_JSON(ParentUnitId, parentUnitId_);
          DARABONBA_PTR_TO_JSON(UnitId, unitId_);
          DARABONBA_PTR_TO_JSON(UnitName, unitName_);
        };
        friend void from_json(const Darabonba::Json& j, CostUnit& obj) { 
          DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
          DARABONBA_PTR_FROM_JSON(ParentUnitId, parentUnitId_);
          DARABONBA_PTR_FROM_JSON(UnitId, unitId_);
          DARABONBA_PTR_FROM_JSON(UnitName, unitName_);
        };
        CostUnit() = default ;
        CostUnit(const CostUnit &) = default ;
        CostUnit(CostUnit &&) = default ;
        CostUnit(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CostUnit() = default ;
        CostUnit& operator=(const CostUnit &) = default ;
        CostUnit& operator=(CostUnit &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ownerUid_ == nullptr
        && this->parentUnitId_ == nullptr && this->unitId_ == nullptr && this->unitName_ == nullptr; };
        // ownerUid Field Functions 
        bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
        void deleteOwnerUid() { this->ownerUid_ = nullptr;};
        inline int64_t getOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, 0L) };
        inline CostUnit& setOwnerUid(int64_t ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


        // parentUnitId Field Functions 
        bool hasParentUnitId() const { return this->parentUnitId_ != nullptr;};
        void deleteParentUnitId() { this->parentUnitId_ = nullptr;};
        inline int64_t getParentUnitId() const { DARABONBA_PTR_GET_DEFAULT(parentUnitId_, 0L) };
        inline CostUnit& setParentUnitId(int64_t parentUnitId) { DARABONBA_PTR_SET_VALUE(parentUnitId_, parentUnitId) };


        // unitId Field Functions 
        bool hasUnitId() const { return this->unitId_ != nullptr;};
        void deleteUnitId() { this->unitId_ = nullptr;};
        inline int64_t getUnitId() const { DARABONBA_PTR_GET_DEFAULT(unitId_, 0L) };
        inline CostUnit& setUnitId(int64_t unitId) { DARABONBA_PTR_SET_VALUE(unitId_, unitId) };


        // unitName Field Functions 
        bool hasUnitName() const { return this->unitName_ != nullptr;};
        void deleteUnitName() { this->unitName_ = nullptr;};
        inline string getUnitName() const { DARABONBA_PTR_GET_DEFAULT(unitName_, "") };
        inline CostUnit& setUnitName(string unitName) { DARABONBA_PTR_SET_VALUE(unitName_, unitName) };


      protected:
        // The user ID of the cost center owner.
        shared_ptr<int64_t> ownerUid_ {};
        // The ID of the parent cost center. A value of -1 indicates the root cost center.
        shared_ptr<int64_t> parentUnitId_ {};
        // The ID of the cost center.
        shared_ptr<int64_t> unitId_ {};
        // The name of the cost center.
        shared_ptr<string> unitName_ {};
      };

      virtual bool empty() const override { return this->costUnit_ == nullptr
        && this->costUnitStatisInfo_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->resourceInstanceDtoList_ == nullptr && this->totalCount_ == nullptr; };
      // costUnit Field Functions 
      bool hasCostUnit() const { return this->costUnit_ != nullptr;};
      void deleteCostUnit() { this->costUnit_ = nullptr;};
      inline const Data::CostUnit & getCostUnit() const { DARABONBA_PTR_GET_CONST(costUnit_, Data::CostUnit) };
      inline Data::CostUnit getCostUnit() { DARABONBA_PTR_GET(costUnit_, Data::CostUnit) };
      inline Data& setCostUnit(const Data::CostUnit & costUnit) { DARABONBA_PTR_SET_VALUE(costUnit_, costUnit) };
      inline Data& setCostUnit(Data::CostUnit && costUnit) { DARABONBA_PTR_SET_RVALUE(costUnit_, costUnit) };


      // costUnitStatisInfo Field Functions 
      bool hasCostUnitStatisInfo() const { return this->costUnitStatisInfo_ != nullptr;};
      void deleteCostUnitStatisInfo() { this->costUnitStatisInfo_ = nullptr;};
      inline const Data::CostUnitStatisInfo & getCostUnitStatisInfo() const { DARABONBA_PTR_GET_CONST(costUnitStatisInfo_, Data::CostUnitStatisInfo) };
      inline Data::CostUnitStatisInfo getCostUnitStatisInfo() { DARABONBA_PTR_GET(costUnitStatisInfo_, Data::CostUnitStatisInfo) };
      inline Data& setCostUnitStatisInfo(const Data::CostUnitStatisInfo & costUnitStatisInfo) { DARABONBA_PTR_SET_VALUE(costUnitStatisInfo_, costUnitStatisInfo) };
      inline Data& setCostUnitStatisInfo(Data::CostUnitStatisInfo && costUnitStatisInfo) { DARABONBA_PTR_SET_RVALUE(costUnitStatisInfo_, costUnitStatisInfo) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // resourceInstanceDtoList Field Functions 
      bool hasResourceInstanceDtoList() const { return this->resourceInstanceDtoList_ != nullptr;};
      void deleteResourceInstanceDtoList() { this->resourceInstanceDtoList_ = nullptr;};
      inline const vector<Data::ResourceInstanceDtoList> & getResourceInstanceDtoList() const { DARABONBA_PTR_GET_CONST(resourceInstanceDtoList_, vector<Data::ResourceInstanceDtoList>) };
      inline vector<Data::ResourceInstanceDtoList> getResourceInstanceDtoList() { DARABONBA_PTR_GET(resourceInstanceDtoList_, vector<Data::ResourceInstanceDtoList>) };
      inline Data& setResourceInstanceDtoList(const vector<Data::ResourceInstanceDtoList> & resourceInstanceDtoList) { DARABONBA_PTR_SET_VALUE(resourceInstanceDtoList_, resourceInstanceDtoList) };
      inline Data& setResourceInstanceDtoList(vector<Data::ResourceInstanceDtoList> && resourceInstanceDtoList) { DARABONBA_PTR_SET_RVALUE(resourceInstanceDtoList_, resourceInstanceDtoList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The information about the cost center.
      shared_ptr<Data::CostUnit> costUnit_ {};
      // The statistical information about the cost center.
      shared_ptr<Data::CostUnitStatisInfo> costUnitStatisInfo_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The resource instances.
      shared_ptr<vector<Data::ResourceInstanceDtoList>> resourceInstanceDtoList_ {};
      // The total number of returned entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryCostUnitResourceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryCostUnitResourceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryCostUnitResourceResponseBody::Data) };
    inline QueryCostUnitResourceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryCostUnitResourceResponseBody::Data) };
    inline QueryCostUnitResourceResponseBody& setData(const QueryCostUnitResourceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryCostUnitResourceResponseBody& setData(QueryCostUnitResourceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCostUnitResourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCostUnitResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCostUnitResourceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryCostUnitResourceResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
