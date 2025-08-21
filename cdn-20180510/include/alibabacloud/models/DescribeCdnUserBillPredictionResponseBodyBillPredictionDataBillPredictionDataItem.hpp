// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLPREDICTIONRESPONSEBODYBILLPREDICTIONDATABILLPREDICTIONDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLPREDICTIONRESPONSEBODYBILLPREDICTIONDATABILLPREDICTIONDATAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(TimeStp, timeStp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(TimeStp, timeStp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem() = default ;
    DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem(const DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem &) = default ;
    DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem(DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem &&) = default ;
    DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem() = default ;
    DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& operator=(const DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem &) = default ;
    DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& operator=(DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem &&) = default ;
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
    inline DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // timeStp Field Functions 
    bool hasTimeStp() const { return this->timeStp_ != nullptr;};
    void deleteTimeStp() { this->timeStp_ = nullptr;};
    inline string timeStp() const { DARABONBA_PTR_GET_DEFAULT(timeStp_, "") };
    inline DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& setTimeStp(string timeStp) { DARABONBA_PTR_SET_VALUE(timeStp_, timeStp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeCdnUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The billable region.
    std::shared_ptr<string> area_ = nullptr;
    // The time when the value used as the estimated value is generated. This parameter is returned only if the metering method is pay by 95th percentile, pay by 95th percentile bandwidth with 50% off from 00:00 to 08:00, or pay by 4th peak bandwidth per month.
    std::shared_ptr<string> timeStp_ = nullptr;
    // The estimated value.
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
