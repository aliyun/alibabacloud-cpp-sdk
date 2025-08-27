// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTSALEORDERFLIGHTORDERTICKETLIST_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTSALEORDERFLIGHTORDERTICKETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(tax, tax_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(tax, tax_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList(const IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList(IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList &&) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& operator=(const IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& operator=(IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabinClass_ != nullptr
        && this->tax_ != nullptr && this->ticketNo_ != nullptr && this->ticketPrice_ != nullptr && this->userId_ != nullptr; };
    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass> & cabinClass() const { DARABONBA_PTR_GET_CONST(cabinClass_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass>) };
    inline vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass> cabinClass() { DARABONBA_PTR_GET(cabinClass_, vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass>) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& setCabinClass(const vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass> & cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& setCabinClass(vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass> && cabinClass) { DARABONBA_PTR_SET_RVALUE(cabinClass_, cabinClass) };


    // tax Field Functions 
    bool hasTax() const { return this->tax_ != nullptr;};
    void deleteTax() { this->tax_ = nullptr;};
    inline int32_t tax() const { DARABONBA_PTR_GET_DEFAULT(tax_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& setTax(int32_t tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int32_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<vector<Models::IFlightOrderListQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass>> cabinClass_ = nullptr;
    std::shared_ptr<int32_t> tax_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<int32_t> ticketPrice_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
