// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERRESPONSEBODYMODULEITINERARIES_HPP_
#define ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERRESPONSEBODYMODULEITINERARIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class QueryReimbursementOrderResponseBodyModuleItineraries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReimbursementOrderResponseBodyModuleItineraries& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(traffic_way, trafficWay_);
      DARABONBA_PTR_TO_JSON(trip_way, tripWay_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReimbursementOrderResponseBodyModuleItineraries& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(traffic_way, trafficWay_);
      DARABONBA_PTR_FROM_JSON(trip_way, tripWay_);
    };
    QueryReimbursementOrderResponseBodyModuleItineraries() = default ;
    QueryReimbursementOrderResponseBodyModuleItineraries(const QueryReimbursementOrderResponseBodyModuleItineraries &) = default ;
    QueryReimbursementOrderResponseBodyModuleItineraries(QueryReimbursementOrderResponseBodyModuleItineraries &&) = default ;
    QueryReimbursementOrderResponseBodyModuleItineraries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReimbursementOrderResponseBodyModuleItineraries() = default ;
    QueryReimbursementOrderResponseBodyModuleItineraries& operator=(const QueryReimbursementOrderResponseBodyModuleItineraries &) = default ;
    QueryReimbursementOrderResponseBodyModuleItineraries& operator=(QueryReimbursementOrderResponseBodyModuleItineraries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCity_ != nullptr
        && this->arrDate_ != nullptr && this->depCity_ != nullptr && this->depDate_ != nullptr && this->trafficWay_ != nullptr && this->tripWay_ != nullptr; };
    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline QueryReimbursementOrderResponseBodyModuleItineraries& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrDate Field Functions 
    bool hasArrDate() const { return this->arrDate_ != nullptr;};
    void deleteArrDate() { this->arrDate_ = nullptr;};
    inline string arrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
    inline QueryReimbursementOrderResponseBodyModuleItineraries& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline QueryReimbursementOrderResponseBodyModuleItineraries& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline QueryReimbursementOrderResponseBodyModuleItineraries& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // trafficWay Field Functions 
    bool hasTrafficWay() const { return this->trafficWay_ != nullptr;};
    void deleteTrafficWay() { this->trafficWay_ = nullptr;};
    inline string trafficWay() const { DARABONBA_PTR_GET_DEFAULT(trafficWay_, "") };
    inline QueryReimbursementOrderResponseBodyModuleItineraries& setTrafficWay(string trafficWay) { DARABONBA_PTR_SET_VALUE(trafficWay_, trafficWay) };


    // tripWay Field Functions 
    bool hasTripWay() const { return this->tripWay_ != nullptr;};
    void deleteTripWay() { this->tripWay_ = nullptr;};
    inline string tripWay() const { DARABONBA_PTR_GET_DEFAULT(tripWay_, "") };
    inline QueryReimbursementOrderResponseBodyModuleItineraries& setTripWay(string tripWay) { DARABONBA_PTR_SET_VALUE(tripWay_, tripWay) };


  protected:
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<string> arrDate_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> depDate_ = nullptr;
    std::shared_ptr<string> trafficWay_ = nullptr;
    std::shared_ptr<string> tripWay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
