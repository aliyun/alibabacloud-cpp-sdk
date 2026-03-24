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
        && this->abnormalLevel_ == nullptr && this->abnormalTag_ == nullptr && this->apiFormat_ == nullptr && this->apiId_ == nullptr && this->apiTag_ == nullptr
        && this->clusterId_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->matchedHost_ == nullptr && this->orderKey_ == nullptr
        && this->orderWay_ == nullptr && this->origin_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->resourceManagerResourceGroupId_ == nullptr && this->startTime_ == nullptr && this->userStatus_ == nullptr; };
    // abnormalId Field Functions 
    bool hasAbnormalId() const { return this->abnormalId_ != nullptr;};
    void deleteAbnormalId() { this->abnormalId_ = nullptr;};
    inline string getAbnormalId() const { DARABONBA_PTR_GET_DEFAULT(abnormalId_, "") };
    inline DescribeApisecAbnormalsRequest& setAbnormalId(string abnormalId) { DARABONBA_PTR_SET_VALUE(abnormalId_, abnormalId) };


    // abnormalLevel Field Functions 
    bool hasAbnormalLevel() const { return this->abnormalLevel_ != nullptr;};
    void deleteAbnormalLevel() { this->abnormalLevel_ = nullptr;};
    inline string getAbnormalLevel() const { DARABONBA_PTR_GET_DEFAULT(abnormalLevel_, "") };
    inline DescribeApisecAbnormalsRequest& setAbnormalLevel(string abnormalLevel) { DARABONBA_PTR_SET_VALUE(abnormalLevel_, abnormalLevel) };


    // abnormalTag Field Functions 
    bool hasAbnormalTag() const { return this->abnormalTag_ != nullptr;};
    void deleteAbnormalTag() { this->abnormalTag_ = nullptr;};
    inline string getAbnormalTag() const { DARABONBA_PTR_GET_DEFAULT(abnormalTag_, "") };
    inline DescribeApisecAbnormalsRequest& setAbnormalTag(string abnormalTag) { DARABONBA_PTR_SET_VALUE(abnormalTag_, abnormalTag) };


    // apiFormat Field Functions 
    bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
    void deleteApiFormat() { this->apiFormat_ = nullptr;};
    inline string getApiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
    inline DescribeApisecAbnormalsRequest& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApisecAbnormalsRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiTag Field Functions 
    bool hasApiTag() const { return this->apiTag_ != nullptr;};
    void deleteApiTag() { this->apiTag_ = nullptr;};
    inline string getApiTag() const { DARABONBA_PTR_GET_DEFAULT(apiTag_, "") };
    inline DescribeApisecAbnormalsRequest& setApiTag(string apiTag) { DARABONBA_PTR_SET_VALUE(apiTag_, apiTag) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeApisecAbnormalsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeApisecAbnormalsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApisecAbnormalsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // matchedHost Field Functions 
    bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
    void deleteMatchedHost() { this->matchedHost_ = nullptr;};
    inline string getMatchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
    inline DescribeApisecAbnormalsRequest& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


    // orderKey Field Functions 
    bool hasOrderKey() const { return this->orderKey_ != nullptr;};
    void deleteOrderKey() { this->orderKey_ = nullptr;};
    inline string getOrderKey() const { DARABONBA_PTR_GET_DEFAULT(orderKey_, "") };
    inline DescribeApisecAbnormalsRequest& setOrderKey(string orderKey) { DARABONBA_PTR_SET_VALUE(orderKey_, orderKey) };


    // orderWay Field Functions 
    bool hasOrderWay() const { return this->orderWay_ != nullptr;};
    void deleteOrderWay() { this->orderWay_ = nullptr;};
    inline string getOrderWay() const { DARABONBA_PTR_GET_DEFAULT(orderWay_, "") };
    inline DescribeApisecAbnormalsRequest& setOrderWay(string orderWay) { DARABONBA_PTR_SET_VALUE(orderWay_, orderWay) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline DescribeApisecAbnormalsRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeApisecAbnormalsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeApisecAbnormalsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApisecAbnormalsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeApisecAbnormalsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeApisecAbnormalsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline string getUserStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, "") };
    inline DescribeApisecAbnormalsRequest& setUserStatus(string userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


  protected:
    // The ID of the security risk.
    shared_ptr<string> abnormalId_ {};
    // The severity level of the security risk. Valid values:
    // 
    // - **high**: High.
    // 
    // - **medium**: Medium.
    // 
    // - **low**: Low.
    shared_ptr<string> abnormalLevel_ {};
    // The type of the security risk.
    // 
    // > Call [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) to query the supported risk types.
    shared_ptr<string> abnormalTag_ {};
    // The path of the API that is associated with the security risk.
    shared_ptr<string> apiFormat_ {};
    // The ID of the API that is associated with the security risk.
    shared_ptr<string> apiId_ {};
    // The business purpose of the API.
    // 
    // > Call [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) to query the supported business purposes.
    shared_ptr<string> apiTag_ {};
    // The ID of the hybrid cloud WAF cluster.
    // 
    // > This parameter is required only for hybrid cloud scenarios. Call [DescribeHybridCloudClusters](https://help.aliyun.com/document_detail/2849376.html) to query the IDs of hybrid cloud WAF clusters.
    shared_ptr<string> clusterId_ {};
    // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<string> endTime_ {};
    // The ID of the WAF instance.
    // 
    // > Call [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The domain name or IP address that the API resides on.
    shared_ptr<string> matchedHost_ {};
    // The field by which the query results are sorted. Valid values:
    // 
    // - **discoverTime** (default): The time when the risk was first detected.
    // 
    // - **abnormalLevel**: The risk level.
    // 
    // - **latestDiscoverTime**: The most recent time when the risk was detected.
    shared_ptr<string> orderKey_ {};
    // The sorting order. Valid values:
    // 
    // - **desc** (default): Descending order.
    // 
    // - **asc**: Ascending order.
    shared_ptr<string> orderWay_ {};
    // The source of the risk detection rule. Valid values:
    // 
    // - **custom**: Custom rule.
    // 
    // - **default**: Built-in rule.
    shared_ptr<string> origin_ {};
    // The page number of the returned page. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Default value: **10**. Maximum value: 100.
    shared_ptr<int64_t> pageSize_ {};
    // The region in which the WAF instance resides. Valid values:
    // 
    // - **cn-hangzhou**: Chinese mainland.
    // 
    // - **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The start of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<string> startTime_ {};
    // The handling status of the security risk. Valid values:
    // 
    // - **toBeConfirmed**: To be confirmed.
    // 
    // - **confirmed**: Confirmed.
    // 
    // - **toBeFixed**: To be fixed.
    // 
    // - **fixed**: Fixed (manually verified).
    // 
    // - **ignored**: Ignored.
    // 
    // - **toBeVerified**: To be verified by the system.
    // 
    // - **notFixed**: Verification failed.
    // 
    // - **systemFixed**: Fixed (verified by the system).
    shared_ptr<string> userStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
