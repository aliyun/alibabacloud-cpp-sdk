// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDDETAILV2RESPONSEBODYMODULETRAVELERINFODTOS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDDETAILV2RESPONSEBODYMODULETRAVELERINFODTOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& obj) { 
      DARABONBA_PTR_TO_JSON(birth_date, birthDate_);
      DARABONBA_PTR_TO_JSON(cert_no, certNo_);
      DARABONBA_PTR_TO_JSON(cert_type, certType_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(origin_ticket_nos, originTicketNos_);
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_TO_JSON(passenger_type, passengerType_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(pid, pid_);
      DARABONBA_PTR_TO_JSON(ticket_nos, ticketNos_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& obj) { 
      DARABONBA_PTR_FROM_JSON(birth_date, birthDate_);
      DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
      DARABONBA_PTR_FROM_JSON(cert_type, certType_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(origin_ticket_nos, originTicketNos_);
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
      DARABONBA_PTR_FROM_JSON(passenger_type, passengerType_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(pid, pid_);
      DARABONBA_PTR_FROM_JSON(ticket_nos, ticketNos_);
    };
    FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS() = default ;
    FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS(const FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS &) = default ;
    FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS(FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS &&) = default ;
    FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS() = default ;
    FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& operator=(const FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS &) = default ;
    FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& operator=(FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->birthDate_ != nullptr
        && this->certNo_ != nullptr && this->certType_ != nullptr && this->gender_ != nullptr && this->originTicketNos_ != nullptr && this->passengerId_ != nullptr
        && this->passengerName_ != nullptr && this->passengerType_ != nullptr && this->phone_ != nullptr && this->pid_ != nullptr && this->ticketNos_ != nullptr; };
    // birthDate Field Functions 
    bool hasBirthDate() const { return this->birthDate_ != nullptr;};
    void deleteBirthDate() { this->birthDate_ = nullptr;};
    inline string birthDate() const { DARABONBA_PTR_GET_DEFAULT(birthDate_, "") };
    inline FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& setBirthDate(string birthDate) { DARABONBA_PTR_SET_VALUE(birthDate_, birthDate) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline int32_t certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, 0) };
    inline FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& setCertType(int32_t certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline int32_t gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
    inline FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // originTicketNos Field Functions 
    bool hasOriginTicketNos() const { return this->originTicketNos_ != nullptr;};
    void deleteOriginTicketNos() { this->originTicketNos_ = nullptr;};
    inline const vector<string> & originTicketNos() const { DARABONBA_PTR_GET_CONST(originTicketNos_, vector<string>) };
    inline vector<string> originTicketNos() { DARABONBA_PTR_GET(originTicketNos_, vector<string>) };
    inline FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& setOriginTicketNos(const vector<string> & originTicketNos) { DARABONBA_PTR_SET_VALUE(originTicketNos_, originTicketNos) };
    inline FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& setOriginTicketNos(vector<string> && originTicketNos) { DARABONBA_PTR_SET_RVALUE(originTicketNos_, originTicketNos) };


    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline string passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
    inline FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


    // passengerType Field Functions 
    bool hasPassengerType() const { return this->passengerType_ != nullptr;};
    void deletePassengerType() { this->passengerType_ = nullptr;};
    inline int32_t passengerType() const { DARABONBA_PTR_GET_DEFAULT(passengerType_, 0) };
    inline FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& setPassengerType(int32_t passengerType) { DARABONBA_PTR_SET_VALUE(passengerType_, passengerType) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline int64_t pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0L) };
    inline FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& setPid(int64_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // ticketNos Field Functions 
    bool hasTicketNos() const { return this->ticketNos_ != nullptr;};
    void deleteTicketNos() { this->ticketNos_ = nullptr;};
    inline const vector<string> & ticketNos() const { DARABONBA_PTR_GET_CONST(ticketNos_, vector<string>) };
    inline vector<string> ticketNos() { DARABONBA_PTR_GET(ticketNos_, vector<string>) };
    inline FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& setTicketNos(const vector<string> & ticketNos) { DARABONBA_PTR_SET_VALUE(ticketNos_, ticketNos) };
    inline FlightRefundDetailV2ResponseBodyModuleTravelerInfoDTOS& setTicketNos(vector<string> && ticketNos) { DARABONBA_PTR_SET_RVALUE(ticketNos_, ticketNos) };


  protected:
    std::shared_ptr<string> birthDate_ = nullptr;
    std::shared_ptr<string> certNo_ = nullptr;
    std::shared_ptr<int32_t> certType_ = nullptr;
    std::shared_ptr<int32_t> gender_ = nullptr;
    std::shared_ptr<vector<string>> originTicketNos_ = nullptr;
    std::shared_ptr<string> passengerId_ = nullptr;
    std::shared_ptr<string> passengerName_ = nullptr;
    std::shared_ptr<int32_t> passengerType_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<int64_t> pid_ = nullptr;
    std::shared_ptr<vector<string>> ticketNos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
