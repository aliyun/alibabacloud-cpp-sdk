// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODY_HPP_
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
  class TrainOrderDetailQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderDetailQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderDetailQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TrainOrderDetailQueryResponseBody() = default ;
    TrainOrderDetailQueryResponseBody(const TrainOrderDetailQueryResponseBody &) = default ;
    TrainOrderDetailQueryResponseBody(TrainOrderDetailQueryResponseBody &&) = default ;
    TrainOrderDetailQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderDetailQueryResponseBody() = default ;
    TrainOrderDetailQueryResponseBody& operator=(const TrainOrderDetailQueryResponseBody &) = default ;
    TrainOrderDetailQueryResponseBody& operator=(TrainOrderDetailQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(book_infos, bookInfos_);
        DARABONBA_PTR_TO_JSON(change_infos, changeInfos_);
        DARABONBA_PTR_TO_JSON(offlineRefundDetails, offlineRefundDetails_);
        DARABONBA_PTR_TO_JSON(order_id, orderId_);
        DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
        DARABONBA_PTR_TO_JSON(passenger_info_s, passengerInfoS_);
        DARABONBA_PTR_TO_JSON(refund_infos, refundInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(book_infos, bookInfos_);
        DARABONBA_PTR_FROM_JSON(change_infos, changeInfos_);
        DARABONBA_PTR_FROM_JSON(offlineRefundDetails, offlineRefundDetails_);
        DARABONBA_PTR_FROM_JSON(order_id, orderId_);
        DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
        DARABONBA_PTR_FROM_JSON(passenger_info_s, passengerInfoS_);
        DARABONBA_PTR_FROM_JSON(refund_infos, refundInfos_);
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
      class RefundInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundInfos& obj) { 
          DARABONBA_PTR_TO_JSON(fail_code, failCode_);
          DARABONBA_PTR_TO_JSON(fail_msg, failMsg_);
          DARABONBA_PTR_TO_JSON(out_refund_id, outRefundId_);
          DARABONBA_PTR_TO_JSON(refund_id, refundId_);
          DARABONBA_PTR_TO_JSON(refund_train_info, refundTrainInfo_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, RefundInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(fail_code, failCode_);
          DARABONBA_PTR_FROM_JSON(fail_msg, failMsg_);
          DARABONBA_PTR_FROM_JSON(out_refund_id, outRefundId_);
          DARABONBA_PTR_FROM_JSON(refund_id, refundId_);
          DARABONBA_PTR_FROM_JSON(refund_train_info, refundTrainInfo_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        RefundInfos() = default ;
        RefundInfos(const RefundInfos &) = default ;
        RefundInfos(RefundInfos &&) = default ;
        RefundInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundInfos() = default ;
        RefundInfos& operator=(const RefundInfos &) = default ;
        RefundInfos& operator=(RefundInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RefundTrainInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RefundTrainInfo& obj) { 
            DARABONBA_PTR_TO_JSON(arr_station_name, arrStationName_);
            DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
            DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
            DARABONBA_PTR_TO_JSON(dep_station_name, depStationName_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(refund_ticket_infos, refundTicketInfos_);
            DARABONBA_PTR_TO_JSON(train_no, trainNo_);
          };
          friend void from_json(const Darabonba::Json& j, RefundTrainInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(arr_station_name, arrStationName_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
            DARABONBA_PTR_FROM_JSON(dep_station_name, depStationName_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(refund_ticket_infos, refundTicketInfos_);
            DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
          };
          RefundTrainInfo() = default ;
          RefundTrainInfo(const RefundTrainInfo &) = default ;
          RefundTrainInfo(RefundTrainInfo &&) = default ;
          RefundTrainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RefundTrainInfo() = default ;
          RefundTrainInfo& operator=(const RefundTrainInfo &) = default ;
          RefundTrainInfo& operator=(RefundTrainInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RefundTicketInfos : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RefundTicketInfos& obj) { 
              DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
              DARABONBA_PTR_TO_JSON(refund_cost, refundCost_);
              DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
              DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
            };
            friend void from_json(const Darabonba::Json& j, RefundTicketInfos& obj) { 
              DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
              DARABONBA_PTR_FROM_JSON(refund_cost, refundCost_);
              DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
              DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
            };
            RefundTicketInfos() = default ;
            RefundTicketInfos(const RefundTicketInfos &) = default ;
            RefundTicketInfos(RefundTicketInfos &&) = default ;
            RefundTicketInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RefundTicketInfos() = default ;
            RefundTicketInfos& operator=(const RefundTicketInfos &) = default ;
            RefundTicketInfos& operator=(RefundTicketInfos &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->passengerId_ == nullptr
        && this->refundCost_ == nullptr && this->refundPrice_ == nullptr && this->ticketPrice_ == nullptr; };
            // passengerId Field Functions 
            bool hasPassengerId() const { return this->passengerId_ != nullptr;};
            void deletePassengerId() { this->passengerId_ = nullptr;};
            inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
            inline RefundTicketInfos& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


            // refundCost Field Functions 
            bool hasRefundCost() const { return this->refundCost_ != nullptr;};
            void deleteRefundCost() { this->refundCost_ = nullptr;};
            inline int64_t getRefundCost() const { DARABONBA_PTR_GET_DEFAULT(refundCost_, 0L) };
            inline RefundTicketInfos& setRefundCost(int64_t refundCost) { DARABONBA_PTR_SET_VALUE(refundCost_, refundCost) };


            // refundPrice Field Functions 
            bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
            void deleteRefundPrice() { this->refundPrice_ = nullptr;};
            inline int64_t getRefundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
            inline RefundTicketInfos& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


            // ticketPrice Field Functions 
            bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
            void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
            inline int64_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
            inline RefundTicketInfos& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


          protected:
            shared_ptr<string> passengerId_ {};
            shared_ptr<int64_t> refundCost_ {};
            shared_ptr<int64_t> refundPrice_ {};
            shared_ptr<int64_t> ticketPrice_ {};
          };

          virtual bool empty() const override { return this->arrStationName_ == nullptr
        && this->arrTime_ == nullptr && this->depStationCode_ == nullptr && this->depStationName_ == nullptr && this->depTime_ == nullptr && this->refundTicketInfos_ == nullptr
        && this->trainNo_ == nullptr; };
          // arrStationName Field Functions 
          bool hasArrStationName() const { return this->arrStationName_ != nullptr;};
          void deleteArrStationName() { this->arrStationName_ = nullptr;};
          inline string getArrStationName() const { DARABONBA_PTR_GET_DEFAULT(arrStationName_, "") };
          inline RefundTrainInfo& setArrStationName(string arrStationName) { DARABONBA_PTR_SET_VALUE(arrStationName_, arrStationName) };


          // arrTime Field Functions 
          bool hasArrTime() const { return this->arrTime_ != nullptr;};
          void deleteArrTime() { this->arrTime_ = nullptr;};
          inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
          inline RefundTrainInfo& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


          // depStationCode Field Functions 
          bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
          void deleteDepStationCode() { this->depStationCode_ = nullptr;};
          inline string getDepStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
          inline RefundTrainInfo& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


          // depStationName Field Functions 
          bool hasDepStationName() const { return this->depStationName_ != nullptr;};
          void deleteDepStationName() { this->depStationName_ = nullptr;};
          inline string getDepStationName() const { DARABONBA_PTR_GET_DEFAULT(depStationName_, "") };
          inline RefundTrainInfo& setDepStationName(string depStationName) { DARABONBA_PTR_SET_VALUE(depStationName_, depStationName) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline RefundTrainInfo& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // refundTicketInfos Field Functions 
          bool hasRefundTicketInfos() const { return this->refundTicketInfos_ != nullptr;};
          void deleteRefundTicketInfos() { this->refundTicketInfos_ = nullptr;};
          inline const vector<RefundTrainInfo::RefundTicketInfos> & getRefundTicketInfos() const { DARABONBA_PTR_GET_CONST(refundTicketInfos_, vector<RefundTrainInfo::RefundTicketInfos>) };
          inline vector<RefundTrainInfo::RefundTicketInfos> getRefundTicketInfos() { DARABONBA_PTR_GET(refundTicketInfos_, vector<RefundTrainInfo::RefundTicketInfos>) };
          inline RefundTrainInfo& setRefundTicketInfos(const vector<RefundTrainInfo::RefundTicketInfos> & refundTicketInfos) { DARABONBA_PTR_SET_VALUE(refundTicketInfos_, refundTicketInfos) };
          inline RefundTrainInfo& setRefundTicketInfos(vector<RefundTrainInfo::RefundTicketInfos> && refundTicketInfos) { DARABONBA_PTR_SET_RVALUE(refundTicketInfos_, refundTicketInfos) };


          // trainNo Field Functions 
          bool hasTrainNo() const { return this->trainNo_ != nullptr;};
          void deleteTrainNo() { this->trainNo_ = nullptr;};
          inline string getTrainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
          inline RefundTrainInfo& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


        protected:
          shared_ptr<string> arrStationName_ {};
          shared_ptr<string> arrTime_ {};
          shared_ptr<string> depStationCode_ {};
          shared_ptr<string> depStationName_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<vector<RefundTrainInfo::RefundTicketInfos>> refundTicketInfos_ {};
          shared_ptr<string> trainNo_ {};
        };

        virtual bool empty() const override { return this->failCode_ == nullptr
        && this->failMsg_ == nullptr && this->outRefundId_ == nullptr && this->refundId_ == nullptr && this->refundTrainInfo_ == nullptr && this->status_ == nullptr; };
        // failCode Field Functions 
        bool hasFailCode() const { return this->failCode_ != nullptr;};
        void deleteFailCode() { this->failCode_ = nullptr;};
        inline string getFailCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
        inline RefundInfos& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


        // failMsg Field Functions 
        bool hasFailMsg() const { return this->failMsg_ != nullptr;};
        void deleteFailMsg() { this->failMsg_ = nullptr;};
        inline string getFailMsg() const { DARABONBA_PTR_GET_DEFAULT(failMsg_, "") };
        inline RefundInfos& setFailMsg(string failMsg) { DARABONBA_PTR_SET_VALUE(failMsg_, failMsg) };


        // outRefundId Field Functions 
        bool hasOutRefundId() const { return this->outRefundId_ != nullptr;};
        void deleteOutRefundId() { this->outRefundId_ = nullptr;};
        inline string getOutRefundId() const { DARABONBA_PTR_GET_DEFAULT(outRefundId_, "") };
        inline RefundInfos& setOutRefundId(string outRefundId) { DARABONBA_PTR_SET_VALUE(outRefundId_, outRefundId) };


        // refundId Field Functions 
        bool hasRefundId() const { return this->refundId_ != nullptr;};
        void deleteRefundId() { this->refundId_ = nullptr;};
        inline string getRefundId() const { DARABONBA_PTR_GET_DEFAULT(refundId_, "") };
        inline RefundInfos& setRefundId(string refundId) { DARABONBA_PTR_SET_VALUE(refundId_, refundId) };


        // refundTrainInfo Field Functions 
        bool hasRefundTrainInfo() const { return this->refundTrainInfo_ != nullptr;};
        void deleteRefundTrainInfo() { this->refundTrainInfo_ = nullptr;};
        inline const vector<RefundInfos::RefundTrainInfo> & getRefundTrainInfo() const { DARABONBA_PTR_GET_CONST(refundTrainInfo_, vector<RefundInfos::RefundTrainInfo>) };
        inline vector<RefundInfos::RefundTrainInfo> getRefundTrainInfo() { DARABONBA_PTR_GET(refundTrainInfo_, vector<RefundInfos::RefundTrainInfo>) };
        inline RefundInfos& setRefundTrainInfo(const vector<RefundInfos::RefundTrainInfo> & refundTrainInfo) { DARABONBA_PTR_SET_VALUE(refundTrainInfo_, refundTrainInfo) };
        inline RefundInfos& setRefundTrainInfo(vector<RefundInfos::RefundTrainInfo> && refundTrainInfo) { DARABONBA_PTR_SET_RVALUE(refundTrainInfo_, refundTrainInfo) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RefundInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> failCode_ {};
        shared_ptr<string> failMsg_ {};
        shared_ptr<string> outRefundId_ {};
        shared_ptr<string> refundId_ {};
        shared_ptr<vector<RefundInfos::RefundTrainInfo>> refundTrainInfo_ {};
        shared_ptr<string> status_ {};
      };

      class PassengerInfoS : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerInfoS& obj) { 
          DARABONBA_PTR_TO_JSON(cost_center_info, costCenterInfo_);
          DARABONBA_PTR_TO_JSON(country_code, countryCode_);
          DARABONBA_PTR_TO_JSON(passenger_cert_no, passengerCertNo_);
          DARABONBA_PTR_TO_JSON(passenger_cert_type, passengerCertType_);
          DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_TO_JSON(passenger_mobile, passengerMobile_);
          DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_TO_JSON(valid_date_end, validDateEnd_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerInfoS& obj) { 
          DARABONBA_PTR_FROM_JSON(cost_center_info, costCenterInfo_);
          DARABONBA_PTR_FROM_JSON(country_code, countryCode_);
          DARABONBA_PTR_FROM_JSON(passenger_cert_no, passengerCertNo_);
          DARABONBA_PTR_FROM_JSON(passenger_cert_type, passengerCertType_);
          DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_FROM_JSON(passenger_mobile, passengerMobile_);
          DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_FROM_JSON(valid_date_end, validDateEnd_);
        };
        PassengerInfoS() = default ;
        PassengerInfoS(const PassengerInfoS &) = default ;
        PassengerInfoS(PassengerInfoS &&) = default ;
        PassengerInfoS(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassengerInfoS() = default ;
        PassengerInfoS& operator=(const PassengerInfoS &) = default ;
        PassengerInfoS& operator=(PassengerInfoS &&) = default ;
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
            DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
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
            DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
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
        && this->invoiceId_ == nullptr && this->invoiceTitle_ == nullptr && this->passengerId_ == nullptr && this->projectCode_ == nullptr && this->projectTitle_ == nullptr; };
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


          // passengerId Field Functions 
          bool hasPassengerId() const { return this->passengerId_ != nullptr;};
          void deletePassengerId() { this->passengerId_ = nullptr;};
          inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
          inline CostCenterInfo& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


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
          shared_ptr<string> passengerId_ {};
          shared_ptr<string> projectCode_ {};
          shared_ptr<string> projectTitle_ {};
        };

        virtual bool empty() const override { return this->costCenterInfo_ == nullptr
        && this->countryCode_ == nullptr && this->passengerCertNo_ == nullptr && this->passengerCertType_ == nullptr && this->passengerId_ == nullptr && this->passengerMobile_ == nullptr
        && this->passengerName_ == nullptr && this->validDateEnd_ == nullptr; };
        // costCenterInfo Field Functions 
        bool hasCostCenterInfo() const { return this->costCenterInfo_ != nullptr;};
        void deleteCostCenterInfo() { this->costCenterInfo_ = nullptr;};
        inline const PassengerInfoS::CostCenterInfo & getCostCenterInfo() const { DARABONBA_PTR_GET_CONST(costCenterInfo_, PassengerInfoS::CostCenterInfo) };
        inline PassengerInfoS::CostCenterInfo getCostCenterInfo() { DARABONBA_PTR_GET(costCenterInfo_, PassengerInfoS::CostCenterInfo) };
        inline PassengerInfoS& setCostCenterInfo(const PassengerInfoS::CostCenterInfo & costCenterInfo) { DARABONBA_PTR_SET_VALUE(costCenterInfo_, costCenterInfo) };
        inline PassengerInfoS& setCostCenterInfo(PassengerInfoS::CostCenterInfo && costCenterInfo) { DARABONBA_PTR_SET_RVALUE(costCenterInfo_, costCenterInfo) };


        // countryCode Field Functions 
        bool hasCountryCode() const { return this->countryCode_ != nullptr;};
        void deleteCountryCode() { this->countryCode_ = nullptr;};
        inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
        inline PassengerInfoS& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


        // passengerCertNo Field Functions 
        bool hasPassengerCertNo() const { return this->passengerCertNo_ != nullptr;};
        void deletePassengerCertNo() { this->passengerCertNo_ = nullptr;};
        inline string getPassengerCertNo() const { DARABONBA_PTR_GET_DEFAULT(passengerCertNo_, "") };
        inline PassengerInfoS& setPassengerCertNo(string passengerCertNo) { DARABONBA_PTR_SET_VALUE(passengerCertNo_, passengerCertNo) };


        // passengerCertType Field Functions 
        bool hasPassengerCertType() const { return this->passengerCertType_ != nullptr;};
        void deletePassengerCertType() { this->passengerCertType_ = nullptr;};
        inline string getPassengerCertType() const { DARABONBA_PTR_GET_DEFAULT(passengerCertType_, "") };
        inline PassengerInfoS& setPassengerCertType(string passengerCertType) { DARABONBA_PTR_SET_VALUE(passengerCertType_, passengerCertType) };


        // passengerId Field Functions 
        bool hasPassengerId() const { return this->passengerId_ != nullptr;};
        void deletePassengerId() { this->passengerId_ = nullptr;};
        inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
        inline PassengerInfoS& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


        // passengerMobile Field Functions 
        bool hasPassengerMobile() const { return this->passengerMobile_ != nullptr;};
        void deletePassengerMobile() { this->passengerMobile_ = nullptr;};
        inline string getPassengerMobile() const { DARABONBA_PTR_GET_DEFAULT(passengerMobile_, "") };
        inline PassengerInfoS& setPassengerMobile(string passengerMobile) { DARABONBA_PTR_SET_VALUE(passengerMobile_, passengerMobile) };


        // passengerName Field Functions 
        bool hasPassengerName() const { return this->passengerName_ != nullptr;};
        void deletePassengerName() { this->passengerName_ = nullptr;};
        inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
        inline PassengerInfoS& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


        // validDateEnd Field Functions 
        bool hasValidDateEnd() const { return this->validDateEnd_ != nullptr;};
        void deleteValidDateEnd() { this->validDateEnd_ = nullptr;};
        inline string getValidDateEnd() const { DARABONBA_PTR_GET_DEFAULT(validDateEnd_, "") };
        inline PassengerInfoS& setValidDateEnd(string validDateEnd) { DARABONBA_PTR_SET_VALUE(validDateEnd_, validDateEnd) };


      protected:
        shared_ptr<PassengerInfoS::CostCenterInfo> costCenterInfo_ {};
        shared_ptr<string> countryCode_ {};
        shared_ptr<string> passengerCertNo_ {};
        shared_ptr<string> passengerCertType_ {};
        shared_ptr<string> passengerId_ {};
        shared_ptr<string> passengerMobile_ {};
        shared_ptr<string> passengerName_ {};
        shared_ptr<string> validDateEnd_ {};
      };

      class OfflineRefundDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OfflineRefundDetails& obj) { 
          DARABONBA_PTR_TO_JSON(offline_refund_id, offlineRefundId_);
          DARABONBA_PTR_TO_JSON(offline_refund_infos, offlineRefundInfos_);
          DARABONBA_PTR_TO_JSON(offline_refund_type, offlineRefundType_);
          DARABONBA_PTR_TO_JSON(refund_total_price, refundTotalPrice_);
        };
        friend void from_json(const Darabonba::Json& j, OfflineRefundDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(offline_refund_id, offlineRefundId_);
          DARABONBA_PTR_FROM_JSON(offline_refund_infos, offlineRefundInfos_);
          DARABONBA_PTR_FROM_JSON(offline_refund_type, offlineRefundType_);
          DARABONBA_PTR_FROM_JSON(refund_total_price, refundTotalPrice_);
        };
        OfflineRefundDetails() = default ;
        OfflineRefundDetails(const OfflineRefundDetails &) = default ;
        OfflineRefundDetails(OfflineRefundDetails &&) = default ;
        OfflineRefundDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OfflineRefundDetails() = default ;
        OfflineRefundDetails& operator=(const OfflineRefundDetails &) = default ;
        OfflineRefundDetails& operator=(OfflineRefundDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OfflineRefundInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OfflineRefundInfos& obj) { 
            DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
            DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
          };
          friend void from_json(const Darabonba::Json& j, OfflineRefundInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
            DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
          };
          OfflineRefundInfos() = default ;
          OfflineRefundInfos(const OfflineRefundInfos &) = default ;
          OfflineRefundInfos(OfflineRefundInfos &&) = default ;
          OfflineRefundInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OfflineRefundInfos() = default ;
          OfflineRefundInfos& operator=(const OfflineRefundInfos &) = default ;
          OfflineRefundInfos& operator=(OfflineRefundInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->passengerId_ == nullptr
        && this->refundPrice_ == nullptr; };
          // passengerId Field Functions 
          bool hasPassengerId() const { return this->passengerId_ != nullptr;};
          void deletePassengerId() { this->passengerId_ = nullptr;};
          inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
          inline OfflineRefundInfos& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


          // refundPrice Field Functions 
          bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
          void deleteRefundPrice() { this->refundPrice_ = nullptr;};
          inline int64_t getRefundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
          inline OfflineRefundInfos& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


        protected:
          shared_ptr<string> passengerId_ {};
          shared_ptr<int64_t> refundPrice_ {};
        };

        virtual bool empty() const override { return this->offlineRefundId_ == nullptr
        && this->offlineRefundInfos_ == nullptr && this->offlineRefundType_ == nullptr && this->refundTotalPrice_ == nullptr; };
        // offlineRefundId Field Functions 
        bool hasOfflineRefundId() const { return this->offlineRefundId_ != nullptr;};
        void deleteOfflineRefundId() { this->offlineRefundId_ = nullptr;};
        inline string getOfflineRefundId() const { DARABONBA_PTR_GET_DEFAULT(offlineRefundId_, "") };
        inline OfflineRefundDetails& setOfflineRefundId(string offlineRefundId) { DARABONBA_PTR_SET_VALUE(offlineRefundId_, offlineRefundId) };


        // offlineRefundInfos Field Functions 
        bool hasOfflineRefundInfos() const { return this->offlineRefundInfos_ != nullptr;};
        void deleteOfflineRefundInfos() { this->offlineRefundInfos_ = nullptr;};
        inline const vector<OfflineRefundDetails::OfflineRefundInfos> & getOfflineRefundInfos() const { DARABONBA_PTR_GET_CONST(offlineRefundInfos_, vector<OfflineRefundDetails::OfflineRefundInfos>) };
        inline vector<OfflineRefundDetails::OfflineRefundInfos> getOfflineRefundInfos() { DARABONBA_PTR_GET(offlineRefundInfos_, vector<OfflineRefundDetails::OfflineRefundInfos>) };
        inline OfflineRefundDetails& setOfflineRefundInfos(const vector<OfflineRefundDetails::OfflineRefundInfos> & offlineRefundInfos) { DARABONBA_PTR_SET_VALUE(offlineRefundInfos_, offlineRefundInfos) };
        inline OfflineRefundDetails& setOfflineRefundInfos(vector<OfflineRefundDetails::OfflineRefundInfos> && offlineRefundInfos) { DARABONBA_PTR_SET_RVALUE(offlineRefundInfos_, offlineRefundInfos) };


        // offlineRefundType Field Functions 
        bool hasOfflineRefundType() const { return this->offlineRefundType_ != nullptr;};
        void deleteOfflineRefundType() { this->offlineRefundType_ = nullptr;};
        inline string getOfflineRefundType() const { DARABONBA_PTR_GET_DEFAULT(offlineRefundType_, "") };
        inline OfflineRefundDetails& setOfflineRefundType(string offlineRefundType) { DARABONBA_PTR_SET_VALUE(offlineRefundType_, offlineRefundType) };


        // refundTotalPrice Field Functions 
        bool hasRefundTotalPrice() const { return this->refundTotalPrice_ != nullptr;};
        void deleteRefundTotalPrice() { this->refundTotalPrice_ = nullptr;};
        inline int64_t getRefundTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(refundTotalPrice_, 0L) };
        inline OfflineRefundDetails& setRefundTotalPrice(int64_t refundTotalPrice) { DARABONBA_PTR_SET_VALUE(refundTotalPrice_, refundTotalPrice) };


      protected:
        shared_ptr<string> offlineRefundId_ {};
        shared_ptr<vector<OfflineRefundDetails::OfflineRefundInfos>> offlineRefundInfos_ {};
        shared_ptr<string> offlineRefundType_ {};
        shared_ptr<int64_t> refundTotalPrice_ {};
      };

      class ChangeInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangeInfos& obj) { 
          DARABONBA_PTR_TO_JSON(change_apply_id, changeApplyId_);
          DARABONBA_PTR_TO_JSON(change_train_infos, changeTrainInfos_);
          DARABONBA_PTR_TO_JSON(limit_pay_time, limitPayTime_);
          DARABONBA_PTR_TO_JSON(out_change_apply_id, outChangeApplyId_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ChangeInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(change_apply_id, changeApplyId_);
          DARABONBA_PTR_FROM_JSON(change_train_infos, changeTrainInfos_);
          DARABONBA_PTR_FROM_JSON(limit_pay_time, limitPayTime_);
          DARABONBA_PTR_FROM_JSON(out_change_apply_id, outChangeApplyId_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        ChangeInfos() = default ;
        ChangeInfos(const ChangeInfos &) = default ;
        ChangeInfos(ChangeInfos &&) = default ;
        ChangeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangeInfos() = default ;
        ChangeInfos& operator=(const ChangeInfos &) = default ;
        ChangeInfos& operator=(ChangeInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ChangeTrainInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ChangeTrainInfos& obj) { 
            DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
            DARABONBA_PTR_TO_JSON(arr_station_name, arrStationName_);
            DARABONBA_PTR_TO_JSON(arrive_time, arriveTime_);
            DARABONBA_PTR_TO_JSON(change_ticket_infos, changeTicketInfos_);
            DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
            DARABONBA_PTR_TO_JSON(dep_station_name, depStationName_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(train_no, trainNo_);
          };
          friend void from_json(const Darabonba::Json& j, ChangeTrainInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
            DARABONBA_PTR_FROM_JSON(arr_station_name, arrStationName_);
            DARABONBA_PTR_FROM_JSON(arrive_time, arriveTime_);
            DARABONBA_PTR_FROM_JSON(change_ticket_infos, changeTicketInfos_);
            DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
            DARABONBA_PTR_FROM_JSON(dep_station_name, depStationName_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
          };
          ChangeTrainInfos() = default ;
          ChangeTrainInfos(const ChangeTrainInfos &) = default ;
          ChangeTrainInfos(ChangeTrainInfos &&) = default ;
          ChangeTrainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ChangeTrainInfos() = default ;
          ChangeTrainInfos& operator=(const ChangeTrainInfos &) = default ;
          ChangeTrainInfos& operator=(ChangeTrainInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ChangeTicketInfos : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ChangeTicketInfos& obj) { 
              DARABONBA_PTR_TO_JSON(change_cost, changeCost_);
              DARABONBA_PTR_TO_JSON(change_diff, changeDiff_);
              DARABONBA_PTR_TO_JSON(change_gap_handing_fee, changeGapHandingFee_);
              DARABONBA_PTR_TO_JSON(change_min_ticket_amount_handing_fee, changeMinTicketAmountHandingFee_);
              DARABONBA_PTR_TO_JSON(coach_no, coachNo_);
              DARABONBA_PTR_TO_JSON(fail_code, failCode_);
              DARABONBA_PTR_TO_JSON(fail_reason, failReason_);
              DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
              DARABONBA_PTR_TO_JSON(real_ticket_price, realTicketPrice_);
              DARABONBA_PTR_TO_JSON(seat_no, seatNo_);
              DARABONBA_PTR_TO_JSON(seat_type, seatType_);
              DARABONBA_PTR_TO_JSON(ticket_entrance, ticketEntrance_);
              DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
              DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
            };
            friend void from_json(const Darabonba::Json& j, ChangeTicketInfos& obj) { 
              DARABONBA_PTR_FROM_JSON(change_cost, changeCost_);
              DARABONBA_PTR_FROM_JSON(change_diff, changeDiff_);
              DARABONBA_PTR_FROM_JSON(change_gap_handing_fee, changeGapHandingFee_);
              DARABONBA_PTR_FROM_JSON(change_min_ticket_amount_handing_fee, changeMinTicketAmountHandingFee_);
              DARABONBA_PTR_FROM_JSON(coach_no, coachNo_);
              DARABONBA_PTR_FROM_JSON(fail_code, failCode_);
              DARABONBA_PTR_FROM_JSON(fail_reason, failReason_);
              DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
              DARABONBA_PTR_FROM_JSON(real_ticket_price, realTicketPrice_);
              DARABONBA_PTR_FROM_JSON(seat_no, seatNo_);
              DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
              DARABONBA_PTR_FROM_JSON(ticket_entrance, ticketEntrance_);
              DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
              DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
            };
            ChangeTicketInfos() = default ;
            ChangeTicketInfos(const ChangeTicketInfos &) = default ;
            ChangeTicketInfos(ChangeTicketInfos &&) = default ;
            ChangeTicketInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ChangeTicketInfos() = default ;
            ChangeTicketInfos& operator=(const ChangeTicketInfos &) = default ;
            ChangeTicketInfos& operator=(ChangeTicketInfos &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->changeCost_ == nullptr
        && this->changeDiff_ == nullptr && this->changeGapHandingFee_ == nullptr && this->changeMinTicketAmountHandingFee_ == nullptr && this->coachNo_ == nullptr && this->failCode_ == nullptr
        && this->failReason_ == nullptr && this->passengerId_ == nullptr && this->realTicketPrice_ == nullptr && this->seatNo_ == nullptr && this->seatType_ == nullptr
        && this->ticketEntrance_ == nullptr && this->ticketPrice_ == nullptr && this->ticketStatus_ == nullptr; };
            // changeCost Field Functions 
            bool hasChangeCost() const { return this->changeCost_ != nullptr;};
            void deleteChangeCost() { this->changeCost_ = nullptr;};
            inline int64_t getChangeCost() const { DARABONBA_PTR_GET_DEFAULT(changeCost_, 0L) };
            inline ChangeTicketInfos& setChangeCost(int64_t changeCost) { DARABONBA_PTR_SET_VALUE(changeCost_, changeCost) };


            // changeDiff Field Functions 
            bool hasChangeDiff() const { return this->changeDiff_ != nullptr;};
            void deleteChangeDiff() { this->changeDiff_ = nullptr;};
            inline int64_t getChangeDiff() const { DARABONBA_PTR_GET_DEFAULT(changeDiff_, 0L) };
            inline ChangeTicketInfos& setChangeDiff(int64_t changeDiff) { DARABONBA_PTR_SET_VALUE(changeDiff_, changeDiff) };


            // changeGapHandingFee Field Functions 
            bool hasChangeGapHandingFee() const { return this->changeGapHandingFee_ != nullptr;};
            void deleteChangeGapHandingFee() { this->changeGapHandingFee_ = nullptr;};
            inline int64_t getChangeGapHandingFee() const { DARABONBA_PTR_GET_DEFAULT(changeGapHandingFee_, 0L) };
            inline ChangeTicketInfos& setChangeGapHandingFee(int64_t changeGapHandingFee) { DARABONBA_PTR_SET_VALUE(changeGapHandingFee_, changeGapHandingFee) };


            // changeMinTicketAmountHandingFee Field Functions 
            bool hasChangeMinTicketAmountHandingFee() const { return this->changeMinTicketAmountHandingFee_ != nullptr;};
            void deleteChangeMinTicketAmountHandingFee() { this->changeMinTicketAmountHandingFee_ = nullptr;};
            inline int64_t getChangeMinTicketAmountHandingFee() const { DARABONBA_PTR_GET_DEFAULT(changeMinTicketAmountHandingFee_, 0L) };
            inline ChangeTicketInfos& setChangeMinTicketAmountHandingFee(int64_t changeMinTicketAmountHandingFee) { DARABONBA_PTR_SET_VALUE(changeMinTicketAmountHandingFee_, changeMinTicketAmountHandingFee) };


            // coachNo Field Functions 
            bool hasCoachNo() const { return this->coachNo_ != nullptr;};
            void deleteCoachNo() { this->coachNo_ = nullptr;};
            inline string getCoachNo() const { DARABONBA_PTR_GET_DEFAULT(coachNo_, "") };
            inline ChangeTicketInfos& setCoachNo(string coachNo) { DARABONBA_PTR_SET_VALUE(coachNo_, coachNo) };


            // failCode Field Functions 
            bool hasFailCode() const { return this->failCode_ != nullptr;};
            void deleteFailCode() { this->failCode_ = nullptr;};
            inline string getFailCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
            inline ChangeTicketInfos& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


            // failReason Field Functions 
            bool hasFailReason() const { return this->failReason_ != nullptr;};
            void deleteFailReason() { this->failReason_ = nullptr;};
            inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
            inline ChangeTicketInfos& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


            // passengerId Field Functions 
            bool hasPassengerId() const { return this->passengerId_ != nullptr;};
            void deletePassengerId() { this->passengerId_ = nullptr;};
            inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
            inline ChangeTicketInfos& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


            // realTicketPrice Field Functions 
            bool hasRealTicketPrice() const { return this->realTicketPrice_ != nullptr;};
            void deleteRealTicketPrice() { this->realTicketPrice_ = nullptr;};
            inline int64_t getRealTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(realTicketPrice_, 0L) };
            inline ChangeTicketInfos& setRealTicketPrice(int64_t realTicketPrice) { DARABONBA_PTR_SET_VALUE(realTicketPrice_, realTicketPrice) };


            // seatNo Field Functions 
            bool hasSeatNo() const { return this->seatNo_ != nullptr;};
            void deleteSeatNo() { this->seatNo_ = nullptr;};
            inline string getSeatNo() const { DARABONBA_PTR_GET_DEFAULT(seatNo_, "") };
            inline ChangeTicketInfos& setSeatNo(string seatNo) { DARABONBA_PTR_SET_VALUE(seatNo_, seatNo) };


            // seatType Field Functions 
            bool hasSeatType() const { return this->seatType_ != nullptr;};
            void deleteSeatType() { this->seatType_ = nullptr;};
            inline string getSeatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
            inline ChangeTicketInfos& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


            // ticketEntrance Field Functions 
            bool hasTicketEntrance() const { return this->ticketEntrance_ != nullptr;};
            void deleteTicketEntrance() { this->ticketEntrance_ = nullptr;};
            inline string getTicketEntrance() const { DARABONBA_PTR_GET_DEFAULT(ticketEntrance_, "") };
            inline ChangeTicketInfos& setTicketEntrance(string ticketEntrance) { DARABONBA_PTR_SET_VALUE(ticketEntrance_, ticketEntrance) };


            // ticketPrice Field Functions 
            bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
            void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
            inline int64_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
            inline ChangeTicketInfos& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


            // ticketStatus Field Functions 
            bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
            void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
            inline string getTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
            inline ChangeTicketInfos& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


          protected:
            shared_ptr<int64_t> changeCost_ {};
            shared_ptr<int64_t> changeDiff_ {};
            shared_ptr<int64_t> changeGapHandingFee_ {};
            shared_ptr<int64_t> changeMinTicketAmountHandingFee_ {};
            shared_ptr<string> coachNo_ {};
            shared_ptr<string> failCode_ {};
            shared_ptr<string> failReason_ {};
            shared_ptr<string> passengerId_ {};
            shared_ptr<int64_t> realTicketPrice_ {};
            shared_ptr<string> seatNo_ {};
            shared_ptr<string> seatType_ {};
            shared_ptr<string> ticketEntrance_ {};
            shared_ptr<int64_t> ticketPrice_ {};
            shared_ptr<string> ticketStatus_ {};
          };

          virtual bool empty() const override { return this->arrStationCode_ == nullptr
        && this->arrStationName_ == nullptr && this->arriveTime_ == nullptr && this->changeTicketInfos_ == nullptr && this->depStationCode_ == nullptr && this->depStationName_ == nullptr
        && this->depTime_ == nullptr && this->trainNo_ == nullptr; };
          // arrStationCode Field Functions 
          bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
          void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
          inline string getArrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
          inline ChangeTrainInfos& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


          // arrStationName Field Functions 
          bool hasArrStationName() const { return this->arrStationName_ != nullptr;};
          void deleteArrStationName() { this->arrStationName_ = nullptr;};
          inline string getArrStationName() const { DARABONBA_PTR_GET_DEFAULT(arrStationName_, "") };
          inline ChangeTrainInfos& setArrStationName(string arrStationName) { DARABONBA_PTR_SET_VALUE(arrStationName_, arrStationName) };


          // arriveTime Field Functions 
          bool hasArriveTime() const { return this->arriveTime_ != nullptr;};
          void deleteArriveTime() { this->arriveTime_ = nullptr;};
          inline string getArriveTime() const { DARABONBA_PTR_GET_DEFAULT(arriveTime_, "") };
          inline ChangeTrainInfos& setArriveTime(string arriveTime) { DARABONBA_PTR_SET_VALUE(arriveTime_, arriveTime) };


          // changeTicketInfos Field Functions 
          bool hasChangeTicketInfos() const { return this->changeTicketInfos_ != nullptr;};
          void deleteChangeTicketInfos() { this->changeTicketInfos_ = nullptr;};
          inline const vector<ChangeTrainInfos::ChangeTicketInfos> & getChangeTicketInfos() const { DARABONBA_PTR_GET_CONST(changeTicketInfos_, vector<ChangeTrainInfos::ChangeTicketInfos>) };
          inline vector<ChangeTrainInfos::ChangeTicketInfos> getChangeTicketInfos() { DARABONBA_PTR_GET(changeTicketInfos_, vector<ChangeTrainInfos::ChangeTicketInfos>) };
          inline ChangeTrainInfos& setChangeTicketInfos(const vector<ChangeTrainInfos::ChangeTicketInfos> & changeTicketInfos) { DARABONBA_PTR_SET_VALUE(changeTicketInfos_, changeTicketInfos) };
          inline ChangeTrainInfos& setChangeTicketInfos(vector<ChangeTrainInfos::ChangeTicketInfos> && changeTicketInfos) { DARABONBA_PTR_SET_RVALUE(changeTicketInfos_, changeTicketInfos) };


          // depStationCode Field Functions 
          bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
          void deleteDepStationCode() { this->depStationCode_ = nullptr;};
          inline string getDepStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
          inline ChangeTrainInfos& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


          // depStationName Field Functions 
          bool hasDepStationName() const { return this->depStationName_ != nullptr;};
          void deleteDepStationName() { this->depStationName_ = nullptr;};
          inline string getDepStationName() const { DARABONBA_PTR_GET_DEFAULT(depStationName_, "") };
          inline ChangeTrainInfos& setDepStationName(string depStationName) { DARABONBA_PTR_SET_VALUE(depStationName_, depStationName) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline ChangeTrainInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // trainNo Field Functions 
          bool hasTrainNo() const { return this->trainNo_ != nullptr;};
          void deleteTrainNo() { this->trainNo_ = nullptr;};
          inline string getTrainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
          inline ChangeTrainInfos& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


        protected:
          shared_ptr<string> arrStationCode_ {};
          shared_ptr<string> arrStationName_ {};
          shared_ptr<string> arriveTime_ {};
          shared_ptr<vector<ChangeTrainInfos::ChangeTicketInfos>> changeTicketInfos_ {};
          shared_ptr<string> depStationCode_ {};
          shared_ptr<string> depStationName_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<string> trainNo_ {};
        };

        virtual bool empty() const override { return this->changeApplyId_ == nullptr
        && this->changeTrainInfos_ == nullptr && this->limitPayTime_ == nullptr && this->outChangeApplyId_ == nullptr && this->status_ == nullptr; };
        // changeApplyId Field Functions 
        bool hasChangeApplyId() const { return this->changeApplyId_ != nullptr;};
        void deleteChangeApplyId() { this->changeApplyId_ = nullptr;};
        inline string getChangeApplyId() const { DARABONBA_PTR_GET_DEFAULT(changeApplyId_, "") };
        inline ChangeInfos& setChangeApplyId(string changeApplyId) { DARABONBA_PTR_SET_VALUE(changeApplyId_, changeApplyId) };


        // changeTrainInfos Field Functions 
        bool hasChangeTrainInfos() const { return this->changeTrainInfos_ != nullptr;};
        void deleteChangeTrainInfos() { this->changeTrainInfos_ = nullptr;};
        inline const vector<ChangeInfos::ChangeTrainInfos> & getChangeTrainInfos() const { DARABONBA_PTR_GET_CONST(changeTrainInfos_, vector<ChangeInfos::ChangeTrainInfos>) };
        inline vector<ChangeInfos::ChangeTrainInfos> getChangeTrainInfos() { DARABONBA_PTR_GET(changeTrainInfos_, vector<ChangeInfos::ChangeTrainInfos>) };
        inline ChangeInfos& setChangeTrainInfos(const vector<ChangeInfos::ChangeTrainInfos> & changeTrainInfos) { DARABONBA_PTR_SET_VALUE(changeTrainInfos_, changeTrainInfos) };
        inline ChangeInfos& setChangeTrainInfos(vector<ChangeInfos::ChangeTrainInfos> && changeTrainInfos) { DARABONBA_PTR_SET_RVALUE(changeTrainInfos_, changeTrainInfos) };


        // limitPayTime Field Functions 
        bool hasLimitPayTime() const { return this->limitPayTime_ != nullptr;};
        void deleteLimitPayTime() { this->limitPayTime_ = nullptr;};
        inline string getLimitPayTime() const { DARABONBA_PTR_GET_DEFAULT(limitPayTime_, "") };
        inline ChangeInfos& setLimitPayTime(string limitPayTime) { DARABONBA_PTR_SET_VALUE(limitPayTime_, limitPayTime) };


        // outChangeApplyId Field Functions 
        bool hasOutChangeApplyId() const { return this->outChangeApplyId_ != nullptr;};
        void deleteOutChangeApplyId() { this->outChangeApplyId_ = nullptr;};
        inline string getOutChangeApplyId() const { DARABONBA_PTR_GET_DEFAULT(outChangeApplyId_, "") };
        inline ChangeInfos& setOutChangeApplyId(string outChangeApplyId) { DARABONBA_PTR_SET_VALUE(outChangeApplyId_, outChangeApplyId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ChangeInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> changeApplyId_ {};
        shared_ptr<vector<ChangeInfos::ChangeTrainInfos>> changeTrainInfos_ {};
        shared_ptr<string> limitPayTime_ {};
        shared_ptr<string> outChangeApplyId_ {};
        shared_ptr<string> status_ {};
      };

      class BookInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BookInfos& obj) { 
          DARABONBA_PTR_TO_JSON(book_train_infos, bookTrainInfos_);
          DARABONBA_PTR_TO_JSON(fail_code, failCode_);
          DARABONBA_PTR_TO_JSON(fail_msg, failMsg_);
          DARABONBA_PTR_TO_JSON(last_pay_time, lastPayTime_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
        };
        friend void from_json(const Darabonba::Json& j, BookInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(book_train_infos, bookTrainInfos_);
          DARABONBA_PTR_FROM_JSON(fail_code, failCode_);
          DARABONBA_PTR_FROM_JSON(fail_msg, failMsg_);
          DARABONBA_PTR_FROM_JSON(last_pay_time, lastPayTime_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
        };
        BookInfos() = default ;
        BookInfos(const BookInfos &) = default ;
        BookInfos(BookInfos &&) = default ;
        BookInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BookInfos() = default ;
        BookInfos& operator=(const BookInfos &) = default ;
        BookInfos& operator=(BookInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BookTrainInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BookTrainInfos& obj) { 
            DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
            DARABONBA_PTR_TO_JSON(arr_station_name, arrStationName_);
            DARABONBA_PTR_TO_JSON(arrive_time, arriveTime_);
            DARABONBA_PTR_TO_JSON(book_ticket_infos, bookTicketInfos_);
            DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
            DARABONBA_PTR_TO_JSON(dep_station_name, depStationName_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(train_no, trainNo_);
          };
          friend void from_json(const Darabonba::Json& j, BookTrainInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
            DARABONBA_PTR_FROM_JSON(arr_station_name, arrStationName_);
            DARABONBA_PTR_FROM_JSON(arrive_time, arriveTime_);
            DARABONBA_PTR_FROM_JSON(book_ticket_infos, bookTicketInfos_);
            DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
            DARABONBA_PTR_FROM_JSON(dep_station_name, depStationName_);
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
              DARABONBA_PTR_TO_JSON(coach_no, coachNo_);
              DARABONBA_PTR_TO_JSON(fail_code, failCode_);
              DARABONBA_PTR_TO_JSON(fail_reason, failReason_);
              DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
              DARABONBA_PTR_TO_JSON(real_ticket_price, realTicketPrice_);
              DARABONBA_PTR_TO_JSON(seat_no, seatNo_);
              DARABONBA_PTR_TO_JSON(seat_type, seatType_);
              DARABONBA_PTR_TO_JSON(ticket_entrance, ticketEntrance_);
              DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
              DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
              DARABONBA_PTR_TO_JSON(ticket_type, ticketType_);
            };
            friend void from_json(const Darabonba::Json& j, BookTicketInfos& obj) { 
              DARABONBA_PTR_FROM_JSON(coach_no, coachNo_);
              DARABONBA_PTR_FROM_JSON(fail_code, failCode_);
              DARABONBA_PTR_FROM_JSON(fail_reason, failReason_);
              DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
              DARABONBA_PTR_FROM_JSON(real_ticket_price, realTicketPrice_);
              DARABONBA_PTR_FROM_JSON(seat_no, seatNo_);
              DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
              DARABONBA_PTR_FROM_JSON(ticket_entrance, ticketEntrance_);
              DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
              DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
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
            virtual bool empty() const override { return this->coachNo_ == nullptr
        && this->failCode_ == nullptr && this->failReason_ == nullptr && this->passengerId_ == nullptr && this->realTicketPrice_ == nullptr && this->seatNo_ == nullptr
        && this->seatType_ == nullptr && this->ticketEntrance_ == nullptr && this->ticketPrice_ == nullptr && this->ticketStatus_ == nullptr && this->ticketType_ == nullptr; };
            // coachNo Field Functions 
            bool hasCoachNo() const { return this->coachNo_ != nullptr;};
            void deleteCoachNo() { this->coachNo_ = nullptr;};
            inline string getCoachNo() const { DARABONBA_PTR_GET_DEFAULT(coachNo_, "") };
            inline BookTicketInfos& setCoachNo(string coachNo) { DARABONBA_PTR_SET_VALUE(coachNo_, coachNo) };


            // failCode Field Functions 
            bool hasFailCode() const { return this->failCode_ != nullptr;};
            void deleteFailCode() { this->failCode_ = nullptr;};
            inline string getFailCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
            inline BookTicketInfos& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


            // failReason Field Functions 
            bool hasFailReason() const { return this->failReason_ != nullptr;};
            void deleteFailReason() { this->failReason_ = nullptr;};
            inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
            inline BookTicketInfos& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


            // passengerId Field Functions 
            bool hasPassengerId() const { return this->passengerId_ != nullptr;};
            void deletePassengerId() { this->passengerId_ = nullptr;};
            inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
            inline BookTicketInfos& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


            // realTicketPrice Field Functions 
            bool hasRealTicketPrice() const { return this->realTicketPrice_ != nullptr;};
            void deleteRealTicketPrice() { this->realTicketPrice_ = nullptr;};
            inline int64_t getRealTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(realTicketPrice_, 0L) };
            inline BookTicketInfos& setRealTicketPrice(int64_t realTicketPrice) { DARABONBA_PTR_SET_VALUE(realTicketPrice_, realTicketPrice) };


            // seatNo Field Functions 
            bool hasSeatNo() const { return this->seatNo_ != nullptr;};
            void deleteSeatNo() { this->seatNo_ = nullptr;};
            inline string getSeatNo() const { DARABONBA_PTR_GET_DEFAULT(seatNo_, "") };
            inline BookTicketInfos& setSeatNo(string seatNo) { DARABONBA_PTR_SET_VALUE(seatNo_, seatNo) };


            // seatType Field Functions 
            bool hasSeatType() const { return this->seatType_ != nullptr;};
            void deleteSeatType() { this->seatType_ = nullptr;};
            inline string getSeatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
            inline BookTicketInfos& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


            // ticketEntrance Field Functions 
            bool hasTicketEntrance() const { return this->ticketEntrance_ != nullptr;};
            void deleteTicketEntrance() { this->ticketEntrance_ = nullptr;};
            inline string getTicketEntrance() const { DARABONBA_PTR_GET_DEFAULT(ticketEntrance_, "") };
            inline BookTicketInfos& setTicketEntrance(string ticketEntrance) { DARABONBA_PTR_SET_VALUE(ticketEntrance_, ticketEntrance) };


            // ticketPrice Field Functions 
            bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
            void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
            inline int64_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
            inline BookTicketInfos& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


            // ticketStatus Field Functions 
            bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
            void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
            inline int32_t getTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, 0) };
            inline BookTicketInfos& setTicketStatus(int32_t ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


            // ticketType Field Functions 
            bool hasTicketType() const { return this->ticketType_ != nullptr;};
            void deleteTicketType() { this->ticketType_ = nullptr;};
            inline string getTicketType() const { DARABONBA_PTR_GET_DEFAULT(ticketType_, "") };
            inline BookTicketInfos& setTicketType(string ticketType) { DARABONBA_PTR_SET_VALUE(ticketType_, ticketType) };


          protected:
            shared_ptr<string> coachNo_ {};
            shared_ptr<string> failCode_ {};
            shared_ptr<string> failReason_ {};
            shared_ptr<string> passengerId_ {};
            shared_ptr<int64_t> realTicketPrice_ {};
            shared_ptr<string> seatNo_ {};
            shared_ptr<string> seatType_ {};
            shared_ptr<string> ticketEntrance_ {};
            shared_ptr<int64_t> ticketPrice_ {};
            shared_ptr<int32_t> ticketStatus_ {};
            shared_ptr<string> ticketType_ {};
          };

          virtual bool empty() const override { return this->arrStationCode_ == nullptr
        && this->arrStationName_ == nullptr && this->arriveTime_ == nullptr && this->bookTicketInfos_ == nullptr && this->depStationCode_ == nullptr && this->depStationName_ == nullptr
        && this->depTime_ == nullptr && this->trainNo_ == nullptr; };
          // arrStationCode Field Functions 
          bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
          void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
          inline string getArrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
          inline BookTrainInfos& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


          // arrStationName Field Functions 
          bool hasArrStationName() const { return this->arrStationName_ != nullptr;};
          void deleteArrStationName() { this->arrStationName_ = nullptr;};
          inline string getArrStationName() const { DARABONBA_PTR_GET_DEFAULT(arrStationName_, "") };
          inline BookTrainInfos& setArrStationName(string arrStationName) { DARABONBA_PTR_SET_VALUE(arrStationName_, arrStationName) };


          // arriveTime Field Functions 
          bool hasArriveTime() const { return this->arriveTime_ != nullptr;};
          void deleteArriveTime() { this->arriveTime_ = nullptr;};
          inline string getArriveTime() const { DARABONBA_PTR_GET_DEFAULT(arriveTime_, "") };
          inline BookTrainInfos& setArriveTime(string arriveTime) { DARABONBA_PTR_SET_VALUE(arriveTime_, arriveTime) };


          // bookTicketInfos Field Functions 
          bool hasBookTicketInfos() const { return this->bookTicketInfos_ != nullptr;};
          void deleteBookTicketInfos() { this->bookTicketInfos_ = nullptr;};
          inline const vector<BookTrainInfos::BookTicketInfos> & getBookTicketInfos() const { DARABONBA_PTR_GET_CONST(bookTicketInfos_, vector<BookTrainInfos::BookTicketInfos>) };
          inline vector<BookTrainInfos::BookTicketInfos> getBookTicketInfos() { DARABONBA_PTR_GET(bookTicketInfos_, vector<BookTrainInfos::BookTicketInfos>) };
          inline BookTrainInfos& setBookTicketInfos(const vector<BookTrainInfos::BookTicketInfos> & bookTicketInfos) { DARABONBA_PTR_SET_VALUE(bookTicketInfos_, bookTicketInfos) };
          inline BookTrainInfos& setBookTicketInfos(vector<BookTrainInfos::BookTicketInfos> && bookTicketInfos) { DARABONBA_PTR_SET_RVALUE(bookTicketInfos_, bookTicketInfos) };


          // depStationCode Field Functions 
          bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
          void deleteDepStationCode() { this->depStationCode_ = nullptr;};
          inline string getDepStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
          inline BookTrainInfos& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


          // depStationName Field Functions 
          bool hasDepStationName() const { return this->depStationName_ != nullptr;};
          void deleteDepStationName() { this->depStationName_ = nullptr;};
          inline string getDepStationName() const { DARABONBA_PTR_GET_DEFAULT(depStationName_, "") };
          inline BookTrainInfos& setDepStationName(string depStationName) { DARABONBA_PTR_SET_VALUE(depStationName_, depStationName) };


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
          shared_ptr<string> arrStationCode_ {};
          shared_ptr<string> arrStationName_ {};
          shared_ptr<string> arriveTime_ {};
          shared_ptr<vector<BookTrainInfos::BookTicketInfos>> bookTicketInfos_ {};
          shared_ptr<string> depStationCode_ {};
          shared_ptr<string> depStationName_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<string> trainNo_ {};
        };

        virtual bool empty() const override { return this->bookTrainInfos_ == nullptr
        && this->failCode_ == nullptr && this->failMsg_ == nullptr && this->lastPayTime_ == nullptr && this->status_ == nullptr && this->ticketNo_ == nullptr; };
        // bookTrainInfos Field Functions 
        bool hasBookTrainInfos() const { return this->bookTrainInfos_ != nullptr;};
        void deleteBookTrainInfos() { this->bookTrainInfos_ = nullptr;};
        inline const vector<BookInfos::BookTrainInfos> & getBookTrainInfos() const { DARABONBA_PTR_GET_CONST(bookTrainInfos_, vector<BookInfos::BookTrainInfos>) };
        inline vector<BookInfos::BookTrainInfos> getBookTrainInfos() { DARABONBA_PTR_GET(bookTrainInfos_, vector<BookInfos::BookTrainInfos>) };
        inline BookInfos& setBookTrainInfos(const vector<BookInfos::BookTrainInfos> & bookTrainInfos) { DARABONBA_PTR_SET_VALUE(bookTrainInfos_, bookTrainInfos) };
        inline BookInfos& setBookTrainInfos(vector<BookInfos::BookTrainInfos> && bookTrainInfos) { DARABONBA_PTR_SET_RVALUE(bookTrainInfos_, bookTrainInfos) };


        // failCode Field Functions 
        bool hasFailCode() const { return this->failCode_ != nullptr;};
        void deleteFailCode() { this->failCode_ = nullptr;};
        inline string getFailCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
        inline BookInfos& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


        // failMsg Field Functions 
        bool hasFailMsg() const { return this->failMsg_ != nullptr;};
        void deleteFailMsg() { this->failMsg_ = nullptr;};
        inline string getFailMsg() const { DARABONBA_PTR_GET_DEFAULT(failMsg_, "") };
        inline BookInfos& setFailMsg(string failMsg) { DARABONBA_PTR_SET_VALUE(failMsg_, failMsg) };


        // lastPayTime Field Functions 
        bool hasLastPayTime() const { return this->lastPayTime_ != nullptr;};
        void deleteLastPayTime() { this->lastPayTime_ = nullptr;};
        inline string getLastPayTime() const { DARABONBA_PTR_GET_DEFAULT(lastPayTime_, "") };
        inline BookInfos& setLastPayTime(string lastPayTime) { DARABONBA_PTR_SET_VALUE(lastPayTime_, lastPayTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline BookInfos& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // ticketNo Field Functions 
        bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
        void deleteTicketNo() { this->ticketNo_ = nullptr;};
        inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
        inline BookInfos& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


      protected:
        shared_ptr<vector<BookInfos::BookTrainInfos>> bookTrainInfos_ {};
        shared_ptr<string> failCode_ {};
        shared_ptr<string> failMsg_ {};
        shared_ptr<string> lastPayTime_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> ticketNo_ {};
      };

      virtual bool empty() const override { return this->bookInfos_ == nullptr
        && this->changeInfos_ == nullptr && this->offlineRefundDetails_ == nullptr && this->orderId_ == nullptr && this->outOrderId_ == nullptr && this->passengerInfoS_ == nullptr
        && this->refundInfos_ == nullptr; };
      // bookInfos Field Functions 
      bool hasBookInfos() const { return this->bookInfos_ != nullptr;};
      void deleteBookInfos() { this->bookInfos_ = nullptr;};
      inline const Module::BookInfos & getBookInfos() const { DARABONBA_PTR_GET_CONST(bookInfos_, Module::BookInfos) };
      inline Module::BookInfos getBookInfos() { DARABONBA_PTR_GET(bookInfos_, Module::BookInfos) };
      inline Module& setBookInfos(const Module::BookInfos & bookInfos) { DARABONBA_PTR_SET_VALUE(bookInfos_, bookInfos) };
      inline Module& setBookInfos(Module::BookInfos && bookInfos) { DARABONBA_PTR_SET_RVALUE(bookInfos_, bookInfos) };


      // changeInfos Field Functions 
      bool hasChangeInfos() const { return this->changeInfos_ != nullptr;};
      void deleteChangeInfos() { this->changeInfos_ = nullptr;};
      inline const vector<Module::ChangeInfos> & getChangeInfos() const { DARABONBA_PTR_GET_CONST(changeInfos_, vector<Module::ChangeInfos>) };
      inline vector<Module::ChangeInfos> getChangeInfos() { DARABONBA_PTR_GET(changeInfos_, vector<Module::ChangeInfos>) };
      inline Module& setChangeInfos(const vector<Module::ChangeInfos> & changeInfos) { DARABONBA_PTR_SET_VALUE(changeInfos_, changeInfos) };
      inline Module& setChangeInfos(vector<Module::ChangeInfos> && changeInfos) { DARABONBA_PTR_SET_RVALUE(changeInfos_, changeInfos) };


      // offlineRefundDetails Field Functions 
      bool hasOfflineRefundDetails() const { return this->offlineRefundDetails_ != nullptr;};
      void deleteOfflineRefundDetails() { this->offlineRefundDetails_ = nullptr;};
      inline const vector<Module::OfflineRefundDetails> & getOfflineRefundDetails() const { DARABONBA_PTR_GET_CONST(offlineRefundDetails_, vector<Module::OfflineRefundDetails>) };
      inline vector<Module::OfflineRefundDetails> getOfflineRefundDetails() { DARABONBA_PTR_GET(offlineRefundDetails_, vector<Module::OfflineRefundDetails>) };
      inline Module& setOfflineRefundDetails(const vector<Module::OfflineRefundDetails> & offlineRefundDetails) { DARABONBA_PTR_SET_VALUE(offlineRefundDetails_, offlineRefundDetails) };
      inline Module& setOfflineRefundDetails(vector<Module::OfflineRefundDetails> && offlineRefundDetails) { DARABONBA_PTR_SET_RVALUE(offlineRefundDetails_, offlineRefundDetails) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline Module& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // outOrderId Field Functions 
      bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
      void deleteOutOrderId() { this->outOrderId_ = nullptr;};
      inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
      inline Module& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


      // passengerInfoS Field Functions 
      bool hasPassengerInfoS() const { return this->passengerInfoS_ != nullptr;};
      void deletePassengerInfoS() { this->passengerInfoS_ = nullptr;};
      inline const vector<Module::PassengerInfoS> & getPassengerInfoS() const { DARABONBA_PTR_GET_CONST(passengerInfoS_, vector<Module::PassengerInfoS>) };
      inline vector<Module::PassengerInfoS> getPassengerInfoS() { DARABONBA_PTR_GET(passengerInfoS_, vector<Module::PassengerInfoS>) };
      inline Module& setPassengerInfoS(const vector<Module::PassengerInfoS> & passengerInfoS) { DARABONBA_PTR_SET_VALUE(passengerInfoS_, passengerInfoS) };
      inline Module& setPassengerInfoS(vector<Module::PassengerInfoS> && passengerInfoS) { DARABONBA_PTR_SET_RVALUE(passengerInfoS_, passengerInfoS) };


      // refundInfos Field Functions 
      bool hasRefundInfos() const { return this->refundInfos_ != nullptr;};
      void deleteRefundInfos() { this->refundInfos_ = nullptr;};
      inline const vector<Module::RefundInfos> & getRefundInfos() const { DARABONBA_PTR_GET_CONST(refundInfos_, vector<Module::RefundInfos>) };
      inline vector<Module::RefundInfos> getRefundInfos() { DARABONBA_PTR_GET(refundInfos_, vector<Module::RefundInfos>) };
      inline Module& setRefundInfos(const vector<Module::RefundInfos> & refundInfos) { DARABONBA_PTR_SET_VALUE(refundInfos_, refundInfos) };
      inline Module& setRefundInfos(vector<Module::RefundInfos> && refundInfos) { DARABONBA_PTR_SET_RVALUE(refundInfos_, refundInfos) };


    protected:
      shared_ptr<Module::BookInfos> bookInfos_ {};
      shared_ptr<vector<Module::ChangeInfos>> changeInfos_ {};
      shared_ptr<vector<Module::OfflineRefundDetails>> offlineRefundDetails_ {};
      shared_ptr<string> orderId_ {};
      shared_ptr<string> outOrderId_ {};
      shared_ptr<vector<Module::PassengerInfoS>> passengerInfoS_ {};
      shared_ptr<vector<Module::RefundInfos>> refundInfos_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TrainOrderDetailQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TrainOrderDetailQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TrainOrderDetailQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TrainOrderDetailQueryResponseBody::Module) };
    inline TrainOrderDetailQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TrainOrderDetailQueryResponseBody::Module) };
    inline TrainOrderDetailQueryResponseBody& setModule(const TrainOrderDetailQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TrainOrderDetailQueryResponseBody& setModule(TrainOrderDetailQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TrainOrderDetailQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TrainOrderDetailQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TrainOrderDetailQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TrainOrderDetailQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
