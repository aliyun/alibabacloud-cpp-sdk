// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EstimatedPriceQueryResponseBodyModuleHotelFeeDetail.hpp>
#include <alibabacloud/models/EstimatedPriceQueryResponseBodyModuleTrafficFee.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EstimatedPriceQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EstimatedPriceQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(hotel_fee_detail, hotelFeeDetail_);
      DARABONBA_PTR_TO_JSON(total_hotel_fee, totalHotelFee_);
      DARABONBA_PTR_TO_JSON(traffic_fee, trafficFee_);
    };
    friend void from_json(const Darabonba::Json& j, EstimatedPriceQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(hotel_fee_detail, hotelFeeDetail_);
      DARABONBA_PTR_FROM_JSON(total_hotel_fee, totalHotelFee_);
      DARABONBA_PTR_FROM_JSON(traffic_fee, trafficFee_);
    };
    EstimatedPriceQueryResponseBodyModule() = default ;
    EstimatedPriceQueryResponseBodyModule(const EstimatedPriceQueryResponseBodyModule &) = default ;
    EstimatedPriceQueryResponseBodyModule(EstimatedPriceQueryResponseBodyModule &&) = default ;
    EstimatedPriceQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EstimatedPriceQueryResponseBodyModule() = default ;
    EstimatedPriceQueryResponseBodyModule& operator=(const EstimatedPriceQueryResponseBodyModule &) = default ;
    EstimatedPriceQueryResponseBodyModule& operator=(EstimatedPriceQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotelFeeDetail_ != nullptr
        && this->totalHotelFee_ != nullptr && this->trafficFee_ != nullptr; };
    // hotelFeeDetail Field Functions 
    bool hasHotelFeeDetail() const { return this->hotelFeeDetail_ != nullptr;};
    void deleteHotelFeeDetail() { this->hotelFeeDetail_ = nullptr;};
    inline const vector<Models::EstimatedPriceQueryResponseBodyModuleHotelFeeDetail> & hotelFeeDetail() const { DARABONBA_PTR_GET_CONST(hotelFeeDetail_, vector<Models::EstimatedPriceQueryResponseBodyModuleHotelFeeDetail>) };
    inline vector<Models::EstimatedPriceQueryResponseBodyModuleHotelFeeDetail> hotelFeeDetail() { DARABONBA_PTR_GET(hotelFeeDetail_, vector<Models::EstimatedPriceQueryResponseBodyModuleHotelFeeDetail>) };
    inline EstimatedPriceQueryResponseBodyModule& setHotelFeeDetail(const vector<Models::EstimatedPriceQueryResponseBodyModuleHotelFeeDetail> & hotelFeeDetail) { DARABONBA_PTR_SET_VALUE(hotelFeeDetail_, hotelFeeDetail) };
    inline EstimatedPriceQueryResponseBodyModule& setHotelFeeDetail(vector<Models::EstimatedPriceQueryResponseBodyModuleHotelFeeDetail> && hotelFeeDetail) { DARABONBA_PTR_SET_RVALUE(hotelFeeDetail_, hotelFeeDetail) };


    // totalHotelFee Field Functions 
    bool hasTotalHotelFee() const { return this->totalHotelFee_ != nullptr;};
    void deleteTotalHotelFee() { this->totalHotelFee_ = nullptr;};
    inline int64_t totalHotelFee() const { DARABONBA_PTR_GET_DEFAULT(totalHotelFee_, 0L) };
    inline EstimatedPriceQueryResponseBodyModule& setTotalHotelFee(int64_t totalHotelFee) { DARABONBA_PTR_SET_VALUE(totalHotelFee_, totalHotelFee) };


    // trafficFee Field Functions 
    bool hasTrafficFee() const { return this->trafficFee_ != nullptr;};
    void deleteTrafficFee() { this->trafficFee_ = nullptr;};
    inline const Models::EstimatedPriceQueryResponseBodyModuleTrafficFee & trafficFee() const { DARABONBA_PTR_GET_CONST(trafficFee_, Models::EstimatedPriceQueryResponseBodyModuleTrafficFee) };
    inline Models::EstimatedPriceQueryResponseBodyModuleTrafficFee trafficFee() { DARABONBA_PTR_GET(trafficFee_, Models::EstimatedPriceQueryResponseBodyModuleTrafficFee) };
    inline EstimatedPriceQueryResponseBodyModule& setTrafficFee(const Models::EstimatedPriceQueryResponseBodyModuleTrafficFee & trafficFee) { DARABONBA_PTR_SET_VALUE(trafficFee_, trafficFee) };
    inline EstimatedPriceQueryResponseBodyModule& setTrafficFee(Models::EstimatedPriceQueryResponseBodyModuleTrafficFee && trafficFee) { DARABONBA_PTR_SET_RVALUE(trafficFee_, trafficFee) };


  protected:
    std::shared_ptr<vector<Models::EstimatedPriceQueryResponseBodyModuleHotelFeeDetail>> hotelFeeDetail_ = nullptr;
    // 酒店费用总额，单位为元
    std::shared_ptr<int64_t> totalHotelFee_ = nullptr;
    std::shared_ptr<Models::EstimatedPriceQueryResponseBodyModuleTrafficFee> trafficFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
