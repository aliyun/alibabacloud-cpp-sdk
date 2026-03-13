// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYLISTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPLYLISTQUERYRESPONSEBODY_HPP_
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
  class ApplyListQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyListQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module_list, moduleList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyListQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module_list, moduleList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    ApplyListQueryResponseBody() = default ;
    ApplyListQueryResponseBody(const ApplyListQueryResponseBody &) = default ;
    ApplyListQueryResponseBody(ApplyListQueryResponseBody &&) = default ;
    ApplyListQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyListQueryResponseBody() = default ;
    ApplyListQueryResponseBody& operator=(const ApplyListQueryResponseBody &) = default ;
    ApplyListQueryResponseBody& operator=(ApplyListQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModuleList& obj) { 
        DARABONBA_PTR_TO_JSON(apply_show_id, applyShowId_);
        DARABONBA_PTR_TO_JSON(approver_list, approverList_);
        DARABONBA_PTR_TO_JSON(car_rule, carRule_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(corp_name, corpName_);
        DARABONBA_PTR_TO_JSON(depart_id, departId_);
        DARABONBA_PTR_TO_JSON(depart_name, departName_);
        DARABONBA_PTR_TO_JSON(external_traveler_list, externalTravelerList_);
        DARABONBA_PTR_TO_JSON(flow_code, flowCode_);
        DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(itinerary_list, itineraryList_);
        DARABONBA_PTR_TO_JSON(itinerary_rule, itineraryRule_);
        DARABONBA_PTR_TO_JSON(itinerary_set_list, itinerarySetList_);
        DARABONBA_PTR_TO_JSON(job_no, jobNo_);
        DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
        DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
        DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
        DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
        DARABONBA_PTR_TO_JSON(traveler_list, travelerList_);
        DARABONBA_PTR_TO_JSON(trip_cause, tripCause_);
        DARABONBA_PTR_TO_JSON(trip_day, tripDay_);
        DARABONBA_PTR_TO_JSON(trip_title, tripTitle_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(union_no, unionNo_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
        DARABONBA_PTR_TO_JSON(user_name, userName_);
      };
      friend void from_json(const Darabonba::Json& j, ModuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_show_id, applyShowId_);
        DARABONBA_PTR_FROM_JSON(approver_list, approverList_);
        DARABONBA_PTR_FROM_JSON(car_rule, carRule_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
        DARABONBA_PTR_FROM_JSON(depart_id, departId_);
        DARABONBA_PTR_FROM_JSON(depart_name, departName_);
        DARABONBA_PTR_FROM_JSON(external_traveler_list, externalTravelerList_);
        DARABONBA_PTR_FROM_JSON(flow_code, flowCode_);
        DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(itinerary_list, itineraryList_);
        DARABONBA_PTR_FROM_JSON(itinerary_rule, itineraryRule_);
        DARABONBA_PTR_FROM_JSON(itinerary_set_list, itinerarySetList_);
        DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
        DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
        DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
        DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
        DARABONBA_PTR_FROM_JSON(traveler_list, travelerList_);
        DARABONBA_PTR_FROM_JSON(trip_cause, tripCause_);
        DARABONBA_PTR_FROM_JSON(trip_day, tripDay_);
        DARABONBA_PTR_FROM_JSON(trip_title, tripTitle_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(union_no, unionNo_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
        DARABONBA_PTR_FROM_JSON(user_name, userName_);
      };
      ModuleList() = default ;
      ModuleList(const ModuleList &) = default ;
      ModuleList(ModuleList &&) = default ;
      ModuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModuleList() = default ;
      ModuleList& operator=(const ModuleList &) = default ;
      ModuleList& operator=(ModuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TravelerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TravelerList& obj) { 
          DARABONBA_PTR_TO_JSON(attribute, attribute_);
          DARABONBA_PTR_TO_JSON(car_city_set, carCitySet_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(depart_id, departId_);
          DARABONBA_PTR_TO_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_TO_JSON(job_no, jobNo_);
          DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
          DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
        };
        friend void from_json(const Darabonba::Json& j, TravelerList& obj) { 
          DARABONBA_PTR_FROM_JSON(attribute, attribute_);
          DARABONBA_PTR_FROM_JSON(car_city_set, carCitySet_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(depart_id, departId_);
          DARABONBA_PTR_FROM_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
          DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
          DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
          DARABONBA_PTR_FROM_JSON(user_name, userName_);
        };
        TravelerList() = default ;
        TravelerList(const TravelerList &) = default ;
        TravelerList(TravelerList &&) = default ;
        TravelerList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TravelerList() = default ;
        TravelerList& operator=(const TravelerList &) = default ;
        TravelerList& operator=(TravelerList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CarCitySet : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CarCitySet& obj) { 
            DARABONBA_PTR_TO_JSON(city_code, cityCode_);
            DARABONBA_PTR_TO_JSON(city_name, cityName_);
          };
          friend void from_json(const Darabonba::Json& j, CarCitySet& obj) { 
            DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
            DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          };
          CarCitySet() = default ;
          CarCitySet(const CarCitySet &) = default ;
          CarCitySet(CarCitySet &&) = default ;
          CarCitySet(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CarCitySet() = default ;
          CarCitySet& operator=(const CarCitySet &) = default ;
          CarCitySet& operator=(CarCitySet &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->cityName_ == nullptr; };
          // cityCode Field Functions 
          bool hasCityCode() const { return this->cityCode_ != nullptr;};
          void deleteCityCode() { this->cityCode_ = nullptr;};
          inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
          inline CarCitySet& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


          // cityName Field Functions 
          bool hasCityName() const { return this->cityName_ != nullptr;};
          void deleteCityName() { this->cityName_ = nullptr;};
          inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
          inline CarCitySet& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        protected:
          shared_ptr<string> cityCode_ {};
          shared_ptr<string> cityName_ {};
        };

        virtual bool empty() const override { return this->attribute_ == nullptr
        && this->carCitySet_ == nullptr && this->costCenterName_ == nullptr && this->departId_ == nullptr && this->invoiceName_ == nullptr && this->jobNo_ == nullptr
        && this->paymentDepartmentName_ == nullptr && this->projectCode_ == nullptr && this->projectTitle_ == nullptr && this->thirdpartDepartId_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr; };
        // attribute Field Functions 
        bool hasAttribute() const { return this->attribute_ != nullptr;};
        void deleteAttribute() { this->attribute_ = nullptr;};
        inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
        inline TravelerList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


        // carCitySet Field Functions 
        bool hasCarCitySet() const { return this->carCitySet_ != nullptr;};
        void deleteCarCitySet() { this->carCitySet_ = nullptr;};
        inline const vector<TravelerList::CarCitySet> & getCarCitySet() const { DARABONBA_PTR_GET_CONST(carCitySet_, vector<TravelerList::CarCitySet>) };
        inline vector<TravelerList::CarCitySet> getCarCitySet() { DARABONBA_PTR_GET(carCitySet_, vector<TravelerList::CarCitySet>) };
        inline TravelerList& setCarCitySet(const vector<TravelerList::CarCitySet> & carCitySet) { DARABONBA_PTR_SET_VALUE(carCitySet_, carCitySet) };
        inline TravelerList& setCarCitySet(vector<TravelerList::CarCitySet> && carCitySet) { DARABONBA_PTR_SET_RVALUE(carCitySet_, carCitySet) };


        // costCenterName Field Functions 
        bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
        void deleteCostCenterName() { this->costCenterName_ = nullptr;};
        inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
        inline TravelerList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


        // departId Field Functions 
        bool hasDepartId() const { return this->departId_ != nullptr;};
        void deleteDepartId() { this->departId_ = nullptr;};
        inline string getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
        inline TravelerList& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


        // invoiceName Field Functions 
        bool hasInvoiceName() const { return this->invoiceName_ != nullptr;};
        void deleteInvoiceName() { this->invoiceName_ = nullptr;};
        inline string getInvoiceName() const { DARABONBA_PTR_GET_DEFAULT(invoiceName_, "") };
        inline TravelerList& setInvoiceName(string invoiceName) { DARABONBA_PTR_SET_VALUE(invoiceName_, invoiceName) };


        // jobNo Field Functions 
        bool hasJobNo() const { return this->jobNo_ != nullptr;};
        void deleteJobNo() { this->jobNo_ = nullptr;};
        inline string getJobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
        inline TravelerList& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


        // paymentDepartmentName Field Functions 
        bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
        void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
        inline string getPaymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
        inline TravelerList& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


        // projectCode Field Functions 
        bool hasProjectCode() const { return this->projectCode_ != nullptr;};
        void deleteProjectCode() { this->projectCode_ = nullptr;};
        inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
        inline TravelerList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


        // projectTitle Field Functions 
        bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
        void deleteProjectTitle() { this->projectTitle_ = nullptr;};
        inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
        inline TravelerList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


        // thirdpartDepartId Field Functions 
        bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
        void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
        inline string getThirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
        inline TravelerList& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline TravelerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline TravelerList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> attribute_ {};
        shared_ptr<vector<TravelerList::CarCitySet>> carCitySet_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> departId_ {};
        shared_ptr<string> invoiceName_ {};
        shared_ptr<string> jobNo_ {};
        shared_ptr<string> paymentDepartmentName_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectTitle_ {};
        shared_ptr<string> thirdpartDepartId_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
      };

      class ItinerarySetList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItinerarySetList& obj) { 
          DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
          DARABONBA_PTR_TO_JSON(city_code_set, cityCodeSet_);
          DARABONBA_PTR_TO_JSON(city_set, citySet_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(dep_date, depDate_);
          DARABONBA_PTR_TO_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
          DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_TO_JSON(thirdpart_invoice_id, thirdpartInvoiceId_);
          DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
          DARABONBA_PTR_TO_JSON(traffic_type, trafficType_);
        };
        friend void from_json(const Darabonba::Json& j, ItinerarySetList& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
          DARABONBA_PTR_FROM_JSON(city_code_set, cityCodeSet_);
          DARABONBA_PTR_FROM_JSON(city_set, citySet_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
          DARABONBA_PTR_FROM_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
          DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_invoice_id, thirdpartInvoiceId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
          DARABONBA_PTR_FROM_JSON(traffic_type, trafficType_);
        };
        ItinerarySetList() = default ;
        ItinerarySetList(const ItinerarySetList &) = default ;
        ItinerarySetList(ItinerarySetList &&) = default ;
        ItinerarySetList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItinerarySetList() = default ;
        ItinerarySetList& operator=(const ItinerarySetList &) = default ;
        ItinerarySetList& operator=(ItinerarySetList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arrDate_ == nullptr
        && this->cityCodeSet_ == nullptr && this->citySet_ == nullptr && this->costCenterName_ == nullptr && this->depDate_ == nullptr && this->invoiceName_ == nullptr
        && this->itineraryId_ == nullptr && this->projectCode_ == nullptr && this->projectTitle_ == nullptr && this->thirdpartCostCenterId_ == nullptr && this->thirdpartInvoiceId_ == nullptr
        && this->thirdpartItineraryId_ == nullptr && this->trafficType_ == nullptr; };
        // arrDate Field Functions 
        bool hasArrDate() const { return this->arrDate_ != nullptr;};
        void deleteArrDate() { this->arrDate_ = nullptr;};
        inline string getArrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
        inline ItinerarySetList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


        // cityCodeSet Field Functions 
        bool hasCityCodeSet() const { return this->cityCodeSet_ != nullptr;};
        void deleteCityCodeSet() { this->cityCodeSet_ = nullptr;};
        inline string getCityCodeSet() const { DARABONBA_PTR_GET_DEFAULT(cityCodeSet_, "") };
        inline ItinerarySetList& setCityCodeSet(string cityCodeSet) { DARABONBA_PTR_SET_VALUE(cityCodeSet_, cityCodeSet) };


        // citySet Field Functions 
        bool hasCitySet() const { return this->citySet_ != nullptr;};
        void deleteCitySet() { this->citySet_ = nullptr;};
        inline string getCitySet() const { DARABONBA_PTR_GET_DEFAULT(citySet_, "") };
        inline ItinerarySetList& setCitySet(string citySet) { DARABONBA_PTR_SET_VALUE(citySet_, citySet) };


        // costCenterName Field Functions 
        bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
        void deleteCostCenterName() { this->costCenterName_ = nullptr;};
        inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
        inline ItinerarySetList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


        // depDate Field Functions 
        bool hasDepDate() const { return this->depDate_ != nullptr;};
        void deleteDepDate() { this->depDate_ = nullptr;};
        inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
        inline ItinerarySetList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


        // invoiceName Field Functions 
        bool hasInvoiceName() const { return this->invoiceName_ != nullptr;};
        void deleteInvoiceName() { this->invoiceName_ = nullptr;};
        inline string getInvoiceName() const { DARABONBA_PTR_GET_DEFAULT(invoiceName_, "") };
        inline ItinerarySetList& setInvoiceName(string invoiceName) { DARABONBA_PTR_SET_VALUE(invoiceName_, invoiceName) };


        // itineraryId Field Functions 
        bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
        void deleteItineraryId() { this->itineraryId_ = nullptr;};
        inline string getItineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
        inline ItinerarySetList& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


        // projectCode Field Functions 
        bool hasProjectCode() const { return this->projectCode_ != nullptr;};
        void deleteProjectCode() { this->projectCode_ = nullptr;};
        inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
        inline ItinerarySetList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


        // projectTitle Field Functions 
        bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
        void deleteProjectTitle() { this->projectTitle_ = nullptr;};
        inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
        inline ItinerarySetList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


        // thirdpartCostCenterId Field Functions 
        bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
        void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
        inline string getThirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
        inline ItinerarySetList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


        // thirdpartInvoiceId Field Functions 
        bool hasThirdpartInvoiceId() const { return this->thirdpartInvoiceId_ != nullptr;};
        void deleteThirdpartInvoiceId() { this->thirdpartInvoiceId_ = nullptr;};
        inline string getThirdpartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartInvoiceId_, "") };
        inline ItinerarySetList& setThirdpartInvoiceId(string thirdpartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdpartInvoiceId_, thirdpartInvoiceId) };


        // thirdpartItineraryId Field Functions 
        bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
        void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
        inline string getThirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
        inline ItinerarySetList& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


        // trafficType Field Functions 
        bool hasTrafficType() const { return this->trafficType_ != nullptr;};
        void deleteTrafficType() { this->trafficType_ = nullptr;};
        inline int32_t getTrafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, 0) };
        inline ItinerarySetList& setTrafficType(int32_t trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


      protected:
        shared_ptr<string> arrDate_ {};
        shared_ptr<string> cityCodeSet_ {};
        shared_ptr<string> citySet_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> depDate_ {};
        shared_ptr<string> invoiceName_ {};
        shared_ptr<string> itineraryId_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectTitle_ {};
        shared_ptr<string> thirdpartCostCenterId_ {};
        shared_ptr<string> thirdpartInvoiceId_ {};
        shared_ptr<string> thirdpartItineraryId_ {};
        shared_ptr<int32_t> trafficType_ {};
      };

      class ItineraryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItineraryList& obj) { 
          DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
          DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(dep_city, depCity_);
          DARABONBA_PTR_TO_JSON(dep_date, depDate_);
          DARABONBA_PTR_TO_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
          DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_TO_JSON(thirdpart_invoice_id, thirdpartInvoiceId_);
          DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
          DARABONBA_PTR_TO_JSON(traffic_type, trafficType_);
          DARABONBA_PTR_TO_JSON(trip_way, tripWay_);
        };
        friend void from_json(const Darabonba::Json& j, ItineraryList& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
          DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
          DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
          DARABONBA_PTR_FROM_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
          DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_invoice_id, thirdpartInvoiceId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
          DARABONBA_PTR_FROM_JSON(traffic_type, trafficType_);
          DARABONBA_PTR_FROM_JSON(trip_way, tripWay_);
        };
        ItineraryList() = default ;
        ItineraryList(const ItineraryList &) = default ;
        ItineraryList(ItineraryList &&) = default ;
        ItineraryList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItineraryList() = default ;
        ItineraryList& operator=(const ItineraryList &) = default ;
        ItineraryList& operator=(ItineraryList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arrCity_ == nullptr
        && this->arrDate_ == nullptr && this->costCenterName_ == nullptr && this->depCity_ == nullptr && this->depDate_ == nullptr && this->invoiceName_ == nullptr
        && this->itineraryId_ == nullptr && this->projectCode_ == nullptr && this->projectTitle_ == nullptr && this->thirdpartCostCenterId_ == nullptr && this->thirdpartInvoiceId_ == nullptr
        && this->thirdpartItineraryId_ == nullptr && this->trafficType_ == nullptr && this->tripWay_ == nullptr; };
        // arrCity Field Functions 
        bool hasArrCity() const { return this->arrCity_ != nullptr;};
        void deleteArrCity() { this->arrCity_ = nullptr;};
        inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
        inline ItineraryList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


        // arrDate Field Functions 
        bool hasArrDate() const { return this->arrDate_ != nullptr;};
        void deleteArrDate() { this->arrDate_ = nullptr;};
        inline string getArrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
        inline ItineraryList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


        // costCenterName Field Functions 
        bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
        void deleteCostCenterName() { this->costCenterName_ = nullptr;};
        inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
        inline ItineraryList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


        // depCity Field Functions 
        bool hasDepCity() const { return this->depCity_ != nullptr;};
        void deleteDepCity() { this->depCity_ = nullptr;};
        inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
        inline ItineraryList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


        // depDate Field Functions 
        bool hasDepDate() const { return this->depDate_ != nullptr;};
        void deleteDepDate() { this->depDate_ = nullptr;};
        inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
        inline ItineraryList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


        // invoiceName Field Functions 
        bool hasInvoiceName() const { return this->invoiceName_ != nullptr;};
        void deleteInvoiceName() { this->invoiceName_ = nullptr;};
        inline string getInvoiceName() const { DARABONBA_PTR_GET_DEFAULT(invoiceName_, "") };
        inline ItineraryList& setInvoiceName(string invoiceName) { DARABONBA_PTR_SET_VALUE(invoiceName_, invoiceName) };


        // itineraryId Field Functions 
        bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
        void deleteItineraryId() { this->itineraryId_ = nullptr;};
        inline string getItineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
        inline ItineraryList& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


        // projectCode Field Functions 
        bool hasProjectCode() const { return this->projectCode_ != nullptr;};
        void deleteProjectCode() { this->projectCode_ = nullptr;};
        inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
        inline ItineraryList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


        // projectTitle Field Functions 
        bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
        void deleteProjectTitle() { this->projectTitle_ = nullptr;};
        inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
        inline ItineraryList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


        // thirdpartCostCenterId Field Functions 
        bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
        void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
        inline string getThirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
        inline ItineraryList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


        // thirdpartInvoiceId Field Functions 
        bool hasThirdpartInvoiceId() const { return this->thirdpartInvoiceId_ != nullptr;};
        void deleteThirdpartInvoiceId() { this->thirdpartInvoiceId_ = nullptr;};
        inline string getThirdpartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartInvoiceId_, "") };
        inline ItineraryList& setThirdpartInvoiceId(string thirdpartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdpartInvoiceId_, thirdpartInvoiceId) };


        // thirdpartItineraryId Field Functions 
        bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
        void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
        inline string getThirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
        inline ItineraryList& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


        // trafficType Field Functions 
        bool hasTrafficType() const { return this->trafficType_ != nullptr;};
        void deleteTrafficType() { this->trafficType_ = nullptr;};
        inline int32_t getTrafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, 0) };
        inline ItineraryList& setTrafficType(int32_t trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


        // tripWay Field Functions 
        bool hasTripWay() const { return this->tripWay_ != nullptr;};
        void deleteTripWay() { this->tripWay_ = nullptr;};
        inline int32_t getTripWay() const { DARABONBA_PTR_GET_DEFAULT(tripWay_, 0) };
        inline ItineraryList& setTripWay(int32_t tripWay) { DARABONBA_PTR_SET_VALUE(tripWay_, tripWay) };


      protected:
        shared_ptr<string> arrCity_ {};
        shared_ptr<string> arrDate_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> depCity_ {};
        shared_ptr<string> depDate_ {};
        shared_ptr<string> invoiceName_ {};
        shared_ptr<string> itineraryId_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectTitle_ {};
        shared_ptr<string> thirdpartCostCenterId_ {};
        shared_ptr<string> thirdpartInvoiceId_ {};
        shared_ptr<string> thirdpartItineraryId_ {};
        shared_ptr<int32_t> trafficType_ {};
        shared_ptr<int32_t> tripWay_ {};
      };

      class ExternalTravelerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExternalTravelerList& obj) { 
          DARABONBA_PTR_TO_JSON(attribute, attribute_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(depart_id, departId_);
          DARABONBA_PTR_TO_JSON(external_user_id, externalUserId_);
          DARABONBA_PTR_TO_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
          DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
        };
        friend void from_json(const Darabonba::Json& j, ExternalTravelerList& obj) { 
          DARABONBA_PTR_FROM_JSON(attribute, attribute_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(depart_id, departId_);
          DARABONBA_PTR_FROM_JSON(external_user_id, externalUserId_);
          DARABONBA_PTR_FROM_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
          DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
          DARABONBA_PTR_FROM_JSON(user_name, userName_);
        };
        ExternalTravelerList() = default ;
        ExternalTravelerList(const ExternalTravelerList &) = default ;
        ExternalTravelerList(ExternalTravelerList &&) = default ;
        ExternalTravelerList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExternalTravelerList() = default ;
        ExternalTravelerList& operator=(const ExternalTravelerList &) = default ;
        ExternalTravelerList& operator=(ExternalTravelerList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attribute_ == nullptr
        && this->costCenterName_ == nullptr && this->departId_ == nullptr && this->externalUserId_ == nullptr && this->invoiceName_ == nullptr && this->paymentDepartmentName_ == nullptr
        && this->projectCode_ == nullptr && this->projectTitle_ == nullptr && this->thirdpartDepartId_ == nullptr && this->userName_ == nullptr; };
        // attribute Field Functions 
        bool hasAttribute() const { return this->attribute_ != nullptr;};
        void deleteAttribute() { this->attribute_ = nullptr;};
        inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
        inline ExternalTravelerList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


        // costCenterName Field Functions 
        bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
        void deleteCostCenterName() { this->costCenterName_ = nullptr;};
        inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
        inline ExternalTravelerList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


        // departId Field Functions 
        bool hasDepartId() const { return this->departId_ != nullptr;};
        void deleteDepartId() { this->departId_ = nullptr;};
        inline string getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
        inline ExternalTravelerList& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


        // externalUserId Field Functions 
        bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
        void deleteExternalUserId() { this->externalUserId_ = nullptr;};
        inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
        inline ExternalTravelerList& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


        // invoiceName Field Functions 
        bool hasInvoiceName() const { return this->invoiceName_ != nullptr;};
        void deleteInvoiceName() { this->invoiceName_ = nullptr;};
        inline string getInvoiceName() const { DARABONBA_PTR_GET_DEFAULT(invoiceName_, "") };
        inline ExternalTravelerList& setInvoiceName(string invoiceName) { DARABONBA_PTR_SET_VALUE(invoiceName_, invoiceName) };


        // paymentDepartmentName Field Functions 
        bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
        void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
        inline string getPaymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
        inline ExternalTravelerList& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


        // projectCode Field Functions 
        bool hasProjectCode() const { return this->projectCode_ != nullptr;};
        void deleteProjectCode() { this->projectCode_ = nullptr;};
        inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
        inline ExternalTravelerList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


        // projectTitle Field Functions 
        bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
        void deleteProjectTitle() { this->projectTitle_ = nullptr;};
        inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
        inline ExternalTravelerList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


        // thirdpartDepartId Field Functions 
        bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
        void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
        inline string getThirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
        inline ExternalTravelerList& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline ExternalTravelerList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> attribute_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> departId_ {};
        shared_ptr<string> externalUserId_ {};
        shared_ptr<string> invoiceName_ {};
        shared_ptr<string> paymentDepartmentName_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectTitle_ {};
        shared_ptr<string> thirdpartDepartId_ {};
        shared_ptr<string> userName_ {};
      };

      class CarRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CarRule& obj) { 
          DARABONBA_PTR_TO_JSON(scenario_template_id, scenarioTemplateId_);
          DARABONBA_PTR_TO_JSON(scenario_template_name, scenarioTemplateName_);
        };
        friend void from_json(const Darabonba::Json& j, CarRule& obj) { 
          DARABONBA_PTR_FROM_JSON(scenario_template_id, scenarioTemplateId_);
          DARABONBA_PTR_FROM_JSON(scenario_template_name, scenarioTemplateName_);
        };
        CarRule() = default ;
        CarRule(const CarRule &) = default ;
        CarRule(CarRule &&) = default ;
        CarRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CarRule() = default ;
        CarRule& operator=(const CarRule &) = default ;
        CarRule& operator=(CarRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->scenarioTemplateId_ == nullptr
        && this->scenarioTemplateName_ == nullptr; };
        // scenarioTemplateId Field Functions 
        bool hasScenarioTemplateId() const { return this->scenarioTemplateId_ != nullptr;};
        void deleteScenarioTemplateId() { this->scenarioTemplateId_ = nullptr;};
        inline string getScenarioTemplateId() const { DARABONBA_PTR_GET_DEFAULT(scenarioTemplateId_, "") };
        inline CarRule& setScenarioTemplateId(string scenarioTemplateId) { DARABONBA_PTR_SET_VALUE(scenarioTemplateId_, scenarioTemplateId) };


        // scenarioTemplateName Field Functions 
        bool hasScenarioTemplateName() const { return this->scenarioTemplateName_ != nullptr;};
        void deleteScenarioTemplateName() { this->scenarioTemplateName_ = nullptr;};
        inline string getScenarioTemplateName() const { DARABONBA_PTR_GET_DEFAULT(scenarioTemplateName_, "") };
        inline CarRule& setScenarioTemplateName(string scenarioTemplateName) { DARABONBA_PTR_SET_VALUE(scenarioTemplateName_, scenarioTemplateName) };


      protected:
        shared_ptr<string> scenarioTemplateId_ {};
        shared_ptr<string> scenarioTemplateName_ {};
      };

      class ApproverList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApproverList& obj) { 
          DARABONBA_PTR_TO_JSON(note, note_);
          DARABONBA_PTR_TO_JSON(operate_time, operateTime_);
          DARABONBA_PTR_TO_JSON(order, order_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
        };
        friend void from_json(const Darabonba::Json& j, ApproverList& obj) { 
          DARABONBA_PTR_FROM_JSON(note, note_);
          DARABONBA_PTR_FROM_JSON(operate_time, operateTime_);
          DARABONBA_PTR_FROM_JSON(order, order_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
          DARABONBA_PTR_FROM_JSON(user_name, userName_);
        };
        ApproverList() = default ;
        ApproverList(const ApproverList &) = default ;
        ApproverList(ApproverList &&) = default ;
        ApproverList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApproverList() = default ;
        ApproverList& operator=(const ApproverList &) = default ;
        ApproverList& operator=(ApproverList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->note_ == nullptr
        && this->operateTime_ == nullptr && this->order_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr; };
        // note Field Functions 
        bool hasNote() const { return this->note_ != nullptr;};
        void deleteNote() { this->note_ = nullptr;};
        inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
        inline ApproverList& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


        // operateTime Field Functions 
        bool hasOperateTime() const { return this->operateTime_ != nullptr;};
        void deleteOperateTime() { this->operateTime_ = nullptr;};
        inline string getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
        inline ApproverList& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


        // order Field Functions 
        bool hasOrder() const { return this->order_ != nullptr;};
        void deleteOrder() { this->order_ = nullptr;};
        inline int32_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
        inline ApproverList& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline ApproverList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusDesc Field Functions 
        bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
        void deleteStatusDesc() { this->statusDesc_ = nullptr;};
        inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
        inline ApproverList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline ApproverList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline ApproverList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> note_ {};
        shared_ptr<string> operateTime_ {};
        shared_ptr<int32_t> order_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> statusDesc_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->applyShowId_ == nullptr
        && this->approverList_ == nullptr && this->carRule_ == nullptr && this->corpId_ == nullptr && this->corpName_ == nullptr && this->departId_ == nullptr
        && this->departName_ == nullptr && this->externalTravelerList_ == nullptr && this->flowCode_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->itineraryList_ == nullptr && this->itineraryRule_ == nullptr && this->itinerarySetList_ == nullptr && this->jobNo_ == nullptr
        && this->paymentDepartmentId_ == nullptr && this->paymentDepartmentName_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr && this->thirdpartBusinessId_ == nullptr
        && this->thirdpartId_ == nullptr && this->travelerList_ == nullptr && this->tripCause_ == nullptr && this->tripDay_ == nullptr && this->tripTitle_ == nullptr
        && this->type_ == nullptr && this->unionNo_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
      // applyShowId Field Functions 
      bool hasApplyShowId() const { return this->applyShowId_ != nullptr;};
      void deleteApplyShowId() { this->applyShowId_ = nullptr;};
      inline string getApplyShowId() const { DARABONBA_PTR_GET_DEFAULT(applyShowId_, "") };
      inline ModuleList& setApplyShowId(string applyShowId) { DARABONBA_PTR_SET_VALUE(applyShowId_, applyShowId) };


      // approverList Field Functions 
      bool hasApproverList() const { return this->approverList_ != nullptr;};
      void deleteApproverList() { this->approverList_ = nullptr;};
      inline const vector<ModuleList::ApproverList> & getApproverList() const { DARABONBA_PTR_GET_CONST(approverList_, vector<ModuleList::ApproverList>) };
      inline vector<ModuleList::ApproverList> getApproverList() { DARABONBA_PTR_GET(approverList_, vector<ModuleList::ApproverList>) };
      inline ModuleList& setApproverList(const vector<ModuleList::ApproverList> & approverList) { DARABONBA_PTR_SET_VALUE(approverList_, approverList) };
      inline ModuleList& setApproverList(vector<ModuleList::ApproverList> && approverList) { DARABONBA_PTR_SET_RVALUE(approverList_, approverList) };


      // carRule Field Functions 
      bool hasCarRule() const { return this->carRule_ != nullptr;};
      void deleteCarRule() { this->carRule_ = nullptr;};
      inline const ModuleList::CarRule & getCarRule() const { DARABONBA_PTR_GET_CONST(carRule_, ModuleList::CarRule) };
      inline ModuleList::CarRule getCarRule() { DARABONBA_PTR_GET(carRule_, ModuleList::CarRule) };
      inline ModuleList& setCarRule(const ModuleList::CarRule & carRule) { DARABONBA_PTR_SET_VALUE(carRule_, carRule) };
      inline ModuleList& setCarRule(ModuleList::CarRule && carRule) { DARABONBA_PTR_SET_RVALUE(carRule_, carRule) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline ModuleList& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // corpName Field Functions 
      bool hasCorpName() const { return this->corpName_ != nullptr;};
      void deleteCorpName() { this->corpName_ = nullptr;};
      inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
      inline ModuleList& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


      // departId Field Functions 
      bool hasDepartId() const { return this->departId_ != nullptr;};
      void deleteDepartId() { this->departId_ = nullptr;};
      inline string getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
      inline ModuleList& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


      // departName Field Functions 
      bool hasDepartName() const { return this->departName_ != nullptr;};
      void deleteDepartName() { this->departName_ = nullptr;};
      inline string getDepartName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
      inline ModuleList& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


      // externalTravelerList Field Functions 
      bool hasExternalTravelerList() const { return this->externalTravelerList_ != nullptr;};
      void deleteExternalTravelerList() { this->externalTravelerList_ = nullptr;};
      inline const vector<ModuleList::ExternalTravelerList> & getExternalTravelerList() const { DARABONBA_PTR_GET_CONST(externalTravelerList_, vector<ModuleList::ExternalTravelerList>) };
      inline vector<ModuleList::ExternalTravelerList> getExternalTravelerList() { DARABONBA_PTR_GET(externalTravelerList_, vector<ModuleList::ExternalTravelerList>) };
      inline ModuleList& setExternalTravelerList(const vector<ModuleList::ExternalTravelerList> & externalTravelerList) { DARABONBA_PTR_SET_VALUE(externalTravelerList_, externalTravelerList) };
      inline ModuleList& setExternalTravelerList(vector<ModuleList::ExternalTravelerList> && externalTravelerList) { DARABONBA_PTR_SET_RVALUE(externalTravelerList_, externalTravelerList) };


      // flowCode Field Functions 
      bool hasFlowCode() const { return this->flowCode_ != nullptr;};
      void deleteFlowCode() { this->flowCode_ = nullptr;};
      inline string getFlowCode() const { DARABONBA_PTR_GET_DEFAULT(flowCode_, "") };
      inline ModuleList& setFlowCode(string flowCode) { DARABONBA_PTR_SET_VALUE(flowCode_, flowCode) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline ModuleList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline ModuleList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ModuleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // itineraryList Field Functions 
      bool hasItineraryList() const { return this->itineraryList_ != nullptr;};
      void deleteItineraryList() { this->itineraryList_ = nullptr;};
      inline const vector<ModuleList::ItineraryList> & getItineraryList() const { DARABONBA_PTR_GET_CONST(itineraryList_, vector<ModuleList::ItineraryList>) };
      inline vector<ModuleList::ItineraryList> getItineraryList() { DARABONBA_PTR_GET(itineraryList_, vector<ModuleList::ItineraryList>) };
      inline ModuleList& setItineraryList(const vector<ModuleList::ItineraryList> & itineraryList) { DARABONBA_PTR_SET_VALUE(itineraryList_, itineraryList) };
      inline ModuleList& setItineraryList(vector<ModuleList::ItineraryList> && itineraryList) { DARABONBA_PTR_SET_RVALUE(itineraryList_, itineraryList) };


      // itineraryRule Field Functions 
      bool hasItineraryRule() const { return this->itineraryRule_ != nullptr;};
      void deleteItineraryRule() { this->itineraryRule_ = nullptr;};
      inline int32_t getItineraryRule() const { DARABONBA_PTR_GET_DEFAULT(itineraryRule_, 0) };
      inline ModuleList& setItineraryRule(int32_t itineraryRule) { DARABONBA_PTR_SET_VALUE(itineraryRule_, itineraryRule) };


      // itinerarySetList Field Functions 
      bool hasItinerarySetList() const { return this->itinerarySetList_ != nullptr;};
      void deleteItinerarySetList() { this->itinerarySetList_ = nullptr;};
      inline const vector<ModuleList::ItinerarySetList> & getItinerarySetList() const { DARABONBA_PTR_GET_CONST(itinerarySetList_, vector<ModuleList::ItinerarySetList>) };
      inline vector<ModuleList::ItinerarySetList> getItinerarySetList() { DARABONBA_PTR_GET(itinerarySetList_, vector<ModuleList::ItinerarySetList>) };
      inline ModuleList& setItinerarySetList(const vector<ModuleList::ItinerarySetList> & itinerarySetList) { DARABONBA_PTR_SET_VALUE(itinerarySetList_, itinerarySetList) };
      inline ModuleList& setItinerarySetList(vector<ModuleList::ItinerarySetList> && itinerarySetList) { DARABONBA_PTR_SET_RVALUE(itinerarySetList_, itinerarySetList) };


      // jobNo Field Functions 
      bool hasJobNo() const { return this->jobNo_ != nullptr;};
      void deleteJobNo() { this->jobNo_ = nullptr;};
      inline string getJobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
      inline ModuleList& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


      // paymentDepartmentId Field Functions 
      bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
      void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
      inline string getPaymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
      inline ModuleList& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


      // paymentDepartmentName Field Functions 
      bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
      void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
      inline string getPaymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
      inline ModuleList& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline ModuleList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline ModuleList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      // thirdpartBusinessId Field Functions 
      bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
      void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
      inline string getThirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
      inline ModuleList& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


      // thirdpartId Field Functions 
      bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
      void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
      inline string getThirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
      inline ModuleList& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


      // travelerList Field Functions 
      bool hasTravelerList() const { return this->travelerList_ != nullptr;};
      void deleteTravelerList() { this->travelerList_ = nullptr;};
      inline const vector<ModuleList::TravelerList> & getTravelerList() const { DARABONBA_PTR_GET_CONST(travelerList_, vector<ModuleList::TravelerList>) };
      inline vector<ModuleList::TravelerList> getTravelerList() { DARABONBA_PTR_GET(travelerList_, vector<ModuleList::TravelerList>) };
      inline ModuleList& setTravelerList(const vector<ModuleList::TravelerList> & travelerList) { DARABONBA_PTR_SET_VALUE(travelerList_, travelerList) };
      inline ModuleList& setTravelerList(vector<ModuleList::TravelerList> && travelerList) { DARABONBA_PTR_SET_RVALUE(travelerList_, travelerList) };


      // tripCause Field Functions 
      bool hasTripCause() const { return this->tripCause_ != nullptr;};
      void deleteTripCause() { this->tripCause_ = nullptr;};
      inline string getTripCause() const { DARABONBA_PTR_GET_DEFAULT(tripCause_, "") };
      inline ModuleList& setTripCause(string tripCause) { DARABONBA_PTR_SET_VALUE(tripCause_, tripCause) };


      // tripDay Field Functions 
      bool hasTripDay() const { return this->tripDay_ != nullptr;};
      void deleteTripDay() { this->tripDay_ = nullptr;};
      inline int32_t getTripDay() const { DARABONBA_PTR_GET_DEFAULT(tripDay_, 0) };
      inline ModuleList& setTripDay(int32_t tripDay) { DARABONBA_PTR_SET_VALUE(tripDay_, tripDay) };


      // tripTitle Field Functions 
      bool hasTripTitle() const { return this->tripTitle_ != nullptr;};
      void deleteTripTitle() { this->tripTitle_ = nullptr;};
      inline string getTripTitle() const { DARABONBA_PTR_GET_DEFAULT(tripTitle_, "") };
      inline ModuleList& setTripTitle(string tripTitle) { DARABONBA_PTR_SET_VALUE(tripTitle_, tripTitle) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline ModuleList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // unionNo Field Functions 
      bool hasUnionNo() const { return this->unionNo_ != nullptr;};
      void deleteUnionNo() { this->unionNo_ = nullptr;};
      inline string getUnionNo() const { DARABONBA_PTR_GET_DEFAULT(unionNo_, "") };
      inline ModuleList& setUnionNo(string unionNo) { DARABONBA_PTR_SET_VALUE(unionNo_, unionNo) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ModuleList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline ModuleList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<string> applyShowId_ {};
      shared_ptr<vector<ModuleList::ApproverList>> approverList_ {};
      shared_ptr<ModuleList::CarRule> carRule_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<string> corpName_ {};
      shared_ptr<string> departId_ {};
      shared_ptr<string> departName_ {};
      shared_ptr<vector<ModuleList::ExternalTravelerList>> externalTravelerList_ {};
      shared_ptr<string> flowCode_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<vector<ModuleList::ItineraryList>> itineraryList_ {};
      shared_ptr<int32_t> itineraryRule_ {};
      shared_ptr<vector<ModuleList::ItinerarySetList>> itinerarySetList_ {};
      shared_ptr<string> jobNo_ {};
      shared_ptr<string> paymentDepartmentId_ {};
      shared_ptr<string> paymentDepartmentName_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> statusDesc_ {};
      shared_ptr<string> thirdpartBusinessId_ {};
      shared_ptr<string> thirdpartId_ {};
      shared_ptr<vector<ModuleList::TravelerList>> travelerList_ {};
      shared_ptr<string> tripCause_ {};
      shared_ptr<int32_t> tripDay_ {};
      shared_ptr<string> tripTitle_ {};
      shared_ptr<int32_t> type_ {};
      shared_ptr<string> unionNo_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->moduleList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ApplyListQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ApplyListQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // moduleList Field Functions 
    bool hasModuleList() const { return this->moduleList_ != nullptr;};
    void deleteModuleList() { this->moduleList_ = nullptr;};
    inline const vector<ApplyListQueryResponseBody::ModuleList> & getModuleList() const { DARABONBA_PTR_GET_CONST(moduleList_, vector<ApplyListQueryResponseBody::ModuleList>) };
    inline vector<ApplyListQueryResponseBody::ModuleList> getModuleList() { DARABONBA_PTR_GET(moduleList_, vector<ApplyListQueryResponseBody::ModuleList>) };
    inline ApplyListQueryResponseBody& setModuleList(const vector<ApplyListQueryResponseBody::ModuleList> & moduleList) { DARABONBA_PTR_SET_VALUE(moduleList_, moduleList) };
    inline ApplyListQueryResponseBody& setModuleList(vector<ApplyListQueryResponseBody::ModuleList> && moduleList) { DARABONBA_PTR_SET_RVALUE(moduleList_, moduleList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApplyListQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ApplyListQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ApplyListQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<ApplyListQueryResponseBody::ModuleList>> moduleList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
