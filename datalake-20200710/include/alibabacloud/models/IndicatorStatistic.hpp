// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INDICATORSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_INDICATORSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class IndicatorStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IndicatorStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Date, date_);
    };
    friend void from_json(const Darabonba::Json& j, IndicatorStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Date, date_);
    };
    IndicatorStatistic() = default ;
    IndicatorStatistic(const IndicatorStatistic &) = default ;
    IndicatorStatistic(IndicatorStatistic &&) = default ;
    IndicatorStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IndicatorStatistic() = default ;
    IndicatorStatistic& operator=(const IndicatorStatistic &) = default ;
    IndicatorStatistic& operator=(IndicatorStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->date_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline int64_t data() const { DARABONBA_PTR_GET_DEFAULT(data_, 0L) };
    inline IndicatorStatistic& setData(int64_t data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline IndicatorStatistic& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


  protected:
    std::shared_ptr<int64_t> data_ = nullptr;
    std::shared_ptr<string> date_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
