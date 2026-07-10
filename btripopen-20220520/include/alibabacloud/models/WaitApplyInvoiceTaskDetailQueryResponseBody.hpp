// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAITAPPLYINVOICETASKDETAILQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_WAITAPPLYINVOICETASKDETAILQUERYRESPONSEBODY_HPP_
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
  class WaitApplyInvoiceTaskDetailQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WaitApplyInvoiceTaskDetailQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, WaitApplyInvoiceTaskDetailQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    WaitApplyInvoiceTaskDetailQueryResponseBody() = default ;
    WaitApplyInvoiceTaskDetailQueryResponseBody(const WaitApplyInvoiceTaskDetailQueryResponseBody &) = default ;
    WaitApplyInvoiceTaskDetailQueryResponseBody(WaitApplyInvoiceTaskDetailQueryResponseBody &&) = default ;
    WaitApplyInvoiceTaskDetailQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WaitApplyInvoiceTaskDetailQueryResponseBody() = default ;
    WaitApplyInvoiceTaskDetailQueryResponseBody& operator=(const WaitApplyInvoiceTaskDetailQueryResponseBody &) = default ;
    WaitApplyInvoiceTaskDetailQueryResponseBody& operator=(WaitApplyInvoiceTaskDetailQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(contact, contact_);
        DARABONBA_PTR_TO_JSON(email, email_);
        DARABONBA_PTR_TO_JSON(flight_invoice_fee, flightInvoiceFee_);
        DARABONBA_PTR_TO_JSON(fu_point_invoice_fee, fuPointInvoiceFee_);
        DARABONBA_PTR_TO_JSON(hotel_normal_invoice_fee, hotelNormalInvoiceFee_);
        DARABONBA_PTR_TO_JSON(hotel_special_invoice_fee, hotelSpecialInvoiceFee_);
        DARABONBA_PTR_TO_JSON(ie_vehicle_normal_invoice_fee, ieVehicleNormalInvoiceFee_);
        DARABONBA_PTR_TO_JSON(international_flight_invoice_fee, internationalFlightInvoiceFee_);
        DARABONBA_PTR_TO_JSON(international_hotel_invoice_fee, internationalHotelInvoiceFee_);
        DARABONBA_PTR_TO_JSON(invoice_third_part_id, invoiceThirdPartId_);
        DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
        DARABONBA_PTR_TO_JSON(mail_address, mailAddress_);
        DARABONBA_PTR_TO_JSON(mail_city, mailCity_);
        DARABONBA_PTR_TO_JSON(mail_full_address, mailFullAddress_);
        DARABONBA_PTR_TO_JSON(mail_province, mailProvince_);
        DARABONBA_PTR_TO_JSON(meal_normal_invoice_fee, mealNormalInvoiceFee_);
        DARABONBA_PTR_TO_JSON(meal_tc7_normal_invoice_fee, mealTc7NormalInvoiceFee_);
        DARABONBA_PTR_TO_JSON(penalty_fee, penaltyFee_);
        DARABONBA_PTR_TO_JSON(remark, remark_);
        DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
        DARABONBA_PTR_TO_JSON(telephone, telephone_);
        DARABONBA_PTR_TO_JSON(train_acceleration_package_invoice_fee, trainAccelerationPackageInvoiceFee_);
        DARABONBA_PTR_TO_JSON(train_invoice_fee, trainInvoiceFee_);
        DARABONBA_PTR_TO_JSON(vacation_normal_invoice_fee, vacationNormalInvoiceFee_);
        DARABONBA_PTR_TO_JSON(vas_mall_special_invoice_fee, vasMallSpecialInvoiceFee_);
        DARABONBA_PTR_TO_JSON(vehicle_invoice_fee, vehicleInvoiceFee_);
        DARABONBA_PTR_TO_JSON(vehicle_normal_invoice_fee, vehicleNormalInvoiceFee_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(contact, contact_);
        DARABONBA_PTR_FROM_JSON(email, email_);
        DARABONBA_PTR_FROM_JSON(flight_invoice_fee, flightInvoiceFee_);
        DARABONBA_PTR_FROM_JSON(fu_point_invoice_fee, fuPointInvoiceFee_);
        DARABONBA_PTR_FROM_JSON(hotel_normal_invoice_fee, hotelNormalInvoiceFee_);
        DARABONBA_PTR_FROM_JSON(hotel_special_invoice_fee, hotelSpecialInvoiceFee_);
        DARABONBA_PTR_FROM_JSON(ie_vehicle_normal_invoice_fee, ieVehicleNormalInvoiceFee_);
        DARABONBA_PTR_FROM_JSON(international_flight_invoice_fee, internationalFlightInvoiceFee_);
        DARABONBA_PTR_FROM_JSON(international_hotel_invoice_fee, internationalHotelInvoiceFee_);
        DARABONBA_PTR_FROM_JSON(invoice_third_part_id, invoiceThirdPartId_);
        DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
        DARABONBA_PTR_FROM_JSON(mail_address, mailAddress_);
        DARABONBA_PTR_FROM_JSON(mail_city, mailCity_);
        DARABONBA_PTR_FROM_JSON(mail_full_address, mailFullAddress_);
        DARABONBA_PTR_FROM_JSON(mail_province, mailProvince_);
        DARABONBA_PTR_FROM_JSON(meal_normal_invoice_fee, mealNormalInvoiceFee_);
        DARABONBA_PTR_FROM_JSON(meal_tc7_normal_invoice_fee, mealTc7NormalInvoiceFee_);
        DARABONBA_PTR_FROM_JSON(penalty_fee, penaltyFee_);
        DARABONBA_PTR_FROM_JSON(remark, remark_);
        DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
        DARABONBA_PTR_FROM_JSON(telephone, telephone_);
        DARABONBA_PTR_FROM_JSON(train_acceleration_package_invoice_fee, trainAccelerationPackageInvoiceFee_);
        DARABONBA_PTR_FROM_JSON(train_invoice_fee, trainInvoiceFee_);
        DARABONBA_PTR_FROM_JSON(vacation_normal_invoice_fee, vacationNormalInvoiceFee_);
        DARABONBA_PTR_FROM_JSON(vas_mall_special_invoice_fee, vasMallSpecialInvoiceFee_);
        DARABONBA_PTR_FROM_JSON(vehicle_invoice_fee, vehicleInvoiceFee_);
        DARABONBA_PTR_FROM_JSON(vehicle_normal_invoice_fee, vehicleNormalInvoiceFee_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contact_ == nullptr
        && this->email_ == nullptr && this->flightInvoiceFee_ == nullptr && this->fuPointInvoiceFee_ == nullptr && this->hotelNormalInvoiceFee_ == nullptr && this->hotelSpecialInvoiceFee_ == nullptr
        && this->ieVehicleNormalInvoiceFee_ == nullptr && this->internationalFlightInvoiceFee_ == nullptr && this->internationalHotelInvoiceFee_ == nullptr && this->invoiceThirdPartId_ == nullptr && this->invoiceTitle_ == nullptr
        && this->mailAddress_ == nullptr && this->mailCity_ == nullptr && this->mailFullAddress_ == nullptr && this->mailProvince_ == nullptr && this->mealNormalInvoiceFee_ == nullptr
        && this->mealTc7NormalInvoiceFee_ == nullptr && this->penaltyFee_ == nullptr && this->remark_ == nullptr && this->serviceFee_ == nullptr && this->telephone_ == nullptr
        && this->trainAccelerationPackageInvoiceFee_ == nullptr && this->trainInvoiceFee_ == nullptr && this->vacationNormalInvoiceFee_ == nullptr && this->vasMallSpecialInvoiceFee_ == nullptr && this->vehicleInvoiceFee_ == nullptr
        && this->vehicleNormalInvoiceFee_ == nullptr; };
      // contact Field Functions 
      bool hasContact() const { return this->contact_ != nullptr;};
      void deleteContact() { this->contact_ = nullptr;};
      inline string getContact() const { DARABONBA_PTR_GET_DEFAULT(contact_, "") };
      inline Module& setContact(string contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Module& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // flightInvoiceFee Field Functions 
      bool hasFlightInvoiceFee() const { return this->flightInvoiceFee_ != nullptr;};
      void deleteFlightInvoiceFee() { this->flightInvoiceFee_ = nullptr;};
      inline string getFlightInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(flightInvoiceFee_, "") };
      inline Module& setFlightInvoiceFee(string flightInvoiceFee) { DARABONBA_PTR_SET_VALUE(flightInvoiceFee_, flightInvoiceFee) };


      // fuPointInvoiceFee Field Functions 
      bool hasFuPointInvoiceFee() const { return this->fuPointInvoiceFee_ != nullptr;};
      void deleteFuPointInvoiceFee() { this->fuPointInvoiceFee_ = nullptr;};
      inline string getFuPointInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(fuPointInvoiceFee_, "") };
      inline Module& setFuPointInvoiceFee(string fuPointInvoiceFee) { DARABONBA_PTR_SET_VALUE(fuPointInvoiceFee_, fuPointInvoiceFee) };


      // hotelNormalInvoiceFee Field Functions 
      bool hasHotelNormalInvoiceFee() const { return this->hotelNormalInvoiceFee_ != nullptr;};
      void deleteHotelNormalInvoiceFee() { this->hotelNormalInvoiceFee_ = nullptr;};
      inline string getHotelNormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(hotelNormalInvoiceFee_, "") };
      inline Module& setHotelNormalInvoiceFee(string hotelNormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(hotelNormalInvoiceFee_, hotelNormalInvoiceFee) };


      // hotelSpecialInvoiceFee Field Functions 
      bool hasHotelSpecialInvoiceFee() const { return this->hotelSpecialInvoiceFee_ != nullptr;};
      void deleteHotelSpecialInvoiceFee() { this->hotelSpecialInvoiceFee_ = nullptr;};
      inline string getHotelSpecialInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(hotelSpecialInvoiceFee_, "") };
      inline Module& setHotelSpecialInvoiceFee(string hotelSpecialInvoiceFee) { DARABONBA_PTR_SET_VALUE(hotelSpecialInvoiceFee_, hotelSpecialInvoiceFee) };


      // ieVehicleNormalInvoiceFee Field Functions 
      bool hasIeVehicleNormalInvoiceFee() const { return this->ieVehicleNormalInvoiceFee_ != nullptr;};
      void deleteIeVehicleNormalInvoiceFee() { this->ieVehicleNormalInvoiceFee_ = nullptr;};
      inline string getIeVehicleNormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(ieVehicleNormalInvoiceFee_, "") };
      inline Module& setIeVehicleNormalInvoiceFee(string ieVehicleNormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(ieVehicleNormalInvoiceFee_, ieVehicleNormalInvoiceFee) };


      // internationalFlightInvoiceFee Field Functions 
      bool hasInternationalFlightInvoiceFee() const { return this->internationalFlightInvoiceFee_ != nullptr;};
      void deleteInternationalFlightInvoiceFee() { this->internationalFlightInvoiceFee_ = nullptr;};
      inline string getInternationalFlightInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(internationalFlightInvoiceFee_, "") };
      inline Module& setInternationalFlightInvoiceFee(string internationalFlightInvoiceFee) { DARABONBA_PTR_SET_VALUE(internationalFlightInvoiceFee_, internationalFlightInvoiceFee) };


      // internationalHotelInvoiceFee Field Functions 
      bool hasInternationalHotelInvoiceFee() const { return this->internationalHotelInvoiceFee_ != nullptr;};
      void deleteInternationalHotelInvoiceFee() { this->internationalHotelInvoiceFee_ = nullptr;};
      inline string getInternationalHotelInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(internationalHotelInvoiceFee_, "") };
      inline Module& setInternationalHotelInvoiceFee(string internationalHotelInvoiceFee) { DARABONBA_PTR_SET_VALUE(internationalHotelInvoiceFee_, internationalHotelInvoiceFee) };


      // invoiceThirdPartId Field Functions 
      bool hasInvoiceThirdPartId() const { return this->invoiceThirdPartId_ != nullptr;};
      void deleteInvoiceThirdPartId() { this->invoiceThirdPartId_ = nullptr;};
      inline string getInvoiceThirdPartId() const { DARABONBA_PTR_GET_DEFAULT(invoiceThirdPartId_, "") };
      inline Module& setInvoiceThirdPartId(string invoiceThirdPartId) { DARABONBA_PTR_SET_VALUE(invoiceThirdPartId_, invoiceThirdPartId) };


      // invoiceTitle Field Functions 
      bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
      void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
      inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
      inline Module& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


      // mailAddress Field Functions 
      bool hasMailAddress() const { return this->mailAddress_ != nullptr;};
      void deleteMailAddress() { this->mailAddress_ = nullptr;};
      inline string getMailAddress() const { DARABONBA_PTR_GET_DEFAULT(mailAddress_, "") };
      inline Module& setMailAddress(string mailAddress) { DARABONBA_PTR_SET_VALUE(mailAddress_, mailAddress) };


      // mailCity Field Functions 
      bool hasMailCity() const { return this->mailCity_ != nullptr;};
      void deleteMailCity() { this->mailCity_ = nullptr;};
      inline string getMailCity() const { DARABONBA_PTR_GET_DEFAULT(mailCity_, "") };
      inline Module& setMailCity(string mailCity) { DARABONBA_PTR_SET_VALUE(mailCity_, mailCity) };


      // mailFullAddress Field Functions 
      bool hasMailFullAddress() const { return this->mailFullAddress_ != nullptr;};
      void deleteMailFullAddress() { this->mailFullAddress_ = nullptr;};
      inline string getMailFullAddress() const { DARABONBA_PTR_GET_DEFAULT(mailFullAddress_, "") };
      inline Module& setMailFullAddress(string mailFullAddress) { DARABONBA_PTR_SET_VALUE(mailFullAddress_, mailFullAddress) };


      // mailProvince Field Functions 
      bool hasMailProvince() const { return this->mailProvince_ != nullptr;};
      void deleteMailProvince() { this->mailProvince_ = nullptr;};
      inline string getMailProvince() const { DARABONBA_PTR_GET_DEFAULT(mailProvince_, "") };
      inline Module& setMailProvince(string mailProvince) { DARABONBA_PTR_SET_VALUE(mailProvince_, mailProvince) };


      // mealNormalInvoiceFee Field Functions 
      bool hasMealNormalInvoiceFee() const { return this->mealNormalInvoiceFee_ != nullptr;};
      void deleteMealNormalInvoiceFee() { this->mealNormalInvoiceFee_ = nullptr;};
      inline string getMealNormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(mealNormalInvoiceFee_, "") };
      inline Module& setMealNormalInvoiceFee(string mealNormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(mealNormalInvoiceFee_, mealNormalInvoiceFee) };


      // mealTc7NormalInvoiceFee Field Functions 
      bool hasMealTc7NormalInvoiceFee() const { return this->mealTc7NormalInvoiceFee_ != nullptr;};
      void deleteMealTc7NormalInvoiceFee() { this->mealTc7NormalInvoiceFee_ = nullptr;};
      inline string getMealTc7NormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(mealTc7NormalInvoiceFee_, "") };
      inline Module& setMealTc7NormalInvoiceFee(string mealTc7NormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(mealTc7NormalInvoiceFee_, mealTc7NormalInvoiceFee) };


      // penaltyFee Field Functions 
      bool hasPenaltyFee() const { return this->penaltyFee_ != nullptr;};
      void deletePenaltyFee() { this->penaltyFee_ = nullptr;};
      inline string getPenaltyFee() const { DARABONBA_PTR_GET_DEFAULT(penaltyFee_, "") };
      inline Module& setPenaltyFee(string penaltyFee) { DARABONBA_PTR_SET_VALUE(penaltyFee_, penaltyFee) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Module& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // serviceFee Field Functions 
      bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
      void deleteServiceFee() { this->serviceFee_ = nullptr;};
      inline string getServiceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, "") };
      inline Module& setServiceFee(string serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


      // telephone Field Functions 
      bool hasTelephone() const { return this->telephone_ != nullptr;};
      void deleteTelephone() { this->telephone_ = nullptr;};
      inline string getTelephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
      inline Module& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


      // trainAccelerationPackageInvoiceFee Field Functions 
      bool hasTrainAccelerationPackageInvoiceFee() const { return this->trainAccelerationPackageInvoiceFee_ != nullptr;};
      void deleteTrainAccelerationPackageInvoiceFee() { this->trainAccelerationPackageInvoiceFee_ = nullptr;};
      inline string getTrainAccelerationPackageInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(trainAccelerationPackageInvoiceFee_, "") };
      inline Module& setTrainAccelerationPackageInvoiceFee(string trainAccelerationPackageInvoiceFee) { DARABONBA_PTR_SET_VALUE(trainAccelerationPackageInvoiceFee_, trainAccelerationPackageInvoiceFee) };


      // trainInvoiceFee Field Functions 
      bool hasTrainInvoiceFee() const { return this->trainInvoiceFee_ != nullptr;};
      void deleteTrainInvoiceFee() { this->trainInvoiceFee_ = nullptr;};
      inline string getTrainInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(trainInvoiceFee_, "") };
      inline Module& setTrainInvoiceFee(string trainInvoiceFee) { DARABONBA_PTR_SET_VALUE(trainInvoiceFee_, trainInvoiceFee) };


      // vacationNormalInvoiceFee Field Functions 
      bool hasVacationNormalInvoiceFee() const { return this->vacationNormalInvoiceFee_ != nullptr;};
      void deleteVacationNormalInvoiceFee() { this->vacationNormalInvoiceFee_ = nullptr;};
      inline string getVacationNormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(vacationNormalInvoiceFee_, "") };
      inline Module& setVacationNormalInvoiceFee(string vacationNormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(vacationNormalInvoiceFee_, vacationNormalInvoiceFee) };


      // vasMallSpecialInvoiceFee Field Functions 
      bool hasVasMallSpecialInvoiceFee() const { return this->vasMallSpecialInvoiceFee_ != nullptr;};
      void deleteVasMallSpecialInvoiceFee() { this->vasMallSpecialInvoiceFee_ = nullptr;};
      inline string getVasMallSpecialInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(vasMallSpecialInvoiceFee_, "") };
      inline Module& setVasMallSpecialInvoiceFee(string vasMallSpecialInvoiceFee) { DARABONBA_PTR_SET_VALUE(vasMallSpecialInvoiceFee_, vasMallSpecialInvoiceFee) };


      // vehicleInvoiceFee Field Functions 
      bool hasVehicleInvoiceFee() const { return this->vehicleInvoiceFee_ != nullptr;};
      void deleteVehicleInvoiceFee() { this->vehicleInvoiceFee_ = nullptr;};
      inline string getVehicleInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(vehicleInvoiceFee_, "") };
      inline Module& setVehicleInvoiceFee(string vehicleInvoiceFee) { DARABONBA_PTR_SET_VALUE(vehicleInvoiceFee_, vehicleInvoiceFee) };


      // vehicleNormalInvoiceFee Field Functions 
      bool hasVehicleNormalInvoiceFee() const { return this->vehicleNormalInvoiceFee_ != nullptr;};
      void deleteVehicleNormalInvoiceFee() { this->vehicleNormalInvoiceFee_ = nullptr;};
      inline string getVehicleNormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(vehicleNormalInvoiceFee_, "") };
      inline Module& setVehicleNormalInvoiceFee(string vehicleNormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(vehicleNormalInvoiceFee_, vehicleNormalInvoiceFee) };


    protected:
      shared_ptr<string> contact_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> flightInvoiceFee_ {};
      shared_ptr<string> fuPointInvoiceFee_ {};
      shared_ptr<string> hotelNormalInvoiceFee_ {};
      shared_ptr<string> hotelSpecialInvoiceFee_ {};
      shared_ptr<string> ieVehicleNormalInvoiceFee_ {};
      shared_ptr<string> internationalFlightInvoiceFee_ {};
      shared_ptr<string> internationalHotelInvoiceFee_ {};
      shared_ptr<string> invoiceThirdPartId_ {};
      shared_ptr<string> invoiceTitle_ {};
      shared_ptr<string> mailAddress_ {};
      shared_ptr<string> mailCity_ {};
      shared_ptr<string> mailFullAddress_ {};
      shared_ptr<string> mailProvince_ {};
      shared_ptr<string> mealNormalInvoiceFee_ {};
      shared_ptr<string> mealTc7NormalInvoiceFee_ {};
      shared_ptr<string> penaltyFee_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<string> serviceFee_ {};
      shared_ptr<string> telephone_ {};
      shared_ptr<string> trainAccelerationPackageInvoiceFee_ {};
      shared_ptr<string> trainInvoiceFee_ {};
      shared_ptr<string> vacationNormalInvoiceFee_ {};
      shared_ptr<string> vasMallSpecialInvoiceFee_ {};
      shared_ptr<string> vehicleInvoiceFee_ {};
      shared_ptr<string> vehicleNormalInvoiceFee_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline WaitApplyInvoiceTaskDetailQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline WaitApplyInvoiceTaskDetailQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<WaitApplyInvoiceTaskDetailQueryResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<WaitApplyInvoiceTaskDetailQueryResponseBody::Module>) };
    inline vector<WaitApplyInvoiceTaskDetailQueryResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<WaitApplyInvoiceTaskDetailQueryResponseBody::Module>) };
    inline WaitApplyInvoiceTaskDetailQueryResponseBody& setModule(const vector<WaitApplyInvoiceTaskDetailQueryResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline WaitApplyInvoiceTaskDetailQueryResponseBody& setModule(vector<WaitApplyInvoiceTaskDetailQueryResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline WaitApplyInvoiceTaskDetailQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline WaitApplyInvoiceTaskDetailQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline WaitApplyInvoiceTaskDetailQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<WaitApplyInvoiceTaskDetailQueryResponseBody::Module>> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
