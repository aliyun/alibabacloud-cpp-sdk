// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECABNORMALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECABNORMALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecAbnormalsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecAbnormalsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalId, abnormalId_);
      DARABONBA_PTR_TO_JSON(AbnormalLevel, abnormalLevel_);
      DARABONBA_PTR_TO_JSON(AbnormalTag, abnormalTag_);
      DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiTag, apiTag_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_TO_JSON(OrderKey, orderKey_);
      DARABONBA_PTR_TO_JSON(OrderWay, orderWay_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecAbnormalsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalId, abnormalId_);
      DARABONBA_PTR_FROM_JSON(AbnormalLevel, abnormalLevel_);
      DARABONBA_PTR_FROM_JSON(AbnormalTag, abnormalTag_);
      DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiTag, apiTag_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_FROM_JSON(OrderKey, orderKey_);
      DARABONBA_PTR_FROM_JSON(OrderWay, orderWay_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
    };
    DescribeApisecAbnormalsRequest() = default ;
    DescribeApisecAbnormalsRequest(const DescribeApisecAbnormalsRequest &) = default ;
    DescribeApisecAbnormalsRequest(DescribeApisecAbnormalsRequest &&) = default ;
    DescribeApisecAbnormalsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecAbnormalsRequest() = default ;
    DescribeApisecAbnormalsRequest& operator=(const DescribeApisecAbnormalsRequest &) = default ;
    DescribeApisecAbnormalsRequest& operator=(DescribeApisecAbnormalsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalId_ == nullptr
        && return this->abnormalLevel_ == nullptr && return this->abnormalTag_ == nullptr && return this->apiFormat_ == nullptr && return this->apiId_ == nullptr && return this->apiTag_ == nullptr
        && return this->clusterId_ == nullptr && return this->endTime_ == nullptr && return this->instanceId_ == nullptr && return this->matchedHost_ == nullptr && return this->orderKey_ == nullptr
        && return this->orderWay_ == nullptr && return this->origin_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceManagerResourceGroupId_ == nullptr && return this->startTime_ == nullptr && return this->userStatus_ == nullptr; };
    // abnormalId Field Functions 
    bool hasAbnormalId() const { return this->abnormalId_ != nullptr;};
    void deleteAbnormalId() { this->abnormalId_ = nullptr;};
    inline string abnormalId() const { DARABONBA_PTR_GET_DEFAULT(abnormalId_, "") };
    inline DescribeApisecAbnormalsRequest& setAbnormalId(string abnormalId) { DARABONBA_PTR_SET_VALUE(abnormalId_, abnormalId) };


    // abnormalLevel Field Functions 
    bool hasAbnormalLevel() const { return this->abnormalLevel_ != nullptr;};
    void deleteAbnormalLevel() { this->abnormalLevel_ = nullptr;};
    inline string abnormalLevel() const { DARABONBA_PTR_GET_DEFAULT(abnormalLevel_, "") };
    inline DescribeApisecAbnormalsRequest& setAbnormalLevel(string abnormalLevel) { DARABONBA_PTR_SET_VALUE(abnormalLevel_, abnormalLevel) };


    // abnormalTag Field Functions 
    bool hasAbnormalTag() const { return this->abnormalTag_ != nullptr;};
    void deleteAbnormalTag() { this->abnormalTag_ = nullptr;};
    inline string abnormalTag() const { DARABONBA_PTR_GET_DEFAULT(abnormalTag_, "") };
    inline DescribeApisecAbnormalsRequest& setAbnormalTag(string abnormalTag) { DARABONBA_PTR_SET_VALUE(abnormalTag_, abnormalTag) };


    // apiFormat Field Functions 
    bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
    void deleteApiFormat() { this->apiFormat_ = nullptr;};
    inline string apiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
    inline DescribeApisecAbnormalsRequest& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApisecAbnormalsRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiTag Field Functions 
    bool hasApiTag() const { return this->apiTag_ != nullptr;};
    void deleteApiTag() { this->apiTag_ = nullptr;};
    inline string apiTag() const { DARABONBA_PTR_GET_DEFAULT(apiTag_, "") };
    inline DescribeApisecAbnormalsRequest& setApiTag(string apiTag) { DARABONBA_PTR_SET_VALUE(apiTag_, apiTag) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeApisecAbnormalsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeApisecAbnormalsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApisecAbnormalsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // matchedHost Field Functions 
    bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
    void deleteMatchedHost() { this->matchedHost_ = nullptr;};
    inline string matchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
    inline DescribeApisecAbnormalsRequest& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


    // orderKey Field Functions 
    bool hasOrderKey() const { return this->orderKey_ != nullptr;};
    void deleteOrderKey() { this->orderKey_ = nullptr;};
    inline string orderKey() const { DARABONBA_PTR_GET_DEFAULT(orderKey_, "") };
    inline DescribeApisecAbnormalsRequest& setOrderKey(string orderKey) { DARABONBA_PTR_SET_VALUE(orderKey_, orderKey) };


    // orderWay Field Functions 
    bool hasOrderWay() const { return this->orderWay_ != nullptr;};
    void deleteOrderWay() { this->orderWay_ = nullptr;};
    inline string orderWay() const { DARABONBA_PTR_GET_DEFAULT(orderWay_, "") };
    inline DescribeApisecAbnormalsRequest& setOrderWay(string orderWay) { DARABONBA_PTR_SET_VALUE(orderWay_, orderWay) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline DescribeApisecAbnormalsRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeApisecAbnormalsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeApisecAbnormalsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApisecAbnormalsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeApisecAbnormalsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeApisecAbnormalsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline string userStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, "") };
    inline DescribeApisecAbnormalsRequest& setUserStatus(string userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


  protected:
    // The ID of the risk.
    std::shared_ptr<string> abnormalId_ = nullptr;
    // The level of the risk. Valid values:
    // 
    // * **high**
    // * **medium**
    // * **low**
    std::shared_ptr<string> abnormalLevel_ = nullptr;
    // The type of the risk.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported types of risks.
    std::shared_ptr<string> abnormalTag_ = nullptr;
    // The risk-related API.
    std::shared_ptr<string> apiFormat_ = nullptr;
    // The ID of the risk-related API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The business purpose of the API.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the business purposes of APIs.
    std::shared_ptr<string> apiTag_ = nullptr;
    // The ID of the hybrid cloud cluster.
    // 
    // >  This parameter is available only in hybrid cloud scenarios. You can call the [DescribeHybridCloudClusters](https://help.aliyun.com/document_detail/2849376.html) operation to query hybrid cloud clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The end of the time range to query. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The domain name or IP address of the API.
    std::shared_ptr<string> matchedHost_ = nullptr;
    // The name of the sorting field. Valid values:
    // 
    // *   **discoverTime** (default): indicates the time when a risk was first detected.
    // *   **abnormalLevel**: indicates the level of a risk.
    // *   **latestDiscoverTime**: indicates the time when a risk was last detected.
    std::shared_ptr<string> orderKey_ = nullptr;
    // The sorting method. Valid values:
    // 
    // * **desc (default)**: in descending order
    // * **asc**: in ascending order
    std::shared_ptr<string> orderWay_ = nullptr;
    // The source of the risk type. Valid values:
    // 
    // * **custom**
    // * **default**
    std::shared_ptr<string> origin_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: **10**.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the risk. Valid values:
    // 
    // * **toBeConfirmed**
    // * **confirmed**
    // * **toBeFixed**
    // * **fixed**
    // * **ignored**
    std::shared_ptr<string> userStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
