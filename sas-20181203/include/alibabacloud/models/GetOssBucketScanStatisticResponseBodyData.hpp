// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSBUCKETSCANSTATISTICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETOSSBUCKETSCANSTATISTICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOssBucketScanStatisticResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssBucketScanStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(HighRisk, highRisk_);
      DARABONBA_PTR_TO_JSON(LowRisk, lowRisk_);
      DARABONBA_PTR_TO_JSON(MediumRisk, mediumRisk_);
      DARABONBA_PTR_TO_JSON(NoScanBucket, noScanBucket_);
      DARABONBA_PTR_TO_JSON(PostPayInvokeCount, postPayInvokeCount_);
      DARABONBA_PTR_TO_JSON(PrePayAuthCount, prePayAuthCount_);
      DARABONBA_PTR_TO_JSON(PrePayInvokeCount, prePayInvokeCount_);
      DARABONBA_PTR_TO_JSON(RemainAuth, remainAuth_);
      DARABONBA_PTR_TO_JSON(RiskBucket, riskBucket_);
      DARABONBA_PTR_TO_JSON(ScanObject, scanObject_);
      DARABONBA_PTR_TO_JSON(TotalBucket, totalBucket_);
      DARABONBA_PTR_TO_JSON(TotalObject, totalObject_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssBucketScanStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(HighRisk, highRisk_);
      DARABONBA_PTR_FROM_JSON(LowRisk, lowRisk_);
      DARABONBA_PTR_FROM_JSON(MediumRisk, mediumRisk_);
      DARABONBA_PTR_FROM_JSON(NoScanBucket, noScanBucket_);
      DARABONBA_PTR_FROM_JSON(PostPayInvokeCount, postPayInvokeCount_);
      DARABONBA_PTR_FROM_JSON(PrePayAuthCount, prePayAuthCount_);
      DARABONBA_PTR_FROM_JSON(PrePayInvokeCount, prePayInvokeCount_);
      DARABONBA_PTR_FROM_JSON(RemainAuth, remainAuth_);
      DARABONBA_PTR_FROM_JSON(RiskBucket, riskBucket_);
      DARABONBA_PTR_FROM_JSON(ScanObject, scanObject_);
      DARABONBA_PTR_FROM_JSON(TotalBucket, totalBucket_);
      DARABONBA_PTR_FROM_JSON(TotalObject, totalObject_);
    };
    GetOssBucketScanStatisticResponseBodyData() = default ;
    GetOssBucketScanStatisticResponseBodyData(const GetOssBucketScanStatisticResponseBodyData &) = default ;
    GetOssBucketScanStatisticResponseBodyData(GetOssBucketScanStatisticResponseBodyData &&) = default ;
    GetOssBucketScanStatisticResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssBucketScanStatisticResponseBodyData() = default ;
    GetOssBucketScanStatisticResponseBodyData& operator=(const GetOssBucketScanStatisticResponseBodyData &) = default ;
    GetOssBucketScanStatisticResponseBodyData& operator=(GetOssBucketScanStatisticResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireTime_ == nullptr
        && return this->highRisk_ == nullptr && return this->lowRisk_ == nullptr && return this->mediumRisk_ == nullptr && return this->noScanBucket_ == nullptr && return this->postPayInvokeCount_ == nullptr
        && return this->prePayAuthCount_ == nullptr && return this->prePayInvokeCount_ == nullptr && return this->remainAuth_ == nullptr && return this->riskBucket_ == nullptr && return this->scanObject_ == nullptr
        && return this->totalBucket_ == nullptr && return this->totalObject_ == nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline GetOssBucketScanStatisticResponseBodyData& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // highRisk Field Functions 
    bool hasHighRisk() const { return this->highRisk_ != nullptr;};
    void deleteHighRisk() { this->highRisk_ = nullptr;};
    inline int64_t highRisk() const { DARABONBA_PTR_GET_DEFAULT(highRisk_, 0L) };
    inline GetOssBucketScanStatisticResponseBodyData& setHighRisk(int64_t highRisk) { DARABONBA_PTR_SET_VALUE(highRisk_, highRisk) };


    // lowRisk Field Functions 
    bool hasLowRisk() const { return this->lowRisk_ != nullptr;};
    void deleteLowRisk() { this->lowRisk_ = nullptr;};
    inline int64_t lowRisk() const { DARABONBA_PTR_GET_DEFAULT(lowRisk_, 0L) };
    inline GetOssBucketScanStatisticResponseBodyData& setLowRisk(int64_t lowRisk) { DARABONBA_PTR_SET_VALUE(lowRisk_, lowRisk) };


    // mediumRisk Field Functions 
    bool hasMediumRisk() const { return this->mediumRisk_ != nullptr;};
    void deleteMediumRisk() { this->mediumRisk_ = nullptr;};
    inline int64_t mediumRisk() const { DARABONBA_PTR_GET_DEFAULT(mediumRisk_, 0L) };
    inline GetOssBucketScanStatisticResponseBodyData& setMediumRisk(int64_t mediumRisk) { DARABONBA_PTR_SET_VALUE(mediumRisk_, mediumRisk) };


    // noScanBucket Field Functions 
    bool hasNoScanBucket() const { return this->noScanBucket_ != nullptr;};
    void deleteNoScanBucket() { this->noScanBucket_ = nullptr;};
    inline int32_t noScanBucket() const { DARABONBA_PTR_GET_DEFAULT(noScanBucket_, 0) };
    inline GetOssBucketScanStatisticResponseBodyData& setNoScanBucket(int32_t noScanBucket) { DARABONBA_PTR_SET_VALUE(noScanBucket_, noScanBucket) };


    // postPayInvokeCount Field Functions 
    bool hasPostPayInvokeCount() const { return this->postPayInvokeCount_ != nullptr;};
    void deletePostPayInvokeCount() { this->postPayInvokeCount_ = nullptr;};
    inline int64_t postPayInvokeCount() const { DARABONBA_PTR_GET_DEFAULT(postPayInvokeCount_, 0L) };
    inline GetOssBucketScanStatisticResponseBodyData& setPostPayInvokeCount(int64_t postPayInvokeCount) { DARABONBA_PTR_SET_VALUE(postPayInvokeCount_, postPayInvokeCount) };


    // prePayAuthCount Field Functions 
    bool hasPrePayAuthCount() const { return this->prePayAuthCount_ != nullptr;};
    void deletePrePayAuthCount() { this->prePayAuthCount_ = nullptr;};
    inline int64_t prePayAuthCount() const { DARABONBA_PTR_GET_DEFAULT(prePayAuthCount_, 0L) };
    inline GetOssBucketScanStatisticResponseBodyData& setPrePayAuthCount(int64_t prePayAuthCount) { DARABONBA_PTR_SET_VALUE(prePayAuthCount_, prePayAuthCount) };


    // prePayInvokeCount Field Functions 
    bool hasPrePayInvokeCount() const { return this->prePayInvokeCount_ != nullptr;};
    void deletePrePayInvokeCount() { this->prePayInvokeCount_ = nullptr;};
    inline int64_t prePayInvokeCount() const { DARABONBA_PTR_GET_DEFAULT(prePayInvokeCount_, 0L) };
    inline GetOssBucketScanStatisticResponseBodyData& setPrePayInvokeCount(int64_t prePayInvokeCount) { DARABONBA_PTR_SET_VALUE(prePayInvokeCount_, prePayInvokeCount) };


    // remainAuth Field Functions 
    bool hasRemainAuth() const { return this->remainAuth_ != nullptr;};
    void deleteRemainAuth() { this->remainAuth_ = nullptr;};
    inline int32_t remainAuth() const { DARABONBA_PTR_GET_DEFAULT(remainAuth_, 0) };
    inline GetOssBucketScanStatisticResponseBodyData& setRemainAuth(int32_t remainAuth) { DARABONBA_PTR_SET_VALUE(remainAuth_, remainAuth) };


    // riskBucket Field Functions 
    bool hasRiskBucket() const { return this->riskBucket_ != nullptr;};
    void deleteRiskBucket() { this->riskBucket_ = nullptr;};
    inline int32_t riskBucket() const { DARABONBA_PTR_GET_DEFAULT(riskBucket_, 0) };
    inline GetOssBucketScanStatisticResponseBodyData& setRiskBucket(int32_t riskBucket) { DARABONBA_PTR_SET_VALUE(riskBucket_, riskBucket) };


    // scanObject Field Functions 
    bool hasScanObject() const { return this->scanObject_ != nullptr;};
    void deleteScanObject() { this->scanObject_ = nullptr;};
    inline int64_t scanObject() const { DARABONBA_PTR_GET_DEFAULT(scanObject_, 0L) };
    inline GetOssBucketScanStatisticResponseBodyData& setScanObject(int64_t scanObject) { DARABONBA_PTR_SET_VALUE(scanObject_, scanObject) };


    // totalBucket Field Functions 
    bool hasTotalBucket() const { return this->totalBucket_ != nullptr;};
    void deleteTotalBucket() { this->totalBucket_ = nullptr;};
    inline int32_t totalBucket() const { DARABONBA_PTR_GET_DEFAULT(totalBucket_, 0) };
    inline GetOssBucketScanStatisticResponseBodyData& setTotalBucket(int32_t totalBucket) { DARABONBA_PTR_SET_VALUE(totalBucket_, totalBucket) };


    // totalObject Field Functions 
    bool hasTotalObject() const { return this->totalObject_ != nullptr;};
    void deleteTotalObject() { this->totalObject_ = nullptr;};
    inline int64_t totalObject() const { DARABONBA_PTR_GET_DEFAULT(totalObject_, 0L) };
    inline GetOssBucketScanStatisticResponseBodyData& setTotalObject(int64_t totalObject) { DARABONBA_PTR_SET_VALUE(totalObject_, totalObject) };


  protected:
    // The expiration time of the purchased quota.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The number of high-risk objects.
    std::shared_ptr<int64_t> highRisk_ = nullptr;
    // The number of low-risk objects.
    std::shared_ptr<int64_t> lowRisk_ = nullptr;
    // The number of medium-risk objects.
    std::shared_ptr<int64_t> mediumRisk_ = nullptr;
    // The number of buckets that are not checked.
    std::shared_ptr<int32_t> noScanBucket_ = nullptr;
    std::shared_ptr<int64_t> postPayInvokeCount_ = nullptr;
    std::shared_ptr<int64_t> prePayAuthCount_ = nullptr;
    std::shared_ptr<int64_t> prePayInvokeCount_ = nullptr;
    // The remaining quota.
    std::shared_ptr<int32_t> remainAuth_ = nullptr;
    // The number of buckets in which at-risk objects exist.
    std::shared_ptr<int32_t> riskBucket_ = nullptr;
    // The number of objects that are checked.
    std::shared_ptr<int64_t> scanObject_ = nullptr;
    // The total number of buckets.
    std::shared_ptr<int32_t> totalBucket_ = nullptr;
    // The total number of objects in the bucket.
    std::shared_ptr<int64_t> totalObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
