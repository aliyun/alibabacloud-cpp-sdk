// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOREPACKAGELISTRESPONSEBODYCOREPACKAGEINFOCOREPACKAGELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOREPACKAGELISTRESPONSEBODYCOREPACKAGEINFOCOREPACKAGELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& obj) { 
      DARABONBA_PTR_TO_JSON(AssignedCoreHours, assignedCoreHours_);
      DARABONBA_PTR_TO_JSON(DeductionInstanceList, deductionInstanceList_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PeriodEndTime, periodEndTime_);
      DARABONBA_PTR_TO_JSON(PeriodStartTime, periodStartTime_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RemainingCoreHours, remainingCoreHours_);
      DARABONBA_PTR_TO_JSON(RemainingPeriods, remainingPeriods_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalCoreHours, totalCoreHours_);
      DARABONBA_PTR_TO_JSON(UnassignedCoreHours, unassignedCoreHours_);
      DARABONBA_PTR_TO_JSON(UsedCoreHours, usedCoreHours_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignedCoreHours, assignedCoreHours_);
      DARABONBA_PTR_FROM_JSON(DeductionInstanceList, deductionInstanceList_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PeriodEndTime, periodEndTime_);
      DARABONBA_PTR_FROM_JSON(PeriodStartTime, periodStartTime_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RemainingCoreHours, remainingCoreHours_);
      DARABONBA_PTR_FROM_JSON(RemainingPeriods, remainingPeriods_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalCoreHours, totalCoreHours_);
      DARABONBA_PTR_FROM_JSON(UnassignedCoreHours, unassignedCoreHours_);
      DARABONBA_PTR_FROM_JSON(UsedCoreHours, usedCoreHours_);
    };
    DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList() = default ;
    DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList(const DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList &) = default ;
    DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList(DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList &&) = default ;
    DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList() = default ;
    DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& operator=(const DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList &) = default ;
    DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& operator=(DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedCoreHours_ == nullptr
        && return this->deductionInstanceList_ == nullptr && return this->expireTime_ == nullptr && return this->instanceId_ == nullptr && return this->periodEndTime_ == nullptr && return this->periodStartTime_ == nullptr
        && return this->productType_ == nullptr && return this->remainingCoreHours_ == nullptr && return this->remainingPeriods_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->totalCoreHours_ == nullptr && return this->unassignedCoreHours_ == nullptr && return this->usedCoreHours_ == nullptr; };
    // assignedCoreHours Field Functions 
    bool hasAssignedCoreHours() const { return this->assignedCoreHours_ != nullptr;};
    void deleteAssignedCoreHours() { this->assignedCoreHours_ = nullptr;};
    inline float assignedCoreHours() const { DARABONBA_PTR_GET_DEFAULT(assignedCoreHours_, 0.0) };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setAssignedCoreHours(float assignedCoreHours) { DARABONBA_PTR_SET_VALUE(assignedCoreHours_, assignedCoreHours) };


    // deductionInstanceList Field Functions 
    bool hasDeductionInstanceList() const { return this->deductionInstanceList_ != nullptr;};
    void deleteDeductionInstanceList() { this->deductionInstanceList_ = nullptr;};
    inline const vector<Darabonba::Json> & deductionInstanceList() const { DARABONBA_PTR_GET_CONST(deductionInstanceList_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> deductionInstanceList() { DARABONBA_PTR_GET(deductionInstanceList_, vector<Darabonba::Json>) };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setDeductionInstanceList(const vector<Darabonba::Json> & deductionInstanceList) { DARABONBA_PTR_SET_VALUE(deductionInstanceList_, deductionInstanceList) };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setDeductionInstanceList(vector<Darabonba::Json> && deductionInstanceList) { DARABONBA_PTR_SET_RVALUE(deductionInstanceList_, deductionInstanceList) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // periodEndTime Field Functions 
    bool hasPeriodEndTime() const { return this->periodEndTime_ != nullptr;};
    void deletePeriodEndTime() { this->periodEndTime_ = nullptr;};
    inline string periodEndTime() const { DARABONBA_PTR_GET_DEFAULT(periodEndTime_, "") };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setPeriodEndTime(string periodEndTime) { DARABONBA_PTR_SET_VALUE(periodEndTime_, periodEndTime) };


    // periodStartTime Field Functions 
    bool hasPeriodStartTime() const { return this->periodStartTime_ != nullptr;};
    void deletePeriodStartTime() { this->periodStartTime_ = nullptr;};
    inline string periodStartTime() const { DARABONBA_PTR_GET_DEFAULT(periodStartTime_, "") };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setPeriodStartTime(string periodStartTime) { DARABONBA_PTR_SET_VALUE(periodStartTime_, periodStartTime) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // remainingCoreHours Field Functions 
    bool hasRemainingCoreHours() const { return this->remainingCoreHours_ != nullptr;};
    void deleteRemainingCoreHours() { this->remainingCoreHours_ = nullptr;};
    inline float remainingCoreHours() const { DARABONBA_PTR_GET_DEFAULT(remainingCoreHours_, 0.0) };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setRemainingCoreHours(float remainingCoreHours) { DARABONBA_PTR_SET_VALUE(remainingCoreHours_, remainingCoreHours) };


    // remainingPeriods Field Functions 
    bool hasRemainingPeriods() const { return this->remainingPeriods_ != nullptr;};
    void deleteRemainingPeriods() { this->remainingPeriods_ = nullptr;};
    inline const vector<Models::DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods> & remainingPeriods() const { DARABONBA_PTR_GET_CONST(remainingPeriods_, vector<Models::DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods>) };
    inline vector<Models::DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods> remainingPeriods() { DARABONBA_PTR_GET(remainingPeriods_, vector<Models::DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods>) };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setRemainingPeriods(const vector<Models::DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods> & remainingPeriods) { DARABONBA_PTR_SET_VALUE(remainingPeriods_, remainingPeriods) };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setRemainingPeriods(vector<Models::DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods> && remainingPeriods) { DARABONBA_PTR_SET_RVALUE(remainingPeriods_, remainingPeriods) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCoreHours Field Functions 
    bool hasTotalCoreHours() const { return this->totalCoreHours_ != nullptr;};
    void deleteTotalCoreHours() { this->totalCoreHours_ = nullptr;};
    inline float totalCoreHours() const { DARABONBA_PTR_GET_DEFAULT(totalCoreHours_, 0.0) };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setTotalCoreHours(float totalCoreHours) { DARABONBA_PTR_SET_VALUE(totalCoreHours_, totalCoreHours) };


    // unassignedCoreHours Field Functions 
    bool hasUnassignedCoreHours() const { return this->unassignedCoreHours_ != nullptr;};
    void deleteUnassignedCoreHours() { this->unassignedCoreHours_ = nullptr;};
    inline float unassignedCoreHours() const { DARABONBA_PTR_GET_DEFAULT(unassignedCoreHours_, 0.0) };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setUnassignedCoreHours(float unassignedCoreHours) { DARABONBA_PTR_SET_VALUE(unassignedCoreHours_, unassignedCoreHours) };


    // usedCoreHours Field Functions 
    bool hasUsedCoreHours() const { return this->usedCoreHours_ != nullptr;};
    void deleteUsedCoreHours() { this->usedCoreHours_ = nullptr;};
    inline float usedCoreHours() const { DARABONBA_PTR_GET_DEFAULT(usedCoreHours_, 0.0) };
    inline DescribeCorePackageListResponseBodyCorePackageInfoCorePackageList& setUsedCoreHours(float usedCoreHours) { DARABONBA_PTR_SET_VALUE(usedCoreHours_, usedCoreHours) };


  protected:
    std::shared_ptr<float> assignedCoreHours_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> deductionInstanceList_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> periodEndTime_ = nullptr;
    std::shared_ptr<string> periodStartTime_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<float> remainingCoreHours_ = nullptr;
    std::shared_ptr<vector<Models::DescribeCorePackageListResponseBodyCorePackageInfoCorePackageListRemainingPeriods>> remainingPeriods_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<float> totalCoreHours_ = nullptr;
    std::shared_ptr<float> unassignedCoreHours_ = nullptr;
    std::shared_ptr<float> usedCoreHours_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
