// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSITVISAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSITVISAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TransitVisaRequestFlightSegmentParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TransitVisaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransitVisaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(flight_segment_param_list, flightSegmentParamList_);
    };
    friend void from_json(const Darabonba::Json& j, TransitVisaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_segment_param_list, flightSegmentParamList_);
    };
    TransitVisaRequest() = default ;
    TransitVisaRequest(const TransitVisaRequest &) = default ;
    TransitVisaRequest(TransitVisaRequest &&) = default ;
    TransitVisaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransitVisaRequest() = default ;
    TransitVisaRequest& operator=(const TransitVisaRequest &) = default ;
    TransitVisaRequest& operator=(TransitVisaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flightSegmentParamList_ == nullptr; };
    // flightSegmentParamList Field Functions 
    bool hasFlightSegmentParamList() const { return this->flightSegmentParamList_ != nullptr;};
    void deleteFlightSegmentParamList() { this->flightSegmentParamList_ = nullptr;};
    inline const vector<TransitVisaRequestFlightSegmentParamList> & flightSegmentParamList() const { DARABONBA_PTR_GET_CONST(flightSegmentParamList_, vector<TransitVisaRequestFlightSegmentParamList>) };
    inline vector<TransitVisaRequestFlightSegmentParamList> flightSegmentParamList() { DARABONBA_PTR_GET(flightSegmentParamList_, vector<TransitVisaRequestFlightSegmentParamList>) };
    inline TransitVisaRequest& setFlightSegmentParamList(const vector<TransitVisaRequestFlightSegmentParamList> & flightSegmentParamList) { DARABONBA_PTR_SET_VALUE(flightSegmentParamList_, flightSegmentParamList) };
    inline TransitVisaRequest& setFlightSegmentParamList(vector<TransitVisaRequestFlightSegmentParamList> && flightSegmentParamList) { DARABONBA_PTR_SET_RVALUE(flightSegmentParamList_, flightSegmentParamList) };


  protected:
    std::shared_ptr<vector<TransitVisaRequestFlightSegmentParamList>> flightSegmentParamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
