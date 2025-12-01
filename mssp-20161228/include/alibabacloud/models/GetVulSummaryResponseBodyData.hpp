// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVULSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVULSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVulSummaryResponseBodyDataTrendList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetVulSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVulSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CompletedCount, completedCount_);
      DARABONBA_PTR_TO_JSON(DealRate, dealRate_);
      DARABONBA_PTR_TO_JSON(TrendList, trendList_);
      DARABONBA_PTR_TO_JSON(WaitHandleCount, waitHandleCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetVulSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CompletedCount, completedCount_);
      DARABONBA_PTR_FROM_JSON(DealRate, dealRate_);
      DARABONBA_PTR_FROM_JSON(TrendList, trendList_);
      DARABONBA_PTR_FROM_JSON(WaitHandleCount, waitHandleCount_);
    };
    GetVulSummaryResponseBodyData() = default ;
    GetVulSummaryResponseBodyData(const GetVulSummaryResponseBodyData &) = default ;
    GetVulSummaryResponseBodyData(GetVulSummaryResponseBodyData &&) = default ;
    GetVulSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVulSummaryResponseBodyData() = default ;
    GetVulSummaryResponseBodyData& operator=(const GetVulSummaryResponseBodyData &) = default ;
    GetVulSummaryResponseBodyData& operator=(GetVulSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completedCount_ == nullptr
        && return this->dealRate_ == nullptr && return this->trendList_ == nullptr && return this->waitHandleCount_ == nullptr; };
    // completedCount Field Functions 
    bool hasCompletedCount() const { return this->completedCount_ != nullptr;};
    void deleteCompletedCount() { this->completedCount_ = nullptr;};
    inline int64_t completedCount() const { DARABONBA_PTR_GET_DEFAULT(completedCount_, 0L) };
    inline GetVulSummaryResponseBodyData& setCompletedCount(int64_t completedCount) { DARABONBA_PTR_SET_VALUE(completedCount_, completedCount) };


    // dealRate Field Functions 
    bool hasDealRate() const { return this->dealRate_ != nullptr;};
    void deleteDealRate() { this->dealRate_ = nullptr;};
    inline string dealRate() const { DARABONBA_PTR_GET_DEFAULT(dealRate_, "") };
    inline GetVulSummaryResponseBodyData& setDealRate(string dealRate) { DARABONBA_PTR_SET_VALUE(dealRate_, dealRate) };


    // trendList Field Functions 
    bool hasTrendList() const { return this->trendList_ != nullptr;};
    void deleteTrendList() { this->trendList_ = nullptr;};
    inline const vector<Models::GetVulSummaryResponseBodyDataTrendList> & trendList() const { DARABONBA_PTR_GET_CONST(trendList_, vector<Models::GetVulSummaryResponseBodyDataTrendList>) };
    inline vector<Models::GetVulSummaryResponseBodyDataTrendList> trendList() { DARABONBA_PTR_GET(trendList_, vector<Models::GetVulSummaryResponseBodyDataTrendList>) };
    inline GetVulSummaryResponseBodyData& setTrendList(const vector<Models::GetVulSummaryResponseBodyDataTrendList> & trendList) { DARABONBA_PTR_SET_VALUE(trendList_, trendList) };
    inline GetVulSummaryResponseBodyData& setTrendList(vector<Models::GetVulSummaryResponseBodyDataTrendList> && trendList) { DARABONBA_PTR_SET_RVALUE(trendList_, trendList) };


    // waitHandleCount Field Functions 
    bool hasWaitHandleCount() const { return this->waitHandleCount_ != nullptr;};
    void deleteWaitHandleCount() { this->waitHandleCount_ = nullptr;};
    inline int64_t waitHandleCount() const { DARABONBA_PTR_GET_DEFAULT(waitHandleCount_, 0L) };
    inline GetVulSummaryResponseBodyData& setWaitHandleCount(int64_t waitHandleCount) { DARABONBA_PTR_SET_VALUE(waitHandleCount_, waitHandleCount) };


  protected:
    // Number of completed items.
    std::shared_ptr<int64_t> completedCount_ = nullptr;
    // Risk convergence rate.
    std::shared_ptr<string> dealRate_ = nullptr;
    // Collection of vulnerability trend nodes.
    std::shared_ptr<vector<Models::GetVulSummaryResponseBodyDataTrendList>> trendList_ = nullptr;
    // Number of unhandled items.
    std::shared_ptr<int64_t> waitHandleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
