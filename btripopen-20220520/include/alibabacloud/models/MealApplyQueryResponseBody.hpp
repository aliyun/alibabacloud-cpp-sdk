// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALAPPLYQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MEALAPPLYQUERYRESPONSEBODY_HPP_
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
  class MealApplyQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, MealApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    MealApplyQueryResponseBody() = default ;
    MealApplyQueryResponseBody(const MealApplyQueryResponseBody &) = default ;
    MealApplyQueryResponseBody(MealApplyQueryResponseBody &&) = default ;
    MealApplyQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealApplyQueryResponseBody() = default ;
    MealApplyQueryResponseBody& operator=(const MealApplyQueryResponseBody &) = default ;
    MealApplyQueryResponseBody& operator=(MealApplyQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(apply_user, applyUser_);
        DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
        DARABONBA_PTR_TO_JSON(extend_field, extendField_);
        DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
        DARABONBA_PTR_TO_JSON(itinerary_list, itineraryList_);
        DARABONBA_PTR_TO_JSON(meal_amount, mealAmount_);
        DARABONBA_PTR_TO_JSON(meal_cause, mealCause_);
        DARABONBA_PTR_TO_JSON(project_id, projectId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(third_part_apply_id, thirdPartApplyId_);
        DARABONBA_PTR_TO_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
        DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
        DARABONBA_PTR_TO_JSON(third_part_project_id, thirdPartProjectId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_user, applyUser_);
        DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
        DARABONBA_PTR_FROM_JSON(extend_field, extendField_);
        DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
        DARABONBA_PTR_FROM_JSON(itinerary_list, itineraryList_);
        DARABONBA_PTR_FROM_JSON(meal_amount, mealAmount_);
        DARABONBA_PTR_FROM_JSON(meal_cause, mealCause_);
        DARABONBA_PTR_FROM_JSON(project_id, projectId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(third_part_apply_id, thirdPartApplyId_);
        DARABONBA_PTR_FROM_JSON(third_part_cost_center_id, thirdPartCostCenterId_);
        DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
        DARABONBA_PTR_FROM_JSON(third_part_project_id, thirdPartProjectId_);
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
      class ItineraryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItineraryList& obj) { 
          DARABONBA_PTR_TO_JSON(cities, cities_);
          DARABONBA_PTR_TO_JSON(end_date, endDate_);
          DARABONBA_PTR_TO_JSON(start_date, startDate_);
          DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
        };
        friend void from_json(const Darabonba::Json& j, ItineraryList& obj) { 
          DARABONBA_PTR_FROM_JSON(cities, cities_);
          DARABONBA_PTR_FROM_JSON(end_date, endDate_);
          DARABONBA_PTR_FROM_JSON(start_date, startDate_);
          DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
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
        class Cities : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Cities& obj) { 
            DARABONBA_PTR_TO_JSON(city_code, cityCode_);
            DARABONBA_PTR_TO_JSON(city_name, cityName_);
          };
          friend void from_json(const Darabonba::Json& j, Cities& obj) { 
            DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
            DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          };
          Cities() = default ;
          Cities(const Cities &) = default ;
          Cities(Cities &&) = default ;
          Cities(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Cities() = default ;
          Cities& operator=(const Cities &) = default ;
          Cities& operator=(Cities &&) = default ;
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
          inline Cities& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


          // cityName Field Functions 
          bool hasCityName() const { return this->cityName_ != nullptr;};
          void deleteCityName() { this->cityName_ = nullptr;};
          inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
          inline Cities& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        protected:
          shared_ptr<string> cityCode_ {};
          shared_ptr<string> cityName_ {};
        };

        virtual bool empty() const override { return this->cities_ == nullptr
        && this->endDate_ == nullptr && this->startDate_ == nullptr && this->thirdpartItineraryId_ == nullptr; };
        // cities Field Functions 
        bool hasCities() const { return this->cities_ != nullptr;};
        void deleteCities() { this->cities_ = nullptr;};
        inline const vector<ItineraryList::Cities> & getCities() const { DARABONBA_PTR_GET_CONST(cities_, vector<ItineraryList::Cities>) };
        inline vector<ItineraryList::Cities> getCities() { DARABONBA_PTR_GET(cities_, vector<ItineraryList::Cities>) };
        inline ItineraryList& setCities(const vector<ItineraryList::Cities> & cities) { DARABONBA_PTR_SET_VALUE(cities_, cities) };
        inline ItineraryList& setCities(vector<ItineraryList::Cities> && cities) { DARABONBA_PTR_SET_RVALUE(cities_, cities) };


        // endDate Field Functions 
        bool hasEndDate() const { return this->endDate_ != nullptr;};
        void deleteEndDate() { this->endDate_ = nullptr;};
        inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
        inline ItineraryList& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


        // startDate Field Functions 
        bool hasStartDate() const { return this->startDate_ != nullptr;};
        void deleteStartDate() { this->startDate_ = nullptr;};
        inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
        inline ItineraryList& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


        // thirdpartItineraryId Field Functions 
        bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
        void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
        inline string getThirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
        inline ItineraryList& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


      protected:
        shared_ptr<vector<ItineraryList::Cities>> cities_ {};
        shared_ptr<string> endDate_ {};
        shared_ptr<string> startDate_ {};
        shared_ptr<string> thirdpartItineraryId_ {};
      };

      class ApplyUser : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplyUser& obj) { 
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
        };
        friend void from_json(const Darabonba::Json& j, ApplyUser& obj) { 
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
          DARABONBA_PTR_FROM_JSON(user_name, userName_);
        };
        ApplyUser() = default ;
        ApplyUser(const ApplyUser &) = default ;
        ApplyUser(ApplyUser &&) = default ;
        ApplyUser(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplyUser() = default ;
        ApplyUser& operator=(const ApplyUser &) = default ;
        ApplyUser& operator=(ApplyUser &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userId_ == nullptr
        && this->userName_ == nullptr; };
        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline ApplyUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline ApplyUser& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->applyUser_ == nullptr
        && this->costCenterId_ == nullptr && this->extendField_ == nullptr && this->gmtCreate_ == nullptr && this->invoiceId_ == nullptr && this->itineraryList_ == nullptr
        && this->mealAmount_ == nullptr && this->mealCause_ == nullptr && this->projectId_ == nullptr && this->status_ == nullptr && this->thirdPartApplyId_ == nullptr
        && this->thirdPartCostCenterId_ == nullptr && this->thirdPartInvoiceId_ == nullptr && this->thirdPartProjectId_ == nullptr; };
      // applyUser Field Functions 
      bool hasApplyUser() const { return this->applyUser_ != nullptr;};
      void deleteApplyUser() { this->applyUser_ = nullptr;};
      inline const Module::ApplyUser & getApplyUser() const { DARABONBA_PTR_GET_CONST(applyUser_, Module::ApplyUser) };
      inline Module::ApplyUser getApplyUser() { DARABONBA_PTR_GET(applyUser_, Module::ApplyUser) };
      inline Module& setApplyUser(const Module::ApplyUser & applyUser) { DARABONBA_PTR_SET_VALUE(applyUser_, applyUser) };
      inline Module& setApplyUser(Module::ApplyUser && applyUser) { DARABONBA_PTR_SET_RVALUE(applyUser_, applyUser) };


      // costCenterId Field Functions 
      bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
      void deleteCostCenterId() { this->costCenterId_ = nullptr;};
      inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
      inline Module& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


      // extendField Field Functions 
      bool hasExtendField() const { return this->extendField_ != nullptr;};
      void deleteExtendField() { this->extendField_ = nullptr;};
      inline string getExtendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
      inline Module& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Module& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // invoiceId Field Functions 
      bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
      void deleteInvoiceId() { this->invoiceId_ = nullptr;};
      inline int64_t getInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
      inline Module& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


      // itineraryList Field Functions 
      bool hasItineraryList() const { return this->itineraryList_ != nullptr;};
      void deleteItineraryList() { this->itineraryList_ = nullptr;};
      inline const vector<Module::ItineraryList> & getItineraryList() const { DARABONBA_PTR_GET_CONST(itineraryList_, vector<Module::ItineraryList>) };
      inline vector<Module::ItineraryList> getItineraryList() { DARABONBA_PTR_GET(itineraryList_, vector<Module::ItineraryList>) };
      inline Module& setItineraryList(const vector<Module::ItineraryList> & itineraryList) { DARABONBA_PTR_SET_VALUE(itineraryList_, itineraryList) };
      inline Module& setItineraryList(vector<Module::ItineraryList> && itineraryList) { DARABONBA_PTR_SET_RVALUE(itineraryList_, itineraryList) };


      // mealAmount Field Functions 
      bool hasMealAmount() const { return this->mealAmount_ != nullptr;};
      void deleteMealAmount() { this->mealAmount_ = nullptr;};
      inline int64_t getMealAmount() const { DARABONBA_PTR_GET_DEFAULT(mealAmount_, 0L) };
      inline Module& setMealAmount(int64_t mealAmount) { DARABONBA_PTR_SET_VALUE(mealAmount_, mealAmount) };


      // mealCause Field Functions 
      bool hasMealCause() const { return this->mealCause_ != nullptr;};
      void deleteMealCause() { this->mealCause_ = nullptr;};
      inline string getMealCause() const { DARABONBA_PTR_GET_DEFAULT(mealCause_, "") };
      inline Module& setMealCause(string mealCause) { DARABONBA_PTR_SET_VALUE(mealCause_, mealCause) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Module& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // thirdPartApplyId Field Functions 
      bool hasThirdPartApplyId() const { return this->thirdPartApplyId_ != nullptr;};
      void deleteThirdPartApplyId() { this->thirdPartApplyId_ = nullptr;};
      inline string getThirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyId_, "") };
      inline Module& setThirdPartApplyId(string thirdPartApplyId) { DARABONBA_PTR_SET_VALUE(thirdPartApplyId_, thirdPartApplyId) };


      // thirdPartCostCenterId Field Functions 
      bool hasThirdPartCostCenterId() const { return this->thirdPartCostCenterId_ != nullptr;};
      void deleteThirdPartCostCenterId() { this->thirdPartCostCenterId_ = nullptr;};
      inline string getThirdPartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartCostCenterId_, "") };
      inline Module& setThirdPartCostCenterId(string thirdPartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdPartCostCenterId_, thirdPartCostCenterId) };


      // thirdPartInvoiceId Field Functions 
      bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
      void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
      inline string getThirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
      inline Module& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


      // thirdPartProjectId Field Functions 
      bool hasThirdPartProjectId() const { return this->thirdPartProjectId_ != nullptr;};
      void deleteThirdPartProjectId() { this->thirdPartProjectId_ = nullptr;};
      inline string getThirdPartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartProjectId_, "") };
      inline Module& setThirdPartProjectId(string thirdPartProjectId) { DARABONBA_PTR_SET_VALUE(thirdPartProjectId_, thirdPartProjectId) };


    protected:
      shared_ptr<Module::ApplyUser> applyUser_ {};
      shared_ptr<int64_t> costCenterId_ {};
      shared_ptr<string> extendField_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<int64_t> invoiceId_ {};
      shared_ptr<vector<Module::ItineraryList>> itineraryList_ {};
      shared_ptr<int64_t> mealAmount_ {};
      shared_ptr<string> mealCause_ {};
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> thirdPartApplyId_ {};
      shared_ptr<string> thirdPartCostCenterId_ {};
      shared_ptr<string> thirdPartInvoiceId_ {};
      shared_ptr<string> thirdPartProjectId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MealApplyQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MealApplyQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const MealApplyQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, MealApplyQueryResponseBody::Module) };
    inline MealApplyQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, MealApplyQueryResponseBody::Module) };
    inline MealApplyQueryResponseBody& setModule(const MealApplyQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline MealApplyQueryResponseBody& setModule(MealApplyQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MealApplyQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MealApplyQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline MealApplyQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<MealApplyQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
