// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOREPACKAGELISTRESPONSEBODYCOREPACKAGEINFOCOREPACKAGELISTREMAININGPERIODS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOREPACKAGELISTRESPONSEBODYCOREPACKAGEINFOCOREPACKAGELISTREMAININGPERIODS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods& obj) { 
      DARABONBA_PTR_TO_JSON(PeriodEndTime, periodEndTime_);
      DARABONBA_PTR_TO_JSON(PeriodStartTime, periodStartTime_);
      DARABONBA_PTR_TO_JSON(RemainingCoreHours, remainingCoreHours_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalCoreHours, totalCoreHours_);
      DARABONBA_PTR_TO_JSON(UsedCoreHours, usedCoreHours_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods& obj) { 
      DARABONBA_PTR_FROM_JSON(PeriodEndTime, periodEndTime_);
      DARABONBA_PTR_FROM_JSON(PeriodStartTime, periodStartTime_);
      DARABONBA_PTR_FROM_JSON(RemainingCoreHours, remainingCoreHours_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalCoreHours, totalCoreHours_);
      DARABONBA_PTR_FROM_JSON(UsedCoreHours, usedCoreHours_);
    };
    DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods() = default ;
    DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods(const DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods &) = default ;
    DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods(DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods &&) = default ;
    DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods() = default ;
    DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods& operator=(const DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods &) = default ;
    DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods& operator=(DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->periodEndTime_ == nullptr
        && return this->periodStartTime_ == nullptr && return this->remainingCoreHours_ == nullptr && return this->status_ == nullptr && return this->totalCoreHours_ == nullptr && return this->usedCoreHours_ == nullptr; };
    // periodEndTime Field Functions 
    bool hasPeriodEndTime() const { return this->periodEndTime_ != nullptr;};
    void deletePeriodEndTime() { this->periodEndTime_ = nullptr;};
    inline string periodEndTime() const { DARABONBA_PTR_GET_DEFAULT(periodEndTime_, "") };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods& setPeriodEndTime(string periodEndTime) { DARABONBA_PTR_SET_VALUE(periodEndTime_, periodEndTime) };


    // periodStartTime Field Functions 
    bool hasPeriodStartTime() const { return this->periodStartTime_ != nullptr;};
    void deletePeriodStartTime() { this->periodStartTime_ = nullptr;};
    inline string periodStartTime() const { DARABONBA_PTR_GET_DEFAULT(periodStartTime_, "") };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods& setPeriodStartTime(string periodStartTime) { DARABONBA_PTR_SET_VALUE(periodStartTime_, periodStartTime) };


    // remainingCoreHours Field Functions 
    bool hasRemainingCoreHours() const { return this->remainingCoreHours_ != nullptr;};
    void deleteRemainingCoreHours() { this->remainingCoreHours_ = nullptr;};
    inline float remainingCoreHours() const { DARABONBA_PTR_GET_DEFAULT(remainingCoreHours_, 0.0) };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods& setRemainingCoreHours(float remainingCoreHours) { DARABONBA_PTR_SET_VALUE(remainingCoreHours_, remainingCoreHours) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCoreHours Field Functions 
    bool hasTotalCoreHours() const { return this->totalCoreHours_ != nullptr;};
    void deleteTotalCoreHours() { this->totalCoreHours_ = nullptr;};
    inline float totalCoreHours() const { DARABONBA_PTR_GET_DEFAULT(totalCoreHours_, 0.0) };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods& setTotalCoreHours(float totalCoreHours) { DARABONBA_PTR_SET_VALUE(totalCoreHours_, totalCoreHours) };


    // usedCoreHours Field Functions 
    bool hasUsedCoreHours() const { return this->usedCoreHours_ != nullptr;};
    void deleteUsedCoreHours() { this->usedCoreHours_ = nullptr;};
    inline float usedCoreHours() const { DARABONBA_PTR_GET_DEFAULT(usedCoreHours_, 0.0) };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods& setUsedCoreHours(float usedCoreHours) { DARABONBA_PTR_SET_VALUE(usedCoreHours_, usedCoreHours) };


  protected:
    std::shared_ptr<string> periodEndTime_ = nullptr;
    std::shared_ptr<string> periodStartTime_ = nullptr;
    std::shared_ptr<float> remainingCoreHours_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<float> totalCoreHours_ = nullptr;
    std::shared_ptr<float> usedCoreHours_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
