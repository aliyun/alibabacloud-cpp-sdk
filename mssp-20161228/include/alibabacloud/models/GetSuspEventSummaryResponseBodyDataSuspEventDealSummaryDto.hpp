// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUSPEVENTSUMMARYRESPONSEBODYDATASUSPEVENTDEALSUMMARYDTO_HPP_
#define ALIBABACLOUD_MODELS_GETSUSPEVENTSUMMARYRESPONSEBODYDATASUSPEVENTDEALSUMMARYDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO& obj) { 
      DARABONBA_PTR_TO_JSON(CompletedCount, completedCount_);
      DARABONBA_PTR_TO_JSON(HandingCount, handingCount_);
      DARABONBA_PTR_TO_JSON(HandingRate, handingRate_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalGrowthRate, totalGrowthRate_);
      DARABONBA_PTR_TO_JSON(WaitHandleCount, waitHandleCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(CompletedCount, completedCount_);
      DARABONBA_PTR_FROM_JSON(HandingCount, handingCount_);
      DARABONBA_PTR_FROM_JSON(HandingRate, handingRate_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalGrowthRate, totalGrowthRate_);
      DARABONBA_PTR_FROM_JSON(WaitHandleCount, waitHandleCount_);
    };
    GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO() = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO(const GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO &) = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO(GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO &&) = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO() = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO& operator=(const GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO &) = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO& operator=(GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completedCount_ == nullptr
        && return this->handingCount_ == nullptr && return this->handingRate_ == nullptr && return this->totalCount_ == nullptr && return this->totalGrowthRate_ == nullptr && return this->waitHandleCount_ == nullptr; };
    // completedCount Field Functions 
    bool hasCompletedCount() const { return this->completedCount_ != nullptr;};
    void deleteCompletedCount() { this->completedCount_ = nullptr;};
    inline int64_t completedCount() const { DARABONBA_PTR_GET_DEFAULT(completedCount_, 0L) };
    inline GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO& setCompletedCount(int64_t completedCount) { DARABONBA_PTR_SET_VALUE(completedCount_, completedCount) };


    // handingCount Field Functions 
    bool hasHandingCount() const { return this->handingCount_ != nullptr;};
    void deleteHandingCount() { this->handingCount_ = nullptr;};
    inline int64_t handingCount() const { DARABONBA_PTR_GET_DEFAULT(handingCount_, 0L) };
    inline GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO& setHandingCount(int64_t handingCount) { DARABONBA_PTR_SET_VALUE(handingCount_, handingCount) };


    // handingRate Field Functions 
    bool hasHandingRate() const { return this->handingRate_ != nullptr;};
    void deleteHandingRate() { this->handingRate_ = nullptr;};
    inline string handingRate() const { DARABONBA_PTR_GET_DEFAULT(handingRate_, "") };
    inline GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO& setHandingRate(string handingRate) { DARABONBA_PTR_SET_VALUE(handingRate_, handingRate) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalGrowthRate Field Functions 
    bool hasTotalGrowthRate() const { return this->totalGrowthRate_ != nullptr;};
    void deleteTotalGrowthRate() { this->totalGrowthRate_ = nullptr;};
    inline string totalGrowthRate() const { DARABONBA_PTR_GET_DEFAULT(totalGrowthRate_, "") };
    inline GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO& setTotalGrowthRate(string totalGrowthRate) { DARABONBA_PTR_SET_VALUE(totalGrowthRate_, totalGrowthRate) };


    // waitHandleCount Field Functions 
    bool hasWaitHandleCount() const { return this->waitHandleCount_ != nullptr;};
    void deleteWaitHandleCount() { this->waitHandleCount_ = nullptr;};
    inline int64_t waitHandleCount() const { DARABONBA_PTR_GET_DEFAULT(waitHandleCount_, 0L) };
    inline GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO& setWaitHandleCount(int64_t waitHandleCount) { DARABONBA_PTR_SET_VALUE(waitHandleCount_, waitHandleCount) };


  protected:
    // Completed.
    std::shared_ptr<int64_t> completedCount_ = nullptr;
    // In progress.
    std::shared_ptr<int64_t> handingCount_ = nullptr;
    // Alert handling rate.
    std::shared_ptr<string> handingRate_ = nullptr;
    // Total number of alerts.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // Year-over-year comparison of alerts.
    std::shared_ptr<string> totalGrowthRate_ = nullptr;
    // Number of unhandled alerts.
    std::shared_ptr<int64_t> waitHandleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
