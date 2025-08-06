// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERBILLPREDICTIONRESPONSEBODYBILLPREDICTIONDATABILLPREDICTIONDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERBILLPREDICTIONRESPONSEBODYBILLPREDICTIONDATABILLPREDICTIONDATAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(TimeStp, timeStp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(TimeStp, timeStp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem() = default ;
    DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem(const DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem &) = default ;
    DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem(DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem &&) = default ;
    DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem() = default ;
    DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& operator=(const DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem &) = default ;
    DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& operator=(DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem &&) = default ;
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
    inline DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // timeStp Field Functions 
    bool hasTimeStp() const { return this->timeStp_ != nullptr;};
    void deleteTimeStp() { this->timeStp_ = nullptr;};
    inline string timeStp() const { DARABONBA_PTR_GET_DEFAULT(timeStp_, "") };
    inline DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& setTimeStp(string timeStp) { DARABONBA_PTR_SET_VALUE(timeStp_, timeStp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeVodUserBillPredictionResponseBodyBillPredictionDataBillPredictionDataItem& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> area_ = nullptr;
    std::shared_ptr<string> timeStp_ = nullptr;
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
