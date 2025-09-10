// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListServicesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServicesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoscalerEnabled, autoscalerEnabled_);
      DARABONBA_PTR_TO_JSON(CronscalerEnabled, cronscalerEnabled_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Gateway, gateway_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IncludeNoWorkspace, includeNoWorkspace_);
      DARABONBA_PTR_TO_JSON(Label, labelShrink_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentServiceUid, parentServiceUid_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(ResourceAliasName, resourceAliasName_);
      DARABONBA_PTR_TO_JSON(ResourceBurstable, resourceBurstable_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(ServiceUid, serviceUid_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(TrafficState, trafficState_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServicesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoscalerEnabled, autoscalerEnabled_);
      DARABONBA_PTR_FROM_JSON(CronscalerEnabled, cronscalerEnabled_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IncludeNoWorkspace, includeNoWorkspace_);
      DARABONBA_PTR_FROM_JSON(Label, labelShrink_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentServiceUid, parentServiceUid_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(ResourceAliasName, resourceAliasName_);
      DARABONBA_PTR_FROM_JSON(ResourceBurstable, resourceBurstable_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(ServiceUid, serviceUid_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(TrafficState, trafficState_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListServicesShrinkRequest() = default ;
    ListServicesShrinkRequest(const ListServicesShrinkRequest &) = default ;
    ListServicesShrinkRequest(ListServicesShrinkRequest &&) = default ;
    ListServicesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServicesShrinkRequest() = default ;
    ListServicesShrinkRequest& operator=(const ListServicesShrinkRequest &) = default ;
    ListServicesShrinkRequest& operator=(ListServicesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoscalerEnabled_ != nullptr
        && this->cronscalerEnabled_ != nullptr && this->filter_ != nullptr && this->gateway_ != nullptr && this->groupName_ != nullptr && this->includeNoWorkspace_ != nullptr
        && this->labelShrink_ != nullptr && this->order_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->parentServiceUid_ != nullptr
        && this->quotaId_ != nullptr && this->resourceAliasName_ != nullptr && this->resourceBurstable_ != nullptr && this->resourceId_ != nullptr && this->resourceName_ != nullptr
        && this->resourceType_ != nullptr && this->role_ != nullptr && this->serviceName_ != nullptr && this->serviceStatus_ != nullptr && this->serviceType_ != nullptr
        && this->serviceUid_ != nullptr && this->sort_ != nullptr && this->trafficState_ != nullptr && this->workspaceId_ != nullptr; };
    // autoscalerEnabled Field Functions 
    bool hasAutoscalerEnabled() const { return this->autoscalerEnabled_ != nullptr;};
    void deleteAutoscalerEnabled() { this->autoscalerEnabled_ = nullptr;};
    inline bool autoscalerEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoscalerEnabled_, false) };
    inline ListServicesShrinkRequest& setAutoscalerEnabled(bool autoscalerEnabled) { DARABONBA_PTR_SET_VALUE(autoscalerEnabled_, autoscalerEnabled) };


    // cronscalerEnabled Field Functions 
    bool hasCronscalerEnabled() const { return this->cronscalerEnabled_ != nullptr;};
    void deleteCronscalerEnabled() { this->cronscalerEnabled_ = nullptr;};
    inline bool cronscalerEnabled() const { DARABONBA_PTR_GET_DEFAULT(cronscalerEnabled_, false) };
    inline ListServicesShrinkRequest& setCronscalerEnabled(bool cronscalerEnabled) { DARABONBA_PTR_SET_VALUE(cronscalerEnabled_, cronscalerEnabled) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListServicesShrinkRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // gateway Field Functions 
    bool hasGateway() const { return this->gateway_ != nullptr;};
    void deleteGateway() { this->gateway_ = nullptr;};
    inline string gateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
    inline ListServicesShrinkRequest& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListServicesShrinkRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // includeNoWorkspace Field Functions 
    bool hasIncludeNoWorkspace() const { return this->includeNoWorkspace_ != nullptr;};
    void deleteIncludeNoWorkspace() { this->includeNoWorkspace_ = nullptr;};
    inline bool includeNoWorkspace() const { DARABONBA_PTR_GET_DEFAULT(includeNoWorkspace_, false) };
    inline ListServicesShrinkRequest& setIncludeNoWorkspace(bool includeNoWorkspace) { DARABONBA_PTR_SET_VALUE(includeNoWorkspace_, includeNoWorkspace) };


    // labelShrink Field Functions 
    bool hasLabelShrink() const { return this->labelShrink_ != nullptr;};
    void deleteLabelShrink() { this->labelShrink_ = nullptr;};
    inline string labelShrink() const { DARABONBA_PTR_GET_DEFAULT(labelShrink_, "") };
    inline ListServicesShrinkRequest& setLabelShrink(string labelShrink) { DARABONBA_PTR_SET_VALUE(labelShrink_, labelShrink) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListServicesShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListServicesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListServicesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentServiceUid Field Functions 
    bool hasParentServiceUid() const { return this->parentServiceUid_ != nullptr;};
    void deleteParentServiceUid() { this->parentServiceUid_ = nullptr;};
    inline string parentServiceUid() const { DARABONBA_PTR_GET_DEFAULT(parentServiceUid_, "") };
    inline ListServicesShrinkRequest& setParentServiceUid(string parentServiceUid) { DARABONBA_PTR_SET_VALUE(parentServiceUid_, parentServiceUid) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline ListServicesShrinkRequest& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // resourceAliasName Field Functions 
    bool hasResourceAliasName() const { return this->resourceAliasName_ != nullptr;};
    void deleteResourceAliasName() { this->resourceAliasName_ = nullptr;};
    inline string resourceAliasName() const { DARABONBA_PTR_GET_DEFAULT(resourceAliasName_, "") };
    inline ListServicesShrinkRequest& setResourceAliasName(string resourceAliasName) { DARABONBA_PTR_SET_VALUE(resourceAliasName_, resourceAliasName) };


    // resourceBurstable Field Functions 
    bool hasResourceBurstable() const { return this->resourceBurstable_ != nullptr;};
    void deleteResourceBurstable() { this->resourceBurstable_ = nullptr;};
    inline bool resourceBurstable() const { DARABONBA_PTR_GET_DEFAULT(resourceBurstable_, false) };
    inline ListServicesShrinkRequest& setResourceBurstable(bool resourceBurstable) { DARABONBA_PTR_SET_VALUE(resourceBurstable_, resourceBurstable) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListServicesShrinkRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListServicesShrinkRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListServicesShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ListServicesShrinkRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListServicesShrinkRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline ListServicesShrinkRequest& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListServicesShrinkRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // serviceUid Field Functions 
    bool hasServiceUid() const { return this->serviceUid_ != nullptr;};
    void deleteServiceUid() { this->serviceUid_ = nullptr;};
    inline string serviceUid() const { DARABONBA_PTR_GET_DEFAULT(serviceUid_, "") };
    inline ListServicesShrinkRequest& setServiceUid(string serviceUid) { DARABONBA_PTR_SET_VALUE(serviceUid_, serviceUid) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListServicesShrinkRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // trafficState Field Functions 
    bool hasTrafficState() const { return this->trafficState_ != nullptr;};
    void deleteTrafficState() { this->trafficState_ = nullptr;};
    inline string trafficState() const { DARABONBA_PTR_GET_DEFAULT(trafficState_, "") };
    inline ListServicesShrinkRequest& setTrafficState(string trafficState) { DARABONBA_PTR_SET_VALUE(trafficState_, trafficState) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListServicesShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<bool> autoscalerEnabled_ = nullptr;
    std::shared_ptr<bool> cronscalerEnabled_ = nullptr;
    // The field that is used for fuzzy matches. The system performs fuzzy matches only by service name.
    std::shared_ptr<string> filter_ = nullptr;
    // The private gateway ID.
    std::shared_ptr<string> gateway_ = nullptr;
    // The name of the service group. For more information about how to query the name of a service group, see [ListServices](https://help.aliyun.com/document_detail/412109.html).
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<bool> includeNoWorkspace_ = nullptr;
    // The tag that is used to filter services.
    std::shared_ptr<string> labelShrink_ = nullptr;
    // The sorting order. Valid values:
    // 
    // *   desc (default): The query results are sorted in descending order.
    // *   asc: The query results are sorted in ascending order.
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the primary service that corresponds to the Band member service.
    std::shared_ptr<string> parentServiceUid_ = nullptr;
    // The quota ID.
    std::shared_ptr<string> quotaId_ = nullptr;
    std::shared_ptr<string> resourceAliasName_ = nullptr;
    std::shared_ptr<bool> resourceBurstable_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    // The name or ID of the resource group to which the service belongs.
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    // The server role.
    // 
    // Valid values:
    // 
    // *   DataLoader
    // *   FrontEnd
    // *   DataSet
    // *   SDProxy
    // *   LLMSscheduler
    // *   ScalableJob
    // *   LLMGateway
    // *   Job
    // *   Queue
    std::shared_ptr<string> role_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The service state.
    // 
    // Valid values:
    // 
    // *   Creating
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Stopped
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Failed
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Complete
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Cloning
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Stopping
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Updating
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Waiting
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   HotUpdate
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Committing
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Starting
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DeleteFailed
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Running
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Developing
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Scaling
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Deleted
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Pending
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Deleting
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> serviceStatus_ = nullptr;
    // The service type. Valid values:
    // 
    // *   Async
    // *   Standard
    // *   Offline Task
    // *   Proxima
    // 
    // Valid values:
    // 
    // *   Async
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Standard
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   OfflineTask
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Proxima
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> serviceType_ = nullptr;
    // The user ID (UID) of the service.
    std::shared_ptr<string> serviceUid_ = nullptr;
    // The sort field. By default, the query results are sorted by the timestamp type in descending order.
    std::shared_ptr<string> sort_ = nullptr;
    std::shared_ptr<string> trafficState_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
