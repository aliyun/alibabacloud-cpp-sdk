// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERPAYTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERPAYTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class TransferPayTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferPayTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(BuyCount, buyCount_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(MaxDu, maxDu_);
      DARABONBA_PTR_TO_JSON(MinDu, minDu_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, TransferPayTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(BuyCount, buyCount_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(MaxDu, maxDu_);
      DARABONBA_PTR_FROM_JSON(MinDu, minDu_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    TransferPayTypeRequest() = default ;
    TransferPayTypeRequest(const TransferPayTypeRequest &) = default ;
    TransferPayTypeRequest(TransferPayTypeRequest &&) = default ;
    TransferPayTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferPayTypeRequest() = default ;
    TransferPayTypeRequest& operator=(const TransferPayTypeRequest &) = default ;
    TransferPayTypeRequest& operator=(TransferPayTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->buyCount_ == nullptr && this->chargeType_ == nullptr && this->dtsJobId_ == nullptr && this->instanceClass_ == nullptr && this->maxDu_ == nullptr
        && this->minDu_ == nullptr && this->period_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline TransferPayTypeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // buyCount Field Functions 
    bool hasBuyCount() const { return this->buyCount_ != nullptr;};
    void deleteBuyCount() { this->buyCount_ = nullptr;};
    inline string getBuyCount() const { DARABONBA_PTR_GET_DEFAULT(buyCount_, "") };
    inline TransferPayTypeRequest& setBuyCount(string buyCount) { DARABONBA_PTR_SET_VALUE(buyCount_, buyCount) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline TransferPayTypeRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline TransferPayTypeRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline TransferPayTypeRequest& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // maxDu Field Functions 
    bool hasMaxDu() const { return this->maxDu_ != nullptr;};
    void deleteMaxDu() { this->maxDu_ = nullptr;};
    inline int32_t getMaxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0) };
    inline TransferPayTypeRequest& setMaxDu(int32_t maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


    // minDu Field Functions 
    bool hasMinDu() const { return this->minDu_ != nullptr;};
    void deleteMinDu() { this->minDu_ = nullptr;};
    inline int32_t getMinDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0) };
    inline TransferPayTypeRequest& setMinDu(int32_t minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline TransferPayTypeRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline TransferPayTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline TransferPayTypeRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    shared_ptr<bool> autoPay_ {};
    // The subscription duration of the instance.
    // - If Period is set to **Year**, valid values are **1** to **5**.
    // - If Period is set to **Month**, valid values are **1** to **60**.
    // 
    // > This parameter is valid and required only when ChargeType is set to **Prepaid**.
    shared_ptr<string> buyCount_ {};
    // The billing method after conversion. Valid values:
    // - **PrePaid**: subscription.
    // - **PostPaid**: pay-as-you-go.
    // <props="china">
    // - **sync_serverless**: pay-as-you-go Serverless..
    // 
    // This parameter is required.
    shared_ptr<string> chargeType_ {};
    // The ID of the data synchronization or change tracking task. You can call [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) to query the task ID.
    // 
    // This parameter is required.
    shared_ptr<string> dtsJobId_ {};
    shared_ptr<string> instanceClass_ {};
    // The maximum number of DUs for the Serverless instance. Valid values: 2, 4, 8, and 16.
    // <props="intl">
    // > This feature is currently not supported. Do not specify this parameter.
    // <props="china">
    // > This parameter is valid and required only when ChargeType is set to **sync_serverless**..
    shared_ptr<int32_t> maxDu_ {};
    // The minimum number of DTS Units (DUs) for the Serverless instance. Valid values: 1, 2, 4, 8, and 16.
    // 
    // <props="intl">
    // > This feature is currently not supported. Do not specify this parameter.
    // <props="china">
    // > This parameter is valid and required only when ChargeType is set to **sync_serverless**..
    shared_ptr<int32_t> minDu_ {};
    // The billing method of the subscription instance. Valid values:
    // - **Year**: annual subscription.
    // - **Month**: monthly subscription.
    // 
    // > This parameter is valid and required only when ChargeType is set to **PrePaid** (subscription).
    shared_ptr<string> period_ {};
    // The region ID of the instance. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
