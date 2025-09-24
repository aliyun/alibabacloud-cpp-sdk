// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGETOTALRESPONSEBODYDATATOTALUSAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEUSAGETOTALRESPONSEBODYDATATOTALUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourceUsageTotalResponseBodyDataTotalUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceUsageTotalResponseBodyDataTotalUsage& obj) { 
      DARABONBA_PTR_TO_JSON(PostpaidCost, postpaidCost_);
      DARABONBA_PTR_TO_JSON(PotentialSavedCost, potentialSavedCost_);
      DARABONBA_PTR_TO_JSON(ReservationCost, reservationCost_);
      DARABONBA_PTR_TO_JSON(SavedCost, savedCost_);
      DARABONBA_PTR_TO_JSON(UsagePercentage, usagePercentage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceUsageTotalResponseBodyDataTotalUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(PostpaidCost, postpaidCost_);
      DARABONBA_PTR_FROM_JSON(PotentialSavedCost, potentialSavedCost_);
      DARABONBA_PTR_FROM_JSON(ReservationCost, reservationCost_);
      DARABONBA_PTR_FROM_JSON(SavedCost, savedCost_);
      DARABONBA_PTR_FROM_JSON(UsagePercentage, usagePercentage_);
    };
    DescribeResourceUsageTotalResponseBodyDataTotalUsage() = default ;
    DescribeResourceUsageTotalResponseBodyDataTotalUsage(const DescribeResourceUsageTotalResponseBodyDataTotalUsage &) = default ;
    DescribeResourceUsageTotalResponseBodyDataTotalUsage(DescribeResourceUsageTotalResponseBodyDataTotalUsage &&) = default ;
    DescribeResourceUsageTotalResponseBodyDataTotalUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceUsageTotalResponseBodyDataTotalUsage() = default ;
    DescribeResourceUsageTotalResponseBodyDataTotalUsage& operator=(const DescribeResourceUsageTotalResponseBodyDataTotalUsage &) = default ;
    DescribeResourceUsageTotalResponseBodyDataTotalUsage& operator=(DescribeResourceUsageTotalResponseBodyDataTotalUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->postpaidCost_ != nullptr
        && this->potentialSavedCost_ != nullptr && this->reservationCost_ != nullptr && this->savedCost_ != nullptr && this->usagePercentage_ != nullptr; };
    // postpaidCost Field Functions 
    bool hasPostpaidCost() const { return this->postpaidCost_ != nullptr;};
    void deletePostpaidCost() { this->postpaidCost_ = nullptr;};
    inline float postpaidCost() const { DARABONBA_PTR_GET_DEFAULT(postpaidCost_, 0.0) };
    inline DescribeResourceUsageTotalResponseBodyDataTotalUsage& setPostpaidCost(float postpaidCost) { DARABONBA_PTR_SET_VALUE(postpaidCost_, postpaidCost) };


    // potentialSavedCost Field Functions 
    bool hasPotentialSavedCost() const { return this->potentialSavedCost_ != nullptr;};
    void deletePotentialSavedCost() { this->potentialSavedCost_ = nullptr;};
    inline float potentialSavedCost() const { DARABONBA_PTR_GET_DEFAULT(potentialSavedCost_, 0.0) };
    inline DescribeResourceUsageTotalResponseBodyDataTotalUsage& setPotentialSavedCost(float potentialSavedCost) { DARABONBA_PTR_SET_VALUE(potentialSavedCost_, potentialSavedCost) };


    // reservationCost Field Functions 
    bool hasReservationCost() const { return this->reservationCost_ != nullptr;};
    void deleteReservationCost() { this->reservationCost_ = nullptr;};
    inline float reservationCost() const { DARABONBA_PTR_GET_DEFAULT(reservationCost_, 0.0) };
    inline DescribeResourceUsageTotalResponseBodyDataTotalUsage& setReservationCost(float reservationCost) { DARABONBA_PTR_SET_VALUE(reservationCost_, reservationCost) };


    // savedCost Field Functions 
    bool hasSavedCost() const { return this->savedCost_ != nullptr;};
    void deleteSavedCost() { this->savedCost_ = nullptr;};
    inline float savedCost() const { DARABONBA_PTR_GET_DEFAULT(savedCost_, 0.0) };
    inline DescribeResourceUsageTotalResponseBodyDataTotalUsage& setSavedCost(float savedCost) { DARABONBA_PTR_SET_VALUE(savedCost_, savedCost) };


    // usagePercentage Field Functions 
    bool hasUsagePercentage() const { return this->usagePercentage_ != nullptr;};
    void deleteUsagePercentage() { this->usagePercentage_ = nullptr;};
    inline float usagePercentage() const { DARABONBA_PTR_GET_DEFAULT(usagePercentage_, 0.0) };
    inline DescribeResourceUsageTotalResponseBodyDataTotalUsage& setUsagePercentage(float usagePercentage) { DARABONBA_PTR_SET_VALUE(usagePercentage_, usagePercentage) };


  protected:
    // The total costs of pay-as-you-go instances.
    std::shared_ptr<float> postpaidCost_ = nullptr;
    // The total potential savings.
    std::shared_ptr<float> potentialSavedCost_ = nullptr;
    // The fee of purchased resource plans.
    std::shared_ptr<float> reservationCost_ = nullptr;
    // The total savings.
    std::shared_ptr<float> savedCost_ = nullptr;
    // The total usage of resource plans.
    std::shared_ptr<float> usagePercentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
