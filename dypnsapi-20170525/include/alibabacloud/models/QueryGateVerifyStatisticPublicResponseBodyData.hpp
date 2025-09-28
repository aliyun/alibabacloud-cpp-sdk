// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGATEVERIFYSTATISTICPUBLICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYGATEVERIFYSTATISTICPUBLICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class QueryGateVerifyStatisticPublicResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGateVerifyStatisticPublicResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DayStatistic, dayStatistic_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(TotalFail, totalFail_);
      DARABONBA_PTR_TO_JSON(TotalSuccess, totalSuccess_);
      DARABONBA_PTR_TO_JSON(TotalUnknown, totalUnknown_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGateVerifyStatisticPublicResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DayStatistic, dayStatistic_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(TotalFail, totalFail_);
      DARABONBA_PTR_FROM_JSON(TotalSuccess, totalSuccess_);
      DARABONBA_PTR_FROM_JSON(TotalUnknown, totalUnknown_);
    };
    QueryGateVerifyStatisticPublicResponseBodyData() = default ;
    QueryGateVerifyStatisticPublicResponseBodyData(const QueryGateVerifyStatisticPublicResponseBodyData &) = default ;
    QueryGateVerifyStatisticPublicResponseBodyData(QueryGateVerifyStatisticPublicResponseBodyData &&) = default ;
    QueryGateVerifyStatisticPublicResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGateVerifyStatisticPublicResponseBodyData() = default ;
    QueryGateVerifyStatisticPublicResponseBodyData& operator=(const QueryGateVerifyStatisticPublicResponseBodyData &) = default ;
    QueryGateVerifyStatisticPublicResponseBodyData& operator=(QueryGateVerifyStatisticPublicResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dayStatistic_ != nullptr
        && this->total_ != nullptr && this->totalFail_ != nullptr && this->totalSuccess_ != nullptr && this->totalUnknown_ != nullptr; };
    // dayStatistic Field Functions 
    bool hasDayStatistic() const { return this->dayStatistic_ != nullptr;};
    void deleteDayStatistic() { this->dayStatistic_ = nullptr;};
    inline const vector<Models::QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic> & dayStatistic() const { DARABONBA_PTR_GET_CONST(dayStatistic_, vector<Models::QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic>) };
    inline vector<Models::QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic> dayStatistic() { DARABONBA_PTR_GET(dayStatistic_, vector<Models::QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic>) };
    inline QueryGateVerifyStatisticPublicResponseBodyData& setDayStatistic(const vector<Models::QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic> & dayStatistic) { DARABONBA_PTR_SET_VALUE(dayStatistic_, dayStatistic) };
    inline QueryGateVerifyStatisticPublicResponseBodyData& setDayStatistic(vector<Models::QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic> && dayStatistic) { DARABONBA_PTR_SET_RVALUE(dayStatistic_, dayStatistic) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline QueryGateVerifyStatisticPublicResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // totalFail Field Functions 
    bool hasTotalFail() const { return this->totalFail_ != nullptr;};
    void deleteTotalFail() { this->totalFail_ = nullptr;};
    inline int64_t totalFail() const { DARABONBA_PTR_GET_DEFAULT(totalFail_, 0L) };
    inline QueryGateVerifyStatisticPublicResponseBodyData& setTotalFail(int64_t totalFail) { DARABONBA_PTR_SET_VALUE(totalFail_, totalFail) };


    // totalSuccess Field Functions 
    bool hasTotalSuccess() const { return this->totalSuccess_ != nullptr;};
    void deleteTotalSuccess() { this->totalSuccess_ = nullptr;};
    inline int64_t totalSuccess() const { DARABONBA_PTR_GET_DEFAULT(totalSuccess_, 0L) };
    inline QueryGateVerifyStatisticPublicResponseBodyData& setTotalSuccess(int64_t totalSuccess) { DARABONBA_PTR_SET_VALUE(totalSuccess_, totalSuccess) };


    // totalUnknown Field Functions 
    bool hasTotalUnknown() const { return this->totalUnknown_ != nullptr;};
    void deleteTotalUnknown() { this->totalUnknown_ = nullptr;};
    inline int64_t totalUnknown() const { DARABONBA_PTR_GET_DEFAULT(totalUnknown_, 0L) };
    inline QueryGateVerifyStatisticPublicResponseBodyData& setTotalUnknown(int64_t totalUnknown) { DARABONBA_PTR_SET_VALUE(totalUnknown_, totalUnknown) };


  protected:
    // The information about the daily calls.
    std::shared_ptr<vector<Models::QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic>> dayStatistic_ = nullptr;
    // The total calls.
    std::shared_ptr<int64_t> total_ = nullptr;
    // The failed calls.
    std::shared_ptr<int64_t> totalFail_ = nullptr;
    // The successful calls.
    std::shared_ptr<int64_t> totalSuccess_ = nullptr;
    // The unknown calls.
    std::shared_ptr<int64_t> totalUnknown_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
