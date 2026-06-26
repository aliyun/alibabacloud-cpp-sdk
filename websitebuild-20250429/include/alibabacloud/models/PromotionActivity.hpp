// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMOTIONACTIVITY_HPP_
#define ALIBABACLOUD_MODELS_PROMOTIONACTIVITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class PromotionActivity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PromotionActivity& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityCode, activityCode_);
      DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
      DARABONBA_PTR_TO_JSON(ActivityType, activityType_);
      DARABONBA_PTR_TO_JSON(ConsumedQuota, consumedQuota_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(EligibilityConfig, eligibilityConfig_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(OfferConfig, offerConfig_);
      DARABONBA_PTR_TO_JSON(OfferConfigSummary, offerConfigSummary_);
      DARABONBA_PTR_TO_JSON(RemainingQuota, remainingQuota_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_TO_JSON(TouchpointConfig, touchpointConfig_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_TO_JSON(WarningThreshold, warningThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, PromotionActivity& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityCode, activityCode_);
      DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
      DARABONBA_PTR_FROM_JSON(ActivityType, activityType_);
      DARABONBA_PTR_FROM_JSON(ConsumedQuota, consumedQuota_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(EligibilityConfig, eligibilityConfig_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(OfferConfig, offerConfig_);
      DARABONBA_PTR_FROM_JSON(OfferConfigSummary, offerConfigSummary_);
      DARABONBA_PTR_FROM_JSON(RemainingQuota, remainingQuota_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_FROM_JSON(TouchpointConfig, touchpointConfig_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_FROM_JSON(WarningThreshold, warningThreshold_);
    };
    PromotionActivity() = default ;
    PromotionActivity(const PromotionActivity &) = default ;
    PromotionActivity(PromotionActivity &&) = default ;
    PromotionActivity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PromotionActivity() = default ;
    PromotionActivity& operator=(const PromotionActivity &) = default ;
    PromotionActivity& operator=(PromotionActivity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityCode_ == nullptr
        && this->activityName_ == nullptr && this->activityType_ == nullptr && this->consumedQuota_ == nullptr && this->createTime_ == nullptr && this->createdBy_ == nullptr
        && this->eligibilityConfig_ == nullptr && this->endDate_ == nullptr && this->offerConfig_ == nullptr && this->offerConfigSummary_ == nullptr && this->remainingQuota_ == nullptr
        && this->startDate_ == nullptr && this->status_ == nullptr && this->totalQuota_ == nullptr && this->touchpointConfig_ == nullptr && this->updateTime_ == nullptr
        && this->updatedBy_ == nullptr && this->warningThreshold_ == nullptr; };
    // activityCode Field Functions 
    bool hasActivityCode() const { return this->activityCode_ != nullptr;};
    void deleteActivityCode() { this->activityCode_ = nullptr;};
    inline string getActivityCode() const { DARABONBA_PTR_GET_DEFAULT(activityCode_, "") };
    inline PromotionActivity& setActivityCode(string activityCode) { DARABONBA_PTR_SET_VALUE(activityCode_, activityCode) };


    // activityName Field Functions 
    bool hasActivityName() const { return this->activityName_ != nullptr;};
    void deleteActivityName() { this->activityName_ = nullptr;};
    inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
    inline PromotionActivity& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


    // activityType Field Functions 
    bool hasActivityType() const { return this->activityType_ != nullptr;};
    void deleteActivityType() { this->activityType_ = nullptr;};
    inline string getActivityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
    inline PromotionActivity& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


    // consumedQuota Field Functions 
    bool hasConsumedQuota() const { return this->consumedQuota_ != nullptr;};
    void deleteConsumedQuota() { this->consumedQuota_ = nullptr;};
    inline int64_t getConsumedQuota() const { DARABONBA_PTR_GET_DEFAULT(consumedQuota_, 0L) };
    inline PromotionActivity& setConsumedQuota(int64_t consumedQuota) { DARABONBA_PTR_SET_VALUE(consumedQuota_, consumedQuota) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline PromotionActivity& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline PromotionActivity& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // eligibilityConfig Field Functions 
    bool hasEligibilityConfig() const { return this->eligibilityConfig_ != nullptr;};
    void deleteEligibilityConfig() { this->eligibilityConfig_ = nullptr;};
    inline string getEligibilityConfig() const { DARABONBA_PTR_GET_DEFAULT(eligibilityConfig_, "") };
    inline PromotionActivity& setEligibilityConfig(string eligibilityConfig) { DARABONBA_PTR_SET_VALUE(eligibilityConfig_, eligibilityConfig) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline PromotionActivity& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // offerConfig Field Functions 
    bool hasOfferConfig() const { return this->offerConfig_ != nullptr;};
    void deleteOfferConfig() { this->offerConfig_ = nullptr;};
    inline string getOfferConfig() const { DARABONBA_PTR_GET_DEFAULT(offerConfig_, "") };
    inline PromotionActivity& setOfferConfig(string offerConfig) { DARABONBA_PTR_SET_VALUE(offerConfig_, offerConfig) };


    // offerConfigSummary Field Functions 
    bool hasOfferConfigSummary() const { return this->offerConfigSummary_ != nullptr;};
    void deleteOfferConfigSummary() { this->offerConfigSummary_ = nullptr;};
    inline string getOfferConfigSummary() const { DARABONBA_PTR_GET_DEFAULT(offerConfigSummary_, "") };
    inline PromotionActivity& setOfferConfigSummary(string offerConfigSummary) { DARABONBA_PTR_SET_VALUE(offerConfigSummary_, offerConfigSummary) };


    // remainingQuota Field Functions 
    bool hasRemainingQuota() const { return this->remainingQuota_ != nullptr;};
    void deleteRemainingQuota() { this->remainingQuota_ = nullptr;};
    inline int64_t getRemainingQuota() const { DARABONBA_PTR_GET_DEFAULT(remainingQuota_, 0L) };
    inline PromotionActivity& setRemainingQuota(int64_t remainingQuota) { DARABONBA_PTR_SET_VALUE(remainingQuota_, remainingQuota) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline PromotionActivity& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PromotionActivity& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalQuota Field Functions 
    bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
    void deleteTotalQuota() { this->totalQuota_ = nullptr;};
    inline int64_t getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0L) };
    inline PromotionActivity& setTotalQuota(int64_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


    // touchpointConfig Field Functions 
    bool hasTouchpointConfig() const { return this->touchpointConfig_ != nullptr;};
    void deleteTouchpointConfig() { this->touchpointConfig_ = nullptr;};
    inline string getTouchpointConfig() const { DARABONBA_PTR_GET_DEFAULT(touchpointConfig_, "") };
    inline PromotionActivity& setTouchpointConfig(string touchpointConfig) { DARABONBA_PTR_SET_VALUE(touchpointConfig_, touchpointConfig) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline PromotionActivity& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline PromotionActivity& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


    // warningThreshold Field Functions 
    bool hasWarningThreshold() const { return this->warningThreshold_ != nullptr;};
    void deleteWarningThreshold() { this->warningThreshold_ = nullptr;};
    inline int32_t getWarningThreshold() const { DARABONBA_PTR_GET_DEFAULT(warningThreshold_, 0) };
    inline PromotionActivity& setWarningThreshold(int32_t warningThreshold) { DARABONBA_PTR_SET_VALUE(warningThreshold_, warningThreshold) };


  protected:
    shared_ptr<string> activityCode_ {};
    shared_ptr<string> activityName_ {};
    shared_ptr<string> activityType_ {};
    shared_ptr<int64_t> consumedQuota_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> createdBy_ {};
    shared_ptr<string> eligibilityConfig_ {};
    shared_ptr<string> endDate_ {};
    shared_ptr<string> offerConfig_ {};
    shared_ptr<string> offerConfigSummary_ {};
    shared_ptr<int64_t> remainingQuota_ {};
    shared_ptr<string> startDate_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int64_t> totalQuota_ {};
    shared_ptr<string> touchpointConfig_ {};
    shared_ptr<string> updateTime_ {};
    shared_ptr<string> updatedBy_ {};
    shared_ptr<int32_t> warningThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
