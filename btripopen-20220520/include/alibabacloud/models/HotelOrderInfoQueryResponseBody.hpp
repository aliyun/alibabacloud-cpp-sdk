// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODY_HPP_
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
  class HotelOrderInfoQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderInfoQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderInfoQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelOrderInfoQueryResponseBody() = default ;
    HotelOrderInfoQueryResponseBody(const HotelOrderInfoQueryResponseBody &) = default ;
    HotelOrderInfoQueryResponseBody(HotelOrderInfoQueryResponseBody &&) = default ;
    HotelOrderInfoQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderInfoQueryResponseBody() = default ;
    HotelOrderInfoQueryResponseBody& operator=(const HotelOrderInfoQueryResponseBody &) = default ;
    HotelOrderInfoQueryResponseBody& operator=(HotelOrderInfoQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(base_order_info, baseOrderInfo_);
        DARABONBA_PTR_TO_JSON(booker_info, bookerInfo_);
        DARABONBA_PTR_TO_JSON(hotel_info, hotelInfo_);
        DARABONBA_PTR_TO_JSON(hotel_order_fee_info, hotelOrderFeeInfo_);
        DARABONBA_PTR_TO_JSON(hotel_order_refund_info, hotelOrderRefundInfo_);
        DARABONBA_PTR_TO_JSON(room_traver_info, roomTraverInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(base_order_info, baseOrderInfo_);
        DARABONBA_PTR_FROM_JSON(booker_info, bookerInfo_);
        DARABONBA_PTR_FROM_JSON(hotel_info, hotelInfo_);
        DARABONBA_PTR_FROM_JSON(hotel_order_fee_info, hotelOrderFeeInfo_);
        DARABONBA_PTR_FROM_JSON(hotel_order_refund_info, hotelOrderRefundInfo_);
        DARABONBA_PTR_FROM_JSON(room_traver_info, roomTraverInfo_);
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
      class RoomTraverInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoomTraverInfo& obj) { 
          DARABONBA_PTR_TO_JSON(live_room_no, liveRoomNo_);
          DARABONBA_PTR_TO_JSON(room_type_name, roomTypeName_);
          DARABONBA_PTR_TO_JSON(traver_infos, traverInfos_);
        };
        friend void from_json(const Darabonba::Json& j, RoomTraverInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(live_room_no, liveRoomNo_);
          DARABONBA_PTR_FROM_JSON(room_type_name, roomTypeName_);
          DARABONBA_PTR_FROM_JSON(traver_infos, traverInfos_);
        };
        RoomTraverInfo() = default ;
        RoomTraverInfo(const RoomTraverInfo &) = default ;
        RoomTraverInfo(RoomTraverInfo &&) = default ;
        RoomTraverInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoomTraverInfo() = default ;
        RoomTraverInfo& operator=(const RoomTraverInfo &) = default ;
        RoomTraverInfo& operator=(RoomTraverInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TraverInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TraverInfos& obj) { 
            DARABONBA_PTR_TO_JSON(apply_info, applyInfo_);
            DARABONBA_PTR_TO_JSON(cert_no, certNo_);
            DARABONBA_PTR_TO_JSON(cert_type, certType_);
            DARABONBA_PTR_TO_JSON(department, department_);
            DARABONBA_PTR_TO_JSON(job_no, jobNo_);
            DARABONBA_PTR_TO_JSON(telephone, telephone_);
            DARABONBA_PTR_TO_JSON(traveler_id, travelerId_);
            DARABONBA_PTR_TO_JSON(traveler_name, travelerName_);
            DARABONBA_PTR_TO_JSON(traveler_type, travelerType_);
            DARABONBA_PTR_TO_JSON(trip_cost_center, tripCostCenter_);
            DARABONBA_PTR_TO_JSON(user_type, userType_);
          };
          friend void from_json(const Darabonba::Json& j, TraverInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(apply_info, applyInfo_);
            DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
            DARABONBA_PTR_FROM_JSON(cert_type, certType_);
            DARABONBA_PTR_FROM_JSON(department, department_);
            DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
            DARABONBA_PTR_FROM_JSON(telephone, telephone_);
            DARABONBA_PTR_FROM_JSON(traveler_id, travelerId_);
            DARABONBA_PTR_FROM_JSON(traveler_name, travelerName_);
            DARABONBA_PTR_FROM_JSON(traveler_type, travelerType_);
            DARABONBA_PTR_FROM_JSON(trip_cost_center, tripCostCenter_);
            DARABONBA_PTR_FROM_JSON(user_type, userType_);
          };
          TraverInfos() = default ;
          TraverInfos(const TraverInfos &) = default ;
          TraverInfos(TraverInfos &&) = default ;
          TraverInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TraverInfos() = default ;
          TraverInfos& operator=(const TraverInfos &) = default ;
          TraverInfos& operator=(TraverInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TripCostCenter : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TripCostCenter& obj) { 
              DARABONBA_PTR_TO_JSON(cost_center_code, costCenterCode_);
              DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
              DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
              DARABONBA_PTR_TO_JSON(external_ext_field, externalExtField_);
              DARABONBA_PTR_TO_JSON(fee_type, feeType_);
              DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
              DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
              DARABONBA_PTR_TO_JSON(project_code, projectCode_);
              DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
            };
            friend void from_json(const Darabonba::Json& j, TripCostCenter& obj) { 
              DARABONBA_PTR_FROM_JSON(cost_center_code, costCenterCode_);
              DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
              DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
              DARABONBA_PTR_FROM_JSON(external_ext_field, externalExtField_);
              DARABONBA_PTR_FROM_JSON(fee_type, feeType_);
              DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
              DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
              DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
              DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
            };
            TripCostCenter() = default ;
            TripCostCenter(const TripCostCenter &) = default ;
            TripCostCenter(TripCostCenter &&) = default ;
            TripCostCenter(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TripCostCenter() = default ;
            TripCostCenter& operator=(const TripCostCenter &) = default ;
            TripCostCenter& operator=(TripCostCenter &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->costCenterCode_ == nullptr
        && this->costCenterId_ == nullptr && this->costCenterName_ == nullptr && this->externalExtField_ == nullptr && this->feeType_ == nullptr && this->invoiceId_ == nullptr
        && this->invoiceTitle_ == nullptr && this->projectCode_ == nullptr && this->projectTitle_ == nullptr; };
            // costCenterCode Field Functions 
            bool hasCostCenterCode() const { return this->costCenterCode_ != nullptr;};
            void deleteCostCenterCode() { this->costCenterCode_ = nullptr;};
            inline string getCostCenterCode() const { DARABONBA_PTR_GET_DEFAULT(costCenterCode_, "") };
            inline TripCostCenter& setCostCenterCode(string costCenterCode) { DARABONBA_PTR_SET_VALUE(costCenterCode_, costCenterCode) };


            // costCenterId Field Functions 
            bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
            void deleteCostCenterId() { this->costCenterId_ = nullptr;};
            inline string getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, "") };
            inline TripCostCenter& setCostCenterId(string costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


            // costCenterName Field Functions 
            bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
            void deleteCostCenterName() { this->costCenterName_ = nullptr;};
            inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
            inline TripCostCenter& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


            // externalExtField Field Functions 
            bool hasExternalExtField() const { return this->externalExtField_ != nullptr;};
            void deleteExternalExtField() { this->externalExtField_ = nullptr;};
            inline string getExternalExtField() const { DARABONBA_PTR_GET_DEFAULT(externalExtField_, "") };
            inline TripCostCenter& setExternalExtField(string externalExtField) { DARABONBA_PTR_SET_VALUE(externalExtField_, externalExtField) };


            // feeType Field Functions 
            bool hasFeeType() const { return this->feeType_ != nullptr;};
            void deleteFeeType() { this->feeType_ = nullptr;};
            inline int32_t getFeeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, 0) };
            inline TripCostCenter& setFeeType(int32_t feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


            // invoiceId Field Functions 
            bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
            void deleteInvoiceId() { this->invoiceId_ = nullptr;};
            inline int64_t getInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
            inline TripCostCenter& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


            // invoiceTitle Field Functions 
            bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
            void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
            inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
            inline TripCostCenter& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


            // projectCode Field Functions 
            bool hasProjectCode() const { return this->projectCode_ != nullptr;};
            void deleteProjectCode() { this->projectCode_ = nullptr;};
            inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
            inline TripCostCenter& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


            // projectTitle Field Functions 
            bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
            void deleteProjectTitle() { this->projectTitle_ = nullptr;};
            inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
            inline TripCostCenter& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


          protected:
            shared_ptr<string> costCenterCode_ {};
            shared_ptr<string> costCenterId_ {};
            shared_ptr<string> costCenterName_ {};
            shared_ptr<string> externalExtField_ {};
            shared_ptr<int32_t> feeType_ {};
            shared_ptr<int64_t> invoiceId_ {};
            shared_ptr<string> invoiceTitle_ {};
            shared_ptr<string> projectCode_ {};
            shared_ptr<string> projectTitle_ {};
          };

          class Department : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Department& obj) { 
              DARABONBA_PTR_TO_JSON(cascade_dept_mask, cascadeDeptMask_);
              DARABONBA_PTR_TO_JSON(cascade_dept_name, cascadeDeptName_);
              DARABONBA_PTR_TO_JSON(depart_id, departId_);
              DARABONBA_PTR_TO_JSON(depart_name, departName_);
              DARABONBA_PTR_TO_JSON(out_depart_id, outDepartId_);
            };
            friend void from_json(const Darabonba::Json& j, Department& obj) { 
              DARABONBA_PTR_FROM_JSON(cascade_dept_mask, cascadeDeptMask_);
              DARABONBA_PTR_FROM_JSON(cascade_dept_name, cascadeDeptName_);
              DARABONBA_PTR_FROM_JSON(depart_id, departId_);
              DARABONBA_PTR_FROM_JSON(depart_name, departName_);
              DARABONBA_PTR_FROM_JSON(out_depart_id, outDepartId_);
            };
            Department() = default ;
            Department(const Department &) = default ;
            Department(Department &&) = default ;
            Department(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Department() = default ;
            Department& operator=(const Department &) = default ;
            Department& operator=(Department &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cascadeDeptMask_ == nullptr
        && this->cascadeDeptName_ == nullptr && this->departId_ == nullptr && this->departName_ == nullptr && this->outDepartId_ == nullptr; };
            // cascadeDeptMask Field Functions 
            bool hasCascadeDeptMask() const { return this->cascadeDeptMask_ != nullptr;};
            void deleteCascadeDeptMask() { this->cascadeDeptMask_ = nullptr;};
            inline string getCascadeDeptMask() const { DARABONBA_PTR_GET_DEFAULT(cascadeDeptMask_, "") };
            inline Department& setCascadeDeptMask(string cascadeDeptMask) { DARABONBA_PTR_SET_VALUE(cascadeDeptMask_, cascadeDeptMask) };


            // cascadeDeptName Field Functions 
            bool hasCascadeDeptName() const { return this->cascadeDeptName_ != nullptr;};
            void deleteCascadeDeptName() { this->cascadeDeptName_ = nullptr;};
            inline string getCascadeDeptName() const { DARABONBA_PTR_GET_DEFAULT(cascadeDeptName_, "") };
            inline Department& setCascadeDeptName(string cascadeDeptName) { DARABONBA_PTR_SET_VALUE(cascadeDeptName_, cascadeDeptName) };


            // departId Field Functions 
            bool hasDepartId() const { return this->departId_ != nullptr;};
            void deleteDepartId() { this->departId_ = nullptr;};
            inline string getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
            inline Department& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


            // departName Field Functions 
            bool hasDepartName() const { return this->departName_ != nullptr;};
            void deleteDepartName() { this->departName_ = nullptr;};
            inline string getDepartName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
            inline Department& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


            // outDepartId Field Functions 
            bool hasOutDepartId() const { return this->outDepartId_ != nullptr;};
            void deleteOutDepartId() { this->outDepartId_ = nullptr;};
            inline string getOutDepartId() const { DARABONBA_PTR_GET_DEFAULT(outDepartId_, "") };
            inline Department& setOutDepartId(string outDepartId) { DARABONBA_PTR_SET_VALUE(outDepartId_, outDepartId) };


          protected:
            shared_ptr<string> cascadeDeptMask_ {};
            shared_ptr<string> cascadeDeptName_ {};
            shared_ptr<string> departId_ {};
            shared_ptr<string> departName_ {};
            shared_ptr<string> outDepartId_ {};
          };

          class ApplyInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ApplyInfo& obj) { 
              DARABONBA_PTR_TO_JSON(apply_business_id, applyBusinessId_);
              DARABONBA_PTR_TO_JSON(apply_business_name, applyBusinessName_);
              DARABONBA_PTR_TO_JSON(apply_id, applyId_);
              DARABONBA_PTR_TO_JSON(exceed_apply, exceedApply_);
              DARABONBA_PTR_TO_JSON(itinerary_no, itineraryNo_);
            };
            friend void from_json(const Darabonba::Json& j, ApplyInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(apply_business_id, applyBusinessId_);
              DARABONBA_PTR_FROM_JSON(apply_business_name, applyBusinessName_);
              DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
              DARABONBA_PTR_FROM_JSON(exceed_apply, exceedApply_);
              DARABONBA_PTR_FROM_JSON(itinerary_no, itineraryNo_);
            };
            ApplyInfo() = default ;
            ApplyInfo(const ApplyInfo &) = default ;
            ApplyInfo(ApplyInfo &&) = default ;
            ApplyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ApplyInfo() = default ;
            ApplyInfo& operator=(const ApplyInfo &) = default ;
            ApplyInfo& operator=(ApplyInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ExceedApply : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ExceedApply& obj) { 
                DARABONBA_PTR_TO_JSON(exceed_reason, exceedReason_);
                DARABONBA_PTR_TO_JSON(exceed_type, exceedType_);
                DARABONBA_PTR_TO_JSON(flow_no, flowNo_);
                DARABONBA_PTR_TO_JSON(id, id_);
              };
              friend void from_json(const Darabonba::Json& j, ExceedApply& obj) { 
                DARABONBA_PTR_FROM_JSON(exceed_reason, exceedReason_);
                DARABONBA_PTR_FROM_JSON(exceed_type, exceedType_);
                DARABONBA_PTR_FROM_JSON(flow_no, flowNo_);
                DARABONBA_PTR_FROM_JSON(id, id_);
              };
              ExceedApply() = default ;
              ExceedApply(const ExceedApply &) = default ;
              ExceedApply(ExceedApply &&) = default ;
              ExceedApply(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ExceedApply() = default ;
              ExceedApply& operator=(const ExceedApply &) = default ;
              ExceedApply& operator=(ExceedApply &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->exceedReason_ == nullptr
        && this->exceedType_ == nullptr && this->flowNo_ == nullptr && this->id_ == nullptr; };
              // exceedReason Field Functions 
              bool hasExceedReason() const { return this->exceedReason_ != nullptr;};
              void deleteExceedReason() { this->exceedReason_ = nullptr;};
              inline string getExceedReason() const { DARABONBA_PTR_GET_DEFAULT(exceedReason_, "") };
              inline ExceedApply& setExceedReason(string exceedReason) { DARABONBA_PTR_SET_VALUE(exceedReason_, exceedReason) };


              // exceedType Field Functions 
              bool hasExceedType() const { return this->exceedType_ != nullptr;};
              void deleteExceedType() { this->exceedType_ = nullptr;};
              inline int32_t getExceedType() const { DARABONBA_PTR_GET_DEFAULT(exceedType_, 0) };
              inline ExceedApply& setExceedType(int32_t exceedType) { DARABONBA_PTR_SET_VALUE(exceedType_, exceedType) };


              // flowNo Field Functions 
              bool hasFlowNo() const { return this->flowNo_ != nullptr;};
              void deleteFlowNo() { this->flowNo_ = nullptr;};
              inline int64_t getFlowNo() const { DARABONBA_PTR_GET_DEFAULT(flowNo_, 0L) };
              inline ExceedApply& setFlowNo(int64_t flowNo) { DARABONBA_PTR_SET_VALUE(flowNo_, flowNo) };


              // id Field Functions 
              bool hasId() const { return this->id_ != nullptr;};
              void deleteId() { this->id_ = nullptr;};
              inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
              inline ExceedApply& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            protected:
              shared_ptr<string> exceedReason_ {};
              shared_ptr<int32_t> exceedType_ {};
              shared_ptr<int64_t> flowNo_ {};
              shared_ptr<int64_t> id_ {};
            };

            virtual bool empty() const override { return this->applyBusinessId_ == nullptr
        && this->applyBusinessName_ == nullptr && this->applyId_ == nullptr && this->exceedApply_ == nullptr && this->itineraryNo_ == nullptr; };
            // applyBusinessId Field Functions 
            bool hasApplyBusinessId() const { return this->applyBusinessId_ != nullptr;};
            void deleteApplyBusinessId() { this->applyBusinessId_ = nullptr;};
            inline string getApplyBusinessId() const { DARABONBA_PTR_GET_DEFAULT(applyBusinessId_, "") };
            inline ApplyInfo& setApplyBusinessId(string applyBusinessId) { DARABONBA_PTR_SET_VALUE(applyBusinessId_, applyBusinessId) };


            // applyBusinessName Field Functions 
            bool hasApplyBusinessName() const { return this->applyBusinessName_ != nullptr;};
            void deleteApplyBusinessName() { this->applyBusinessName_ = nullptr;};
            inline string getApplyBusinessName() const { DARABONBA_PTR_GET_DEFAULT(applyBusinessName_, "") };
            inline ApplyInfo& setApplyBusinessName(string applyBusinessName) { DARABONBA_PTR_SET_VALUE(applyBusinessName_, applyBusinessName) };


            // applyId Field Functions 
            bool hasApplyId() const { return this->applyId_ != nullptr;};
            void deleteApplyId() { this->applyId_ = nullptr;};
            inline string getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
            inline ApplyInfo& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


            // exceedApply Field Functions 
            bool hasExceedApply() const { return this->exceedApply_ != nullptr;};
            void deleteExceedApply() { this->exceedApply_ = nullptr;};
            inline const vector<ApplyInfo::ExceedApply> & getExceedApply() const { DARABONBA_PTR_GET_CONST(exceedApply_, vector<ApplyInfo::ExceedApply>) };
            inline vector<ApplyInfo::ExceedApply> getExceedApply() { DARABONBA_PTR_GET(exceedApply_, vector<ApplyInfo::ExceedApply>) };
            inline ApplyInfo& setExceedApply(const vector<ApplyInfo::ExceedApply> & exceedApply) { DARABONBA_PTR_SET_VALUE(exceedApply_, exceedApply) };
            inline ApplyInfo& setExceedApply(vector<ApplyInfo::ExceedApply> && exceedApply) { DARABONBA_PTR_SET_RVALUE(exceedApply_, exceedApply) };


            // itineraryNo Field Functions 
            bool hasItineraryNo() const { return this->itineraryNo_ != nullptr;};
            void deleteItineraryNo() { this->itineraryNo_ = nullptr;};
            inline string getItineraryNo() const { DARABONBA_PTR_GET_DEFAULT(itineraryNo_, "") };
            inline ApplyInfo& setItineraryNo(string itineraryNo) { DARABONBA_PTR_SET_VALUE(itineraryNo_, itineraryNo) };


          protected:
            shared_ptr<string> applyBusinessId_ {};
            shared_ptr<string> applyBusinessName_ {};
            shared_ptr<string> applyId_ {};
            shared_ptr<vector<ApplyInfo::ExceedApply>> exceedApply_ {};
            shared_ptr<string> itineraryNo_ {};
          };

          virtual bool empty() const override { return this->applyInfo_ == nullptr
        && this->certNo_ == nullptr && this->certType_ == nullptr && this->department_ == nullptr && this->jobNo_ == nullptr && this->telephone_ == nullptr
        && this->travelerId_ == nullptr && this->travelerName_ == nullptr && this->travelerType_ == nullptr && this->tripCostCenter_ == nullptr && this->userType_ == nullptr; };
          // applyInfo Field Functions 
          bool hasApplyInfo() const { return this->applyInfo_ != nullptr;};
          void deleteApplyInfo() { this->applyInfo_ = nullptr;};
          inline const TraverInfos::ApplyInfo & getApplyInfo() const { DARABONBA_PTR_GET_CONST(applyInfo_, TraverInfos::ApplyInfo) };
          inline TraverInfos::ApplyInfo getApplyInfo() { DARABONBA_PTR_GET(applyInfo_, TraverInfos::ApplyInfo) };
          inline TraverInfos& setApplyInfo(const TraverInfos::ApplyInfo & applyInfo) { DARABONBA_PTR_SET_VALUE(applyInfo_, applyInfo) };
          inline TraverInfos& setApplyInfo(TraverInfos::ApplyInfo && applyInfo) { DARABONBA_PTR_SET_RVALUE(applyInfo_, applyInfo) };


          // certNo Field Functions 
          bool hasCertNo() const { return this->certNo_ != nullptr;};
          void deleteCertNo() { this->certNo_ = nullptr;};
          inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
          inline TraverInfos& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


          // certType Field Functions 
          bool hasCertType() const { return this->certType_ != nullptr;};
          void deleteCertType() { this->certType_ = nullptr;};
          inline int32_t getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, 0) };
          inline TraverInfos& setCertType(int32_t certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


          // department Field Functions 
          bool hasDepartment() const { return this->department_ != nullptr;};
          void deleteDepartment() { this->department_ = nullptr;};
          inline const TraverInfos::Department & getDepartment() const { DARABONBA_PTR_GET_CONST(department_, TraverInfos::Department) };
          inline TraverInfos::Department getDepartment() { DARABONBA_PTR_GET(department_, TraverInfos::Department) };
          inline TraverInfos& setDepartment(const TraverInfos::Department & department) { DARABONBA_PTR_SET_VALUE(department_, department) };
          inline TraverInfos& setDepartment(TraverInfos::Department && department) { DARABONBA_PTR_SET_RVALUE(department_, department) };


          // jobNo Field Functions 
          bool hasJobNo() const { return this->jobNo_ != nullptr;};
          void deleteJobNo() { this->jobNo_ = nullptr;};
          inline string getJobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
          inline TraverInfos& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


          // telephone Field Functions 
          bool hasTelephone() const { return this->telephone_ != nullptr;};
          void deleteTelephone() { this->telephone_ = nullptr;};
          inline string getTelephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
          inline TraverInfos& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


          // travelerId Field Functions 
          bool hasTravelerId() const { return this->travelerId_ != nullptr;};
          void deleteTravelerId() { this->travelerId_ = nullptr;};
          inline string getTravelerId() const { DARABONBA_PTR_GET_DEFAULT(travelerId_, "") };
          inline TraverInfos& setTravelerId(string travelerId) { DARABONBA_PTR_SET_VALUE(travelerId_, travelerId) };


          // travelerName Field Functions 
          bool hasTravelerName() const { return this->travelerName_ != nullptr;};
          void deleteTravelerName() { this->travelerName_ = nullptr;};
          inline string getTravelerName() const { DARABONBA_PTR_GET_DEFAULT(travelerName_, "") };
          inline TraverInfos& setTravelerName(string travelerName) { DARABONBA_PTR_SET_VALUE(travelerName_, travelerName) };


          // travelerType Field Functions 
          bool hasTravelerType() const { return this->travelerType_ != nullptr;};
          void deleteTravelerType() { this->travelerType_ = nullptr;};
          inline int32_t getTravelerType() const { DARABONBA_PTR_GET_DEFAULT(travelerType_, 0) };
          inline TraverInfos& setTravelerType(int32_t travelerType) { DARABONBA_PTR_SET_VALUE(travelerType_, travelerType) };


          // tripCostCenter Field Functions 
          bool hasTripCostCenter() const { return this->tripCostCenter_ != nullptr;};
          void deleteTripCostCenter() { this->tripCostCenter_ = nullptr;};
          inline const TraverInfos::TripCostCenter & getTripCostCenter() const { DARABONBA_PTR_GET_CONST(tripCostCenter_, TraverInfos::TripCostCenter) };
          inline TraverInfos::TripCostCenter getTripCostCenter() { DARABONBA_PTR_GET(tripCostCenter_, TraverInfos::TripCostCenter) };
          inline TraverInfos& setTripCostCenter(const TraverInfos::TripCostCenter & tripCostCenter) { DARABONBA_PTR_SET_VALUE(tripCostCenter_, tripCostCenter) };
          inline TraverInfos& setTripCostCenter(TraverInfos::TripCostCenter && tripCostCenter) { DARABONBA_PTR_SET_RVALUE(tripCostCenter_, tripCostCenter) };


          // userType Field Functions 
          bool hasUserType() const { return this->userType_ != nullptr;};
          void deleteUserType() { this->userType_ = nullptr;};
          inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
          inline TraverInfos& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


        protected:
          shared_ptr<TraverInfos::ApplyInfo> applyInfo_ {};
          shared_ptr<string> certNo_ {};
          shared_ptr<int32_t> certType_ {};
          shared_ptr<TraverInfos::Department> department_ {};
          shared_ptr<string> jobNo_ {};
          shared_ptr<string> telephone_ {};
          shared_ptr<string> travelerId_ {};
          shared_ptr<string> travelerName_ {};
          shared_ptr<int32_t> travelerType_ {};
          shared_ptr<TraverInfos::TripCostCenter> tripCostCenter_ {};
          shared_ptr<int32_t> userType_ {};
        };

        virtual bool empty() const override { return this->liveRoomNo_ == nullptr
        && this->roomTypeName_ == nullptr && this->traverInfos_ == nullptr; };
        // liveRoomNo Field Functions 
        bool hasLiveRoomNo() const { return this->liveRoomNo_ != nullptr;};
        void deleteLiveRoomNo() { this->liveRoomNo_ = nullptr;};
        inline string getLiveRoomNo() const { DARABONBA_PTR_GET_DEFAULT(liveRoomNo_, "") };
        inline RoomTraverInfo& setLiveRoomNo(string liveRoomNo) { DARABONBA_PTR_SET_VALUE(liveRoomNo_, liveRoomNo) };


        // roomTypeName Field Functions 
        bool hasRoomTypeName() const { return this->roomTypeName_ != nullptr;};
        void deleteRoomTypeName() { this->roomTypeName_ = nullptr;};
        inline string getRoomTypeName() const { DARABONBA_PTR_GET_DEFAULT(roomTypeName_, "") };
        inline RoomTraverInfo& setRoomTypeName(string roomTypeName) { DARABONBA_PTR_SET_VALUE(roomTypeName_, roomTypeName) };


        // traverInfos Field Functions 
        bool hasTraverInfos() const { return this->traverInfos_ != nullptr;};
        void deleteTraverInfos() { this->traverInfos_ = nullptr;};
        inline const vector<RoomTraverInfo::TraverInfos> & getTraverInfos() const { DARABONBA_PTR_GET_CONST(traverInfos_, vector<RoomTraverInfo::TraverInfos>) };
        inline vector<RoomTraverInfo::TraverInfos> getTraverInfos() { DARABONBA_PTR_GET(traverInfos_, vector<RoomTraverInfo::TraverInfos>) };
        inline RoomTraverInfo& setTraverInfos(const vector<RoomTraverInfo::TraverInfos> & traverInfos) { DARABONBA_PTR_SET_VALUE(traverInfos_, traverInfos) };
        inline RoomTraverInfo& setTraverInfos(vector<RoomTraverInfo::TraverInfos> && traverInfos) { DARABONBA_PTR_SET_RVALUE(traverInfos_, traverInfos) };


      protected:
        shared_ptr<string> liveRoomNo_ {};
        shared_ptr<string> roomTypeName_ {};
        shared_ptr<vector<RoomTraverInfo::TraverInfos>> traverInfos_ {};
      };

      class HotelOrderRefundInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelOrderRefundInfo& obj) { 
          DARABONBA_PTR_TO_JSON(cancel_fine, cancelFine_);
          DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
          DARABONBA_PTR_TO_JSON(refund_end_time, refundEndTime_);
          DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
          DARABONBA_PTR_TO_JSON(refund_reason, refundReason_);
          DARABONBA_PTR_TO_JSON(refund_start_time, refundStartTime_);
          DARABONBA_PTR_TO_JSON(refund_type, refundType_);
        };
        friend void from_json(const Darabonba::Json& j, HotelOrderRefundInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(cancel_fine, cancelFine_);
          DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
          DARABONBA_PTR_FROM_JSON(refund_end_time, refundEndTime_);
          DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
          DARABONBA_PTR_FROM_JSON(refund_reason, refundReason_);
          DARABONBA_PTR_FROM_JSON(refund_start_time, refundStartTime_);
          DARABONBA_PTR_FROM_JSON(refund_type, refundType_);
        };
        HotelOrderRefundInfo() = default ;
        HotelOrderRefundInfo(const HotelOrderRefundInfo &) = default ;
        HotelOrderRefundInfo(HotelOrderRefundInfo &&) = default ;
        HotelOrderRefundInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelOrderRefundInfo() = default ;
        HotelOrderRefundInfo& operator=(const HotelOrderRefundInfo &) = default ;
        HotelOrderRefundInfo& operator=(HotelOrderRefundInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cancelFine_ == nullptr
        && this->refundApplyId_ == nullptr && this->refundEndTime_ == nullptr && this->refundPrice_ == nullptr && this->refundReason_ == nullptr && this->refundStartTime_ == nullptr
        && this->refundType_ == nullptr; };
        // cancelFine Field Functions 
        bool hasCancelFine() const { return this->cancelFine_ != nullptr;};
        void deleteCancelFine() { this->cancelFine_ = nullptr;};
        inline int64_t getCancelFine() const { DARABONBA_PTR_GET_DEFAULT(cancelFine_, 0L) };
        inline HotelOrderRefundInfo& setCancelFine(int64_t cancelFine) { DARABONBA_PTR_SET_VALUE(cancelFine_, cancelFine) };


        // refundApplyId Field Functions 
        bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
        void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
        inline int64_t getRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, 0L) };
        inline HotelOrderRefundInfo& setRefundApplyId(int64_t refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


        // refundEndTime Field Functions 
        bool hasRefundEndTime() const { return this->refundEndTime_ != nullptr;};
        void deleteRefundEndTime() { this->refundEndTime_ = nullptr;};
        inline int64_t getRefundEndTime() const { DARABONBA_PTR_GET_DEFAULT(refundEndTime_, 0L) };
        inline HotelOrderRefundInfo& setRefundEndTime(int64_t refundEndTime) { DARABONBA_PTR_SET_VALUE(refundEndTime_, refundEndTime) };


        // refundPrice Field Functions 
        bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
        void deleteRefundPrice() { this->refundPrice_ = nullptr;};
        inline int64_t getRefundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
        inline HotelOrderRefundInfo& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


        // refundReason Field Functions 
        bool hasRefundReason() const { return this->refundReason_ != nullptr;};
        void deleteRefundReason() { this->refundReason_ = nullptr;};
        inline string getRefundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
        inline HotelOrderRefundInfo& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


        // refundStartTime Field Functions 
        bool hasRefundStartTime() const { return this->refundStartTime_ != nullptr;};
        void deleteRefundStartTime() { this->refundStartTime_ = nullptr;};
        inline int64_t getRefundStartTime() const { DARABONBA_PTR_GET_DEFAULT(refundStartTime_, 0L) };
        inline HotelOrderRefundInfo& setRefundStartTime(int64_t refundStartTime) { DARABONBA_PTR_SET_VALUE(refundStartTime_, refundStartTime) };


        // refundType Field Functions 
        bool hasRefundType() const { return this->refundType_ != nullptr;};
        void deleteRefundType() { this->refundType_ = nullptr;};
        inline int32_t getRefundType() const { DARABONBA_PTR_GET_DEFAULT(refundType_, 0) };
        inline HotelOrderRefundInfo& setRefundType(int32_t refundType) { DARABONBA_PTR_SET_VALUE(refundType_, refundType) };


      protected:
        shared_ptr<int64_t> cancelFine_ {};
        shared_ptr<int64_t> refundApplyId_ {};
        shared_ptr<int64_t> refundEndTime_ {};
        shared_ptr<int64_t> refundPrice_ {};
        shared_ptr<string> refundReason_ {};
        shared_ptr<int64_t> refundStartTime_ {};
        shared_ptr<int32_t> refundType_ {};
      };

      class HotelOrderFeeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelOrderFeeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(order_amount, orderAmount_);
          DARABONBA_PTR_TO_JSON(other_fee, otherFee_);
          DARABONBA_PTR_TO_JSON(pay_amount, payAmount_);
          DARABONBA_PTR_TO_JSON(promotion_amount, promotionAmount_);
          DARABONBA_PTR_TO_JSON(total_room_amount, totalRoomAmount_);
        };
        friend void from_json(const Darabonba::Json& j, HotelOrderFeeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(order_amount, orderAmount_);
          DARABONBA_PTR_FROM_JSON(other_fee, otherFee_);
          DARABONBA_PTR_FROM_JSON(pay_amount, payAmount_);
          DARABONBA_PTR_FROM_JSON(promotion_amount, promotionAmount_);
          DARABONBA_PTR_FROM_JSON(total_room_amount, totalRoomAmount_);
        };
        HotelOrderFeeInfo() = default ;
        HotelOrderFeeInfo(const HotelOrderFeeInfo &) = default ;
        HotelOrderFeeInfo(HotelOrderFeeInfo &&) = default ;
        HotelOrderFeeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelOrderFeeInfo() = default ;
        HotelOrderFeeInfo& operator=(const HotelOrderFeeInfo &) = default ;
        HotelOrderFeeInfo& operator=(HotelOrderFeeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->orderAmount_ == nullptr
        && this->otherFee_ == nullptr && this->payAmount_ == nullptr && this->promotionAmount_ == nullptr && this->totalRoomAmount_ == nullptr; };
        // orderAmount Field Functions 
        bool hasOrderAmount() const { return this->orderAmount_ != nullptr;};
        void deleteOrderAmount() { this->orderAmount_ = nullptr;};
        inline int64_t getOrderAmount() const { DARABONBA_PTR_GET_DEFAULT(orderAmount_, 0L) };
        inline HotelOrderFeeInfo& setOrderAmount(int64_t orderAmount) { DARABONBA_PTR_SET_VALUE(orderAmount_, orderAmount) };


        // otherFee Field Functions 
        bool hasOtherFee() const { return this->otherFee_ != nullptr;};
        void deleteOtherFee() { this->otherFee_ = nullptr;};
        inline int64_t getOtherFee() const { DARABONBA_PTR_GET_DEFAULT(otherFee_, 0L) };
        inline HotelOrderFeeInfo& setOtherFee(int64_t otherFee) { DARABONBA_PTR_SET_VALUE(otherFee_, otherFee) };


        // payAmount Field Functions 
        bool hasPayAmount() const { return this->payAmount_ != nullptr;};
        void deletePayAmount() { this->payAmount_ = nullptr;};
        inline int64_t getPayAmount() const { DARABONBA_PTR_GET_DEFAULT(payAmount_, 0L) };
        inline HotelOrderFeeInfo& setPayAmount(int64_t payAmount) { DARABONBA_PTR_SET_VALUE(payAmount_, payAmount) };


        // promotionAmount Field Functions 
        bool hasPromotionAmount() const { return this->promotionAmount_ != nullptr;};
        void deletePromotionAmount() { this->promotionAmount_ = nullptr;};
        inline int64_t getPromotionAmount() const { DARABONBA_PTR_GET_DEFAULT(promotionAmount_, 0L) };
        inline HotelOrderFeeInfo& setPromotionAmount(int64_t promotionAmount) { DARABONBA_PTR_SET_VALUE(promotionAmount_, promotionAmount) };


        // totalRoomAmount Field Functions 
        bool hasTotalRoomAmount() const { return this->totalRoomAmount_ != nullptr;};
        void deleteTotalRoomAmount() { this->totalRoomAmount_ = nullptr;};
        inline int64_t getTotalRoomAmount() const { DARABONBA_PTR_GET_DEFAULT(totalRoomAmount_, 0L) };
        inline HotelOrderFeeInfo& setTotalRoomAmount(int64_t totalRoomAmount) { DARABONBA_PTR_SET_VALUE(totalRoomAmount_, totalRoomAmount) };


      protected:
        shared_ptr<int64_t> orderAmount_ {};
        shared_ptr<int64_t> otherFee_ {};
        shared_ptr<int64_t> payAmount_ {};
        shared_ptr<int64_t> promotionAmount_ {};
        shared_ptr<int64_t> totalRoomAmount_ {};
      };

      class HotelInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelInfo& obj) { 
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
          DARABONBA_PTR_TO_JSON(country_code, countryCode_);
          DARABONBA_PTR_TO_JSON(country_name, countryName_);
          DARABONBA_PTR_TO_JSON(district_code, districtCode_);
          DARABONBA_PTR_TO_JSON(district_name, districtName_);
          DARABONBA_PTR_TO_JSON(hotel_address, hotelAddress_);
          DARABONBA_PTR_TO_JSON(hotel_brand_code, hotelBrandCode_);
          DARABONBA_PTR_TO_JSON(hotel_brand_name, hotelBrandName_);
          DARABONBA_PTR_TO_JSON(hotel_group, hotelGroup_);
          DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
          DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_TO_JSON(hotel_name_en, hotelNameEn_);
          DARABONBA_PTR_TO_JSON(star, star_);
        };
        friend void from_json(const Darabonba::Json& j, HotelInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          DARABONBA_PTR_FROM_JSON(country_code, countryCode_);
          DARABONBA_PTR_FROM_JSON(country_name, countryName_);
          DARABONBA_PTR_FROM_JSON(district_code, districtCode_);
          DARABONBA_PTR_FROM_JSON(district_name, districtName_);
          DARABONBA_PTR_FROM_JSON(hotel_address, hotelAddress_);
          DARABONBA_PTR_FROM_JSON(hotel_brand_code, hotelBrandCode_);
          DARABONBA_PTR_FROM_JSON(hotel_brand_name, hotelBrandName_);
          DARABONBA_PTR_FROM_JSON(hotel_group, hotelGroup_);
          DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
          DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_FROM_JSON(hotel_name_en, hotelNameEn_);
          DARABONBA_PTR_FROM_JSON(star, star_);
        };
        HotelInfo() = default ;
        HotelInfo(const HotelInfo &) = default ;
        HotelInfo(HotelInfo &&) = default ;
        HotelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelInfo() = default ;
        HotelInfo& operator=(const HotelInfo &) = default ;
        HotelInfo& operator=(HotelInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->cityName_ == nullptr && this->countryCode_ == nullptr && this->countryName_ == nullptr && this->districtCode_ == nullptr && this->districtName_ == nullptr
        && this->hotelAddress_ == nullptr && this->hotelBrandCode_ == nullptr && this->hotelBrandName_ == nullptr && this->hotelGroup_ == nullptr && this->hotelId_ == nullptr
        && this->hotelName_ == nullptr && this->hotelNameEn_ == nullptr && this->star_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline HotelInfo& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline HotelInfo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // countryCode Field Functions 
        bool hasCountryCode() const { return this->countryCode_ != nullptr;};
        void deleteCountryCode() { this->countryCode_ = nullptr;};
        inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
        inline HotelInfo& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


        // countryName Field Functions 
        bool hasCountryName() const { return this->countryName_ != nullptr;};
        void deleteCountryName() { this->countryName_ = nullptr;};
        inline string getCountryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
        inline HotelInfo& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


        // districtCode Field Functions 
        bool hasDistrictCode() const { return this->districtCode_ != nullptr;};
        void deleteDistrictCode() { this->districtCode_ = nullptr;};
        inline string getDistrictCode() const { DARABONBA_PTR_GET_DEFAULT(districtCode_, "") };
        inline HotelInfo& setDistrictCode(string districtCode) { DARABONBA_PTR_SET_VALUE(districtCode_, districtCode) };


        // districtName Field Functions 
        bool hasDistrictName() const { return this->districtName_ != nullptr;};
        void deleteDistrictName() { this->districtName_ = nullptr;};
        inline string getDistrictName() const { DARABONBA_PTR_GET_DEFAULT(districtName_, "") };
        inline HotelInfo& setDistrictName(string districtName) { DARABONBA_PTR_SET_VALUE(districtName_, districtName) };


        // hotelAddress Field Functions 
        bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
        void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
        inline string getHotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
        inline HotelInfo& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


        // hotelBrandCode Field Functions 
        bool hasHotelBrandCode() const { return this->hotelBrandCode_ != nullptr;};
        void deleteHotelBrandCode() { this->hotelBrandCode_ = nullptr;};
        inline string getHotelBrandCode() const { DARABONBA_PTR_GET_DEFAULT(hotelBrandCode_, "") };
        inline HotelInfo& setHotelBrandCode(string hotelBrandCode) { DARABONBA_PTR_SET_VALUE(hotelBrandCode_, hotelBrandCode) };


        // hotelBrandName Field Functions 
        bool hasHotelBrandName() const { return this->hotelBrandName_ != nullptr;};
        void deleteHotelBrandName() { this->hotelBrandName_ = nullptr;};
        inline string getHotelBrandName() const { DARABONBA_PTR_GET_DEFAULT(hotelBrandName_, "") };
        inline HotelInfo& setHotelBrandName(string hotelBrandName) { DARABONBA_PTR_SET_VALUE(hotelBrandName_, hotelBrandName) };


        // hotelGroup Field Functions 
        bool hasHotelGroup() const { return this->hotelGroup_ != nullptr;};
        void deleteHotelGroup() { this->hotelGroup_ = nullptr;};
        inline string getHotelGroup() const { DARABONBA_PTR_GET_DEFAULT(hotelGroup_, "") };
        inline HotelInfo& setHotelGroup(string hotelGroup) { DARABONBA_PTR_SET_VALUE(hotelGroup_, hotelGroup) };


        // hotelId Field Functions 
        bool hasHotelId() const { return this->hotelId_ != nullptr;};
        void deleteHotelId() { this->hotelId_ = nullptr;};
        inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
        inline HotelInfo& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


        // hotelName Field Functions 
        bool hasHotelName() const { return this->hotelName_ != nullptr;};
        void deleteHotelName() { this->hotelName_ = nullptr;};
        inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
        inline HotelInfo& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


        // hotelNameEn Field Functions 
        bool hasHotelNameEn() const { return this->hotelNameEn_ != nullptr;};
        void deleteHotelNameEn() { this->hotelNameEn_ = nullptr;};
        inline string getHotelNameEn() const { DARABONBA_PTR_GET_DEFAULT(hotelNameEn_, "") };
        inline HotelInfo& setHotelNameEn(string hotelNameEn) { DARABONBA_PTR_SET_VALUE(hotelNameEn_, hotelNameEn) };


        // star Field Functions 
        bool hasStar() const { return this->star_ != nullptr;};
        void deleteStar() { this->star_ = nullptr;};
        inline string getStar() const { DARABONBA_PTR_GET_DEFAULT(star_, "") };
        inline HotelInfo& setStar(string star) { DARABONBA_PTR_SET_VALUE(star_, star) };


      protected:
        shared_ptr<string> cityCode_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<string> countryCode_ {};
        shared_ptr<string> countryName_ {};
        shared_ptr<string> districtCode_ {};
        shared_ptr<string> districtName_ {};
        shared_ptr<string> hotelAddress_ {};
        shared_ptr<string> hotelBrandCode_ {};
        shared_ptr<string> hotelBrandName_ {};
        shared_ptr<string> hotelGroup_ {};
        shared_ptr<string> hotelId_ {};
        shared_ptr<string> hotelName_ {};
        shared_ptr<string> hotelNameEn_ {};
        shared_ptr<string> star_ {};
      };

      class BookerInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BookerInfo& obj) { 
          DARABONBA_PTR_TO_JSON(booker_role, bookerRole_);
          DARABONBA_PTR_TO_JSON(contact_email, contactEmail_);
          DARABONBA_PTR_TO_JSON(contact_phone, contactPhone_);
          DARABONBA_PTR_TO_JSON(corp_id, corpId_);
          DARABONBA_PTR_TO_JSON(department, department_);
          DARABONBA_PTR_TO_JSON(en_name, enName_);
          DARABONBA_PTR_TO_JSON(job_no, jobNo_);
          DARABONBA_PTR_TO_JSON(need_apply, needApply_);
          DARABONBA_PTR_TO_JSON(real_name, realName_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
        };
        friend void from_json(const Darabonba::Json& j, BookerInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(booker_role, bookerRole_);
          DARABONBA_PTR_FROM_JSON(contact_email, contactEmail_);
          DARABONBA_PTR_FROM_JSON(contact_phone, contactPhone_);
          DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
          DARABONBA_PTR_FROM_JSON(department, department_);
          DARABONBA_PTR_FROM_JSON(en_name, enName_);
          DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
          DARABONBA_PTR_FROM_JSON(need_apply, needApply_);
          DARABONBA_PTR_FROM_JSON(real_name, realName_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
        };
        BookerInfo() = default ;
        BookerInfo(const BookerInfo &) = default ;
        BookerInfo(BookerInfo &&) = default ;
        BookerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BookerInfo() = default ;
        BookerInfo& operator=(const BookerInfo &) = default ;
        BookerInfo& operator=(BookerInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Department : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Department& obj) { 
            DARABONBA_PTR_TO_JSON(cascade_dept_mask, cascadeDeptMask_);
            DARABONBA_PTR_TO_JSON(cascade_dept_name, cascadeDeptName_);
            DARABONBA_PTR_TO_JSON(depart_id, departId_);
            DARABONBA_PTR_TO_JSON(depart_name, departName_);
            DARABONBA_PTR_TO_JSON(out_depart_id, outDepartId_);
          };
          friend void from_json(const Darabonba::Json& j, Department& obj) { 
            DARABONBA_PTR_FROM_JSON(cascade_dept_mask, cascadeDeptMask_);
            DARABONBA_PTR_FROM_JSON(cascade_dept_name, cascadeDeptName_);
            DARABONBA_PTR_FROM_JSON(depart_id, departId_);
            DARABONBA_PTR_FROM_JSON(depart_name, departName_);
            DARABONBA_PTR_FROM_JSON(out_depart_id, outDepartId_);
          };
          Department() = default ;
          Department(const Department &) = default ;
          Department(Department &&) = default ;
          Department(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Department() = default ;
          Department& operator=(const Department &) = default ;
          Department& operator=(Department &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cascadeDeptMask_ == nullptr
        && this->cascadeDeptName_ == nullptr && this->departId_ == nullptr && this->departName_ == nullptr && this->outDepartId_ == nullptr; };
          // cascadeDeptMask Field Functions 
          bool hasCascadeDeptMask() const { return this->cascadeDeptMask_ != nullptr;};
          void deleteCascadeDeptMask() { this->cascadeDeptMask_ = nullptr;};
          inline string getCascadeDeptMask() const { DARABONBA_PTR_GET_DEFAULT(cascadeDeptMask_, "") };
          inline Department& setCascadeDeptMask(string cascadeDeptMask) { DARABONBA_PTR_SET_VALUE(cascadeDeptMask_, cascadeDeptMask) };


          // cascadeDeptName Field Functions 
          bool hasCascadeDeptName() const { return this->cascadeDeptName_ != nullptr;};
          void deleteCascadeDeptName() { this->cascadeDeptName_ = nullptr;};
          inline string getCascadeDeptName() const { DARABONBA_PTR_GET_DEFAULT(cascadeDeptName_, "") };
          inline Department& setCascadeDeptName(string cascadeDeptName) { DARABONBA_PTR_SET_VALUE(cascadeDeptName_, cascadeDeptName) };


          // departId Field Functions 
          bool hasDepartId() const { return this->departId_ != nullptr;};
          void deleteDepartId() { this->departId_ = nullptr;};
          inline string getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
          inline Department& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


          // departName Field Functions 
          bool hasDepartName() const { return this->departName_ != nullptr;};
          void deleteDepartName() { this->departName_ = nullptr;};
          inline string getDepartName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
          inline Department& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


          // outDepartId Field Functions 
          bool hasOutDepartId() const { return this->outDepartId_ != nullptr;};
          void deleteOutDepartId() { this->outDepartId_ = nullptr;};
          inline string getOutDepartId() const { DARABONBA_PTR_GET_DEFAULT(outDepartId_, "") };
          inline Department& setOutDepartId(string outDepartId) { DARABONBA_PTR_SET_VALUE(outDepartId_, outDepartId) };


        protected:
          shared_ptr<string> cascadeDeptMask_ {};
          shared_ptr<string> cascadeDeptName_ {};
          shared_ptr<string> departId_ {};
          shared_ptr<string> departName_ {};
          shared_ptr<string> outDepartId_ {};
        };

        virtual bool empty() const override { return this->bookerRole_ == nullptr
        && this->contactEmail_ == nullptr && this->contactPhone_ == nullptr && this->corpId_ == nullptr && this->department_ == nullptr && this->enName_ == nullptr
        && this->jobNo_ == nullptr && this->needApply_ == nullptr && this->realName_ == nullptr && this->userId_ == nullptr; };
        // bookerRole Field Functions 
        bool hasBookerRole() const { return this->bookerRole_ != nullptr;};
        void deleteBookerRole() { this->bookerRole_ = nullptr;};
        inline string getBookerRole() const { DARABONBA_PTR_GET_DEFAULT(bookerRole_, "") };
        inline BookerInfo& setBookerRole(string bookerRole) { DARABONBA_PTR_SET_VALUE(bookerRole_, bookerRole) };


        // contactEmail Field Functions 
        bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
        void deleteContactEmail() { this->contactEmail_ = nullptr;};
        inline string getContactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
        inline BookerInfo& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


        // contactPhone Field Functions 
        bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
        void deleteContactPhone() { this->contactPhone_ = nullptr;};
        inline string getContactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
        inline BookerInfo& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


        // corpId Field Functions 
        bool hasCorpId() const { return this->corpId_ != nullptr;};
        void deleteCorpId() { this->corpId_ = nullptr;};
        inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
        inline BookerInfo& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


        // department Field Functions 
        bool hasDepartment() const { return this->department_ != nullptr;};
        void deleteDepartment() { this->department_ = nullptr;};
        inline const BookerInfo::Department & getDepartment() const { DARABONBA_PTR_GET_CONST(department_, BookerInfo::Department) };
        inline BookerInfo::Department getDepartment() { DARABONBA_PTR_GET(department_, BookerInfo::Department) };
        inline BookerInfo& setDepartment(const BookerInfo::Department & department) { DARABONBA_PTR_SET_VALUE(department_, department) };
        inline BookerInfo& setDepartment(BookerInfo::Department && department) { DARABONBA_PTR_SET_RVALUE(department_, department) };


        // enName Field Functions 
        bool hasEnName() const { return this->enName_ != nullptr;};
        void deleteEnName() { this->enName_ = nullptr;};
        inline string getEnName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
        inline BookerInfo& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


        // jobNo Field Functions 
        bool hasJobNo() const { return this->jobNo_ != nullptr;};
        void deleteJobNo() { this->jobNo_ = nullptr;};
        inline string getJobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
        inline BookerInfo& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


        // needApply Field Functions 
        bool hasNeedApply() const { return this->needApply_ != nullptr;};
        void deleteNeedApply() { this->needApply_ = nullptr;};
        inline bool getNeedApply() const { DARABONBA_PTR_GET_DEFAULT(needApply_, false) };
        inline BookerInfo& setNeedApply(bool needApply) { DARABONBA_PTR_SET_VALUE(needApply_, needApply) };


        // realName Field Functions 
        bool hasRealName() const { return this->realName_ != nullptr;};
        void deleteRealName() { this->realName_ = nullptr;};
        inline string getRealName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
        inline BookerInfo& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline BookerInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> bookerRole_ {};
        shared_ptr<string> contactEmail_ {};
        shared_ptr<string> contactPhone_ {};
        shared_ptr<string> corpId_ {};
        shared_ptr<BookerInfo::Department> department_ {};
        shared_ptr<string> enName_ {};
        shared_ptr<string> jobNo_ {};
        shared_ptr<bool> needApply_ {};
        shared_ptr<string> realName_ {};
        shared_ptr<string> userId_ {};
      };

      class BaseOrderInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BaseOrderInfo& obj) { 
          DARABONBA_PTR_TO_JSON(book_mode, bookMode_);
          DARABONBA_PTR_TO_JSON(booker_id, bookerId_);
          DARABONBA_PTR_TO_JSON(booker_name, bookerName_);
          DARABONBA_PTR_TO_JSON(btrip_corp_id, btripCorpId_);
          DARABONBA_PTR_TO_JSON(category, category_);
          DARABONBA_PTR_TO_JSON(check_in_time, checkInTime_);
          DARABONBA_PTR_TO_JSON(check_out_time, checkOutTime_);
          DARABONBA_PTR_TO_JSON(is_agreement_price, isAgreementPrice_);
          DARABONBA_PTR_TO_JSON(nights, nights_);
          DARABONBA_PTR_TO_JSON(order_create_time, orderCreateTime_);
          DARABONBA_PTR_TO_JSON(order_id, orderId_);
          DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
          DARABONBA_PTR_TO_JSON(order_status_desc, orderStatusDesc_);
          DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
          DARABONBA_PTR_TO_JSON(pay_time, payTime_);
          DARABONBA_PTR_TO_JSON(room_num, roomNum_);
          DARABONBA_PTR_TO_JSON(settle_type, settleType_);
          DARABONBA_PTR_TO_JSON(trip_mode, tripMode_);
        };
        friend void from_json(const Darabonba::Json& j, BaseOrderInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(book_mode, bookMode_);
          DARABONBA_PTR_FROM_JSON(booker_id, bookerId_);
          DARABONBA_PTR_FROM_JSON(booker_name, bookerName_);
          DARABONBA_PTR_FROM_JSON(btrip_corp_id, btripCorpId_);
          DARABONBA_PTR_FROM_JSON(category, category_);
          DARABONBA_PTR_FROM_JSON(check_in_time, checkInTime_);
          DARABONBA_PTR_FROM_JSON(check_out_time, checkOutTime_);
          DARABONBA_PTR_FROM_JSON(is_agreement_price, isAgreementPrice_);
          DARABONBA_PTR_FROM_JSON(nights, nights_);
          DARABONBA_PTR_FROM_JSON(order_create_time, orderCreateTime_);
          DARABONBA_PTR_FROM_JSON(order_id, orderId_);
          DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
          DARABONBA_PTR_FROM_JSON(order_status_desc, orderStatusDesc_);
          DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
          DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
          DARABONBA_PTR_FROM_JSON(room_num, roomNum_);
          DARABONBA_PTR_FROM_JSON(settle_type, settleType_);
          DARABONBA_PTR_FROM_JSON(trip_mode, tripMode_);
        };
        BaseOrderInfo() = default ;
        BaseOrderInfo(const BaseOrderInfo &) = default ;
        BaseOrderInfo(BaseOrderInfo &&) = default ;
        BaseOrderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BaseOrderInfo() = default ;
        BaseOrderInfo& operator=(const BaseOrderInfo &) = default ;
        BaseOrderInfo& operator=(BaseOrderInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bookMode_ == nullptr
        && this->bookerId_ == nullptr && this->bookerName_ == nullptr && this->btripCorpId_ == nullptr && this->category_ == nullptr && this->checkInTime_ == nullptr
        && this->checkOutTime_ == nullptr && this->isAgreementPrice_ == nullptr && this->nights_ == nullptr && this->orderCreateTime_ == nullptr && this->orderId_ == nullptr
        && this->orderStatus_ == nullptr && this->orderStatusDesc_ == nullptr && this->payStatus_ == nullptr && this->payTime_ == nullptr && this->roomNum_ == nullptr
        && this->settleType_ == nullptr && this->tripMode_ == nullptr; };
        // bookMode Field Functions 
        bool hasBookMode() const { return this->bookMode_ != nullptr;};
        void deleteBookMode() { this->bookMode_ = nullptr;};
        inline string getBookMode() const { DARABONBA_PTR_GET_DEFAULT(bookMode_, "") };
        inline BaseOrderInfo& setBookMode(string bookMode) { DARABONBA_PTR_SET_VALUE(bookMode_, bookMode) };


        // bookerId Field Functions 
        bool hasBookerId() const { return this->bookerId_ != nullptr;};
        void deleteBookerId() { this->bookerId_ = nullptr;};
        inline string getBookerId() const { DARABONBA_PTR_GET_DEFAULT(bookerId_, "") };
        inline BaseOrderInfo& setBookerId(string bookerId) { DARABONBA_PTR_SET_VALUE(bookerId_, bookerId) };


        // bookerName Field Functions 
        bool hasBookerName() const { return this->bookerName_ != nullptr;};
        void deleteBookerName() { this->bookerName_ = nullptr;};
        inline string getBookerName() const { DARABONBA_PTR_GET_DEFAULT(bookerName_, "") };
        inline BaseOrderInfo& setBookerName(string bookerName) { DARABONBA_PTR_SET_VALUE(bookerName_, bookerName) };


        // btripCorpId Field Functions 
        bool hasBtripCorpId() const { return this->btripCorpId_ != nullptr;};
        void deleteBtripCorpId() { this->btripCorpId_ = nullptr;};
        inline string getBtripCorpId() const { DARABONBA_PTR_GET_DEFAULT(btripCorpId_, "") };
        inline BaseOrderInfo& setBtripCorpId(string btripCorpId) { DARABONBA_PTR_SET_VALUE(btripCorpId_, btripCorpId) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
        inline BaseOrderInfo& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // checkInTime Field Functions 
        bool hasCheckInTime() const { return this->checkInTime_ != nullptr;};
        void deleteCheckInTime() { this->checkInTime_ = nullptr;};
        inline int64_t getCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(checkInTime_, 0L) };
        inline BaseOrderInfo& setCheckInTime(int64_t checkInTime) { DARABONBA_PTR_SET_VALUE(checkInTime_, checkInTime) };


        // checkOutTime Field Functions 
        bool hasCheckOutTime() const { return this->checkOutTime_ != nullptr;};
        void deleteCheckOutTime() { this->checkOutTime_ = nullptr;};
        inline int64_t getCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(checkOutTime_, 0L) };
        inline BaseOrderInfo& setCheckOutTime(int64_t checkOutTime) { DARABONBA_PTR_SET_VALUE(checkOutTime_, checkOutTime) };


        // isAgreementPrice Field Functions 
        bool hasIsAgreementPrice() const { return this->isAgreementPrice_ != nullptr;};
        void deleteIsAgreementPrice() { this->isAgreementPrice_ = nullptr;};
        inline bool getIsAgreementPrice() const { DARABONBA_PTR_GET_DEFAULT(isAgreementPrice_, false) };
        inline BaseOrderInfo& setIsAgreementPrice(bool isAgreementPrice) { DARABONBA_PTR_SET_VALUE(isAgreementPrice_, isAgreementPrice) };


        // nights Field Functions 
        bool hasNights() const { return this->nights_ != nullptr;};
        void deleteNights() { this->nights_ = nullptr;};
        inline int32_t getNights() const { DARABONBA_PTR_GET_DEFAULT(nights_, 0) };
        inline BaseOrderInfo& setNights(int32_t nights) { DARABONBA_PTR_SET_VALUE(nights_, nights) };


        // orderCreateTime Field Functions 
        bool hasOrderCreateTime() const { return this->orderCreateTime_ != nullptr;};
        void deleteOrderCreateTime() { this->orderCreateTime_ = nullptr;};
        inline int64_t getOrderCreateTime() const { DARABONBA_PTR_GET_DEFAULT(orderCreateTime_, 0L) };
        inline BaseOrderInfo& setOrderCreateTime(int64_t orderCreateTime) { DARABONBA_PTR_SET_VALUE(orderCreateTime_, orderCreateTime) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
        inline BaseOrderInfo& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // orderStatus Field Functions 
        bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
        void deleteOrderStatus() { this->orderStatus_ = nullptr;};
        inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
        inline BaseOrderInfo& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


        // orderStatusDesc Field Functions 
        bool hasOrderStatusDesc() const { return this->orderStatusDesc_ != nullptr;};
        void deleteOrderStatusDesc() { this->orderStatusDesc_ = nullptr;};
        inline string getOrderStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(orderStatusDesc_, "") };
        inline BaseOrderInfo& setOrderStatusDesc(string orderStatusDesc) { DARABONBA_PTR_SET_VALUE(orderStatusDesc_, orderStatusDesc) };


        // payStatus Field Functions 
        bool hasPayStatus() const { return this->payStatus_ != nullptr;};
        void deletePayStatus() { this->payStatus_ = nullptr;};
        inline int32_t getPayStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
        inline BaseOrderInfo& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


        // payTime Field Functions 
        bool hasPayTime() const { return this->payTime_ != nullptr;};
        void deletePayTime() { this->payTime_ = nullptr;};
        inline int64_t getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, 0L) };
        inline BaseOrderInfo& setPayTime(int64_t payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


        // roomNum Field Functions 
        bool hasRoomNum() const { return this->roomNum_ != nullptr;};
        void deleteRoomNum() { this->roomNum_ = nullptr;};
        inline int32_t getRoomNum() const { DARABONBA_PTR_GET_DEFAULT(roomNum_, 0) };
        inline BaseOrderInfo& setRoomNum(int32_t roomNum) { DARABONBA_PTR_SET_VALUE(roomNum_, roomNum) };


        // settleType Field Functions 
        bool hasSettleType() const { return this->settleType_ != nullptr;};
        void deleteSettleType() { this->settleType_ = nullptr;};
        inline int32_t getSettleType() const { DARABONBA_PTR_GET_DEFAULT(settleType_, 0) };
        inline BaseOrderInfo& setSettleType(int32_t settleType) { DARABONBA_PTR_SET_VALUE(settleType_, settleType) };


        // tripMode Field Functions 
        bool hasTripMode() const { return this->tripMode_ != nullptr;};
        void deleteTripMode() { this->tripMode_ = nullptr;};
        inline int32_t getTripMode() const { DARABONBA_PTR_GET_DEFAULT(tripMode_, 0) };
        inline BaseOrderInfo& setTripMode(int32_t tripMode) { DARABONBA_PTR_SET_VALUE(tripMode_, tripMode) };


      protected:
        shared_ptr<string> bookMode_ {};
        shared_ptr<string> bookerId_ {};
        shared_ptr<string> bookerName_ {};
        shared_ptr<string> btripCorpId_ {};
        shared_ptr<int32_t> category_ {};
        shared_ptr<int64_t> checkInTime_ {};
        shared_ptr<int64_t> checkOutTime_ {};
        shared_ptr<bool> isAgreementPrice_ {};
        shared_ptr<int32_t> nights_ {};
        shared_ptr<int64_t> orderCreateTime_ {};
        shared_ptr<int64_t> orderId_ {};
        shared_ptr<int32_t> orderStatus_ {};
        shared_ptr<string> orderStatusDesc_ {};
        shared_ptr<int32_t> payStatus_ {};
        shared_ptr<int64_t> payTime_ {};
        shared_ptr<int32_t> roomNum_ {};
        shared_ptr<int32_t> settleType_ {};
        shared_ptr<int32_t> tripMode_ {};
      };

      virtual bool empty() const override { return this->baseOrderInfo_ == nullptr
        && this->bookerInfo_ == nullptr && this->hotelInfo_ == nullptr && this->hotelOrderFeeInfo_ == nullptr && this->hotelOrderRefundInfo_ == nullptr && this->roomTraverInfo_ == nullptr; };
      // baseOrderInfo Field Functions 
      bool hasBaseOrderInfo() const { return this->baseOrderInfo_ != nullptr;};
      void deleteBaseOrderInfo() { this->baseOrderInfo_ = nullptr;};
      inline const Module::BaseOrderInfo & getBaseOrderInfo() const { DARABONBA_PTR_GET_CONST(baseOrderInfo_, Module::BaseOrderInfo) };
      inline Module::BaseOrderInfo getBaseOrderInfo() { DARABONBA_PTR_GET(baseOrderInfo_, Module::BaseOrderInfo) };
      inline Module& setBaseOrderInfo(const Module::BaseOrderInfo & baseOrderInfo) { DARABONBA_PTR_SET_VALUE(baseOrderInfo_, baseOrderInfo) };
      inline Module& setBaseOrderInfo(Module::BaseOrderInfo && baseOrderInfo) { DARABONBA_PTR_SET_RVALUE(baseOrderInfo_, baseOrderInfo) };


      // bookerInfo Field Functions 
      bool hasBookerInfo() const { return this->bookerInfo_ != nullptr;};
      void deleteBookerInfo() { this->bookerInfo_ = nullptr;};
      inline const Module::BookerInfo & getBookerInfo() const { DARABONBA_PTR_GET_CONST(bookerInfo_, Module::BookerInfo) };
      inline Module::BookerInfo getBookerInfo() { DARABONBA_PTR_GET(bookerInfo_, Module::BookerInfo) };
      inline Module& setBookerInfo(const Module::BookerInfo & bookerInfo) { DARABONBA_PTR_SET_VALUE(bookerInfo_, bookerInfo) };
      inline Module& setBookerInfo(Module::BookerInfo && bookerInfo) { DARABONBA_PTR_SET_RVALUE(bookerInfo_, bookerInfo) };


      // hotelInfo Field Functions 
      bool hasHotelInfo() const { return this->hotelInfo_ != nullptr;};
      void deleteHotelInfo() { this->hotelInfo_ = nullptr;};
      inline const Module::HotelInfo & getHotelInfo() const { DARABONBA_PTR_GET_CONST(hotelInfo_, Module::HotelInfo) };
      inline Module::HotelInfo getHotelInfo() { DARABONBA_PTR_GET(hotelInfo_, Module::HotelInfo) };
      inline Module& setHotelInfo(const Module::HotelInfo & hotelInfo) { DARABONBA_PTR_SET_VALUE(hotelInfo_, hotelInfo) };
      inline Module& setHotelInfo(Module::HotelInfo && hotelInfo) { DARABONBA_PTR_SET_RVALUE(hotelInfo_, hotelInfo) };


      // hotelOrderFeeInfo Field Functions 
      bool hasHotelOrderFeeInfo() const { return this->hotelOrderFeeInfo_ != nullptr;};
      void deleteHotelOrderFeeInfo() { this->hotelOrderFeeInfo_ = nullptr;};
      inline const Module::HotelOrderFeeInfo & getHotelOrderFeeInfo() const { DARABONBA_PTR_GET_CONST(hotelOrderFeeInfo_, Module::HotelOrderFeeInfo) };
      inline Module::HotelOrderFeeInfo getHotelOrderFeeInfo() { DARABONBA_PTR_GET(hotelOrderFeeInfo_, Module::HotelOrderFeeInfo) };
      inline Module& setHotelOrderFeeInfo(const Module::HotelOrderFeeInfo & hotelOrderFeeInfo) { DARABONBA_PTR_SET_VALUE(hotelOrderFeeInfo_, hotelOrderFeeInfo) };
      inline Module& setHotelOrderFeeInfo(Module::HotelOrderFeeInfo && hotelOrderFeeInfo) { DARABONBA_PTR_SET_RVALUE(hotelOrderFeeInfo_, hotelOrderFeeInfo) };


      // hotelOrderRefundInfo Field Functions 
      bool hasHotelOrderRefundInfo() const { return this->hotelOrderRefundInfo_ != nullptr;};
      void deleteHotelOrderRefundInfo() { this->hotelOrderRefundInfo_ = nullptr;};
      inline const vector<Module::HotelOrderRefundInfo> & getHotelOrderRefundInfo() const { DARABONBA_PTR_GET_CONST(hotelOrderRefundInfo_, vector<Module::HotelOrderRefundInfo>) };
      inline vector<Module::HotelOrderRefundInfo> getHotelOrderRefundInfo() { DARABONBA_PTR_GET(hotelOrderRefundInfo_, vector<Module::HotelOrderRefundInfo>) };
      inline Module& setHotelOrderRefundInfo(const vector<Module::HotelOrderRefundInfo> & hotelOrderRefundInfo) { DARABONBA_PTR_SET_VALUE(hotelOrderRefundInfo_, hotelOrderRefundInfo) };
      inline Module& setHotelOrderRefundInfo(vector<Module::HotelOrderRefundInfo> && hotelOrderRefundInfo) { DARABONBA_PTR_SET_RVALUE(hotelOrderRefundInfo_, hotelOrderRefundInfo) };


      // roomTraverInfo Field Functions 
      bool hasRoomTraverInfo() const { return this->roomTraverInfo_ != nullptr;};
      void deleteRoomTraverInfo() { this->roomTraverInfo_ = nullptr;};
      inline const vector<Module::RoomTraverInfo> & getRoomTraverInfo() const { DARABONBA_PTR_GET_CONST(roomTraverInfo_, vector<Module::RoomTraverInfo>) };
      inline vector<Module::RoomTraverInfo> getRoomTraverInfo() { DARABONBA_PTR_GET(roomTraverInfo_, vector<Module::RoomTraverInfo>) };
      inline Module& setRoomTraverInfo(const vector<Module::RoomTraverInfo> & roomTraverInfo) { DARABONBA_PTR_SET_VALUE(roomTraverInfo_, roomTraverInfo) };
      inline Module& setRoomTraverInfo(vector<Module::RoomTraverInfo> && roomTraverInfo) { DARABONBA_PTR_SET_RVALUE(roomTraverInfo_, roomTraverInfo) };


    protected:
      shared_ptr<Module::BaseOrderInfo> baseOrderInfo_ {};
      shared_ptr<Module::BookerInfo> bookerInfo_ {};
      shared_ptr<Module::HotelInfo> hotelInfo_ {};
      shared_ptr<Module::HotelOrderFeeInfo> hotelOrderFeeInfo_ {};
      shared_ptr<vector<Module::HotelOrderRefundInfo>> hotelOrderRefundInfo_ {};
      shared_ptr<vector<Module::RoomTraverInfo>> roomTraverInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelOrderInfoQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelOrderInfoQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const HotelOrderInfoQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, HotelOrderInfoQueryResponseBody::Module) };
    inline HotelOrderInfoQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, HotelOrderInfoQueryResponseBody::Module) };
    inline HotelOrderInfoQueryResponseBody& setModule(const HotelOrderInfoQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelOrderInfoQueryResponseBody& setModule(HotelOrderInfoQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelOrderInfoQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelOrderInfoQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelOrderInfoQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<HotelOrderInfoQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
