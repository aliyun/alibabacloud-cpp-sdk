// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEAGENTINFOSPRICEINFODTORESHOPPRICEINFODTO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULEAGENTINFOSPRICEINFODTORESHOPPRICEINFODTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(re_shop_adult_change_fee, reShopAdultChangeFee_);
      DARABONBA_PTR_TO_JSON(re_shop_adult_price, reShopAdultPrice_);
      DARABONBA_PTR_TO_JSON(re_shop_adult_price_gap, reShopAdultPriceGap_);
      DARABONBA_PTR_TO_JSON(re_shop_child_change_fee, reShopChildChangeFee_);
      DARABONBA_PTR_TO_JSON(re_shop_child_price, reShopChildPrice_);
      DARABONBA_PTR_TO_JSON(re_shop_child_price_gap, reShopChildPriceGap_);
      DARABONBA_PTR_TO_JSON(re_shop_inf_change_fee, reShopInfChangeFee_);
      DARABONBA_PTR_TO_JSON(re_shop_inf_price, reShopInfPrice_);
      DARABONBA_PTR_TO_JSON(re_shop_inf_price_gap, reShopInfPriceGap_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(re_shop_adult_change_fee, reShopAdultChangeFee_);
      DARABONBA_PTR_FROM_JSON(re_shop_adult_price, reShopAdultPrice_);
      DARABONBA_PTR_FROM_JSON(re_shop_adult_price_gap, reShopAdultPriceGap_);
      DARABONBA_PTR_FROM_JSON(re_shop_child_change_fee, reShopChildChangeFee_);
      DARABONBA_PTR_FROM_JSON(re_shop_child_price, reShopChildPrice_);
      DARABONBA_PTR_FROM_JSON(re_shop_child_price_gap, reShopChildPriceGap_);
      DARABONBA_PTR_FROM_JSON(re_shop_inf_change_fee, reShopInfChangeFee_);
      DARABONBA_PTR_FROM_JSON(re_shop_inf_price, reShopInfPrice_);
      DARABONBA_PTR_FROM_JSON(re_shop_inf_price_gap, reShopInfPriceGap_);
    };
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO() = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO(const FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO(FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO &&) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO() = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO& operator=(const FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO& operator=(FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reShopAdultChangeFee_ != nullptr
        && this->reShopAdultPrice_ != nullptr && this->reShopAdultPriceGap_ != nullptr && this->reShopChildChangeFee_ != nullptr && this->reShopChildPrice_ != nullptr && this->reShopChildPriceGap_ != nullptr
        && this->reShopInfChangeFee_ != nullptr && this->reShopInfPrice_ != nullptr && this->reShopInfPriceGap_ != nullptr; };
    // reShopAdultChangeFee Field Functions 
    bool hasReShopAdultChangeFee() const { return this->reShopAdultChangeFee_ != nullptr;};
    void deleteReShopAdultChangeFee() { this->reShopAdultChangeFee_ = nullptr;};
    inline int32_t reShopAdultChangeFee() const { DARABONBA_PTR_GET_DEFAULT(reShopAdultChangeFee_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO& setReShopAdultChangeFee(int32_t reShopAdultChangeFee) { DARABONBA_PTR_SET_VALUE(reShopAdultChangeFee_, reShopAdultChangeFee) };


    // reShopAdultPrice Field Functions 
    bool hasReShopAdultPrice() const { return this->reShopAdultPrice_ != nullptr;};
    void deleteReShopAdultPrice() { this->reShopAdultPrice_ = nullptr;};
    inline int32_t reShopAdultPrice() const { DARABONBA_PTR_GET_DEFAULT(reShopAdultPrice_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO& setReShopAdultPrice(int32_t reShopAdultPrice) { DARABONBA_PTR_SET_VALUE(reShopAdultPrice_, reShopAdultPrice) };


    // reShopAdultPriceGap Field Functions 
    bool hasReShopAdultPriceGap() const { return this->reShopAdultPriceGap_ != nullptr;};
    void deleteReShopAdultPriceGap() { this->reShopAdultPriceGap_ = nullptr;};
    inline int32_t reShopAdultPriceGap() const { DARABONBA_PTR_GET_DEFAULT(reShopAdultPriceGap_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO& setReShopAdultPriceGap(int32_t reShopAdultPriceGap) { DARABONBA_PTR_SET_VALUE(reShopAdultPriceGap_, reShopAdultPriceGap) };


    // reShopChildChangeFee Field Functions 
    bool hasReShopChildChangeFee() const { return this->reShopChildChangeFee_ != nullptr;};
    void deleteReShopChildChangeFee() { this->reShopChildChangeFee_ = nullptr;};
    inline int32_t reShopChildChangeFee() const { DARABONBA_PTR_GET_DEFAULT(reShopChildChangeFee_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO& setReShopChildChangeFee(int32_t reShopChildChangeFee) { DARABONBA_PTR_SET_VALUE(reShopChildChangeFee_, reShopChildChangeFee) };


    // reShopChildPrice Field Functions 
    bool hasReShopChildPrice() const { return this->reShopChildPrice_ != nullptr;};
    void deleteReShopChildPrice() { this->reShopChildPrice_ = nullptr;};
    inline int32_t reShopChildPrice() const { DARABONBA_PTR_GET_DEFAULT(reShopChildPrice_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO& setReShopChildPrice(int32_t reShopChildPrice) { DARABONBA_PTR_SET_VALUE(reShopChildPrice_, reShopChildPrice) };


    // reShopChildPriceGap Field Functions 
    bool hasReShopChildPriceGap() const { return this->reShopChildPriceGap_ != nullptr;};
    void deleteReShopChildPriceGap() { this->reShopChildPriceGap_ = nullptr;};
    inline int32_t reShopChildPriceGap() const { DARABONBA_PTR_GET_DEFAULT(reShopChildPriceGap_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO& setReShopChildPriceGap(int32_t reShopChildPriceGap) { DARABONBA_PTR_SET_VALUE(reShopChildPriceGap_, reShopChildPriceGap) };


    // reShopInfChangeFee Field Functions 
    bool hasReShopInfChangeFee() const { return this->reShopInfChangeFee_ != nullptr;};
    void deleteReShopInfChangeFee() { this->reShopInfChangeFee_ = nullptr;};
    inline int32_t reShopInfChangeFee() const { DARABONBA_PTR_GET_DEFAULT(reShopInfChangeFee_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO& setReShopInfChangeFee(int32_t reShopInfChangeFee) { DARABONBA_PTR_SET_VALUE(reShopInfChangeFee_, reShopInfChangeFee) };


    // reShopInfPrice Field Functions 
    bool hasReShopInfPrice() const { return this->reShopInfPrice_ != nullptr;};
    void deleteReShopInfPrice() { this->reShopInfPrice_ = nullptr;};
    inline int32_t reShopInfPrice() const { DARABONBA_PTR_GET_DEFAULT(reShopInfPrice_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO& setReShopInfPrice(int32_t reShopInfPrice) { DARABONBA_PTR_SET_VALUE(reShopInfPrice_, reShopInfPrice) };


    // reShopInfPriceGap Field Functions 
    bool hasReShopInfPriceGap() const { return this->reShopInfPriceGap_ != nullptr;};
    void deleteReShopInfPriceGap() { this->reShopInfPriceGap_ = nullptr;};
    inline int32_t reShopInfPriceGap() const { DARABONBA_PTR_GET_DEFAULT(reShopInfPriceGap_, 0) };
    inline FlightModifyOtaSearchV2ResponseBodyModuleAgentInfosPriceInfoDTOReShopPriceInfoDTO& setReShopInfPriceGap(int32_t reShopInfPriceGap) { DARABONBA_PTR_SET_VALUE(reShopInfPriceGap_, reShopInfPriceGap) };


  protected:
    std::shared_ptr<int32_t> reShopAdultChangeFee_ = nullptr;
    std::shared_ptr<int32_t> reShopAdultPrice_ = nullptr;
    std::shared_ptr<int32_t> reShopAdultPriceGap_ = nullptr;
    std::shared_ptr<int32_t> reShopChildChangeFee_ = nullptr;
    std::shared_ptr<int32_t> reShopChildPrice_ = nullptr;
    std::shared_ptr<int32_t> reShopChildPriceGap_ = nullptr;
    std::shared_ptr<int32_t> reShopInfChangeFee_ = nullptr;
    std::shared_ptr<int32_t> reShopInfPrice_ = nullptr;
    std::shared_ptr<int32_t> reShopInfPriceGap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
