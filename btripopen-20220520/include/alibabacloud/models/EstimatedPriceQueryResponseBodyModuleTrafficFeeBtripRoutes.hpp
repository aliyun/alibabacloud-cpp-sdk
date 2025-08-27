// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYRESPONSEBODYMODULETRAFFICFEEBTRIPROUTES_HPP_
#define ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYRESPONSEBODYMODULETRAFFICFEEBTRIPROUTES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest.hpp>
#include <alibabacloud/models/EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
      DARABONBA_PTR_TO_JSON(cheapest, cheapest_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(err_msg, errMsg_);
      DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_TO_JSON(most_expensive, mostExpensive_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
      DARABONBA_PTR_FROM_JSON(cheapest, cheapest_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(err_msg, errMsg_);
      DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
      DARABONBA_PTR_FROM_JSON(most_expensive, mostExpensive_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes() = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes(const EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes &) = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes(EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes &&) = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes() = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& operator=(const EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes &) = default ;
    EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& operator=(EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCity_ != nullptr
        && this->arrDate_ != nullptr && this->cheapest_ != nullptr && this->depCity_ != nullptr && this->depDate_ != nullptr && this->errMsg_ != nullptr
        && this->itineraryId_ != nullptr && this->mostExpensive_ != nullptr && this->success_ != nullptr; };
    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // arrDate Field Functions 
    bool hasArrDate() const { return this->arrDate_ != nullptr;};
    void deleteArrDate() { this->arrDate_ = nullptr;};
    inline int64_t arrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, 0L) };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& setArrDate(int64_t arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


    // cheapest Field Functions 
    bool hasCheapest() const { return this->cheapest_ != nullptr;};
    void deleteCheapest() { this->cheapest_ = nullptr;};
    inline const Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest & cheapest() const { DARABONBA_PTR_GET_CONST(cheapest_, Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest) };
    inline Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest cheapest() { DARABONBA_PTR_GET(cheapest_, Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest) };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& setCheapest(const Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest & cheapest) { DARABONBA_PTR_SET_VALUE(cheapest_, cheapest) };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& setCheapest(Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest && cheapest) { DARABONBA_PTR_SET_RVALUE(cheapest_, cheapest) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline int64_t depDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, 0L) };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& setDepDate(int64_t depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // itineraryId Field Functions 
    bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
    void deleteItineraryId() { this->itineraryId_ = nullptr;};
    inline string itineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


    // mostExpensive Field Functions 
    bool hasMostExpensive() const { return this->mostExpensive_ != nullptr;};
    void deleteMostExpensive() { this->mostExpensive_ = nullptr;};
    inline const Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive & mostExpensive() const { DARABONBA_PTR_GET_CONST(mostExpensive_, Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive) };
    inline Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive mostExpensive() { DARABONBA_PTR_GET(mostExpensive_, Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive) };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& setMostExpensive(const Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive & mostExpensive) { DARABONBA_PTR_SET_VALUE(mostExpensive_, mostExpensive) };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& setMostExpensive(Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive && mostExpensive) { DARABONBA_PTR_SET_RVALUE(mostExpensive_, mostExpensive) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutes& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> arrCity_ = nullptr;
    std::shared_ptr<int64_t> arrDate_ = nullptr;
    std::shared_ptr<Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesCheapest> cheapest_ = nullptr;
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<int64_t> depDate_ = nullptr;
    std::shared_ptr<string> errMsg_ = nullptr;
    std::shared_ptr<string> itineraryId_ = nullptr;
    std::shared_ptr<Models::EstimatedPriceQueryResponseBodyModuleTrafficFeeBtripRoutesMostExpensive> mostExpensive_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
