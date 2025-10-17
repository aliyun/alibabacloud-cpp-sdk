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
        && return this->buyCount_ == nullptr && return this->chargeType_ == nullptr && return this->dtsJobId_ == nullptr && return this->instanceClass_ == nullptr && return this->maxDu_ == nullptr
        && return this->minDu_ == nullptr && return this->period_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline TransferPayTypeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // buyCount Field Functions 
    bool hasBuyCount() const { return this->buyCount_ != nullptr;};
    void deleteBuyCount() { this->buyCount_ = nullptr;};
    inline string buyCount() const { DARABONBA_PTR_GET_DEFAULT(buyCount_, "") };
    inline TransferPayTypeRequest& setBuyCount(string buyCount) { DARABONBA_PTR_SET_VALUE(buyCount_, buyCount) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline TransferPayTypeRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline TransferPayTypeRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string instanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline TransferPayTypeRequest& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // maxDu Field Functions 
    bool hasMaxDu() const { return this->maxDu_ != nullptr;};
    void deleteMaxDu() { this->maxDu_ = nullptr;};
    inline int32_t maxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0) };
    inline TransferPayTypeRequest& setMaxDu(int32_t maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


    // minDu Field Functions 
    bool hasMinDu() const { return this->minDu_ != nullptr;};
    void deleteMinDu() { this->minDu_ = nullptr;};
    inline int32_t minDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0) };
    inline TransferPayTypeRequest& setMinDu(int32_t minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline TransferPayTypeRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline TransferPayTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline TransferPayTypeRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // Specifies whether to automatically renew the DTS instance when it expires. Valid values:
    // 
    // *   **false**: does not automatically renew the DTS instance when it expires. This is the default value.
    // *   **true**: automatically renews the DTS instance when it expires.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The subscription length.
    // 
    // *   If the **Period** parameter is set to **Year**, the value range is **1** to **5**.
    // *   If the **Period** parameter is set to **Month**, the value range is **1** to **60**.
    // 
    // >  You must specify this parameter only if you set the **ChargeType** parameter to **PrePaid**.
    std::shared_ptr<string> buyCount_ = nullptr;
    // The new billing method. Valid values:
    // 
    // *   **PrePaid**: subscription.
    // *   **PostPaid**: pay-as-you-go.
    // 
    // This parameter is required.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The ID of the data synchronization or change tracking task. You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the task ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The new instance class of the DTS instance. You can call the [DescribeDtsJobDetail](https://help.aliyun.com/document_detail/208925.html) operation to query the original instance class of the DTS instance.
    // 
    // *   DTS supports the following instance classes for a data migration instance: **xxlarge**, **xlarge**, **large**, **medium**, and **small**.
    // *   DTS supports the following instance classes for a data synchronization instance: **large**, **medium**, **small**, and **micro**.
    // 
    // > For more information about the test performance of each instance class, see [Specifications of data migration instances](https://help.aliyun.com/document_detail/26606.html) and [Specifications of data synchronization channels](https://help.aliyun.com/document_detail/26605.html).
    std::shared_ptr<string> instanceClass_ = nullptr;
    // The maximum number of DUs in a serverless instance. Valid values: 2, 4, 8, and 16.
    // 
    // >  This feature is not supported. Do not specify this parameter.
    std::shared_ptr<int32_t> maxDu_ = nullptr;
    // The minimum number of DTS Units (DUs) in a serverless instance. Valid values: 1, 2, 4, 8, and 16.
    // 
    // >  This feature is not supported. Do not specify this parameter.
    std::shared_ptr<int32_t> minDu_ = nullptr;
    // The billing cycle of the subscription instance. Valid values:
    // 
    // *   **Year**
    // *   **Month** (default value)
    // 
    // >  You must specify this parameter only if you set the **ChargeType** parameter to **PrePaid**.
    std::shared_ptr<string> period_ = nullptr;
    // The ID of the region where the DTS instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
