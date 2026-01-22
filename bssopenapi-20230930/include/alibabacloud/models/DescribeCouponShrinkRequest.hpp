// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOUPONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOUPONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DescribeCouponShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCouponShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CouponId, couponId_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(CouponType, couponType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_TO_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_TO_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_TO_JSON(ExpireEndDate, expireEndDate_);
      DARABONBA_PTR_TO_JSON(ExpireStartDate, expireStartDate_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCouponShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CouponId, couponId_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(CouponType, couponType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_FROM_JSON(ExpireEndDate, expireEndDate_);
      DARABONBA_PTR_FROM_JSON(ExpireStartDate, expireStartDate_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCouponShrinkRequest() = default ;
    DescribeCouponShrinkRequest(const DescribeCouponShrinkRequest &) = default ;
    DescribeCouponShrinkRequest(DescribeCouponShrinkRequest &&) = default ;
    DescribeCouponShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCouponShrinkRequest() = default ;
    DescribeCouponShrinkRequest& operator=(const DescribeCouponShrinkRequest &) = default ;
    DescribeCouponShrinkRequest& operator=(DescribeCouponShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->couponId_ == nullptr
        && this->couponNo_ == nullptr && this->couponType_ == nullptr && this->currentPage_ == nullptr && this->ecIdAccountIdsShrink_ == nullptr && this->effectiveEndTime_ == nullptr
        && this->effectiveStartTime_ == nullptr && this->expireEndDate_ == nullptr && this->expireStartDate_ == nullptr && this->nbid_ == nullptr && this->pageSize_ == nullptr
        && this->status_ == nullptr; };
    // couponId Field Functions 
    bool hasCouponId() const { return this->couponId_ != nullptr;};
    void deleteCouponId() { this->couponId_ = nullptr;};
    inline int64_t getCouponId() const { DARABONBA_PTR_GET_DEFAULT(couponId_, 0L) };
    inline DescribeCouponShrinkRequest& setCouponId(int64_t couponId) { DARABONBA_PTR_SET_VALUE(couponId_, couponId) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline DescribeCouponShrinkRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // couponType Field Functions 
    bool hasCouponType() const { return this->couponType_ != nullptr;};
    void deleteCouponType() { this->couponType_ = nullptr;};
    inline string getCouponType() const { DARABONBA_PTR_GET_DEFAULT(couponType_, "") };
    inline DescribeCouponShrinkRequest& setCouponType(string couponType) { DARABONBA_PTR_SET_VALUE(couponType_, couponType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCouponShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ecIdAccountIdsShrink Field Functions 
    bool hasEcIdAccountIdsShrink() const { return this->ecIdAccountIdsShrink_ != nullptr;};
    void deleteEcIdAccountIdsShrink() { this->ecIdAccountIdsShrink_ = nullptr;};
    inline string getEcIdAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ecIdAccountIdsShrink_, "") };
    inline DescribeCouponShrinkRequest& setEcIdAccountIdsShrink(string ecIdAccountIdsShrink) { DARABONBA_PTR_SET_VALUE(ecIdAccountIdsShrink_, ecIdAccountIdsShrink) };


    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline int64_t getEffectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, 0L) };
    inline DescribeCouponShrinkRequest& setEffectiveEndTime(int64_t effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline int64_t getEffectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, 0L) };
    inline DescribeCouponShrinkRequest& setEffectiveStartTime(int64_t effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // expireEndDate Field Functions 
    bool hasExpireEndDate() const { return this->expireEndDate_ != nullptr;};
    void deleteExpireEndDate() { this->expireEndDate_ = nullptr;};
    inline int64_t getExpireEndDate() const { DARABONBA_PTR_GET_DEFAULT(expireEndDate_, 0L) };
    inline DescribeCouponShrinkRequest& setExpireEndDate(int64_t expireEndDate) { DARABONBA_PTR_SET_VALUE(expireEndDate_, expireEndDate) };


    // expireStartDate Field Functions 
    bool hasExpireStartDate() const { return this->expireStartDate_ != nullptr;};
    void deleteExpireStartDate() { this->expireStartDate_ = nullptr;};
    inline int64_t getExpireStartDate() const { DARABONBA_PTR_GET_DEFAULT(expireStartDate_, 0L) };
    inline DescribeCouponShrinkRequest& setExpireStartDate(int64_t expireStartDate) { DARABONBA_PTR_SET_VALUE(expireStartDate_, expireStartDate) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline DescribeCouponShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCouponShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCouponShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<int64_t> couponId_ {};
    shared_ptr<string> couponNo_ {};
    shared_ptr<string> couponType_ {};
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<string> ecIdAccountIdsShrink_ {};
    shared_ptr<int64_t> effectiveEndTime_ {};
    shared_ptr<int64_t> effectiveStartTime_ {};
    shared_ptr<int64_t> expireEndDate_ {};
    shared_ptr<int64_t> expireStartDate_ {};
    shared_ptr<string> nbid_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
