// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKTASKSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWORKTASKSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetWorkTaskSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkTaskSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DealAverageDuration, dealAverageDuration_);
      DARABONBA_PTR_TO_JSON(DealAverageDurationGrowthRate, dealAverageDurationGrowthRate_);
      DARABONBA_PTR_TO_JSON(DealWorkTaskCount, dealWorkTaskCount_);
      DARABONBA_PTR_TO_JSON(DealWorkTaskCountRate, dealWorkTaskCountRate_);
      DARABONBA_PTR_TO_JSON(WorkTaskCount, workTaskCount_);
      DARABONBA_PTR_TO_JSON(WorkTaskDealRate, workTaskDealRate_);
      DARABONBA_PTR_TO_JSON(WorkTaskDealRateGrowthRate, workTaskDealRateGrowthRate_);
      DARABONBA_PTR_TO_JSON(WorkTaskGrowthRate, workTaskGrowthRate_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkTaskSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DealAverageDuration, dealAverageDuration_);
      DARABONBA_PTR_FROM_JSON(DealAverageDurationGrowthRate, dealAverageDurationGrowthRate_);
      DARABONBA_PTR_FROM_JSON(DealWorkTaskCount, dealWorkTaskCount_);
      DARABONBA_PTR_FROM_JSON(DealWorkTaskCountRate, dealWorkTaskCountRate_);
      DARABONBA_PTR_FROM_JSON(WorkTaskCount, workTaskCount_);
      DARABONBA_PTR_FROM_JSON(WorkTaskDealRate, workTaskDealRate_);
      DARABONBA_PTR_FROM_JSON(WorkTaskDealRateGrowthRate, workTaskDealRateGrowthRate_);
      DARABONBA_PTR_FROM_JSON(WorkTaskGrowthRate, workTaskGrowthRate_);
    };
    GetWorkTaskSummaryResponseBodyData() = default ;
    GetWorkTaskSummaryResponseBodyData(const GetWorkTaskSummaryResponseBodyData &) = default ;
    GetWorkTaskSummaryResponseBodyData(GetWorkTaskSummaryResponseBodyData &&) = default ;
    GetWorkTaskSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkTaskSummaryResponseBodyData() = default ;
    GetWorkTaskSummaryResponseBodyData& operator=(const GetWorkTaskSummaryResponseBodyData &) = default ;
    GetWorkTaskSummaryResponseBodyData& operator=(GetWorkTaskSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dealAverageDuration_ == nullptr
        && return this->dealAverageDurationGrowthRate_ == nullptr && return this->dealWorkTaskCount_ == nullptr && return this->dealWorkTaskCountRate_ == nullptr && return this->workTaskCount_ == nullptr && return this->workTaskDealRate_ == nullptr
        && return this->workTaskDealRateGrowthRate_ == nullptr && return this->workTaskGrowthRate_ == nullptr; };
    // dealAverageDuration Field Functions 
    bool hasDealAverageDuration() const { return this->dealAverageDuration_ != nullptr;};
    void deleteDealAverageDuration() { this->dealAverageDuration_ = nullptr;};
    inline int64_t dealAverageDuration() const { DARABONBA_PTR_GET_DEFAULT(dealAverageDuration_, 0L) };
    inline GetWorkTaskSummaryResponseBodyData& setDealAverageDuration(int64_t dealAverageDuration) { DARABONBA_PTR_SET_VALUE(dealAverageDuration_, dealAverageDuration) };


    // dealAverageDurationGrowthRate Field Functions 
    bool hasDealAverageDurationGrowthRate() const { return this->dealAverageDurationGrowthRate_ != nullptr;};
    void deleteDealAverageDurationGrowthRate() { this->dealAverageDurationGrowthRate_ = nullptr;};
    inline string dealAverageDurationGrowthRate() const { DARABONBA_PTR_GET_DEFAULT(dealAverageDurationGrowthRate_, "") };
    inline GetWorkTaskSummaryResponseBodyData& setDealAverageDurationGrowthRate(string dealAverageDurationGrowthRate) { DARABONBA_PTR_SET_VALUE(dealAverageDurationGrowthRate_, dealAverageDurationGrowthRate) };


    // dealWorkTaskCount Field Functions 
    bool hasDealWorkTaskCount() const { return this->dealWorkTaskCount_ != nullptr;};
    void deleteDealWorkTaskCount() { this->dealWorkTaskCount_ = nullptr;};
    inline int64_t dealWorkTaskCount() const { DARABONBA_PTR_GET_DEFAULT(dealWorkTaskCount_, 0L) };
    inline GetWorkTaskSummaryResponseBodyData& setDealWorkTaskCount(int64_t dealWorkTaskCount) { DARABONBA_PTR_SET_VALUE(dealWorkTaskCount_, dealWorkTaskCount) };


    // dealWorkTaskCountRate Field Functions 
    bool hasDealWorkTaskCountRate() const { return this->dealWorkTaskCountRate_ != nullptr;};
    void deleteDealWorkTaskCountRate() { this->dealWorkTaskCountRate_ = nullptr;};
    inline string dealWorkTaskCountRate() const { DARABONBA_PTR_GET_DEFAULT(dealWorkTaskCountRate_, "") };
    inline GetWorkTaskSummaryResponseBodyData& setDealWorkTaskCountRate(string dealWorkTaskCountRate) { DARABONBA_PTR_SET_VALUE(dealWorkTaskCountRate_, dealWorkTaskCountRate) };


    // workTaskCount Field Functions 
    bool hasWorkTaskCount() const { return this->workTaskCount_ != nullptr;};
    void deleteWorkTaskCount() { this->workTaskCount_ = nullptr;};
    inline int64_t workTaskCount() const { DARABONBA_PTR_GET_DEFAULT(workTaskCount_, 0L) };
    inline GetWorkTaskSummaryResponseBodyData& setWorkTaskCount(int64_t workTaskCount) { DARABONBA_PTR_SET_VALUE(workTaskCount_, workTaskCount) };


    // workTaskDealRate Field Functions 
    bool hasWorkTaskDealRate() const { return this->workTaskDealRate_ != nullptr;};
    void deleteWorkTaskDealRate() { this->workTaskDealRate_ = nullptr;};
    inline string workTaskDealRate() const { DARABONBA_PTR_GET_DEFAULT(workTaskDealRate_, "") };
    inline GetWorkTaskSummaryResponseBodyData& setWorkTaskDealRate(string workTaskDealRate) { DARABONBA_PTR_SET_VALUE(workTaskDealRate_, workTaskDealRate) };


    // workTaskDealRateGrowthRate Field Functions 
    bool hasWorkTaskDealRateGrowthRate() const { return this->workTaskDealRateGrowthRate_ != nullptr;};
    void deleteWorkTaskDealRateGrowthRate() { this->workTaskDealRateGrowthRate_ = nullptr;};
    inline string workTaskDealRateGrowthRate() const { DARABONBA_PTR_GET_DEFAULT(workTaskDealRateGrowthRate_, "") };
    inline GetWorkTaskSummaryResponseBodyData& setWorkTaskDealRateGrowthRate(string workTaskDealRateGrowthRate) { DARABONBA_PTR_SET_VALUE(workTaskDealRateGrowthRate_, workTaskDealRateGrowthRate) };


    // workTaskGrowthRate Field Functions 
    bool hasWorkTaskGrowthRate() const { return this->workTaskGrowthRate_ != nullptr;};
    void deleteWorkTaskGrowthRate() { this->workTaskGrowthRate_ = nullptr;};
    inline string workTaskGrowthRate() const { DARABONBA_PTR_GET_DEFAULT(workTaskGrowthRate_, "") };
    inline GetWorkTaskSummaryResponseBodyData& setWorkTaskGrowthRate(string workTaskGrowthRate) { DARABONBA_PTR_SET_VALUE(workTaskGrowthRate_, workTaskGrowthRate) };


  protected:
    // Average response time (in minutes).
    std::shared_ptr<int64_t> dealAverageDuration_ = nullptr;
    // Year-over-year growth rate of average response time.
    std::shared_ptr<string> dealAverageDurationGrowthRate_ = nullptr;
    // Number of work orders responded to.
    std::shared_ptr<int64_t> dealWorkTaskCount_ = nullptr;
    // Year-over-year growth rate of the number of work orders responded to.
    std::shared_ptr<string> dealWorkTaskCountRate_ = nullptr;
    // Number of service responses.
    std::shared_ptr<int64_t> workTaskCount_ = nullptr;
    // Problem closure rate.
    std::shared_ptr<string> workTaskDealRate_ = nullptr;
    // Year-over-year growth rate of problem closure rate.
    std::shared_ptr<string> workTaskDealRateGrowthRate_ = nullptr;
    // Year-over-year growth rate of service responses.
    std::shared_ptr<string> workTaskGrowthRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
