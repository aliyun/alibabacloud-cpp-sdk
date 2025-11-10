// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyDataListProductInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesResponseBodyDataListTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListInstancesResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(groupCount, groupCount_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(productInfo, productInfo_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(releaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(seriesCode, seriesCode_);
      DARABONBA_PTR_TO_JSON(serviceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(subSeriesCode, subSeriesCode_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(topicCount, topicCount_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(groupCount, groupCount_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(productInfo, productInfo_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(releaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(seriesCode, seriesCode_);
      DARABONBA_PTR_FROM_JSON(serviceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(subSeriesCode, subSeriesCode_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(topicCount, topicCount_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    ListInstancesResponseBodyDataList() = default ;
    ListInstancesResponseBodyDataList(const ListInstancesResponseBodyDataList &) = default ;
    ListInstancesResponseBodyDataList(ListInstancesResponseBodyDataList &&) = default ;
    ListInstancesResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyDataList() = default ;
    ListInstancesResponseBodyDataList& operator=(const ListInstancesResponseBodyDataList &) = default ;
    ListInstancesResponseBodyDataList& operator=(ListInstancesResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && return this->createTime_ == nullptr && return this->expireTime_ == nullptr && return this->groupCount_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->paymentType_ == nullptr && return this->productInfo_ == nullptr && return this->regionId_ == nullptr && return this->releaseTime_ == nullptr && return this->remark_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->seriesCode_ == nullptr && return this->serviceCode_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->subSeriesCode_ == nullptr && return this->tags_ == nullptr && return this->topicCount_ == nullptr && return this->updateTime_ == nullptr && return this->userId_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListInstancesResponseBodyDataList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListInstancesResponseBodyDataList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ListInstancesResponseBodyDataList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // groupCount Field Functions 
    bool hasGroupCount() const { return this->groupCount_ != nullptr;};
    void deleteGroupCount() { this->groupCount_ = nullptr;};
    inline int64_t groupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0L) };
    inline ListInstancesResponseBodyDataList& setGroupCount(int64_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListInstancesResponseBodyDataList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListInstancesResponseBodyDataList& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // productInfo Field Functions 
    bool hasProductInfo() const { return this->productInfo_ != nullptr;};
    void deleteProductInfo() { this->productInfo_ = nullptr;};
    inline const Models::ListInstancesResponseBodyDataListProductInfo & productInfo() const { DARABONBA_PTR_GET_CONST(productInfo_, Models::ListInstancesResponseBodyDataListProductInfo) };
    inline Models::ListInstancesResponseBodyDataListProductInfo productInfo() { DARABONBA_PTR_GET(productInfo_, Models::ListInstancesResponseBodyDataListProductInfo) };
    inline ListInstancesResponseBodyDataList& setProductInfo(const Models::ListInstancesResponseBodyDataListProductInfo & productInfo) { DARABONBA_PTR_SET_VALUE(productInfo_, productInfo) };
    inline ListInstancesResponseBodyDataList& setProductInfo(Models::ListInstancesResponseBodyDataListProductInfo && productInfo) { DARABONBA_PTR_SET_RVALUE(productInfo_, productInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstancesResponseBodyDataList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline string releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
    inline ListInstancesResponseBodyDataList& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListInstancesResponseBodyDataList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListInstancesResponseBodyDataList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // seriesCode Field Functions 
    bool hasSeriesCode() const { return this->seriesCode_ != nullptr;};
    void deleteSeriesCode() { this->seriesCode_ = nullptr;};
    inline string seriesCode() const { DARABONBA_PTR_GET_DEFAULT(seriesCode_, "") };
    inline ListInstancesResponseBodyDataList& setSeriesCode(string seriesCode) { DARABONBA_PTR_SET_VALUE(seriesCode_, seriesCode) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline ListInstancesResponseBodyDataList& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListInstancesResponseBodyDataList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesResponseBodyDataList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subSeriesCode Field Functions 
    bool hasSubSeriesCode() const { return this->subSeriesCode_ != nullptr;};
    void deleteSubSeriesCode() { this->subSeriesCode_ = nullptr;};
    inline string subSeriesCode() const { DARABONBA_PTR_GET_DEFAULT(subSeriesCode_, "") };
    inline ListInstancesResponseBodyDataList& setSubSeriesCode(string subSeriesCode) { DARABONBA_PTR_SET_VALUE(subSeriesCode_, subSeriesCode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyDataListTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListInstancesResponseBodyDataListTags>) };
    inline vector<Models::ListInstancesResponseBodyDataListTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListInstancesResponseBodyDataListTags>) };
    inline ListInstancesResponseBodyDataList& setTags(const vector<Models::ListInstancesResponseBodyDataListTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListInstancesResponseBodyDataList& setTags(vector<Models::ListInstancesResponseBodyDataListTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // topicCount Field Functions 
    bool hasTopicCount() const { return this->topicCount_ != nullptr;};
    void deleteTopicCount() { this->topicCount_ = nullptr;};
    inline int64_t topicCount() const { DARABONBA_PTR_GET_DEFAULT(topicCount_, 0L) };
    inline ListInstancesResponseBodyDataList& setTopicCount(int64_t topicCount) { DARABONBA_PTR_SET_VALUE(topicCount_, topicCount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListInstancesResponseBodyDataList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListInstancesResponseBodyDataList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The commodity code of the instance. The commodity code of ApsaraMQ for RocketMQ 5.0 instances has a similar format to ons_rmqsub_public_cn.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The time when the version of the instance was updated.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the instance expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The number of consumer groups that are created on the instance.
    std::shared_ptr<int64_t> groupCount_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The billing method of the instance.
    // 
    // Valid values:
    // 
    // *   PayAsYouGo
    // *   Subscription
    std::shared_ptr<string> paymentType_ = nullptr;
    // The product information.
    std::shared_ptr<Models::ListInstancesResponseBodyDataListProductInfo> productInfo_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The time when the instance was released.
    std::shared_ptr<string> releaseTime_ = nullptr;
    // The instance description.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The primary edition of the instance.
    // 
    // Valid values:
    // 
    // *   standard: Standard Edition
    // *   ultimate: Enterprise Platinum Edition
    // *   professional: Professional Edition
    std::shared_ptr<string> seriesCode_ = nullptr;
    // The code of the service to which the instance belongs. The service code of ApsaraMQ for RocketMQ is rmq.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the instance.
    // 
    // Valid values:
    // 
    // *   RELEASED
    // *   RUNNING
    // *   STOPPED
    // *   CHANGING
    // *   CREATING
    std::shared_ptr<string> status_ = nullptr;
    // The sub-category edition of the instance.
    // 
    // Valid values:
    // 
    // *   cluster_ha: Cluster High-availability Edition
    // *   single_node: Standalone Edition
    std::shared_ptr<string> subSeriesCode_ = nullptr;
    // The resource tags.
    std::shared_ptr<vector<Models::ListInstancesResponseBodyDataListTags>> tags_ = nullptr;
    // The number of topics that are created on the instance.
    std::shared_ptr<int64_t> topicCount_ = nullptr;
    // The time when the instance was last modified.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The ID of the user who owns the instance.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
