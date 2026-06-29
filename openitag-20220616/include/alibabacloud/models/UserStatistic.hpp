// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_USERSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class UserStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptedMarkItemsCount, acceptedMarkItemsCount_);
      DARABONBA_PTR_TO_JSON(CheckCount, checkCount_);
      DARABONBA_PTR_TO_JSON(CheckedAcceptedCount, checkedAcceptedCount_);
      DARABONBA_PTR_TO_JSON(CheckedAccuracy, checkedAccuracy_);
      DARABONBA_PTR_TO_JSON(MarkEfficiency, markEfficiency_);
      DARABONBA_PTR_TO_JSON(MarkTime, markTime_);
      DARABONBA_PTR_TO_JSON(SamplingAccuracy, samplingAccuracy_);
      DARABONBA_PTR_TO_JSON(SamplingCount, samplingCount_);
      DARABONBA_PTR_TO_JSON(SamplingErrorCount, samplingErrorCount_);
      DARABONBA_PTR_TO_JSON(TotalMarkItemsCount, totalMarkItemsCount_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UserStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptedMarkItemsCount, acceptedMarkItemsCount_);
      DARABONBA_PTR_FROM_JSON(CheckCount, checkCount_);
      DARABONBA_PTR_FROM_JSON(CheckedAcceptedCount, checkedAcceptedCount_);
      DARABONBA_PTR_FROM_JSON(CheckedAccuracy, checkedAccuracy_);
      DARABONBA_PTR_FROM_JSON(MarkEfficiency, markEfficiency_);
      DARABONBA_PTR_FROM_JSON(MarkTime, markTime_);
      DARABONBA_PTR_FROM_JSON(SamplingAccuracy, samplingAccuracy_);
      DARABONBA_PTR_FROM_JSON(SamplingCount, samplingCount_);
      DARABONBA_PTR_FROM_JSON(SamplingErrorCount, samplingErrorCount_);
      DARABONBA_PTR_FROM_JSON(TotalMarkItemsCount, totalMarkItemsCount_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    UserStatistic() = default ;
    UserStatistic(const UserStatistic &) = default ;
    UserStatistic(UserStatistic &&) = default ;
    UserStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserStatistic() = default ;
    UserStatistic& operator=(const UserStatistic &) = default ;
    UserStatistic& operator=(UserStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptedMarkItemsCount_ == nullptr
        && this->checkCount_ == nullptr && this->checkedAcceptedCount_ == nullptr && this->checkedAccuracy_ == nullptr && this->markEfficiency_ == nullptr && this->markTime_ == nullptr
        && this->samplingAccuracy_ == nullptr && this->samplingCount_ == nullptr && this->samplingErrorCount_ == nullptr && this->totalMarkItemsCount_ == nullptr && this->userId_ == nullptr; };
    // acceptedMarkItemsCount Field Functions 
    bool hasAcceptedMarkItemsCount() const { return this->acceptedMarkItemsCount_ != nullptr;};
    void deleteAcceptedMarkItemsCount() { this->acceptedMarkItemsCount_ = nullptr;};
    inline float getAcceptedMarkItemsCount() const { DARABONBA_PTR_GET_DEFAULT(acceptedMarkItemsCount_, 0.0) };
    inline UserStatistic& setAcceptedMarkItemsCount(float acceptedMarkItemsCount) { DARABONBA_PTR_SET_VALUE(acceptedMarkItemsCount_, acceptedMarkItemsCount) };


    // checkCount Field Functions 
    bool hasCheckCount() const { return this->checkCount_ != nullptr;};
    void deleteCheckCount() { this->checkCount_ = nullptr;};
    inline float getCheckCount() const { DARABONBA_PTR_GET_DEFAULT(checkCount_, 0.0) };
    inline UserStatistic& setCheckCount(float checkCount) { DARABONBA_PTR_SET_VALUE(checkCount_, checkCount) };


    // checkedAcceptedCount Field Functions 
    bool hasCheckedAcceptedCount() const { return this->checkedAcceptedCount_ != nullptr;};
    void deleteCheckedAcceptedCount() { this->checkedAcceptedCount_ = nullptr;};
    inline float getCheckedAcceptedCount() const { DARABONBA_PTR_GET_DEFAULT(checkedAcceptedCount_, 0.0) };
    inline UserStatistic& setCheckedAcceptedCount(float checkedAcceptedCount) { DARABONBA_PTR_SET_VALUE(checkedAcceptedCount_, checkedAcceptedCount) };


    // checkedAccuracy Field Functions 
    bool hasCheckedAccuracy() const { return this->checkedAccuracy_ != nullptr;};
    void deleteCheckedAccuracy() { this->checkedAccuracy_ = nullptr;};
    inline float getCheckedAccuracy() const { DARABONBA_PTR_GET_DEFAULT(checkedAccuracy_, 0.0) };
    inline UserStatistic& setCheckedAccuracy(float checkedAccuracy) { DARABONBA_PTR_SET_VALUE(checkedAccuracy_, checkedAccuracy) };


    // markEfficiency Field Functions 
    bool hasMarkEfficiency() const { return this->markEfficiency_ != nullptr;};
    void deleteMarkEfficiency() { this->markEfficiency_ = nullptr;};
    inline float getMarkEfficiency() const { DARABONBA_PTR_GET_DEFAULT(markEfficiency_, 0.0) };
    inline UserStatistic& setMarkEfficiency(float markEfficiency) { DARABONBA_PTR_SET_VALUE(markEfficiency_, markEfficiency) };


    // markTime Field Functions 
    bool hasMarkTime() const { return this->markTime_ != nullptr;};
    void deleteMarkTime() { this->markTime_ = nullptr;};
    inline float getMarkTime() const { DARABONBA_PTR_GET_DEFAULT(markTime_, 0.0) };
    inline UserStatistic& setMarkTime(float markTime) { DARABONBA_PTR_SET_VALUE(markTime_, markTime) };


    // samplingAccuracy Field Functions 
    bool hasSamplingAccuracy() const { return this->samplingAccuracy_ != nullptr;};
    void deleteSamplingAccuracy() { this->samplingAccuracy_ = nullptr;};
    inline float getSamplingAccuracy() const { DARABONBA_PTR_GET_DEFAULT(samplingAccuracy_, 0.0) };
    inline UserStatistic& setSamplingAccuracy(float samplingAccuracy) { DARABONBA_PTR_SET_VALUE(samplingAccuracy_, samplingAccuracy) };


    // samplingCount Field Functions 
    bool hasSamplingCount() const { return this->samplingCount_ != nullptr;};
    void deleteSamplingCount() { this->samplingCount_ = nullptr;};
    inline float getSamplingCount() const { DARABONBA_PTR_GET_DEFAULT(samplingCount_, 0.0) };
    inline UserStatistic& setSamplingCount(float samplingCount) { DARABONBA_PTR_SET_VALUE(samplingCount_, samplingCount) };


    // samplingErrorCount Field Functions 
    bool hasSamplingErrorCount() const { return this->samplingErrorCount_ != nullptr;};
    void deleteSamplingErrorCount() { this->samplingErrorCount_ = nullptr;};
    inline float getSamplingErrorCount() const { DARABONBA_PTR_GET_DEFAULT(samplingErrorCount_, 0.0) };
    inline UserStatistic& setSamplingErrorCount(float samplingErrorCount) { DARABONBA_PTR_SET_VALUE(samplingErrorCount_, samplingErrorCount) };


    // totalMarkItemsCount Field Functions 
    bool hasTotalMarkItemsCount() const { return this->totalMarkItemsCount_ != nullptr;};
    void deleteTotalMarkItemsCount() { this->totalMarkItemsCount_ = nullptr;};
    inline float getTotalMarkItemsCount() const { DARABONBA_PTR_GET_DEFAULT(totalMarkItemsCount_, 0.0) };
    inline UserStatistic& setTotalMarkItemsCount(float totalMarkItemsCount) { DARABONBA_PTR_SET_VALUE(totalMarkItemsCount_, totalMarkItemsCount) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UserStatistic& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Quantity of Data items passed
    shared_ptr<float> acceptedMarkItemsCount_ {};
    // Total inspection count
    shared_ptr<float> checkCount_ {};
    // Quantity passed in inspection
    shared_ptr<float> checkedAcceptedCount_ {};
    // Inspection accuracy.  
    // Inspection accuracy = Number Of Error inspected / Quantity inspected
    shared_ptr<float> checkedAccuracy_ {};
    // Annotation efficiency. Unit: items/hour  
    // Annotation efficiency = Quantity annotated / Annotation duration (including rejections)
    shared_ptr<float> markEfficiency_ {};
    // Annotation duration. Unit: hours
    shared_ptr<float> markTime_ {};
    // Sampling accuracy.  
    // Validated accuracy = Number Of Error validated / Quantity validated
    shared_ptr<float> samplingAccuracy_ {};
    // Total sampling quantity
    shared_ptr<float> samplingCount_ {};
    // Number Of Error in sampling
    shared_ptr<float> samplingErrorCount_ {};
    // Total Data items
    shared_ptr<float> totalMarkItemsCount_ {};
    // User ID
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
