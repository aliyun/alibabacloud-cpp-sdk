// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATATRENDRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATATRENDRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeDataTrendResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeDataTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Kpi, kpi_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeDataTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Kpi, kpi_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetQueryOptimizeDataTrendResponseBodyDataList() = default ;
    GetQueryOptimizeDataTrendResponseBodyDataList(const GetQueryOptimizeDataTrendResponseBodyDataList &) = default ;
    GetQueryOptimizeDataTrendResponseBodyDataList(GetQueryOptimizeDataTrendResponseBodyDataList &&) = default ;
    GetQueryOptimizeDataTrendResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeDataTrendResponseBodyDataList() = default ;
    GetQueryOptimizeDataTrendResponseBodyDataList& operator=(const GetQueryOptimizeDataTrendResponseBodyDataList &) = default ;
    GetQueryOptimizeDataTrendResponseBodyDataList& operator=(GetQueryOptimizeDataTrendResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kpi_ == nullptr
        && return this->timestamp_ == nullptr && return this->value_ == nullptr; };
    // kpi Field Functions 
    bool hasKpi() const { return this->kpi_ != nullptr;};
    void deleteKpi() { this->kpi_ = nullptr;};
    inline string kpi() const { DARABONBA_PTR_GET_DEFAULT(kpi_, "") };
    inline GetQueryOptimizeDataTrendResponseBodyDataList& setKpi(string kpi) { DARABONBA_PTR_SET_VALUE(kpi_, kpi) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetQueryOptimizeDataTrendResponseBodyDataList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline GetQueryOptimizeDataTrendResponseBodyDataList& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the metric. Valid values:
    // 
    // * **sqlExecuteCount**: the number of executions of slow SQL queries.
    // * **sqlExecuteCountDiff**: the difference in the number of executions of slow SQL queries compared to the previous day.
    // * **sqlCount**: the number of slow SQL templates.
    // * **sqlCountDiff**: the difference in the number of slow SQL templates compared to the previous day.
    // * **optimizedSqlExecuteCount**: the number of optimizable executions of slow SQL queries.
    // * **optimizedSqlExecuteCountDiff**: the difference in the number of optimizable executions of slow SQL queries compared to the previous day.
    // * **optimizedSqlCount**: the number of optimizable slow SQL templates.
    // * **optimizedSqlCountDiff**: the difference in the number of optimizable slow SQL templates compared to the previous day.
    std::shared_ptr<string> kpi_ = nullptr;
    // The data timestamp. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // The value of the metric.
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
