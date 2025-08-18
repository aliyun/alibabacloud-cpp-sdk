// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITETIMESERIESDATARESPONSEBODYDATADETAILDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITETIMESERIESDATARESPONSEBODYDATADETAILDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteTimeSeriesDataResponseBodyDataDetailData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteTimeSeriesDataResponseBodyDataDetailData& obj) { 
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteTimeSeriesDataResponseBodyDataDetailData& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_ANY_FROM_JSON(Value, value_);
    };
    DescribeSiteTimeSeriesDataResponseBodyDataDetailData() = default ;
    DescribeSiteTimeSeriesDataResponseBodyDataDetailData(const DescribeSiteTimeSeriesDataResponseBodyDataDetailData &) = default ;
    DescribeSiteTimeSeriesDataResponseBodyDataDetailData(DescribeSiteTimeSeriesDataResponseBodyDataDetailData &&) = default ;
    DescribeSiteTimeSeriesDataResponseBodyDataDetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteTimeSeriesDataResponseBodyDataDetailData() = default ;
    DescribeSiteTimeSeriesDataResponseBodyDataDetailData& operator=(const DescribeSiteTimeSeriesDataResponseBodyDataDetailData &) = default ;
    DescribeSiteTimeSeriesDataResponseBodyDataDetailData& operator=(DescribeSiteTimeSeriesDataResponseBodyDataDetailData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->timeStamp_ != nullptr
        && this->value_ != nullptr; };
    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeSiteTimeSeriesDataResponseBodyDataDetailData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline DescribeSiteTimeSeriesDataResponseBodyDataDetailData& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline DescribeSiteTimeSeriesDataResponseBodyDataDetailData& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<string> timeStamp_ = nullptr;
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
