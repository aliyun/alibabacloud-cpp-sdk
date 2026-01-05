// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECAPIRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECAPIRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecApiResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecApiResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiMethod, apiMethod_);
      DARABONBA_PTR_TO_JSON(ApiStatus, apiStatus_);
      DARABONBA_PTR_TO_JSON(ApiTag, apiTag_);
      DARABONBA_PTR_TO_JSON(ApiType, apiType_);
      DARABONBA_PTR_TO_JSON(AuthFlag, authFlag_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Follow, follow_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(OrderKey, orderKey_);
      DARABONBA_PTR_TO_JSON(OrderWay, orderWay_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestSensitiveType, requestSensitiveType_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_TO_JSON(SensitiveType, sensitiveType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecApiResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiMethod, apiMethod_);
      DARABONBA_PTR_FROM_JSON(ApiStatus, apiStatus_);
      DARABONBA_PTR_FROM_JSON(ApiTag, apiTag_);
      DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
      DARABONBA_PTR_FROM_JSON(AuthFlag, authFlag_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Follow, follow_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(OrderKey, orderKey_);
      DARABONBA_PTR_FROM_JSON(OrderWay, orderWay_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestSensitiveType, requestSensitiveType_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_FROM_JSON(SensitiveType, sensitiveType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeApisecApiResourcesRequest() = default ;
    DescribeApisecApiResourcesRequest(const DescribeApisecApiResourcesRequest &) = default ;
    DescribeApisecApiResourcesRequest(DescribeApisecApiResourcesRequest &&) = default ;
    DescribeApisecApiResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecApiResourcesRequest() = default ;
    DescribeApisecApiResourcesRequest& operator=(const DescribeApisecApiResourcesRequest &) = default ;
    DescribeApisecApiResourcesRequest& operator=(DescribeApisecApiResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiFormat_ == nullptr
        && this->apiId_ == nullptr && this->apiMethod_ == nullptr && this->apiStatus_ == nullptr && this->apiTag_ == nullptr && this->apiType_ == nullptr
        && this->authFlag_ == nullptr && this->clusterId_ == nullptr && this->endTime_ == nullptr && this->follow_ == nullptr && this->instanceId_ == nullptr
        && this->matchedHost_ == nullptr && this->note_ == nullptr && this->orderKey_ == nullptr && this->orderWay_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->requestSensitiveType_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->sensitiveLevel_ == nullptr
        && this->sensitiveType_ == nullptr && this->startTime_ == nullptr; };
    // apiFormat Field Functions 
    bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
    void deleteApiFormat() { this->apiFormat_ = nullptr;};
    inline string getApiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
    inline DescribeApisecApiResourcesRequest& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApisecApiResourcesRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiMethod Field Functions 
    bool hasApiMethod() const { return this->apiMethod_ != nullptr;};
    void deleteApiMethod() { this->apiMethod_ = nullptr;};
    inline string getApiMethod() const { DARABONBA_PTR_GET_DEFAULT(apiMethod_, "") };
    inline DescribeApisecApiResourcesRequest& setApiMethod(string apiMethod) { DARABONBA_PTR_SET_VALUE(apiMethod_, apiMethod) };


    // apiStatus Field Functions 
    bool hasApiStatus() const { return this->apiStatus_ != nullptr;};
    void deleteApiStatus() { this->apiStatus_ = nullptr;};
    inline string getApiStatus() const { DARABONBA_PTR_GET_DEFAULT(apiStatus_, "") };
    inline DescribeApisecApiResourcesRequest& setApiStatus(string apiStatus) { DARABONBA_PTR_SET_VALUE(apiStatus_, apiStatus) };


    // apiTag Field Functions 
    bool hasApiTag() const { return this->apiTag_ != nullptr;};
    void deleteApiTag() { this->apiTag_ = nullptr;};
    inline string getApiTag() const { DARABONBA_PTR_GET_DEFAULT(apiTag_, "") };
    inline DescribeApisecApiResourcesRequest& setApiTag(string apiTag) { DARABONBA_PTR_SET_VALUE(apiTag_, apiTag) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline DescribeApisecApiResourcesRequest& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // authFlag Field Functions 
    bool hasAuthFlag() const { return this->authFlag_ != nullptr;};
    void deleteAuthFlag() { this->authFlag_ = nullptr;};
    inline string getAuthFlag() const { DARABONBA_PTR_GET_DEFAULT(authFlag_, "") };
    inline DescribeApisecApiResourcesRequest& setAuthFlag(string authFlag) { DARABONBA_PTR_SET_VALUE(authFlag_, authFlag) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeApisecApiResourcesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeApisecApiResourcesRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // follow Field Functions 
    bool hasFollow() const { return this->follow_ != nullptr;};
    void deleteFollow() { this->follow_ = nullptr;};
    inline int64_t getFollow() const { DARABONBA_PTR_GET_DEFAULT(follow_, 0L) };
    inline DescribeApisecApiResourcesRequest& setFollow(int64_t follow) { DARABONBA_PTR_SET_VALUE(follow_, follow) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApisecApiResourcesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // matchedHost Field Functions 
    bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
    void deleteMatchedHost() { this->matchedHost_ = nullptr;};
    inline string getMatchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
    inline DescribeApisecApiResourcesRequest& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline DescribeApisecApiResourcesRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // orderKey Field Functions 
    bool hasOrderKey() const { return this->orderKey_ != nullptr;};
    void deleteOrderKey() { this->orderKey_ = nullptr;};
    inline string getOrderKey() const { DARABONBA_PTR_GET_DEFAULT(orderKey_, "") };
    inline DescribeApisecApiResourcesRequest& setOrderKey(string orderKey) { DARABONBA_PTR_SET_VALUE(orderKey_, orderKey) };


    // orderWay Field Functions 
    bool hasOrderWay() const { return this->orderWay_ != nullptr;};
    void deleteOrderWay() { this->orderWay_ = nullptr;};
    inline string getOrderWay() const { DARABONBA_PTR_GET_DEFAULT(orderWay_, "") };
    inline DescribeApisecApiResourcesRequest& setOrderWay(string orderWay) { DARABONBA_PTR_SET_VALUE(orderWay_, orderWay) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeApisecApiResourcesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeApisecApiResourcesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApisecApiResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestSensitiveType Field Functions 
    bool hasRequestSensitiveType() const { return this->requestSensitiveType_ != nullptr;};
    void deleteRequestSensitiveType() { this->requestSensitiveType_ = nullptr;};
    inline string getRequestSensitiveType() const { DARABONBA_PTR_GET_DEFAULT(requestSensitiveType_, "") };
    inline DescribeApisecApiResourcesRequest& setRequestSensitiveType(string requestSensitiveType) { DARABONBA_PTR_SET_VALUE(requestSensitiveType_, requestSensitiveType) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeApisecApiResourcesRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // sensitiveLevel Field Functions 
    bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
    void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
    inline string getSensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
    inline DescribeApisecApiResourcesRequest& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


    // sensitiveType Field Functions 
    bool hasSensitiveType() const { return this->sensitiveType_ != nullptr;};
    void deleteSensitiveType() { this->sensitiveType_ = nullptr;};
    inline string getSensitiveType() const { DARABONBA_PTR_GET_DEFAULT(sensitiveType_, "") };
    inline DescribeApisecApiResourcesRequest& setSensitiveType(string sensitiveType) { DARABONBA_PTR_SET_VALUE(sensitiveType_, sensitiveType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeApisecApiResourcesRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The API.
    shared_ptr<string> apiFormat_ {};
    // The ID of the API.
    shared_ptr<string> apiId_ {};
    // The request method of the API. Valid values:
    // 
    // * **GET**
    // * **POST**
    // * **HEAD**
    // * **PUT**
    // * **DELETE**
    // * **CONNECT**
    // * **PATCH**
    // * **OPTIONS**
    shared_ptr<string> apiMethod_ {};
    // The API status. Valid values:
    // 
    // * **NewbornInterface**: The API is newly added.
    // * **OfflineInterface**: The API is inactive.
    // * **normal**: The API is normal.
    shared_ptr<string> apiStatus_ {};
    // The business purpose of the API.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the business purposes of APIs.
    shared_ptr<string> apiTag_ {};
    // The service object. Valid values:
    // 
    // * **PublicAPI**: public services
    // * **ThirdpartAPI**: cooperation with third-party partners
    // * **InternalAPI**: internal office
    shared_ptr<string> apiType_ {};
    // Specifies whether authentication is required. Valid values:
    // 
    // * **0**: Authentication is required.
    // * **1**: Authentication is not required.
    shared_ptr<string> authFlag_ {};
    // The ID of the hybrid cloud cluster.
    // 
    // >  This parameter is available only in hybrid cloud scenarios. You can call the [DescribeHybridCloudClusters](https://help.aliyun.com/document_detail/2849376.html) operation to query hybrid cloud clusters.
    shared_ptr<string> clusterId_ {};
    // The end of the time range to query. This value is a UNIX timestamp in UTC. Unit: seconds.
    shared_ptr<string> endTime_ {};
    // Specifies whether to follow the API. Valid values:
    // 
    // * **1**: follows the API.
    // * **0**: does not follow the API.
    shared_ptr<int64_t> follow_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The domain name or IP address of the API.
    shared_ptr<string> matchedHost_ {};
    // The remarks.
    shared_ptr<string> note_ {};
    // The name of the sorting field. Valid values:
    // 
    // * **allCnt**: the total number of calls to the API in the previous 30 days
    // * **botCnt**: the number of bot-initiated requests in the previous 30 days
    // * **crossBorderCnt**: the number of cross-border requests in the previous 30 days
    // * **abnormalNum**: the number of API-related risks
    // * **eventNum**: the number of API-related security events
    // * **farthestTs**: the time when the API was first detected
    // * **lastestTs**: the time of the most recent access to the API
    shared_ptr<string> orderKey_ {};
    // The sorting method. Valid values:
    // 
    // * **desc** (default): descending order
    // * **asc**: ascending order
    shared_ptr<string> orderWay_ {};
    // The page number. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Default value: **10**.
    shared_ptr<int64_t> pageSize_ {};
    // The region ID of the WAF instance. Value:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The sensitive data type in the request.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported sensitive data types.
    shared_ptr<string> requestSensitiveType_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The sensitivity level of the API. Valid values:
    // 
    // * **L1**: high sensitivity
    // * **L2**: moderate sensitivity
    // * **L3**: low sensitivity
    // * **N**: non-sensitivity
    shared_ptr<string> sensitiveLevel_ {};
    // The sensitive data type in the response.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported sensitive data types.
    shared_ptr<string> sensitiveType_ {};
    // The beginning of the time range to query. This value is a UNIX timestamp in UTC. Unit: seconds.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
