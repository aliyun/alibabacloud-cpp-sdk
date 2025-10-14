// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LUGGAGEDIRECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LUGGAGEDIRECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LuggageDirectRequestFlightSegmentParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class LuggageDirectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LuggageDirectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(flight_segment_param_list, flightSegmentParamList_);
    };
    friend void from_json(const Darabonba::Json& j, LuggageDirectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_segment_param_list, flightSegmentParamList_);
    };
    LuggageDirectRequest() = default ;
    LuggageDirectRequest(const LuggageDirectRequest &) = default ;
    LuggageDirectRequest(LuggageDirectRequest &&) = default ;
    LuggageDirectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LuggageDirectRequest() = default ;
    LuggageDirectRequest& operator=(const LuggageDirectRequest &) = default ;
    LuggageDirectRequest& operator=(LuggageDirectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flightSegmentParamList_ == nullptr; };
    // flightSegmentParamList Field Functions 
    bool hasFlightSegmentParamList() const { return this->flightSegmentParamList_ != nullptr;};
    void deleteFlightSegmentParamList() { this->flightSegmentParamList_ = nullptr;};
    inline const vector<LuggageDirectRequestFlightSegmentParamList> & flightSegmentParamList() const { DARABONBA_PTR_GET_CONST(flightSegmentParamList_, vector<LuggageDirectRequestFlightSegmentParamList>) };
    inline vector<LuggageDirectRequestFlightSegmentParamList> flightSegmentParamList() { DARABONBA_PTR_GET(flightSegmentParamList_, vector<LuggageDirectRequestFlightSegmentParamList>) };
    inline LuggageDirectRequest& setFlightSegmentParamList(const vector<LuggageDirectRequestFlightSegmentParamList> & flightSegmentParamList) { DARABONBA_PTR_SET_VALUE(flightSegmentParamList_, flightSegmentParamList) };
    inline LuggageDirectRequest& setFlightSegmentParamList(vector<LuggageDirectRequestFlightSegmentParamList> && flightSegmentParamList) { DARABONBA_PTR_SET_RVALUE(flightSegmentParamList_, flightSegmentParamList) };


  protected:
    std::shared_ptr<vector<LuggageDirectRequestFlightSegmentParamList>> flightSegmentParamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
