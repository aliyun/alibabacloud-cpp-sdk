// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREATEBECLUSTERINQUIRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCREATEBECLUSTERINQUIRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class GetCreateBEClusterInquiryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCreateBEClusterInquiryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CacheSize, cacheSize_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ComputeSize, computeSize_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(PreCacheSize, preCacheSize_);
      DARABONBA_PTR_TO_JSON(PreComputeSize, preComputeSize_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCreateBEClusterInquiryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheSize, cacheSize_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ComputeSize, computeSize_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(PreCacheSize, preCacheSize_);
      DARABONBA_PTR_FROM_JSON(PreComputeSize, preComputeSize_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    GetCreateBEClusterInquiryRequest() = default ;
    GetCreateBEClusterInquiryRequest(const GetCreateBEClusterInquiryRequest &) = default ;
    GetCreateBEClusterInquiryRequest(GetCreateBEClusterInquiryRequest &&) = default ;
    GetCreateBEClusterInquiryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCreateBEClusterInquiryRequest() = default ;
    GetCreateBEClusterInquiryRequest& operator=(const GetCreateBEClusterInquiryRequest &) = default ;
    GetCreateBEClusterInquiryRequest& operator=(GetCreateBEClusterInquiryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheSize_ == nullptr
        && return this->chargeType_ == nullptr && return this->commodityCode_ == nullptr && return this->computeSize_ == nullptr && return this->dbInstanceId_ == nullptr && return this->preCacheSize_ == nullptr
        && return this->preComputeSize_ == nullptr && return this->pricingCycle_ == nullptr && return this->promotionOptionNo_ == nullptr && return this->quantity_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerId_ == nullptr; };
    // cacheSize Field Functions 
    bool hasCacheSize() const { return this->cacheSize_ != nullptr;};
    void deleteCacheSize() { this->cacheSize_ = nullptr;};
    inline int64_t cacheSize() const { DARABONBA_PTR_GET_DEFAULT(cacheSize_, 0L) };
    inline GetCreateBEClusterInquiryRequest& setCacheSize(int64_t cacheSize) { DARABONBA_PTR_SET_VALUE(cacheSize_, cacheSize) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetCreateBEClusterInquiryRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline GetCreateBEClusterInquiryRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // computeSize Field Functions 
    bool hasComputeSize() const { return this->computeSize_ != nullptr;};
    void deleteComputeSize() { this->computeSize_ = nullptr;};
    inline int64_t computeSize() const { DARABONBA_PTR_GET_DEFAULT(computeSize_, 0L) };
    inline GetCreateBEClusterInquiryRequest& setComputeSize(int64_t computeSize) { DARABONBA_PTR_SET_VALUE(computeSize_, computeSize) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline GetCreateBEClusterInquiryRequest& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // preCacheSize Field Functions 
    bool hasPreCacheSize() const { return this->preCacheSize_ != nullptr;};
    void deletePreCacheSize() { this->preCacheSize_ = nullptr;};
    inline int64_t preCacheSize() const { DARABONBA_PTR_GET_DEFAULT(preCacheSize_, 0L) };
    inline GetCreateBEClusterInquiryRequest& setPreCacheSize(int64_t preCacheSize) { DARABONBA_PTR_SET_VALUE(preCacheSize_, preCacheSize) };


    // preComputeSize Field Functions 
    bool hasPreComputeSize() const { return this->preComputeSize_ != nullptr;};
    void deletePreComputeSize() { this->preComputeSize_ = nullptr;};
    inline int64_t preComputeSize() const { DARABONBA_PTR_GET_DEFAULT(preComputeSize_, 0L) };
    inline GetCreateBEClusterInquiryRequest& setPreComputeSize(int64_t preComputeSize) { DARABONBA_PTR_SET_VALUE(preComputeSize_, preComputeSize) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline GetCreateBEClusterInquiryRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string promotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline GetCreateBEClusterInquiryRequest& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int64_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
    inline GetCreateBEClusterInquiryRequest& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetCreateBEClusterInquiryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetCreateBEClusterInquiryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The size of the elastic cache.
    std::shared_ptr<int64_t> cacheSize_ = nullptr;
    // The billing method.
    // 
    // Valid values:
    // 
    // *   PREPAY: subscription
    // *   POSTPAY: pay-as-you-go
    // 
    // This parameter is required.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The commodity code.
    // 
    // Valid values:
    // 
    // *   selectdb_pre_public_intl: subscription commodity on the international site (alibabacloud.com)
    // *   selectdb_go_public_cn: pay-as-you-go commodity on the China site (aliyun.com)
    // *   selectdb_go_public_intl: pay-as-you-go commodity on the international site (alibabacloud.com)
    // *   selectdb_pre_public_cn: subscription commodity on the China site (aliyun.com).
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The number of elastic CPU cores.
    std::shared_ptr<int64_t> computeSize_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    // The size of the reserved cache.
    std::shared_ptr<int64_t> preCacheSize_ = nullptr;
    // The number of reserved CPU cores.
    std::shared_ptr<int64_t> preComputeSize_ = nullptr;
    // The billing cycle.
    // 
    // Valid values:
    // 
    // *   Month
    // *   Year
    // *   Minute
    // *   Hour
    // *   Day
    // 
    // This parameter is required.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    std::shared_ptr<string> promotionOptionNo_ = nullptr;
    // The number of clusters to be created.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> quantity_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
