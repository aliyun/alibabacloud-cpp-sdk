// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTLOWESTCABINPRICE_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTLOWESTCABINPRICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(upgrade_fee, upgradeFee_);
      DARABONBA_PTR_TO_JSON(upgrade_price, upgradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(upgrade_fee, upgradeFee_);
      DARABONBA_PTR_FROM_JSON(upgrade_price, upgradePrice_);
    };
    TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice(const TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice(TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice &&) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice& operator=(const TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice& operator=(TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerType_ != nullptr
        && this->ticketPrice_ != nullptr && this->upgradeFee_ != nullptr && this->upgradePrice_ != nullptr; };
    // passengerType Field Functions 
    bool hasPassengerType() const { return this->passengerType_ != nullptr;};
    void deletePassengerType() { this->passengerType_ = nullptr;};
    inline int32_t passengerType() const { DARABONBA_PTR_GET_DEFAULT(passengerType_, 0) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice& setPassengerType(int32_t passengerType) { DARABONBA_PTR_SET_VALUE(passengerType_, passengerType) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int32_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // upgradeFee Field Functions 
    bool hasUpgradeFee() const { return this->upgradeFee_ != nullptr;};
    void deleteUpgradeFee() { this->upgradeFee_ = nullptr;};
    inline int32_t upgradeFee() const { DARABONBA_PTR_GET_DEFAULT(upgradeFee_, 0) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice& setUpgradeFee(int32_t upgradeFee) { DARABONBA_PTR_SET_VALUE(upgradeFee_, upgradeFee) };


    // upgradePrice Field Functions 
    bool hasUpgradePrice() const { return this->upgradePrice_ != nullptr;};
    void deleteUpgradePrice() { this->upgradePrice_ = nullptr;};
    inline int32_t upgradePrice() const { DARABONBA_PTR_GET_DEFAULT(upgradePrice_, 0) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListLowestCabinPrice& setUpgradePrice(int32_t upgradePrice) { DARABONBA_PTR_SET_VALUE(upgradePrice_, upgradePrice) };


  protected:
    std::shared_ptr<int32_t> passengerType_ = nullptr;
    std::shared_ptr<int32_t> ticketPrice_ = nullptr;
    std::shared_ptr<int32_t> upgradeFee_ = nullptr;
    std::shared_ptr<int32_t> upgradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
