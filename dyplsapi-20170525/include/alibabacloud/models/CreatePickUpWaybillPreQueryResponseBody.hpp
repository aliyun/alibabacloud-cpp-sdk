// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillPreQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillPreQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillPreQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePickUpWaybillPreQueryResponseBody() = default ;
    CreatePickUpWaybillPreQueryResponseBody(const CreatePickUpWaybillPreQueryResponseBody &) = default ;
    CreatePickUpWaybillPreQueryResponseBody(CreatePickUpWaybillPreQueryResponseBody &&) = default ;
    CreatePickUpWaybillPreQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillPreQueryResponseBody() = default ;
    CreatePickUpWaybillPreQueryResponseBody& operator=(const CreatePickUpWaybillPreQueryResponseBody &) = default ;
    CreatePickUpWaybillPreQueryResponseBody& operator=(CreatePickUpWaybillPreQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CpTimeSelectList, cpTimeSelectList_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CpTimeSelectList, cpTimeSelectList_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CpTimeSelectList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CpTimeSelectList& obj) { 
          DARABONBA_PTR_TO_JSON(AppointTimes, appointTimes_);
          DARABONBA_PTR_TO_JSON(PrePrice, prePrice_);
          DARABONBA_PTR_TO_JSON(RealTime, realTime_);
        };
        friend void from_json(const Darabonba::Json& j, CpTimeSelectList& obj) { 
          DARABONBA_PTR_FROM_JSON(AppointTimes, appointTimes_);
          DARABONBA_PTR_FROM_JSON(PrePrice, prePrice_);
          DARABONBA_PTR_FROM_JSON(RealTime, realTime_);
        };
        CpTimeSelectList() = default ;
        CpTimeSelectList(const CpTimeSelectList &) = default ;
        CpTimeSelectList(CpTimeSelectList &&) = default ;
        CpTimeSelectList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CpTimeSelectList() = default ;
        CpTimeSelectList& operator=(const CpTimeSelectList &) = default ;
        CpTimeSelectList& operator=(CpTimeSelectList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RealTime : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RealTime& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(SelectDisableTip, selectDisableTip_);
            DARABONBA_PTR_TO_JSON(Selectable, selectable_);
          };
          friend void from_json(const Darabonba::Json& j, RealTime& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(SelectDisableTip, selectDisableTip_);
            DARABONBA_PTR_FROM_JSON(Selectable, selectable_);
          };
          RealTime() = default ;
          RealTime(const RealTime &) = default ;
          RealTime(RealTime &&) = default ;
          RealTime(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RealTime() = default ;
          RealTime& operator=(const RealTime &) = default ;
          RealTime& operator=(RealTime &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->selectDisableTip_ == nullptr && this->selectable_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RealTime& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // selectDisableTip Field Functions 
          bool hasSelectDisableTip() const { return this->selectDisableTip_ != nullptr;};
          void deleteSelectDisableTip() { this->selectDisableTip_ = nullptr;};
          inline string getSelectDisableTip() const { DARABONBA_PTR_GET_DEFAULT(selectDisableTip_, "") };
          inline RealTime& setSelectDisableTip(string selectDisableTip) { DARABONBA_PTR_SET_VALUE(selectDisableTip_, selectDisableTip) };


          // selectable Field Functions 
          bool hasSelectable() const { return this->selectable_ != nullptr;};
          void deleteSelectable() { this->selectable_ = nullptr;};
          inline bool getSelectable() const { DARABONBA_PTR_GET_DEFAULT(selectable_, false) };
          inline RealTime& setSelectable(bool selectable) { DARABONBA_PTR_SET_VALUE(selectable_, selectable) };


        protected:
          // The service type name for real-time orders.
          shared_ptr<string> name_ {};
          // The tip message displayed when the option is not selectable.
          shared_ptr<string> selectDisableTip_ {};
          // Indicates whether a real-time order can still be placed after the real-time order placement time has passed.
          shared_ptr<bool> selectable_ {};
        };

        class AppointTimes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AppointTimes& obj) { 
            DARABONBA_PTR_TO_JSON(Date, date_);
            DARABONBA_PTR_TO_JSON(DateSelectable, dateSelectable_);
            DARABONBA_PTR_TO_JSON(TimeList, timeList_);
          };
          friend void from_json(const Darabonba::Json& j, AppointTimes& obj) { 
            DARABONBA_PTR_FROM_JSON(Date, date_);
            DARABONBA_PTR_FROM_JSON(DateSelectable, dateSelectable_);
            DARABONBA_PTR_FROM_JSON(TimeList, timeList_);
          };
          AppointTimes() = default ;
          AppointTimes(const AppointTimes &) = default ;
          AppointTimes(AppointTimes &&) = default ;
          AppointTimes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AppointTimes() = default ;
          AppointTimes& operator=(const AppointTimes &) = default ;
          AppointTimes& operator=(AppointTimes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TimeList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TimeList& obj) { 
              DARABONBA_PTR_TO_JSON(EndTime, endTime_);
              DARABONBA_PTR_TO_JSON(SelectDisableTip, selectDisableTip_);
              DARABONBA_PTR_TO_JSON(Selectable, selectable_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            };
            friend void from_json(const Darabonba::Json& j, TimeList& obj) { 
              DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
              DARABONBA_PTR_FROM_JSON(SelectDisableTip, selectDisableTip_);
              DARABONBA_PTR_FROM_JSON(Selectable, selectable_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            };
            TimeList() = default ;
            TimeList(const TimeList &) = default ;
            TimeList(TimeList &&) = default ;
            TimeList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TimeList() = default ;
            TimeList& operator=(const TimeList &) = default ;
            TimeList& operator=(TimeList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->endTime_ == nullptr
        && this->selectDisableTip_ == nullptr && this->selectable_ == nullptr && this->startTime_ == nullptr; };
            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
            inline TimeList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


            // selectDisableTip Field Functions 
            bool hasSelectDisableTip() const { return this->selectDisableTip_ != nullptr;};
            void deleteSelectDisableTip() { this->selectDisableTip_ = nullptr;};
            inline string getSelectDisableTip() const { DARABONBA_PTR_GET_DEFAULT(selectDisableTip_, "") };
            inline TimeList& setSelectDisableTip(string selectDisableTip) { DARABONBA_PTR_SET_VALUE(selectDisableTip_, selectDisableTip) };


            // selectable Field Functions 
            bool hasSelectable() const { return this->selectable_ != nullptr;};
            void deleteSelectable() { this->selectable_ = nullptr;};
            inline bool getSelectable() const { DARABONBA_PTR_GET_DEFAULT(selectable_, false) };
            inline TimeList& setSelectable(bool selectable) { DARABONBA_PTR_SET_VALUE(selectable_, selectable) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline TimeList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          protected:
            // The end time of the time slot, in HH:mm:ss format.
            shared_ptr<string> endTime_ {};
            // The tip message displayed when the option is not selectable.
            shared_ptr<string> selectDisableTip_ {};
            // Indicates whether the scheduled time slot is selectable.
            shared_ptr<bool> selectable_ {};
            // The start time of the time slot, in HH:mm:ss format.
            shared_ptr<string> startTime_ {};
          };

          virtual bool empty() const override { return this->date_ == nullptr
        && this->dateSelectable_ == nullptr && this->timeList_ == nullptr; };
          // date Field Functions 
          bool hasDate() const { return this->date_ != nullptr;};
          void deleteDate() { this->date_ = nullptr;};
          inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
          inline AppointTimes& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


          // dateSelectable Field Functions 
          bool hasDateSelectable() const { return this->dateSelectable_ != nullptr;};
          void deleteDateSelectable() { this->dateSelectable_ = nullptr;};
          inline bool getDateSelectable() const { DARABONBA_PTR_GET_DEFAULT(dateSelectable_, false) };
          inline AppointTimes& setDateSelectable(bool dateSelectable) { DARABONBA_PTR_SET_VALUE(dateSelectable_, dateSelectable) };


          // timeList Field Functions 
          bool hasTimeList() const { return this->timeList_ != nullptr;};
          void deleteTimeList() { this->timeList_ = nullptr;};
          inline const vector<AppointTimes::TimeList> & getTimeList() const { DARABONBA_PTR_GET_CONST(timeList_, vector<AppointTimes::TimeList>) };
          inline vector<AppointTimes::TimeList> getTimeList() { DARABONBA_PTR_GET(timeList_, vector<AppointTimes::TimeList>) };
          inline AppointTimes& setTimeList(const vector<AppointTimes::TimeList> & timeList) { DARABONBA_PTR_SET_VALUE(timeList_, timeList) };
          inline AppointTimes& setTimeList(vector<AppointTimes::TimeList> && timeList) { DARABONBA_PTR_SET_RVALUE(timeList_, timeList) };


        protected:
          // The date string in YYYY-MM-DD format.
          shared_ptr<string> date_ {};
          // Indicates whether the date is selectable.
          shared_ptr<bool> dateSelectable_ {};
          // The list of available time slots for the day.
          shared_ptr<vector<AppointTimes::TimeList>> timeList_ {};
        };

        virtual bool empty() const override { return this->appointTimes_ == nullptr
        && this->prePrice_ == nullptr && this->realTime_ == nullptr; };
        // appointTimes Field Functions 
        bool hasAppointTimes() const { return this->appointTimes_ != nullptr;};
        void deleteAppointTimes() { this->appointTimes_ = nullptr;};
        inline const vector<CpTimeSelectList::AppointTimes> & getAppointTimes() const { DARABONBA_PTR_GET_CONST(appointTimes_, vector<CpTimeSelectList::AppointTimes>) };
        inline vector<CpTimeSelectList::AppointTimes> getAppointTimes() { DARABONBA_PTR_GET(appointTimes_, vector<CpTimeSelectList::AppointTimes>) };
        inline CpTimeSelectList& setAppointTimes(const vector<CpTimeSelectList::AppointTimes> & appointTimes) { DARABONBA_PTR_SET_VALUE(appointTimes_, appointTimes) };
        inline CpTimeSelectList& setAppointTimes(vector<CpTimeSelectList::AppointTimes> && appointTimes) { DARABONBA_PTR_SET_RVALUE(appointTimes_, appointTimes) };


        // prePrice Field Functions 
        bool hasPrePrice() const { return this->prePrice_ != nullptr;};
        void deletePrePrice() { this->prePrice_ = nullptr;};
        inline string getPrePrice() const { DARABONBA_PTR_GET_DEFAULT(prePrice_, "") };
        inline CpTimeSelectList& setPrePrice(string prePrice) { DARABONBA_PTR_SET_VALUE(prePrice_, prePrice) };


        // realTime Field Functions 
        bool hasRealTime() const { return this->realTime_ != nullptr;};
        void deleteRealTime() { this->realTime_ = nullptr;};
        inline const CpTimeSelectList::RealTime & getRealTime() const { DARABONBA_PTR_GET_CONST(realTime_, CpTimeSelectList::RealTime) };
        inline CpTimeSelectList::RealTime getRealTime() { DARABONBA_PTR_GET(realTime_, CpTimeSelectList::RealTime) };
        inline CpTimeSelectList& setRealTime(const CpTimeSelectList::RealTime & realTime) { DARABONBA_PTR_SET_VALUE(realTime_, realTime) };
        inline CpTimeSelectList& setRealTime(CpTimeSelectList::RealTime && realTime) { DARABONBA_PTR_SET_RVALUE(realTime_, realTime) };


      protected:
        // The available time options for scheduled orders. If the courier company does not support scheduled orders, this field is empty.
        shared_ptr<vector<CpTimeSelectList::AppointTimes>> appointTimes_ {};
        // The estimated price, in CNY, rounded to two decimal places. This field has a value only when the estimated weight is specified in the request parameters.
        shared_ptr<string> prePrice_ {};
        // The available options for real-time orders.
        shared_ptr<CpTimeSelectList::RealTime> realTime_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->cpTimeSelectList_ == nullptr && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // cpTimeSelectList Field Functions 
      bool hasCpTimeSelectList() const { return this->cpTimeSelectList_ != nullptr;};
      void deleteCpTimeSelectList() { this->cpTimeSelectList_ = nullptr;};
      inline const vector<Data::CpTimeSelectList> & getCpTimeSelectList() const { DARABONBA_PTR_GET_CONST(cpTimeSelectList_, vector<Data::CpTimeSelectList>) };
      inline vector<Data::CpTimeSelectList> getCpTimeSelectList() { DARABONBA_PTR_GET(cpTimeSelectList_, vector<Data::CpTimeSelectList>) };
      inline Data& setCpTimeSelectList(const vector<Data::CpTimeSelectList> & cpTimeSelectList) { DARABONBA_PTR_SET_VALUE(cpTimeSelectList_, cpTimeSelectList) };
      inline Data& setCpTimeSelectList(vector<Data::CpTimeSelectList> && cpTimeSelectList) { DARABONBA_PTR_SET_RVALUE(cpTimeSelectList_, cpTimeSelectList) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Data& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The response code.
      shared_ptr<string> code_ {};
      // The list of information about whether courier companies are available for placing orders.
      shared_ptr<vector<Data::CpTimeSelectList>> cpTimeSelectList_ {};
      // The error code.
      shared_ptr<string> errorCode_ {};
      // The error message.
      shared_ptr<string> errorMsg_ {};
      // The response content.
      shared_ptr<string> message_ {};
      // Indicates whether the operation is successful.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreatePickUpWaybillPreQueryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreatePickUpWaybillPreQueryResponseBody::Data) };
    inline CreatePickUpWaybillPreQueryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreatePickUpWaybillPreQueryResponseBody::Data) };
    inline CreatePickUpWaybillPreQueryResponseBody& setData(const CreatePickUpWaybillPreQueryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreatePickUpWaybillPreQueryResponseBody& setData(CreatePickUpWaybillPreQueryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreatePickUpWaybillPreQueryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreatePickUpWaybillPreQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePickUpWaybillPreQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result set.
    shared_ptr<CreatePickUpWaybillPreQueryResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
