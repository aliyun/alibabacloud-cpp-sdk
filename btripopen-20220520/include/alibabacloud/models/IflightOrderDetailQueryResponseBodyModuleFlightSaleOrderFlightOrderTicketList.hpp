// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERDETAILQUERYRESPONSEBODYMODULEFLIGHTSALEORDERFLIGHTORDERTICKETLIST_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERDETAILQUERYRESPONSEBODYMODULEFLIGHTSALEORDERFLIGHTORDERTICKETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& obj) { 
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(tax, tax_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(tax, tax_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList() = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList(const IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList &) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList(IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList &&) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList() = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& operator=(const IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList &) = default ;
    IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& operator=(IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabinClass_ != nullptr
        && this->tax_ != nullptr && this->ticketNo_ != nullptr && this->ticketPrice_ != nullptr && this->userId_ != nullptr; };
    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass> & cabinClass() const { DARABONBA_PTR_GET_CONST(cabinClass_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass>) };
    inline vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass> cabinClass() { DARABONBA_PTR_GET(cabinClass_, vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass>) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& setCabinClass(const vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass> & cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& setCabinClass(vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass> && cabinClass) { DARABONBA_PTR_SET_RVALUE(cabinClass_, cabinClass) };


    // tax Field Functions 
    bool hasTax() const { return this->tax_ != nullptr;};
    void deleteTax() { this->tax_ = nullptr;};
    inline int32_t tax() const { DARABONBA_PTR_GET_DEFAULT(tax_, 0) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& setTax(int32_t tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // ticketPrice Field Functions 
    bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
    void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
    inline int32_t ticketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<vector<Models::IFlightOrderDetailQueryResponseBodyModuleFlightSaleOrderFlightOrderTicketListCabinClass>> cabinClass_ = nullptr;
    std::shared_ptr<int32_t> tax_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<int32_t> ticketPrice_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
