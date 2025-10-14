// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LUGGAGEDIRECTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LUGGAGEDIRECTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class LuggageDirectShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LuggageDirectShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(flight_segment_param_list, flightSegmentParamListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, LuggageDirectShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_segment_param_list, flightSegmentParamListShrink_);
    };
    LuggageDirectShrinkRequest() = default ;
    LuggageDirectShrinkRequest(const LuggageDirectShrinkRequest &) = default ;
    LuggageDirectShrinkRequest(LuggageDirectShrinkRequest &&) = default ;
    LuggageDirectShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LuggageDirectShrinkRequest() = default ;
    LuggageDirectShrinkRequest& operator=(const LuggageDirectShrinkRequest &) = default ;
    LuggageDirectShrinkRequest& operator=(LuggageDirectShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flightSegmentParamListShrink_ == nullptr; };
    // flightSegmentParamListShrink Field Functions 
    bool hasFlightSegmentParamListShrink() const { return this->flightSegmentParamListShrink_ != nullptr;};
    void deleteFlightSegmentParamListShrink() { this->flightSegmentParamListShrink_ = nullptr;};
    inline string flightSegmentParamListShrink() const { DARABONBA_PTR_GET_DEFAULT(flightSegmentParamListShrink_, "") };
    inline LuggageDirectShrinkRequest& setFlightSegmentParamListShrink(string flightSegmentParamListShrink) { DARABONBA_PTR_SET_VALUE(flightSegmentParamListShrink_, flightSegmentParamListShrink) };


  protected:
    std::shared_ptr<string> flightSegmentParamListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
