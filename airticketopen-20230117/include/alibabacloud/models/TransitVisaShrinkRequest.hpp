// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSITVISASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSITVISASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TransitVisaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransitVisaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(flight_segment_param_list, flightSegmentParamListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, TransitVisaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_segment_param_list, flightSegmentParamListShrink_);
    };
    TransitVisaShrinkRequest() = default ;
    TransitVisaShrinkRequest(const TransitVisaShrinkRequest &) = default ;
    TransitVisaShrinkRequest(TransitVisaShrinkRequest &&) = default ;
    TransitVisaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransitVisaShrinkRequest() = default ;
    TransitVisaShrinkRequest& operator=(const TransitVisaShrinkRequest &) = default ;
    TransitVisaShrinkRequest& operator=(TransitVisaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flightSegmentParamListShrink_ == nullptr; };
    // flightSegmentParamListShrink Field Functions 
    bool hasFlightSegmentParamListShrink() const { return this->flightSegmentParamListShrink_ != nullptr;};
    void deleteFlightSegmentParamListShrink() { this->flightSegmentParamListShrink_ = nullptr;};
    inline string flightSegmentParamListShrink() const { DARABONBA_PTR_GET_DEFAULT(flightSegmentParamListShrink_, "") };
    inline TransitVisaShrinkRequest& setFlightSegmentParamListShrink(string flightSegmentParamListShrink) { DARABONBA_PTR_SET_VALUE(flightSegmentParamListShrink_, flightSegmentParamListShrink) };


  protected:
    std::shared_ptr<string> flightSegmentParamListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
