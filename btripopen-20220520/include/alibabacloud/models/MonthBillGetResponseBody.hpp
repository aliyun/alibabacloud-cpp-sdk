// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONTHBILLGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MONTHBILLGETRESPONSEBODY_HPP_
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
  class MonthBillGetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonthBillGetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, MonthBillGetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    MonthBillGetResponseBody() = default ;
    MonthBillGetResponseBody(const MonthBillGetResponseBody &) = default ;
    MonthBillGetResponseBody(MonthBillGetResponseBody &&) = default ;
    MonthBillGetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonthBillGetResponseBody() = default ;
    MonthBillGetResponseBody& operator=(const MonthBillGetResponseBody &) = default ;
    MonthBillGetResponseBody& operator=(MonthBillGetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(end_date, endDate_);
        DARABONBA_PTR_TO_JSON(monthAccountBillDetail, monthAccountBillDetail_);
        DARABONBA_PTR_TO_JSON(start_date, startDate_);
        DARABONBA_PTR_TO_JSON(url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(end_date, endDate_);
        DARABONBA_PTR_FROM_JSON(monthAccountBillDetail, monthAccountBillDetail_);
        DARABONBA_PTR_FROM_JSON(start_date, startDate_);
        DARABONBA_PTR_FROM_JSON(url, url_);
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
      class MonthAccountBillDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MonthAccountBillDetail& obj) { 
          DARABONBA_PTR_TO_JSON(billConfirmed, billConfirmed_);
          DARABONBA_PTR_TO_JSON(carAmount, carAmount_);
          DARABONBA_PTR_TO_JSON(damageAmount, damageAmount_);
          DARABONBA_PTR_TO_JSON(flightAmount, flightAmount_);
          DARABONBA_PTR_TO_JSON(fuPoint, fuPoint_);
          DARABONBA_PTR_TO_JSON(hotelAmount, hotelAmount_);
          DARABONBA_PTR_TO_JSON(ieFlightAmount, ieFlightAmount_);
          DARABONBA_PTR_TO_JSON(ieHotelAmount, ieHotelAmount_);
          DARABONBA_PTR_TO_JSON(mailBillDate, mailBillDate_);
          DARABONBA_PTR_TO_JSON(mealAmount, mealAmount_);
          DARABONBA_PTR_TO_JSON(metroAmount, metroAmount_);
          DARABONBA_PTR_TO_JSON(serviceAmount, serviceAmount_);
          DARABONBA_PTR_TO_JSON(trainAmount, trainAmount_);
          DARABONBA_PTR_TO_JSON(vasAmount, vasAmount_);
        };
        friend void from_json(const Darabonba::Json& j, MonthAccountBillDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(billConfirmed, billConfirmed_);
          DARABONBA_PTR_FROM_JSON(carAmount, carAmount_);
          DARABONBA_PTR_FROM_JSON(damageAmount, damageAmount_);
          DARABONBA_PTR_FROM_JSON(flightAmount, flightAmount_);
          DARABONBA_PTR_FROM_JSON(fuPoint, fuPoint_);
          DARABONBA_PTR_FROM_JSON(hotelAmount, hotelAmount_);
          DARABONBA_PTR_FROM_JSON(ieFlightAmount, ieFlightAmount_);
          DARABONBA_PTR_FROM_JSON(ieHotelAmount, ieHotelAmount_);
          DARABONBA_PTR_FROM_JSON(mailBillDate, mailBillDate_);
          DARABONBA_PTR_FROM_JSON(mealAmount, mealAmount_);
          DARABONBA_PTR_FROM_JSON(metroAmount, metroAmount_);
          DARABONBA_PTR_FROM_JSON(serviceAmount, serviceAmount_);
          DARABONBA_PTR_FROM_JSON(trainAmount, trainAmount_);
          DARABONBA_PTR_FROM_JSON(vasAmount, vasAmount_);
        };
        MonthAccountBillDetail() = default ;
        MonthAccountBillDetail(const MonthAccountBillDetail &) = default ;
        MonthAccountBillDetail(MonthAccountBillDetail &&) = default ;
        MonthAccountBillDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MonthAccountBillDetail() = default ;
        MonthAccountBillDetail& operator=(const MonthAccountBillDetail &) = default ;
        MonthAccountBillDetail& operator=(MonthAccountBillDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->billConfirmed_ == nullptr
        && this->carAmount_ == nullptr && this->damageAmount_ == nullptr && this->flightAmount_ == nullptr && this->fuPoint_ == nullptr && this->hotelAmount_ == nullptr
        && this->ieFlightAmount_ == nullptr && this->ieHotelAmount_ == nullptr && this->mailBillDate_ == nullptr && this->mealAmount_ == nullptr && this->metroAmount_ == nullptr
        && this->serviceAmount_ == nullptr && this->trainAmount_ == nullptr && this->vasAmount_ == nullptr; };
        // billConfirmed Field Functions 
        bool hasBillConfirmed() const { return this->billConfirmed_ != nullptr;};
        void deleteBillConfirmed() { this->billConfirmed_ = nullptr;};
        inline int32_t getBillConfirmed() const { DARABONBA_PTR_GET_DEFAULT(billConfirmed_, 0) };
        inline MonthAccountBillDetail& setBillConfirmed(int32_t billConfirmed) { DARABONBA_PTR_SET_VALUE(billConfirmed_, billConfirmed) };


        // carAmount Field Functions 
        bool hasCarAmount() const { return this->carAmount_ != nullptr;};
        void deleteCarAmount() { this->carAmount_ = nullptr;};
        inline double getCarAmount() const { DARABONBA_PTR_GET_DEFAULT(carAmount_, 0.0) };
        inline MonthAccountBillDetail& setCarAmount(double carAmount) { DARABONBA_PTR_SET_VALUE(carAmount_, carAmount) };


        // damageAmount Field Functions 
        bool hasDamageAmount() const { return this->damageAmount_ != nullptr;};
        void deleteDamageAmount() { this->damageAmount_ = nullptr;};
        inline double getDamageAmount() const { DARABONBA_PTR_GET_DEFAULT(damageAmount_, 0.0) };
        inline MonthAccountBillDetail& setDamageAmount(double damageAmount) { DARABONBA_PTR_SET_VALUE(damageAmount_, damageAmount) };


        // flightAmount Field Functions 
        bool hasFlightAmount() const { return this->flightAmount_ != nullptr;};
        void deleteFlightAmount() { this->flightAmount_ = nullptr;};
        inline double getFlightAmount() const { DARABONBA_PTR_GET_DEFAULT(flightAmount_, 0.0) };
        inline MonthAccountBillDetail& setFlightAmount(double flightAmount) { DARABONBA_PTR_SET_VALUE(flightAmount_, flightAmount) };


        // fuPoint Field Functions 
        bool hasFuPoint() const { return this->fuPoint_ != nullptr;};
        void deleteFuPoint() { this->fuPoint_ = nullptr;};
        inline double getFuPoint() const { DARABONBA_PTR_GET_DEFAULT(fuPoint_, 0.0) };
        inline MonthAccountBillDetail& setFuPoint(double fuPoint) { DARABONBA_PTR_SET_VALUE(fuPoint_, fuPoint) };


        // hotelAmount Field Functions 
        bool hasHotelAmount() const { return this->hotelAmount_ != nullptr;};
        void deleteHotelAmount() { this->hotelAmount_ = nullptr;};
        inline double getHotelAmount() const { DARABONBA_PTR_GET_DEFAULT(hotelAmount_, 0.0) };
        inline MonthAccountBillDetail& setHotelAmount(double hotelAmount) { DARABONBA_PTR_SET_VALUE(hotelAmount_, hotelAmount) };


        // ieFlightAmount Field Functions 
        bool hasIeFlightAmount() const { return this->ieFlightAmount_ != nullptr;};
        void deleteIeFlightAmount() { this->ieFlightAmount_ = nullptr;};
        inline double getIeFlightAmount() const { DARABONBA_PTR_GET_DEFAULT(ieFlightAmount_, 0.0) };
        inline MonthAccountBillDetail& setIeFlightAmount(double ieFlightAmount) { DARABONBA_PTR_SET_VALUE(ieFlightAmount_, ieFlightAmount) };


        // ieHotelAmount Field Functions 
        bool hasIeHotelAmount() const { return this->ieHotelAmount_ != nullptr;};
        void deleteIeHotelAmount() { this->ieHotelAmount_ = nullptr;};
        inline double getIeHotelAmount() const { DARABONBA_PTR_GET_DEFAULT(ieHotelAmount_, 0.0) };
        inline MonthAccountBillDetail& setIeHotelAmount(double ieHotelAmount) { DARABONBA_PTR_SET_VALUE(ieHotelAmount_, ieHotelAmount) };


        // mailBillDate Field Functions 
        bool hasMailBillDate() const { return this->mailBillDate_ != nullptr;};
        void deleteMailBillDate() { this->mailBillDate_ = nullptr;};
        inline int64_t getMailBillDate() const { DARABONBA_PTR_GET_DEFAULT(mailBillDate_, 0L) };
        inline MonthAccountBillDetail& setMailBillDate(int64_t mailBillDate) { DARABONBA_PTR_SET_VALUE(mailBillDate_, mailBillDate) };


        // mealAmount Field Functions 
        bool hasMealAmount() const { return this->mealAmount_ != nullptr;};
        void deleteMealAmount() { this->mealAmount_ = nullptr;};
        inline double getMealAmount() const { DARABONBA_PTR_GET_DEFAULT(mealAmount_, 0.0) };
        inline MonthAccountBillDetail& setMealAmount(double mealAmount) { DARABONBA_PTR_SET_VALUE(mealAmount_, mealAmount) };


        // metroAmount Field Functions 
        bool hasMetroAmount() const { return this->metroAmount_ != nullptr;};
        void deleteMetroAmount() { this->metroAmount_ = nullptr;};
        inline double getMetroAmount() const { DARABONBA_PTR_GET_DEFAULT(metroAmount_, 0.0) };
        inline MonthAccountBillDetail& setMetroAmount(double metroAmount) { DARABONBA_PTR_SET_VALUE(metroAmount_, metroAmount) };


        // serviceAmount Field Functions 
        bool hasServiceAmount() const { return this->serviceAmount_ != nullptr;};
        void deleteServiceAmount() { this->serviceAmount_ = nullptr;};
        inline double getServiceAmount() const { DARABONBA_PTR_GET_DEFAULT(serviceAmount_, 0.0) };
        inline MonthAccountBillDetail& setServiceAmount(double serviceAmount) { DARABONBA_PTR_SET_VALUE(serviceAmount_, serviceAmount) };


        // trainAmount Field Functions 
        bool hasTrainAmount() const { return this->trainAmount_ != nullptr;};
        void deleteTrainAmount() { this->trainAmount_ = nullptr;};
        inline double getTrainAmount() const { DARABONBA_PTR_GET_DEFAULT(trainAmount_, 0.0) };
        inline MonthAccountBillDetail& setTrainAmount(double trainAmount) { DARABONBA_PTR_SET_VALUE(trainAmount_, trainAmount) };


        // vasAmount Field Functions 
        bool hasVasAmount() const { return this->vasAmount_ != nullptr;};
        void deleteVasAmount() { this->vasAmount_ = nullptr;};
        inline double getVasAmount() const { DARABONBA_PTR_GET_DEFAULT(vasAmount_, 0.0) };
        inline MonthAccountBillDetail& setVasAmount(double vasAmount) { DARABONBA_PTR_SET_VALUE(vasAmount_, vasAmount) };


      protected:
        shared_ptr<int32_t> billConfirmed_ {};
        // 用车金额（单位：元）
        shared_ptr<double> carAmount_ {};
        // 违约金金额（单位：元）
        shared_ptr<double> damageAmount_ {};
        // 机票金额（单位：元）
        shared_ptr<double> flightAmount_ {};
        // 福豆金额（单位：元）
        shared_ptr<double> fuPoint_ {};
        // 酒店金额（单位：元）
        shared_ptr<double> hotelAmount_ {};
        // 国际机票金额（单位：元）
        shared_ptr<double> ieFlightAmount_ {};
        shared_ptr<double> ieHotelAmount_ {};
        // 账期日：YYYYMMDD
        shared_ptr<int64_t> mailBillDate_ {};
        shared_ptr<double> mealAmount_ {};
        shared_ptr<double> metroAmount_ {};
        // 服务费金额（单位：元）
        shared_ptr<double> serviceAmount_ {};
        // 火车票金额（单位：元）
        shared_ptr<double> trainAmount_ {};
        shared_ptr<double> vasAmount_ {};
      };

      virtual bool empty() const override { return this->endDate_ == nullptr
        && this->monthAccountBillDetail_ == nullptr && this->startDate_ == nullptr && this->url_ == nullptr; };
      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline Module& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // monthAccountBillDetail Field Functions 
      bool hasMonthAccountBillDetail() const { return this->monthAccountBillDetail_ != nullptr;};
      void deleteMonthAccountBillDetail() { this->monthAccountBillDetail_ = nullptr;};
      inline const Module::MonthAccountBillDetail & getMonthAccountBillDetail() const { DARABONBA_PTR_GET_CONST(monthAccountBillDetail_, Module::MonthAccountBillDetail) };
      inline Module::MonthAccountBillDetail getMonthAccountBillDetail() { DARABONBA_PTR_GET(monthAccountBillDetail_, Module::MonthAccountBillDetail) };
      inline Module& setMonthAccountBillDetail(const Module::MonthAccountBillDetail & monthAccountBillDetail) { DARABONBA_PTR_SET_VALUE(monthAccountBillDetail_, monthAccountBillDetail) };
      inline Module& setMonthAccountBillDetail(Module::MonthAccountBillDetail && monthAccountBillDetail) { DARABONBA_PTR_SET_RVALUE(monthAccountBillDetail_, monthAccountBillDetail) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline Module& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Module& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> endDate_ {};
      // CorpMonthAccountBillFeeDetail
      shared_ptr<Module::MonthAccountBillDetail> monthAccountBillDetail_ {};
      shared_ptr<string> startDate_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MonthBillGetResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MonthBillGetResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<MonthBillGetResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<MonthBillGetResponseBody::Module>) };
    inline vector<MonthBillGetResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<MonthBillGetResponseBody::Module>) };
    inline MonthBillGetResponseBody& setModule(const vector<MonthBillGetResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline MonthBillGetResponseBody& setModule(vector<MonthBillGetResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MonthBillGetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MonthBillGetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline MonthBillGetResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<MonthBillGetResponseBody::Module>> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
