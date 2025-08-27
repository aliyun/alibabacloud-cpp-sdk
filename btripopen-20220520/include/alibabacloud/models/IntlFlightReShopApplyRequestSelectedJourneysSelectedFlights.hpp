// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPAPPLYREQUESTSELECTEDJOURNEYSSELECTEDFLIGHTS_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPAPPLYREQUESTSELECTEDJOURNEYSSELECTEDFLIGHTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
      DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
      DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
    };
    IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights() = default ;
    IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights(const IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights &) = default ;
    IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights(IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights &&) = default ;
    IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights() = default ;
    IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights& operator=(const IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights &) = default ;
    IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights& operator=(IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCityCode_ != nullptr
        && this->depCityCode_ != nullptr && this->segmentKey_ != nullptr; };
    // arrCityCode Field Functions 
    bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
    void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
    inline string arrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
    inline IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


    // depCityCode Field Functions 
    bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
    void deleteDepCityCode() { this->depCityCode_ = nullptr;};
    inline string depCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
    inline IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


    // segmentKey Field Functions 
    bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
    void deleteSegmentKey() { this->segmentKey_ = nullptr;};
    inline string segmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
    inline IntlFlightReShopApplyRequestSelectedJourneysSelectedFlights& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrCityCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depCityCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> segmentKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
