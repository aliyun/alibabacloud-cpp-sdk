// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiTag, apiTag_);
      DARABONBA_PTR_TO_JSON(AttackIp, attackIp_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(EventTag, eventTag_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_TO_JSON(OrderKey, orderKey_);
      DARABONBA_PTR_TO_JSON(OrderWay, orderWay_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTs, startTs_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiTag, apiTag_);
      DARABONBA_PTR_FROM_JSON(AttackIp, attackIp_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(EventTag, eventTag_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_FROM_JSON(OrderKey, orderKey_);
      DARABONBA_PTR_FROM_JSON(OrderWay, orderWay_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTs, startTs_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
    };
    DescribeApisecEventsRequest() = default ;
    DescribeApisecEventsRequest(const DescribeApisecEventsRequest &) = default ;
    DescribeApisecEventsRequest(DescribeApisecEventsRequest &&) = default ;
    DescribeApisecEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecEventsRequest() = default ;
    DescribeApisecEventsRequest& operator=(const DescribeApisecEventsRequest &) = default ;
    DescribeApisecEventsRequest& operator=(DescribeApisecEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiFormat_ != nullptr
        && this->apiId_ != nullptr && this->apiTag_ != nullptr && this->attackIp_ != nullptr && this->clusterId_ != nullptr && this->endTs_ != nullptr
        && this->eventId_ != nullptr && this->eventLevel_ != nullptr && this->eventTag_ != nullptr && this->instanceId_ != nullptr && this->matchedHost_ != nullptr
        && this->orderKey_ != nullptr && this->orderWay_ != nullptr && this->origin_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->startTs_ != nullptr && this->userStatus_ != nullptr; };
    // apiFormat Field Functions 
    bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
    void deleteApiFormat() { this->apiFormat_ = nullptr;};
    inline string apiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
    inline DescribeApisecEventsRequest& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApisecEventsRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiTag Field Functions 
    bool hasApiTag() const { return this->apiTag_ != nullptr;};
    void deleteApiTag() { this->apiTag_ = nullptr;};
    inline string apiTag() const { DARABONBA_PTR_GET_DEFAULT(apiTag_, "") };
    inline DescribeApisecEventsRequest& setApiTag(string apiTag) { DARABONBA_PTR_SET_VALUE(apiTag_, apiTag) };


    // attackIp Field Functions 
    bool hasAttackIp() const { return this->attackIp_ != nullptr;};
    void deleteAttackIp() { this->attackIp_ = nullptr;};
    inline string attackIp() const { DARABONBA_PTR_GET_DEFAULT(attackIp_, "") };
    inline DescribeApisecEventsRequest& setAttackIp(string attackIp) { DARABONBA_PTR_SET_VALUE(attackIp_, attackIp) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeApisecEventsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline int64_t endTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, 0L) };
    inline DescribeApisecEventsRequest& setEndTs(int64_t endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeApisecEventsRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline DescribeApisecEventsRequest& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventTag Field Functions 
    bool hasEventTag() const { return this->eventTag_ != nullptr;};
    void deleteEventTag() { this->eventTag_ = nullptr;};
    inline string eventTag() const { DARABONBA_PTR_GET_DEFAULT(eventTag_, "") };
    inline DescribeApisecEventsRequest& setEventTag(string eventTag) { DARABONBA_PTR_SET_VALUE(eventTag_, eventTag) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApisecEventsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // matchedHost Field Functions 
    bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
    void deleteMatchedHost() { this->matchedHost_ = nullptr;};
    inline string matchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
    inline DescribeApisecEventsRequest& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


    // orderKey Field Functions 
    bool hasOrderKey() const { return this->orderKey_ != nullptr;};
    void deleteOrderKey() { this->orderKey_ = nullptr;};
    inline string orderKey() const { DARABONBA_PTR_GET_DEFAULT(orderKey_, "") };
    inline DescribeApisecEventsRequest& setOrderKey(string orderKey) { DARABONBA_PTR_SET_VALUE(orderKey_, orderKey) };


    // orderWay Field Functions 
    bool hasOrderWay() const { return this->orderWay_ != nullptr;};
    void deleteOrderWay() { this->orderWay_ = nullptr;};
    inline string orderWay() const { DARABONBA_PTR_GET_DEFAULT(orderWay_, "") };
    inline DescribeApisecEventsRequest& setOrderWay(string orderWay) { DARABONBA_PTR_SET_VALUE(orderWay_, orderWay) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline DescribeApisecEventsRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeApisecEventsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeApisecEventsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApisecEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeApisecEventsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // startTs Field Functions 
    bool hasStartTs() const { return this->startTs_ != nullptr;};
    void deleteStartTs() { this->startTs_ = nullptr;};
    inline int64_t startTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
    inline DescribeApisecEventsRequest& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline string userStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, "") };
    inline DescribeApisecEventsRequest& setUserStatus(string userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


  protected:
    // The API.
    std::shared_ptr<string> apiFormat_ = nullptr;
    // The ID of the event-related API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The business purpose of the API.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the business purposes of APIs.
    std::shared_ptr<string> apiTag_ = nullptr;
    // The Attack source IP.
    std::shared_ptr<string> attackIp_ = nullptr;
    // The ID of the hybrid cloud cluster.
    // 
    // >  This parameter is available only in hybrid cloud scenarios. You can call the [DescribeHybridCloudClusters](https://help.aliyun.com/document_detail/2849376.html) operation to query hybrid cloud clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The end of the time range to query. This value is a UNIX timestamp in UTC. Unit: seconds.
    std::shared_ptr<int64_t> endTs_ = nullptr;
    // The ID of the API security event.
    std::shared_ptr<string> eventId_ = nullptr;
    // The severity level of the event. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> eventLevel_ = nullptr;
    // The type of the event.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported event types.
    std::shared_ptr<string> eventTag_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The domain name or IP address of the API.
    std::shared_ptr<string> matchedHost_ = nullptr;
    // The name of the sorting field. Valid values:
    // 
    // *   **allCnt**: the number of attacks
    // *   **startTs**: the start time of the event
    // *   **endTs**: the end time of the event
    std::shared_ptr<string> orderKey_ = nullptr;
    // The sorting method. Valid values:
    // 
    // *   **desc** (default): descending order
    // *   **asc**: ascending order
    std::shared_ptr<string> orderWay_ = nullptr;
    // The source of the event type. Valid values:
    // 
    // *   **custom**
    // *   **default**
    std::shared_ptr<string> origin_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: **10**.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID of the WAF instance. Value:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The beginning of the time range to query. This value is a UNIX timestamp in UTC. Unit: seconds.
    std::shared_ptr<int64_t> startTs_ = nullptr;
    // The event status. Valid values:
    // 
    // *   **toBeConfirmed**
    // *   **confirmed**
    // *   **ignored**
    std::shared_ptr<string> userStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
