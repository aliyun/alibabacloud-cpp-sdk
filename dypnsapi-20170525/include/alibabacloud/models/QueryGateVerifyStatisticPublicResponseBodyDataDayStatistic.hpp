// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGATEVERIFYSTATISTICPUBLICRESPONSEBODYDATADAYSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_QUERYGATEVERIFYSTATISTICPUBLICRESPONSEBODYDATADAYSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(StatisticDateStr, statisticDateStr_);
      DARABONBA_PTR_TO_JSON(TotalFail, totalFail_);
      DARABONBA_PTR_TO_JSON(TotalSuccess, totalSuccess_);
      DARABONBA_PTR_TO_JSON(TotalUnknown, totalUnknown_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(StatisticDateStr, statisticDateStr_);
      DARABONBA_PTR_FROM_JSON(TotalFail, totalFail_);
      DARABONBA_PTR_FROM_JSON(TotalSuccess, totalSuccess_);
      DARABONBA_PTR_FROM_JSON(TotalUnknown, totalUnknown_);
    };
    QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic() = default ;
    QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic(const QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic &) = default ;
    QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic(QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic &&) = default ;
    QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic() = default ;
    QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic& operator=(const QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic &) = default ;
    QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic& operator=(QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->statisticDateStr_ != nullptr
        && this->totalFail_ != nullptr && this->totalSuccess_ != nullptr && this->totalUnknown_ != nullptr; };
    // statisticDateStr Field Functions 
    bool hasStatisticDateStr() const { return this->statisticDateStr_ != nullptr;};
    void deleteStatisticDateStr() { this->statisticDateStr_ = nullptr;};
    inline string statisticDateStr() const { DARABONBA_PTR_GET_DEFAULT(statisticDateStr_, "") };
    inline QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic& setStatisticDateStr(string statisticDateStr) { DARABONBA_PTR_SET_VALUE(statisticDateStr_, statisticDateStr) };


    // totalFail Field Functions 
    bool hasTotalFail() const { return this->totalFail_ != nullptr;};
    void deleteTotalFail() { this->totalFail_ = nullptr;};
    inline int64_t totalFail() const { DARABONBA_PTR_GET_DEFAULT(totalFail_, 0L) };
    inline QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic& setTotalFail(int64_t totalFail) { DARABONBA_PTR_SET_VALUE(totalFail_, totalFail) };


    // totalSuccess Field Functions 
    bool hasTotalSuccess() const { return this->totalSuccess_ != nullptr;};
    void deleteTotalSuccess() { this->totalSuccess_ = nullptr;};
    inline int64_t totalSuccess() const { DARABONBA_PTR_GET_DEFAULT(totalSuccess_, 0L) };
    inline QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic& setTotalSuccess(int64_t totalSuccess) { DARABONBA_PTR_SET_VALUE(totalSuccess_, totalSuccess) };


    // totalUnknown Field Functions 
    bool hasTotalUnknown() const { return this->totalUnknown_ != nullptr;};
    void deleteTotalUnknown() { this->totalUnknown_ = nullptr;};
    inline int64_t totalUnknown() const { DARABONBA_PTR_GET_DEFAULT(totalUnknown_, 0L) };
    inline QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic& setTotalUnknown(int64_t totalUnknown) { DARABONBA_PTR_SET_VALUE(totalUnknown_, totalUnknown) };


  protected:
    // The date. This field is accurate to the day. The value of this field is in the YYYYMMDD format. Example: 20220103.
    std::shared_ptr<string> statisticDateStr_ = nullptr;
    // The failed calls on the day.
    std::shared_ptr<int64_t> totalFail_ = nullptr;
    // The successful calls on the day.
    std::shared_ptr<int64_t> totalSuccess_ = nullptr;
    // The unknown calls on the day.
    std::shared_ptr<int64_t> totalUnknown_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
