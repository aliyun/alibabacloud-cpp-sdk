// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOUPONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOUPONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCouponRequestEcIdAccountIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DescribeCouponRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCouponRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CouponId, couponId_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(CouponType, couponType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_TO_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_TO_JSON(ExpireEndDate, expireEndDate_);
      DARABONBA_PTR_TO_JSON(ExpireStartDate, expireStartDate_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCouponRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CouponId, couponId_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(CouponType, couponType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_FROM_JSON(ExpireEndDate, expireEndDate_);
      DARABONBA_PTR_FROM_JSON(ExpireStartDate, expireStartDate_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCouponRequest() = default ;
    DescribeCouponRequest(const DescribeCouponRequest &) = default ;
    DescribeCouponRequest(DescribeCouponRequest &&) = default ;
    DescribeCouponRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCouponRequest() = default ;
    DescribeCouponRequest& operator=(const DescribeCouponRequest &) = default ;
    DescribeCouponRequest& operator=(DescribeCouponRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->couponId_ != nullptr
        && this->couponNo_ != nullptr && this->couponType_ != nullptr && this->currentPage_ != nullptr && this->ecIdAccountIds_ != nullptr && this->effectiveEndTime_ != nullptr
        && this->effectiveStartTime_ != nullptr && this->expireEndDate_ != nullptr && this->expireStartDate_ != nullptr && this->nbid_ != nullptr && this->pageSize_ != nullptr
        && this->status_ != nullptr; };
    // couponId Field Functions 
    bool hasCouponId() const { return this->couponId_ != nullptr;};
    void deleteCouponId() { this->couponId_ = nullptr;};
    inline int64_t couponId() const { DARABONBA_PTR_GET_DEFAULT(couponId_, 0L) };
    inline DescribeCouponRequest& setCouponId(int64_t couponId) { DARABONBA_PTR_SET_VALUE(couponId_, couponId) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string couponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline DescribeCouponRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // couponType Field Functions 
    bool hasCouponType() const { return this->couponType_ != nullptr;};
    void deleteCouponType() { this->couponType_ = nullptr;};
    inline string couponType() const { DARABONBA_PTR_GET_DEFAULT(couponType_, "") };
    inline DescribeCouponRequest& setCouponType(string couponType) { DARABONBA_PTR_SET_VALUE(couponType_, couponType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCouponRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<DescribeCouponRequestEcIdAccountIds> & ecIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<DescribeCouponRequestEcIdAccountIds>) };
    inline vector<DescribeCouponRequestEcIdAccountIds> ecIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<DescribeCouponRequestEcIdAccountIds>) };
    inline DescribeCouponRequest& setEcIdAccountIds(const vector<DescribeCouponRequestEcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline DescribeCouponRequest& setEcIdAccountIds(vector<DescribeCouponRequestEcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline int64_t effectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, 0L) };
    inline DescribeCouponRequest& setEffectiveEndTime(int64_t effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline int64_t effectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, 0L) };
    inline DescribeCouponRequest& setEffectiveStartTime(int64_t effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // expireEndDate Field Functions 
    bool hasExpireEndDate() const { return this->expireEndDate_ != nullptr;};
    void deleteExpireEndDate() { this->expireEndDate_ = nullptr;};
    inline int64_t expireEndDate() const { DARABONBA_PTR_GET_DEFAULT(expireEndDate_, 0L) };
    inline DescribeCouponRequest& setExpireEndDate(int64_t expireEndDate) { DARABONBA_PTR_SET_VALUE(expireEndDate_, expireEndDate) };


    // expireStartDate Field Functions 
    bool hasExpireStartDate() const { return this->expireStartDate_ != nullptr;};
    void deleteExpireStartDate() { this->expireStartDate_ = nullptr;};
    inline int64_t expireStartDate() const { DARABONBA_PTR_GET_DEFAULT(expireStartDate_, 0L) };
    inline DescribeCouponRequest& setExpireStartDate(int64_t expireStartDate) { DARABONBA_PTR_SET_VALUE(expireStartDate_, expireStartDate) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline DescribeCouponRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCouponRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCouponRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> couponId_ = nullptr;
    std::shared_ptr<string> couponNo_ = nullptr;
    std::shared_ptr<string> couponType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<vector<DescribeCouponRequestEcIdAccountIds>> ecIdAccountIds_ = nullptr;
    std::shared_ptr<int64_t> effectiveEndTime_ = nullptr;
    std::shared_ptr<int64_t> effectiveStartTime_ = nullptr;
    std::shared_ptr<int64_t> expireEndDate_ = nullptr;
    std::shared_ptr<int64_t> expireStartDate_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
