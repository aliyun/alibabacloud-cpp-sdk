// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERCREATEREQUEST_HPP_
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
  class TrainOrderCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accept_no_seat, acceptNoSeat_);
      DARABONBA_PTR_TO_JSON(book_train_infos, bookTrainInfos_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(btrip_user_name, btripUserName_);
      DARABONBA_PTR_TO_JSON(business_info, businessInfo_);
      DARABONBA_PTR_TO_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_TO_JSON(force_match, forceMatch_);
      DARABONBA_PTR_TO_JSON(is_pay_now, isPayNow_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_open_info_s, passengerOpenInfoS_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accept_no_seat, acceptNoSeat_);
      DARABONBA_PTR_FROM_JSON(book_train_infos, bookTrainInfos_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(btrip_user_name, btripUserName_);
      DARABONBA_PTR_FROM_JSON(business_info, businessInfo_);
      DARABONBA_PTR_FROM_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_FROM_JSON(force_match, forceMatch_);
      DARABONBA_PTR_FROM_JSON(is_pay_now, isPayNow_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_open_info_s, passengerOpenInfoS_);
    };
    TrainOrderCreateRequest() = default ;
    TrainOrderCreateRequest(const TrainOrderCreateRequest &) = default ;
    TrainOrderCreateRequest(TrainOrderCreateRequest &&) = default ;
    TrainOrderCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderCreateRequest() = default ;
    TrainOrderCreateRequest& operator=(const TrainOrderCreateRequest &) = default ;
    TrainOrderCreateRequest& operator=(TrainOrderCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PassengerOpenInfoS : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PassengerOpenInfoS& obj) { 
        DARABONBA_PTR_TO_JSON(cost_center_info, costCenterInfo_);
        DARABONBA_PTR_TO_JSON(country_code, countryCode_);
        DARABONBA_PTR_TO_JSON(passenger_cert_no, passengerCertNo_);
        DARABONBA_PTR_TO_JSON(passenger_cert_type, passengerCertType_);
        DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
        DARABONBA_PTR_TO_JSON(passenger_mobile, passengerMobile_);
        DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
        DARABONBA_PTR_TO_JSON(valid_date_end, validDateEnd_);
      };
      friend void from_json(const Darabonba::Json& j, PassengerOpenInfoS& obj) { 
        DARABONBA_PTR_FROM_JSON(cost_center_info, costCenterInfo_);
        DARABONBA_PTR_FROM_JSON(country_code, countryCode_);
        DARABONBA_PTR_FROM_JSON(passenger_cert_no, passengerCertNo_);
        DARABONBA_PTR_FROM_JSON(passenger_cert_type, passengerCertType_);
        DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
        DARABONBA_PTR_FROM_JSON(passenger_mobile, passengerMobile_);
        DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
        DARABONBA_PTR_FROM_JSON(valid_date_end, validDateEnd_);
      };
      PassengerOpenInfoS() = default ;
      PassengerOpenInfoS(const PassengerOpenInfoS &) = default ;
      PassengerOpenInfoS(PassengerOpenInfoS &&) = default ;
      PassengerOpenInfoS(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PassengerOpenInfoS() = default ;
      PassengerOpenInfoS& operator=(const PassengerOpenInfoS &) = default ;
      PassengerOpenInfoS& operator=(PassengerOpenInfoS &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CostCenterInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CostCenterInfo& obj) { 
          DARABONBA_PTR_TO_JSON(cascade_dept_name, cascadeDeptName_);
          DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(cost_center_no, costCenterNo_);
          DARABONBA_PTR_TO_JSON(depart_id, departId_);
          DARABONBA_PTR_TO_JSON(depart_name, departName_);
          DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
          DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
        };
        friend void from_json(const Darabonba::Json& j, CostCenterInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(cascade_dept_name, cascadeDeptName_);
          DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(cost_center_no, costCenterNo_);
          DARABONBA_PTR_FROM_JSON(depart_id, departId_);
          DARABONBA_PTR_FROM_JSON(depart_name, departName_);
          DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
          DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
        };
        CostCenterInfo() = default ;
        CostCenterInfo(const CostCenterInfo &) = default ;
        CostCenterInfo(CostCenterInfo &&) = default ;
        CostCenterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CostCenterInfo() = default ;
        CostCenterInfo& operator=(const CostCenterInfo &) = default ;
        CostCenterInfo& operator=(CostCenterInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cascadeDeptName_ == nullptr
        && this->costCenterId_ == nullptr && this->costCenterName_ == nullptr && this->costCenterNo_ == nullptr && this->departId_ == nullptr && this->departName_ == nullptr
        && this->invoiceId_ == nullptr && this->invoiceTitle_ == nullptr && this->projectCode_ == nullptr && this->projectTitle_ == nullptr; };
        // cascadeDeptName Field Functions 
        bool hasCascadeDeptName() const { return this->cascadeDeptName_ != nullptr;};
        void deleteCascadeDeptName() { this->cascadeDeptName_ = nullptr;};
        inline string getCascadeDeptName() const { DARABONBA_PTR_GET_DEFAULT(cascadeDeptName_, "") };
        inline CostCenterInfo& setCascadeDeptName(string cascadeDeptName) { DARABONBA_PTR_SET_VALUE(cascadeDeptName_, cascadeDeptName) };


        // costCenterId Field Functions 
        bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
        void deleteCostCenterId() { this->costCenterId_ = nullptr;};
        inline string getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, "") };
        inline CostCenterInfo& setCostCenterId(string costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


        // costCenterName Field Functions 
        bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
        void deleteCostCenterName() { this->costCenterName_ = nullptr;};
        inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
        inline CostCenterInfo& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


        // costCenterNo Field Functions 
        bool hasCostCenterNo() const { return this->costCenterNo_ != nullptr;};
        void deleteCostCenterNo() { this->costCenterNo_ = nullptr;};
        inline string getCostCenterNo() const { DARABONBA_PTR_GET_DEFAULT(costCenterNo_, "") };
        inline CostCenterInfo& setCostCenterNo(string costCenterNo) { DARABONBA_PTR_SET_VALUE(costCenterNo_, costCenterNo) };


        // departId Field Functions 
        bool hasDepartId() const { return this->departId_ != nullptr;};
        void deleteDepartId() { this->departId_ = nullptr;};
        inline string getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
        inline CostCenterInfo& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


        // departName Field Functions 
        bool hasDepartName() const { return this->departName_ != nullptr;};
        void deleteDepartName() { this->departName_ = nullptr;};
        inline string getDepartName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
        inline CostCenterInfo& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


        // invoiceId Field Functions 
        bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
        void deleteInvoiceId() { this->invoiceId_ = nullptr;};
        inline string getInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, "") };
        inline CostCenterInfo& setInvoiceId(string invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


        // invoiceTitle Field Functions 
        bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
        void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
        inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
        inline CostCenterInfo& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


        // projectCode Field Functions 
        bool hasProjectCode() const { return this->projectCode_ != nullptr;};
        void deleteProjectCode() { this->projectCode_ = nullptr;};
        inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
        inline CostCenterInfo& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


        // projectTitle Field Functions 
        bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
        void deleteProjectTitle() { this->projectTitle_ = nullptr;};
        inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
        inline CostCenterInfo& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


      protected:
        shared_ptr<string> cascadeDeptName_ {};
        shared_ptr<string> costCenterId_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> costCenterNo_ {};
        shared_ptr<string> departId_ {};
        shared_ptr<string> departName_ {};
        shared_ptr<string> invoiceId_ {};
        shared_ptr<string> invoiceTitle_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectTitle_ {};
      };

      virtual bool empty() const override { return this->costCenterInfo_ == nullptr
        && this->countryCode_ == nullptr && this->passengerCertNo_ == nullptr && this->passengerCertType_ == nullptr && this->passengerId_ == nullptr && this->passengerMobile_ == nullptr
        && this->passengerName_ == nullptr && this->validDateEnd_ == nullptr; };
      // costCenterInfo Field Functions 
      bool hasCostCenterInfo() const { return this->costCenterInfo_ != nullptr;};
      void deleteCostCenterInfo() { this->costCenterInfo_ = nullptr;};
      inline const PassengerOpenInfoS::CostCenterInfo & getCostCenterInfo() const { DARABONBA_PTR_GET_CONST(costCenterInfo_, PassengerOpenInfoS::CostCenterInfo) };
      inline PassengerOpenInfoS::CostCenterInfo getCostCenterInfo() { DARABONBA_PTR_GET(costCenterInfo_, PassengerOpenInfoS::CostCenterInfo) };
      inline PassengerOpenInfoS& setCostCenterInfo(const PassengerOpenInfoS::CostCenterInfo & costCenterInfo) { DARABONBA_PTR_SET_VALUE(costCenterInfo_, costCenterInfo) };
      inline PassengerOpenInfoS& setCostCenterInfo(PassengerOpenInfoS::CostCenterInfo && costCenterInfo) { DARABONBA_PTR_SET_RVALUE(costCenterInfo_, costCenterInfo) };


      // countryCode Field Functions 
      bool hasCountryCode() const { return this->countryCode_ != nullptr;};
      void deleteCountryCode() { this->countryCode_ = nullptr;};
      inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
      inline PassengerOpenInfoS& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


      // passengerCertNo Field Functions 
      bool hasPassengerCertNo() const { return this->passengerCertNo_ != nullptr;};
      void deletePassengerCertNo() { this->passengerCertNo_ = nullptr;};
      inline string getPassengerCertNo() const { DARABONBA_PTR_GET_DEFAULT(passengerCertNo_, "") };
      inline PassengerOpenInfoS& setPassengerCertNo(string passengerCertNo) { DARABONBA_PTR_SET_VALUE(passengerCertNo_, passengerCertNo) };


      // passengerCertType Field Functions 
      bool hasPassengerCertType() const { return this->passengerCertType_ != nullptr;};
      void deletePassengerCertType() { this->passengerCertType_ = nullptr;};
      inline string getPassengerCertType() const { DARABONBA_PTR_GET_DEFAULT(passengerCertType_, "") };
      inline PassengerOpenInfoS& setPassengerCertType(string passengerCertType) { DARABONBA_PTR_SET_VALUE(passengerCertType_, passengerCertType) };


      // passengerId Field Functions 
      bool hasPassengerId() const { return this->passengerId_ != nullptr;};
      void deletePassengerId() { this->passengerId_ = nullptr;};
      inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
      inline PassengerOpenInfoS& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


      // passengerMobile Field Functions 
      bool hasPassengerMobile() const { return this->passengerMobile_ != nullptr;};
      void deletePassengerMobile() { this->passengerMobile_ = nullptr;};
      inline string getPassengerMobile() const { DARABONBA_PTR_GET_DEFAULT(passengerMobile_, "") };
      inline PassengerOpenInfoS& setPassengerMobile(string passengerMobile) { DARABONBA_PTR_SET_VALUE(passengerMobile_, passengerMobile) };


      // passengerName Field Functions 
      bool hasPassengerName() const { return this->passengerName_ != nullptr;};
      void deletePassengerName() { this->passengerName_ = nullptr;};
      inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
      inline PassengerOpenInfoS& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


      // validDateEnd Field Functions 
      bool hasValidDateEnd() const { return this->validDateEnd_ != nullptr;};
      void deleteValidDateEnd() { this->validDateEnd_ = nullptr;};
      inline string getValidDateEnd() const { DARABONBA_PTR_GET_DEFAULT(validDateEnd_, "") };
      inline PassengerOpenInfoS& setValidDateEnd(string validDateEnd) { DARABONBA_PTR_SET_VALUE(validDateEnd_, validDateEnd) };


    protected:
      shared_ptr<PassengerOpenInfoS::CostCenterInfo> costCenterInfo_ {};
      shared_ptr<string> countryCode_ {};
      // This parameter is required.
      shared_ptr<string> passengerCertNo_ {};
      // This parameter is required.
      shared_ptr<string> passengerCertType_ {};
      // This parameter is required.
      shared_ptr<string> passengerId_ {};
      shared_ptr<string> passengerMobile_ {};
      // This parameter is required.
      shared_ptr<string> passengerName_ {};
      shared_ptr<string> validDateEnd_ {};
    };

    class ContactInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactInfo& obj) { 
        DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
        DARABONBA_PTR_TO_JSON(passenger_mobile, passengerMobile_);
        DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
      };
      friend void from_json(const Darabonba::Json& j, ContactInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
        DARABONBA_PTR_FROM_JSON(passenger_mobile, passengerMobile_);
        DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
      };
      ContactInfo() = default ;
      ContactInfo(const ContactInfo &) = default ;
      ContactInfo(ContactInfo &&) = default ;
      ContactInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContactInfo() = default ;
      ContactInfo& operator=(const ContactInfo &) = default ;
      ContactInfo& operator=(ContactInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->passengerId_ == nullptr
        && this->passengerMobile_ == nullptr && this->passengerName_ == nullptr; };
      // passengerId Field Functions 
      bool hasPassengerId() const { return this->passengerId_ != nullptr;};
      void deletePassengerId() { this->passengerId_ = nullptr;};
      inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
      inline ContactInfo& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


      // passengerMobile Field Functions 
      bool hasPassengerMobile() const { return this->passengerMobile_ != nullptr;};
      void deletePassengerMobile() { this->passengerMobile_ = nullptr;};
      inline string getPassengerMobile() const { DARABONBA_PTR_GET_DEFAULT(passengerMobile_, "") };
      inline ContactInfo& setPassengerMobile(string passengerMobile) { DARABONBA_PTR_SET_VALUE(passengerMobile_, passengerMobile) };


      // passengerName Field Functions 
      bool hasPassengerName() const { return this->passengerName_ != nullptr;};
      void deletePassengerName() { this->passengerName_ = nullptr;};
      inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
      inline ContactInfo& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


    protected:
      // This parameter is required.
      shared_ptr<string> passengerId_ {};
      // This parameter is required.
      shared_ptr<string> passengerMobile_ {};
      // This parameter is required.
      shared_ptr<string> passengerName_ {};
    };

    class BusinessInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BusinessInfo& obj) { 
        DARABONBA_PTR_TO_JSON(customer_apply_id, customerApplyId_);
        DARABONBA_PTR_TO_JSON(customer_itinerary_id, customerItineraryId_);
      };
      friend void from_json(const Darabonba::Json& j, BusinessInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(customer_apply_id, customerApplyId_);
        DARABONBA_PTR_FROM_JSON(customer_itinerary_id, customerItineraryId_);
      };
      BusinessInfo() = default ;
      BusinessInfo(const BusinessInfo &) = default ;
      BusinessInfo(BusinessInfo &&) = default ;
      BusinessInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BusinessInfo() = default ;
      BusinessInfo& operator=(const BusinessInfo &) = default ;
      BusinessInfo& operator=(BusinessInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customerApplyId_ == nullptr
        && this->customerItineraryId_ == nullptr; };
      // customerApplyId Field Functions 
      bool hasCustomerApplyId() const { return this->customerApplyId_ != nullptr;};
      void deleteCustomerApplyId() { this->customerApplyId_ = nullptr;};
      inline string getCustomerApplyId() const { DARABONBA_PTR_GET_DEFAULT(customerApplyId_, "") };
      inline BusinessInfo& setCustomerApplyId(string customerApplyId) { DARABONBA_PTR_SET_VALUE(customerApplyId_, customerApplyId) };


      // customerItineraryId Field Functions 
      bool hasCustomerItineraryId() const { return this->customerItineraryId_ != nullptr;};
      void deleteCustomerItineraryId() { this->customerItineraryId_ = nullptr;};
      inline string getCustomerItineraryId() const { DARABONBA_PTR_GET_DEFAULT(customerItineraryId_, "") };
      inline BusinessInfo& setCustomerItineraryId(string customerItineraryId) { DARABONBA_PTR_SET_VALUE(customerItineraryId_, customerItineraryId) };


    protected:
      shared_ptr<string> customerApplyId_ {};
      shared_ptr<string> customerItineraryId_ {};
    };

    class BookTrainInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BookTrainInfos& obj) { 
        DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
        DARABONBA_PTR_TO_JSON(book_ticket_infos, bookTicketInfos_);
        DARABONBA_PTR_TO_JSON(choose_beds, chooseBeds_);
        DARABONBA_PTR_TO_JSON(choose_seats, chooseSeats_);
        DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
        DARABONBA_PTR_TO_JSON(dep_time, depTime_);
        DARABONBA_PTR_TO_JSON(train_no, trainNo_);
      };
      friend void from_json(const Darabonba::Json& j, BookTrainInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
        DARABONBA_PTR_FROM_JSON(book_ticket_infos, bookTicketInfos_);
        DARABONBA_PTR_FROM_JSON(choose_beds, chooseBeds_);
        DARABONBA_PTR_FROM_JSON(choose_seats, chooseSeats_);
        DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
        DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
        DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
      };
      BookTrainInfos() = default ;
      BookTrainInfos(const BookTrainInfos &) = default ;
      BookTrainInfos(BookTrainInfos &&) = default ;
      BookTrainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BookTrainInfos() = default ;
      BookTrainInfos& operator=(const BookTrainInfos &) = default ;
      BookTrainInfos& operator=(BookTrainInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BookTicketInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BookTicketInfos& obj) { 
          DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_TO_JSON(seat_type, seatType_);
          DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_TO_JSON(ticket_type, ticketType_);
        };
        friend void from_json(const Darabonba::Json& j, BookTicketInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
          DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_FROM_JSON(ticket_type, ticketType_);
        };
        BookTicketInfos() = default ;
        BookTicketInfos(const BookTicketInfos &) = default ;
        BookTicketInfos(BookTicketInfos &&) = default ;
        BookTicketInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BookTicketInfos() = default ;
        BookTicketInfos& operator=(const BookTicketInfos &) = default ;
        BookTicketInfos& operator=(BookTicketInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->passengerId_ == nullptr
        && this->seatType_ == nullptr && this->ticketPrice_ == nullptr && this->ticketType_ == nullptr; };
        // passengerId Field Functions 
        bool hasPassengerId() const { return this->passengerId_ != nullptr;};
        void deletePassengerId() { this->passengerId_ = nullptr;};
        inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
        inline BookTicketInfos& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


        // seatType Field Functions 
        bool hasSeatType() const { return this->seatType_ != nullptr;};
        void deleteSeatType() { this->seatType_ = nullptr;};
        inline string getSeatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
        inline BookTicketInfos& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


        // ticketPrice Field Functions 
        bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
        void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
        inline int64_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
        inline BookTicketInfos& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


        // ticketType Field Functions 
        bool hasTicketType() const { return this->ticketType_ != nullptr;};
        void deleteTicketType() { this->ticketType_ = nullptr;};
        inline string getTicketType() const { DARABONBA_PTR_GET_DEFAULT(ticketType_, "") };
        inline BookTicketInfos& setTicketType(string ticketType) { DARABONBA_PTR_SET_VALUE(ticketType_, ticketType) };


      protected:
        // This parameter is required.
        shared_ptr<string> passengerId_ {};
        // This parameter is required.
        shared_ptr<string> seatType_ {};
        // This parameter is required.
        shared_ptr<int64_t> ticketPrice_ {};
        // This parameter is required.
        shared_ptr<string> ticketType_ {};
      };

      virtual bool empty() const override { return this->arrStationCode_ == nullptr
        && this->bookTicketInfos_ == nullptr && this->chooseBeds_ == nullptr && this->chooseSeats_ == nullptr && this->depStationCode_ == nullptr && this->depTime_ == nullptr
        && this->trainNo_ == nullptr; };
      // arrStationCode Field Functions 
      bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
      void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
      inline string getArrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
      inline BookTrainInfos& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


      // bookTicketInfos Field Functions 
      bool hasBookTicketInfos() const { return this->bookTicketInfos_ != nullptr;};
      void deleteBookTicketInfos() { this->bookTicketInfos_ = nullptr;};
      inline const vector<BookTrainInfos::BookTicketInfos> & getBookTicketInfos() const { DARABONBA_PTR_GET_CONST(bookTicketInfos_, vector<BookTrainInfos::BookTicketInfos>) };
      inline vector<BookTrainInfos::BookTicketInfos> getBookTicketInfos() { DARABONBA_PTR_GET(bookTicketInfos_, vector<BookTrainInfos::BookTicketInfos>) };
      inline BookTrainInfos& setBookTicketInfos(const vector<BookTrainInfos::BookTicketInfos> & bookTicketInfos) { DARABONBA_PTR_SET_VALUE(bookTicketInfos_, bookTicketInfos) };
      inline BookTrainInfos& setBookTicketInfos(vector<BookTrainInfos::BookTicketInfos> && bookTicketInfos) { DARABONBA_PTR_SET_RVALUE(bookTicketInfos_, bookTicketInfos) };


      // chooseBeds Field Functions 
      bool hasChooseBeds() const { return this->chooseBeds_ != nullptr;};
      void deleteChooseBeds() { this->chooseBeds_ = nullptr;};
      inline string getChooseBeds() const { DARABONBA_PTR_GET_DEFAULT(chooseBeds_, "") };
      inline BookTrainInfos& setChooseBeds(string chooseBeds) { DARABONBA_PTR_SET_VALUE(chooseBeds_, chooseBeds) };


      // chooseSeats Field Functions 
      bool hasChooseSeats() const { return this->chooseSeats_ != nullptr;};
      void deleteChooseSeats() { this->chooseSeats_ = nullptr;};
      inline string getChooseSeats() const { DARABONBA_PTR_GET_DEFAULT(chooseSeats_, "") };
      inline BookTrainInfos& setChooseSeats(string chooseSeats) { DARABONBA_PTR_SET_VALUE(chooseSeats_, chooseSeats) };


      // depStationCode Field Functions 
      bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
      void deleteDepStationCode() { this->depStationCode_ = nullptr;};
      inline string getDepStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
      inline BookTrainInfos& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


      // depTime Field Functions 
      bool hasDepTime() const { return this->depTime_ != nullptr;};
      void deleteDepTime() { this->depTime_ = nullptr;};
      inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
      inline BookTrainInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


      // trainNo Field Functions 
      bool hasTrainNo() const { return this->trainNo_ != nullptr;};
      void deleteTrainNo() { this->trainNo_ = nullptr;};
      inline string getTrainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
      inline BookTrainInfos& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


    protected:
      // This parameter is required.
      shared_ptr<string> arrStationCode_ {};
      // This parameter is required.
      shared_ptr<vector<BookTrainInfos::BookTicketInfos>> bookTicketInfos_ {};
      shared_ptr<string> chooseBeds_ {};
      shared_ptr<string> chooseSeats_ {};
      // This parameter is required.
      shared_ptr<string> depStationCode_ {};
      // This parameter is required.
      shared_ptr<string> depTime_ {};
      // This parameter is required.
      shared_ptr<string> trainNo_ {};
    };

    virtual bool empty() const override { return this->acceptNoSeat_ == nullptr
        && this->bookTrainInfos_ == nullptr && this->btripUserId_ == nullptr && this->btripUserName_ == nullptr && this->businessInfo_ == nullptr && this->contactInfo_ == nullptr
        && this->forceMatch_ == nullptr && this->isPayNow_ == nullptr && this->outOrderId_ == nullptr && this->passengerOpenInfoS_ == nullptr; };
    // acceptNoSeat Field Functions 
    bool hasAcceptNoSeat() const { return this->acceptNoSeat_ != nullptr;};
    void deleteAcceptNoSeat() { this->acceptNoSeat_ = nullptr;};
    inline string getAcceptNoSeat() const { DARABONBA_PTR_GET_DEFAULT(acceptNoSeat_, "") };
    inline TrainOrderCreateRequest& setAcceptNoSeat(string acceptNoSeat) { DARABONBA_PTR_SET_VALUE(acceptNoSeat_, acceptNoSeat) };


    // bookTrainInfos Field Functions 
    bool hasBookTrainInfos() const { return this->bookTrainInfos_ != nullptr;};
    void deleteBookTrainInfos() { this->bookTrainInfos_ = nullptr;};
    inline const vector<TrainOrderCreateRequest::BookTrainInfos> & getBookTrainInfos() const { DARABONBA_PTR_GET_CONST(bookTrainInfos_, vector<TrainOrderCreateRequest::BookTrainInfos>) };
    inline vector<TrainOrderCreateRequest::BookTrainInfos> getBookTrainInfos() { DARABONBA_PTR_GET(bookTrainInfos_, vector<TrainOrderCreateRequest::BookTrainInfos>) };
    inline TrainOrderCreateRequest& setBookTrainInfos(const vector<TrainOrderCreateRequest::BookTrainInfos> & bookTrainInfos) { DARABONBA_PTR_SET_VALUE(bookTrainInfos_, bookTrainInfos) };
    inline TrainOrderCreateRequest& setBookTrainInfos(vector<TrainOrderCreateRequest::BookTrainInfos> && bookTrainInfos) { DARABONBA_PTR_SET_RVALUE(bookTrainInfos_, bookTrainInfos) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string getBtripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline TrainOrderCreateRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // btripUserName Field Functions 
    bool hasBtripUserName() const { return this->btripUserName_ != nullptr;};
    void deleteBtripUserName() { this->btripUserName_ = nullptr;};
    inline string getBtripUserName() const { DARABONBA_PTR_GET_DEFAULT(btripUserName_, "") };
    inline TrainOrderCreateRequest& setBtripUserName(string btripUserName) { DARABONBA_PTR_SET_VALUE(btripUserName_, btripUserName) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline const TrainOrderCreateRequest::BusinessInfo & getBusinessInfo() const { DARABONBA_PTR_GET_CONST(businessInfo_, TrainOrderCreateRequest::BusinessInfo) };
    inline TrainOrderCreateRequest::BusinessInfo getBusinessInfo() { DARABONBA_PTR_GET(businessInfo_, TrainOrderCreateRequest::BusinessInfo) };
    inline TrainOrderCreateRequest& setBusinessInfo(const TrainOrderCreateRequest::BusinessInfo & businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };
    inline TrainOrderCreateRequest& setBusinessInfo(TrainOrderCreateRequest::BusinessInfo && businessInfo) { DARABONBA_PTR_SET_RVALUE(businessInfo_, businessInfo) };


    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline const TrainOrderCreateRequest::ContactInfo & getContactInfo() const { DARABONBA_PTR_GET_CONST(contactInfo_, TrainOrderCreateRequest::ContactInfo) };
    inline TrainOrderCreateRequest::ContactInfo getContactInfo() { DARABONBA_PTR_GET(contactInfo_, TrainOrderCreateRequest::ContactInfo) };
    inline TrainOrderCreateRequest& setContactInfo(const TrainOrderCreateRequest::ContactInfo & contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };
    inline TrainOrderCreateRequest& setContactInfo(TrainOrderCreateRequest::ContactInfo && contactInfo) { DARABONBA_PTR_SET_RVALUE(contactInfo_, contactInfo) };


    // forceMatch Field Functions 
    bool hasForceMatch() const { return this->forceMatch_ != nullptr;};
    void deleteForceMatch() { this->forceMatch_ = nullptr;};
    inline string getForceMatch() const { DARABONBA_PTR_GET_DEFAULT(forceMatch_, "") };
    inline TrainOrderCreateRequest& setForceMatch(string forceMatch) { DARABONBA_PTR_SET_VALUE(forceMatch_, forceMatch) };


    // isPayNow Field Functions 
    bool hasIsPayNow() const { return this->isPayNow_ != nullptr;};
    void deleteIsPayNow() { this->isPayNow_ = nullptr;};
    inline bool getIsPayNow() const { DARABONBA_PTR_GET_DEFAULT(isPayNow_, false) };
    inline TrainOrderCreateRequest& setIsPayNow(bool isPayNow) { DARABONBA_PTR_SET_VALUE(isPayNow_, isPayNow) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainOrderCreateRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerOpenInfoS Field Functions 
    bool hasPassengerOpenInfoS() const { return this->passengerOpenInfoS_ != nullptr;};
    void deletePassengerOpenInfoS() { this->passengerOpenInfoS_ = nullptr;};
    inline const vector<TrainOrderCreateRequest::PassengerOpenInfoS> & getPassengerOpenInfoS() const { DARABONBA_PTR_GET_CONST(passengerOpenInfoS_, vector<TrainOrderCreateRequest::PassengerOpenInfoS>) };
    inline vector<TrainOrderCreateRequest::PassengerOpenInfoS> getPassengerOpenInfoS() { DARABONBA_PTR_GET(passengerOpenInfoS_, vector<TrainOrderCreateRequest::PassengerOpenInfoS>) };
    inline TrainOrderCreateRequest& setPassengerOpenInfoS(const vector<TrainOrderCreateRequest::PassengerOpenInfoS> & passengerOpenInfoS) { DARABONBA_PTR_SET_VALUE(passengerOpenInfoS_, passengerOpenInfoS) };
    inline TrainOrderCreateRequest& setPassengerOpenInfoS(vector<TrainOrderCreateRequest::PassengerOpenInfoS> && passengerOpenInfoS) { DARABONBA_PTR_SET_RVALUE(passengerOpenInfoS_, passengerOpenInfoS) };


  protected:
    shared_ptr<string> acceptNoSeat_ {};
    // This parameter is required.
    shared_ptr<vector<TrainOrderCreateRequest::BookTrainInfos>> bookTrainInfos_ {};
    // This parameter is required.
    shared_ptr<string> btripUserId_ {};
    // This parameter is required.
    shared_ptr<string> btripUserName_ {};
    shared_ptr<TrainOrderCreateRequest::BusinessInfo> businessInfo_ {};
    // This parameter is required.
    shared_ptr<TrainOrderCreateRequest::ContactInfo> contactInfo_ {};
    shared_ptr<string> forceMatch_ {};
    shared_ptr<bool> isPayNow_ {};
    // This parameter is required.
    shared_ptr<string> outOrderId_ {};
    // This parameter is required.
    shared_ptr<vector<TrainOrderCreateRequest::PassengerOpenInfoS>> passengerOpenInfoS_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
