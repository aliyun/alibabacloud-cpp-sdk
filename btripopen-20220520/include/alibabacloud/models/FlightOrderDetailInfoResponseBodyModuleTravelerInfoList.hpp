// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERDETAILINFORESPONSEBODYMODULETRAVELERINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERDETAILINFORESPONSEBODYMODULETRAVELERINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderDetailInfoResponseBodyModuleTravelerInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderDetailInfoResponseBodyModuleTravelerInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(birth_date, birthDate_);
      DARABONBA_PTR_TO_JSON(cert_no, certNo_);
      DARABONBA_PTR_TO_JSON(cert_type, certType_);
      DARABONBA_PTR_TO_JSON(open_ticket_status, openTicketStatus_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderDetailInfoResponseBodyModuleTravelerInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(birth_date, birthDate_);
      DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
      DARABONBA_PTR_FROM_JSON(cert_type, certType_);
      DARABONBA_PTR_FROM_JSON(open_ticket_status, openTicketStatus_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    FlightOrderDetailInfoResponseBodyModuleTravelerInfoList() = default ;
    FlightOrderDetailInfoResponseBodyModuleTravelerInfoList(const FlightOrderDetailInfoResponseBodyModuleTravelerInfoList &) = default ;
    FlightOrderDetailInfoResponseBodyModuleTravelerInfoList(FlightOrderDetailInfoResponseBodyModuleTravelerInfoList &&) = default ;
    FlightOrderDetailInfoResponseBodyModuleTravelerInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderDetailInfoResponseBodyModuleTravelerInfoList() = default ;
    FlightOrderDetailInfoResponseBodyModuleTravelerInfoList& operator=(const FlightOrderDetailInfoResponseBodyModuleTravelerInfoList &) = default ;
    FlightOrderDetailInfoResponseBodyModuleTravelerInfoList& operator=(FlightOrderDetailInfoResponseBodyModuleTravelerInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->birthDate_ != nullptr
        && this->certNo_ != nullptr && this->certType_ != nullptr && this->openTicketStatus_ != nullptr && this->passengerName_ != nullptr && this->passengerType_ != nullptr
        && this->phone_ != nullptr && this->ticketNo_ != nullptr && this->userId_ != nullptr; };
    // birthDate Field Functions 
    bool hasBirthDate() const { return this->birthDate_ != nullptr;};
    void deleteBirthDate() { this->birthDate_ = nullptr;};
    inline string birthDate() const { DARABONBA_PTR_GET_DEFAULT(birthDate_, "") };
    inline FlightOrderDetailInfoResponseBodyModuleTravelerInfoList& setBirthDate(string birthDate) { DARABONBA_PTR_SET_VALUE(birthDate_, birthDate) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline FlightOrderDetailInfoResponseBodyModuleTravelerInfoList& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline FlightOrderDetailInfoResponseBodyModuleTravelerInfoList& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // openTicketStatus Field Functions 
    bool hasOpenTicketStatus() const { return this->openTicketStatus_ != nullptr;};
    void deleteOpenTicketStatus() { this->openTicketStatus_ = nullptr;};
    inline int32_t openTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(openTicketStatus_, 0) };
    inline FlightOrderDetailInfoResponseBodyModuleTravelerInfoList& setOpenTicketStatus(int32_t openTicketStatus) { DARABONBA_PTR_SET_VALUE(openTicketStatus_, openTicketStatus) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline FlightOrderDetailInfoResponseBodyModuleTravelerInfoList& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


    // passengerType Field Functions 
    bool hasPassengerType() const { return this->passengerType_ != nullptr;};
    void deletePassengerType() { this->passengerType_ = nullptr;};
    inline string passengerType() const { DARABONBA_PTR_GET_DEFAULT(passengerType_, "") };
    inline FlightOrderDetailInfoResponseBodyModuleTravelerInfoList& setPassengerType(string passengerType) { DARABONBA_PTR_SET_VALUE(passengerType_, passengerType) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline FlightOrderDetailInfoResponseBodyModuleTravelerInfoList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline FlightOrderDetailInfoResponseBodyModuleTravelerInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline FlightOrderDetailInfoResponseBodyModuleTravelerInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> birthDate_ = nullptr;
    std::shared_ptr<string> certNo_ = nullptr;
    std::shared_ptr<string> certType_ = nullptr;
    std::shared_ptr<int32_t> openTicketStatus_ = nullptr;
    std::shared_ptr<string> passengerName_ = nullptr;
    std::shared_ptr<string> passengerType_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
