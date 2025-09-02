// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUCCESSINSTANCEAMOUNTRESPONSEBODYINSTANCESTATUSTREND_HPP_
#define ALIBABACLOUD_MODELS_LISTSUCCESSINSTANCEAMOUNTRESPONSEBODYINSTANCESTATUSTREND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSuccessInstanceAmountResponseBodyInstanceStatusTrendAvgTrend.hpp>
#include <alibabacloud/models/ListSuccessInstanceAmountResponseBodyInstanceStatusTrendTodayTrend.hpp>
#include <alibabacloud/models/ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListSuccessInstanceAmountResponseBodyInstanceStatusTrend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSuccessInstanceAmountResponseBodyInstanceStatusTrend& obj) { 
      DARABONBA_PTR_TO_JSON(AvgTrend, avgTrend_);
      DARABONBA_PTR_TO_JSON(TodayTrend, todayTrend_);
      DARABONBA_PTR_TO_JSON(YesterdayTrend, yesterdayTrend_);
    };
    friend void from_json(const Darabonba::Json& j, ListSuccessInstanceAmountResponseBodyInstanceStatusTrend& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgTrend, avgTrend_);
      DARABONBA_PTR_FROM_JSON(TodayTrend, todayTrend_);
      DARABONBA_PTR_FROM_JSON(YesterdayTrend, yesterdayTrend_);
    };
    ListSuccessInstanceAmountResponseBodyInstanceStatusTrend() = default ;
    ListSuccessInstanceAmountResponseBodyInstanceStatusTrend(const ListSuccessInstanceAmountResponseBodyInstanceStatusTrend &) = default ;
    ListSuccessInstanceAmountResponseBodyInstanceStatusTrend(ListSuccessInstanceAmountResponseBodyInstanceStatusTrend &&) = default ;
    ListSuccessInstanceAmountResponseBodyInstanceStatusTrend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSuccessInstanceAmountResponseBodyInstanceStatusTrend() = default ;
    ListSuccessInstanceAmountResponseBodyInstanceStatusTrend& operator=(const ListSuccessInstanceAmountResponseBodyInstanceStatusTrend &) = default ;
    ListSuccessInstanceAmountResponseBodyInstanceStatusTrend& operator=(ListSuccessInstanceAmountResponseBodyInstanceStatusTrend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgTrend_ != nullptr
        && this->todayTrend_ != nullptr && this->yesterdayTrend_ != nullptr; };
    // avgTrend Field Functions 
    bool hasAvgTrend() const { return this->avgTrend_ != nullptr;};
    void deleteAvgTrend() { this->avgTrend_ = nullptr;};
    inline const vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendAvgTrend> & avgTrend() const { DARABONBA_PTR_GET_CONST(avgTrend_, vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendAvgTrend>) };
    inline vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendAvgTrend> avgTrend() { DARABONBA_PTR_GET(avgTrend_, vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendAvgTrend>) };
    inline ListSuccessInstanceAmountResponseBodyInstanceStatusTrend& setAvgTrend(const vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendAvgTrend> & avgTrend) { DARABONBA_PTR_SET_VALUE(avgTrend_, avgTrend) };
    inline ListSuccessInstanceAmountResponseBodyInstanceStatusTrend& setAvgTrend(vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendAvgTrend> && avgTrend) { DARABONBA_PTR_SET_RVALUE(avgTrend_, avgTrend) };


    // todayTrend Field Functions 
    bool hasTodayTrend() const { return this->todayTrend_ != nullptr;};
    void deleteTodayTrend() { this->todayTrend_ = nullptr;};
    inline const vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendTodayTrend> & todayTrend() const { DARABONBA_PTR_GET_CONST(todayTrend_, vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendTodayTrend>) };
    inline vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendTodayTrend> todayTrend() { DARABONBA_PTR_GET(todayTrend_, vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendTodayTrend>) };
    inline ListSuccessInstanceAmountResponseBodyInstanceStatusTrend& setTodayTrend(const vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendTodayTrend> & todayTrend) { DARABONBA_PTR_SET_VALUE(todayTrend_, todayTrend) };
    inline ListSuccessInstanceAmountResponseBodyInstanceStatusTrend& setTodayTrend(vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendTodayTrend> && todayTrend) { DARABONBA_PTR_SET_RVALUE(todayTrend_, todayTrend) };


    // yesterdayTrend Field Functions 
    bool hasYesterdayTrend() const { return this->yesterdayTrend_ != nullptr;};
    void deleteYesterdayTrend() { this->yesterdayTrend_ = nullptr;};
    inline const vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend> & yesterdayTrend() const { DARABONBA_PTR_GET_CONST(yesterdayTrend_, vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend>) };
    inline vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend> yesterdayTrend() { DARABONBA_PTR_GET(yesterdayTrend_, vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend>) };
    inline ListSuccessInstanceAmountResponseBodyInstanceStatusTrend& setYesterdayTrend(const vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend> & yesterdayTrend) { DARABONBA_PTR_SET_VALUE(yesterdayTrend_, yesterdayTrend) };
    inline ListSuccessInstanceAmountResponseBodyInstanceStatusTrend& setYesterdayTrend(vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend> && yesterdayTrend) { DARABONBA_PTR_SET_RVALUE(yesterdayTrend_, yesterdayTrend) };


  protected:
    // The average trend.
    std::shared_ptr<vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendAvgTrend>> avgTrend_ = nullptr;
    // The trend of the number of auto triggered node instances that are successfully run on the current day.
    std::shared_ptr<vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendTodayTrend>> todayTrend_ = nullptr;
    // The trend of the number of auto triggered node instances that are successfully run one day earlier than the current day.
    std::shared_ptr<vector<Models::ListSuccessInstanceAmountResponseBodyInstanceStatusTrendYesterdayTrend>> yesterdayTrend_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
