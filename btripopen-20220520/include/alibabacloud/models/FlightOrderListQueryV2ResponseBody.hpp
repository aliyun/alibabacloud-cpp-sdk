// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODY_HPP_
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
  class FlightOrderListQueryV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(pageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(pageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightOrderListQueryV2ResponseBody() = default ;
    FlightOrderListQueryV2ResponseBody(const FlightOrderListQueryV2ResponseBody &) = default ;
    FlightOrderListQueryV2ResponseBody(FlightOrderListQueryV2ResponseBody &&) = default ;
    FlightOrderListQueryV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBody() = default ;
    FlightOrderListQueryV2ResponseBody& operator=(const FlightOrderListQueryV2ResponseBody &) = default ;
    FlightOrderListQueryV2ResponseBody& operator=(FlightOrderListQueryV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(number, number_);
        DARABONBA_PTR_TO_JSON(scroll_id, scrollId_);
        DARABONBA_PTR_TO_JSON(total_number, totalNumber_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(number, number_);
        DARABONBA_PTR_FROM_JSON(scroll_id, scrollId_);
        DARABONBA_PTR_FROM_JSON(total_number, totalNumber_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->number_ == nullptr
        && this->scrollId_ == nullptr && this->totalNumber_ == nullptr; };
      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline int32_t getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
      inline PageInfo& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // scrollId Field Functions 
      bool hasScrollId() const { return this->scrollId_ != nullptr;};
      void deleteScrollId() { this->scrollId_ = nullptr;};
      inline string getScrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
      inline PageInfo& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


      // totalNumber Field Functions 
      bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
      void deleteTotalNumber() { this->totalNumber_ = nullptr;};
      inline int32_t getTotalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
      inline PageInfo& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


    protected:
      shared_ptr<int32_t> number_ {};
      shared_ptr<string> scrollId_ {};
      shared_ptr<int32_t> totalNumber_ {};
    };

    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(approve, approve_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(corp_name, corpName_);
        DARABONBA_PTR_TO_JSON(depart_id, departId_);
        DARABONBA_PTR_TO_JSON(depart_name, departName_);
        DARABONBA_PTR_TO_JSON(flight_order_ticket_list, flightOrderTicketList_);
        DARABONBA_PTR_TO_JSON(flight_order_user_fee_list, flightOrderUserFeeList_);
        DARABONBA_PTR_TO_JSON(flight_refund_apply_list, flightRefundApplyList_);
        DARABONBA_PTR_TO_JSON(flight_reshop_apply_list, flightReshopApplyList_);
        DARABONBA_PTR_TO_JSON(flight_segment_list, flightSegmentList_);
        DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(insure_info_list, insureInfoList_);
        DARABONBA_PTR_TO_JSON(mix_pay, mixPay_);
        DARABONBA_PTR_TO_JSON(order_reserve_amount, orderReserveAmount_);
        DARABONBA_PTR_TO_JSON(passenger_count, passengerCount_);
        DARABONBA_PTR_TO_JSON(pay_time, payTime_);
        DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(supplier, supplier_);
        DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
        DARABONBA_PTR_TO_JSON(ticket_corp_reserve_amount, ticketCorpReserveAmount_);
        DARABONBA_PTR_TO_JSON(ticket_person_reserve_amount, ticketPersonReserveAmount_);
        DARABONBA_PTR_TO_JSON(trip_mode, tripMode_);
        DARABONBA_PTR_TO_JSON(trip_type, tripType_);
        DARABONBA_PTR_TO_JSON(user_affiliate_list, userAffiliateList_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
        DARABONBA_PTR_TO_JSON(user_name, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(approve, approve_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
        DARABONBA_PTR_FROM_JSON(depart_id, departId_);
        DARABONBA_PTR_FROM_JSON(depart_name, departName_);
        DARABONBA_PTR_FROM_JSON(flight_order_ticket_list, flightOrderTicketList_);
        DARABONBA_PTR_FROM_JSON(flight_order_user_fee_list, flightOrderUserFeeList_);
        DARABONBA_PTR_FROM_JSON(flight_refund_apply_list, flightRefundApplyList_);
        DARABONBA_PTR_FROM_JSON(flight_reshop_apply_list, flightReshopApplyList_);
        DARABONBA_PTR_FROM_JSON(flight_segment_list, flightSegmentList_);
        DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(insure_info_list, insureInfoList_);
        DARABONBA_PTR_FROM_JSON(mix_pay, mixPay_);
        DARABONBA_PTR_FROM_JSON(order_reserve_amount, orderReserveAmount_);
        DARABONBA_PTR_FROM_JSON(passenger_count, passengerCount_);
        DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
        DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(supplier, supplier_);
        DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
        DARABONBA_PTR_FROM_JSON(ticket_corp_reserve_amount, ticketCorpReserveAmount_);
        DARABONBA_PTR_FROM_JSON(ticket_person_reserve_amount, ticketPersonReserveAmount_);
        DARABONBA_PTR_FROM_JSON(trip_mode, tripMode_);
        DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
        DARABONBA_PTR_FROM_JSON(user_affiliate_list, userAffiliateList_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
        DARABONBA_PTR_FROM_JSON(user_name, userName_);
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
      class UserAffiliateList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserAffiliateList& obj) { 
          DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
          DARABONBA_PTR_TO_JSON(department, department_);
          DARABONBA_PTR_TO_JSON(invoice, invoice_);
          DARABONBA_PTR_TO_JSON(project, project_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
        };
        friend void from_json(const Darabonba::Json& j, UserAffiliateList& obj) { 
          DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
          DARABONBA_PTR_FROM_JSON(department, department_);
          DARABONBA_PTR_FROM_JSON(invoice, invoice_);
          DARABONBA_PTR_FROM_JSON(project, project_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
          DARABONBA_PTR_FROM_JSON(user_name, userName_);
        };
        UserAffiliateList() = default ;
        UserAffiliateList(const UserAffiliateList &) = default ;
        UserAffiliateList(UserAffiliateList &&) = default ;
        UserAffiliateList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserAffiliateList() = default ;
        UserAffiliateList& operator=(const UserAffiliateList &) = default ;
        UserAffiliateList& operator=(UserAffiliateList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Project : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Project& obj) { 
            DARABONBA_PTR_TO_JSON(project_id, projectId_);
            DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
            DARABONBA_PTR_TO_JSON(thirdpart_project_id, thirdpartProjectId_);
          };
          friend void from_json(const Darabonba::Json& j, Project& obj) { 
            DARABONBA_PTR_FROM_JSON(project_id, projectId_);
            DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
            DARABONBA_PTR_FROM_JSON(thirdpart_project_id, thirdpartProjectId_);
          };
          Project() = default ;
          Project(const Project &) = default ;
          Project(Project &&) = default ;
          Project(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Project() = default ;
          Project& operator=(const Project &) = default ;
          Project& operator=(Project &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->projectId_ == nullptr
        && this->projectTitle_ == nullptr && this->thirdpartProjectId_ == nullptr; };
          // projectId Field Functions 
          bool hasProjectId() const { return this->projectId_ != nullptr;};
          void deleteProjectId() { this->projectId_ = nullptr;};
          inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
          inline Project& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


          // projectTitle Field Functions 
          bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
          void deleteProjectTitle() { this->projectTitle_ = nullptr;};
          inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
          inline Project& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


          // thirdpartProjectId Field Functions 
          bool hasThirdpartProjectId() const { return this->thirdpartProjectId_ != nullptr;};
          void deleteThirdpartProjectId() { this->thirdpartProjectId_ = nullptr;};
          inline string getThirdpartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartProjectId_, "") };
          inline Project& setThirdpartProjectId(string thirdpartProjectId) { DARABONBA_PTR_SET_VALUE(thirdpartProjectId_, thirdpartProjectId) };


        protected:
          shared_ptr<string> projectId_ {};
          shared_ptr<string> projectTitle_ {};
          shared_ptr<string> thirdpartProjectId_ {};
        };

        class Invoice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Invoice& obj) { 
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(title, title_);
          };
          friend void from_json(const Darabonba::Json& j, Invoice& obj) { 
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(title, title_);
          };
          Invoice() = default ;
          Invoice(const Invoice &) = default ;
          Invoice(Invoice &&) = default ;
          Invoice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Invoice() = default ;
          Invoice& operator=(const Invoice &) = default ;
          Invoice& operator=(Invoice &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->title_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Invoice& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Invoice& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> title_ {};
        };

        class Department : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Department& obj) { 
            DARABONBA_PTR_TO_JSON(depart_id, departId_);
            DARABONBA_PTR_TO_JSON(depart_name, departName_);
          };
          friend void from_json(const Darabonba::Json& j, Department& obj) { 
            DARABONBA_PTR_FROM_JSON(depart_id, departId_);
            DARABONBA_PTR_FROM_JSON(depart_name, departName_);
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
          virtual bool empty() const override { return this->departId_ == nullptr
        && this->departName_ == nullptr; };
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


        protected:
          shared_ptr<string> departId_ {};
          shared_ptr<string> departName_ {};
        };

        class CostCenter : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CostCenter& obj) { 
            DARABONBA_PTR_TO_JSON(corp_id, corpId_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(number, number_);
          };
          friend void from_json(const Darabonba::Json& j, CostCenter& obj) { 
            DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(number, number_);
          };
          CostCenter() = default ;
          CostCenter(const CostCenter &) = default ;
          CostCenter(CostCenter &&) = default ;
          CostCenter(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CostCenter() = default ;
          CostCenter& operator=(const CostCenter &) = default ;
          CostCenter& operator=(CostCenter &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->corpId_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->number_ == nullptr; };
          // corpId Field Functions 
          bool hasCorpId() const { return this->corpId_ != nullptr;};
          void deleteCorpId() { this->corpId_ = nullptr;};
          inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
          inline CostCenter& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline CostCenter& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline CostCenter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // number Field Functions 
          bool hasNumber() const { return this->number_ != nullptr;};
          void deleteNumber() { this->number_ = nullptr;};
          inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
          inline CostCenter& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        protected:
          shared_ptr<string> corpId_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> number_ {};
        };

        virtual bool empty() const override { return this->costCenter_ == nullptr
        && this->department_ == nullptr && this->invoice_ == nullptr && this->project_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
        // costCenter Field Functions 
        bool hasCostCenter() const { return this->costCenter_ != nullptr;};
        void deleteCostCenter() { this->costCenter_ = nullptr;};
        inline const UserAffiliateList::CostCenter & getCostCenter() const { DARABONBA_PTR_GET_CONST(costCenter_, UserAffiliateList::CostCenter) };
        inline UserAffiliateList::CostCenter getCostCenter() { DARABONBA_PTR_GET(costCenter_, UserAffiliateList::CostCenter) };
        inline UserAffiliateList& setCostCenter(const UserAffiliateList::CostCenter & costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };
        inline UserAffiliateList& setCostCenter(UserAffiliateList::CostCenter && costCenter) { DARABONBA_PTR_SET_RVALUE(costCenter_, costCenter) };


        // department Field Functions 
        bool hasDepartment() const { return this->department_ != nullptr;};
        void deleteDepartment() { this->department_ = nullptr;};
        inline const UserAffiliateList::Department & getDepartment() const { DARABONBA_PTR_GET_CONST(department_, UserAffiliateList::Department) };
        inline UserAffiliateList::Department getDepartment() { DARABONBA_PTR_GET(department_, UserAffiliateList::Department) };
        inline UserAffiliateList& setDepartment(const UserAffiliateList::Department & department) { DARABONBA_PTR_SET_VALUE(department_, department) };
        inline UserAffiliateList& setDepartment(UserAffiliateList::Department && department) { DARABONBA_PTR_SET_RVALUE(department_, department) };


        // invoice Field Functions 
        bool hasInvoice() const { return this->invoice_ != nullptr;};
        void deleteInvoice() { this->invoice_ = nullptr;};
        inline const UserAffiliateList::Invoice & getInvoice() const { DARABONBA_PTR_GET_CONST(invoice_, UserAffiliateList::Invoice) };
        inline UserAffiliateList::Invoice getInvoice() { DARABONBA_PTR_GET(invoice_, UserAffiliateList::Invoice) };
        inline UserAffiliateList& setInvoice(const UserAffiliateList::Invoice & invoice) { DARABONBA_PTR_SET_VALUE(invoice_, invoice) };
        inline UserAffiliateList& setInvoice(UserAffiliateList::Invoice && invoice) { DARABONBA_PTR_SET_RVALUE(invoice_, invoice) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline const UserAffiliateList::Project & getProject() const { DARABONBA_PTR_GET_CONST(project_, UserAffiliateList::Project) };
        inline UserAffiliateList::Project getProject() { DARABONBA_PTR_GET(project_, UserAffiliateList::Project) };
        inline UserAffiliateList& setProject(const UserAffiliateList::Project & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
        inline UserAffiliateList& setProject(UserAffiliateList::Project && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserAffiliateList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline UserAffiliateList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<UserAffiliateList::CostCenter> costCenter_ {};
        shared_ptr<UserAffiliateList::Department> department_ {};
        shared_ptr<UserAffiliateList::Invoice> invoice_ {};
        shared_ptr<UserAffiliateList::Project> project_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
      };

      class PriceInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PriceInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(category_code, categoryCode_);
          DARABONBA_PTR_TO_JSON(category_type, categoryType_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(pay_type, payType_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
          DARABONBA_PTR_TO_JSON(trade_id, tradeId_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, PriceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(category_code, categoryCode_);
          DARABONBA_PTR_FROM_JSON(category_type, categoryType_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(pay_type, payType_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
          DARABONBA_PTR_FROM_JSON(trade_id, tradeId_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        PriceInfoList() = default ;
        PriceInfoList(const PriceInfoList &) = default ;
        PriceInfoList(PriceInfoList &&) = default ;
        PriceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PriceInfoList() = default ;
        PriceInfoList& operator=(const PriceInfoList &) = default ;
        PriceInfoList& operator=(PriceInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->categoryCode_ == nullptr
        && this->categoryType_ == nullptr && this->gmtCreate_ == nullptr && this->payType_ == nullptr && this->price_ == nullptr && this->subOrderId_ == nullptr
        && this->tradeId_ == nullptr && this->type_ == nullptr; };
        // categoryCode Field Functions 
        bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
        void deleteCategoryCode() { this->categoryCode_ = nullptr;};
        inline int32_t getCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, 0) };
        inline PriceInfoList& setCategoryCode(int32_t categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


        // categoryType Field Functions 
        bool hasCategoryType() const { return this->categoryType_ != nullptr;};
        void deleteCategoryType() { this->categoryType_ = nullptr;};
        inline int32_t getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
        inline PriceInfoList& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline PriceInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline int32_t getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
        inline PriceInfoList& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline double getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
        inline PriceInfoList& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // subOrderId Field Functions 
        bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
        void deleteSubOrderId() { this->subOrderId_ = nullptr;};
        inline string getSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, "") };
        inline PriceInfoList& setSubOrderId(string subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


        // tradeId Field Functions 
        bool hasTradeId() const { return this->tradeId_ != nullptr;};
        void deleteTradeId() { this->tradeId_ = nullptr;};
        inline string getTradeId() const { DARABONBA_PTR_GET_DEFAULT(tradeId_, "") };
        inline PriceInfoList& setTradeId(string tradeId) { DARABONBA_PTR_SET_VALUE(tradeId_, tradeId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline PriceInfoList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int32_t> categoryCode_ {};
        shared_ptr<int32_t> categoryType_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<int32_t> payType_ {};
        shared_ptr<double> price_ {};
        shared_ptr<string> subOrderId_ {};
        shared_ptr<string> tradeId_ {};
        shared_ptr<int32_t> type_ {};
      };

      class InsureInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InsureInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(insure_id, insureId_);
          DARABONBA_PTR_TO_JSON(insure_order_amount, insureOrderAmount_);
          DARABONBA_PTR_TO_JSON(insure_price, insurePrice_);
          DARABONBA_PTR_TO_JSON(insure_type, insureType_);
          DARABONBA_PTR_TO_JSON(name_list, nameList_);
          DARABONBA_PTR_TO_JSON(number, number_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, InsureInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(insure_id, insureId_);
          DARABONBA_PTR_FROM_JSON(insure_order_amount, insureOrderAmount_);
          DARABONBA_PTR_FROM_JSON(insure_price, insurePrice_);
          DARABONBA_PTR_FROM_JSON(insure_type, insureType_);
          DARABONBA_PTR_FROM_JSON(name_list, nameList_);
          DARABONBA_PTR_FROM_JSON(number, number_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        InsureInfoList() = default ;
        InsureInfoList(const InsureInfoList &) = default ;
        InsureInfoList(InsureInfoList &&) = default ;
        InsureInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InsureInfoList() = default ;
        InsureInfoList& operator=(const InsureInfoList &) = default ;
        InsureInfoList& operator=(InsureInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->insureId_ == nullptr
        && this->insureOrderAmount_ == nullptr && this->insurePrice_ == nullptr && this->insureType_ == nullptr && this->nameList_ == nullptr && this->number_ == nullptr
        && this->status_ == nullptr; };
        // insureId Field Functions 
        bool hasInsureId() const { return this->insureId_ != nullptr;};
        void deleteInsureId() { this->insureId_ = nullptr;};
        inline string getInsureId() const { DARABONBA_PTR_GET_DEFAULT(insureId_, "") };
        inline InsureInfoList& setInsureId(string insureId) { DARABONBA_PTR_SET_VALUE(insureId_, insureId) };


        // insureOrderAmount Field Functions 
        bool hasInsureOrderAmount() const { return this->insureOrderAmount_ != nullptr;};
        void deleteInsureOrderAmount() { this->insureOrderAmount_ = nullptr;};
        inline double getInsureOrderAmount() const { DARABONBA_PTR_GET_DEFAULT(insureOrderAmount_, 0.0) };
        inline InsureInfoList& setInsureOrderAmount(double insureOrderAmount) { DARABONBA_PTR_SET_VALUE(insureOrderAmount_, insureOrderAmount) };


        // insurePrice Field Functions 
        bool hasInsurePrice() const { return this->insurePrice_ != nullptr;};
        void deleteInsurePrice() { this->insurePrice_ = nullptr;};
        inline double getInsurePrice() const { DARABONBA_PTR_GET_DEFAULT(insurePrice_, 0.0) };
        inline InsureInfoList& setInsurePrice(double insurePrice) { DARABONBA_PTR_SET_VALUE(insurePrice_, insurePrice) };


        // insureType Field Functions 
        bool hasInsureType() const { return this->insureType_ != nullptr;};
        void deleteInsureType() { this->insureType_ = nullptr;};
        inline string getInsureType() const { DARABONBA_PTR_GET_DEFAULT(insureType_, "") };
        inline InsureInfoList& setInsureType(string insureType) { DARABONBA_PTR_SET_VALUE(insureType_, insureType) };


        // nameList Field Functions 
        bool hasNameList() const { return this->nameList_ != nullptr;};
        void deleteNameList() { this->nameList_ = nullptr;};
        inline const vector<string> & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
        inline vector<string> getNameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
        inline InsureInfoList& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
        inline InsureInfoList& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline int32_t getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
        inline InsureInfoList& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline InsureInfoList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> insureId_ {};
        shared_ptr<double> insureOrderAmount_ {};
        shared_ptr<double> insurePrice_ {};
        shared_ptr<string> insureType_ {};
        shared_ptr<vector<string>> nameList_ {};
        shared_ptr<int32_t> number_ {};
        shared_ptr<int32_t> status_ {};
      };

      class FlightSegmentList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightSegmentList& obj) { 
          DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
          DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
          DARABONBA_PTR_TO_JSON(arr_apt, arrApt_);
          DARABONBA_PTR_TO_JSON(arr_apt_code, arrAptCode_);
          DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(arr_terminal, arrTerminal_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(dep_apt, depApt_);
          DARABONBA_PTR_TO_JSON(dep_apt_code, depAptCode_);
          DARABONBA_PTR_TO_JSON(dep_city, depCity_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_terminal, depTerminal_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(flight_mile, flightMile_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
          DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
        };
        friend void from_json(const Darabonba::Json& j, FlightSegmentList& obj) { 
          DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
          DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
          DARABONBA_PTR_FROM_JSON(arr_apt, arrApt_);
          DARABONBA_PTR_FROM_JSON(arr_apt_code, arrAptCode_);
          DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(arr_terminal, arrTerminal_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(dep_apt, depApt_);
          DARABONBA_PTR_FROM_JSON(dep_apt_code, depAptCode_);
          DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_terminal, depTerminal_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(flight_mile, flightMile_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
          DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
        };
        FlightSegmentList() = default ;
        FlightSegmentList(const FlightSegmentList &) = default ;
        FlightSegmentList(FlightSegmentList &&) = default ;
        FlightSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightSegmentList() = default ;
        FlightSegmentList& operator=(const FlightSegmentList &) = default ;
        FlightSegmentList& operator=(FlightSegmentList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->arrApt_ == nullptr && this->arrAptCode_ == nullptr && this->arrCity_ == nullptr && this->arrCityCode_ == nullptr
        && this->arrTerminal_ == nullptr && this->arrTime_ == nullptr && this->depApt_ == nullptr && this->depAptCode_ == nullptr && this->depCity_ == nullptr
        && this->depCityCode_ == nullptr && this->depTerminal_ == nullptr && this->depTime_ == nullptr && this->flightMile_ == nullptr && this->flightNo_ == nullptr
        && this->journeyIndex_ == nullptr && this->segmentIndex_ == nullptr && this->stopCity_ == nullptr; };
        // airlineCode Field Functions 
        bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
        void deleteAirlineCode() { this->airlineCode_ = nullptr;};
        inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
        inline FlightSegmentList& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


        // airlineName Field Functions 
        bool hasAirlineName() const { return this->airlineName_ != nullptr;};
        void deleteAirlineName() { this->airlineName_ = nullptr;};
        inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
        inline FlightSegmentList& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


        // arrApt Field Functions 
        bool hasArrApt() const { return this->arrApt_ != nullptr;};
        void deleteArrApt() { this->arrApt_ = nullptr;};
        inline string getArrApt() const { DARABONBA_PTR_GET_DEFAULT(arrApt_, "") };
        inline FlightSegmentList& setArrApt(string arrApt) { DARABONBA_PTR_SET_VALUE(arrApt_, arrApt) };


        // arrAptCode Field Functions 
        bool hasArrAptCode() const { return this->arrAptCode_ != nullptr;};
        void deleteArrAptCode() { this->arrAptCode_ = nullptr;};
        inline string getArrAptCode() const { DARABONBA_PTR_GET_DEFAULT(arrAptCode_, "") };
        inline FlightSegmentList& setArrAptCode(string arrAptCode) { DARABONBA_PTR_SET_VALUE(arrAptCode_, arrAptCode) };


        // arrCity Field Functions 
        bool hasArrCity() const { return this->arrCity_ != nullptr;};
        void deleteArrCity() { this->arrCity_ = nullptr;};
        inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
        inline FlightSegmentList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline FlightSegmentList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrTerminal Field Functions 
        bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
        void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
        inline string getArrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
        inline FlightSegmentList& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline FlightSegmentList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // depApt Field Functions 
        bool hasDepApt() const { return this->depApt_ != nullptr;};
        void deleteDepApt() { this->depApt_ = nullptr;};
        inline string getDepApt() const { DARABONBA_PTR_GET_DEFAULT(depApt_, "") };
        inline FlightSegmentList& setDepApt(string depApt) { DARABONBA_PTR_SET_VALUE(depApt_, depApt) };


        // depAptCode Field Functions 
        bool hasDepAptCode() const { return this->depAptCode_ != nullptr;};
        void deleteDepAptCode() { this->depAptCode_ = nullptr;};
        inline string getDepAptCode() const { DARABONBA_PTR_GET_DEFAULT(depAptCode_, "") };
        inline FlightSegmentList& setDepAptCode(string depAptCode) { DARABONBA_PTR_SET_VALUE(depAptCode_, depAptCode) };


        // depCity Field Functions 
        bool hasDepCity() const { return this->depCity_ != nullptr;};
        void deleteDepCity() { this->depCity_ = nullptr;};
        inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
        inline FlightSegmentList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline FlightSegmentList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depTerminal Field Functions 
        bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
        void deleteDepTerminal() { this->depTerminal_ = nullptr;};
        inline string getDepTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
        inline FlightSegmentList& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline FlightSegmentList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // flightMile Field Functions 
        bool hasFlightMile() const { return this->flightMile_ != nullptr;};
        void deleteFlightMile() { this->flightMile_ = nullptr;};
        inline int32_t getFlightMile() const { DARABONBA_PTR_GET_DEFAULT(flightMile_, 0) };
        inline FlightSegmentList& setFlightMile(int32_t flightMile) { DARABONBA_PTR_SET_VALUE(flightMile_, flightMile) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline FlightSegmentList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // journeyIndex Field Functions 
        bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
        void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
        inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
        inline FlightSegmentList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


        // segmentIndex Field Functions 
        bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
        void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
        inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
        inline FlightSegmentList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


        // stopCity Field Functions 
        bool hasStopCity() const { return this->stopCity_ != nullptr;};
        void deleteStopCity() { this->stopCity_ = nullptr;};
        inline const vector<string> & getStopCity() const { DARABONBA_PTR_GET_CONST(stopCity_, vector<string>) };
        inline vector<string> getStopCity() { DARABONBA_PTR_GET(stopCity_, vector<string>) };
        inline FlightSegmentList& setStopCity(const vector<string> & stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };
        inline FlightSegmentList& setStopCity(vector<string> && stopCity) { DARABONBA_PTR_SET_RVALUE(stopCity_, stopCity) };


      protected:
        shared_ptr<string> airlineCode_ {};
        shared_ptr<string> airlineName_ {};
        shared_ptr<string> arrApt_ {};
        shared_ptr<string> arrAptCode_ {};
        shared_ptr<string> arrCity_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrTerminal_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> depApt_ {};
        shared_ptr<string> depAptCode_ {};
        shared_ptr<string> depCity_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depTerminal_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<int32_t> flightMile_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<int32_t> journeyIndex_ {};
        shared_ptr<int32_t> segmentIndex_ {};
        shared_ptr<vector<string>> stopCity_ {};
      };

      class FlightReshopApplyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightReshopApplyList& obj) { 
          DARABONBA_PTR_TO_JSON(flight_reshop_apply_ticket_list, flightReshopApplyTicketList_);
          DARABONBA_PTR_TO_JSON(flight_reshop_segment_list, flightReshopSegmentList_);
          DARABONBA_PTR_TO_JSON(flight_reshop_user_fee_list, flightReshopUserFeeList_);
          DARABONBA_PTR_TO_JSON(relate_reshop_apply_id, relateReshopApplyId_);
          DARABONBA_PTR_TO_JSON(reshop_apply_id, reshopApplyId_);
          DARABONBA_PTR_TO_JSON(reshop_approve_id, reshopApproveId_);
          DARABONBA_PTR_TO_JSON(reshop_corp_total_amount, reshopCorpTotalAmount_);
          DARABONBA_PTR_TO_JSON(reshop_person_total_amount, reshopPersonTotalAmount_);
          DARABONBA_PTR_TO_JSON(reshop_reason, reshopReason_);
          DARABONBA_PTR_TO_JSON(reshop_reason_code, reshopReasonCode_);
          DARABONBA_PTR_TO_JSON(reshop_total_amount, reshopTotalAmount_);
          DARABONBA_PTR_TO_JSON(user_id_list, userIdList_);
        };
        friend void from_json(const Darabonba::Json& j, FlightReshopApplyList& obj) { 
          DARABONBA_PTR_FROM_JSON(flight_reshop_apply_ticket_list, flightReshopApplyTicketList_);
          DARABONBA_PTR_FROM_JSON(flight_reshop_segment_list, flightReshopSegmentList_);
          DARABONBA_PTR_FROM_JSON(flight_reshop_user_fee_list, flightReshopUserFeeList_);
          DARABONBA_PTR_FROM_JSON(relate_reshop_apply_id, relateReshopApplyId_);
          DARABONBA_PTR_FROM_JSON(reshop_apply_id, reshopApplyId_);
          DARABONBA_PTR_FROM_JSON(reshop_approve_id, reshopApproveId_);
          DARABONBA_PTR_FROM_JSON(reshop_corp_total_amount, reshopCorpTotalAmount_);
          DARABONBA_PTR_FROM_JSON(reshop_person_total_amount, reshopPersonTotalAmount_);
          DARABONBA_PTR_FROM_JSON(reshop_reason, reshopReason_);
          DARABONBA_PTR_FROM_JSON(reshop_reason_code, reshopReasonCode_);
          DARABONBA_PTR_FROM_JSON(reshop_total_amount, reshopTotalAmount_);
          DARABONBA_PTR_FROM_JSON(user_id_list, userIdList_);
        };
        FlightReshopApplyList() = default ;
        FlightReshopApplyList(const FlightReshopApplyList &) = default ;
        FlightReshopApplyList(FlightReshopApplyList &&) = default ;
        FlightReshopApplyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightReshopApplyList() = default ;
        FlightReshopApplyList& operator=(const FlightReshopApplyList &) = default ;
        FlightReshopApplyList& operator=(FlightReshopApplyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FlightReshopUserFeeList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightReshopUserFeeList& obj) { 
            DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
            DARABONBA_PTR_TO_JSON(reshop_corp_amount, reshopCorpAmount_);
            DARABONBA_PTR_TO_JSON(reshop_person_amount, reshopPersonAmount_);
            DARABONBA_PTR_TO_JSON(upgrade_fee, upgradeFee_);
            DARABONBA_PTR_TO_JSON(user_id, userId_);
          };
          friend void from_json(const Darabonba::Json& j, FlightReshopUserFeeList& obj) { 
            DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
            DARABONBA_PTR_FROM_JSON(reshop_corp_amount, reshopCorpAmount_);
            DARABONBA_PTR_FROM_JSON(reshop_person_amount, reshopPersonAmount_);
            DARABONBA_PTR_FROM_JSON(upgrade_fee, upgradeFee_);
            DARABONBA_PTR_FROM_JSON(user_id, userId_);
          };
          FlightReshopUserFeeList() = default ;
          FlightReshopUserFeeList(const FlightReshopUserFeeList &) = default ;
          FlightReshopUserFeeList(FlightReshopUserFeeList &&) = default ;
          FlightReshopUserFeeList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightReshopUserFeeList() = default ;
          FlightReshopUserFeeList& operator=(const FlightReshopUserFeeList &) = default ;
          FlightReshopUserFeeList& operator=(FlightReshopUserFeeList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->changeFee_ == nullptr
        && this->reshopCorpAmount_ == nullptr && this->reshopPersonAmount_ == nullptr && this->upgradeFee_ == nullptr && this->userId_ == nullptr; };
          // changeFee Field Functions 
          bool hasChangeFee() const { return this->changeFee_ != nullptr;};
          void deleteChangeFee() { this->changeFee_ = nullptr;};
          inline double getChangeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0.0) };
          inline FlightReshopUserFeeList& setChangeFee(double changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


          // reshopCorpAmount Field Functions 
          bool hasReshopCorpAmount() const { return this->reshopCorpAmount_ != nullptr;};
          void deleteReshopCorpAmount() { this->reshopCorpAmount_ = nullptr;};
          inline double getReshopCorpAmount() const { DARABONBA_PTR_GET_DEFAULT(reshopCorpAmount_, 0.0) };
          inline FlightReshopUserFeeList& setReshopCorpAmount(double reshopCorpAmount) { DARABONBA_PTR_SET_VALUE(reshopCorpAmount_, reshopCorpAmount) };


          // reshopPersonAmount Field Functions 
          bool hasReshopPersonAmount() const { return this->reshopPersonAmount_ != nullptr;};
          void deleteReshopPersonAmount() { this->reshopPersonAmount_ = nullptr;};
          inline double getReshopPersonAmount() const { DARABONBA_PTR_GET_DEFAULT(reshopPersonAmount_, 0.0) };
          inline FlightReshopUserFeeList& setReshopPersonAmount(double reshopPersonAmount) { DARABONBA_PTR_SET_VALUE(reshopPersonAmount_, reshopPersonAmount) };


          // upgradeFee Field Functions 
          bool hasUpgradeFee() const { return this->upgradeFee_ != nullptr;};
          void deleteUpgradeFee() { this->upgradeFee_ = nullptr;};
          inline double getUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(upgradeFee_, 0.0) };
          inline FlightReshopUserFeeList& setUpgradeFee(double upgradeFee) { DARABONBA_PTR_SET_VALUE(upgradeFee_, upgradeFee) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline FlightReshopUserFeeList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          shared_ptr<double> changeFee_ {};
          shared_ptr<double> reshopCorpAmount_ {};
          shared_ptr<double> reshopPersonAmount_ {};
          shared_ptr<double> upgradeFee_ {};
          shared_ptr<string> userId_ {};
        };

        class FlightReshopSegmentList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightReshopSegmentList& obj) { 
            DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
            DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
            DARABONBA_PTR_TO_JSON(arr_apt, arrApt_);
            DARABONBA_PTR_TO_JSON(arr_apt_code, arrAptCode_);
            DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
            DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_TO_JSON(arr_terminal, arrTerminal_);
            DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
            DARABONBA_PTR_TO_JSON(dep_apt, depApt_);
            DARABONBA_PTR_TO_JSON(dep_apt_code, depAptCode_);
            DARABONBA_PTR_TO_JSON(dep_city, depCity_);
            DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_TO_JSON(dep_terminal, depTerminal_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(flight_mile, flightMile_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
          };
          friend void from_json(const Darabonba::Json& j, FlightReshopSegmentList& obj) { 
            DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
            DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
            DARABONBA_PTR_FROM_JSON(arr_apt, arrApt_);
            DARABONBA_PTR_FROM_JSON(arr_apt_code, arrAptCode_);
            DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
            DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_FROM_JSON(arr_terminal, arrTerminal_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(dep_apt, depApt_);
            DARABONBA_PTR_FROM_JSON(dep_apt_code, depAptCode_);
            DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
            DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_terminal, depTerminal_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(flight_mile, flightMile_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
          };
          FlightReshopSegmentList() = default ;
          FlightReshopSegmentList(const FlightReshopSegmentList &) = default ;
          FlightReshopSegmentList(FlightReshopSegmentList &&) = default ;
          FlightReshopSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightReshopSegmentList() = default ;
          FlightReshopSegmentList& operator=(const FlightReshopSegmentList &) = default ;
          FlightReshopSegmentList& operator=(FlightReshopSegmentList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->arrApt_ == nullptr && this->arrAptCode_ == nullptr && this->arrCity_ == nullptr && this->arrCityCode_ == nullptr
        && this->arrTerminal_ == nullptr && this->arrTime_ == nullptr && this->depApt_ == nullptr && this->depAptCode_ == nullptr && this->depCity_ == nullptr
        && this->depCityCode_ == nullptr && this->depTerminal_ == nullptr && this->depTime_ == nullptr && this->flightMile_ == nullptr && this->flightNo_ == nullptr
        && this->journeyIndex_ == nullptr && this->segmentIndex_ == nullptr && this->stopCity_ == nullptr; };
          // airlineCode Field Functions 
          bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
          void deleteAirlineCode() { this->airlineCode_ = nullptr;};
          inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
          inline FlightReshopSegmentList& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


          // airlineName Field Functions 
          bool hasAirlineName() const { return this->airlineName_ != nullptr;};
          void deleteAirlineName() { this->airlineName_ = nullptr;};
          inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
          inline FlightReshopSegmentList& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


          // arrApt Field Functions 
          bool hasArrApt() const { return this->arrApt_ != nullptr;};
          void deleteArrApt() { this->arrApt_ = nullptr;};
          inline string getArrApt() const { DARABONBA_PTR_GET_DEFAULT(arrApt_, "") };
          inline FlightReshopSegmentList& setArrApt(string arrApt) { DARABONBA_PTR_SET_VALUE(arrApt_, arrApt) };


          // arrAptCode Field Functions 
          bool hasArrAptCode() const { return this->arrAptCode_ != nullptr;};
          void deleteArrAptCode() { this->arrAptCode_ = nullptr;};
          inline string getArrAptCode() const { DARABONBA_PTR_GET_DEFAULT(arrAptCode_, "") };
          inline FlightReshopSegmentList& setArrAptCode(string arrAptCode) { DARABONBA_PTR_SET_VALUE(arrAptCode_, arrAptCode) };


          // arrCity Field Functions 
          bool hasArrCity() const { return this->arrCity_ != nullptr;};
          void deleteArrCity() { this->arrCity_ = nullptr;};
          inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
          inline FlightReshopSegmentList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


          // arrCityCode Field Functions 
          bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
          void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
          inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
          inline FlightReshopSegmentList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


          // arrTerminal Field Functions 
          bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
          void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
          inline string getArrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
          inline FlightReshopSegmentList& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


          // arrTime Field Functions 
          bool hasArrTime() const { return this->arrTime_ != nullptr;};
          void deleteArrTime() { this->arrTime_ = nullptr;};
          inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
          inline FlightReshopSegmentList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


          // depApt Field Functions 
          bool hasDepApt() const { return this->depApt_ != nullptr;};
          void deleteDepApt() { this->depApt_ = nullptr;};
          inline string getDepApt() const { DARABONBA_PTR_GET_DEFAULT(depApt_, "") };
          inline FlightReshopSegmentList& setDepApt(string depApt) { DARABONBA_PTR_SET_VALUE(depApt_, depApt) };


          // depAptCode Field Functions 
          bool hasDepAptCode() const { return this->depAptCode_ != nullptr;};
          void deleteDepAptCode() { this->depAptCode_ = nullptr;};
          inline string getDepAptCode() const { DARABONBA_PTR_GET_DEFAULT(depAptCode_, "") };
          inline FlightReshopSegmentList& setDepAptCode(string depAptCode) { DARABONBA_PTR_SET_VALUE(depAptCode_, depAptCode) };


          // depCity Field Functions 
          bool hasDepCity() const { return this->depCity_ != nullptr;};
          void deleteDepCity() { this->depCity_ = nullptr;};
          inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
          inline FlightReshopSegmentList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


          // depCityCode Field Functions 
          bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
          void deleteDepCityCode() { this->depCityCode_ = nullptr;};
          inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
          inline FlightReshopSegmentList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


          // depTerminal Field Functions 
          bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
          void deleteDepTerminal() { this->depTerminal_ = nullptr;};
          inline string getDepTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
          inline FlightReshopSegmentList& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline FlightReshopSegmentList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // flightMile Field Functions 
          bool hasFlightMile() const { return this->flightMile_ != nullptr;};
          void deleteFlightMile() { this->flightMile_ = nullptr;};
          inline int32_t getFlightMile() const { DARABONBA_PTR_GET_DEFAULT(flightMile_, 0) };
          inline FlightReshopSegmentList& setFlightMile(int32_t flightMile) { DARABONBA_PTR_SET_VALUE(flightMile_, flightMile) };


          // flightNo Field Functions 
          bool hasFlightNo() const { return this->flightNo_ != nullptr;};
          void deleteFlightNo() { this->flightNo_ = nullptr;};
          inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
          inline FlightReshopSegmentList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          // journeyIndex Field Functions 
          bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
          void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
          inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
          inline FlightReshopSegmentList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


          // segmentIndex Field Functions 
          bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
          void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
          inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
          inline FlightReshopSegmentList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


          // stopCity Field Functions 
          bool hasStopCity() const { return this->stopCity_ != nullptr;};
          void deleteStopCity() { this->stopCity_ = nullptr;};
          inline const vector<string> & getStopCity() const { DARABONBA_PTR_GET_CONST(stopCity_, vector<string>) };
          inline vector<string> getStopCity() { DARABONBA_PTR_GET(stopCity_, vector<string>) };
          inline FlightReshopSegmentList& setStopCity(const vector<string> & stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };
          inline FlightReshopSegmentList& setStopCity(vector<string> && stopCity) { DARABONBA_PTR_SET_RVALUE(stopCity_, stopCity) };


        protected:
          shared_ptr<string> airlineCode_ {};
          shared_ptr<string> airlineName_ {};
          shared_ptr<string> arrApt_ {};
          shared_ptr<string> arrAptCode_ {};
          shared_ptr<string> arrCity_ {};
          shared_ptr<string> arrCityCode_ {};
          shared_ptr<string> arrTerminal_ {};
          shared_ptr<string> arrTime_ {};
          shared_ptr<string> depApt_ {};
          shared_ptr<string> depAptCode_ {};
          shared_ptr<string> depCity_ {};
          shared_ptr<string> depCityCode_ {};
          shared_ptr<string> depTerminal_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<int32_t> flightMile_ {};
          shared_ptr<string> flightNo_ {};
          shared_ptr<int32_t> journeyIndex_ {};
          shared_ptr<int32_t> segmentIndex_ {};
          shared_ptr<vector<string>> stopCity_ {};
        };

        class FlightReshopApplyTicketList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightReshopApplyTicketList& obj) { 
            DARABONBA_PTR_TO_JSON(flight_list, flightList_);
            DARABONBA_PTR_TO_JSON(relate_ticket_no_list, relateTicketNoList_);
            DARABONBA_PTR_TO_JSON(ticket_no_list, ticketNoList_);
            DARABONBA_PTR_TO_JSON(user_id, userId_);
          };
          friend void from_json(const Darabonba::Json& j, FlightReshopApplyTicketList& obj) { 
            DARABONBA_PTR_FROM_JSON(flight_list, flightList_);
            DARABONBA_PTR_FROM_JSON(relate_ticket_no_list, relateTicketNoList_);
            DARABONBA_PTR_FROM_JSON(ticket_no_list, ticketNoList_);
            DARABONBA_PTR_FROM_JSON(user_id, userId_);
          };
          FlightReshopApplyTicketList() = default ;
          FlightReshopApplyTicketList(const FlightReshopApplyTicketList &) = default ;
          FlightReshopApplyTicketList(FlightReshopApplyTicketList &&) = default ;
          FlightReshopApplyTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightReshopApplyTicketList() = default ;
          FlightReshopApplyTicketList& operator=(const FlightReshopApplyTicketList &) = default ;
          FlightReshopApplyTicketList& operator=(FlightReshopApplyTicketList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class FlightList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FlightList& obj) { 
              DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
              DARABONBA_PTR_TO_JSON(cabin, cabin_);
              DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
              DARABONBA_PTR_TO_JSON(dep_time, depTime_);
              DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            };
            friend void from_json(const Darabonba::Json& j, FlightList& obj) { 
              DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
              DARABONBA_PTR_FROM_JSON(cabin, cabin_);
              DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
              DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
              DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            };
            FlightList() = default ;
            FlightList(const FlightList &) = default ;
            FlightList(FlightList &&) = default ;
            FlightList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FlightList() = default ;
            FlightList& operator=(const FlightList &) = default ;
            FlightList& operator=(FlightList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->arrTime_ == nullptr
        && this->cabin_ == nullptr && this->cabinClass_ == nullptr && this->cabinClassName_ == nullptr && this->depTime_ == nullptr && this->flightNo_ == nullptr; };
            // arrTime Field Functions 
            bool hasArrTime() const { return this->arrTime_ != nullptr;};
            void deleteArrTime() { this->arrTime_ = nullptr;};
            inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
            inline FlightList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


            // cabin Field Functions 
            bool hasCabin() const { return this->cabin_ != nullptr;};
            void deleteCabin() { this->cabin_ = nullptr;};
            inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
            inline FlightList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


            // cabinClass Field Functions 
            bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
            void deleteCabinClass() { this->cabinClass_ = nullptr;};
            inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
            inline FlightList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


            // cabinClassName Field Functions 
            bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
            void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
            inline string getCabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
            inline FlightList& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


            // depTime Field Functions 
            bool hasDepTime() const { return this->depTime_ != nullptr;};
            void deleteDepTime() { this->depTime_ = nullptr;};
            inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
            inline FlightList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


            // flightNo Field Functions 
            bool hasFlightNo() const { return this->flightNo_ != nullptr;};
            void deleteFlightNo() { this->flightNo_ = nullptr;};
            inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
            inline FlightList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          protected:
            shared_ptr<string> arrTime_ {};
            shared_ptr<string> cabin_ {};
            shared_ptr<string> cabinClass_ {};
            shared_ptr<string> cabinClassName_ {};
            shared_ptr<string> depTime_ {};
            shared_ptr<string> flightNo_ {};
          };

          virtual bool empty() const override { return this->flightList_ == nullptr
        && this->relateTicketNoList_ == nullptr && this->ticketNoList_ == nullptr && this->userId_ == nullptr; };
          // flightList Field Functions 
          bool hasFlightList() const { return this->flightList_ != nullptr;};
          void deleteFlightList() { this->flightList_ = nullptr;};
          inline const vector<FlightReshopApplyTicketList::FlightList> & getFlightList() const { DARABONBA_PTR_GET_CONST(flightList_, vector<FlightReshopApplyTicketList::FlightList>) };
          inline vector<FlightReshopApplyTicketList::FlightList> getFlightList() { DARABONBA_PTR_GET(flightList_, vector<FlightReshopApplyTicketList::FlightList>) };
          inline FlightReshopApplyTicketList& setFlightList(const vector<FlightReshopApplyTicketList::FlightList> & flightList) { DARABONBA_PTR_SET_VALUE(flightList_, flightList) };
          inline FlightReshopApplyTicketList& setFlightList(vector<FlightReshopApplyTicketList::FlightList> && flightList) { DARABONBA_PTR_SET_RVALUE(flightList_, flightList) };


          // relateTicketNoList Field Functions 
          bool hasRelateTicketNoList() const { return this->relateTicketNoList_ != nullptr;};
          void deleteRelateTicketNoList() { this->relateTicketNoList_ = nullptr;};
          inline const vector<string> & getRelateTicketNoList() const { DARABONBA_PTR_GET_CONST(relateTicketNoList_, vector<string>) };
          inline vector<string> getRelateTicketNoList() { DARABONBA_PTR_GET(relateTicketNoList_, vector<string>) };
          inline FlightReshopApplyTicketList& setRelateTicketNoList(const vector<string> & relateTicketNoList) { DARABONBA_PTR_SET_VALUE(relateTicketNoList_, relateTicketNoList) };
          inline FlightReshopApplyTicketList& setRelateTicketNoList(vector<string> && relateTicketNoList) { DARABONBA_PTR_SET_RVALUE(relateTicketNoList_, relateTicketNoList) };


          // ticketNoList Field Functions 
          bool hasTicketNoList() const { return this->ticketNoList_ != nullptr;};
          void deleteTicketNoList() { this->ticketNoList_ = nullptr;};
          inline const vector<string> & getTicketNoList() const { DARABONBA_PTR_GET_CONST(ticketNoList_, vector<string>) };
          inline vector<string> getTicketNoList() { DARABONBA_PTR_GET(ticketNoList_, vector<string>) };
          inline FlightReshopApplyTicketList& setTicketNoList(const vector<string> & ticketNoList) { DARABONBA_PTR_SET_VALUE(ticketNoList_, ticketNoList) };
          inline FlightReshopApplyTicketList& setTicketNoList(vector<string> && ticketNoList) { DARABONBA_PTR_SET_RVALUE(ticketNoList_, ticketNoList) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline FlightReshopApplyTicketList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          shared_ptr<vector<FlightReshopApplyTicketList::FlightList>> flightList_ {};
          shared_ptr<vector<string>> relateTicketNoList_ {};
          shared_ptr<vector<string>> ticketNoList_ {};
          shared_ptr<string> userId_ {};
        };

        virtual bool empty() const override { return this->flightReshopApplyTicketList_ == nullptr
        && this->flightReshopSegmentList_ == nullptr && this->flightReshopUserFeeList_ == nullptr && this->relateReshopApplyId_ == nullptr && this->reshopApplyId_ == nullptr && this->reshopApproveId_ == nullptr
        && this->reshopCorpTotalAmount_ == nullptr && this->reshopPersonTotalAmount_ == nullptr && this->reshopReason_ == nullptr && this->reshopReasonCode_ == nullptr && this->reshopTotalAmount_ == nullptr
        && this->userIdList_ == nullptr; };
        // flightReshopApplyTicketList Field Functions 
        bool hasFlightReshopApplyTicketList() const { return this->flightReshopApplyTicketList_ != nullptr;};
        void deleteFlightReshopApplyTicketList() { this->flightReshopApplyTicketList_ = nullptr;};
        inline const vector<FlightReshopApplyList::FlightReshopApplyTicketList> & getFlightReshopApplyTicketList() const { DARABONBA_PTR_GET_CONST(flightReshopApplyTicketList_, vector<FlightReshopApplyList::FlightReshopApplyTicketList>) };
        inline vector<FlightReshopApplyList::FlightReshopApplyTicketList> getFlightReshopApplyTicketList() { DARABONBA_PTR_GET(flightReshopApplyTicketList_, vector<FlightReshopApplyList::FlightReshopApplyTicketList>) };
        inline FlightReshopApplyList& setFlightReshopApplyTicketList(const vector<FlightReshopApplyList::FlightReshopApplyTicketList> & flightReshopApplyTicketList) { DARABONBA_PTR_SET_VALUE(flightReshopApplyTicketList_, flightReshopApplyTicketList) };
        inline FlightReshopApplyList& setFlightReshopApplyTicketList(vector<FlightReshopApplyList::FlightReshopApplyTicketList> && flightReshopApplyTicketList) { DARABONBA_PTR_SET_RVALUE(flightReshopApplyTicketList_, flightReshopApplyTicketList) };


        // flightReshopSegmentList Field Functions 
        bool hasFlightReshopSegmentList() const { return this->flightReshopSegmentList_ != nullptr;};
        void deleteFlightReshopSegmentList() { this->flightReshopSegmentList_ = nullptr;};
        inline const vector<FlightReshopApplyList::FlightReshopSegmentList> & getFlightReshopSegmentList() const { DARABONBA_PTR_GET_CONST(flightReshopSegmentList_, vector<FlightReshopApplyList::FlightReshopSegmentList>) };
        inline vector<FlightReshopApplyList::FlightReshopSegmentList> getFlightReshopSegmentList() { DARABONBA_PTR_GET(flightReshopSegmentList_, vector<FlightReshopApplyList::FlightReshopSegmentList>) };
        inline FlightReshopApplyList& setFlightReshopSegmentList(const vector<FlightReshopApplyList::FlightReshopSegmentList> & flightReshopSegmentList) { DARABONBA_PTR_SET_VALUE(flightReshopSegmentList_, flightReshopSegmentList) };
        inline FlightReshopApplyList& setFlightReshopSegmentList(vector<FlightReshopApplyList::FlightReshopSegmentList> && flightReshopSegmentList) { DARABONBA_PTR_SET_RVALUE(flightReshopSegmentList_, flightReshopSegmentList) };


        // flightReshopUserFeeList Field Functions 
        bool hasFlightReshopUserFeeList() const { return this->flightReshopUserFeeList_ != nullptr;};
        void deleteFlightReshopUserFeeList() { this->flightReshopUserFeeList_ = nullptr;};
        inline const vector<FlightReshopApplyList::FlightReshopUserFeeList> & getFlightReshopUserFeeList() const { DARABONBA_PTR_GET_CONST(flightReshopUserFeeList_, vector<FlightReshopApplyList::FlightReshopUserFeeList>) };
        inline vector<FlightReshopApplyList::FlightReshopUserFeeList> getFlightReshopUserFeeList() { DARABONBA_PTR_GET(flightReshopUserFeeList_, vector<FlightReshopApplyList::FlightReshopUserFeeList>) };
        inline FlightReshopApplyList& setFlightReshopUserFeeList(const vector<FlightReshopApplyList::FlightReshopUserFeeList> & flightReshopUserFeeList) { DARABONBA_PTR_SET_VALUE(flightReshopUserFeeList_, flightReshopUserFeeList) };
        inline FlightReshopApplyList& setFlightReshopUserFeeList(vector<FlightReshopApplyList::FlightReshopUserFeeList> && flightReshopUserFeeList) { DARABONBA_PTR_SET_RVALUE(flightReshopUserFeeList_, flightReshopUserFeeList) };


        // relateReshopApplyId Field Functions 
        bool hasRelateReshopApplyId() const { return this->relateReshopApplyId_ != nullptr;};
        void deleteRelateReshopApplyId() { this->relateReshopApplyId_ = nullptr;};
        inline int64_t getRelateReshopApplyId() const { DARABONBA_PTR_GET_DEFAULT(relateReshopApplyId_, 0L) };
        inline FlightReshopApplyList& setRelateReshopApplyId(int64_t relateReshopApplyId) { DARABONBA_PTR_SET_VALUE(relateReshopApplyId_, relateReshopApplyId) };


        // reshopApplyId Field Functions 
        bool hasReshopApplyId() const { return this->reshopApplyId_ != nullptr;};
        void deleteReshopApplyId() { this->reshopApplyId_ = nullptr;};
        inline int64_t getReshopApplyId() const { DARABONBA_PTR_GET_DEFAULT(reshopApplyId_, 0L) };
        inline FlightReshopApplyList& setReshopApplyId(int64_t reshopApplyId) { DARABONBA_PTR_SET_VALUE(reshopApplyId_, reshopApplyId) };


        // reshopApproveId Field Functions 
        bool hasReshopApproveId() const { return this->reshopApproveId_ != nullptr;};
        void deleteReshopApproveId() { this->reshopApproveId_ = nullptr;};
        inline string getReshopApproveId() const { DARABONBA_PTR_GET_DEFAULT(reshopApproveId_, "") };
        inline FlightReshopApplyList& setReshopApproveId(string reshopApproveId) { DARABONBA_PTR_SET_VALUE(reshopApproveId_, reshopApproveId) };


        // reshopCorpTotalAmount Field Functions 
        bool hasReshopCorpTotalAmount() const { return this->reshopCorpTotalAmount_ != nullptr;};
        void deleteReshopCorpTotalAmount() { this->reshopCorpTotalAmount_ = nullptr;};
        inline double getReshopCorpTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(reshopCorpTotalAmount_, 0.0) };
        inline FlightReshopApplyList& setReshopCorpTotalAmount(double reshopCorpTotalAmount) { DARABONBA_PTR_SET_VALUE(reshopCorpTotalAmount_, reshopCorpTotalAmount) };


        // reshopPersonTotalAmount Field Functions 
        bool hasReshopPersonTotalAmount() const { return this->reshopPersonTotalAmount_ != nullptr;};
        void deleteReshopPersonTotalAmount() { this->reshopPersonTotalAmount_ = nullptr;};
        inline double getReshopPersonTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(reshopPersonTotalAmount_, 0.0) };
        inline FlightReshopApplyList& setReshopPersonTotalAmount(double reshopPersonTotalAmount) { DARABONBA_PTR_SET_VALUE(reshopPersonTotalAmount_, reshopPersonTotalAmount) };


        // reshopReason Field Functions 
        bool hasReshopReason() const { return this->reshopReason_ != nullptr;};
        void deleteReshopReason() { this->reshopReason_ = nullptr;};
        inline string getReshopReason() const { DARABONBA_PTR_GET_DEFAULT(reshopReason_, "") };
        inline FlightReshopApplyList& setReshopReason(string reshopReason) { DARABONBA_PTR_SET_VALUE(reshopReason_, reshopReason) };


        // reshopReasonCode Field Functions 
        bool hasReshopReasonCode() const { return this->reshopReasonCode_ != nullptr;};
        void deleteReshopReasonCode() { this->reshopReasonCode_ = nullptr;};
        inline string getReshopReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reshopReasonCode_, "") };
        inline FlightReshopApplyList& setReshopReasonCode(string reshopReasonCode) { DARABONBA_PTR_SET_VALUE(reshopReasonCode_, reshopReasonCode) };


        // reshopTotalAmount Field Functions 
        bool hasReshopTotalAmount() const { return this->reshopTotalAmount_ != nullptr;};
        void deleteReshopTotalAmount() { this->reshopTotalAmount_ = nullptr;};
        inline double getReshopTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(reshopTotalAmount_, 0.0) };
        inline FlightReshopApplyList& setReshopTotalAmount(double reshopTotalAmount) { DARABONBA_PTR_SET_VALUE(reshopTotalAmount_, reshopTotalAmount) };


        // userIdList Field Functions 
        bool hasUserIdList() const { return this->userIdList_ != nullptr;};
        void deleteUserIdList() { this->userIdList_ = nullptr;};
        inline const vector<string> & getUserIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
        inline vector<string> getUserIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
        inline FlightReshopApplyList& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
        inline FlightReshopApplyList& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


      protected:
        shared_ptr<vector<FlightReshopApplyList::FlightReshopApplyTicketList>> flightReshopApplyTicketList_ {};
        shared_ptr<vector<FlightReshopApplyList::FlightReshopSegmentList>> flightReshopSegmentList_ {};
        shared_ptr<vector<FlightReshopApplyList::FlightReshopUserFeeList>> flightReshopUserFeeList_ {};
        shared_ptr<int64_t> relateReshopApplyId_ {};
        shared_ptr<int64_t> reshopApplyId_ {};
        shared_ptr<string> reshopApproveId_ {};
        shared_ptr<double> reshopCorpTotalAmount_ {};
        shared_ptr<double> reshopPersonTotalAmount_ {};
        shared_ptr<string> reshopReason_ {};
        shared_ptr<string> reshopReasonCode_ {};
        shared_ptr<double> reshopTotalAmount_ {};
        shared_ptr<vector<string>> userIdList_ {};
      };

      class FlightRefundApplyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightRefundApplyList& obj) { 
          DARABONBA_PTR_TO_JSON(flight_refund_apply_ticket_list, flightRefundApplyTicketList_);
          DARABONBA_PTR_TO_JSON(flight_refund_segment_list, flightRefundSegmentList_);
          DARABONBA_PTR_TO_JSON(flight_refund_user_fee_list, flightRefundUserFeeList_);
          DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
          DARABONBA_PTR_TO_JSON(refund_approve_id, refundApproveId_);
          DARABONBA_PTR_TO_JSON(refund_corp_total_amount, refundCorpTotalAmount_);
          DARABONBA_PTR_TO_JSON(refund_hand_fee, refundHandFee_);
          DARABONBA_PTR_TO_JSON(refund_person_total_amount, refundPersonTotalAmount_);
          DARABONBA_PTR_TO_JSON(refund_reason, refundReason_);
          DARABONBA_PTR_TO_JSON(refund_reason_code, refundReasonCode_);
          DARABONBA_PTR_TO_JSON(refund_total_amount, refundTotalAmount_);
          DARABONBA_PTR_TO_JSON(relate_refund_apply_id, relateRefundApplyId_);
          DARABONBA_PTR_TO_JSON(user_id_list, userIdList_);
        };
        friend void from_json(const Darabonba::Json& j, FlightRefundApplyList& obj) { 
          DARABONBA_PTR_FROM_JSON(flight_refund_apply_ticket_list, flightRefundApplyTicketList_);
          DARABONBA_PTR_FROM_JSON(flight_refund_segment_list, flightRefundSegmentList_);
          DARABONBA_PTR_FROM_JSON(flight_refund_user_fee_list, flightRefundUserFeeList_);
          DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
          DARABONBA_PTR_FROM_JSON(refund_approve_id, refundApproveId_);
          DARABONBA_PTR_FROM_JSON(refund_corp_total_amount, refundCorpTotalAmount_);
          DARABONBA_PTR_FROM_JSON(refund_hand_fee, refundHandFee_);
          DARABONBA_PTR_FROM_JSON(refund_person_total_amount, refundPersonTotalAmount_);
          DARABONBA_PTR_FROM_JSON(refund_reason, refundReason_);
          DARABONBA_PTR_FROM_JSON(refund_reason_code, refundReasonCode_);
          DARABONBA_PTR_FROM_JSON(refund_total_amount, refundTotalAmount_);
          DARABONBA_PTR_FROM_JSON(relate_refund_apply_id, relateRefundApplyId_);
          DARABONBA_PTR_FROM_JSON(user_id_list, userIdList_);
        };
        FlightRefundApplyList() = default ;
        FlightRefundApplyList(const FlightRefundApplyList &) = default ;
        FlightRefundApplyList(FlightRefundApplyList &&) = default ;
        FlightRefundApplyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightRefundApplyList() = default ;
        FlightRefundApplyList& operator=(const FlightRefundApplyList &) = default ;
        FlightRefundApplyList& operator=(FlightRefundApplyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FlightRefundUserFeeList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightRefundUserFeeList& obj) { 
            DARABONBA_PTR_TO_JSON(already_use_amount, alreadyUseAmount_);
            DARABONBA_PTR_TO_JSON(non_refundable_reshop_change_amount, nonRefundableReshopChangeAmount_);
            DARABONBA_PTR_TO_JSON(non_refundable_reshop_upgrade_amount, nonRefundableReshopUpgradeAmount_);
            DARABONBA_PTR_TO_JSON(refund_amount, refundAmount_);
            DARABONBA_PTR_TO_JSON(refund_corp_amount, refundCorpAmount_);
            DARABONBA_PTR_TO_JSON(refund_hand_fee, refundHandFee_);
            DARABONBA_PTR_TO_JSON(refund_person_amount, refundPersonAmount_);
            DARABONBA_PTR_TO_JSON(user_id, userId_);
          };
          friend void from_json(const Darabonba::Json& j, FlightRefundUserFeeList& obj) { 
            DARABONBA_PTR_FROM_JSON(already_use_amount, alreadyUseAmount_);
            DARABONBA_PTR_FROM_JSON(non_refundable_reshop_change_amount, nonRefundableReshopChangeAmount_);
            DARABONBA_PTR_FROM_JSON(non_refundable_reshop_upgrade_amount, nonRefundableReshopUpgradeAmount_);
            DARABONBA_PTR_FROM_JSON(refund_amount, refundAmount_);
            DARABONBA_PTR_FROM_JSON(refund_corp_amount, refundCorpAmount_);
            DARABONBA_PTR_FROM_JSON(refund_hand_fee, refundHandFee_);
            DARABONBA_PTR_FROM_JSON(refund_person_amount, refundPersonAmount_);
            DARABONBA_PTR_FROM_JSON(user_id, userId_);
          };
          FlightRefundUserFeeList() = default ;
          FlightRefundUserFeeList(const FlightRefundUserFeeList &) = default ;
          FlightRefundUserFeeList(FlightRefundUserFeeList &&) = default ;
          FlightRefundUserFeeList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightRefundUserFeeList() = default ;
          FlightRefundUserFeeList& operator=(const FlightRefundUserFeeList &) = default ;
          FlightRefundUserFeeList& operator=(FlightRefundUserFeeList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alreadyUseAmount_ == nullptr
        && this->nonRefundableReshopChangeAmount_ == nullptr && this->nonRefundableReshopUpgradeAmount_ == nullptr && this->refundAmount_ == nullptr && this->refundCorpAmount_ == nullptr && this->refundHandFee_ == nullptr
        && this->refundPersonAmount_ == nullptr && this->userId_ == nullptr; };
          // alreadyUseAmount Field Functions 
          bool hasAlreadyUseAmount() const { return this->alreadyUseAmount_ != nullptr;};
          void deleteAlreadyUseAmount() { this->alreadyUseAmount_ = nullptr;};
          inline double getAlreadyUseAmount() const { DARABONBA_PTR_GET_DEFAULT(alreadyUseAmount_, 0.0) };
          inline FlightRefundUserFeeList& setAlreadyUseAmount(double alreadyUseAmount) { DARABONBA_PTR_SET_VALUE(alreadyUseAmount_, alreadyUseAmount) };


          // nonRefundableReshopChangeAmount Field Functions 
          bool hasNonRefundableReshopChangeAmount() const { return this->nonRefundableReshopChangeAmount_ != nullptr;};
          void deleteNonRefundableReshopChangeAmount() { this->nonRefundableReshopChangeAmount_ = nullptr;};
          inline double getNonRefundableReshopChangeAmount() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableReshopChangeAmount_, 0.0) };
          inline FlightRefundUserFeeList& setNonRefundableReshopChangeAmount(double nonRefundableReshopChangeAmount) { DARABONBA_PTR_SET_VALUE(nonRefundableReshopChangeAmount_, nonRefundableReshopChangeAmount) };


          // nonRefundableReshopUpgradeAmount Field Functions 
          bool hasNonRefundableReshopUpgradeAmount() const { return this->nonRefundableReshopUpgradeAmount_ != nullptr;};
          void deleteNonRefundableReshopUpgradeAmount() { this->nonRefundableReshopUpgradeAmount_ = nullptr;};
          inline double getNonRefundableReshopUpgradeAmount() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableReshopUpgradeAmount_, 0.0) };
          inline FlightRefundUserFeeList& setNonRefundableReshopUpgradeAmount(double nonRefundableReshopUpgradeAmount) { DARABONBA_PTR_SET_VALUE(nonRefundableReshopUpgradeAmount_, nonRefundableReshopUpgradeAmount) };


          // refundAmount Field Functions 
          bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
          void deleteRefundAmount() { this->refundAmount_ = nullptr;};
          inline double getRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(refundAmount_, 0.0) };
          inline FlightRefundUserFeeList& setRefundAmount(double refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };


          // refundCorpAmount Field Functions 
          bool hasRefundCorpAmount() const { return this->refundCorpAmount_ != nullptr;};
          void deleteRefundCorpAmount() { this->refundCorpAmount_ = nullptr;};
          inline double getRefundCorpAmount() const { DARABONBA_PTR_GET_DEFAULT(refundCorpAmount_, 0.0) };
          inline FlightRefundUserFeeList& setRefundCorpAmount(double refundCorpAmount) { DARABONBA_PTR_SET_VALUE(refundCorpAmount_, refundCorpAmount) };


          // refundHandFee Field Functions 
          bool hasRefundHandFee() const { return this->refundHandFee_ != nullptr;};
          void deleteRefundHandFee() { this->refundHandFee_ = nullptr;};
          inline double getRefundHandFee() const { DARABONBA_PTR_GET_DEFAULT(refundHandFee_, 0.0) };
          inline FlightRefundUserFeeList& setRefundHandFee(double refundHandFee) { DARABONBA_PTR_SET_VALUE(refundHandFee_, refundHandFee) };


          // refundPersonAmount Field Functions 
          bool hasRefundPersonAmount() const { return this->refundPersonAmount_ != nullptr;};
          void deleteRefundPersonAmount() { this->refundPersonAmount_ = nullptr;};
          inline double getRefundPersonAmount() const { DARABONBA_PTR_GET_DEFAULT(refundPersonAmount_, 0.0) };
          inline FlightRefundUserFeeList& setRefundPersonAmount(double refundPersonAmount) { DARABONBA_PTR_SET_VALUE(refundPersonAmount_, refundPersonAmount) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline FlightRefundUserFeeList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          shared_ptr<double> alreadyUseAmount_ {};
          shared_ptr<double> nonRefundableReshopChangeAmount_ {};
          shared_ptr<double> nonRefundableReshopUpgradeAmount_ {};
          shared_ptr<double> refundAmount_ {};
          shared_ptr<double> refundCorpAmount_ {};
          shared_ptr<double> refundHandFee_ {};
          shared_ptr<double> refundPersonAmount_ {};
          shared_ptr<string> userId_ {};
        };

        class FlightRefundSegmentList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightRefundSegmentList& obj) { 
            DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
            DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
            DARABONBA_PTR_TO_JSON(arr_apt, arrApt_);
            DARABONBA_PTR_TO_JSON(arr_apt_code, arrAptCode_);
            DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
            DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_TO_JSON(arr_terminal, arrTerminal_);
            DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
            DARABONBA_PTR_TO_JSON(dep_apt, depApt_);
            DARABONBA_PTR_TO_JSON(dep_apt_code, depAptCode_);
            DARABONBA_PTR_TO_JSON(dep_city, depCity_);
            DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_TO_JSON(dep_terminal, depTerminal_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(flight_mile, flightMile_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
          };
          friend void from_json(const Darabonba::Json& j, FlightRefundSegmentList& obj) { 
            DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
            DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
            DARABONBA_PTR_FROM_JSON(arr_apt, arrApt_);
            DARABONBA_PTR_FROM_JSON(arr_apt_code, arrAptCode_);
            DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
            DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_FROM_JSON(arr_terminal, arrTerminal_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(dep_apt, depApt_);
            DARABONBA_PTR_FROM_JSON(dep_apt_code, depAptCode_);
            DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
            DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_terminal, depTerminal_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(flight_mile, flightMile_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
          };
          FlightRefundSegmentList() = default ;
          FlightRefundSegmentList(const FlightRefundSegmentList &) = default ;
          FlightRefundSegmentList(FlightRefundSegmentList &&) = default ;
          FlightRefundSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightRefundSegmentList() = default ;
          FlightRefundSegmentList& operator=(const FlightRefundSegmentList &) = default ;
          FlightRefundSegmentList& operator=(FlightRefundSegmentList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->arrApt_ == nullptr && this->arrAptCode_ == nullptr && this->arrCity_ == nullptr && this->arrCityCode_ == nullptr
        && this->arrTerminal_ == nullptr && this->arrTime_ == nullptr && this->depApt_ == nullptr && this->depAptCode_ == nullptr && this->depCity_ == nullptr
        && this->depCityCode_ == nullptr && this->depTerminal_ == nullptr && this->depTime_ == nullptr && this->flightMile_ == nullptr && this->flightNo_ == nullptr
        && this->journeyIndex_ == nullptr && this->segmentIndex_ == nullptr && this->stopCity_ == nullptr; };
          // airlineCode Field Functions 
          bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
          void deleteAirlineCode() { this->airlineCode_ = nullptr;};
          inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
          inline FlightRefundSegmentList& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


          // airlineName Field Functions 
          bool hasAirlineName() const { return this->airlineName_ != nullptr;};
          void deleteAirlineName() { this->airlineName_ = nullptr;};
          inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
          inline FlightRefundSegmentList& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


          // arrApt Field Functions 
          bool hasArrApt() const { return this->arrApt_ != nullptr;};
          void deleteArrApt() { this->arrApt_ = nullptr;};
          inline string getArrApt() const { DARABONBA_PTR_GET_DEFAULT(arrApt_, "") };
          inline FlightRefundSegmentList& setArrApt(string arrApt) { DARABONBA_PTR_SET_VALUE(arrApt_, arrApt) };


          // arrAptCode Field Functions 
          bool hasArrAptCode() const { return this->arrAptCode_ != nullptr;};
          void deleteArrAptCode() { this->arrAptCode_ = nullptr;};
          inline string getArrAptCode() const { DARABONBA_PTR_GET_DEFAULT(arrAptCode_, "") };
          inline FlightRefundSegmentList& setArrAptCode(string arrAptCode) { DARABONBA_PTR_SET_VALUE(arrAptCode_, arrAptCode) };


          // arrCity Field Functions 
          bool hasArrCity() const { return this->arrCity_ != nullptr;};
          void deleteArrCity() { this->arrCity_ = nullptr;};
          inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
          inline FlightRefundSegmentList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


          // arrCityCode Field Functions 
          bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
          void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
          inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
          inline FlightRefundSegmentList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


          // arrTerminal Field Functions 
          bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
          void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
          inline string getArrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
          inline FlightRefundSegmentList& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


          // arrTime Field Functions 
          bool hasArrTime() const { return this->arrTime_ != nullptr;};
          void deleteArrTime() { this->arrTime_ = nullptr;};
          inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
          inline FlightRefundSegmentList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


          // depApt Field Functions 
          bool hasDepApt() const { return this->depApt_ != nullptr;};
          void deleteDepApt() { this->depApt_ = nullptr;};
          inline string getDepApt() const { DARABONBA_PTR_GET_DEFAULT(depApt_, "") };
          inline FlightRefundSegmentList& setDepApt(string depApt) { DARABONBA_PTR_SET_VALUE(depApt_, depApt) };


          // depAptCode Field Functions 
          bool hasDepAptCode() const { return this->depAptCode_ != nullptr;};
          void deleteDepAptCode() { this->depAptCode_ = nullptr;};
          inline string getDepAptCode() const { DARABONBA_PTR_GET_DEFAULT(depAptCode_, "") };
          inline FlightRefundSegmentList& setDepAptCode(string depAptCode) { DARABONBA_PTR_SET_VALUE(depAptCode_, depAptCode) };


          // depCity Field Functions 
          bool hasDepCity() const { return this->depCity_ != nullptr;};
          void deleteDepCity() { this->depCity_ = nullptr;};
          inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
          inline FlightRefundSegmentList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


          // depCityCode Field Functions 
          bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
          void deleteDepCityCode() { this->depCityCode_ = nullptr;};
          inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
          inline FlightRefundSegmentList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


          // depTerminal Field Functions 
          bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
          void deleteDepTerminal() { this->depTerminal_ = nullptr;};
          inline string getDepTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
          inline FlightRefundSegmentList& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline FlightRefundSegmentList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // flightMile Field Functions 
          bool hasFlightMile() const { return this->flightMile_ != nullptr;};
          void deleteFlightMile() { this->flightMile_ = nullptr;};
          inline int32_t getFlightMile() const { DARABONBA_PTR_GET_DEFAULT(flightMile_, 0) };
          inline FlightRefundSegmentList& setFlightMile(int32_t flightMile) { DARABONBA_PTR_SET_VALUE(flightMile_, flightMile) };


          // flightNo Field Functions 
          bool hasFlightNo() const { return this->flightNo_ != nullptr;};
          void deleteFlightNo() { this->flightNo_ = nullptr;};
          inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
          inline FlightRefundSegmentList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          // journeyIndex Field Functions 
          bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
          void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
          inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
          inline FlightRefundSegmentList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


          // segmentIndex Field Functions 
          bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
          void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
          inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
          inline FlightRefundSegmentList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


          // stopCity Field Functions 
          bool hasStopCity() const { return this->stopCity_ != nullptr;};
          void deleteStopCity() { this->stopCity_ = nullptr;};
          inline const vector<string> & getStopCity() const { DARABONBA_PTR_GET_CONST(stopCity_, vector<string>) };
          inline vector<string> getStopCity() { DARABONBA_PTR_GET(stopCity_, vector<string>) };
          inline FlightRefundSegmentList& setStopCity(const vector<string> & stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };
          inline FlightRefundSegmentList& setStopCity(vector<string> && stopCity) { DARABONBA_PTR_SET_RVALUE(stopCity_, stopCity) };


        protected:
          shared_ptr<string> airlineCode_ {};
          shared_ptr<string> airlineName_ {};
          shared_ptr<string> arrApt_ {};
          shared_ptr<string> arrAptCode_ {};
          shared_ptr<string> arrCity_ {};
          shared_ptr<string> arrCityCode_ {};
          shared_ptr<string> arrTerminal_ {};
          shared_ptr<string> arrTime_ {};
          shared_ptr<string> depApt_ {};
          shared_ptr<string> depAptCode_ {};
          shared_ptr<string> depCity_ {};
          shared_ptr<string> depCityCode_ {};
          shared_ptr<string> depTerminal_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<int32_t> flightMile_ {};
          shared_ptr<string> flightNo_ {};
          shared_ptr<int32_t> journeyIndex_ {};
          shared_ptr<int32_t> segmentIndex_ {};
          shared_ptr<vector<string>> stopCity_ {};
        };

        class FlightRefundApplyTicketList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightRefundApplyTicketList& obj) { 
            DARABONBA_PTR_TO_JSON(flight_list, flightList_);
            DARABONBA_PTR_TO_JSON(ticket_no_list, ticketNoList_);
            DARABONBA_PTR_TO_JSON(user_id, userId_);
          };
          friend void from_json(const Darabonba::Json& j, FlightRefundApplyTicketList& obj) { 
            DARABONBA_PTR_FROM_JSON(flight_list, flightList_);
            DARABONBA_PTR_FROM_JSON(ticket_no_list, ticketNoList_);
            DARABONBA_PTR_FROM_JSON(user_id, userId_);
          };
          FlightRefundApplyTicketList() = default ;
          FlightRefundApplyTicketList(const FlightRefundApplyTicketList &) = default ;
          FlightRefundApplyTicketList(FlightRefundApplyTicketList &&) = default ;
          FlightRefundApplyTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightRefundApplyTicketList() = default ;
          FlightRefundApplyTicketList& operator=(const FlightRefundApplyTicketList &) = default ;
          FlightRefundApplyTicketList& operator=(FlightRefundApplyTicketList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class FlightList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FlightList& obj) { 
              DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
              DARABONBA_PTR_TO_JSON(cabin, cabin_);
              DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
              DARABONBA_PTR_TO_JSON(dep_time, depTime_);
              DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            };
            friend void from_json(const Darabonba::Json& j, FlightList& obj) { 
              DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
              DARABONBA_PTR_FROM_JSON(cabin, cabin_);
              DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
              DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
              DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            };
            FlightList() = default ;
            FlightList(const FlightList &) = default ;
            FlightList(FlightList &&) = default ;
            FlightList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FlightList() = default ;
            FlightList& operator=(const FlightList &) = default ;
            FlightList& operator=(FlightList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->arrTime_ == nullptr
        && this->cabin_ == nullptr && this->cabinClass_ == nullptr && this->cabinClassName_ == nullptr && this->depTime_ == nullptr && this->flightNo_ == nullptr; };
            // arrTime Field Functions 
            bool hasArrTime() const { return this->arrTime_ != nullptr;};
            void deleteArrTime() { this->arrTime_ = nullptr;};
            inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
            inline FlightList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


            // cabin Field Functions 
            bool hasCabin() const { return this->cabin_ != nullptr;};
            void deleteCabin() { this->cabin_ = nullptr;};
            inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
            inline FlightList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


            // cabinClass Field Functions 
            bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
            void deleteCabinClass() { this->cabinClass_ = nullptr;};
            inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
            inline FlightList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


            // cabinClassName Field Functions 
            bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
            void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
            inline string getCabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
            inline FlightList& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


            // depTime Field Functions 
            bool hasDepTime() const { return this->depTime_ != nullptr;};
            void deleteDepTime() { this->depTime_ = nullptr;};
            inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
            inline FlightList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


            // flightNo Field Functions 
            bool hasFlightNo() const { return this->flightNo_ != nullptr;};
            void deleteFlightNo() { this->flightNo_ = nullptr;};
            inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
            inline FlightList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          protected:
            shared_ptr<string> arrTime_ {};
            shared_ptr<string> cabin_ {};
            shared_ptr<string> cabinClass_ {};
            shared_ptr<string> cabinClassName_ {};
            shared_ptr<string> depTime_ {};
            shared_ptr<string> flightNo_ {};
          };

          virtual bool empty() const override { return this->flightList_ == nullptr
        && this->ticketNoList_ == nullptr && this->userId_ == nullptr; };
          // flightList Field Functions 
          bool hasFlightList() const { return this->flightList_ != nullptr;};
          void deleteFlightList() { this->flightList_ = nullptr;};
          inline const vector<FlightRefundApplyTicketList::FlightList> & getFlightList() const { DARABONBA_PTR_GET_CONST(flightList_, vector<FlightRefundApplyTicketList::FlightList>) };
          inline vector<FlightRefundApplyTicketList::FlightList> getFlightList() { DARABONBA_PTR_GET(flightList_, vector<FlightRefundApplyTicketList::FlightList>) };
          inline FlightRefundApplyTicketList& setFlightList(const vector<FlightRefundApplyTicketList::FlightList> & flightList) { DARABONBA_PTR_SET_VALUE(flightList_, flightList) };
          inline FlightRefundApplyTicketList& setFlightList(vector<FlightRefundApplyTicketList::FlightList> && flightList) { DARABONBA_PTR_SET_RVALUE(flightList_, flightList) };


          // ticketNoList Field Functions 
          bool hasTicketNoList() const { return this->ticketNoList_ != nullptr;};
          void deleteTicketNoList() { this->ticketNoList_ = nullptr;};
          inline const vector<string> & getTicketNoList() const { DARABONBA_PTR_GET_CONST(ticketNoList_, vector<string>) };
          inline vector<string> getTicketNoList() { DARABONBA_PTR_GET(ticketNoList_, vector<string>) };
          inline FlightRefundApplyTicketList& setTicketNoList(const vector<string> & ticketNoList) { DARABONBA_PTR_SET_VALUE(ticketNoList_, ticketNoList) };
          inline FlightRefundApplyTicketList& setTicketNoList(vector<string> && ticketNoList) { DARABONBA_PTR_SET_RVALUE(ticketNoList_, ticketNoList) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline FlightRefundApplyTicketList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          shared_ptr<vector<FlightRefundApplyTicketList::FlightList>> flightList_ {};
          shared_ptr<vector<string>> ticketNoList_ {};
          shared_ptr<string> userId_ {};
        };

        virtual bool empty() const override { return this->flightRefundApplyTicketList_ == nullptr
        && this->flightRefundSegmentList_ == nullptr && this->flightRefundUserFeeList_ == nullptr && this->refundApplyId_ == nullptr && this->refundApproveId_ == nullptr && this->refundCorpTotalAmount_ == nullptr
        && this->refundHandFee_ == nullptr && this->refundPersonTotalAmount_ == nullptr && this->refundReason_ == nullptr && this->refundReasonCode_ == nullptr && this->refundTotalAmount_ == nullptr
        && this->relateRefundApplyId_ == nullptr && this->userIdList_ == nullptr; };
        // flightRefundApplyTicketList Field Functions 
        bool hasFlightRefundApplyTicketList() const { return this->flightRefundApplyTicketList_ != nullptr;};
        void deleteFlightRefundApplyTicketList() { this->flightRefundApplyTicketList_ = nullptr;};
        inline const vector<FlightRefundApplyList::FlightRefundApplyTicketList> & getFlightRefundApplyTicketList() const { DARABONBA_PTR_GET_CONST(flightRefundApplyTicketList_, vector<FlightRefundApplyList::FlightRefundApplyTicketList>) };
        inline vector<FlightRefundApplyList::FlightRefundApplyTicketList> getFlightRefundApplyTicketList() { DARABONBA_PTR_GET(flightRefundApplyTicketList_, vector<FlightRefundApplyList::FlightRefundApplyTicketList>) };
        inline FlightRefundApplyList& setFlightRefundApplyTicketList(const vector<FlightRefundApplyList::FlightRefundApplyTicketList> & flightRefundApplyTicketList) { DARABONBA_PTR_SET_VALUE(flightRefundApplyTicketList_, flightRefundApplyTicketList) };
        inline FlightRefundApplyList& setFlightRefundApplyTicketList(vector<FlightRefundApplyList::FlightRefundApplyTicketList> && flightRefundApplyTicketList) { DARABONBA_PTR_SET_RVALUE(flightRefundApplyTicketList_, flightRefundApplyTicketList) };


        // flightRefundSegmentList Field Functions 
        bool hasFlightRefundSegmentList() const { return this->flightRefundSegmentList_ != nullptr;};
        void deleteFlightRefundSegmentList() { this->flightRefundSegmentList_ = nullptr;};
        inline const vector<FlightRefundApplyList::FlightRefundSegmentList> & getFlightRefundSegmentList() const { DARABONBA_PTR_GET_CONST(flightRefundSegmentList_, vector<FlightRefundApplyList::FlightRefundSegmentList>) };
        inline vector<FlightRefundApplyList::FlightRefundSegmentList> getFlightRefundSegmentList() { DARABONBA_PTR_GET(flightRefundSegmentList_, vector<FlightRefundApplyList::FlightRefundSegmentList>) };
        inline FlightRefundApplyList& setFlightRefundSegmentList(const vector<FlightRefundApplyList::FlightRefundSegmentList> & flightRefundSegmentList) { DARABONBA_PTR_SET_VALUE(flightRefundSegmentList_, flightRefundSegmentList) };
        inline FlightRefundApplyList& setFlightRefundSegmentList(vector<FlightRefundApplyList::FlightRefundSegmentList> && flightRefundSegmentList) { DARABONBA_PTR_SET_RVALUE(flightRefundSegmentList_, flightRefundSegmentList) };


        // flightRefundUserFeeList Field Functions 
        bool hasFlightRefundUserFeeList() const { return this->flightRefundUserFeeList_ != nullptr;};
        void deleteFlightRefundUserFeeList() { this->flightRefundUserFeeList_ = nullptr;};
        inline const vector<FlightRefundApplyList::FlightRefundUserFeeList> & getFlightRefundUserFeeList() const { DARABONBA_PTR_GET_CONST(flightRefundUserFeeList_, vector<FlightRefundApplyList::FlightRefundUserFeeList>) };
        inline vector<FlightRefundApplyList::FlightRefundUserFeeList> getFlightRefundUserFeeList() { DARABONBA_PTR_GET(flightRefundUserFeeList_, vector<FlightRefundApplyList::FlightRefundUserFeeList>) };
        inline FlightRefundApplyList& setFlightRefundUserFeeList(const vector<FlightRefundApplyList::FlightRefundUserFeeList> & flightRefundUserFeeList) { DARABONBA_PTR_SET_VALUE(flightRefundUserFeeList_, flightRefundUserFeeList) };
        inline FlightRefundApplyList& setFlightRefundUserFeeList(vector<FlightRefundApplyList::FlightRefundUserFeeList> && flightRefundUserFeeList) { DARABONBA_PTR_SET_RVALUE(flightRefundUserFeeList_, flightRefundUserFeeList) };


        // refundApplyId Field Functions 
        bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
        void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
        inline string getRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, "") };
        inline FlightRefundApplyList& setRefundApplyId(string refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


        // refundApproveId Field Functions 
        bool hasRefundApproveId() const { return this->refundApproveId_ != nullptr;};
        void deleteRefundApproveId() { this->refundApproveId_ = nullptr;};
        inline string getRefundApproveId() const { DARABONBA_PTR_GET_DEFAULT(refundApproveId_, "") };
        inline FlightRefundApplyList& setRefundApproveId(string refundApproveId) { DARABONBA_PTR_SET_VALUE(refundApproveId_, refundApproveId) };


        // refundCorpTotalAmount Field Functions 
        bool hasRefundCorpTotalAmount() const { return this->refundCorpTotalAmount_ != nullptr;};
        void deleteRefundCorpTotalAmount() { this->refundCorpTotalAmount_ = nullptr;};
        inline double getRefundCorpTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(refundCorpTotalAmount_, 0.0) };
        inline FlightRefundApplyList& setRefundCorpTotalAmount(double refundCorpTotalAmount) { DARABONBA_PTR_SET_VALUE(refundCorpTotalAmount_, refundCorpTotalAmount) };


        // refundHandFee Field Functions 
        bool hasRefundHandFee() const { return this->refundHandFee_ != nullptr;};
        void deleteRefundHandFee() { this->refundHandFee_ = nullptr;};
        inline double getRefundHandFee() const { DARABONBA_PTR_GET_DEFAULT(refundHandFee_, 0.0) };
        inline FlightRefundApplyList& setRefundHandFee(double refundHandFee) { DARABONBA_PTR_SET_VALUE(refundHandFee_, refundHandFee) };


        // refundPersonTotalAmount Field Functions 
        bool hasRefundPersonTotalAmount() const { return this->refundPersonTotalAmount_ != nullptr;};
        void deleteRefundPersonTotalAmount() { this->refundPersonTotalAmount_ = nullptr;};
        inline double getRefundPersonTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(refundPersonTotalAmount_, 0.0) };
        inline FlightRefundApplyList& setRefundPersonTotalAmount(double refundPersonTotalAmount) { DARABONBA_PTR_SET_VALUE(refundPersonTotalAmount_, refundPersonTotalAmount) };


        // refundReason Field Functions 
        bool hasRefundReason() const { return this->refundReason_ != nullptr;};
        void deleteRefundReason() { this->refundReason_ = nullptr;};
        inline string getRefundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
        inline FlightRefundApplyList& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


        // refundReasonCode Field Functions 
        bool hasRefundReasonCode() const { return this->refundReasonCode_ != nullptr;};
        void deleteRefundReasonCode() { this->refundReasonCode_ = nullptr;};
        inline string getRefundReasonCode() const { DARABONBA_PTR_GET_DEFAULT(refundReasonCode_, "") };
        inline FlightRefundApplyList& setRefundReasonCode(string refundReasonCode) { DARABONBA_PTR_SET_VALUE(refundReasonCode_, refundReasonCode) };


        // refundTotalAmount Field Functions 
        bool hasRefundTotalAmount() const { return this->refundTotalAmount_ != nullptr;};
        void deleteRefundTotalAmount() { this->refundTotalAmount_ = nullptr;};
        inline double getRefundTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(refundTotalAmount_, 0.0) };
        inline FlightRefundApplyList& setRefundTotalAmount(double refundTotalAmount) { DARABONBA_PTR_SET_VALUE(refundTotalAmount_, refundTotalAmount) };


        // relateRefundApplyId Field Functions 
        bool hasRelateRefundApplyId() const { return this->relateRefundApplyId_ != nullptr;};
        void deleteRelateRefundApplyId() { this->relateRefundApplyId_ = nullptr;};
        inline string getRelateRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(relateRefundApplyId_, "") };
        inline FlightRefundApplyList& setRelateRefundApplyId(string relateRefundApplyId) { DARABONBA_PTR_SET_VALUE(relateRefundApplyId_, relateRefundApplyId) };


        // userIdList Field Functions 
        bool hasUserIdList() const { return this->userIdList_ != nullptr;};
        void deleteUserIdList() { this->userIdList_ = nullptr;};
        inline const vector<string> & getUserIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
        inline vector<string> getUserIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
        inline FlightRefundApplyList& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
        inline FlightRefundApplyList& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


      protected:
        shared_ptr<vector<FlightRefundApplyList::FlightRefundApplyTicketList>> flightRefundApplyTicketList_ {};
        shared_ptr<vector<FlightRefundApplyList::FlightRefundSegmentList>> flightRefundSegmentList_ {};
        shared_ptr<vector<FlightRefundApplyList::FlightRefundUserFeeList>> flightRefundUserFeeList_ {};
        shared_ptr<string> refundApplyId_ {};
        shared_ptr<string> refundApproveId_ {};
        shared_ptr<double> refundCorpTotalAmount_ {};
        shared_ptr<double> refundHandFee_ {};
        shared_ptr<double> refundPersonTotalAmount_ {};
        shared_ptr<string> refundReason_ {};
        shared_ptr<string> refundReasonCode_ {};
        shared_ptr<double> refundTotalAmount_ {};
        shared_ptr<string> relateRefundApplyId_ {};
        shared_ptr<vector<string>> userIdList_ {};
      };

      class FlightOrderUserFeeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightOrderUserFeeList& obj) { 
          DARABONBA_PTR_TO_JSON(build_fee, buildFee_);
          DARABONBA_PTR_TO_JSON(corp_pay_amount, corpPayAmount_);
          DARABONBA_PTR_TO_JSON(oil_fee, oilFee_);
          DARABONBA_PTR_TO_JSON(person_pay_amount, personPayAmount_);
          DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
        };
        friend void from_json(const Darabonba::Json& j, FlightOrderUserFeeList& obj) { 
          DARABONBA_PTR_FROM_JSON(build_fee, buildFee_);
          DARABONBA_PTR_FROM_JSON(corp_pay_amount, corpPayAmount_);
          DARABONBA_PTR_FROM_JSON(oil_fee, oilFee_);
          DARABONBA_PTR_FROM_JSON(person_pay_amount, personPayAmount_);
          DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
        };
        FlightOrderUserFeeList() = default ;
        FlightOrderUserFeeList(const FlightOrderUserFeeList &) = default ;
        FlightOrderUserFeeList(FlightOrderUserFeeList &&) = default ;
        FlightOrderUserFeeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightOrderUserFeeList() = default ;
        FlightOrderUserFeeList& operator=(const FlightOrderUserFeeList &) = default ;
        FlightOrderUserFeeList& operator=(FlightOrderUserFeeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->buildFee_ == nullptr
        && this->corpPayAmount_ == nullptr && this->oilFee_ == nullptr && this->personPayAmount_ == nullptr && this->ticketPrice_ == nullptr && this->userId_ == nullptr; };
        // buildFee Field Functions 
        bool hasBuildFee() const { return this->buildFee_ != nullptr;};
        void deleteBuildFee() { this->buildFee_ = nullptr;};
        inline double getBuildFee() const { DARABONBA_PTR_GET_DEFAULT(buildFee_, 0.0) };
        inline FlightOrderUserFeeList& setBuildFee(double buildFee) { DARABONBA_PTR_SET_VALUE(buildFee_, buildFee) };


        // corpPayAmount Field Functions 
        bool hasCorpPayAmount() const { return this->corpPayAmount_ != nullptr;};
        void deleteCorpPayAmount() { this->corpPayAmount_ = nullptr;};
        inline double getCorpPayAmount() const { DARABONBA_PTR_GET_DEFAULT(corpPayAmount_, 0.0) };
        inline FlightOrderUserFeeList& setCorpPayAmount(double corpPayAmount) { DARABONBA_PTR_SET_VALUE(corpPayAmount_, corpPayAmount) };


        // oilFee Field Functions 
        bool hasOilFee() const { return this->oilFee_ != nullptr;};
        void deleteOilFee() { this->oilFee_ = nullptr;};
        inline double getOilFee() const { DARABONBA_PTR_GET_DEFAULT(oilFee_, 0.0) };
        inline FlightOrderUserFeeList& setOilFee(double oilFee) { DARABONBA_PTR_SET_VALUE(oilFee_, oilFee) };


        // personPayAmount Field Functions 
        bool hasPersonPayAmount() const { return this->personPayAmount_ != nullptr;};
        void deletePersonPayAmount() { this->personPayAmount_ = nullptr;};
        inline double getPersonPayAmount() const { DARABONBA_PTR_GET_DEFAULT(personPayAmount_, 0.0) };
        inline FlightOrderUserFeeList& setPersonPayAmount(double personPayAmount) { DARABONBA_PTR_SET_VALUE(personPayAmount_, personPayAmount) };


        // ticketPrice Field Functions 
        bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
        void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
        inline double getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0.0) };
        inline FlightOrderUserFeeList& setTicketPrice(double ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline FlightOrderUserFeeList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<double> buildFee_ {};
        shared_ptr<double> corpPayAmount_ {};
        shared_ptr<double> oilFee_ {};
        shared_ptr<double> personPayAmount_ {};
        shared_ptr<double> ticketPrice_ {};
        shared_ptr<string> userId_ {};
      };

      class FlightOrderTicketList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightOrderTicketList& obj) { 
          DARABONBA_PTR_TO_JSON(flight_list, flightList_);
          DARABONBA_PTR_TO_JSON(ticket_no_list, ticketNoList_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
        };
        friend void from_json(const Darabonba::Json& j, FlightOrderTicketList& obj) { 
          DARABONBA_PTR_FROM_JSON(flight_list, flightList_);
          DARABONBA_PTR_FROM_JSON(ticket_no_list, ticketNoList_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
        };
        FlightOrderTicketList() = default ;
        FlightOrderTicketList(const FlightOrderTicketList &) = default ;
        FlightOrderTicketList(FlightOrderTicketList &&) = default ;
        FlightOrderTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightOrderTicketList() = default ;
        FlightOrderTicketList& operator=(const FlightOrderTicketList &) = default ;
        FlightOrderTicketList& operator=(FlightOrderTicketList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FlightList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlightList& obj) { 
            DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
            DARABONBA_PTR_TO_JSON(cabin, cabin_);
            DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          };
          friend void from_json(const Darabonba::Json& j, FlightList& obj) { 
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(cabin, cabin_);
            DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
            DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          };
          FlightList() = default ;
          FlightList(const FlightList &) = default ;
          FlightList(FlightList &&) = default ;
          FlightList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlightList() = default ;
          FlightList& operator=(const FlightList &) = default ;
          FlightList& operator=(FlightList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->arrTime_ == nullptr
        && this->cabin_ == nullptr && this->cabinClass_ == nullptr && this->cabinClassName_ == nullptr && this->depTime_ == nullptr && this->flightNo_ == nullptr; };
          // arrTime Field Functions 
          bool hasArrTime() const { return this->arrTime_ != nullptr;};
          void deleteArrTime() { this->arrTime_ = nullptr;};
          inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
          inline FlightList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


          // cabin Field Functions 
          bool hasCabin() const { return this->cabin_ != nullptr;};
          void deleteCabin() { this->cabin_ = nullptr;};
          inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
          inline FlightList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


          // cabinClass Field Functions 
          bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
          void deleteCabinClass() { this->cabinClass_ = nullptr;};
          inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
          inline FlightList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


          // cabinClassName Field Functions 
          bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
          void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
          inline string getCabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
          inline FlightList& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline FlightList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // flightNo Field Functions 
          bool hasFlightNo() const { return this->flightNo_ != nullptr;};
          void deleteFlightNo() { this->flightNo_ = nullptr;};
          inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
          inline FlightList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        protected:
          shared_ptr<string> arrTime_ {};
          shared_ptr<string> cabin_ {};
          shared_ptr<string> cabinClass_ {};
          shared_ptr<string> cabinClassName_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<string> flightNo_ {};
        };

        virtual bool empty() const override { return this->flightList_ == nullptr
        && this->ticketNoList_ == nullptr && this->userId_ == nullptr; };
        // flightList Field Functions 
        bool hasFlightList() const { return this->flightList_ != nullptr;};
        void deleteFlightList() { this->flightList_ = nullptr;};
        inline const vector<FlightOrderTicketList::FlightList> & getFlightList() const { DARABONBA_PTR_GET_CONST(flightList_, vector<FlightOrderTicketList::FlightList>) };
        inline vector<FlightOrderTicketList::FlightList> getFlightList() { DARABONBA_PTR_GET(flightList_, vector<FlightOrderTicketList::FlightList>) };
        inline FlightOrderTicketList& setFlightList(const vector<FlightOrderTicketList::FlightList> & flightList) { DARABONBA_PTR_SET_VALUE(flightList_, flightList) };
        inline FlightOrderTicketList& setFlightList(vector<FlightOrderTicketList::FlightList> && flightList) { DARABONBA_PTR_SET_RVALUE(flightList_, flightList) };


        // ticketNoList Field Functions 
        bool hasTicketNoList() const { return this->ticketNoList_ != nullptr;};
        void deleteTicketNoList() { this->ticketNoList_ = nullptr;};
        inline const vector<string> & getTicketNoList() const { DARABONBA_PTR_GET_CONST(ticketNoList_, vector<string>) };
        inline vector<string> getTicketNoList() { DARABONBA_PTR_GET(ticketNoList_, vector<string>) };
        inline FlightOrderTicketList& setTicketNoList(const vector<string> & ticketNoList) { DARABONBA_PTR_SET_VALUE(ticketNoList_, ticketNoList) };
        inline FlightOrderTicketList& setTicketNoList(vector<string> && ticketNoList) { DARABONBA_PTR_SET_RVALUE(ticketNoList_, ticketNoList) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline FlightOrderTicketList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<vector<FlightOrderTicketList::FlightList>> flightList_ {};
        shared_ptr<vector<string>> ticketNoList_ {};
        shared_ptr<string> userId_ {};
      };

      class Approve : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Approve& obj) { 
          DARABONBA_PTR_TO_JSON(approve_id, approveId_);
          DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
          DARABONBA_PTR_TO_JSON(exceed_approve_id, exceedApproveId_);
          DARABONBA_PTR_TO_JSON(thirdpart_approve_id, thirdpartApproveId_);
          DARABONBA_PTR_TO_JSON(thirdpart_exceed_approve_id, thirdpartExceedApproveId_);
        };
        friend void from_json(const Darabonba::Json& j, Approve& obj) { 
          DARABONBA_PTR_FROM_JSON(approve_id, approveId_);
          DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
          DARABONBA_PTR_FROM_JSON(exceed_approve_id, exceedApproveId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_approve_id, thirdpartApproveId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_exceed_approve_id, thirdpartExceedApproveId_);
        };
        Approve() = default ;
        Approve(const Approve &) = default ;
        Approve(Approve &&) = default ;
        Approve(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Approve() = default ;
        Approve& operator=(const Approve &) = default ;
        Approve& operator=(Approve &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->approveId_ == nullptr
        && this->btripTitle_ == nullptr && this->exceedApproveId_ == nullptr && this->thirdpartApproveId_ == nullptr && this->thirdpartExceedApproveId_ == nullptr; };
        // approveId Field Functions 
        bool hasApproveId() const { return this->approveId_ != nullptr;};
        void deleteApproveId() { this->approveId_ = nullptr;};
        inline int64_t getApproveId() const { DARABONBA_PTR_GET_DEFAULT(approveId_, 0L) };
        inline Approve& setApproveId(int64_t approveId) { DARABONBA_PTR_SET_VALUE(approveId_, approveId) };


        // btripTitle Field Functions 
        bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
        void deleteBtripTitle() { this->btripTitle_ = nullptr;};
        inline string getBtripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
        inline Approve& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


        // exceedApproveId Field Functions 
        bool hasExceedApproveId() const { return this->exceedApproveId_ != nullptr;};
        void deleteExceedApproveId() { this->exceedApproveId_ = nullptr;};
        inline string getExceedApproveId() const { DARABONBA_PTR_GET_DEFAULT(exceedApproveId_, "") };
        inline Approve& setExceedApproveId(string exceedApproveId) { DARABONBA_PTR_SET_VALUE(exceedApproveId_, exceedApproveId) };


        // thirdpartApproveId Field Functions 
        bool hasThirdpartApproveId() const { return this->thirdpartApproveId_ != nullptr;};
        void deleteThirdpartApproveId() { this->thirdpartApproveId_ = nullptr;};
        inline string getThirdpartApproveId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApproveId_, "") };
        inline Approve& setThirdpartApproveId(string thirdpartApproveId) { DARABONBA_PTR_SET_VALUE(thirdpartApproveId_, thirdpartApproveId) };


        // thirdpartExceedApproveId Field Functions 
        bool hasThirdpartExceedApproveId() const { return this->thirdpartExceedApproveId_ != nullptr;};
        void deleteThirdpartExceedApproveId() { this->thirdpartExceedApproveId_ = nullptr;};
        inline string getThirdpartExceedApproveId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartExceedApproveId_, "") };
        inline Approve& setThirdpartExceedApproveId(string thirdpartExceedApproveId) { DARABONBA_PTR_SET_VALUE(thirdpartExceedApproveId_, thirdpartExceedApproveId) };


      protected:
        shared_ptr<int64_t> approveId_ {};
        shared_ptr<string> btripTitle_ {};
        shared_ptr<string> exceedApproveId_ {};
        shared_ptr<string> thirdpartApproveId_ {};
        shared_ptr<string> thirdpartExceedApproveId_ {};
      };

      virtual bool empty() const override { return this->approve_ == nullptr
        && this->corpId_ == nullptr && this->corpName_ == nullptr && this->departId_ == nullptr && this->departName_ == nullptr && this->flightOrderTicketList_ == nullptr
        && this->flightOrderUserFeeList_ == nullptr && this->flightRefundApplyList_ == nullptr && this->flightReshopApplyList_ == nullptr && this->flightSegmentList_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->insureInfoList_ == nullptr && this->mixPay_ == nullptr && this->orderReserveAmount_ == nullptr
        && this->passengerCount_ == nullptr && this->payTime_ == nullptr && this->priceInfoList_ == nullptr && this->status_ == nullptr && this->supplier_ == nullptr
        && this->thirdpartItineraryId_ == nullptr && this->ticketCorpReserveAmount_ == nullptr && this->ticketPersonReserveAmount_ == nullptr && this->tripMode_ == nullptr && this->tripType_ == nullptr
        && this->userAffiliateList_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
      // approve Field Functions 
      bool hasApprove() const { return this->approve_ != nullptr;};
      void deleteApprove() { this->approve_ = nullptr;};
      inline const Module::Approve & getApprove() const { DARABONBA_PTR_GET_CONST(approve_, Module::Approve) };
      inline Module::Approve getApprove() { DARABONBA_PTR_GET(approve_, Module::Approve) };
      inline Module& setApprove(const Module::Approve & approve) { DARABONBA_PTR_SET_VALUE(approve_, approve) };
      inline Module& setApprove(Module::Approve && approve) { DARABONBA_PTR_SET_RVALUE(approve_, approve) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Module& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // corpName Field Functions 
      bool hasCorpName() const { return this->corpName_ != nullptr;};
      void deleteCorpName() { this->corpName_ = nullptr;};
      inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
      inline Module& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


      // departId Field Functions 
      bool hasDepartId() const { return this->departId_ != nullptr;};
      void deleteDepartId() { this->departId_ = nullptr;};
      inline string getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
      inline Module& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


      // departName Field Functions 
      bool hasDepartName() const { return this->departName_ != nullptr;};
      void deleteDepartName() { this->departName_ = nullptr;};
      inline string getDepartName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
      inline Module& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


      // flightOrderTicketList Field Functions 
      bool hasFlightOrderTicketList() const { return this->flightOrderTicketList_ != nullptr;};
      void deleteFlightOrderTicketList() { this->flightOrderTicketList_ = nullptr;};
      inline const vector<Module::FlightOrderTicketList> & getFlightOrderTicketList() const { DARABONBA_PTR_GET_CONST(flightOrderTicketList_, vector<Module::FlightOrderTicketList>) };
      inline vector<Module::FlightOrderTicketList> getFlightOrderTicketList() { DARABONBA_PTR_GET(flightOrderTicketList_, vector<Module::FlightOrderTicketList>) };
      inline Module& setFlightOrderTicketList(const vector<Module::FlightOrderTicketList> & flightOrderTicketList) { DARABONBA_PTR_SET_VALUE(flightOrderTicketList_, flightOrderTicketList) };
      inline Module& setFlightOrderTicketList(vector<Module::FlightOrderTicketList> && flightOrderTicketList) { DARABONBA_PTR_SET_RVALUE(flightOrderTicketList_, flightOrderTicketList) };


      // flightOrderUserFeeList Field Functions 
      bool hasFlightOrderUserFeeList() const { return this->flightOrderUserFeeList_ != nullptr;};
      void deleteFlightOrderUserFeeList() { this->flightOrderUserFeeList_ = nullptr;};
      inline const vector<Module::FlightOrderUserFeeList> & getFlightOrderUserFeeList() const { DARABONBA_PTR_GET_CONST(flightOrderUserFeeList_, vector<Module::FlightOrderUserFeeList>) };
      inline vector<Module::FlightOrderUserFeeList> getFlightOrderUserFeeList() { DARABONBA_PTR_GET(flightOrderUserFeeList_, vector<Module::FlightOrderUserFeeList>) };
      inline Module& setFlightOrderUserFeeList(const vector<Module::FlightOrderUserFeeList> & flightOrderUserFeeList) { DARABONBA_PTR_SET_VALUE(flightOrderUserFeeList_, flightOrderUserFeeList) };
      inline Module& setFlightOrderUserFeeList(vector<Module::FlightOrderUserFeeList> && flightOrderUserFeeList) { DARABONBA_PTR_SET_RVALUE(flightOrderUserFeeList_, flightOrderUserFeeList) };


      // flightRefundApplyList Field Functions 
      bool hasFlightRefundApplyList() const { return this->flightRefundApplyList_ != nullptr;};
      void deleteFlightRefundApplyList() { this->flightRefundApplyList_ = nullptr;};
      inline const vector<Module::FlightRefundApplyList> & getFlightRefundApplyList() const { DARABONBA_PTR_GET_CONST(flightRefundApplyList_, vector<Module::FlightRefundApplyList>) };
      inline vector<Module::FlightRefundApplyList> getFlightRefundApplyList() { DARABONBA_PTR_GET(flightRefundApplyList_, vector<Module::FlightRefundApplyList>) };
      inline Module& setFlightRefundApplyList(const vector<Module::FlightRefundApplyList> & flightRefundApplyList) { DARABONBA_PTR_SET_VALUE(flightRefundApplyList_, flightRefundApplyList) };
      inline Module& setFlightRefundApplyList(vector<Module::FlightRefundApplyList> && flightRefundApplyList) { DARABONBA_PTR_SET_RVALUE(flightRefundApplyList_, flightRefundApplyList) };


      // flightReshopApplyList Field Functions 
      bool hasFlightReshopApplyList() const { return this->flightReshopApplyList_ != nullptr;};
      void deleteFlightReshopApplyList() { this->flightReshopApplyList_ = nullptr;};
      inline const vector<Module::FlightReshopApplyList> & getFlightReshopApplyList() const { DARABONBA_PTR_GET_CONST(flightReshopApplyList_, vector<Module::FlightReshopApplyList>) };
      inline vector<Module::FlightReshopApplyList> getFlightReshopApplyList() { DARABONBA_PTR_GET(flightReshopApplyList_, vector<Module::FlightReshopApplyList>) };
      inline Module& setFlightReshopApplyList(const vector<Module::FlightReshopApplyList> & flightReshopApplyList) { DARABONBA_PTR_SET_VALUE(flightReshopApplyList_, flightReshopApplyList) };
      inline Module& setFlightReshopApplyList(vector<Module::FlightReshopApplyList> && flightReshopApplyList) { DARABONBA_PTR_SET_RVALUE(flightReshopApplyList_, flightReshopApplyList) };


      // flightSegmentList Field Functions 
      bool hasFlightSegmentList() const { return this->flightSegmentList_ != nullptr;};
      void deleteFlightSegmentList() { this->flightSegmentList_ = nullptr;};
      inline const vector<Module::FlightSegmentList> & getFlightSegmentList() const { DARABONBA_PTR_GET_CONST(flightSegmentList_, vector<Module::FlightSegmentList>) };
      inline vector<Module::FlightSegmentList> getFlightSegmentList() { DARABONBA_PTR_GET(flightSegmentList_, vector<Module::FlightSegmentList>) };
      inline Module& setFlightSegmentList(const vector<Module::FlightSegmentList> & flightSegmentList) { DARABONBA_PTR_SET_VALUE(flightSegmentList_, flightSegmentList) };
      inline Module& setFlightSegmentList(vector<Module::FlightSegmentList> && flightSegmentList) { DARABONBA_PTR_SET_RVALUE(flightSegmentList_, flightSegmentList) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Module& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Module& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Module& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // insureInfoList Field Functions 
      bool hasInsureInfoList() const { return this->insureInfoList_ != nullptr;};
      void deleteInsureInfoList() { this->insureInfoList_ = nullptr;};
      inline const vector<Module::InsureInfoList> & getInsureInfoList() const { DARABONBA_PTR_GET_CONST(insureInfoList_, vector<Module::InsureInfoList>) };
      inline vector<Module::InsureInfoList> getInsureInfoList() { DARABONBA_PTR_GET(insureInfoList_, vector<Module::InsureInfoList>) };
      inline Module& setInsureInfoList(const vector<Module::InsureInfoList> & insureInfoList) { DARABONBA_PTR_SET_VALUE(insureInfoList_, insureInfoList) };
      inline Module& setInsureInfoList(vector<Module::InsureInfoList> && insureInfoList) { DARABONBA_PTR_SET_RVALUE(insureInfoList_, insureInfoList) };


      // mixPay Field Functions 
      bool hasMixPay() const { return this->mixPay_ != nullptr;};
      void deleteMixPay() { this->mixPay_ = nullptr;};
      inline bool getMixPay() const { DARABONBA_PTR_GET_DEFAULT(mixPay_, false) };
      inline Module& setMixPay(bool mixPay) { DARABONBA_PTR_SET_VALUE(mixPay_, mixPay) };


      // orderReserveAmount Field Functions 
      bool hasOrderReserveAmount() const { return this->orderReserveAmount_ != nullptr;};
      void deleteOrderReserveAmount() { this->orderReserveAmount_ = nullptr;};
      inline double getOrderReserveAmount() const { DARABONBA_PTR_GET_DEFAULT(orderReserveAmount_, 0.0) };
      inline Module& setOrderReserveAmount(double orderReserveAmount) { DARABONBA_PTR_SET_VALUE(orderReserveAmount_, orderReserveAmount) };


      // passengerCount Field Functions 
      bool hasPassengerCount() const { return this->passengerCount_ != nullptr;};
      void deletePassengerCount() { this->passengerCount_ = nullptr;};
      inline int32_t getPassengerCount() const { DARABONBA_PTR_GET_DEFAULT(passengerCount_, 0) };
      inline Module& setPassengerCount(int32_t passengerCount) { DARABONBA_PTR_SET_VALUE(passengerCount_, passengerCount) };


      // payTime Field Functions 
      bool hasPayTime() const { return this->payTime_ != nullptr;};
      void deletePayTime() { this->payTime_ = nullptr;};
      inline string getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
      inline Module& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


      // priceInfoList Field Functions 
      bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
      void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
      inline const vector<Module::PriceInfoList> & getPriceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Module::PriceInfoList>) };
      inline vector<Module::PriceInfoList> getPriceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Module::PriceInfoList>) };
      inline Module& setPriceInfoList(const vector<Module::PriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
      inline Module& setPriceInfoList(vector<Module::PriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supplier Field Functions 
      bool hasSupplier() const { return this->supplier_ != nullptr;};
      void deleteSupplier() { this->supplier_ = nullptr;};
      inline string getSupplier() const { DARABONBA_PTR_GET_DEFAULT(supplier_, "") };
      inline Module& setSupplier(string supplier) { DARABONBA_PTR_SET_VALUE(supplier_, supplier) };


      // thirdpartItineraryId Field Functions 
      bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
      void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
      inline const vector<string> & getThirdpartItineraryId() const { DARABONBA_PTR_GET_CONST(thirdpartItineraryId_, vector<string>) };
      inline vector<string> getThirdpartItineraryId() { DARABONBA_PTR_GET(thirdpartItineraryId_, vector<string>) };
      inline Module& setThirdpartItineraryId(const vector<string> & thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };
      inline Module& setThirdpartItineraryId(vector<string> && thirdpartItineraryId) { DARABONBA_PTR_SET_RVALUE(thirdpartItineraryId_, thirdpartItineraryId) };


      // ticketCorpReserveAmount Field Functions 
      bool hasTicketCorpReserveAmount() const { return this->ticketCorpReserveAmount_ != nullptr;};
      void deleteTicketCorpReserveAmount() { this->ticketCorpReserveAmount_ = nullptr;};
      inline double getTicketCorpReserveAmount() const { DARABONBA_PTR_GET_DEFAULT(ticketCorpReserveAmount_, 0.0) };
      inline Module& setTicketCorpReserveAmount(double ticketCorpReserveAmount) { DARABONBA_PTR_SET_VALUE(ticketCorpReserveAmount_, ticketCorpReserveAmount) };


      // ticketPersonReserveAmount Field Functions 
      bool hasTicketPersonReserveAmount() const { return this->ticketPersonReserveAmount_ != nullptr;};
      void deleteTicketPersonReserveAmount() { this->ticketPersonReserveAmount_ = nullptr;};
      inline double getTicketPersonReserveAmount() const { DARABONBA_PTR_GET_DEFAULT(ticketPersonReserveAmount_, 0.0) };
      inline Module& setTicketPersonReserveAmount(double ticketPersonReserveAmount) { DARABONBA_PTR_SET_VALUE(ticketPersonReserveAmount_, ticketPersonReserveAmount) };


      // tripMode Field Functions 
      bool hasTripMode() const { return this->tripMode_ != nullptr;};
      void deleteTripMode() { this->tripMode_ = nullptr;};
      inline int32_t getTripMode() const { DARABONBA_PTR_GET_DEFAULT(tripMode_, 0) };
      inline Module& setTripMode(int32_t tripMode) { DARABONBA_PTR_SET_VALUE(tripMode_, tripMode) };


      // tripType Field Functions 
      bool hasTripType() const { return this->tripType_ != nullptr;};
      void deleteTripType() { this->tripType_ = nullptr;};
      inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
      inline Module& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


      // userAffiliateList Field Functions 
      bool hasUserAffiliateList() const { return this->userAffiliateList_ != nullptr;};
      void deleteUserAffiliateList() { this->userAffiliateList_ = nullptr;};
      inline const vector<Module::UserAffiliateList> & getUserAffiliateList() const { DARABONBA_PTR_GET_CONST(userAffiliateList_, vector<Module::UserAffiliateList>) };
      inline vector<Module::UserAffiliateList> getUserAffiliateList() { DARABONBA_PTR_GET(userAffiliateList_, vector<Module::UserAffiliateList>) };
      inline Module& setUserAffiliateList(const vector<Module::UserAffiliateList> & userAffiliateList) { DARABONBA_PTR_SET_VALUE(userAffiliateList_, userAffiliateList) };
      inline Module& setUserAffiliateList(vector<Module::UserAffiliateList> && userAffiliateList) { DARABONBA_PTR_SET_RVALUE(userAffiliateList_, userAffiliateList) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Module& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Module& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<Module::Approve> approve_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<string> corpName_ {};
      shared_ptr<string> departId_ {};
      shared_ptr<string> departName_ {};
      shared_ptr<vector<Module::FlightOrderTicketList>> flightOrderTicketList_ {};
      shared_ptr<vector<Module::FlightOrderUserFeeList>> flightOrderUserFeeList_ {};
      shared_ptr<vector<Module::FlightRefundApplyList>> flightRefundApplyList_ {};
      shared_ptr<vector<Module::FlightReshopApplyList>> flightReshopApplyList_ {};
      shared_ptr<vector<Module::FlightSegmentList>> flightSegmentList_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> id_ {};
      shared_ptr<vector<Module::InsureInfoList>> insureInfoList_ {};
      shared_ptr<bool> mixPay_ {};
      shared_ptr<double> orderReserveAmount_ {};
      shared_ptr<int32_t> passengerCount_ {};
      shared_ptr<string> payTime_ {};
      shared_ptr<vector<Module::PriceInfoList>> priceInfoList_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> supplier_ {};
      shared_ptr<vector<string>> thirdpartItineraryId_ {};
      shared_ptr<double> ticketCorpReserveAmount_ {};
      shared_ptr<double> ticketPersonReserveAmount_ {};
      shared_ptr<int32_t> tripMode_ {};
      shared_ptr<int32_t> tripType_ {};
      shared_ptr<vector<Module::UserAffiliateList>> userAffiliateList_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightOrderListQueryV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightOrderListQueryV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<FlightOrderListQueryV2ResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<FlightOrderListQueryV2ResponseBody::Module>) };
    inline vector<FlightOrderListQueryV2ResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<FlightOrderListQueryV2ResponseBody::Module>) };
    inline FlightOrderListQueryV2ResponseBody& setModule(const vector<FlightOrderListQueryV2ResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightOrderListQueryV2ResponseBody& setModule(vector<FlightOrderListQueryV2ResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const FlightOrderListQueryV2ResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, FlightOrderListQueryV2ResponseBody::PageInfo) };
    inline FlightOrderListQueryV2ResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, FlightOrderListQueryV2ResponseBody::PageInfo) };
    inline FlightOrderListQueryV2ResponseBody& setPageInfo(const FlightOrderListQueryV2ResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline FlightOrderListQueryV2ResponseBody& setPageInfo(FlightOrderListQueryV2ResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightOrderListQueryV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightOrderListQueryV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightOrderListQueryV2ResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<FlightOrderListQueryV2ResponseBody::Module>> module_ {};
    shared_ptr<FlightOrderListQueryV2ResponseBody::PageInfo> pageInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
