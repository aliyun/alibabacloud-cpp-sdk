// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTINVENTORYPRICECHECKRESPONSEBODYMODULEPASSENGERCHANGEDPRICEINFOLISTORIGINALPRICE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTINVENTORYPRICECHECKRESPONSEBODYMODULEPASSENGERCHANGEDPRICEINFOLISTORIGINALPRICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice& obj) { 
      DARABONBA_PTR_TO_JSON(tax_price, taxPrice_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(tax_price, taxPrice_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
    };
    IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice() = default ;
    IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice(const IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice &) = default ;
    IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice(IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice &&) = default ;
    IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice() = default ;
    IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice& operator=(const IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice &) = default ;
    IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice& operator=(IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taxPrice_ != nullptr
        && this->ticketPrice_ != nullptr; };
    // taxPrice Field Functions 
    bool hasTaxPrice() const { return this->taxPrice_ != nullptr;};
    void deleteTaxPrice() { this->taxPrice_ = nullptr;};
    inline int64_t taxPrice() const { DARABONBA_PTR_GET_DEFAULT(taxPrice_, 0L) };
    inline IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice& setTaxPrice(int64_t taxPrice) { DARABONBA_PTR_SET_VALUE(taxPrice_, taxPrice) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int64_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
    inline IntlFlightInventoryPriceCheckResponseBodyModulePassengerChangedPriceInfoListOriginalPrice& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


  protected:
    std::shared_ptr<int64_t> taxPrice_ = nullptr;
    std::shared_ptr<int64_t> ticketPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
