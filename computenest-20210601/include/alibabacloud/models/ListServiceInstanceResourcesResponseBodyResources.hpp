// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCERESOURCESRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCERESOURCESRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceResourcesResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RenewStatus, renewStatus_);
      DARABONBA_PTR_TO_JSON(RenewalPeriod, renewalPeriod_);
      DARABONBA_PTR_TO_JSON(RenewalPeriodUnit, renewalPeriodUnit_);
      DARABONBA_PTR_TO_JSON(ResourceARN, resourceARN_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RenewStatus, renewStatus_);
      DARABONBA_PTR_FROM_JSON(RenewalPeriod, renewalPeriod_);
      DARABONBA_PTR_FROM_JSON(RenewalPeriodUnit, renewalPeriodUnit_);
      DARABONBA_PTR_FROM_JSON(ResourceARN, resourceARN_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListServiceInstanceResourcesResponseBodyResources() = default ;
    ListServiceInstanceResourcesResponseBodyResources(const ListServiceInstanceResourcesResponseBodyResources &) = default ;
    ListServiceInstanceResourcesResponseBodyResources(ListServiceInstanceResourcesResponseBodyResources &&) = default ;
    ListServiceInstanceResourcesResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceResourcesResponseBodyResources() = default ;
    ListServiceInstanceResourcesResponseBodyResources& operator=(const ListServiceInstanceResourcesResponseBodyResources &) = default ;
    ListServiceInstanceResourcesResponseBodyResources& operator=(ListServiceInstanceResourcesResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->expireTime_ != nullptr && this->payType_ != nullptr && this->productCode_ != nullptr && this->productType_ != nullptr && this->renewStatus_ != nullptr
        && this->renewalPeriod_ != nullptr && this->renewalPeriodUnit_ != nullptr && this->resourceARN_ != nullptr && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListServiceInstanceResourcesResponseBodyResources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ListServiceInstanceResourcesResponseBodyResources& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ListServiceInstanceResourcesResponseBodyResources& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListServiceInstanceResourcesResponseBodyResources& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListServiceInstanceResourcesResponseBodyResources& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // renewStatus Field Functions 
    bool hasRenewStatus() const { return this->renewStatus_ != nullptr;};
    void deleteRenewStatus() { this->renewStatus_ = nullptr;};
    inline string renewStatus() const { DARABONBA_PTR_GET_DEFAULT(renewStatus_, "") };
    inline ListServiceInstanceResourcesResponseBodyResources& setRenewStatus(string renewStatus) { DARABONBA_PTR_SET_VALUE(renewStatus_, renewStatus) };


    // renewalPeriod Field Functions 
    bool hasRenewalPeriod() const { return this->renewalPeriod_ != nullptr;};
    void deleteRenewalPeriod() { this->renewalPeriod_ = nullptr;};
    inline int32_t renewalPeriod() const { DARABONBA_PTR_GET_DEFAULT(renewalPeriod_, 0) };
    inline ListServiceInstanceResourcesResponseBodyResources& setRenewalPeriod(int32_t renewalPeriod) { DARABONBA_PTR_SET_VALUE(renewalPeriod_, renewalPeriod) };


    // renewalPeriodUnit Field Functions 
    bool hasRenewalPeriodUnit() const { return this->renewalPeriodUnit_ != nullptr;};
    void deleteRenewalPeriodUnit() { this->renewalPeriodUnit_ = nullptr;};
    inline string renewalPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(renewalPeriodUnit_, "") };
    inline ListServiceInstanceResourcesResponseBodyResources& setRenewalPeriodUnit(string renewalPeriodUnit) { DARABONBA_PTR_SET_VALUE(renewalPeriodUnit_, renewalPeriodUnit) };


    // resourceARN Field Functions 
    bool hasResourceARN() const { return this->resourceARN_ != nullptr;};
    void deleteResourceARN() { this->resourceARN_ = nullptr;};
    inline string resourceARN() const { DARABONBA_PTR_GET_DEFAULT(resourceARN_, "") };
    inline ListServiceInstanceResourcesResponseBodyResources& setResourceARN(string resourceARN) { DARABONBA_PTR_SET_VALUE(resourceARN_, resourceARN) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListServiceInstanceResourcesResponseBodyResources& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the resource was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the resource expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   Subscription
    // *   PayAsYouGo
    std::shared_ptr<string> payType_ = nullptr;
    // The code of the cloud service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the cloud service.
    std::shared_ptr<string> productType_ = nullptr;
    // The renewal state. Valid values:
    // 
    // *   AutoRenewal
    // *   ManualRenewal
    // *   NotRenewal
    std::shared_ptr<string> renewStatus_ = nullptr;
    // The renewal period.
    std::shared_ptr<int32_t> renewalPeriod_ = nullptr;
    // The unit of the renewal period. Valid values:
    // 
    // *   Month
    // *   Year
    std::shared_ptr<string> renewalPeriodUnit_ = nullptr;
    // The ARN of the resource.
    std::shared_ptr<string> resourceARN_ = nullptr;
    // The state of the resource. Valid values:
    // 
    // *   running
    // *   waiting
    // *   terminated
    // 
    // >  This parameter is returned only for containers.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
