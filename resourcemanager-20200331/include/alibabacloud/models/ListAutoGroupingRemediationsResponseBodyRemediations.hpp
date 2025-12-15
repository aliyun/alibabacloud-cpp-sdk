// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOGROUPINGREMEDIATIONSRESPONSEBODYREMEDIATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOGROUPINGREMEDIATIONSRESPONSEBODYREMEDIATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListAutoGroupingRemediationsResponseBodyRemediations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoGroupingRemediationsResponseBodyRemediations& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemediationId, remediationId_);
      DARABONBA_PTR_TO_JSON(RemediationTime, remediationTime_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(TargetResourceGroupInfo, targetResourceGroupInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoGroupingRemediationsResponseBodyRemediations& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemediationId, remediationId_);
      DARABONBA_PTR_FROM_JSON(RemediationTime, remediationTime_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(TargetResourceGroupInfo, targetResourceGroupInfo_);
    };
    ListAutoGroupingRemediationsResponseBodyRemediations() = default ;
    ListAutoGroupingRemediationsResponseBodyRemediations(const ListAutoGroupingRemediationsResponseBodyRemediations &) = default ;
    ListAutoGroupingRemediationsResponseBodyRemediations(ListAutoGroupingRemediationsResponseBodyRemediations &&) = default ;
    ListAutoGroupingRemediationsResponseBodyRemediations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoGroupingRemediationsResponseBodyRemediations() = default ;
    ListAutoGroupingRemediationsResponseBodyRemediations& operator=(const ListAutoGroupingRemediationsResponseBodyRemediations &) = default ;
    ListAutoGroupingRemediationsResponseBodyRemediations& operator=(ListAutoGroupingRemediationsResponseBodyRemediations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->remediationId_ == nullptr && return this->remediationTime_ == nullptr && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr && return this->service_ == nullptr
        && return this->targetResourceGroupInfo_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAutoGroupingRemediationsResponseBodyRemediations& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remediationId Field Functions 
    bool hasRemediationId() const { return this->remediationId_ != nullptr;};
    void deleteRemediationId() { this->remediationId_ = nullptr;};
    inline string remediationId() const { DARABONBA_PTR_GET_DEFAULT(remediationId_, "") };
    inline ListAutoGroupingRemediationsResponseBodyRemediations& setRemediationId(string remediationId) { DARABONBA_PTR_SET_VALUE(remediationId_, remediationId) };


    // remediationTime Field Functions 
    bool hasRemediationTime() const { return this->remediationTime_ != nullptr;};
    void deleteRemediationTime() { this->remediationTime_ = nullptr;};
    inline string remediationTime() const { DARABONBA_PTR_GET_DEFAULT(remediationTime_, "") };
    inline ListAutoGroupingRemediationsResponseBodyRemediations& setRemediationTime(string remediationTime) { DARABONBA_PTR_SET_VALUE(remediationTime_, remediationTime) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListAutoGroupingRemediationsResponseBodyRemediations& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListAutoGroupingRemediationsResponseBodyRemediations& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ListAutoGroupingRemediationsResponseBodyRemediations& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // targetResourceGroupInfo Field Functions 
    bool hasTargetResourceGroupInfo() const { return this->targetResourceGroupInfo_ != nullptr;};
    void deleteTargetResourceGroupInfo() { this->targetResourceGroupInfo_ = nullptr;};
    inline const Models::ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo & targetResourceGroupInfo() const { DARABONBA_PTR_GET_CONST(targetResourceGroupInfo_, Models::ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo) };
    inline Models::ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo targetResourceGroupInfo() { DARABONBA_PTR_GET(targetResourceGroupInfo_, Models::ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo) };
    inline ListAutoGroupingRemediationsResponseBodyRemediations& setTargetResourceGroupInfo(const Models::ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo & targetResourceGroupInfo) { DARABONBA_PTR_SET_VALUE(targetResourceGroupInfo_, targetResourceGroupInfo) };
    inline ListAutoGroupingRemediationsResponseBodyRemediations& setTargetResourceGroupInfo(Models::ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo && targetResourceGroupInfo) { DARABONBA_PTR_SET_RVALUE(targetResourceGroupInfo_, targetResourceGroupInfo) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The remediation record ID.
    std::shared_ptr<string> remediationId_ = nullptr;
    // The remediation time.
    std::shared_ptr<string> remediationTime_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource type.
    // 
    // You can obtain the resource type from the **Resource type** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    std::shared_ptr<string> resourceType_ = nullptr;
    // The ID of the Alibaba Cloud service.
    // 
    // You can obtain the ID from the **Service code** column in [Services that work with Resource Group](https://help.aliyun.com/document_detail/94479.html).
    std::shared_ptr<string> service_ = nullptr;
    // The information about the new resource group.
    std::shared_ptr<Models::ListAutoGroupingRemediationsResponseBodyRemediationsTargetResourceGroupInfo> targetResourceGroupInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
