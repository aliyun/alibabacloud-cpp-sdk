// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUSERBILLPREDICTIONRESPONSEBODYBILLPREDICTIONDATABILLPREDICTIONDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUSERBILLPREDICTIONRESPONSEBODYBILLPREDICTIONDATABILLPREDICTIONDATAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(TimeStp, timeStp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(TimeStp, timeStp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem() = default ;
    DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem(const DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem &) = default ;
    DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem(DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem &&) = default ;
    DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem() = default ;
    DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& operator=(const DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem &) = default ;
    DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& operator=(DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_ != nullptr
        && this->timeStp_ != nullptr && this->value_ != nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // timeStp Field Functions 
    bool hasTimeStp() const { return this->timeStp_ != nullptr;};
    void deleteTimeStp() { this->timeStp_ = nullptr;};
    inline string timeStp() const { DARABONBA_PTR_GET_DEFAULT(timeStp_, "") };
    inline DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& setTimeStp(string timeStp) { DARABONBA_PTR_SET_VALUE(timeStp_, timeStp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeLiveUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The billable region. Valid values:
    // 
    // *   CN: Chinese mainland
    // *   OverSeas: countries and regions outside the Chinese mainland
    // *   AP1: Asia Pacific 1, including Hong Kong (China), Macao (China), Taiwan (China), Japan, and other Southeast Asia countries and regions except Vietnam and Indonesia
    // *   AP2: Asia Pacific 2, including Indonesia, South Korea, and Vietnam
    // *   AP3: Asia Pacific 3, including Australia and New Zealand
    // *   NA: North America, including US and Canada
    // *   SA: South America, specifically meaning Brazil
    // *   EU: Europe, including Ukraine, UK, France, Netherlands, Spain, Italy, Sweden, and Germany
    // *   MEAA: Middle East and Africa, including South Africa, Oman, UAE, and Kuwait
    // 
    // By default, data of all regions is aggregated and returned.
    std::shared_ptr<string> area_ = nullptr;
    // The time at which the estimated value occurs. This parameter is returned only if the metering method is pay by 95th percentile bandwidth, pay by 95th percentile bandwidth with 50% off from 00:00 to 08:00, or pay by 4th peak bandwidth per month.
    std::shared_ptr<string> timeStp_ = nullptr;
    // The estimated value.
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
