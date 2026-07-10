// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCREATEREQUEST_HPP_
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
  class HotelOrderCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(arrival_time, arrivalTime_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(check_in, checkIn_);
      DARABONBA_PTR_TO_JSON(check_out, checkOut_);
      DARABONBA_PTR_TO_JSON(contract_email, contractEmail_);
      DARABONBA_PTR_TO_JSON(contract_name, contractName_);
      DARABONBA_PTR_TO_JSON(contract_phone, contractPhone_);
      DARABONBA_PTR_TO_JSON(corp_pay_price, corpPayPrice_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(itinerary_no, itineraryNo_);
      DARABONBA_PTR_TO_JSON(leave_time, leaveTime_);
      DARABONBA_PTR_TO_JSON(member_info, memberInfo_);
      DARABONBA_PTR_TO_JSON(occupant_info_list, occupantInfoList_);
      DARABONBA_PTR_TO_JSON(person_pay_price, personPayPrice_);
      DARABONBA_PTR_TO_JSON(promotion_info, promotionInfo_);
      DARABONBA_PTR_TO_JSON(rate_plan_id, ratePlanId_);
      DARABONBA_PTR_TO_JSON(room_id, roomId_);
      DARABONBA_PTR_TO_JSON(room_num, roomNum_);
      DARABONBA_PTR_TO_JSON(rp_type, rpType_);
      DARABONBA_PTR_TO_JSON(seller_id, sellerId_);
      DARABONBA_PTR_TO_JSON(shid, shid_);
      DARABONBA_PTR_TO_JSON(total_order_price, totalOrderPrice_);
      DARABONBA_PTR_TO_JSON(validate_res_key, validateResKey_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(arrival_time, arrivalTime_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
      DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
      DARABONBA_PTR_FROM_JSON(contract_email, contractEmail_);
      DARABONBA_PTR_FROM_JSON(contract_name, contractName_);
      DARABONBA_PTR_FROM_JSON(contract_phone, contractPhone_);
      DARABONBA_PTR_FROM_JSON(corp_pay_price, corpPayPrice_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(itinerary_no, itineraryNo_);
      DARABONBA_PTR_FROM_JSON(leave_time, leaveTime_);
      DARABONBA_PTR_FROM_JSON(member_info, memberInfo_);
      DARABONBA_PTR_FROM_JSON(occupant_info_list, occupantInfoList_);
      DARABONBA_PTR_FROM_JSON(person_pay_price, personPayPrice_);
      DARABONBA_PTR_FROM_JSON(promotion_info, promotionInfo_);
      DARABONBA_PTR_FROM_JSON(rate_plan_id, ratePlanId_);
      DARABONBA_PTR_FROM_JSON(room_id, roomId_);
      DARABONBA_PTR_FROM_JSON(room_num, roomNum_);
      DARABONBA_PTR_FROM_JSON(rp_type, rpType_);
      DARABONBA_PTR_FROM_JSON(seller_id, sellerId_);
      DARABONBA_PTR_FROM_JSON(shid, shid_);
      DARABONBA_PTR_FROM_JSON(total_order_price, totalOrderPrice_);
      DARABONBA_PTR_FROM_JSON(validate_res_key, validateResKey_);
    };
    HotelOrderCreateRequest() = default ;
    HotelOrderCreateRequest(const HotelOrderCreateRequest &) = default ;
    HotelOrderCreateRequest(HotelOrderCreateRequest &&) = default ;
    HotelOrderCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderCreateRequest() = default ;
    HotelOrderCreateRequest& operator=(const HotelOrderCreateRequest &) = default ;
    HotelOrderCreateRequest& operator=(HotelOrderCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PromotionInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PromotionInfo& obj) { 
        DARABONBA_PTR_TO_JSON(promotion_detail_info_list, promotionDetailInfoList_);
        DARABONBA_PTR_TO_JSON(promotion_total_price, promotionTotalPrice_);
      };
      friend void from_json(const Darabonba::Json& j, PromotionInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(promotion_detail_info_list, promotionDetailInfoList_);
        DARABONBA_PTR_FROM_JSON(promotion_total_price, promotionTotalPrice_);
      };
      PromotionInfo() = default ;
      PromotionInfo(const PromotionInfo &) = default ;
      PromotionInfo(PromotionInfo &&) = default ;
      PromotionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PromotionInfo() = default ;
      PromotionInfo& operator=(const PromotionInfo &) = default ;
      PromotionInfo& operator=(PromotionInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PromotionDetailInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PromotionDetailInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(check_status, checkStatus_);
          DARABONBA_PTR_TO_JSON(need_check, needCheck_);
          DARABONBA_PTR_TO_JSON(promotion_code, promotionCode_);
          DARABONBA_PTR_TO_JSON(promotion_id, promotionId_);
          DARABONBA_PTR_TO_JSON(promotion_name, promotionName_);
          DARABONBA_PTR_TO_JSON(promotion_price, promotionPrice_);
          DARABONBA_PTR_TO_JSON(promotion_type, promotionType_);
        };
        friend void from_json(const Darabonba::Json& j, PromotionDetailInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(check_status, checkStatus_);
          DARABONBA_PTR_FROM_JSON(need_check, needCheck_);
          DARABONBA_PTR_FROM_JSON(promotion_code, promotionCode_);
          DARABONBA_PTR_FROM_JSON(promotion_id, promotionId_);
          DARABONBA_PTR_FROM_JSON(promotion_name, promotionName_);
          DARABONBA_PTR_FROM_JSON(promotion_price, promotionPrice_);
          DARABONBA_PTR_FROM_JSON(promotion_type, promotionType_);
        };
        PromotionDetailInfoList() = default ;
        PromotionDetailInfoList(const PromotionDetailInfoList &) = default ;
        PromotionDetailInfoList(PromotionDetailInfoList &&) = default ;
        PromotionDetailInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PromotionDetailInfoList() = default ;
        PromotionDetailInfoList& operator=(const PromotionDetailInfoList &) = default ;
        PromotionDetailInfoList& operator=(PromotionDetailInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkStatus_ == nullptr
        && this->needCheck_ == nullptr && this->promotionCode_ == nullptr && this->promotionId_ == nullptr && this->promotionName_ == nullptr && this->promotionPrice_ == nullptr
        && this->promotionType_ == nullptr; };
        // checkStatus Field Functions 
        bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
        void deleteCheckStatus() { this->checkStatus_ = nullptr;};
        inline bool getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, false) };
        inline PromotionDetailInfoList& setCheckStatus(bool checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


        // needCheck Field Functions 
        bool hasNeedCheck() const { return this->needCheck_ != nullptr;};
        void deleteNeedCheck() { this->needCheck_ = nullptr;};
        inline bool getNeedCheck() const { DARABONBA_PTR_GET_DEFAULT(needCheck_, false) };
        inline PromotionDetailInfoList& setNeedCheck(bool needCheck) { DARABONBA_PTR_SET_VALUE(needCheck_, needCheck) };


        // promotionCode Field Functions 
        bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
        void deletePromotionCode() { this->promotionCode_ = nullptr;};
        inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
        inline PromotionDetailInfoList& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


        // promotionId Field Functions 
        bool hasPromotionId() const { return this->promotionId_ != nullptr;};
        void deletePromotionId() { this->promotionId_ = nullptr;};
        inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
        inline PromotionDetailInfoList& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


        // promotionName Field Functions 
        bool hasPromotionName() const { return this->promotionName_ != nullptr;};
        void deletePromotionName() { this->promotionName_ = nullptr;};
        inline string getPromotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
        inline PromotionDetailInfoList& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


        // promotionPrice Field Functions 
        bool hasPromotionPrice() const { return this->promotionPrice_ != nullptr;};
        void deletePromotionPrice() { this->promotionPrice_ = nullptr;};
        inline int64_t getPromotionPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionPrice_, 0L) };
        inline PromotionDetailInfoList& setPromotionPrice(int64_t promotionPrice) { DARABONBA_PTR_SET_VALUE(promotionPrice_, promotionPrice) };


        // promotionType Field Functions 
        bool hasPromotionType() const { return this->promotionType_ != nullptr;};
        void deletePromotionType() { this->promotionType_ = nullptr;};
        inline string getPromotionType() const { DARABONBA_PTR_GET_DEFAULT(promotionType_, "") };
        inline PromotionDetailInfoList& setPromotionType(string promotionType) { DARABONBA_PTR_SET_VALUE(promotionType_, promotionType) };


      protected:
        shared_ptr<bool> checkStatus_ {};
        shared_ptr<bool> needCheck_ {};
        shared_ptr<string> promotionCode_ {};
        shared_ptr<string> promotionId_ {};
        shared_ptr<string> promotionName_ {};
        shared_ptr<int64_t> promotionPrice_ {};
        shared_ptr<string> promotionType_ {};
      };

      virtual bool empty() const override { return this->promotionDetailInfoList_ == nullptr
        && this->promotionTotalPrice_ == nullptr; };
      // promotionDetailInfoList Field Functions 
      bool hasPromotionDetailInfoList() const { return this->promotionDetailInfoList_ != nullptr;};
      void deletePromotionDetailInfoList() { this->promotionDetailInfoList_ = nullptr;};
      inline const vector<PromotionInfo::PromotionDetailInfoList> & getPromotionDetailInfoList() const { DARABONBA_PTR_GET_CONST(promotionDetailInfoList_, vector<PromotionInfo::PromotionDetailInfoList>) };
      inline vector<PromotionInfo::PromotionDetailInfoList> getPromotionDetailInfoList() { DARABONBA_PTR_GET(promotionDetailInfoList_, vector<PromotionInfo::PromotionDetailInfoList>) };
      inline PromotionInfo& setPromotionDetailInfoList(const vector<PromotionInfo::PromotionDetailInfoList> & promotionDetailInfoList) { DARABONBA_PTR_SET_VALUE(promotionDetailInfoList_, promotionDetailInfoList) };
      inline PromotionInfo& setPromotionDetailInfoList(vector<PromotionInfo::PromotionDetailInfoList> && promotionDetailInfoList) { DARABONBA_PTR_SET_RVALUE(promotionDetailInfoList_, promotionDetailInfoList) };


      // promotionTotalPrice Field Functions 
      bool hasPromotionTotalPrice() const { return this->promotionTotalPrice_ != nullptr;};
      void deletePromotionTotalPrice() { this->promotionTotalPrice_ = nullptr;};
      inline int64_t getPromotionTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionTotalPrice_, 0L) };
      inline PromotionInfo& setPromotionTotalPrice(int64_t promotionTotalPrice) { DARABONBA_PTR_SET_VALUE(promotionTotalPrice_, promotionTotalPrice) };


    protected:
      shared_ptr<vector<PromotionInfo::PromotionDetailInfoList>> promotionDetailInfoList_ {};
      shared_ptr<int64_t> promotionTotalPrice_ {};
    };

    class OccupantInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OccupantInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(card_no, cardNo_);
        DARABONBA_PTR_TO_JSON(card_type, cardType_);
        DARABONBA_PTR_TO_JSON(cascade_dept_name, cascadeDeptName_);
        DARABONBA_PTR_TO_JSON(cost_center_info, costCenterInfo_);
        DARABONBA_PTR_TO_JSON(customer_type, customerType_);
        DARABONBA_PTR_TO_JSON(department_id, departmentId_);
        DARABONBA_PTR_TO_JSON(department_name, departmentName_);
        DARABONBA_PTR_TO_JSON(email, email_);
        DARABONBA_PTR_TO_JSON(employee_type, employeeType_);
        DARABONBA_PTR_TO_JSON(first_name, firstName_);
        DARABONBA_PTR_TO_JSON(is_booker, isBooker_);
        DARABONBA_PTR_TO_JSON(last_name, lastName_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(phone, phone_);
        DARABONBA_PTR_TO_JSON(room_no, roomNo_);
        DARABONBA_PTR_TO_JSON(staff_no, staffNo_);
        DARABONBA_PTR_TO_JSON(user_type, userType_);
      };
      friend void from_json(const Darabonba::Json& j, OccupantInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(card_no, cardNo_);
        DARABONBA_PTR_FROM_JSON(card_type, cardType_);
        DARABONBA_PTR_FROM_JSON(cascade_dept_name, cascadeDeptName_);
        DARABONBA_PTR_FROM_JSON(cost_center_info, costCenterInfo_);
        DARABONBA_PTR_FROM_JSON(customer_type, customerType_);
        DARABONBA_PTR_FROM_JSON(department_id, departmentId_);
        DARABONBA_PTR_FROM_JSON(department_name, departmentName_);
        DARABONBA_PTR_FROM_JSON(email, email_);
        DARABONBA_PTR_FROM_JSON(employee_type, employeeType_);
        DARABONBA_PTR_FROM_JSON(first_name, firstName_);
        DARABONBA_PTR_FROM_JSON(is_booker, isBooker_);
        DARABONBA_PTR_FROM_JSON(last_name, lastName_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(phone, phone_);
        DARABONBA_PTR_FROM_JSON(room_no, roomNo_);
        DARABONBA_PTR_FROM_JSON(staff_no, staffNo_);
        DARABONBA_PTR_FROM_JSON(user_type, userType_);
      };
      OccupantInfoList() = default ;
      OccupantInfoList(const OccupantInfoList &) = default ;
      OccupantInfoList(OccupantInfoList &&) = default ;
      OccupantInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OccupantInfoList() = default ;
      OccupantInfoList& operator=(const OccupantInfoList &) = default ;
      OccupantInfoList& operator=(OccupantInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CostCenterInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CostCenterInfo& obj) { 
          DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(cost_center_no, costCenterNo_);
          DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
          DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
        };
        friend void from_json(const Darabonba::Json& j, CostCenterInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(cost_center_no, costCenterNo_);
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
        virtual bool empty() const override { return this->costCenterId_ == nullptr
        && this->costCenterName_ == nullptr && this->costCenterNo_ == nullptr && this->invoiceId_ == nullptr && this->invoiceTitle_ == nullptr && this->projectCode_ == nullptr
        && this->projectTitle_ == nullptr; };
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
        shared_ptr<string> costCenterId_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> costCenterNo_ {};
        shared_ptr<string> invoiceId_ {};
        shared_ptr<string> invoiceTitle_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectTitle_ {};
      };

      virtual bool empty() const override { return this->cardNo_ == nullptr
        && this->cardType_ == nullptr && this->cascadeDeptName_ == nullptr && this->costCenterInfo_ == nullptr && this->customerType_ == nullptr && this->departmentId_ == nullptr
        && this->departmentName_ == nullptr && this->email_ == nullptr && this->employeeType_ == nullptr && this->firstName_ == nullptr && this->isBooker_ == nullptr
        && this->lastName_ == nullptr && this->name_ == nullptr && this->phone_ == nullptr && this->roomNo_ == nullptr && this->staffNo_ == nullptr
        && this->userType_ == nullptr; };
      // cardNo Field Functions 
      bool hasCardNo() const { return this->cardNo_ != nullptr;};
      void deleteCardNo() { this->cardNo_ = nullptr;};
      inline string getCardNo() const { DARABONBA_PTR_GET_DEFAULT(cardNo_, "") };
      inline OccupantInfoList& setCardNo(string cardNo) { DARABONBA_PTR_SET_VALUE(cardNo_, cardNo) };


      // cardType Field Functions 
      bool hasCardType() const { return this->cardType_ != nullptr;};
      void deleteCardType() { this->cardType_ = nullptr;};
      inline int32_t getCardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, 0) };
      inline OccupantInfoList& setCardType(int32_t cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


      // cascadeDeptName Field Functions 
      bool hasCascadeDeptName() const { return this->cascadeDeptName_ != nullptr;};
      void deleteCascadeDeptName() { this->cascadeDeptName_ = nullptr;};
      inline string getCascadeDeptName() const { DARABONBA_PTR_GET_DEFAULT(cascadeDeptName_, "") };
      inline OccupantInfoList& setCascadeDeptName(string cascadeDeptName) { DARABONBA_PTR_SET_VALUE(cascadeDeptName_, cascadeDeptName) };


      // costCenterInfo Field Functions 
      bool hasCostCenterInfo() const { return this->costCenterInfo_ != nullptr;};
      void deleteCostCenterInfo() { this->costCenterInfo_ = nullptr;};
      inline const OccupantInfoList::CostCenterInfo & getCostCenterInfo() const { DARABONBA_PTR_GET_CONST(costCenterInfo_, OccupantInfoList::CostCenterInfo) };
      inline OccupantInfoList::CostCenterInfo getCostCenterInfo() { DARABONBA_PTR_GET(costCenterInfo_, OccupantInfoList::CostCenterInfo) };
      inline OccupantInfoList& setCostCenterInfo(const OccupantInfoList::CostCenterInfo & costCenterInfo) { DARABONBA_PTR_SET_VALUE(costCenterInfo_, costCenterInfo) };
      inline OccupantInfoList& setCostCenterInfo(OccupantInfoList::CostCenterInfo && costCenterInfo) { DARABONBA_PTR_SET_RVALUE(costCenterInfo_, costCenterInfo) };


      // customerType Field Functions 
      bool hasCustomerType() const { return this->customerType_ != nullptr;};
      void deleteCustomerType() { this->customerType_ = nullptr;};
      inline int32_t getCustomerType() const { DARABONBA_PTR_GET_DEFAULT(customerType_, 0) };
      inline OccupantInfoList& setCustomerType(int32_t customerType) { DARABONBA_PTR_SET_VALUE(customerType_, customerType) };


      // departmentId Field Functions 
      bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
      void deleteDepartmentId() { this->departmentId_ = nullptr;};
      inline string getDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
      inline OccupantInfoList& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


      // departmentName Field Functions 
      bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
      void deleteDepartmentName() { this->departmentName_ = nullptr;};
      inline string getDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
      inline OccupantInfoList& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline OccupantInfoList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // employeeType Field Functions 
      bool hasEmployeeType() const { return this->employeeType_ != nullptr;};
      void deleteEmployeeType() { this->employeeType_ = nullptr;};
      inline int32_t getEmployeeType() const { DARABONBA_PTR_GET_DEFAULT(employeeType_, 0) };
      inline OccupantInfoList& setEmployeeType(int32_t employeeType) { DARABONBA_PTR_SET_VALUE(employeeType_, employeeType) };


      // firstName Field Functions 
      bool hasFirstName() const { return this->firstName_ != nullptr;};
      void deleteFirstName() { this->firstName_ = nullptr;};
      inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
      inline OccupantInfoList& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


      // isBooker Field Functions 
      bool hasIsBooker() const { return this->isBooker_ != nullptr;};
      void deleteIsBooker() { this->isBooker_ = nullptr;};
      inline bool getIsBooker() const { DARABONBA_PTR_GET_DEFAULT(isBooker_, false) };
      inline OccupantInfoList& setIsBooker(bool isBooker) { DARABONBA_PTR_SET_VALUE(isBooker_, isBooker) };


      // lastName Field Functions 
      bool hasLastName() const { return this->lastName_ != nullptr;};
      void deleteLastName() { this->lastName_ = nullptr;};
      inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
      inline OccupantInfoList& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline OccupantInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline OccupantInfoList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // roomNo Field Functions 
      bool hasRoomNo() const { return this->roomNo_ != nullptr;};
      void deleteRoomNo() { this->roomNo_ = nullptr;};
      inline int32_t getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, 0) };
      inline OccupantInfoList& setRoomNo(int32_t roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


      // staffNo Field Functions 
      bool hasStaffNo() const { return this->staffNo_ != nullptr;};
      void deleteStaffNo() { this->staffNo_ = nullptr;};
      inline string getStaffNo() const { DARABONBA_PTR_GET_DEFAULT(staffNo_, "") };
      inline OccupantInfoList& setStaffNo(string staffNo) { DARABONBA_PTR_SET_VALUE(staffNo_, staffNo) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
      inline OccupantInfoList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    protected:
      shared_ptr<string> cardNo_ {};
      shared_ptr<int32_t> cardType_ {};
      shared_ptr<string> cascadeDeptName_ {};
      shared_ptr<OccupantInfoList::CostCenterInfo> costCenterInfo_ {};
      shared_ptr<int32_t> customerType_ {};
      shared_ptr<string> departmentId_ {};
      shared_ptr<string> departmentName_ {};
      shared_ptr<string> email_ {};
      shared_ptr<int32_t> employeeType_ {};
      shared_ptr<string> firstName_ {};
      shared_ptr<bool> isBooker_ {};
      shared_ptr<string> lastName_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<string> phone_ {};
      shared_ptr<int32_t> roomNo_ {};
      shared_ptr<string> staffNo_ {};
      shared_ptr<int32_t> userType_ {};
    };

    class MemberInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MemberInfo& obj) { 
        DARABONBA_PTR_TO_JSON(card_no, cardNo_);
        DARABONBA_PTR_TO_JSON(real_name, realName_);
      };
      friend void from_json(const Darabonba::Json& j, MemberInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(card_no, cardNo_);
        DARABONBA_PTR_FROM_JSON(real_name, realName_);
      };
      MemberInfo() = default ;
      MemberInfo(const MemberInfo &) = default ;
      MemberInfo(MemberInfo &&) = default ;
      MemberInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MemberInfo() = default ;
      MemberInfo& operator=(const MemberInfo &) = default ;
      MemberInfo& operator=(MemberInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cardNo_ == nullptr
        && this->realName_ == nullptr; };
      // cardNo Field Functions 
      bool hasCardNo() const { return this->cardNo_ != nullptr;};
      void deleteCardNo() { this->cardNo_ = nullptr;};
      inline string getCardNo() const { DARABONBA_PTR_GET_DEFAULT(cardNo_, "") };
      inline MemberInfo& setCardNo(string cardNo) { DARABONBA_PTR_SET_VALUE(cardNo_, cardNo) };


      // realName Field Functions 
      bool hasRealName() const { return this->realName_ != nullptr;};
      void deleteRealName() { this->realName_ = nullptr;};
      inline string getRealName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
      inline MemberInfo& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    protected:
      shared_ptr<string> cardNo_ {};
      shared_ptr<string> realName_ {};
    };

    class InvoiceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InvoiceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(buyer_add, buyerAdd_);
        DARABONBA_PTR_TO_JSON(buyer_bank_acc, buyerBankAcc_);
        DARABONBA_PTR_TO_JSON(buyer_bank_add, buyerBankAdd_);
        DARABONBA_PTR_TO_JSON(buyer_phone, buyerPhone_);
        DARABONBA_PTR_TO_JSON(buyer_tax_num, buyerTaxNum_);
        DARABONBA_PTR_TO_JSON(delivery_address, deliveryAddress_);
        DARABONBA_PTR_TO_JSON(delivery_area, deliveryArea_);
        DARABONBA_PTR_TO_JSON(delivery_city, deliveryCity_);
        DARABONBA_PTR_TO_JSON(delivery_province, deliveryProvince_);
        DARABONBA_PTR_TO_JSON(delivery_street, deliveryStreet_);
        DARABONBA_PTR_TO_JSON(email, email_);
        DARABONBA_PTR_TO_JSON(invoice_material, invoiceMaterial_);
        DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
        DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
        DARABONBA_PTR_TO_JSON(receiver_name, receiverName_);
        DARABONBA_PTR_TO_JSON(receiver_phone, receiverPhone_);
        DARABONBA_PTR_TO_JSON(remark, remark_);
      };
      friend void from_json(const Darabonba::Json& j, InvoiceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(buyer_add, buyerAdd_);
        DARABONBA_PTR_FROM_JSON(buyer_bank_acc, buyerBankAcc_);
        DARABONBA_PTR_FROM_JSON(buyer_bank_add, buyerBankAdd_);
        DARABONBA_PTR_FROM_JSON(buyer_phone, buyerPhone_);
        DARABONBA_PTR_FROM_JSON(buyer_tax_num, buyerTaxNum_);
        DARABONBA_PTR_FROM_JSON(delivery_address, deliveryAddress_);
        DARABONBA_PTR_FROM_JSON(delivery_area, deliveryArea_);
        DARABONBA_PTR_FROM_JSON(delivery_city, deliveryCity_);
        DARABONBA_PTR_FROM_JSON(delivery_province, deliveryProvince_);
        DARABONBA_PTR_FROM_JSON(delivery_street, deliveryStreet_);
        DARABONBA_PTR_FROM_JSON(email, email_);
        DARABONBA_PTR_FROM_JSON(invoice_material, invoiceMaterial_);
        DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
        DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
        DARABONBA_PTR_FROM_JSON(receiver_name, receiverName_);
        DARABONBA_PTR_FROM_JSON(receiver_phone, receiverPhone_);
        DARABONBA_PTR_FROM_JSON(remark, remark_);
      };
      InvoiceInfo() = default ;
      InvoiceInfo(const InvoiceInfo &) = default ;
      InvoiceInfo(InvoiceInfo &&) = default ;
      InvoiceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InvoiceInfo() = default ;
      InvoiceInfo& operator=(const InvoiceInfo &) = default ;
      InvoiceInfo& operator=(InvoiceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->buyerAdd_ == nullptr
        && this->buyerBankAcc_ == nullptr && this->buyerBankAdd_ == nullptr && this->buyerPhone_ == nullptr && this->buyerTaxNum_ == nullptr && this->deliveryAddress_ == nullptr
        && this->deliveryArea_ == nullptr && this->deliveryCity_ == nullptr && this->deliveryProvince_ == nullptr && this->deliveryStreet_ == nullptr && this->email_ == nullptr
        && this->invoiceMaterial_ == nullptr && this->invoiceTitle_ == nullptr && this->invoiceType_ == nullptr && this->receiverName_ == nullptr && this->receiverPhone_ == nullptr
        && this->remark_ == nullptr; };
      // buyerAdd Field Functions 
      bool hasBuyerAdd() const { return this->buyerAdd_ != nullptr;};
      void deleteBuyerAdd() { this->buyerAdd_ = nullptr;};
      inline string getBuyerAdd() const { DARABONBA_PTR_GET_DEFAULT(buyerAdd_, "") };
      inline InvoiceInfo& setBuyerAdd(string buyerAdd) { DARABONBA_PTR_SET_VALUE(buyerAdd_, buyerAdd) };


      // buyerBankAcc Field Functions 
      bool hasBuyerBankAcc() const { return this->buyerBankAcc_ != nullptr;};
      void deleteBuyerBankAcc() { this->buyerBankAcc_ = nullptr;};
      inline string getBuyerBankAcc() const { DARABONBA_PTR_GET_DEFAULT(buyerBankAcc_, "") };
      inline InvoiceInfo& setBuyerBankAcc(string buyerBankAcc) { DARABONBA_PTR_SET_VALUE(buyerBankAcc_, buyerBankAcc) };


      // buyerBankAdd Field Functions 
      bool hasBuyerBankAdd() const { return this->buyerBankAdd_ != nullptr;};
      void deleteBuyerBankAdd() { this->buyerBankAdd_ = nullptr;};
      inline string getBuyerBankAdd() const { DARABONBA_PTR_GET_DEFAULT(buyerBankAdd_, "") };
      inline InvoiceInfo& setBuyerBankAdd(string buyerBankAdd) { DARABONBA_PTR_SET_VALUE(buyerBankAdd_, buyerBankAdd) };


      // buyerPhone Field Functions 
      bool hasBuyerPhone() const { return this->buyerPhone_ != nullptr;};
      void deleteBuyerPhone() { this->buyerPhone_ = nullptr;};
      inline string getBuyerPhone() const { DARABONBA_PTR_GET_DEFAULT(buyerPhone_, "") };
      inline InvoiceInfo& setBuyerPhone(string buyerPhone) { DARABONBA_PTR_SET_VALUE(buyerPhone_, buyerPhone) };


      // buyerTaxNum Field Functions 
      bool hasBuyerTaxNum() const { return this->buyerTaxNum_ != nullptr;};
      void deleteBuyerTaxNum() { this->buyerTaxNum_ = nullptr;};
      inline string getBuyerTaxNum() const { DARABONBA_PTR_GET_DEFAULT(buyerTaxNum_, "") };
      inline InvoiceInfo& setBuyerTaxNum(string buyerTaxNum) { DARABONBA_PTR_SET_VALUE(buyerTaxNum_, buyerTaxNum) };


      // deliveryAddress Field Functions 
      bool hasDeliveryAddress() const { return this->deliveryAddress_ != nullptr;};
      void deleteDeliveryAddress() { this->deliveryAddress_ = nullptr;};
      inline string getDeliveryAddress() const { DARABONBA_PTR_GET_DEFAULT(deliveryAddress_, "") };
      inline InvoiceInfo& setDeliveryAddress(string deliveryAddress) { DARABONBA_PTR_SET_VALUE(deliveryAddress_, deliveryAddress) };


      // deliveryArea Field Functions 
      bool hasDeliveryArea() const { return this->deliveryArea_ != nullptr;};
      void deleteDeliveryArea() { this->deliveryArea_ = nullptr;};
      inline string getDeliveryArea() const { DARABONBA_PTR_GET_DEFAULT(deliveryArea_, "") };
      inline InvoiceInfo& setDeliveryArea(string deliveryArea) { DARABONBA_PTR_SET_VALUE(deliveryArea_, deliveryArea) };


      // deliveryCity Field Functions 
      bool hasDeliveryCity() const { return this->deliveryCity_ != nullptr;};
      void deleteDeliveryCity() { this->deliveryCity_ = nullptr;};
      inline string getDeliveryCity() const { DARABONBA_PTR_GET_DEFAULT(deliveryCity_, "") };
      inline InvoiceInfo& setDeliveryCity(string deliveryCity) { DARABONBA_PTR_SET_VALUE(deliveryCity_, deliveryCity) };


      // deliveryProvince Field Functions 
      bool hasDeliveryProvince() const { return this->deliveryProvince_ != nullptr;};
      void deleteDeliveryProvince() { this->deliveryProvince_ = nullptr;};
      inline string getDeliveryProvince() const { DARABONBA_PTR_GET_DEFAULT(deliveryProvince_, "") };
      inline InvoiceInfo& setDeliveryProvince(string deliveryProvince) { DARABONBA_PTR_SET_VALUE(deliveryProvince_, deliveryProvince) };


      // deliveryStreet Field Functions 
      bool hasDeliveryStreet() const { return this->deliveryStreet_ != nullptr;};
      void deleteDeliveryStreet() { this->deliveryStreet_ = nullptr;};
      inline string getDeliveryStreet() const { DARABONBA_PTR_GET_DEFAULT(deliveryStreet_, "") };
      inline InvoiceInfo& setDeliveryStreet(string deliveryStreet) { DARABONBA_PTR_SET_VALUE(deliveryStreet_, deliveryStreet) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline InvoiceInfo& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // invoiceMaterial Field Functions 
      bool hasInvoiceMaterial() const { return this->invoiceMaterial_ != nullptr;};
      void deleteInvoiceMaterial() { this->invoiceMaterial_ = nullptr;};
      inline int32_t getInvoiceMaterial() const { DARABONBA_PTR_GET_DEFAULT(invoiceMaterial_, 0) };
      inline InvoiceInfo& setInvoiceMaterial(int32_t invoiceMaterial) { DARABONBA_PTR_SET_VALUE(invoiceMaterial_, invoiceMaterial) };


      // invoiceTitle Field Functions 
      bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
      void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
      inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
      inline InvoiceInfo& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


      // invoiceType Field Functions 
      bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
      void deleteInvoiceType() { this->invoiceType_ = nullptr;};
      inline int32_t getInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
      inline InvoiceInfo& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


      // receiverName Field Functions 
      bool hasReceiverName() const { return this->receiverName_ != nullptr;};
      void deleteReceiverName() { this->receiverName_ = nullptr;};
      inline string getReceiverName() const { DARABONBA_PTR_GET_DEFAULT(receiverName_, "") };
      inline InvoiceInfo& setReceiverName(string receiverName) { DARABONBA_PTR_SET_VALUE(receiverName_, receiverName) };


      // receiverPhone Field Functions 
      bool hasReceiverPhone() const { return this->receiverPhone_ != nullptr;};
      void deleteReceiverPhone() { this->receiverPhone_ = nullptr;};
      inline string getReceiverPhone() const { DARABONBA_PTR_GET_DEFAULT(receiverPhone_, "") };
      inline InvoiceInfo& setReceiverPhone(string receiverPhone) { DARABONBA_PTR_SET_VALUE(receiverPhone_, receiverPhone) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline InvoiceInfo& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    protected:
      shared_ptr<string> buyerAdd_ {};
      shared_ptr<string> buyerBankAcc_ {};
      shared_ptr<string> buyerBankAdd_ {};
      shared_ptr<string> buyerPhone_ {};
      shared_ptr<string> buyerTaxNum_ {};
      shared_ptr<string> deliveryAddress_ {};
      shared_ptr<string> deliveryArea_ {};
      shared_ptr<string> deliveryCity_ {};
      shared_ptr<string> deliveryProvince_ {};
      shared_ptr<string> deliveryStreet_ {};
      shared_ptr<string> email_ {};
      shared_ptr<int32_t> invoiceMaterial_ {};
      shared_ptr<string> invoiceTitle_ {};
      shared_ptr<int32_t> invoiceType_ {};
      shared_ptr<string> receiverName_ {};
      shared_ptr<string> receiverPhone_ {};
      shared_ptr<string> remark_ {};
    };

    virtual bool empty() const override { return this->arrivalTime_ == nullptr
        && this->btripUserId_ == nullptr && this->checkIn_ == nullptr && this->checkOut_ == nullptr && this->contractEmail_ == nullptr && this->contractName_ == nullptr
        && this->contractPhone_ == nullptr && this->corpPayPrice_ == nullptr && this->disOrderId_ == nullptr && this->extra_ == nullptr && this->invoiceInfo_ == nullptr
        && this->itemId_ == nullptr && this->itineraryNo_ == nullptr && this->leaveTime_ == nullptr && this->memberInfo_ == nullptr && this->occupantInfoList_ == nullptr
        && this->personPayPrice_ == nullptr && this->promotionInfo_ == nullptr && this->ratePlanId_ == nullptr && this->roomId_ == nullptr && this->roomNum_ == nullptr
        && this->rpType_ == nullptr && this->sellerId_ == nullptr && this->shid_ == nullptr && this->totalOrderPrice_ == nullptr && this->validateResKey_ == nullptr; };
    // arrivalTime Field Functions 
    bool hasArrivalTime() const { return this->arrivalTime_ != nullptr;};
    void deleteArrivalTime() { this->arrivalTime_ = nullptr;};
    inline string getArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(arrivalTime_, "") };
    inline HotelOrderCreateRequest& setArrivalTime(string arrivalTime) { DARABONBA_PTR_SET_VALUE(arrivalTime_, arrivalTime) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string getBtripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelOrderCreateRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline string getCheckIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
    inline HotelOrderCreateRequest& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


    // checkOut Field Functions 
    bool hasCheckOut() const { return this->checkOut_ != nullptr;};
    void deleteCheckOut() { this->checkOut_ = nullptr;};
    inline string getCheckOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
    inline HotelOrderCreateRequest& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


    // contractEmail Field Functions 
    bool hasContractEmail() const { return this->contractEmail_ != nullptr;};
    void deleteContractEmail() { this->contractEmail_ = nullptr;};
    inline string getContractEmail() const { DARABONBA_PTR_GET_DEFAULT(contractEmail_, "") };
    inline HotelOrderCreateRequest& setContractEmail(string contractEmail) { DARABONBA_PTR_SET_VALUE(contractEmail_, contractEmail) };


    // contractName Field Functions 
    bool hasContractName() const { return this->contractName_ != nullptr;};
    void deleteContractName() { this->contractName_ = nullptr;};
    inline string getContractName() const { DARABONBA_PTR_GET_DEFAULT(contractName_, "") };
    inline HotelOrderCreateRequest& setContractName(string contractName) { DARABONBA_PTR_SET_VALUE(contractName_, contractName) };


    // contractPhone Field Functions 
    bool hasContractPhone() const { return this->contractPhone_ != nullptr;};
    void deleteContractPhone() { this->contractPhone_ = nullptr;};
    inline string getContractPhone() const { DARABONBA_PTR_GET_DEFAULT(contractPhone_, "") };
    inline HotelOrderCreateRequest& setContractPhone(string contractPhone) { DARABONBA_PTR_SET_VALUE(contractPhone_, contractPhone) };


    // corpPayPrice Field Functions 
    bool hasCorpPayPrice() const { return this->corpPayPrice_ != nullptr;};
    void deleteCorpPayPrice() { this->corpPayPrice_ = nullptr;};
    inline int64_t getCorpPayPrice() const { DARABONBA_PTR_GET_DEFAULT(corpPayPrice_, 0L) };
    inline HotelOrderCreateRequest& setCorpPayPrice(int64_t corpPayPrice) { DARABONBA_PTR_SET_VALUE(corpPayPrice_, corpPayPrice) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string getDisOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline HotelOrderCreateRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline HotelOrderCreateRequest& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // invoiceInfo Field Functions 
    bool hasInvoiceInfo() const { return this->invoiceInfo_ != nullptr;};
    void deleteInvoiceInfo() { this->invoiceInfo_ = nullptr;};
    inline const HotelOrderCreateRequest::InvoiceInfo & getInvoiceInfo() const { DARABONBA_PTR_GET_CONST(invoiceInfo_, HotelOrderCreateRequest::InvoiceInfo) };
    inline HotelOrderCreateRequest::InvoiceInfo getInvoiceInfo() { DARABONBA_PTR_GET(invoiceInfo_, HotelOrderCreateRequest::InvoiceInfo) };
    inline HotelOrderCreateRequest& setInvoiceInfo(const HotelOrderCreateRequest::InvoiceInfo & invoiceInfo) { DARABONBA_PTR_SET_VALUE(invoiceInfo_, invoiceInfo) };
    inline HotelOrderCreateRequest& setInvoiceInfo(HotelOrderCreateRequest::InvoiceInfo && invoiceInfo) { DARABONBA_PTR_SET_RVALUE(invoiceInfo_, invoiceInfo) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline HotelOrderCreateRequest& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // itineraryNo Field Functions 
    bool hasItineraryNo() const { return this->itineraryNo_ != nullptr;};
    void deleteItineraryNo() { this->itineraryNo_ = nullptr;};
    inline string getItineraryNo() const { DARABONBA_PTR_GET_DEFAULT(itineraryNo_, "") };
    inline HotelOrderCreateRequest& setItineraryNo(string itineraryNo) { DARABONBA_PTR_SET_VALUE(itineraryNo_, itineraryNo) };


    // leaveTime Field Functions 
    bool hasLeaveTime() const { return this->leaveTime_ != nullptr;};
    void deleteLeaveTime() { this->leaveTime_ = nullptr;};
    inline string getLeaveTime() const { DARABONBA_PTR_GET_DEFAULT(leaveTime_, "") };
    inline HotelOrderCreateRequest& setLeaveTime(string leaveTime) { DARABONBA_PTR_SET_VALUE(leaveTime_, leaveTime) };


    // memberInfo Field Functions 
    bool hasMemberInfo() const { return this->memberInfo_ != nullptr;};
    void deleteMemberInfo() { this->memberInfo_ = nullptr;};
    inline const HotelOrderCreateRequest::MemberInfo & getMemberInfo() const { DARABONBA_PTR_GET_CONST(memberInfo_, HotelOrderCreateRequest::MemberInfo) };
    inline HotelOrderCreateRequest::MemberInfo getMemberInfo() { DARABONBA_PTR_GET(memberInfo_, HotelOrderCreateRequest::MemberInfo) };
    inline HotelOrderCreateRequest& setMemberInfo(const HotelOrderCreateRequest::MemberInfo & memberInfo) { DARABONBA_PTR_SET_VALUE(memberInfo_, memberInfo) };
    inline HotelOrderCreateRequest& setMemberInfo(HotelOrderCreateRequest::MemberInfo && memberInfo) { DARABONBA_PTR_SET_RVALUE(memberInfo_, memberInfo) };


    // occupantInfoList Field Functions 
    bool hasOccupantInfoList() const { return this->occupantInfoList_ != nullptr;};
    void deleteOccupantInfoList() { this->occupantInfoList_ = nullptr;};
    inline const vector<HotelOrderCreateRequest::OccupantInfoList> & getOccupantInfoList() const { DARABONBA_PTR_GET_CONST(occupantInfoList_, vector<HotelOrderCreateRequest::OccupantInfoList>) };
    inline vector<HotelOrderCreateRequest::OccupantInfoList> getOccupantInfoList() { DARABONBA_PTR_GET(occupantInfoList_, vector<HotelOrderCreateRequest::OccupantInfoList>) };
    inline HotelOrderCreateRequest& setOccupantInfoList(const vector<HotelOrderCreateRequest::OccupantInfoList> & occupantInfoList) { DARABONBA_PTR_SET_VALUE(occupantInfoList_, occupantInfoList) };
    inline HotelOrderCreateRequest& setOccupantInfoList(vector<HotelOrderCreateRequest::OccupantInfoList> && occupantInfoList) { DARABONBA_PTR_SET_RVALUE(occupantInfoList_, occupantInfoList) };


    // personPayPrice Field Functions 
    bool hasPersonPayPrice() const { return this->personPayPrice_ != nullptr;};
    void deletePersonPayPrice() { this->personPayPrice_ = nullptr;};
    inline int64_t getPersonPayPrice() const { DARABONBA_PTR_GET_DEFAULT(personPayPrice_, 0L) };
    inline HotelOrderCreateRequest& setPersonPayPrice(int64_t personPayPrice) { DARABONBA_PTR_SET_VALUE(personPayPrice_, personPayPrice) };


    // promotionInfo Field Functions 
    bool hasPromotionInfo() const { return this->promotionInfo_ != nullptr;};
    void deletePromotionInfo() { this->promotionInfo_ = nullptr;};
    inline const HotelOrderCreateRequest::PromotionInfo & getPromotionInfo() const { DARABONBA_PTR_GET_CONST(promotionInfo_, HotelOrderCreateRequest::PromotionInfo) };
    inline HotelOrderCreateRequest::PromotionInfo getPromotionInfo() { DARABONBA_PTR_GET(promotionInfo_, HotelOrderCreateRequest::PromotionInfo) };
    inline HotelOrderCreateRequest& setPromotionInfo(const HotelOrderCreateRequest::PromotionInfo & promotionInfo) { DARABONBA_PTR_SET_VALUE(promotionInfo_, promotionInfo) };
    inline HotelOrderCreateRequest& setPromotionInfo(HotelOrderCreateRequest::PromotionInfo && promotionInfo) { DARABONBA_PTR_SET_RVALUE(promotionInfo_, promotionInfo) };


    // ratePlanId Field Functions 
    bool hasRatePlanId() const { return this->ratePlanId_ != nullptr;};
    void deleteRatePlanId() { this->ratePlanId_ = nullptr;};
    inline int64_t getRatePlanId() const { DARABONBA_PTR_GET_DEFAULT(ratePlanId_, 0L) };
    inline HotelOrderCreateRequest& setRatePlanId(int64_t ratePlanId) { DARABONBA_PTR_SET_VALUE(ratePlanId_, ratePlanId) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline int64_t getRoomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, 0L) };
    inline HotelOrderCreateRequest& setRoomId(int64_t roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // roomNum Field Functions 
    bool hasRoomNum() const { return this->roomNum_ != nullptr;};
    void deleteRoomNum() { this->roomNum_ = nullptr;};
    inline int32_t getRoomNum() const { DARABONBA_PTR_GET_DEFAULT(roomNum_, 0) };
    inline HotelOrderCreateRequest& setRoomNum(int32_t roomNum) { DARABONBA_PTR_SET_VALUE(roomNum_, roomNum) };


    // rpType Field Functions 
    bool hasRpType() const { return this->rpType_ != nullptr;};
    void deleteRpType() { this->rpType_ = nullptr;};
    inline int32_t getRpType() const { DARABONBA_PTR_GET_DEFAULT(rpType_, 0) };
    inline HotelOrderCreateRequest& setRpType(int32_t rpType) { DARABONBA_PTR_SET_VALUE(rpType_, rpType) };


    // sellerId Field Functions 
    bool hasSellerId() const { return this->sellerId_ != nullptr;};
    void deleteSellerId() { this->sellerId_ = nullptr;};
    inline int64_t getSellerId() const { DARABONBA_PTR_GET_DEFAULT(sellerId_, 0L) };
    inline HotelOrderCreateRequest& setSellerId(int64_t sellerId) { DARABONBA_PTR_SET_VALUE(sellerId_, sellerId) };


    // shid Field Functions 
    bool hasShid() const { return this->shid_ != nullptr;};
    void deleteShid() { this->shid_ = nullptr;};
    inline int64_t getShid() const { DARABONBA_PTR_GET_DEFAULT(shid_, 0L) };
    inline HotelOrderCreateRequest& setShid(int64_t shid) { DARABONBA_PTR_SET_VALUE(shid_, shid) };


    // totalOrderPrice Field Functions 
    bool hasTotalOrderPrice() const { return this->totalOrderPrice_ != nullptr;};
    void deleteTotalOrderPrice() { this->totalOrderPrice_ = nullptr;};
    inline int64_t getTotalOrderPrice() const { DARABONBA_PTR_GET_DEFAULT(totalOrderPrice_, 0L) };
    inline HotelOrderCreateRequest& setTotalOrderPrice(int64_t totalOrderPrice) { DARABONBA_PTR_SET_VALUE(totalOrderPrice_, totalOrderPrice) };


    // validateResKey Field Functions 
    bool hasValidateResKey() const { return this->validateResKey_ != nullptr;};
    void deleteValidateResKey() { this->validateResKey_ = nullptr;};
    inline string getValidateResKey() const { DARABONBA_PTR_GET_DEFAULT(validateResKey_, "") };
    inline HotelOrderCreateRequest& setValidateResKey(string validateResKey) { DARABONBA_PTR_SET_VALUE(validateResKey_, validateResKey) };


  protected:
    shared_ptr<string> arrivalTime_ {};
    // This parameter is required.
    shared_ptr<string> btripUserId_ {};
    // This parameter is required.
    shared_ptr<string> checkIn_ {};
    // This parameter is required.
    shared_ptr<string> checkOut_ {};
    shared_ptr<string> contractEmail_ {};
    shared_ptr<string> contractName_ {};
    // This parameter is required.
    shared_ptr<string> contractPhone_ {};
    // This parameter is required.
    shared_ptr<int64_t> corpPayPrice_ {};
    // This parameter is required.
    shared_ptr<string> disOrderId_ {};
    shared_ptr<string> extra_ {};
    shared_ptr<HotelOrderCreateRequest::InvoiceInfo> invoiceInfo_ {};
    // This parameter is required.
    shared_ptr<int64_t> itemId_ {};
    // This parameter is required.
    shared_ptr<string> itineraryNo_ {};
    shared_ptr<string> leaveTime_ {};
    shared_ptr<HotelOrderCreateRequest::MemberInfo> memberInfo_ {};
    // This parameter is required.
    shared_ptr<vector<HotelOrderCreateRequest::OccupantInfoList>> occupantInfoList_ {};
    // This parameter is required.
    shared_ptr<int64_t> personPayPrice_ {};
    shared_ptr<HotelOrderCreateRequest::PromotionInfo> promotionInfo_ {};
    // This parameter is required.
    shared_ptr<int64_t> ratePlanId_ {};
    // This parameter is required.
    shared_ptr<int64_t> roomId_ {};
    // This parameter is required.
    shared_ptr<int32_t> roomNum_ {};
    shared_ptr<int32_t> rpType_ {};
    // This parameter is required.
    shared_ptr<int64_t> sellerId_ {};
    // This parameter is required.
    shared_ptr<int64_t> shid_ {};
    // This parameter is required.
    shared_ptr<int64_t> totalOrderPrice_ {};
    // This parameter is required.
    shared_ptr<string> validateResKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
