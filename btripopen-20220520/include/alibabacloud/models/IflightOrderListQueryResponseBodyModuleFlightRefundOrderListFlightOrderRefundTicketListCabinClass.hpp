// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTREFUNDORDERLISTFLIGHTORDERREFUNDTICKETLISTCABINCLASS_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTREFUNDORDERLISTFLIGHTORDERREFUNDTICKETLISTCABINCLASS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass& obj) { 
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
    };
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass(const IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass(IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass &&) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass& operator=(const IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass& operator=(IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabin_ != nullptr
        && this->cabinClass_ != nullptr && this->flightNo_ != nullptr; };
    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // flightNo Field Functions 
    bool hasFlightNo() const { return this->flightNo_ != nullptr;};
    void deleteFlightNo() { this->flightNo_ = nullptr;};
    inline string flightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightRefundOrderListFlightOrderRefundTicketListCabinClass& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


  protected:
    std::shared_ptr<string> cabin_ = nullptr;
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<string> flightNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
