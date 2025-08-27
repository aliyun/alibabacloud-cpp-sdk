// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULEPASSENGERTICKETLISTTICKETLISTPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULEPASSENGERTICKETLISTTICKETLISTPRICEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(sell_price, sellPrice_);
      DARABONBA_PTR_TO_JSON(tax, tax_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(sell_price, sellPrice_);
      DARABONBA_PTR_FROM_JSON(tax, tax_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
    };
    IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo() = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo(const IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo &) = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo(IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo &&) = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo() = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo& operator=(const IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo &) = default ;
    IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo& operator=(IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sellPrice_ != nullptr
        && this->tax_ != nullptr && this->ticketPrice_ != nullptr; };
    // sellPrice Field Functions 
    bool hasSellPrice() const { return this->sellPrice_ != nullptr;};
    void deleteSellPrice() { this->sellPrice_ = nullptr;};
    inline int32_t sellPrice() const { DARABONBA_PTR_GET_DEFAULT(sellPrice_, 0) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo& setSellPrice(int32_t sellPrice) { DARABONBA_PTR_SET_VALUE(sellPrice_, sellPrice) };


    // tax Field Functions 
    bool hasTax() const { return this->tax_ != nullptr;};
    void deleteTax() { this->tax_ = nullptr;};
    inline int32_t tax() const { DARABONBA_PTR_GET_DEFAULT(tax_, 0) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo& setTax(int32_t tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int32_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
    inline IntlFlightOrderDetailResponseBodyModulePassengerTicketListTicketListPriceInfo& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


  protected:
    std::shared_ptr<int32_t> sellPrice_ = nullptr;
    std::shared_ptr<int32_t> tax_ = nullptr;
    std::shared_ptr<int32_t> ticketPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
