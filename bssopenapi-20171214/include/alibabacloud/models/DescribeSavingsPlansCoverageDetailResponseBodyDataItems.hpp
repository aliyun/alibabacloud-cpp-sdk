// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSCOVERAGEDETAILRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSCOVERAGEDETAILRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSavingsPlansCoverageDetailResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansCoverageDetailResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(CoveragePercentage, coveragePercentage_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DeductAmount, deductAmount_);
      DARABONBA_PTR_TO_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PostpaidCost, postpaidCost_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StartPeriod, startPeriod_);
      DARABONBA_PTR_TO_JSON(TotalAmount, totalAmount_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansCoverageDetailResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CoveragePercentage, coveragePercentage_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DeductAmount, deductAmount_);
      DARABONBA_PTR_FROM_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PostpaidCost, postpaidCost_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StartPeriod, startPeriod_);
      DARABONBA_PTR_FROM_JSON(TotalAmount, totalAmount_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeSavingsPlansCoverageDetailResponseBodyDataItems() = default ;
    DescribeSavingsPlansCoverageDetailResponseBodyDataItems(const DescribeSavingsPlansCoverageDetailResponseBodyDataItems &) = default ;
    DescribeSavingsPlansCoverageDetailResponseBodyDataItems(DescribeSavingsPlansCoverageDetailResponseBodyDataItems &&) = default ;
    DescribeSavingsPlansCoverageDetailResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansCoverageDetailResponseBodyDataItems() = default ;
    DescribeSavingsPlansCoverageDetailResponseBodyDataItems& operator=(const DescribeSavingsPlansCoverageDetailResponseBodyDataItems &) = default ;
    DescribeSavingsPlansCoverageDetailResponseBodyDataItems& operator=(DescribeSavingsPlansCoverageDetailResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coveragePercentage_ != nullptr
        && this->currency_ != nullptr && this->deductAmount_ != nullptr && this->endPeriod_ != nullptr && this->instanceId_ != nullptr && this->instanceSpec_ != nullptr
        && this->ownerId_ != nullptr && this->postpaidCost_ != nullptr && this->region_ != nullptr && this->startPeriod_ != nullptr && this->totalAmount_ != nullptr
        && this->userId_ != nullptr && this->userName_ != nullptr; };
    // coveragePercentage Field Functions 
    bool hasCoveragePercentage() const { return this->coveragePercentage_ != nullptr;};
    void deleteCoveragePercentage() { this->coveragePercentage_ = nullptr;};
    inline float coveragePercentage() const { DARABONBA_PTR_GET_DEFAULT(coveragePercentage_, 0.0) };
    inline DescribeSavingsPlansCoverageDetailResponseBodyDataItems& setCoveragePercentage(float coveragePercentage) { DARABONBA_PTR_SET_VALUE(coveragePercentage_, coveragePercentage) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeSavingsPlansCoverageDetailResponseBodyDataItems& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // deductAmount Field Functions 
    bool hasDeductAmount() const { return this->deductAmount_ != nullptr;};
    void deleteDeductAmount() { this->deductAmount_ = nullptr;};
    inline float deductAmount() const { DARABONBA_PTR_GET_DEFAULT(deductAmount_, 0.0) };
    inline DescribeSavingsPlansCoverageDetailResponseBodyDataItems& setDeductAmount(float deductAmount) { DARABONBA_PTR_SET_VALUE(deductAmount_, deductAmount) };


    // endPeriod Field Functions 
    bool hasEndPeriod() const { return this->endPeriod_ != nullptr;};
    void deleteEndPeriod() { this->endPeriod_ = nullptr;};
    inline string endPeriod() const { DARABONBA_PTR_GET_DEFAULT(endPeriod_, "") };
    inline DescribeSavingsPlansCoverageDetailResponseBodyDataItems& setEndPeriod(string endPeriod) { DARABONBA_PTR_SET_VALUE(endPeriod_, endPeriod) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSavingsPlansCoverageDetailResponseBodyDataItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline DescribeSavingsPlansCoverageDetailResponseBodyDataItems& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeSavingsPlansCoverageDetailResponseBodyDataItems& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // postpaidCost Field Functions 
    bool hasPostpaidCost() const { return this->postpaidCost_ != nullptr;};
    void deletePostpaidCost() { this->postpaidCost_ = nullptr;};
    inline float postpaidCost() const { DARABONBA_PTR_GET_DEFAULT(postpaidCost_, 0.0) };
    inline DescribeSavingsPlansCoverageDetailResponseBodyDataItems& setPostpaidCost(float postpaidCost) { DARABONBA_PTR_SET_VALUE(postpaidCost_, postpaidCost) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeSavingsPlansCoverageDetailResponseBodyDataItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startPeriod Field Functions 
    bool hasStartPeriod() const { return this->startPeriod_ != nullptr;};
    void deleteStartPeriod() { this->startPeriod_ = nullptr;};
    inline string startPeriod() const { DARABONBA_PTR_GET_DEFAULT(startPeriod_, "") };
    inline DescribeSavingsPlansCoverageDetailResponseBodyDataItems& setStartPeriod(string startPeriod) { DARABONBA_PTR_SET_VALUE(startPeriod_, startPeriod) };


    // totalAmount Field Functions 
    bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
    void deleteTotalAmount() { this->totalAmount_ = nullptr;};
    inline float totalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0.0) };
    inline DescribeSavingsPlansCoverageDetailResponseBodyDataItems& setTotalAmount(float totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeSavingsPlansCoverageDetailResponseBodyDataItems& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeSavingsPlansCoverageDetailResponseBodyDataItems& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The coverage.
    std::shared_ptr<float> coveragePercentage_ = nullptr;
    // The currency.
    std::shared_ptr<string> currency_ = nullptr;
    // The deducted amount.
    std::shared_ptr<float> deductAmount_ = nullptr;
    // The end time.
    std::shared_ptr<string> endPeriod_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The specifications.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The pay-as-you-go cost.
    std::shared_ptr<float> postpaidCost_ = nullptr;
    // The region.
    std::shared_ptr<string> region_ = nullptr;
    // The start time.
    std::shared_ptr<string> startPeriod_ = nullptr;
    // The total expenditure.
    std::shared_ptr<float> totalAmount_ = nullptr;
    // The ID of the account.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The username of the account.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
