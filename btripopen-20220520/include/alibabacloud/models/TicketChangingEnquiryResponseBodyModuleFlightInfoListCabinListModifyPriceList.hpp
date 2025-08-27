// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTCABINLISTMODIFYPRICELIST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTCABINLISTMODIFYPRICELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(upgrade_fee, upgradeFee_);
      DARABONBA_PTR_TO_JSON(upgrade_price, upgradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(upgrade_fee, upgradeFee_);
      DARABONBA_PTR_FROM_JSON(upgrade_price, upgradePrice_);
    };
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList(const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList(TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList &&) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList& operator=(const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList& operator=(TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList &&) = default ;
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
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList& setPassengerType(int32_t passengerType) { DARABONBA_PTR_SET_VALUE(passengerType_, passengerType) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int32_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // upgradeFee Field Functions 
    bool hasUpgradeFee() const { return this->upgradeFee_ != nullptr;};
    void deleteUpgradeFee() { this->upgradeFee_ = nullptr;};
    inline int32_t upgradeFee() const { DARABONBA_PTR_GET_DEFAULT(upgradeFee_, 0) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList& setUpgradeFee(int32_t upgradeFee) { DARABONBA_PTR_SET_VALUE(upgradeFee_, upgradeFee) };


    // upgradePrice Field Functions 
    bool hasUpgradePrice() const { return this->upgradePrice_ != nullptr;};
    void deleteUpgradePrice() { this->upgradePrice_ = nullptr;};
    inline int32_t upgradePrice() const { DARABONBA_PTR_GET_DEFAULT(upgradePrice_, 0) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListModifyPriceList& setUpgradePrice(int32_t upgradePrice) { DARABONBA_PTR_SET_VALUE(upgradePrice_, upgradePrice) };


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
