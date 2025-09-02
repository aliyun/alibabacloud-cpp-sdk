// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUCCESSINSTANCETRENDRESPONSEBODYINSTANCESTATUSTREND_HPP_
#define ALIBABACLOUD_MODELS_GETSUCCESSINSTANCETRENDRESPONSEBODYINSTANCESTATUSTREND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSuccessInstanceTrendResponseBodyInstanceStatusTrendAvgTrend.hpp>
#include <alibabacloud/models/GetSuccessInstanceTrendResponseBodyInstanceStatusTrendTodayTrend.hpp>
#include <alibabacloud/models/GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetSuccessInstanceTrendResponseBodyInstanceStatusTrend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuccessInstanceTrendResponseBodyInstanceStatusTrend& obj) { 
      DARABONBA_PTR_TO_JSON(AvgTrend, avgTrend_);
      DARABONBA_PTR_TO_JSON(TodayTrend, todayTrend_);
      DARABONBA_PTR_TO_JSON(YesterdayTrend, yesterdayTrend_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuccessInstanceTrendResponseBodyInstanceStatusTrend& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgTrend, avgTrend_);
      DARABONBA_PTR_FROM_JSON(TodayTrend, todayTrend_);
      DARABONBA_PTR_FROM_JSON(YesterdayTrend, yesterdayTrend_);
    };
    GetSuccessInstanceTrendResponseBodyInstanceStatusTrend() = default ;
    GetSuccessInstanceTrendResponseBodyInstanceStatusTrend(const GetSuccessInstanceTrendResponseBodyInstanceStatusTrend &) = default ;
    GetSuccessInstanceTrendResponseBodyInstanceStatusTrend(GetSuccessInstanceTrendResponseBodyInstanceStatusTrend &&) = default ;
    GetSuccessInstanceTrendResponseBodyInstanceStatusTrend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuccessInstanceTrendResponseBodyInstanceStatusTrend() = default ;
    GetSuccessInstanceTrendResponseBodyInstanceStatusTrend& operator=(const GetSuccessInstanceTrendResponseBodyInstanceStatusTrend &) = default ;
    GetSuccessInstanceTrendResponseBodyInstanceStatusTrend& operator=(GetSuccessInstanceTrendResponseBodyInstanceStatusTrend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgTrend_ != nullptr
        && this->todayTrend_ != nullptr && this->yesterdayTrend_ != nullptr; };
    // avgTrend Field Functions 
    bool hasAvgTrend() const { return this->avgTrend_ != nullptr;};
    void deleteAvgTrend() { this->avgTrend_ = nullptr;};
    inline const vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendAvgTrend> & avgTrend() const { DARABONBA_PTR_GET_CONST(avgTrend_, vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendAvgTrend>) };
    inline vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendAvgTrend> avgTrend() { DARABONBA_PTR_GET(avgTrend_, vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendAvgTrend>) };
    inline GetSuccessInstanceTrendResponseBodyInstanceStatusTrend& setAvgTrend(const vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendAvgTrend> & avgTrend) { DARABONBA_PTR_SET_VALUE(avgTrend_, avgTrend) };
    inline GetSuccessInstanceTrendResponseBodyInstanceStatusTrend& setAvgTrend(vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendAvgTrend> && avgTrend) { DARABONBA_PTR_SET_RVALUE(avgTrend_, avgTrend) };


    // todayTrend Field Functions 
    bool hasTodayTrend() const { return this->todayTrend_ != nullptr;};
    void deleteTodayTrend() { this->todayTrend_ = nullptr;};
    inline const vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendTodayTrend> & todayTrend() const { DARABONBA_PTR_GET_CONST(todayTrend_, vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendTodayTrend>) };
    inline vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendTodayTrend> todayTrend() { DARABONBA_PTR_GET(todayTrend_, vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendTodayTrend>) };
    inline GetSuccessInstanceTrendResponseBodyInstanceStatusTrend& setTodayTrend(const vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendTodayTrend> & todayTrend) { DARABONBA_PTR_SET_VALUE(todayTrend_, todayTrend) };
    inline GetSuccessInstanceTrendResponseBodyInstanceStatusTrend& setTodayTrend(vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendTodayTrend> && todayTrend) { DARABONBA_PTR_SET_RVALUE(todayTrend_, todayTrend) };


    // yesterdayTrend Field Functions 
    bool hasYesterdayTrend() const { return this->yesterdayTrend_ != nullptr;};
    void deleteYesterdayTrend() { this->yesterdayTrend_ = nullptr;};
    inline const vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend> & yesterdayTrend() const { DARABONBA_PTR_GET_CONST(yesterdayTrend_, vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend>) };
    inline vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend> yesterdayTrend() { DARABONBA_PTR_GET(yesterdayTrend_, vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend>) };
    inline GetSuccessInstanceTrendResponseBodyInstanceStatusTrend& setYesterdayTrend(const vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend> & yesterdayTrend) { DARABONBA_PTR_SET_VALUE(yesterdayTrend_, yesterdayTrend) };
    inline GetSuccessInstanceTrendResponseBodyInstanceStatusTrend& setYesterdayTrend(vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend> && yesterdayTrend) { DARABONBA_PTR_SET_RVALUE(yesterdayTrend_, yesterdayTrend) };


  protected:
    // The average trend.
    std::shared_ptr<vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendAvgTrend>> avgTrend_ = nullptr;
    // The trend on the current day.
    std::shared_ptr<vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendTodayTrend>> todayTrend_ = nullptr;
    // The trend on the previous day.
    std::shared_ptr<vector<Models::GetSuccessInstanceTrendResponseBodyInstanceStatusTrendYesterdayTrend>> yesterdayTrend_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
