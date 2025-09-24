// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGETOTALRESPONSEBODYDATATOTALUSAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANSUSAGETOTALRESPONSEBODYDATATOTALUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage& obj) { 
      DARABONBA_PTR_TO_JSON(PoolValue, poolValue_);
      DARABONBA_PTR_TO_JSON(PostpaidCost, postpaidCost_);
      DARABONBA_PTR_TO_JSON(SavedCost, savedCost_);
      DARABONBA_PTR_TO_JSON(UsagePercentage, usagePercentage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(PoolValue, poolValue_);
      DARABONBA_PTR_FROM_JSON(PostpaidCost, postpaidCost_);
      DARABONBA_PTR_FROM_JSON(SavedCost, savedCost_);
      DARABONBA_PTR_FROM_JSON(UsagePercentage, usagePercentage_);
    };
    DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage() = default ;
    DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage(const DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage &) = default ;
    DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage(DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage &&) = default ;
    DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage() = default ;
    DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage& operator=(const DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage &) = default ;
    DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage& operator=(DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->poolValue_ != nullptr
        && this->postpaidCost_ != nullptr && this->savedCost_ != nullptr && this->usagePercentage_ != nullptr; };
    // poolValue Field Functions 
    bool hasPoolValue() const { return this->poolValue_ != nullptr;};
    void deletePoolValue() { this->poolValue_ = nullptr;};
    inline float poolValue() const { DARABONBA_PTR_GET_DEFAULT(poolValue_, 0.0) };
    inline DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage& setPoolValue(float poolValue) { DARABONBA_PTR_SET_VALUE(poolValue_, poolValue) };


    // postpaidCost Field Functions 
    bool hasPostpaidCost() const { return this->postpaidCost_ != nullptr;};
    void deletePostpaidCost() { this->postpaidCost_ = nullptr;};
    inline float postpaidCost() const { DARABONBA_PTR_GET_DEFAULT(postpaidCost_, 0.0) };
    inline DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage& setPostpaidCost(float postpaidCost) { DARABONBA_PTR_SET_VALUE(postpaidCost_, postpaidCost) };


    // savedCost Field Functions 
    bool hasSavedCost() const { return this->savedCost_ != nullptr;};
    void deleteSavedCost() { this->savedCost_ = nullptr;};
    inline float savedCost() const { DARABONBA_PTR_GET_DEFAULT(savedCost_, 0.0) };
    inline DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage& setSavedCost(float savedCost) { DARABONBA_PTR_SET_VALUE(savedCost_, savedCost) };


    // usagePercentage Field Functions 
    bool hasUsagePercentage() const { return this->usagePercentage_ != nullptr;};
    void deleteUsagePercentage() { this->usagePercentage_ = nullptr;};
    inline float usagePercentage() const { DARABONBA_PTR_GET_DEFAULT(usagePercentage_, 0.0) };
    inline DescribeSavingsPlansUsageTotalResponseBodyDataTotalUsage& setUsagePercentage(float usagePercentage) { DARABONBA_PTR_SET_VALUE(usagePercentage_, usagePercentage) };


  protected:
    // The total amount of the savings plan.
    std::shared_ptr<float> poolValue_ = nullptr;
    // The pay-as-you-go cost.
    std::shared_ptr<float> postpaidCost_ = nullptr;
    // The amount that is saved.
    std::shared_ptr<float> savedCost_ = nullptr;
    // The total usage.
    std::shared_ptr<float> usagePercentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
