// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESRESPONSEBODYRESOURCESDESKTOPDURATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCESRESPONSEBODYRESOURCESDESKTOPDURATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeUserResourcesResponseBodyResourcesDesktopDurationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserResourcesResponseBodyResourcesDesktopDurationList& obj) { 
      DARABONBA_PTR_TO_JSON(OrderInstanceId, orderInstanceId_);
      DARABONBA_PTR_TO_JSON(PackageCreationTime, packageCreationTime_);
      DARABONBA_PTR_TO_JSON(PackageExpiredTime, packageExpiredTime_);
      DARABONBA_PTR_TO_JSON(PackageId, packageId_);
      DARABONBA_PTR_TO_JSON(PackageStatus, packageStatus_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PackageUsedUpStrategy, packageUsedUpStrategy_);
      DARABONBA_PTR_TO_JSON(PeriodEndTime, periodEndTime_);
      DARABONBA_PTR_TO_JSON(PeriodStartTime, periodStartTime_);
      DARABONBA_PTR_TO_JSON(PostPaidLimitFee, postPaidLimitFee_);
      DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
      DARABONBA_PTR_TO_JSON(UsedDuration, usedDuration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserResourcesResponseBodyResourcesDesktopDurationList& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderInstanceId, orderInstanceId_);
      DARABONBA_PTR_FROM_JSON(PackageCreationTime, packageCreationTime_);
      DARABONBA_PTR_FROM_JSON(PackageExpiredTime, packageExpiredTime_);
      DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
      DARABONBA_PTR_FROM_JSON(PackageStatus, packageStatus_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PackageUsedUpStrategy, packageUsedUpStrategy_);
      DARABONBA_PTR_FROM_JSON(PeriodEndTime, periodEndTime_);
      DARABONBA_PTR_FROM_JSON(PeriodStartTime, periodStartTime_);
      DARABONBA_PTR_FROM_JSON(PostPaidLimitFee, postPaidLimitFee_);
      DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
      DARABONBA_PTR_FROM_JSON(UsedDuration, usedDuration_);
    };
    DescribeUserResourcesResponseBodyResourcesDesktopDurationList() = default ;
    DescribeUserResourcesResponseBodyResourcesDesktopDurationList(const DescribeUserResourcesResponseBodyResourcesDesktopDurationList &) = default ;
    DescribeUserResourcesResponseBodyResourcesDesktopDurationList(DescribeUserResourcesResponseBodyResourcesDesktopDurationList &&) = default ;
    DescribeUserResourcesResponseBodyResourcesDesktopDurationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserResourcesResponseBodyResourcesDesktopDurationList() = default ;
    DescribeUserResourcesResponseBodyResourcesDesktopDurationList& operator=(const DescribeUserResourcesResponseBodyResourcesDesktopDurationList &) = default ;
    DescribeUserResourcesResponseBodyResourcesDesktopDurationList& operator=(DescribeUserResourcesResponseBodyResourcesDesktopDurationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderInstanceId_ != nullptr
        && this->packageCreationTime_ != nullptr && this->packageExpiredTime_ != nullptr && this->packageId_ != nullptr && this->packageStatus_ != nullptr && this->packageType_ != nullptr
        && this->packageUsedUpStrategy_ != nullptr && this->periodEndTime_ != nullptr && this->periodStartTime_ != nullptr && this->postPaidLimitFee_ != nullptr && this->totalDuration_ != nullptr
        && this->usedDuration_ != nullptr; };
    // orderInstanceId Field Functions 
    bool hasOrderInstanceId() const { return this->orderInstanceId_ != nullptr;};
    void deleteOrderInstanceId() { this->orderInstanceId_ = nullptr;};
    inline string orderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceId_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopDurationList& setOrderInstanceId(string orderInstanceId) { DARABONBA_PTR_SET_VALUE(orderInstanceId_, orderInstanceId) };


    // packageCreationTime Field Functions 
    bool hasPackageCreationTime() const { return this->packageCreationTime_ != nullptr;};
    void deletePackageCreationTime() { this->packageCreationTime_ = nullptr;};
    inline string packageCreationTime() const { DARABONBA_PTR_GET_DEFAULT(packageCreationTime_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopDurationList& setPackageCreationTime(string packageCreationTime) { DARABONBA_PTR_SET_VALUE(packageCreationTime_, packageCreationTime) };


    // packageExpiredTime Field Functions 
    bool hasPackageExpiredTime() const { return this->packageExpiredTime_ != nullptr;};
    void deletePackageExpiredTime() { this->packageExpiredTime_ = nullptr;};
    inline string packageExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(packageExpiredTime_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopDurationList& setPackageExpiredTime(string packageExpiredTime) { DARABONBA_PTR_SET_VALUE(packageExpiredTime_, packageExpiredTime) };


    // packageId Field Functions 
    bool hasPackageId() const { return this->packageId_ != nullptr;};
    void deletePackageId() { this->packageId_ = nullptr;};
    inline string packageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopDurationList& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


    // packageStatus Field Functions 
    bool hasPackageStatus() const { return this->packageStatus_ != nullptr;};
    void deletePackageStatus() { this->packageStatus_ = nullptr;};
    inline string packageStatus() const { DARABONBA_PTR_GET_DEFAULT(packageStatus_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopDurationList& setPackageStatus(string packageStatus) { DARABONBA_PTR_SET_VALUE(packageStatus_, packageStatus) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopDurationList& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // packageUsedUpStrategy Field Functions 
    bool hasPackageUsedUpStrategy() const { return this->packageUsedUpStrategy_ != nullptr;};
    void deletePackageUsedUpStrategy() { this->packageUsedUpStrategy_ = nullptr;};
    inline string packageUsedUpStrategy() const { DARABONBA_PTR_GET_DEFAULT(packageUsedUpStrategy_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopDurationList& setPackageUsedUpStrategy(string packageUsedUpStrategy) { DARABONBA_PTR_SET_VALUE(packageUsedUpStrategy_, packageUsedUpStrategy) };


    // periodEndTime Field Functions 
    bool hasPeriodEndTime() const { return this->periodEndTime_ != nullptr;};
    void deletePeriodEndTime() { this->periodEndTime_ = nullptr;};
    inline string periodEndTime() const { DARABONBA_PTR_GET_DEFAULT(periodEndTime_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopDurationList& setPeriodEndTime(string periodEndTime) { DARABONBA_PTR_SET_VALUE(periodEndTime_, periodEndTime) };


    // periodStartTime Field Functions 
    bool hasPeriodStartTime() const { return this->periodStartTime_ != nullptr;};
    void deletePeriodStartTime() { this->periodStartTime_ = nullptr;};
    inline string periodStartTime() const { DARABONBA_PTR_GET_DEFAULT(periodStartTime_, "") };
    inline DescribeUserResourcesResponseBodyResourcesDesktopDurationList& setPeriodStartTime(string periodStartTime) { DARABONBA_PTR_SET_VALUE(periodStartTime_, periodStartTime) };


    // postPaidLimitFee Field Functions 
    bool hasPostPaidLimitFee() const { return this->postPaidLimitFee_ != nullptr;};
    void deletePostPaidLimitFee() { this->postPaidLimitFee_ = nullptr;};
    inline float postPaidLimitFee() const { DARABONBA_PTR_GET_DEFAULT(postPaidLimitFee_, 0.0) };
    inline DescribeUserResourcesResponseBodyResourcesDesktopDurationList& setPostPaidLimitFee(float postPaidLimitFee) { DARABONBA_PTR_SET_VALUE(postPaidLimitFee_, postPaidLimitFee) };


    // totalDuration Field Functions 
    bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
    void deleteTotalDuration() { this->totalDuration_ = nullptr;};
    inline int64_t totalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
    inline DescribeUserResourcesResponseBodyResourcesDesktopDurationList& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


    // usedDuration Field Functions 
    bool hasUsedDuration() const { return this->usedDuration_ != nullptr;};
    void deleteUsedDuration() { this->usedDuration_ = nullptr;};
    inline int64_t usedDuration() const { DARABONBA_PTR_GET_DEFAULT(usedDuration_, 0L) };
    inline DescribeUserResourcesResponseBodyResourcesDesktopDurationList& setUsedDuration(int64_t usedDuration) { DARABONBA_PTR_SET_VALUE(usedDuration_, usedDuration) };


  protected:
    std::shared_ptr<string> orderInstanceId_ = nullptr;
    std::shared_ptr<string> packageCreationTime_ = nullptr;
    std::shared_ptr<string> packageExpiredTime_ = nullptr;
    std::shared_ptr<string> packageId_ = nullptr;
    std::shared_ptr<string> packageStatus_ = nullptr;
    std::shared_ptr<string> packageType_ = nullptr;
    std::shared_ptr<string> packageUsedUpStrategy_ = nullptr;
    std::shared_ptr<string> periodEndTime_ = nullptr;
    std::shared_ptr<string> periodStartTime_ = nullptr;
    std::shared_ptr<float> postPaidLimitFee_ = nullptr;
    std::shared_ptr<int64_t> totalDuration_ = nullptr;
    std::shared_ptr<int64_t> usedDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
