// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ExpireEndTime, expireEndTime_);
      DARABONBA_PTR_TO_JSON(ExpireStartTime, expireStartTime_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ExpireEndTime, expireEndTime_);
      DARABONBA_PTR_FROM_JSON(ExpireStartTime, expireStartTime_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeInstancesRequest() = default ;
    DescribeInstancesRequest(const DescribeInstancesRequest &) = default ;
    DescribeInstancesRequest(DescribeInstancesRequest &&) = default ;
    DescribeInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesRequest() = default ;
    DescribeInstancesRequest& operator=(const DescribeInstancesRequest &) = default ;
    DescribeInstancesRequest& operator=(DescribeInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edition_ != nullptr
        && this->enabled_ != nullptr && this->expireEndTime_ != nullptr && this->expireStartTime_ != nullptr && this->instanceIds_ != nullptr && this->ip_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->remark_ != nullptr && this->resourceGroupId_ != nullptr && this->status_ != nullptr
        && this->tag_ != nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline int32_t edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, 0) };
    inline DescribeInstancesRequest& setEdition(int32_t edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline int32_t enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, 0) };
    inline DescribeInstancesRequest& setEnabled(int32_t enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // expireEndTime Field Functions 
    bool hasExpireEndTime() const { return this->expireEndTime_ != nullptr;};
    void deleteExpireEndTime() { this->expireEndTime_ = nullptr;};
    inline int64_t expireEndTime() const { DARABONBA_PTR_GET_DEFAULT(expireEndTime_, 0L) };
    inline DescribeInstancesRequest& setExpireEndTime(int64_t expireEndTime) { DARABONBA_PTR_SET_VALUE(expireEndTime_, expireEndTime) };


    // expireStartTime Field Functions 
    bool hasExpireStartTime() const { return this->expireStartTime_ != nullptr;};
    void deleteExpireStartTime() { this->expireStartTime_ = nullptr;};
    inline int64_t expireStartTime() const { DARABONBA_PTR_GET_DEFAULT(expireStartTime_, 0L) };
    inline DescribeInstancesRequest& setExpireStartTime(int64_t expireStartTime) { DARABONBA_PTR_SET_VALUE(expireStartTime_, expireStartTime) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeInstancesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeInstancesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeInstancesRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeInstancesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeInstancesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeInstancesRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInstancesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<int32_t> & status() const { DARABONBA_PTR_GET_CONST(status_, vector<int32_t>) };
    inline vector<int32_t> status() { DARABONBA_PTR_GET(status_, vector<int32_t>) };
    inline DescribeInstancesRequest& setStatus(const vector<int32_t> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline DescribeInstancesRequest& setStatus(vector<int32_t> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeInstancesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeInstancesRequestTag>) };
    inline vector<DescribeInstancesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeInstancesRequestTag>) };
    inline DescribeInstancesRequest& setTag(const vector<DescribeInstancesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeInstancesRequest& setTag(vector<DescribeInstancesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The mitigation plan of the instance to query. Valid values:
    // 
    // *   **0**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Insurance mitigation plan
    // *   **1**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Unlimited mitigation plan
    // *   **2**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Chinese Mainland Acceleration (CMA) mitigation plan
    // *   **9**: Anti-DDoS Proxy (Chinese Mainland) instance of the Profession mitigation plan
    std::shared_ptr<int32_t> edition_ = nullptr;
    // The traffic forwarding status of the instance to query. Valid values:
    // 
    // *   **0**: The instance no longer forwards service traffic.
    // *   **1**: The instance forwards service traffic as expected.
    std::shared_ptr<int32_t> enabled_ = nullptr;
    // The end of the time range to query. Instances whose expiration time is earlier than the point in time are queried. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> expireEndTime_ = nullptr;
    // The beginning of the time range to query. Instances whose expiration time is later than the point in time are queried. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> expireStartTime_ = nullptr;
    // The IDs of the instances to query. You can specify up to 200 instance IDs.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The IP address of the instance to query.
    std::shared_ptr<string> ip_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The remarks of the instance to query. Fuzzy match is supported.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the resource group to which the instance belongs in Resource Management.
    // 
    // If you do not specify this parameter, the instance belongs to the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The states of the instances to query. You can specify up to two states.
    std::shared_ptr<vector<int32_t>> status_ = nullptr;
    // The tags that are added to the instances to query.
    std::shared_ptr<vector<DescribeInstancesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
