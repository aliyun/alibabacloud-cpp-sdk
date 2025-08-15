// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyDataAccountInfo.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyDataAclInfo.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyDataExtConfig.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceResponseBodyDataInstanceQuotas.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyDataNetworkInfo.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyDataProductInfo.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyDataSoftware.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(accountInfo, accountInfo_);
      DARABONBA_PTR_TO_JSON(aclInfo, aclInfo_);
      DARABONBA_PTR_TO_JSON(bid, bid_);
      DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(extConfig, extConfig_);
      DARABONBA_PTR_TO_JSON(groupCount, groupCount_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(instanceQuotas, instanceQuotas_);
      DARABONBA_PTR_TO_JSON(networkInfo, networkInfo_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(productInfo, productInfo_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(releaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(seriesCode, seriesCode_);
      DARABONBA_PTR_TO_JSON(serviceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(software, software_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(subSeriesCode, subSeriesCode_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(topicCount, topicCount_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(accountInfo, accountInfo_);
      DARABONBA_PTR_FROM_JSON(aclInfo, aclInfo_);
      DARABONBA_PTR_FROM_JSON(bid, bid_);
      DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(extConfig, extConfig_);
      DARABONBA_PTR_FROM_JSON(groupCount, groupCount_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(instanceQuotas, instanceQuotas_);
      DARABONBA_PTR_FROM_JSON(networkInfo, networkInfo_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(productInfo, productInfo_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(releaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(seriesCode, seriesCode_);
      DARABONBA_PTR_FROM_JSON(serviceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(software, software_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(subSeriesCode, subSeriesCode_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(topicCount, topicCount_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GetInstanceResponseBodyData() = default ;
    GetInstanceResponseBodyData(const GetInstanceResponseBodyData &) = default ;
    GetInstanceResponseBodyData(GetInstanceResponseBodyData &&) = default ;
    GetInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyData() = default ;
    GetInstanceResponseBodyData& operator=(const GetInstanceResponseBodyData &) = default ;
    GetInstanceResponseBodyData& operator=(GetInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountInfo_ != nullptr
        && this->aclInfo_ != nullptr && this->bid_ != nullptr && this->commodityCode_ != nullptr && this->createTime_ != nullptr && this->expireTime_ != nullptr
        && this->extConfig_ != nullptr && this->groupCount_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->instanceQuotas_ != nullptr
        && this->networkInfo_ != nullptr && this->paymentType_ != nullptr && this->productInfo_ != nullptr && this->regionId_ != nullptr && this->releaseTime_ != nullptr
        && this->remark_ != nullptr && this->resourceGroupId_ != nullptr && this->seriesCode_ != nullptr && this->serviceCode_ != nullptr && this->software_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr && this->subSeriesCode_ != nullptr && this->tags_ != nullptr && this->topicCount_ != nullptr
        && this->updateTime_ != nullptr && this->userId_ != nullptr; };
    // accountInfo Field Functions 
    bool hasAccountInfo() const { return this->accountInfo_ != nullptr;};
    void deleteAccountInfo() { this->accountInfo_ = nullptr;};
    inline const Models::GetInstanceResponseBodyDataAccountInfo & accountInfo() const { DARABONBA_PTR_GET_CONST(accountInfo_, Models::GetInstanceResponseBodyDataAccountInfo) };
    inline Models::GetInstanceResponseBodyDataAccountInfo accountInfo() { DARABONBA_PTR_GET(accountInfo_, Models::GetInstanceResponseBodyDataAccountInfo) };
    inline GetInstanceResponseBodyData& setAccountInfo(const Models::GetInstanceResponseBodyDataAccountInfo & accountInfo) { DARABONBA_PTR_SET_VALUE(accountInfo_, accountInfo) };
    inline GetInstanceResponseBodyData& setAccountInfo(Models::GetInstanceResponseBodyDataAccountInfo && accountInfo) { DARABONBA_PTR_SET_RVALUE(accountInfo_, accountInfo) };


    // aclInfo Field Functions 
    bool hasAclInfo() const { return this->aclInfo_ != nullptr;};
    void deleteAclInfo() { this->aclInfo_ = nullptr;};
    inline const Models::GetInstanceResponseBodyDataAclInfo & aclInfo() const { DARABONBA_PTR_GET_CONST(aclInfo_, Models::GetInstanceResponseBodyDataAclInfo) };
    inline Models::GetInstanceResponseBodyDataAclInfo aclInfo() { DARABONBA_PTR_GET(aclInfo_, Models::GetInstanceResponseBodyDataAclInfo) };
    inline GetInstanceResponseBodyData& setAclInfo(const Models::GetInstanceResponseBodyDataAclInfo & aclInfo) { DARABONBA_PTR_SET_VALUE(aclInfo_, aclInfo) };
    inline GetInstanceResponseBodyData& setAclInfo(Models::GetInstanceResponseBodyDataAclInfo && aclInfo) { DARABONBA_PTR_SET_RVALUE(aclInfo_, aclInfo) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline GetInstanceResponseBodyData& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline GetInstanceResponseBodyData& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetInstanceResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetInstanceResponseBodyData& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // extConfig Field Functions 
    bool hasExtConfig() const { return this->extConfig_ != nullptr;};
    void deleteExtConfig() { this->extConfig_ = nullptr;};
    inline const Models::GetInstanceResponseBodyDataExtConfig & extConfig() const { DARABONBA_PTR_GET_CONST(extConfig_, Models::GetInstanceResponseBodyDataExtConfig) };
    inline Models::GetInstanceResponseBodyDataExtConfig extConfig() { DARABONBA_PTR_GET(extConfig_, Models::GetInstanceResponseBodyDataExtConfig) };
    inline GetInstanceResponseBodyData& setExtConfig(const Models::GetInstanceResponseBodyDataExtConfig & extConfig) { DARABONBA_PTR_SET_VALUE(extConfig_, extConfig) };
    inline GetInstanceResponseBodyData& setExtConfig(Models::GetInstanceResponseBodyDataExtConfig && extConfig) { DARABONBA_PTR_SET_RVALUE(extConfig_, extConfig) };


    // groupCount Field Functions 
    bool hasGroupCount() const { return this->groupCount_ != nullptr;};
    void deleteGroupCount() { this->groupCount_ = nullptr;};
    inline int64_t groupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0L) };
    inline GetInstanceResponseBodyData& setGroupCount(int64_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetInstanceResponseBodyData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceQuotas Field Functions 
    bool hasInstanceQuotas() const { return this->instanceQuotas_ != nullptr;};
    void deleteInstanceQuotas() { this->instanceQuotas_ = nullptr;};
    inline const vector<Models::GetInstanceResponseBodyDataInstanceQuotas> & instanceQuotas() const { DARABONBA_PTR_GET_CONST(instanceQuotas_, vector<Models::GetInstanceResponseBodyDataInstanceQuotas>) };
    inline vector<Models::GetInstanceResponseBodyDataInstanceQuotas> instanceQuotas() { DARABONBA_PTR_GET(instanceQuotas_, vector<Models::GetInstanceResponseBodyDataInstanceQuotas>) };
    inline GetInstanceResponseBodyData& setInstanceQuotas(const vector<Models::GetInstanceResponseBodyDataInstanceQuotas> & instanceQuotas) { DARABONBA_PTR_SET_VALUE(instanceQuotas_, instanceQuotas) };
    inline GetInstanceResponseBodyData& setInstanceQuotas(vector<Models::GetInstanceResponseBodyDataInstanceQuotas> && instanceQuotas) { DARABONBA_PTR_SET_RVALUE(instanceQuotas_, instanceQuotas) };


    // networkInfo Field Functions 
    bool hasNetworkInfo() const { return this->networkInfo_ != nullptr;};
    void deleteNetworkInfo() { this->networkInfo_ = nullptr;};
    inline const Models::GetInstanceResponseBodyDataNetworkInfo & networkInfo() const { DARABONBA_PTR_GET_CONST(networkInfo_, Models::GetInstanceResponseBodyDataNetworkInfo) };
    inline Models::GetInstanceResponseBodyDataNetworkInfo networkInfo() { DARABONBA_PTR_GET(networkInfo_, Models::GetInstanceResponseBodyDataNetworkInfo) };
    inline GetInstanceResponseBodyData& setNetworkInfo(const Models::GetInstanceResponseBodyDataNetworkInfo & networkInfo) { DARABONBA_PTR_SET_VALUE(networkInfo_, networkInfo) };
    inline GetInstanceResponseBodyData& setNetworkInfo(Models::GetInstanceResponseBodyDataNetworkInfo && networkInfo) { DARABONBA_PTR_SET_RVALUE(networkInfo_, networkInfo) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline GetInstanceResponseBodyData& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // productInfo Field Functions 
    bool hasProductInfo() const { return this->productInfo_ != nullptr;};
    void deleteProductInfo() { this->productInfo_ = nullptr;};
    inline const Models::GetInstanceResponseBodyDataProductInfo & productInfo() const { DARABONBA_PTR_GET_CONST(productInfo_, Models::GetInstanceResponseBodyDataProductInfo) };
    inline Models::GetInstanceResponseBodyDataProductInfo productInfo() { DARABONBA_PTR_GET(productInfo_, Models::GetInstanceResponseBodyDataProductInfo) };
    inline GetInstanceResponseBodyData& setProductInfo(const Models::GetInstanceResponseBodyDataProductInfo & productInfo) { DARABONBA_PTR_SET_VALUE(productInfo_, productInfo) };
    inline GetInstanceResponseBodyData& setProductInfo(Models::GetInstanceResponseBodyDataProductInfo && productInfo) { DARABONBA_PTR_SET_RVALUE(productInfo_, productInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInstanceResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline string releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
    inline GetInstanceResponseBodyData& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetInstanceResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetInstanceResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // seriesCode Field Functions 
    bool hasSeriesCode() const { return this->seriesCode_ != nullptr;};
    void deleteSeriesCode() { this->seriesCode_ = nullptr;};
    inline string seriesCode() const { DARABONBA_PTR_GET_DEFAULT(seriesCode_, "") };
    inline GetInstanceResponseBodyData& setSeriesCode(string seriesCode) { DARABONBA_PTR_SET_VALUE(seriesCode_, seriesCode) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetInstanceResponseBodyData& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // software Field Functions 
    bool hasSoftware() const { return this->software_ != nullptr;};
    void deleteSoftware() { this->software_ = nullptr;};
    inline const Models::GetInstanceResponseBodyDataSoftware & software() const { DARABONBA_PTR_GET_CONST(software_, Models::GetInstanceResponseBodyDataSoftware) };
    inline Models::GetInstanceResponseBodyDataSoftware software() { DARABONBA_PTR_GET(software_, Models::GetInstanceResponseBodyDataSoftware) };
    inline GetInstanceResponseBodyData& setSoftware(const Models::GetInstanceResponseBodyDataSoftware & software) { DARABONBA_PTR_SET_VALUE(software_, software) };
    inline GetInstanceResponseBodyData& setSoftware(Models::GetInstanceResponseBodyDataSoftware && software) { DARABONBA_PTR_SET_RVALUE(software_, software) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetInstanceResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subSeriesCode Field Functions 
    bool hasSubSeriesCode() const { return this->subSeriesCode_ != nullptr;};
    void deleteSubSeriesCode() { this->subSeriesCode_ = nullptr;};
    inline string subSeriesCode() const { DARABONBA_PTR_GET_DEFAULT(subSeriesCode_, "") };
    inline GetInstanceResponseBodyData& setSubSeriesCode(string subSeriesCode) { DARABONBA_PTR_SET_VALUE(subSeriesCode_, subSeriesCode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetInstanceResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetInstanceResponseBodyDataTags>) };
    inline vector<Models::GetInstanceResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetInstanceResponseBodyDataTags>) };
    inline GetInstanceResponseBodyData& setTags(const vector<Models::GetInstanceResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetInstanceResponseBodyData& setTags(vector<Models::GetInstanceResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // topicCount Field Functions 
    bool hasTopicCount() const { return this->topicCount_ != nullptr;};
    void deleteTopicCount() { this->topicCount_ = nullptr;};
    inline int64_t topicCount() const { DARABONBA_PTR_GET_DEFAULT(topicCount_, 0L) };
    inline GetInstanceResponseBodyData& setTopicCount(int64_t topicCount) { DARABONBA_PTR_SET_VALUE(topicCount_, topicCount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetInstanceResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetInstanceResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The account information.
    std::shared_ptr<Models::GetInstanceResponseBodyDataAccountInfo> accountInfo_ = nullptr;
    // The information about access control.
    std::shared_ptr<Models::GetInstanceResponseBodyDataAclInfo> aclInfo_ = nullptr;
    // The business ID (BID) of the commodity.
    std::shared_ptr<string> bid_ = nullptr;
    // The commodity code of the instance. The commodity code of a ApsaraMQ for RocketMQ 5.0 instance has a similar format as ons_rmqsub_public_cn.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the instance expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The extended configurations. We recommend you configure productInfo, internetInfo, or aclInfo instead of this parameter.
    std::shared_ptr<Models::GetInstanceResponseBodyDataExtConfig> extConfig_ = nullptr;
    // The number of groups.
    std::shared_ptr<int64_t> groupCount_ = nullptr;
    // The ID of the instance
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The instance quotas.
    std::shared_ptr<vector<Models::GetInstanceResponseBodyDataInstanceQuotas>> instanceQuotas_ = nullptr;
    // The network information.
    std::shared_ptr<Models::GetInstanceResponseBodyDataNetworkInfo> networkInfo_ = nullptr;
    // The billing method of the instance.
    // 
    // Valid values:
    // 
    // *   PayAsYouGo
    // *   Subscription
    std::shared_ptr<string> paymentType_ = nullptr;
    // The extended configurations of the instance.
    std::shared_ptr<Models::GetInstanceResponseBodyDataProductInfo> productInfo_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The time when the instance was released.
    std::shared_ptr<string> releaseTime_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The primary edition of the instance. For information about the differences between primary edition instances, see [Instance selection](https://help.aliyun.com/document_detail/444722.html).
    // 
    // Valid values:
    // 
    // *   standard: Standard Edition
    // *   ultimate: Enterprise Platinum Edition
    // *   professional: Professional Edition
    std::shared_ptr<string> seriesCode_ = nullptr;
    // The code of the service to which the instance belongs. The service code of ApsaraMQ for RocketMQ is rmq.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // The instance software information.
    std::shared_ptr<Models::GetInstanceResponseBodyDataSoftware> software_ = nullptr;
    // The time when the instance was started.
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
    // The sub-category edition of the instance. For information about the differences between sub-category edition instances, see [Instance selection](https://help.aliyun.com/document_detail/444722.html).
    // 
    // Valid values:
    // 
    // *   cluster_ha: Cluster High-availability Edition
    // *   single_node: Standalone Edition
    std::shared_ptr<string> subSeriesCode_ = nullptr;
    // The resource tags.
    std::shared_ptr<vector<Models::GetInstanceResponseBodyDataTags>> tags_ = nullptr;
    // The number of topics.
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
