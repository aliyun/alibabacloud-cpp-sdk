// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARAPPLYQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CARAPPLYQUERYRESPONSEBODY_HPP_
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
  class CarApplyQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(apply_list, applyList_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(total, total_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CarApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_list, applyList_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(total, total_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    CarApplyQueryResponseBody() = default ;
    CarApplyQueryResponseBody(const CarApplyQueryResponseBody &) = default ;
    CarApplyQueryResponseBody(CarApplyQueryResponseBody &&) = default ;
    CarApplyQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarApplyQueryResponseBody() = default ;
    CarApplyQueryResponseBody& operator=(const CarApplyQueryResponseBody &) = default ;
    CarApplyQueryResponseBody& operator=(CarApplyQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplyList& obj) { 
        DARABONBA_PTR_TO_JSON(approver_list, approverList_);
        DARABONBA_PTR_TO_JSON(business_type, businessType_);
        DARABONBA_PTR_TO_JSON(depart_id, departId_);
        DARABONBA_PTR_TO_JSON(depart_name, departName_);
        DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_TO_JSON(itinerary_list, itineraryList_);
        DARABONBA_PTR_TO_JSON(order_id, orderId_);
        DARABONBA_PTR_TO_JSON(related_third_apply_id, relatedThirdApplyId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
        DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
        DARABONBA_PTR_TO_JSON(traveler_standard, travelerStandard_);
        DARABONBA_PTR_TO_JSON(trip_cause, tripCause_);
        DARABONBA_PTR_TO_JSON(trip_title, tripTitle_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
        DARABONBA_PTR_TO_JSON(user_name, userName_);
      };
      friend void from_json(const Darabonba::Json& j, ApplyList& obj) { 
        DARABONBA_PTR_FROM_JSON(approver_list, approverList_);
        DARABONBA_PTR_FROM_JSON(business_type, businessType_);
        DARABONBA_PTR_FROM_JSON(depart_id, departId_);
        DARABONBA_PTR_FROM_JSON(depart_name, departName_);
        DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(itinerary_list, itineraryList_);
        DARABONBA_PTR_FROM_JSON(order_id, orderId_);
        DARABONBA_PTR_FROM_JSON(related_third_apply_id, relatedThirdApplyId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
        DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
        DARABONBA_PTR_FROM_JSON(traveler_standard, travelerStandard_);
        DARABONBA_PTR_FROM_JSON(trip_cause, tripCause_);
        DARABONBA_PTR_FROM_JSON(trip_title, tripTitle_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
        DARABONBA_PTR_FROM_JSON(user_name, userName_);
      };
      ApplyList() = default ;
      ApplyList(const ApplyList &) = default ;
      ApplyList(ApplyList &&) = default ;
      ApplyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplyList() = default ;
      ApplyList& operator=(const ApplyList &) = default ;
      ApplyList& operator=(ApplyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TravelerStandard : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TravelerStandard& obj) { 
          DARABONBA_PTR_TO_JSON(car_city_set, carCitySet_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
        };
        friend void from_json(const Darabonba::Json& j, TravelerStandard& obj) { 
          DARABONBA_PTR_FROM_JSON(car_city_set, carCitySet_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
        };
        TravelerStandard() = default ;
        TravelerStandard(const TravelerStandard &) = default ;
        TravelerStandard(TravelerStandard &&) = default ;
        TravelerStandard(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TravelerStandard() = default ;
        TravelerStandard& operator=(const TravelerStandard &) = default ;
        TravelerStandard& operator=(TravelerStandard &&) = default ;
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

        virtual bool empty() const override { return this->carCitySet_ == nullptr
        && this->userId_ == nullptr; };
        // carCitySet Field Functions 
        bool hasCarCitySet() const { return this->carCitySet_ != nullptr;};
        void deleteCarCitySet() { this->carCitySet_ = nullptr;};
        inline const vector<TravelerStandard::CarCitySet> & getCarCitySet() const { DARABONBA_PTR_GET_CONST(carCitySet_, vector<TravelerStandard::CarCitySet>) };
        inline vector<TravelerStandard::CarCitySet> getCarCitySet() { DARABONBA_PTR_GET(carCitySet_, vector<TravelerStandard::CarCitySet>) };
        inline TravelerStandard& setCarCitySet(const vector<TravelerStandard::CarCitySet> & carCitySet) { DARABONBA_PTR_SET_VALUE(carCitySet_, carCitySet) };
        inline TravelerStandard& setCarCitySet(vector<TravelerStandard::CarCitySet> && carCitySet) { DARABONBA_PTR_SET_RVALUE(carCitySet_, carCitySet) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline TravelerStandard& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<vector<TravelerStandard::CarCitySet>> carCitySet_ {};
        shared_ptr<string> userId_ {};
      };

      class ItineraryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItineraryList& obj) { 
          DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
          DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(dep_city, depCity_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_date, depDate_);
          DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
          DARABONBA_PTR_TO_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
          DARABONBA_PTR_TO_JSON(traffic_type, trafficType_);
        };
        friend void from_json(const Darabonba::Json& j, ItineraryList& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
          DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
          DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
          DARABONBA_PTR_FROM_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
          DARABONBA_PTR_FROM_JSON(traffic_type, trafficType_);
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
        && this->arrCityCode_ == nullptr && this->arrDate_ == nullptr && this->costCenterId_ == nullptr && this->costCenterName_ == nullptr && this->depCity_ == nullptr
        && this->depCityCode_ == nullptr && this->depDate_ == nullptr && this->invoiceId_ == nullptr && this->invoiceName_ == nullptr && this->itineraryId_ == nullptr
        && this->projectCode_ == nullptr && this->projectTitle_ == nullptr && this->trafficType_ == nullptr; };
        // arrCity Field Functions 
        bool hasArrCity() const { return this->arrCity_ != nullptr;};
        void deleteArrCity() { this->arrCity_ = nullptr;};
        inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
        inline ItineraryList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline ItineraryList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrDate Field Functions 
        bool hasArrDate() const { return this->arrDate_ != nullptr;};
        void deleteArrDate() { this->arrDate_ = nullptr;};
        inline string getArrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
        inline ItineraryList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


        // costCenterId Field Functions 
        bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
        void deleteCostCenterId() { this->costCenterId_ = nullptr;};
        inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
        inline ItineraryList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


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


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline ItineraryList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depDate Field Functions 
        bool hasDepDate() const { return this->depDate_ != nullptr;};
        void deleteDepDate() { this->depDate_ = nullptr;};
        inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
        inline ItineraryList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


        // invoiceId Field Functions 
        bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
        void deleteInvoiceId() { this->invoiceId_ = nullptr;};
        inline int64_t getInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
        inline ItineraryList& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


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


        // trafficType Field Functions 
        bool hasTrafficType() const { return this->trafficType_ != nullptr;};
        void deleteTrafficType() { this->trafficType_ = nullptr;};
        inline int32_t getTrafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, 0) };
        inline ItineraryList& setTrafficType(int32_t trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


      protected:
        shared_ptr<string> arrCity_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrDate_ {};
        shared_ptr<int64_t> costCenterId_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> depCity_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depDate_ {};
        shared_ptr<int64_t> invoiceId_ {};
        shared_ptr<string> invoiceName_ {};
        shared_ptr<string> itineraryId_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectTitle_ {};
        shared_ptr<int32_t> trafficType_ {};
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

      virtual bool empty() const override { return this->approverList_ == nullptr
        && this->businessType_ == nullptr && this->departId_ == nullptr && this->departName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->itineraryList_ == nullptr && this->orderId_ == nullptr && this->relatedThirdApplyId_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr
        && this->thirdpartId_ == nullptr && this->travelerStandard_ == nullptr && this->tripCause_ == nullptr && this->tripTitle_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr; };
      // approverList Field Functions 
      bool hasApproverList() const { return this->approverList_ != nullptr;};
      void deleteApproverList() { this->approverList_ = nullptr;};
      inline const vector<ApplyList::ApproverList> & getApproverList() const { DARABONBA_PTR_GET_CONST(approverList_, vector<ApplyList::ApproverList>) };
      inline vector<ApplyList::ApproverList> getApproverList() { DARABONBA_PTR_GET(approverList_, vector<ApplyList::ApproverList>) };
      inline ApplyList& setApproverList(const vector<ApplyList::ApproverList> & approverList) { DARABONBA_PTR_SET_VALUE(approverList_, approverList) };
      inline ApplyList& setApproverList(vector<ApplyList::ApproverList> && approverList) { DARABONBA_PTR_SET_RVALUE(approverList_, approverList) };


      // businessType Field Functions 
      bool hasBusinessType() const { return this->businessType_ != nullptr;};
      void deleteBusinessType() { this->businessType_ = nullptr;};
      inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
      inline ApplyList& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


      // departId Field Functions 
      bool hasDepartId() const { return this->departId_ != nullptr;};
      void deleteDepartId() { this->departId_ = nullptr;};
      inline string getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
      inline ApplyList& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


      // departName Field Functions 
      bool hasDepartName() const { return this->departName_ != nullptr;};
      void deleteDepartName() { this->departName_ = nullptr;};
      inline string getDepartName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
      inline ApplyList& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline ApplyList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline ApplyList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // itineraryList Field Functions 
      bool hasItineraryList() const { return this->itineraryList_ != nullptr;};
      void deleteItineraryList() { this->itineraryList_ = nullptr;};
      inline const vector<ApplyList::ItineraryList> & getItineraryList() const { DARABONBA_PTR_GET_CONST(itineraryList_, vector<ApplyList::ItineraryList>) };
      inline vector<ApplyList::ItineraryList> getItineraryList() { DARABONBA_PTR_GET(itineraryList_, vector<ApplyList::ItineraryList>) };
      inline ApplyList& setItineraryList(const vector<ApplyList::ItineraryList> & itineraryList) { DARABONBA_PTR_SET_VALUE(itineraryList_, itineraryList) };
      inline ApplyList& setItineraryList(vector<ApplyList::ItineraryList> && itineraryList) { DARABONBA_PTR_SET_RVALUE(itineraryList_, itineraryList) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline ApplyList& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // relatedThirdApplyId Field Functions 
      bool hasRelatedThirdApplyId() const { return this->relatedThirdApplyId_ != nullptr;};
      void deleteRelatedThirdApplyId() { this->relatedThirdApplyId_ = nullptr;};
      inline string getRelatedThirdApplyId() const { DARABONBA_PTR_GET_DEFAULT(relatedThirdApplyId_, "") };
      inline ApplyList& setRelatedThirdApplyId(string relatedThirdApplyId) { DARABONBA_PTR_SET_VALUE(relatedThirdApplyId_, relatedThirdApplyId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline ApplyList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline ApplyList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      // thirdpartId Field Functions 
      bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
      void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
      inline string getThirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
      inline ApplyList& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


      // travelerStandard Field Functions 
      bool hasTravelerStandard() const { return this->travelerStandard_ != nullptr;};
      void deleteTravelerStandard() { this->travelerStandard_ = nullptr;};
      inline const vector<ApplyList::TravelerStandard> & getTravelerStandard() const { DARABONBA_PTR_GET_CONST(travelerStandard_, vector<ApplyList::TravelerStandard>) };
      inline vector<ApplyList::TravelerStandard> getTravelerStandard() { DARABONBA_PTR_GET(travelerStandard_, vector<ApplyList::TravelerStandard>) };
      inline ApplyList& setTravelerStandard(const vector<ApplyList::TravelerStandard> & travelerStandard) { DARABONBA_PTR_SET_VALUE(travelerStandard_, travelerStandard) };
      inline ApplyList& setTravelerStandard(vector<ApplyList::TravelerStandard> && travelerStandard) { DARABONBA_PTR_SET_RVALUE(travelerStandard_, travelerStandard) };


      // tripCause Field Functions 
      bool hasTripCause() const { return this->tripCause_ != nullptr;};
      void deleteTripCause() { this->tripCause_ = nullptr;};
      inline string getTripCause() const { DARABONBA_PTR_GET_DEFAULT(tripCause_, "") };
      inline ApplyList& setTripCause(string tripCause) { DARABONBA_PTR_SET_VALUE(tripCause_, tripCause) };


      // tripTitle Field Functions 
      bool hasTripTitle() const { return this->tripTitle_ != nullptr;};
      void deleteTripTitle() { this->tripTitle_ = nullptr;};
      inline string getTripTitle() const { DARABONBA_PTR_GET_DEFAULT(tripTitle_, "") };
      inline ApplyList& setTripTitle(string tripTitle) { DARABONBA_PTR_SET_VALUE(tripTitle_, tripTitle) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ApplyList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline ApplyList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<vector<ApplyList::ApproverList>> approverList_ {};
      shared_ptr<string> businessType_ {};
      shared_ptr<string> departId_ {};
      shared_ptr<string> departName_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<vector<ApplyList::ItineraryList>> itineraryList_ {};
      shared_ptr<int64_t> orderId_ {};
      shared_ptr<string> relatedThirdApplyId_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> statusDesc_ {};
      shared_ptr<string> thirdpartId_ {};
      shared_ptr<vector<ApplyList::TravelerStandard>> travelerStandard_ {};
      shared_ptr<string> tripCause_ {};
      shared_ptr<string> tripTitle_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->applyList_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr
        && this->traceId_ == nullptr; };
    // applyList Field Functions 
    bool hasApplyList() const { return this->applyList_ != nullptr;};
    void deleteApplyList() { this->applyList_ = nullptr;};
    inline const vector<CarApplyQueryResponseBody::ApplyList> & getApplyList() const { DARABONBA_PTR_GET_CONST(applyList_, vector<CarApplyQueryResponseBody::ApplyList>) };
    inline vector<CarApplyQueryResponseBody::ApplyList> getApplyList() { DARABONBA_PTR_GET(applyList_, vector<CarApplyQueryResponseBody::ApplyList>) };
    inline CarApplyQueryResponseBody& setApplyList(const vector<CarApplyQueryResponseBody::ApplyList> & applyList) { DARABONBA_PTR_SET_VALUE(applyList_, applyList) };
    inline CarApplyQueryResponseBody& setApplyList(vector<CarApplyQueryResponseBody::ApplyList> && applyList) { DARABONBA_PTR_SET_RVALUE(applyList_, applyList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CarApplyQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CarApplyQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CarApplyQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CarApplyQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline CarApplyQueryResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CarApplyQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<vector<CarApplyQueryResponseBody::ApplyList>> applyList_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
