// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeCloudPhoneNodePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudPhoneNodePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IsSingleImgDisk, isSingleImgDisk_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PhoneCount, phoneCount_);
      DARABONBA_PTR_TO_JSON(PhoneDataVolume, phoneDataVolume_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(ServerShareDataVolume, serverShareDataVolume_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(SwapSize, swapSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudPhoneNodePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IsSingleImgDisk, isSingleImgDisk_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PhoneCount, phoneCount_);
      DARABONBA_PTR_FROM_JSON(PhoneDataVolume, phoneDataVolume_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(ServerShareDataVolume, serverShareDataVolume_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(SwapSize, swapSize_);
    };
    DescribeCloudPhoneNodePriceRequest() = default ;
    DescribeCloudPhoneNodePriceRequest(const DescribeCloudPhoneNodePriceRequest &) = default ;
    DescribeCloudPhoneNodePriceRequest(DescribeCloudPhoneNodePriceRequest &&) = default ;
    DescribeCloudPhoneNodePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudPhoneNodePriceRequest() = default ;
    DescribeCloudPhoneNodePriceRequest& operator=(const DescribeCloudPhoneNodePriceRequest &) = default ;
    DescribeCloudPhoneNodePriceRequest& operator=(DescribeCloudPhoneNodePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && this->chargeType_ == nullptr && this->count_ == nullptr && this->isSingleImgDisk_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->phoneCount_ == nullptr && this->phoneDataVolume_ == nullptr && this->promotionId_ == nullptr && this->serverShareDataVolume_ == nullptr && this->serverType_ == nullptr
        && this->swapSize_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline DescribeCloudPhoneNodePriceRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeCloudPhoneNodePriceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline DescribeCloudPhoneNodePriceRequest& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // isSingleImgDisk Field Functions 
    bool hasIsSingleImgDisk() const { return this->isSingleImgDisk_ != nullptr;};
    void deleteIsSingleImgDisk() { this->isSingleImgDisk_ = nullptr;};
    inline bool getIsSingleImgDisk() const { DARABONBA_PTR_GET_DEFAULT(isSingleImgDisk_, false) };
    inline DescribeCloudPhoneNodePriceRequest& setIsSingleImgDisk(bool isSingleImgDisk) { DARABONBA_PTR_SET_VALUE(isSingleImgDisk_, isSingleImgDisk) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeCloudPhoneNodePriceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeCloudPhoneNodePriceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // phoneCount Field Functions 
    bool hasPhoneCount() const { return this->phoneCount_ != nullptr;};
    void deletePhoneCount() { this->phoneCount_ = nullptr;};
    inline int32_t getPhoneCount() const { DARABONBA_PTR_GET_DEFAULT(phoneCount_, 0) };
    inline DescribeCloudPhoneNodePriceRequest& setPhoneCount(int32_t phoneCount) { DARABONBA_PTR_SET_VALUE(phoneCount_, phoneCount) };


    // phoneDataVolume Field Functions 
    bool hasPhoneDataVolume() const { return this->phoneDataVolume_ != nullptr;};
    void deletePhoneDataVolume() { this->phoneDataVolume_ = nullptr;};
    inline int32_t getPhoneDataVolume() const { DARABONBA_PTR_GET_DEFAULT(phoneDataVolume_, 0) };
    inline DescribeCloudPhoneNodePriceRequest& setPhoneDataVolume(int32_t phoneDataVolume) { DARABONBA_PTR_SET_VALUE(phoneDataVolume_, phoneDataVolume) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline DescribeCloudPhoneNodePriceRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // serverShareDataVolume Field Functions 
    bool hasServerShareDataVolume() const { return this->serverShareDataVolume_ != nullptr;};
    void deleteServerShareDataVolume() { this->serverShareDataVolume_ = nullptr;};
    inline int32_t getServerShareDataVolume() const { DARABONBA_PTR_GET_DEFAULT(serverShareDataVolume_, 0) };
    inline DescribeCloudPhoneNodePriceRequest& setServerShareDataVolume(int32_t serverShareDataVolume) { DARABONBA_PTR_SET_VALUE(serverShareDataVolume_, serverShareDataVolume) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline DescribeCloudPhoneNodePriceRequest& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // swapSize Field Functions 
    bool hasSwapSize() const { return this->swapSize_ != nullptr;};
    void deleteSwapSize() { this->swapSize_ = nullptr;};
    inline int32_t getSwapSize() const { DARABONBA_PTR_GET_DEFAULT(swapSize_, 0) };
    inline DescribeCloudPhoneNodePriceRequest& setSwapSize(int32_t swapSize) { DARABONBA_PTR_SET_VALUE(swapSize_, swapSize) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizRegionId_ {};
    shared_ptr<string> chargeType_ {};
    shared_ptr<string> count_ {};
    shared_ptr<bool> isSingleImgDisk_ {};
    shared_ptr<string> period_ {};
    shared_ptr<string> periodUnit_ {};
    shared_ptr<int32_t> phoneCount_ {};
    shared_ptr<int32_t> phoneDataVolume_ {};
    shared_ptr<string> promotionId_ {};
    shared_ptr<int32_t> serverShareDataVolume_ {};
    // This parameter is required.
    shared_ptr<string> serverType_ {};
    shared_ptr<int32_t> swapSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
