// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateInstanceRequestNetworkInfo.hpp>
#include <alibabacloud/models/CreateInstanceRequestProductInfo.hpp>
#include <vector>
#include <alibabacloud/models/CreateInstanceRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(autoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(networkInfo, networkInfo_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(period, period_);
      DARABONBA_PTR_TO_JSON(periodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(productInfo, productInfo_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(seriesCode, seriesCode_);
      DARABONBA_PTR_TO_JSON(serviceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(subSeriesCode, subSeriesCode_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(autoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(networkInfo, networkInfo_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(period, period_);
      DARABONBA_PTR_FROM_JSON(periodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(productInfo, productInfo_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(seriesCode, seriesCode_);
      DARABONBA_PTR_FROM_JSON(serviceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(subSeriesCode, subSeriesCode_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenew_ != nullptr
        && this->autoRenewPeriod_ != nullptr && this->commodityCode_ != nullptr && this->instanceName_ != nullptr && this->networkInfo_ != nullptr && this->paymentType_ != nullptr
        && this->period_ != nullptr && this->periodUnit_ != nullptr && this->productInfo_ != nullptr && this->remark_ != nullptr && this->resourceGroupId_ != nullptr
        && this->seriesCode_ != nullptr && this->serviceCode_ != nullptr && this->subSeriesCode_ != nullptr && this->tags_ != nullptr && this->clientToken_ != nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateInstanceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline CreateInstanceRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline CreateInstanceRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // networkInfo Field Functions 
    bool hasNetworkInfo() const { return this->networkInfo_ != nullptr;};
    void deleteNetworkInfo() { this->networkInfo_ = nullptr;};
    inline const CreateInstanceRequestNetworkInfo & networkInfo() const { DARABONBA_PTR_GET_CONST(networkInfo_, CreateInstanceRequestNetworkInfo) };
    inline CreateInstanceRequestNetworkInfo networkInfo() { DARABONBA_PTR_GET(networkInfo_, CreateInstanceRequestNetworkInfo) };
    inline CreateInstanceRequest& setNetworkInfo(const CreateInstanceRequestNetworkInfo & networkInfo) { DARABONBA_PTR_SET_VALUE(networkInfo_, networkInfo) };
    inline CreateInstanceRequest& setNetworkInfo(CreateInstanceRequestNetworkInfo && networkInfo) { DARABONBA_PTR_SET_RVALUE(networkInfo_, networkInfo) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateInstanceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateInstanceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateInstanceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // productInfo Field Functions 
    bool hasProductInfo() const { return this->productInfo_ != nullptr;};
    void deleteProductInfo() { this->productInfo_ = nullptr;};
    inline const CreateInstanceRequestProductInfo & productInfo() const { DARABONBA_PTR_GET_CONST(productInfo_, CreateInstanceRequestProductInfo) };
    inline CreateInstanceRequestProductInfo productInfo() { DARABONBA_PTR_GET(productInfo_, CreateInstanceRequestProductInfo) };
    inline CreateInstanceRequest& setProductInfo(const CreateInstanceRequestProductInfo & productInfo) { DARABONBA_PTR_SET_VALUE(productInfo_, productInfo) };
    inline CreateInstanceRequest& setProductInfo(CreateInstanceRequestProductInfo && productInfo) { DARABONBA_PTR_SET_RVALUE(productInfo_, productInfo) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateInstanceRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // seriesCode Field Functions 
    bool hasSeriesCode() const { return this->seriesCode_ != nullptr;};
    void deleteSeriesCode() { this->seriesCode_ = nullptr;};
    inline string seriesCode() const { DARABONBA_PTR_GET_DEFAULT(seriesCode_, "") };
    inline CreateInstanceRequest& setSeriesCode(string seriesCode) { DARABONBA_PTR_SET_VALUE(seriesCode_, seriesCode) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline CreateInstanceRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // subSeriesCode Field Functions 
    bool hasSubSeriesCode() const { return this->subSeriesCode_ != nullptr;};
    void deleteSubSeriesCode() { this->subSeriesCode_ = nullptr;};
    inline string subSeriesCode() const { DARABONBA_PTR_GET_DEFAULT(subSeriesCode_, "") };
    inline CreateInstanceRequest& setSubSeriesCode(string subSeriesCode) { DARABONBA_PTR_SET_VALUE(subSeriesCode_, subSeriesCode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateInstanceRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateInstanceRequestTags>) };
    inline vector<CreateInstanceRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateInstanceRequestTags>) };
    inline CreateInstanceRequest& setTags(const vector<CreateInstanceRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateInstanceRequest& setTags(vector<CreateInstanceRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // Specifies whether to enable auto-renewal for the instance. This parameter takes effect only if you set paymentType to Subscription. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The auto-renewal cycle of the instance. This parameter takes effect only if you set autoRenew to true. Unit: months.
    // 
    // Valid values:
    // 
    // *   Monthly renewal: 1, 2, 3, 6, and 12
    std::shared_ptr<int32_t> autoRenewPeriod_ = nullptr;
    // The commodity code. Valid values:
    // 
    // *   ons_rmqpost_public_intl: pay-as-you-go
    // *   ons_rmqsub_public_intl: subscription
    // *   ons_rmqsrvlesspost_public_intl: serverless instance
    // serverless instance requires this parameter
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The name of the instance that you want to create.
    // 
    // If you leave this parameter empty, the instance ID is used as the instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The information about the network.
    // 
    // This parameter is required.
    std::shared_ptr<CreateInstanceRequestNetworkInfo> networkInfo_ = nullptr;
    // The billing method of the instance. ApsaraMQ for RocketMQ supports the subscription and pay-as-you-go billing methods.
    // 
    // Valid values:
    // 
    // *   PayAsYouGo: This billing method allows you to use resources before you pay for the resources.
    // *   Subscription: This billing method allows you to use resources after you pay for the resources.
    // 
    // For more information, see [Billing methods](https://help.aliyun.com/document_detail/427234.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> paymentType_ = nullptr;
    // The subscription duration of the instance. This parameter takes effect only if you set paymentType to Subscription.
    // 
    // Valid values:
    // 
    // *   Monthly subscription: 1, 2, 3, 4, 5, and 6
    // *   Yearly subscription: 1, 2, and 3
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the subscription duration.
    // 
    // Valid values:
    // 
    // *   Month
    // *   Year
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The information about instance specifications.
    std::shared_ptr<CreateInstanceRequestProductInfo> productInfo_ = nullptr;
    // The instance description.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The primary edition of the instance. For information about the differences among primary edition instances, see [Instance selection](https://help.aliyun.com/document_detail/444722.html).
    // 
    // Valid values:
    // 
    // *   standard: Standard Edition
    // *   ultimate: Enterprise Platinum Edition
    // *   professional: Professional Edition
    // 
    // >  After you create an instance, you can only upgrade the primary edition of the instance. The following editions are sorted in ascending order: Standard Edition, Professional Edition, Enterprise Platinum Edition. For example, you can upgrade an instance from Standard Edition to Professional Edition, but you cannot downgrade an instance from Professional Edition to Standard Edition.
    // 
    // This parameter is required.
    std::shared_ptr<string> seriesCode_ = nullptr;
    // The code of the service to which the instance belongs. The service code of ApsaraMQ for RocketMQ is rmq.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // The sub-category edition of the instance. For information about the differences among sub-category edition instances, see [Instance selection](https://help.aliyun.com/document_detail/444722.html).
    // 
    // Valid values:
    // 
    // *   cluster_ha: Cluster High-availability Edition
    // *   single_node: Standalone Edition
    // *   serverless: serverless
    // 
    // If you set seriesCode to ultimate, you can set this parameter only to cluster_ha.
    // 
    // >  After you create an instance, you cannot change the sub-category edition of the instance.
    // 
    // Valid values:
    // 
    // *   serverless: serverless
    // *   cluster_ha: Cluster High-availability Edition
    // *   single_node: Standalone Edition
    // 
    // This parameter is required.
    std::shared_ptr<string> subSeriesCode_ = nullptr;
    // The tags that you want to add to the instance.
    std::shared_ptr<vector<CreateInstanceRequestTags>> tags_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value of this parameter, but you must ensure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
