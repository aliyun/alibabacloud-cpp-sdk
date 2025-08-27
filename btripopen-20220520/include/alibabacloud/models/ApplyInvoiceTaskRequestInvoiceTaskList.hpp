// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYINVOICETASKREQUESTINVOICETASKLIST_HPP_
#define ALIBABACLOUD_MODELS_APPLYINVOICETASKREQUESTINVOICETASKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyInvoiceTaskRequestInvoiceTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyInvoiceTaskRequestInvoiceTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(contact, contact_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(flight_invoice_fee, flightInvoiceFee_);
      DARABONBA_PTR_TO_JSON(fu_point_invoice_fee, fuPointInvoiceFee_);
      DARABONBA_PTR_TO_JSON(hotel_normal_invoice_fee, hotelNormalInvoiceFee_);
      DARABONBA_PTR_TO_JSON(hotel_special_invoice_fee, hotelSpecialInvoiceFee_);
      DARABONBA_PTR_TO_JSON(international_flight_invoice_fee, internationalFlightInvoiceFee_);
      DARABONBA_PTR_TO_JSON(international_hotel_invoice_fee, internationalHotelInvoiceFee_);
      DARABONBA_PTR_TO_JSON(invoice_third_part_id, invoiceThirdPartId_);
      DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
      DARABONBA_PTR_TO_JSON(mail_address, mailAddress_);
      DARABONBA_PTR_TO_JSON(mail_city, mailCity_);
      DARABONBA_PTR_TO_JSON(mail_full_address, mailFullAddress_);
      DARABONBA_PTR_TO_JSON(mail_province, mailProvince_);
      DARABONBA_PTR_TO_JSON(meal_normal_invoice_fee, mealNormalInvoiceFee_);
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
    friend void from_json(const Darabonba::Json& j, ApplyInvoiceTaskRequestInvoiceTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(contact, contact_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(flight_invoice_fee, flightInvoiceFee_);
      DARABONBA_PTR_FROM_JSON(fu_point_invoice_fee, fuPointInvoiceFee_);
      DARABONBA_PTR_FROM_JSON(hotel_normal_invoice_fee, hotelNormalInvoiceFee_);
      DARABONBA_PTR_FROM_JSON(hotel_special_invoice_fee, hotelSpecialInvoiceFee_);
      DARABONBA_PTR_FROM_JSON(international_flight_invoice_fee, internationalFlightInvoiceFee_);
      DARABONBA_PTR_FROM_JSON(international_hotel_invoice_fee, internationalHotelInvoiceFee_);
      DARABONBA_PTR_FROM_JSON(invoice_third_part_id, invoiceThirdPartId_);
      DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
      DARABONBA_PTR_FROM_JSON(mail_address, mailAddress_);
      DARABONBA_PTR_FROM_JSON(mail_city, mailCity_);
      DARABONBA_PTR_FROM_JSON(mail_full_address, mailFullAddress_);
      DARABONBA_PTR_FROM_JSON(mail_province, mailProvince_);
      DARABONBA_PTR_FROM_JSON(meal_normal_invoice_fee, mealNormalInvoiceFee_);
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
    ApplyInvoiceTaskRequestInvoiceTaskList() = default ;
    ApplyInvoiceTaskRequestInvoiceTaskList(const ApplyInvoiceTaskRequestInvoiceTaskList &) = default ;
    ApplyInvoiceTaskRequestInvoiceTaskList(ApplyInvoiceTaskRequestInvoiceTaskList &&) = default ;
    ApplyInvoiceTaskRequestInvoiceTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyInvoiceTaskRequestInvoiceTaskList() = default ;
    ApplyInvoiceTaskRequestInvoiceTaskList& operator=(const ApplyInvoiceTaskRequestInvoiceTaskList &) = default ;
    ApplyInvoiceTaskRequestInvoiceTaskList& operator=(ApplyInvoiceTaskRequestInvoiceTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contact_ != nullptr
        && this->email_ != nullptr && this->flightInvoiceFee_ != nullptr && this->fuPointInvoiceFee_ != nullptr && this->hotelNormalInvoiceFee_ != nullptr && this->hotelSpecialInvoiceFee_ != nullptr
        && this->internationalFlightInvoiceFee_ != nullptr && this->internationalHotelInvoiceFee_ != nullptr && this->invoiceThirdPartId_ != nullptr && this->invoiceType_ != nullptr && this->mailAddress_ != nullptr
        && this->mailCity_ != nullptr && this->mailFullAddress_ != nullptr && this->mailProvince_ != nullptr && this->mealNormalInvoiceFee_ != nullptr && this->penaltyFee_ != nullptr
        && this->remark_ != nullptr && this->serviceFee_ != nullptr && this->telephone_ != nullptr && this->trainAccelerationPackageInvoiceFee_ != nullptr && this->trainInvoiceFee_ != nullptr
        && this->vacationNormalInvoiceFee_ != nullptr && this->vasMallSpecialInvoiceFee_ != nullptr && this->vehicleInvoiceFee_ != nullptr && this->vehicleNormalInvoiceFee_ != nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline string contact() const { DARABONBA_PTR_GET_DEFAULT(contact_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setContact(string contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // flightInvoiceFee Field Functions 
    bool hasFlightInvoiceFee() const { return this->flightInvoiceFee_ != nullptr;};
    void deleteFlightInvoiceFee() { this->flightInvoiceFee_ = nullptr;};
    inline string flightInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(flightInvoiceFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setFlightInvoiceFee(string flightInvoiceFee) { DARABONBA_PTR_SET_VALUE(flightInvoiceFee_, flightInvoiceFee) };


    // fuPointInvoiceFee Field Functions 
    bool hasFuPointInvoiceFee() const { return this->fuPointInvoiceFee_ != nullptr;};
    void deleteFuPointInvoiceFee() { this->fuPointInvoiceFee_ = nullptr;};
    inline string fuPointInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(fuPointInvoiceFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setFuPointInvoiceFee(string fuPointInvoiceFee) { DARABONBA_PTR_SET_VALUE(fuPointInvoiceFee_, fuPointInvoiceFee) };


    // hotelNormalInvoiceFee Field Functions 
    bool hasHotelNormalInvoiceFee() const { return this->hotelNormalInvoiceFee_ != nullptr;};
    void deleteHotelNormalInvoiceFee() { this->hotelNormalInvoiceFee_ = nullptr;};
    inline string hotelNormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(hotelNormalInvoiceFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setHotelNormalInvoiceFee(string hotelNormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(hotelNormalInvoiceFee_, hotelNormalInvoiceFee) };


    // hotelSpecialInvoiceFee Field Functions 
    bool hasHotelSpecialInvoiceFee() const { return this->hotelSpecialInvoiceFee_ != nullptr;};
    void deleteHotelSpecialInvoiceFee() { this->hotelSpecialInvoiceFee_ = nullptr;};
    inline string hotelSpecialInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(hotelSpecialInvoiceFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setHotelSpecialInvoiceFee(string hotelSpecialInvoiceFee) { DARABONBA_PTR_SET_VALUE(hotelSpecialInvoiceFee_, hotelSpecialInvoiceFee) };


    // internationalFlightInvoiceFee Field Functions 
    bool hasInternationalFlightInvoiceFee() const { return this->internationalFlightInvoiceFee_ != nullptr;};
    void deleteInternationalFlightInvoiceFee() { this->internationalFlightInvoiceFee_ = nullptr;};
    inline string internationalFlightInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(internationalFlightInvoiceFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setInternationalFlightInvoiceFee(string internationalFlightInvoiceFee) { DARABONBA_PTR_SET_VALUE(internationalFlightInvoiceFee_, internationalFlightInvoiceFee) };


    // internationalHotelInvoiceFee Field Functions 
    bool hasInternationalHotelInvoiceFee() const { return this->internationalHotelInvoiceFee_ != nullptr;};
    void deleteInternationalHotelInvoiceFee() { this->internationalHotelInvoiceFee_ = nullptr;};
    inline string internationalHotelInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(internationalHotelInvoiceFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setInternationalHotelInvoiceFee(string internationalHotelInvoiceFee) { DARABONBA_PTR_SET_VALUE(internationalHotelInvoiceFee_, internationalHotelInvoiceFee) };


    // invoiceThirdPartId Field Functions 
    bool hasInvoiceThirdPartId() const { return this->invoiceThirdPartId_ != nullptr;};
    void deleteInvoiceThirdPartId() { this->invoiceThirdPartId_ = nullptr;};
    inline string invoiceThirdPartId() const { DARABONBA_PTR_GET_DEFAULT(invoiceThirdPartId_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setInvoiceThirdPartId(string invoiceThirdPartId) { DARABONBA_PTR_SET_VALUE(invoiceThirdPartId_, invoiceThirdPartId) };


    // invoiceType Field Functions 
    bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
    void deleteInvoiceType() { this->invoiceType_ = nullptr;};
    inline int32_t invoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


    // mailAddress Field Functions 
    bool hasMailAddress() const { return this->mailAddress_ != nullptr;};
    void deleteMailAddress() { this->mailAddress_ = nullptr;};
    inline string mailAddress() const { DARABONBA_PTR_GET_DEFAULT(mailAddress_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setMailAddress(string mailAddress) { DARABONBA_PTR_SET_VALUE(mailAddress_, mailAddress) };


    // mailCity Field Functions 
    bool hasMailCity() const { return this->mailCity_ != nullptr;};
    void deleteMailCity() { this->mailCity_ = nullptr;};
    inline string mailCity() const { DARABONBA_PTR_GET_DEFAULT(mailCity_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setMailCity(string mailCity) { DARABONBA_PTR_SET_VALUE(mailCity_, mailCity) };


    // mailFullAddress Field Functions 
    bool hasMailFullAddress() const { return this->mailFullAddress_ != nullptr;};
    void deleteMailFullAddress() { this->mailFullAddress_ = nullptr;};
    inline string mailFullAddress() const { DARABONBA_PTR_GET_DEFAULT(mailFullAddress_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setMailFullAddress(string mailFullAddress) { DARABONBA_PTR_SET_VALUE(mailFullAddress_, mailFullAddress) };


    // mailProvince Field Functions 
    bool hasMailProvince() const { return this->mailProvince_ != nullptr;};
    void deleteMailProvince() { this->mailProvince_ = nullptr;};
    inline string mailProvince() const { DARABONBA_PTR_GET_DEFAULT(mailProvince_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setMailProvince(string mailProvince) { DARABONBA_PTR_SET_VALUE(mailProvince_, mailProvince) };


    // mealNormalInvoiceFee Field Functions 
    bool hasMealNormalInvoiceFee() const { return this->mealNormalInvoiceFee_ != nullptr;};
    void deleteMealNormalInvoiceFee() { this->mealNormalInvoiceFee_ = nullptr;};
    inline string mealNormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(mealNormalInvoiceFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setMealNormalInvoiceFee(string mealNormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(mealNormalInvoiceFee_, mealNormalInvoiceFee) };


    // penaltyFee Field Functions 
    bool hasPenaltyFee() const { return this->penaltyFee_ != nullptr;};
    void deletePenaltyFee() { this->penaltyFee_ = nullptr;};
    inline string penaltyFee() const { DARABONBA_PTR_GET_DEFAULT(penaltyFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setPenaltyFee(string penaltyFee) { DARABONBA_PTR_SET_VALUE(penaltyFee_, penaltyFee) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // serviceFee Field Functions 
    bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
    void deleteServiceFee() { this->serviceFee_ = nullptr;};
    inline string serviceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setServiceFee(string serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string telephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // trainAccelerationPackageInvoiceFee Field Functions 
    bool hasTrainAccelerationPackageInvoiceFee() const { return this->trainAccelerationPackageInvoiceFee_ != nullptr;};
    void deleteTrainAccelerationPackageInvoiceFee() { this->trainAccelerationPackageInvoiceFee_ = nullptr;};
    inline string trainAccelerationPackageInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(trainAccelerationPackageInvoiceFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setTrainAccelerationPackageInvoiceFee(string trainAccelerationPackageInvoiceFee) { DARABONBA_PTR_SET_VALUE(trainAccelerationPackageInvoiceFee_, trainAccelerationPackageInvoiceFee) };


    // trainInvoiceFee Field Functions 
    bool hasTrainInvoiceFee() const { return this->trainInvoiceFee_ != nullptr;};
    void deleteTrainInvoiceFee() { this->trainInvoiceFee_ = nullptr;};
    inline string trainInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(trainInvoiceFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setTrainInvoiceFee(string trainInvoiceFee) { DARABONBA_PTR_SET_VALUE(trainInvoiceFee_, trainInvoiceFee) };


    // vacationNormalInvoiceFee Field Functions 
    bool hasVacationNormalInvoiceFee() const { return this->vacationNormalInvoiceFee_ != nullptr;};
    void deleteVacationNormalInvoiceFee() { this->vacationNormalInvoiceFee_ = nullptr;};
    inline string vacationNormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(vacationNormalInvoiceFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setVacationNormalInvoiceFee(string vacationNormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(vacationNormalInvoiceFee_, vacationNormalInvoiceFee) };


    // vasMallSpecialInvoiceFee Field Functions 
    bool hasVasMallSpecialInvoiceFee() const { return this->vasMallSpecialInvoiceFee_ != nullptr;};
    void deleteVasMallSpecialInvoiceFee() { this->vasMallSpecialInvoiceFee_ = nullptr;};
    inline string vasMallSpecialInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(vasMallSpecialInvoiceFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setVasMallSpecialInvoiceFee(string vasMallSpecialInvoiceFee) { DARABONBA_PTR_SET_VALUE(vasMallSpecialInvoiceFee_, vasMallSpecialInvoiceFee) };


    // vehicleInvoiceFee Field Functions 
    bool hasVehicleInvoiceFee() const { return this->vehicleInvoiceFee_ != nullptr;};
    void deleteVehicleInvoiceFee() { this->vehicleInvoiceFee_ = nullptr;};
    inline string vehicleInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(vehicleInvoiceFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setVehicleInvoiceFee(string vehicleInvoiceFee) { DARABONBA_PTR_SET_VALUE(vehicleInvoiceFee_, vehicleInvoiceFee) };


    // vehicleNormalInvoiceFee Field Functions 
    bool hasVehicleNormalInvoiceFee() const { return this->vehicleNormalInvoiceFee_ != nullptr;};
    void deleteVehicleNormalInvoiceFee() { this->vehicleNormalInvoiceFee_ = nullptr;};
    inline string vehicleNormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(vehicleNormalInvoiceFee_, "") };
    inline ApplyInvoiceTaskRequestInvoiceTaskList& setVehicleNormalInvoiceFee(string vehicleNormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(vehicleNormalInvoiceFee_, vehicleNormalInvoiceFee) };


  protected:
    std::shared_ptr<string> contact_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> flightInvoiceFee_ = nullptr;
    std::shared_ptr<string> fuPointInvoiceFee_ = nullptr;
    std::shared_ptr<string> hotelNormalInvoiceFee_ = nullptr;
    std::shared_ptr<string> hotelSpecialInvoiceFee_ = nullptr;
    std::shared_ptr<string> internationalFlightInvoiceFee_ = nullptr;
    std::shared_ptr<string> internationalHotelInvoiceFee_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> invoiceThirdPartId_ = nullptr;
    std::shared_ptr<int32_t> invoiceType_ = nullptr;
    std::shared_ptr<string> mailAddress_ = nullptr;
    std::shared_ptr<string> mailCity_ = nullptr;
    std::shared_ptr<string> mailFullAddress_ = nullptr;
    std::shared_ptr<string> mailProvince_ = nullptr;
    std::shared_ptr<string> mealNormalInvoiceFee_ = nullptr;
    std::shared_ptr<string> penaltyFee_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> serviceFee_ = nullptr;
    std::shared_ptr<string> telephone_ = nullptr;
    std::shared_ptr<string> trainAccelerationPackageInvoiceFee_ = nullptr;
    std::shared_ptr<string> trainInvoiceFee_ = nullptr;
    std::shared_ptr<string> vacationNormalInvoiceFee_ = nullptr;
    std::shared_ptr<string> vasMallSpecialInvoiceFee_ = nullptr;
    std::shared_ptr<string> vehicleInvoiceFee_ = nullptr;
    std::shared_ptr<string> vehicleNormalInvoiceFee_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
