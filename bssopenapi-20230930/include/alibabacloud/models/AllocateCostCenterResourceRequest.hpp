// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATECOSTCENTERRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATECOSTCENTERRESOURCEREQUEST_HPP_
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
  class AllocateCostCenterResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateCostCenterResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromCostCenterId, fromCostCenterId_);
      DARABONBA_PTR_TO_JSON(FromOwnerAccountId, fromOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceList, resourceInstanceList_);
      DARABONBA_PTR_TO_JSON(ToCostCenterId, toCostCenterId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateCostCenterResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromCostCenterId, fromCostCenterId_);
      DARABONBA_PTR_FROM_JSON(FromOwnerAccountId, fromOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceList, resourceInstanceList_);
      DARABONBA_PTR_FROM_JSON(ToCostCenterId, toCostCenterId_);
    };
    AllocateCostCenterResourceRequest() = default ;
    AllocateCostCenterResourceRequest(const AllocateCostCenterResourceRequest &) = default ;
    AllocateCostCenterResourceRequest(AllocateCostCenterResourceRequest &&) = default ;
    AllocateCostCenterResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateCostCenterResourceRequest() = default ;
    AllocateCostCenterResourceRequest& operator=(const AllocateCostCenterResourceRequest &) = default ;
    AllocateCostCenterResourceRequest& operator=(AllocateCostCenterResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceInstanceList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ResourceInstanceList& obj) { 
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
      ResourceInstanceList() = default ;
      ResourceInstanceList(const ResourceInstanceList &) = default ;
      ResourceInstanceList(ResourceInstanceList &&) = default ;
      ResourceInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceInstanceList() = default ;
      ResourceInstanceList& operator=(const ResourceInstanceList &) = default ;
      ResourceInstanceList& operator=(ResourceInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apportionCode_ == nullptr
        && this->apportionName_ == nullptr && this->commodityCode_ == nullptr && this->commodityName_ == nullptr && this->instanceId_ == nullptr && this->pipCode_ == nullptr
        && this->relatedResources_ == nullptr && this->resourceGroup_ == nullptr && this->resourceId_ == nullptr && this->resourceNick_ == nullptr && this->resourceSource_ == nullptr
        && this->resourceStatus_ == nullptr && this->resourceTag_ == nullptr && this->resourceType_ == nullptr && this->resourceUserId_ == nullptr && this->resourceUserName_ == nullptr; };
      // apportionCode Field Functions 
      bool hasApportionCode() const { return this->apportionCode_ != nullptr;};
      void deleteApportionCode() { this->apportionCode_ = nullptr;};
      inline string getApportionCode() const { DARABONBA_PTR_GET_DEFAULT(apportionCode_, "") };
      inline ResourceInstanceList& setApportionCode(string apportionCode) { DARABONBA_PTR_SET_VALUE(apportionCode_, apportionCode) };


      // apportionName Field Functions 
      bool hasApportionName() const { return this->apportionName_ != nullptr;};
      void deleteApportionName() { this->apportionName_ = nullptr;};
      inline string getApportionName() const { DARABONBA_PTR_GET_DEFAULT(apportionName_, "") };
      inline ResourceInstanceList& setApportionName(string apportionName) { DARABONBA_PTR_SET_VALUE(apportionName_, apportionName) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline ResourceInstanceList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // commodityName Field Functions 
      bool hasCommodityName() const { return this->commodityName_ != nullptr;};
      void deleteCommodityName() { this->commodityName_ = nullptr;};
      inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
      inline ResourceInstanceList& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ResourceInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // pipCode Field Functions 
      bool hasPipCode() const { return this->pipCode_ != nullptr;};
      void deletePipCode() { this->pipCode_ = nullptr;};
      inline string getPipCode() const { DARABONBA_PTR_GET_DEFAULT(pipCode_, "") };
      inline ResourceInstanceList& setPipCode(string pipCode) { DARABONBA_PTR_SET_VALUE(pipCode_, pipCode) };


      // relatedResources Field Functions 
      bool hasRelatedResources() const { return this->relatedResources_ != nullptr;};
      void deleteRelatedResources() { this->relatedResources_ = nullptr;};
      inline string getRelatedResources() const { DARABONBA_PTR_GET_DEFAULT(relatedResources_, "") };
      inline ResourceInstanceList& setRelatedResources(string relatedResources) { DARABONBA_PTR_SET_VALUE(relatedResources_, relatedResources) };


      // resourceGroup Field Functions 
      bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
      void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
      inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
      inline ResourceInstanceList& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ResourceInstanceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceNick Field Functions 
      bool hasResourceNick() const { return this->resourceNick_ != nullptr;};
      void deleteResourceNick() { this->resourceNick_ = nullptr;};
      inline string getResourceNick() const { DARABONBA_PTR_GET_DEFAULT(resourceNick_, "") };
      inline ResourceInstanceList& setResourceNick(string resourceNick) { DARABONBA_PTR_SET_VALUE(resourceNick_, resourceNick) };


      // resourceSource Field Functions 
      bool hasResourceSource() const { return this->resourceSource_ != nullptr;};
      void deleteResourceSource() { this->resourceSource_ = nullptr;};
      inline string getResourceSource() const { DARABONBA_PTR_GET_DEFAULT(resourceSource_, "") };
      inline ResourceInstanceList& setResourceSource(string resourceSource) { DARABONBA_PTR_SET_VALUE(resourceSource_, resourceSource) };


      // resourceStatus Field Functions 
      bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
      void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
      inline string getResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
      inline ResourceInstanceList& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


      // resourceTag Field Functions 
      bool hasResourceTag() const { return this->resourceTag_ != nullptr;};
      void deleteResourceTag() { this->resourceTag_ = nullptr;};
      inline string getResourceTag() const { DARABONBA_PTR_GET_DEFAULT(resourceTag_, "") };
      inline ResourceInstanceList& setResourceTag(string resourceTag) { DARABONBA_PTR_SET_VALUE(resourceTag_, resourceTag) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceInstanceList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // resourceUserId Field Functions 
      bool hasResourceUserId() const { return this->resourceUserId_ != nullptr;};
      void deleteResourceUserId() { this->resourceUserId_ = nullptr;};
      inline int64_t getResourceUserId() const { DARABONBA_PTR_GET_DEFAULT(resourceUserId_, 0L) };
      inline ResourceInstanceList& setResourceUserId(int64_t resourceUserId) { DARABONBA_PTR_SET_VALUE(resourceUserId_, resourceUserId) };


      // resourceUserName Field Functions 
      bool hasResourceUserName() const { return this->resourceUserName_ != nullptr;};
      void deleteResourceUserName() { this->resourceUserName_ = nullptr;};
      inline string getResourceUserName() const { DARABONBA_PTR_GET_DEFAULT(resourceUserName_, "") };
      inline ResourceInstanceList& setResourceUserName(string resourceUserName) { DARABONBA_PTR_SET_VALUE(resourceUserName_, resourceUserName) };


    protected:
      shared_ptr<string> apportionCode_ {};
      shared_ptr<string> apportionName_ {};
      shared_ptr<string> commodityCode_ {};
      shared_ptr<string> commodityName_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> pipCode_ {};
      shared_ptr<string> relatedResources_ {};
      shared_ptr<string> resourceGroup_ {};
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> resourceNick_ {};
      shared_ptr<string> resourceSource_ {};
      shared_ptr<string> resourceStatus_ {};
      shared_ptr<string> resourceTag_ {};
      shared_ptr<string> resourceType_ {};
      shared_ptr<int64_t> resourceUserId_ {};
      shared_ptr<string> resourceUserName_ {};
    };

    virtual bool empty() const override { return this->fromCostCenterId_ == nullptr
        && this->fromOwnerAccountId_ == nullptr && this->nbid_ == nullptr && this->resourceInstanceList_ == nullptr && this->toCostCenterId_ == nullptr; };
    // fromCostCenterId Field Functions 
    bool hasFromCostCenterId() const { return this->fromCostCenterId_ != nullptr;};
    void deleteFromCostCenterId() { this->fromCostCenterId_ = nullptr;};
    inline int64_t getFromCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(fromCostCenterId_, 0L) };
    inline AllocateCostCenterResourceRequest& setFromCostCenterId(int64_t fromCostCenterId) { DARABONBA_PTR_SET_VALUE(fromCostCenterId_, fromCostCenterId) };


    // fromOwnerAccountId Field Functions 
    bool hasFromOwnerAccountId() const { return this->fromOwnerAccountId_ != nullptr;};
    void deleteFromOwnerAccountId() { this->fromOwnerAccountId_ = nullptr;};
    inline int64_t getFromOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fromOwnerAccountId_, 0L) };
    inline AllocateCostCenterResourceRequest& setFromOwnerAccountId(int64_t fromOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fromOwnerAccountId_, fromOwnerAccountId) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline AllocateCostCenterResourceRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // resourceInstanceList Field Functions 
    bool hasResourceInstanceList() const { return this->resourceInstanceList_ != nullptr;};
    void deleteResourceInstanceList() { this->resourceInstanceList_ = nullptr;};
    inline const vector<AllocateCostCenterResourceRequest::ResourceInstanceList> & getResourceInstanceList() const { DARABONBA_PTR_GET_CONST(resourceInstanceList_, vector<AllocateCostCenterResourceRequest::ResourceInstanceList>) };
    inline vector<AllocateCostCenterResourceRequest::ResourceInstanceList> getResourceInstanceList() { DARABONBA_PTR_GET(resourceInstanceList_, vector<AllocateCostCenterResourceRequest::ResourceInstanceList>) };
    inline AllocateCostCenterResourceRequest& setResourceInstanceList(const vector<AllocateCostCenterResourceRequest::ResourceInstanceList> & resourceInstanceList) { DARABONBA_PTR_SET_VALUE(resourceInstanceList_, resourceInstanceList) };
    inline AllocateCostCenterResourceRequest& setResourceInstanceList(vector<AllocateCostCenterResourceRequest::ResourceInstanceList> && resourceInstanceList) { DARABONBA_PTR_SET_RVALUE(resourceInstanceList_, resourceInstanceList) };


    // toCostCenterId Field Functions 
    bool hasToCostCenterId() const { return this->toCostCenterId_ != nullptr;};
    void deleteToCostCenterId() { this->toCostCenterId_ = nullptr;};
    inline int64_t getToCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(toCostCenterId_, 0L) };
    inline AllocateCostCenterResourceRequest& setToCostCenterId(int64_t toCostCenterId) { DARABONBA_PTR_SET_VALUE(toCostCenterId_, toCostCenterId) };


  protected:
    shared_ptr<int64_t> fromCostCenterId_ {};
    shared_ptr<int64_t> fromOwnerAccountId_ {};
    shared_ptr<string> nbid_ {};
    // This parameter is required.
    shared_ptr<vector<AllocateCostCenterResourceRequest::ResourceInstanceList>> resourceInstanceList_ {};
    shared_ptr<int64_t> toCostCenterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
