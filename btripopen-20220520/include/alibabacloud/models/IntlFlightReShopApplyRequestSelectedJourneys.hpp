// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPAPPLYREQUESTSELECTEDJOURNEYS_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPAPPLYREQUESTSELECTEDJOURNEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopApplyRequestSelectedJourneys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopApplyRequestSelectedJourneys& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(intent_date, intentDate_);
      DARABONBA_PTR_TO_JSON(selected_flights, selectedFlights_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopApplyRequestSelectedJourneys& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(intent_date, intentDate_);
      DARABONBA_PTR_FROM_JSON(selected_flights, selectedFlights_);
    };
    IntlFlightReShopApplyRequestSelectedJourneys() = default ;
    IntlFlightReShopApplyRequestSelectedJourneys(const IntlFlightReShopApplyRequestSelectedJourneys &) = default ;
    IntlFlightReShopApplyRequestSelectedJourneys(IntlFlightReShopApplyRequestSelectedJourneys &&) = default ;
    IntlFlightReShopApplyRequestSelectedJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopApplyRequestSelectedJourneys() = default ;
    IntlFlightReShopApplyRequestSelectedJourneys& operator=(const IntlFlightReShopApplyRequestSelectedJourneys &) = default ;
    IntlFlightReShopApplyRequestSelectedJourneys& operator=(IntlFlightReShopApplyRequestSelectedJourneys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCityCode_ != nullptr
        && this->depCityCode_ != nullptr && this->intentDate_ != nullptr && this->selectedFlights_ != nullptr; };
    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline IntlFlightReShopApplyRequestSelectedJourneys& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline IntlFlightReShopApplyRequestSelectedJourneys& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // intentDate Field Functions 
    bool hasIntentDate() const { return this->intentDate_ != nullptr;};
    void deleteIntentDate() { this->intentDate_ = nullptr;};
    inline string intentDate() const { DARABONBA_PTR_GET_DEFAULT(intentDate_, "") };
    inline IntlFlightReShopApplyRequestSelectedJourneys& setIntentDate(string intentDate) { DARABONBA_PTR_SET_VALUE(intentDate_, intentDate) };


    // selectedFlights Field Functions 
    bool hasSelectedFlights() const { return this->selectedFlights_ != nullptr;};
    void deleteSelectedFlights() { this->selectedFlights_ = nullptr;};
    inline const vector<Models::IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights> & selectedFlights() const { DARABONBA_PTR_GET_CONST(selectedFlights_, vector<Models::IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights>) };
    inline vector<Models::IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights> selectedFlights() { DARABONBA_PTR_GET(selectedFlights_, vector<Models::IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights>) };
    inline IntlFlightReShopApplyRequestSelectedJourneys& setSelectedFlights(const vector<Models::IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights> & selectedFlights) { DARABONBA_PTR_SET_VALUE(selectedFlights_, selectedFlights) };
    inline IntlFlightReShopApplyRequestSelectedJourneys& setSelectedFlights(vector<Models::IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights> && selectedFlights) { DARABONBA_PTR_SET_RVALUE(selectedFlights_, selectedFlights) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrCityCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depCityCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> intentDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights>> selectedFlights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
