// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PRICINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PricingResponseBodyDataChangedPriceInfo.hpp>
#include <alibabacloud/models/PricingResponseBodyDataOriginalPriceInfo.hpp>
#include <alibabacloud/models/PricingResponseBodyDataSolution.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class PricingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PricingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(changed_price_info, changedPriceInfo_);
      DARABONBA_PTR_TO_JSON(is_changed, isChanged_);
      DARABONBA_PTR_TO_JSON(original_price_info, originalPriceInfo_);
      DARABONBA_PTR_TO_JSON(remain_seats, remainSeats_);
      DARABONBA_PTR_TO_JSON(solution, solution_);
    };
    friend void from_json(const Darabonba::Json& j, PricingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(changed_price_info, changedPriceInfo_);
      DARABONBA_PTR_FROM_JSON(is_changed, isChanged_);
      DARABONBA_PTR_FROM_JSON(original_price_info, originalPriceInfo_);
      DARABONBA_PTR_FROM_JSON(remain_seats, remainSeats_);
      DARABONBA_PTR_FROM_JSON(solution, solution_);
    };
    PricingResponseBodyData() = default ;
    PricingResponseBodyData(const PricingResponseBodyData &) = default ;
    PricingResponseBodyData(PricingResponseBodyData &&) = default ;
    PricingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PricingResponseBodyData() = default ;
    PricingResponseBodyData& operator=(const PricingResponseBodyData &) = default ;
    PricingResponseBodyData& operator=(PricingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changedPriceInfo_ == nullptr
        && return this->isChanged_ == nullptr && return this->originalPriceInfo_ == nullptr && return this->remainSeats_ == nullptr && return this->solution_ == nullptr; };
    // changedPriceInfo Field Functions 
    bool hasChangedPriceInfo() const { return this->changedPriceInfo_ != nullptr;};
    void deleteChangedPriceInfo() { this->changedPriceInfo_ = nullptr;};
    inline const Models::PricingResponseBodyDataChangedPriceInfo & changedPriceInfo() const { DARABONBA_PTR_GET_CONST(changedPriceInfo_, Models::PricingResponseBodyDataChangedPriceInfo) };
    inline Models::PricingResponseBodyDataChangedPriceInfo changedPriceInfo() { DARABONBA_PTR_GET(changedPriceInfo_, Models::PricingResponseBodyDataChangedPriceInfo) };
    inline PricingResponseBodyData& setChangedPriceInfo(const Models::PricingResponseBodyDataChangedPriceInfo & changedPriceInfo) { DARABONBA_PTR_SET_VALUE(changedPriceInfo_, changedPriceInfo) };
    inline PricingResponseBodyData& setChangedPriceInfo(Models::PricingResponseBodyDataChangedPriceInfo && changedPriceInfo) { DARABONBA_PTR_SET_RVALUE(changedPriceInfo_, changedPriceInfo) };


    // isChanged Field Functions 
    bool hasIsChanged() const { return this->isChanged_ != nullptr;};
    void deleteIsChanged() { this->isChanged_ = nullptr;};
    inline bool isChanged() const { DARABONBA_PTR_GET_DEFAULT(isChanged_, false) };
    inline PricingResponseBodyData& setIsChanged(bool isChanged) { DARABONBA_PTR_SET_VALUE(isChanged_, isChanged) };


    // originalPriceInfo Field Functions 
    bool hasOriginalPriceInfo() const { return this->originalPriceInfo_ != nullptr;};
    void deleteOriginalPriceInfo() { this->originalPriceInfo_ = nullptr;};
    inline const Models::PricingResponseBodyDataOriginalPriceInfo & originalPriceInfo() const { DARABONBA_PTR_GET_CONST(originalPriceInfo_, Models::PricingResponseBodyDataOriginalPriceInfo) };
    inline Models::PricingResponseBodyDataOriginalPriceInfo originalPriceInfo() { DARABONBA_PTR_GET(originalPriceInfo_, Models::PricingResponseBodyDataOriginalPriceInfo) };
    inline PricingResponseBodyData& setOriginalPriceInfo(const Models::PricingResponseBodyDataOriginalPriceInfo & originalPriceInfo) { DARABONBA_PTR_SET_VALUE(originalPriceInfo_, originalPriceInfo) };
    inline PricingResponseBodyData& setOriginalPriceInfo(Models::PricingResponseBodyDataOriginalPriceInfo && originalPriceInfo) { DARABONBA_PTR_SET_RVALUE(originalPriceInfo_, originalPriceInfo) };


    // remainSeats Field Functions 
    bool hasRemainSeats() const { return this->remainSeats_ != nullptr;};
    void deleteRemainSeats() { this->remainSeats_ = nullptr;};
    inline string remainSeats() const { DARABONBA_PTR_GET_DEFAULT(remainSeats_, "") };
    inline PricingResponseBodyData& setRemainSeats(string remainSeats) { DARABONBA_PTR_SET_VALUE(remainSeats_, remainSeats) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline const Models::PricingResponseBodyDataSolution & solution() const { DARABONBA_PTR_GET_CONST(solution_, Models::PricingResponseBodyDataSolution) };
    inline Models::PricingResponseBodyDataSolution solution() { DARABONBA_PTR_GET(solution_, Models::PricingResponseBodyDataSolution) };
    inline PricingResponseBodyData& setSolution(const Models::PricingResponseBodyDataSolution & solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };
    inline PricingResponseBodyData& setSolution(Models::PricingResponseBodyDataSolution && solution) { DARABONBA_PTR_SET_RVALUE(solution_, solution) };


  protected:
    // price information after the price change
    std::shared_ptr<Models::PricingResponseBodyDataChangedPriceInfo> changedPriceInfo_ = nullptr;
    // whether the price has changed
    std::shared_ptr<bool> isChanged_ = nullptr;
    // the price information before the change, only available when is_changed = true
    std::shared_ptr<Models::PricingResponseBodyDataOriginalPriceInfo> originalPriceInfo_ = nullptr;
    // remaining seats: A indicates more than 9, 0-9 represents the specific number
    std::shared_ptr<string> remainSeats_ = nullptr;
    // the solution represented by the solution_id in request
    std::shared_ptr<Models::PricingResponseBodyDataSolution> solution_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
