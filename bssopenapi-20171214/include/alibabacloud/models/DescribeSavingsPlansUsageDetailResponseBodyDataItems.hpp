// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGEDETAILRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGEDETAILRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSavingsPlansUsageDetailResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansUsageDetailResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DeductValue, deductValue_);
      DARABONBA_PTR_TO_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PoolValue, poolValue_);
      DARABONBA_PTR_TO_JSON(PostpaidCost, postpaidCost_);
      DARABONBA_PTR_TO_JSON(SavedCost, savedCost_);
      DARABONBA_PTR_TO_JSON(StartPeriod, startPeriod_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UsagePercentage, usagePercentage_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansUsageDetailResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DeductValue, deductValue_);
      DARABONBA_PTR_FROM_JSON(EndPeriod, endPeriod_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PoolValue, poolValue_);
      DARABONBA_PTR_FROM_JSON(PostpaidCost, postpaidCost_);
      DARABONBA_PTR_FROM_JSON(SavedCost, savedCost_);
      DARABONBA_PTR_FROM_JSON(StartPeriod, startPeriod_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UsagePercentage, usagePercentage_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeSavingsPlansUsageDetailResponseBodyDataItems() = default ;
    DescribeSavingsPlansUsageDetailResponseBodyDataItems(const DescribeSavingsPlansUsageDetailResponseBodyDataItems &) = default ;
    DescribeSavingsPlansUsageDetailResponseBodyDataItems(DescribeSavingsPlansUsageDetailResponseBodyDataItems &&) = default ;
    DescribeSavingsPlansUsageDetailResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansUsageDetailResponseBodyDataItems() = default ;
    DescribeSavingsPlansUsageDetailResponseBodyDataItems& operator=(const DescribeSavingsPlansUsageDetailResponseBodyDataItems &) = default ;
    DescribeSavingsPlansUsageDetailResponseBodyDataItems& operator=(DescribeSavingsPlansUsageDetailResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->deductValue_ != nullptr && this->endPeriod_ != nullptr && this->instanceId_ != nullptr && this->poolValue_ != nullptr && this->postpaidCost_ != nullptr
        && this->savedCost_ != nullptr && this->startPeriod_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->usagePercentage_ != nullptr
        && this->userId_ != nullptr && this->userName_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeSavingsPlansUsageDetailResponseBodyDataItems& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // deductValue Field Functions 
    bool hasDeductValue() const { return this->deductValue_ != nullptr;};
    void deleteDeductValue() { this->deductValue_ = nullptr;};
    inline float deductValue() const { DARABONBA_PTR_GET_DEFAULT(deductValue_, 0.0) };
    inline DescribeSavingsPlansUsageDetailResponseBodyDataItems& setDeductValue(float deductValue) { DARABONBA_PTR_SET_VALUE(deductValue_, deductValue) };


    // endPeriod Field Functions 
    bool hasEndPeriod() const { return this->endPeriod_ != nullptr;};
    void deleteEndPeriod() { this->endPeriod_ = nullptr;};
    inline string endPeriod() const { DARABONBA_PTR_GET_DEFAULT(endPeriod_, "") };
    inline DescribeSavingsPlansUsageDetailResponseBodyDataItems& setEndPeriod(string endPeriod) { DARABONBA_PTR_SET_VALUE(endPeriod_, endPeriod) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSavingsPlansUsageDetailResponseBodyDataItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // poolValue Field Functions 
    bool hasPoolValue() const { return this->poolValue_ != nullptr;};
    void deletePoolValue() { this->poolValue_ = nullptr;};
    inline float poolValue() const { DARABONBA_PTR_GET_DEFAULT(poolValue_, 0.0) };
    inline DescribeSavingsPlansUsageDetailResponseBodyDataItems& setPoolValue(float poolValue) { DARABONBA_PTR_SET_VALUE(poolValue_, poolValue) };


    // postpaidCost Field Functions 
    bool hasPostpaidCost() const { return this->postpaidCost_ != nullptr;};
    void deletePostpaidCost() { this->postpaidCost_ = nullptr;};
    inline float postpaidCost() const { DARABONBA_PTR_GET_DEFAULT(postpaidCost_, 0.0) };
    inline DescribeSavingsPlansUsageDetailResponseBodyDataItems& setPostpaidCost(float postpaidCost) { DARABONBA_PTR_SET_VALUE(postpaidCost_, postpaidCost) };


    // savedCost Field Functions 
    bool hasSavedCost() const { return this->savedCost_ != nullptr;};
    void deleteSavedCost() { this->savedCost_ = nullptr;};
    inline float savedCost() const { DARABONBA_PTR_GET_DEFAULT(savedCost_, 0.0) };
    inline DescribeSavingsPlansUsageDetailResponseBodyDataItems& setSavedCost(float savedCost) { DARABONBA_PTR_SET_VALUE(savedCost_, savedCost) };


    // startPeriod Field Functions 
    bool hasStartPeriod() const { return this->startPeriod_ != nullptr;};
    void deleteStartPeriod() { this->startPeriod_ = nullptr;};
    inline string startPeriod() const { DARABONBA_PTR_GET_DEFAULT(startPeriod_, "") };
    inline DescribeSavingsPlansUsageDetailResponseBodyDataItems& setStartPeriod(string startPeriod) { DARABONBA_PTR_SET_VALUE(startPeriod_, startPeriod) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSavingsPlansUsageDetailResponseBodyDataItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSavingsPlansUsageDetailResponseBodyDataItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // usagePercentage Field Functions 
    bool hasUsagePercentage() const { return this->usagePercentage_ != nullptr;};
    void deleteUsagePercentage() { this->usagePercentage_ = nullptr;};
    inline float usagePercentage() const { DARABONBA_PTR_GET_DEFAULT(usagePercentage_, 0.0) };
    inline DescribeSavingsPlansUsageDetailResponseBodyDataItems& setUsagePercentage(float usagePercentage) { DARABONBA_PTR_SET_VALUE(usagePercentage_, usagePercentage) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeSavingsPlansUsageDetailResponseBodyDataItems& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeSavingsPlansUsageDetailResponseBodyDataItems& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The currency.
    std::shared_ptr<string> currency_ = nullptr;
    // The used amount of the savings plan.
    std::shared_ptr<float> deductValue_ = nullptr;
    // The end time.
    std::shared_ptr<string> endPeriod_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The total amount of the savings plan.
    std::shared_ptr<float> poolValue_ = nullptr;
    // The pay-as-you-go cost.
    std::shared_ptr<float> postpaidCost_ = nullptr;
    // The amount that is saved.
    std::shared_ptr<float> savedCost_ = nullptr;
    // The start time.
    std::shared_ptr<string> startPeriod_ = nullptr;
    // The status of the instance.
    // 
    // A value of -1 indicates that the payment is overdue. A value of 1 indicates that the instance is active.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the savings plan. Valid values: universal and ECS compute.
    std::shared_ptr<string> type_ = nullptr;
    // The usage.
    std::shared_ptr<float> usagePercentage_ = nullptr;
    // The ID of the account.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The username of the account.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
