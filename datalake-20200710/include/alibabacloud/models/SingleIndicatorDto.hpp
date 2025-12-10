// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINGLEINDICATORDTO_HPP_
#define ALIBABACLOUD_MODELS_SINGLEINDICATORDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class SingleIndicatorDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SingleIndicatorDTO& obj) { 
      DARABONBA_PTR_TO_JSON(DayIncrement, dayIncrement_);
      DARABONBA_PTR_TO_JSON(DayOnDay, dayOnDay_);
      DARABONBA_PTR_TO_JSON(MonthIncrement, monthIncrement_);
      DARABONBA_PTR_TO_JSON(MonthOnMonth, monthOnMonth_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SingleIndicatorDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(DayIncrement, dayIncrement_);
      DARABONBA_PTR_FROM_JSON(DayOnDay, dayOnDay_);
      DARABONBA_PTR_FROM_JSON(MonthIncrement, monthIncrement_);
      DARABONBA_PTR_FROM_JSON(MonthOnMonth, monthOnMonth_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    SingleIndicatorDTO() = default ;
    SingleIndicatorDTO(const SingleIndicatorDTO &) = default ;
    SingleIndicatorDTO(SingleIndicatorDTO &&) = default ;
    SingleIndicatorDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SingleIndicatorDTO() = default ;
    SingleIndicatorDTO& operator=(const SingleIndicatorDTO &) = default ;
    SingleIndicatorDTO& operator=(SingleIndicatorDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dayIncrement_ == nullptr
        && return this->dayOnDay_ == nullptr && return this->monthIncrement_ == nullptr && return this->monthOnMonth_ == nullptr && return this->total_ == nullptr; };
    // dayIncrement Field Functions 
    bool hasDayIncrement() const { return this->dayIncrement_ != nullptr;};
    void deleteDayIncrement() { this->dayIncrement_ = nullptr;};
    inline int64_t dayIncrement() const { DARABONBA_PTR_GET_DEFAULT(dayIncrement_, 0L) };
    inline SingleIndicatorDTO& setDayIncrement(int64_t dayIncrement) { DARABONBA_PTR_SET_VALUE(dayIncrement_, dayIncrement) };


    // dayOnDay Field Functions 
    bool hasDayOnDay() const { return this->dayOnDay_ != nullptr;};
    void deleteDayOnDay() { this->dayOnDay_ = nullptr;};
    inline double dayOnDay() const { DARABONBA_PTR_GET_DEFAULT(dayOnDay_, 0.0) };
    inline SingleIndicatorDTO& setDayOnDay(double dayOnDay) { DARABONBA_PTR_SET_VALUE(dayOnDay_, dayOnDay) };


    // monthIncrement Field Functions 
    bool hasMonthIncrement() const { return this->monthIncrement_ != nullptr;};
    void deleteMonthIncrement() { this->monthIncrement_ = nullptr;};
    inline int64_t monthIncrement() const { DARABONBA_PTR_GET_DEFAULT(monthIncrement_, 0L) };
    inline SingleIndicatorDTO& setMonthIncrement(int64_t monthIncrement) { DARABONBA_PTR_SET_VALUE(monthIncrement_, monthIncrement) };


    // monthOnMonth Field Functions 
    bool hasMonthOnMonth() const { return this->monthOnMonth_ != nullptr;};
    void deleteMonthOnMonth() { this->monthOnMonth_ = nullptr;};
    inline double monthOnMonth() const { DARABONBA_PTR_GET_DEFAULT(monthOnMonth_, 0.0) };
    inline SingleIndicatorDTO& setMonthOnMonth(double monthOnMonth) { DARABONBA_PTR_SET_VALUE(monthOnMonth_, monthOnMonth) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SingleIndicatorDTO& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int64_t> dayIncrement_ = nullptr;
    std::shared_ptr<double> dayOnDay_ = nullptr;
    std::shared_ptr<int64_t> monthIncrement_ = nullptr;
    std::shared_ptr<double> monthOnMonth_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
