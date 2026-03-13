// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYINVOICETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYINVOICETASKREQUEST_HPP_
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
  class ApplyInvoiceTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyInvoiceTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bill_date, billDate_);
      DARABONBA_PTR_TO_JSON(invoice_task_list, invoiceTaskList_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyInvoiceTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bill_date, billDate_);
      DARABONBA_PTR_FROM_JSON(invoice_task_list, invoiceTaskList_);
    };
    ApplyInvoiceTaskRequest() = default ;
    ApplyInvoiceTaskRequest(const ApplyInvoiceTaskRequest &) = default ;
    ApplyInvoiceTaskRequest(ApplyInvoiceTaskRequest &&) = default ;
    ApplyInvoiceTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyInvoiceTaskRequest() = default ;
    ApplyInvoiceTaskRequest& operator=(const ApplyInvoiceTaskRequest &) = default ;
    ApplyInvoiceTaskRequest& operator=(ApplyInvoiceTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InvoiceTaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InvoiceTaskList& obj) { 
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
        DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
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
      friend void from_json(const Darabonba::Json& j, InvoiceTaskList& obj) { 
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
        DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
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
      InvoiceTaskList() = default ;
      InvoiceTaskList(const InvoiceTaskList &) = default ;
      InvoiceTaskList(InvoiceTaskList &&) = default ;
      InvoiceTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InvoiceTaskList() = default ;
      InvoiceTaskList& operator=(const InvoiceTaskList &) = default ;
      InvoiceTaskList& operator=(InvoiceTaskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contact_ == nullptr
        && this->email_ == nullptr && this->flightInvoiceFee_ == nullptr && this->fuPointInvoiceFee_ == nullptr && this->hotelNormalInvoiceFee_ == nullptr && this->hotelSpecialInvoiceFee_ == nullptr
        && this->ieVehicleNormalInvoiceFee_ == nullptr && this->internationalFlightInvoiceFee_ == nullptr && this->internationalHotelInvoiceFee_ == nullptr && this->invoiceThirdPartId_ == nullptr && this->invoiceType_ == nullptr
        && this->mailAddress_ == nullptr && this->mailCity_ == nullptr && this->mailFullAddress_ == nullptr && this->mailProvince_ == nullptr && this->mealNormalInvoiceFee_ == nullptr
        && this->mealTc7NormalInvoiceFee_ == nullptr && this->penaltyFee_ == nullptr && this->remark_ == nullptr && this->serviceFee_ == nullptr && this->telephone_ == nullptr
        && this->trainAccelerationPackageInvoiceFee_ == nullptr && this->trainInvoiceFee_ == nullptr && this->vacationNormalInvoiceFee_ == nullptr && this->vasMallSpecialInvoiceFee_ == nullptr && this->vehicleInvoiceFee_ == nullptr
        && this->vehicleNormalInvoiceFee_ == nullptr; };
      // contact Field Functions 
      bool hasContact() const { return this->contact_ != nullptr;};
      void deleteContact() { this->contact_ = nullptr;};
      inline string getContact() const { DARABONBA_PTR_GET_DEFAULT(contact_, "") };
      inline InvoiceTaskList& setContact(string contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline InvoiceTaskList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // flightInvoiceFee Field Functions 
      bool hasFlightInvoiceFee() const { return this->flightInvoiceFee_ != nullptr;};
      void deleteFlightInvoiceFee() { this->flightInvoiceFee_ = nullptr;};
      inline string getFlightInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(flightInvoiceFee_, "") };
      inline InvoiceTaskList& setFlightInvoiceFee(string flightInvoiceFee) { DARABONBA_PTR_SET_VALUE(flightInvoiceFee_, flightInvoiceFee) };


      // fuPointInvoiceFee Field Functions 
      bool hasFuPointInvoiceFee() const { return this->fuPointInvoiceFee_ != nullptr;};
      void deleteFuPointInvoiceFee() { this->fuPointInvoiceFee_ = nullptr;};
      inline string getFuPointInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(fuPointInvoiceFee_, "") };
      inline InvoiceTaskList& setFuPointInvoiceFee(string fuPointInvoiceFee) { DARABONBA_PTR_SET_VALUE(fuPointInvoiceFee_, fuPointInvoiceFee) };


      // hotelNormalInvoiceFee Field Functions 
      bool hasHotelNormalInvoiceFee() const { return this->hotelNormalInvoiceFee_ != nullptr;};
      void deleteHotelNormalInvoiceFee() { this->hotelNormalInvoiceFee_ = nullptr;};
      inline string getHotelNormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(hotelNormalInvoiceFee_, "") };
      inline InvoiceTaskList& setHotelNormalInvoiceFee(string hotelNormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(hotelNormalInvoiceFee_, hotelNormalInvoiceFee) };


      // hotelSpecialInvoiceFee Field Functions 
      bool hasHotelSpecialInvoiceFee() const { return this->hotelSpecialInvoiceFee_ != nullptr;};
      void deleteHotelSpecialInvoiceFee() { this->hotelSpecialInvoiceFee_ = nullptr;};
      inline string getHotelSpecialInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(hotelSpecialInvoiceFee_, "") };
      inline InvoiceTaskList& setHotelSpecialInvoiceFee(string hotelSpecialInvoiceFee) { DARABONBA_PTR_SET_VALUE(hotelSpecialInvoiceFee_, hotelSpecialInvoiceFee) };


      // ieVehicleNormalInvoiceFee Field Functions 
      bool hasIeVehicleNormalInvoiceFee() const { return this->ieVehicleNormalInvoiceFee_ != nullptr;};
      void deleteIeVehicleNormalInvoiceFee() { this->ieVehicleNormalInvoiceFee_ = nullptr;};
      inline string getIeVehicleNormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(ieVehicleNormalInvoiceFee_, "") };
      inline InvoiceTaskList& setIeVehicleNormalInvoiceFee(string ieVehicleNormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(ieVehicleNormalInvoiceFee_, ieVehicleNormalInvoiceFee) };


      // internationalFlightInvoiceFee Field Functions 
      bool hasInternationalFlightInvoiceFee() const { return this->internationalFlightInvoiceFee_ != nullptr;};
      void deleteInternationalFlightInvoiceFee() { this->internationalFlightInvoiceFee_ = nullptr;};
      inline string getInternationalFlightInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(internationalFlightInvoiceFee_, "") };
      inline InvoiceTaskList& setInternationalFlightInvoiceFee(string internationalFlightInvoiceFee) { DARABONBA_PTR_SET_VALUE(internationalFlightInvoiceFee_, internationalFlightInvoiceFee) };


      // internationalHotelInvoiceFee Field Functions 
      bool hasInternationalHotelInvoiceFee() const { return this->internationalHotelInvoiceFee_ != nullptr;};
      void deleteInternationalHotelInvoiceFee() { this->internationalHotelInvoiceFee_ = nullptr;};
      inline string getInternationalHotelInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(internationalHotelInvoiceFee_, "") };
      inline InvoiceTaskList& setInternationalHotelInvoiceFee(string internationalHotelInvoiceFee) { DARABONBA_PTR_SET_VALUE(internationalHotelInvoiceFee_, internationalHotelInvoiceFee) };


      // invoiceThirdPartId Field Functions 
      bool hasInvoiceThirdPartId() const { return this->invoiceThirdPartId_ != nullptr;};
      void deleteInvoiceThirdPartId() { this->invoiceThirdPartId_ = nullptr;};
      inline string getInvoiceThirdPartId() const { DARABONBA_PTR_GET_DEFAULT(invoiceThirdPartId_, "") };
      inline InvoiceTaskList& setInvoiceThirdPartId(string invoiceThirdPartId) { DARABONBA_PTR_SET_VALUE(invoiceThirdPartId_, invoiceThirdPartId) };


      // invoiceType Field Functions 
      bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
      void deleteInvoiceType() { this->invoiceType_ = nullptr;};
      inline int32_t getInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
      inline InvoiceTaskList& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


      // mailAddress Field Functions 
      bool hasMailAddress() const { return this->mailAddress_ != nullptr;};
      void deleteMailAddress() { this->mailAddress_ = nullptr;};
      inline string getMailAddress() const { DARABONBA_PTR_GET_DEFAULT(mailAddress_, "") };
      inline InvoiceTaskList& setMailAddress(string mailAddress) { DARABONBA_PTR_SET_VALUE(mailAddress_, mailAddress) };


      // mailCity Field Functions 
      bool hasMailCity() const { return this->mailCity_ != nullptr;};
      void deleteMailCity() { this->mailCity_ = nullptr;};
      inline string getMailCity() const { DARABONBA_PTR_GET_DEFAULT(mailCity_, "") };
      inline InvoiceTaskList& setMailCity(string mailCity) { DARABONBA_PTR_SET_VALUE(mailCity_, mailCity) };


      // mailFullAddress Field Functions 
      bool hasMailFullAddress() const { return this->mailFullAddress_ != nullptr;};
      void deleteMailFullAddress() { this->mailFullAddress_ = nullptr;};
      inline string getMailFullAddress() const { DARABONBA_PTR_GET_DEFAULT(mailFullAddress_, "") };
      inline InvoiceTaskList& setMailFullAddress(string mailFullAddress) { DARABONBA_PTR_SET_VALUE(mailFullAddress_, mailFullAddress) };


      // mailProvince Field Functions 
      bool hasMailProvince() const { return this->mailProvince_ != nullptr;};
      void deleteMailProvince() { this->mailProvince_ = nullptr;};
      inline string getMailProvince() const { DARABONBA_PTR_GET_DEFAULT(mailProvince_, "") };
      inline InvoiceTaskList& setMailProvince(string mailProvince) { DARABONBA_PTR_SET_VALUE(mailProvince_, mailProvince) };


      // mealNormalInvoiceFee Field Functions 
      bool hasMealNormalInvoiceFee() const { return this->mealNormalInvoiceFee_ != nullptr;};
      void deleteMealNormalInvoiceFee() { this->mealNormalInvoiceFee_ = nullptr;};
      inline string getMealNormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(mealNormalInvoiceFee_, "") };
      inline InvoiceTaskList& setMealNormalInvoiceFee(string mealNormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(mealNormalInvoiceFee_, mealNormalInvoiceFee) };


      // mealTc7NormalInvoiceFee Field Functions 
      bool hasMealTc7NormalInvoiceFee() const { return this->mealTc7NormalInvoiceFee_ != nullptr;};
      void deleteMealTc7NormalInvoiceFee() { this->mealTc7NormalInvoiceFee_ = nullptr;};
      inline string getMealTc7NormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(mealTc7NormalInvoiceFee_, "") };
      inline InvoiceTaskList& setMealTc7NormalInvoiceFee(string mealTc7NormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(mealTc7NormalInvoiceFee_, mealTc7NormalInvoiceFee) };


      // penaltyFee Field Functions 
      bool hasPenaltyFee() const { return this->penaltyFee_ != nullptr;};
      void deletePenaltyFee() { this->penaltyFee_ = nullptr;};
      inline string getPenaltyFee() const { DARABONBA_PTR_GET_DEFAULT(penaltyFee_, "") };
      inline InvoiceTaskList& setPenaltyFee(string penaltyFee) { DARABONBA_PTR_SET_VALUE(penaltyFee_, penaltyFee) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline InvoiceTaskList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // serviceFee Field Functions 
      bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
      void deleteServiceFee() { this->serviceFee_ = nullptr;};
      inline string getServiceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, "") };
      inline InvoiceTaskList& setServiceFee(string serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


      // telephone Field Functions 
      bool hasTelephone() const { return this->telephone_ != nullptr;};
      void deleteTelephone() { this->telephone_ = nullptr;};
      inline string getTelephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
      inline InvoiceTaskList& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


      // trainAccelerationPackageInvoiceFee Field Functions 
      bool hasTrainAccelerationPackageInvoiceFee() const { return this->trainAccelerationPackageInvoiceFee_ != nullptr;};
      void deleteTrainAccelerationPackageInvoiceFee() { this->trainAccelerationPackageInvoiceFee_ = nullptr;};
      inline string getTrainAccelerationPackageInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(trainAccelerationPackageInvoiceFee_, "") };
      inline InvoiceTaskList& setTrainAccelerationPackageInvoiceFee(string trainAccelerationPackageInvoiceFee) { DARABONBA_PTR_SET_VALUE(trainAccelerationPackageInvoiceFee_, trainAccelerationPackageInvoiceFee) };


      // trainInvoiceFee Field Functions 
      bool hasTrainInvoiceFee() const { return this->trainInvoiceFee_ != nullptr;};
      void deleteTrainInvoiceFee() { this->trainInvoiceFee_ = nullptr;};
      inline string getTrainInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(trainInvoiceFee_, "") };
      inline InvoiceTaskList& setTrainInvoiceFee(string trainInvoiceFee) { DARABONBA_PTR_SET_VALUE(trainInvoiceFee_, trainInvoiceFee) };


      // vacationNormalInvoiceFee Field Functions 
      bool hasVacationNormalInvoiceFee() const { return this->vacationNormalInvoiceFee_ != nullptr;};
      void deleteVacationNormalInvoiceFee() { this->vacationNormalInvoiceFee_ = nullptr;};
      inline string getVacationNormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(vacationNormalInvoiceFee_, "") };
      inline InvoiceTaskList& setVacationNormalInvoiceFee(string vacationNormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(vacationNormalInvoiceFee_, vacationNormalInvoiceFee) };


      // vasMallSpecialInvoiceFee Field Functions 
      bool hasVasMallSpecialInvoiceFee() const { return this->vasMallSpecialInvoiceFee_ != nullptr;};
      void deleteVasMallSpecialInvoiceFee() { this->vasMallSpecialInvoiceFee_ = nullptr;};
      inline string getVasMallSpecialInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(vasMallSpecialInvoiceFee_, "") };
      inline InvoiceTaskList& setVasMallSpecialInvoiceFee(string vasMallSpecialInvoiceFee) { DARABONBA_PTR_SET_VALUE(vasMallSpecialInvoiceFee_, vasMallSpecialInvoiceFee) };


      // vehicleInvoiceFee Field Functions 
      bool hasVehicleInvoiceFee() const { return this->vehicleInvoiceFee_ != nullptr;};
      void deleteVehicleInvoiceFee() { this->vehicleInvoiceFee_ = nullptr;};
      inline string getVehicleInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(vehicleInvoiceFee_, "") };
      inline InvoiceTaskList& setVehicleInvoiceFee(string vehicleInvoiceFee) { DARABONBA_PTR_SET_VALUE(vehicleInvoiceFee_, vehicleInvoiceFee) };


      // vehicleNormalInvoiceFee Field Functions 
      bool hasVehicleNormalInvoiceFee() const { return this->vehicleNormalInvoiceFee_ != nullptr;};
      void deleteVehicleNormalInvoiceFee() { this->vehicleNormalInvoiceFee_ = nullptr;};
      inline string getVehicleNormalInvoiceFee() const { DARABONBA_PTR_GET_DEFAULT(vehicleNormalInvoiceFee_, "") };
      inline InvoiceTaskList& setVehicleNormalInvoiceFee(string vehicleNormalInvoiceFee) { DARABONBA_PTR_SET_VALUE(vehicleNormalInvoiceFee_, vehicleNormalInvoiceFee) };


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
      // This parameter is required.
      shared_ptr<string> invoiceThirdPartId_ {};
      shared_ptr<int32_t> invoiceType_ {};
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

    virtual bool empty() const override { return this->billDate_ == nullptr
        && this->invoiceTaskList_ == nullptr; };
    // billDate Field Functions 
    bool hasBillDate() const { return this->billDate_ != nullptr;};
    void deleteBillDate() { this->billDate_ = nullptr;};
    inline string getBillDate() const { DARABONBA_PTR_GET_DEFAULT(billDate_, "") };
    inline ApplyInvoiceTaskRequest& setBillDate(string billDate) { DARABONBA_PTR_SET_VALUE(billDate_, billDate) };


    // invoiceTaskList Field Functions 
    bool hasInvoiceTaskList() const { return this->invoiceTaskList_ != nullptr;};
    void deleteInvoiceTaskList() { this->invoiceTaskList_ = nullptr;};
    inline const vector<ApplyInvoiceTaskRequest::InvoiceTaskList> & getInvoiceTaskList() const { DARABONBA_PTR_GET_CONST(invoiceTaskList_, vector<ApplyInvoiceTaskRequest::InvoiceTaskList>) };
    inline vector<ApplyInvoiceTaskRequest::InvoiceTaskList> getInvoiceTaskList() { DARABONBA_PTR_GET(invoiceTaskList_, vector<ApplyInvoiceTaskRequest::InvoiceTaskList>) };
    inline ApplyInvoiceTaskRequest& setInvoiceTaskList(const vector<ApplyInvoiceTaskRequest::InvoiceTaskList> & invoiceTaskList) { DARABONBA_PTR_SET_VALUE(invoiceTaskList_, invoiceTaskList) };
    inline ApplyInvoiceTaskRequest& setInvoiceTaskList(vector<ApplyInvoiceTaskRequest::InvoiceTaskList> && invoiceTaskList) { DARABONBA_PTR_SET_RVALUE(invoiceTaskList_, invoiceTaskList) };


  protected:
    // This parameter is required.
    shared_ptr<string> billDate_ {};
    // This parameter is required.
    shared_ptr<vector<ApplyInvoiceTaskRequest::InvoiceTaskList>> invoiceTaskList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
