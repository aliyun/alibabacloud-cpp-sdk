// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENRICHREQUESTJOURNEYPARAMLIST_HPP_
#define ALIBABACLOUD_MODELS_ENRICHREQUESTJOURNEYPARAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EnrichRequestJourneyParamListSegmentParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class EnrichRequestJourneyParamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrichRequestJourneyParamList& obj) { 
      DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
      DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
      DARABONBA_PTR_TO_JSON(departure_date, departureDate_);
      DARABONBA_PTR_TO_JSON(segment_param_list, segmentParamList_);
    };
    friend void from_json(const Darabonba::Json& j, EnrichRequestJourneyParamList& obj) { 
      DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
      DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
      DARABONBA_PTR_FROM_JSON(departure_date, departureDate_);
      DARABONBA_PTR_FROM_JSON(segment_param_list, segmentParamList_);
    };
    EnrichRequestJourneyParamList() = default ;
    EnrichRequestJourneyParamList(const EnrichRequestJourneyParamList &) = default ;
    EnrichRequestJourneyParamList(EnrichRequestJourneyParamList &&) = default ;
    EnrichRequestJourneyParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrichRequestJourneyParamList() = default ;
    EnrichRequestJourneyParamList& operator=(const EnrichRequestJourneyParamList &) = default ;
    EnrichRequestJourneyParamList& operator=(EnrichRequestJourneyParamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrivalCity_ == nullptr
        && return this->departureCity_ == nullptr && return this->departureDate_ == nullptr && return this->segmentParamList_ == nullptr; };
    // arrivalCity Field Functions 
    bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
    void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
    inline string arrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
    inline EnrichRequestJourneyParamList& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


    // departureCity Field Functions 
    bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
    void deleteDepartureCity() { this->departureCity_ = nullptr;};
    inline string departureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
    inline EnrichRequestJourneyParamList& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


    // departureDate Field Functions 
    bool hasDepartureDate() const { return this->departureDate_ != nullptr;};
    void deleteDepartureDate() { this->departureDate_ = nullptr;};
    inline string departureDate() const { DARABONBA_PTR_GET_DEFAULT(departureDate_, "") };
    inline EnrichRequestJourneyParamList& setDepartureDate(string departureDate) { DARABONBA_PTR_SET_VALUE(departureDate_, departureDate) };


    // segmentParamList Field Functions 
    bool hasSegmentParamList() const { return this->segmentParamList_ != nullptr;};
    void deleteSegmentParamList() { this->segmentParamList_ = nullptr;};
    inline const vector<Models::EnrichRequestJourneyParamListSegmentParamList> & segmentParamList() const { DARABONBA_PTR_GET_CONST(segmentParamList_, vector<Models::EnrichRequestJourneyParamListSegmentParamList>) };
    inline vector<Models::EnrichRequestJourneyParamListSegmentParamList> segmentParamList() { DARABONBA_PTR_GET(segmentParamList_, vector<Models::EnrichRequestJourneyParamListSegmentParamList>) };
    inline EnrichRequestJourneyParamList& setSegmentParamList(const vector<Models::EnrichRequestJourneyParamListSegmentParamList> & segmentParamList) { DARABONBA_PTR_SET_VALUE(segmentParamList_, segmentParamList) };
    inline EnrichRequestJourneyParamList& setSegmentParamList(vector<Models::EnrichRequestJourneyParamListSegmentParamList> && segmentParamList) { DARABONBA_PTR_SET_RVALUE(segmentParamList_, segmentParamList) };


  protected:
    // arrival city code (capitalized)
    // 
    // This parameter is required.
    std::shared_ptr<string> arrivalCity_ = nullptr;
    // departure city code (capitalized)
    // 
    // This parameter is required.
    std::shared_ptr<string> departureCity_ = nullptr;
    // departure date (eg: yyyyMMdd)
    // 
    // This parameter is required.
    std::shared_ptr<string> departureDate_ = nullptr;
    // segement param list
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::EnrichRequestJourneyParamListSegmentParamList>> segmentParamList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
