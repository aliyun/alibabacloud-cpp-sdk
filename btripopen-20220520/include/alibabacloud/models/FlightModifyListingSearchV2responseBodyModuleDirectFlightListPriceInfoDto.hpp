// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2RESPONSEBODYMODULEDIRECTFLIGHTLISTPRICEINFODTO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2RESPONSEBODYMODULEDIRECTFLIGHTLISTPRICEINFODTO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTOReShopPriceInfoDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(adult_price, adultPrice_);
      DARABONBA_PTR_TO_JSON(adult_tax, adultTax_);
      DARABONBA_PTR_TO_JSON(adult_total_price, adultTotalPrice_);
      DARABONBA_PTR_TO_JSON(before_control_price, beforeControlPrice_);
      DARABONBA_PTR_TO_JSON(child_price, childPrice_);
      DARABONBA_PTR_TO_JSON(child_tax, childTax_);
      DARABONBA_PTR_TO_JSON(child_total_price, childTotalPrice_);
      DARABONBA_PTR_TO_JSON(infant_price, infantPrice_);
      DARABONBA_PTR_TO_JSON(infant_tax, infantTax_);
      DARABONBA_PTR_TO_JSON(infant_total_price, infantTotalPrice_);
      DARABONBA_PTR_TO_JSON(original_adult_price, originalAdultPrice_);
      DARABONBA_PTR_TO_JSON(original_adult_total_price, originalAdultTotalPrice_);
      DARABONBA_PTR_TO_JSON(re_shop_price_info_d_t_o, reShopPriceInfoDTO_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(adult_price, adultPrice_);
      DARABONBA_PTR_FROM_JSON(adult_tax, adultTax_);
      DARABONBA_PTR_FROM_JSON(adult_total_price, adultTotalPrice_);
      DARABONBA_PTR_FROM_JSON(before_control_price, beforeControlPrice_);
      DARABONBA_PTR_FROM_JSON(child_price, childPrice_);
      DARABONBA_PTR_FROM_JSON(child_tax, childTax_);
      DARABONBA_PTR_FROM_JSON(child_total_price, childTotalPrice_);
      DARABONBA_PTR_FROM_JSON(infant_price, infantPrice_);
      DARABONBA_PTR_FROM_JSON(infant_tax, infantTax_);
      DARABONBA_PTR_FROM_JSON(infant_total_price, infantTotalPrice_);
      DARABONBA_PTR_FROM_JSON(original_adult_price, originalAdultPrice_);
      DARABONBA_PTR_FROM_JSON(original_adult_total_price, originalAdultTotalPrice_);
      DARABONBA_PTR_FROM_JSON(re_shop_price_info_d_t_o, reShopPriceInfoDTO_);
    };
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO() = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO(const FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO &) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO(FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO &&) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO() = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& operator=(const FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO &) = default ;
    FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& operator=(FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adultPrice_ != nullptr
        && this->adultTax_ != nullptr && this->adultTotalPrice_ != nullptr && this->beforeControlPrice_ != nullptr && this->childPrice_ != nullptr && this->childTax_ != nullptr
        && this->childTotalPrice_ != nullptr && this->infantPrice_ != nullptr && this->infantTax_ != nullptr && this->infantTotalPrice_ != nullptr && this->originalAdultPrice_ != nullptr
        && this->originalAdultTotalPrice_ != nullptr && this->reShopPriceInfoDTO_ != nullptr; };
    // adultPrice Field Functions 
    bool hasAdultPrice() const { return this->adultPrice_ != nullptr;};
    void deleteAdultPrice() { this->adultPrice_ = nullptr;};
    inline int32_t adultPrice() const { DARABONBA_PTR_GET_DEFAULT(adultPrice_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& setAdultPrice(int32_t adultPrice) { DARABONBA_PTR_SET_VALUE(adultPrice_, adultPrice) };


    // adultTax Field Functions 
    bool hasAdultTax() const { return this->adultTax_ != nullptr;};
    void deleteAdultTax() { this->adultTax_ = nullptr;};
    inline int32_t adultTax() const { DARABONBA_PTR_GET_DEFAULT(adultTax_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& setAdultTax(int32_t adultTax) { DARABONBA_PTR_SET_VALUE(adultTax_, adultTax) };


    // adultTotalPrice Field Functions 
    bool hasAdultTotalPrice() const { return this->adultTotalPrice_ != nullptr;};
    void deleteAdultTotalPrice() { this->adultTotalPrice_ = nullptr;};
    inline int32_t adultTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(adultTotalPrice_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& setAdultTotalPrice(int32_t adultTotalPrice) { DARABONBA_PTR_SET_VALUE(adultTotalPrice_, adultTotalPrice) };


    // beforeControlPrice Field Functions 
    bool hasBeforeControlPrice() const { return this->beforeControlPrice_ != nullptr;};
    void deleteBeforeControlPrice() { this->beforeControlPrice_ = nullptr;};
    inline int32_t beforeControlPrice() const { DARABONBA_PTR_GET_DEFAULT(beforeControlPrice_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& setBeforeControlPrice(int32_t beforeControlPrice) { DARABONBA_PTR_SET_VALUE(beforeControlPrice_, beforeControlPrice) };


    // childPrice Field Functions 
    bool hasChildPrice() const { return this->childPrice_ != nullptr;};
    void deleteChildPrice() { this->childPrice_ = nullptr;};
    inline int32_t childPrice() const { DARABONBA_PTR_GET_DEFAULT(childPrice_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& setChildPrice(int32_t childPrice) { DARABONBA_PTR_SET_VALUE(childPrice_, childPrice) };


    // childTax Field Functions 
    bool hasChildTax() const { return this->childTax_ != nullptr;};
    void deleteChildTax() { this->childTax_ = nullptr;};
    inline int32_t childTax() const { DARABONBA_PTR_GET_DEFAULT(childTax_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& setChildTax(int32_t childTax) { DARABONBA_PTR_SET_VALUE(childTax_, childTax) };


    // childTotalPrice Field Functions 
    bool hasChildTotalPrice() const { return this->childTotalPrice_ != nullptr;};
    void deleteChildTotalPrice() { this->childTotalPrice_ = nullptr;};
    inline int32_t childTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(childTotalPrice_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& setChildTotalPrice(int32_t childTotalPrice) { DARABONBA_PTR_SET_VALUE(childTotalPrice_, childTotalPrice) };


    // infantPrice Field Functions 
    bool hasInfantPrice() const { return this->infantPrice_ != nullptr;};
    void deleteInfantPrice() { this->infantPrice_ = nullptr;};
    inline int32_t infantPrice() const { DARABONBA_PTR_GET_DEFAULT(infantPrice_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& setInfantPrice(int32_t infantPrice) { DARABONBA_PTR_SET_VALUE(infantPrice_, infantPrice) };


    // infantTax Field Functions 
    bool hasInfantTax() const { return this->infantTax_ != nullptr;};
    void deleteInfantTax() { this->infantTax_ = nullptr;};
    inline int32_t infantTax() const { DARABONBA_PTR_GET_DEFAULT(infantTax_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& setInfantTax(int32_t infantTax) { DARABONBA_PTR_SET_VALUE(infantTax_, infantTax) };


    // infantTotalPrice Field Functions 
    bool hasInfantTotalPrice() const { return this->infantTotalPrice_ != nullptr;};
    void deleteInfantTotalPrice() { this->infantTotalPrice_ = nullptr;};
    inline int32_t infantTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(infantTotalPrice_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& setInfantTotalPrice(int32_t infantTotalPrice) { DARABONBA_PTR_SET_VALUE(infantTotalPrice_, infantTotalPrice) };


    // originalAdultPrice Field Functions 
    bool hasOriginalAdultPrice() const { return this->originalAdultPrice_ != nullptr;};
    void deleteOriginalAdultPrice() { this->originalAdultPrice_ = nullptr;};
    inline int32_t originalAdultPrice() const { DARABONBA_PTR_GET_DEFAULT(originalAdultPrice_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& setOriginalAdultPrice(int32_t originalAdultPrice) { DARABONBA_PTR_SET_VALUE(originalAdultPrice_, originalAdultPrice) };


    // originalAdultTotalPrice Field Functions 
    bool hasOriginalAdultTotalPrice() const { return this->originalAdultTotalPrice_ != nullptr;};
    void deleteOriginalAdultTotalPrice() { this->originalAdultTotalPrice_ = nullptr;};
    inline int32_t originalAdultTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalAdultTotalPrice_, 0) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& setOriginalAdultTotalPrice(int32_t originalAdultTotalPrice) { DARABONBA_PTR_SET_VALUE(originalAdultTotalPrice_, originalAdultTotalPrice) };


    // reShopPriceInfoDTO Field Functions 
    bool hasReShopPriceInfoDTO() const { return this->reShopPriceInfoDTO_ != nullptr;};
    void deleteReShopPriceInfoDTO() { this->reShopPriceInfoDTO_ = nullptr;};
    inline const Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTOReShopPriceInfoDTO & reShopPriceInfoDTO() const { DARABONBA_PTR_GET_CONST(reShopPriceInfoDTO_, Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTOReShopPriceInfoDTO) };
    inline Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTOReShopPriceInfoDTO reShopPriceInfoDTO() { DARABONBA_PTR_GET(reShopPriceInfoDTO_, Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTOReShopPriceInfoDTO) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& setReShopPriceInfoDTO(const Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTOReShopPriceInfoDTO & reShopPriceInfoDTO) { DARABONBA_PTR_SET_VALUE(reShopPriceInfoDTO_, reShopPriceInfoDTO) };
    inline FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTO& setReShopPriceInfoDTO(Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTOReShopPriceInfoDTO && reShopPriceInfoDTO) { DARABONBA_PTR_SET_RVALUE(reShopPriceInfoDTO_, reShopPriceInfoDTO) };


  protected:
    std::shared_ptr<int32_t> adultPrice_ = nullptr;
    std::shared_ptr<int32_t> adultTax_ = nullptr;
    std::shared_ptr<int32_t> adultTotalPrice_ = nullptr;
    std::shared_ptr<int32_t> beforeControlPrice_ = nullptr;
    std::shared_ptr<int32_t> childPrice_ = nullptr;
    std::shared_ptr<int32_t> childTax_ = nullptr;
    std::shared_ptr<int32_t> childTotalPrice_ = nullptr;
    std::shared_ptr<int32_t> infantPrice_ = nullptr;
    std::shared_ptr<int32_t> infantTax_ = nullptr;
    std::shared_ptr<int32_t> infantTotalPrice_ = nullptr;
    std::shared_ptr<int32_t> originalAdultPrice_ = nullptr;
    std::shared_ptr<int32_t> originalAdultTotalPrice_ = nullptr;
    std::shared_ptr<Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightListPriceInfoDTOReShopPriceInfoDTO> reShopPriceInfoDTO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
