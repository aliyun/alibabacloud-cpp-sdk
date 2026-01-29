// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCHATAPPPHONENUMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCHATAPPPHONENUMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class QueryChatappPhoneNumbersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryChatappPhoneNumbersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryChatappPhoneNumbersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryChatappPhoneNumbersResponseBody() = default ;
    QueryChatappPhoneNumbersResponseBody(const QueryChatappPhoneNumbersResponseBody &) = default ;
    QueryChatappPhoneNumbersResponseBody(QueryChatappPhoneNumbersResponseBody &&) = default ;
    QueryChatappPhoneNumbersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryChatappPhoneNumbersResponseBody() = default ;
    QueryChatappPhoneNumbersResponseBody& operator=(const QueryChatappPhoneNumbersResponseBody &) = default ;
    QueryChatappPhoneNumbersResponseBody& operator=(QueryChatappPhoneNumbersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PhoneNumbers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PhoneNumbers& obj) { 
        DARABONBA_PTR_TO_JSON(CallingConfigure, callingConfigure_);
        DARABONBA_PTR_TO_JSON(CodeVerificationStatus, codeVerificationStatus_);
        DARABONBA_PTR_TO_JSON(IsOfficial, isOfficial_);
        DARABONBA_PTR_TO_JSON(MessagingLimitTier, messagingLimitTier_);
        DARABONBA_PTR_TO_JSON(NameStatus, nameStatus_);
        DARABONBA_PTR_TO_JSON(NewNameStatus, newNameStatus_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(QualityRating, qualityRating_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusCallbackUrl, statusCallbackUrl_);
        DARABONBA_PTR_TO_JSON(StatusQueue, statusQueue_);
        DARABONBA_PTR_TO_JSON(UpCallbackUrl, upCallbackUrl_);
        DARABONBA_PTR_TO_JSON(UpQueue, upQueue_);
        DARABONBA_PTR_TO_JSON(VerifiedName, verifiedName_);
      };
      friend void from_json(const Darabonba::Json& j, PhoneNumbers& obj) { 
        DARABONBA_PTR_FROM_JSON(CallingConfigure, callingConfigure_);
        DARABONBA_PTR_FROM_JSON(CodeVerificationStatus, codeVerificationStatus_);
        DARABONBA_PTR_FROM_JSON(IsOfficial, isOfficial_);
        DARABONBA_PTR_FROM_JSON(MessagingLimitTier, messagingLimitTier_);
        DARABONBA_PTR_FROM_JSON(NameStatus, nameStatus_);
        DARABONBA_PTR_FROM_JSON(NewNameStatus, newNameStatus_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(QualityRating, qualityRating_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusCallbackUrl, statusCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(StatusQueue, statusQueue_);
        DARABONBA_PTR_FROM_JSON(UpCallbackUrl, upCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(UpQueue, upQueue_);
        DARABONBA_PTR_FROM_JSON(VerifiedName, verifiedName_);
      };
      PhoneNumbers() = default ;
      PhoneNumbers(const PhoneNumbers &) = default ;
      PhoneNumbers(PhoneNumbers &&) = default ;
      PhoneNumbers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PhoneNumbers() = default ;
      PhoneNumbers& operator=(const PhoneNumbers &) = default ;
      PhoneNumbers& operator=(PhoneNumbers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CallingConfigure : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CallingConfigure& obj) { 
          DARABONBA_PTR_TO_JSON(Calling, calling_);
          DARABONBA_PTR_TO_JSON(CallingCallbackUrl, callingCallbackUrl_);
          DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
        };
        friend void from_json(const Darabonba::Json& j, CallingConfigure& obj) { 
          DARABONBA_PTR_FROM_JSON(Calling, calling_);
          DARABONBA_PTR_FROM_JSON(CallingCallbackUrl, callingCallbackUrl_);
          DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
        };
        CallingConfigure() = default ;
        CallingConfigure(const CallingConfigure &) = default ;
        CallingConfigure(CallingConfigure &&) = default ;
        CallingConfigure(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CallingConfigure() = default ;
        CallingConfigure& operator=(const CallingConfigure &) = default ;
        CallingConfigure& operator=(CallingConfigure &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Calling : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Calling& obj) { 
            DARABONBA_PTR_TO_JSON(CallHours, callHours_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, Calling& obj) { 
            DARABONBA_PTR_FROM_JSON(CallHours, callHours_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          Calling() = default ;
          Calling(const Calling &) = default ;
          Calling(Calling &&) = default ;
          Calling(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Calling() = default ;
          Calling& operator=(const Calling &) = default ;
          Calling& operator=(Calling &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CallHours : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CallHours& obj) { 
              DARABONBA_PTR_TO_JSON(CallIconVisibility, callIconVisibility_);
              DARABONBA_PTR_TO_JSON(CallbackPermissionStatus, callbackPermissionStatus_);
              DARABONBA_PTR_TO_JSON(HolidaySchedule, holidaySchedule_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(TimezoneId, timezoneId_);
              DARABONBA_PTR_TO_JSON(WeeklyOperatingHours, weeklyOperatingHours_);
            };
            friend void from_json(const Darabonba::Json& j, CallHours& obj) { 
              DARABONBA_PTR_FROM_JSON(CallIconVisibility, callIconVisibility_);
              DARABONBA_PTR_FROM_JSON(CallbackPermissionStatus, callbackPermissionStatus_);
              DARABONBA_PTR_FROM_JSON(HolidaySchedule, holidaySchedule_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(TimezoneId, timezoneId_);
              DARABONBA_PTR_FROM_JSON(WeeklyOperatingHours, weeklyOperatingHours_);
            };
            CallHours() = default ;
            CallHours(const CallHours &) = default ;
            CallHours(CallHours &&) = default ;
            CallHours(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CallHours() = default ;
            CallHours& operator=(const CallHours &) = default ;
            CallHours& operator=(CallHours &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class WeeklyOperatingHours : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const WeeklyOperatingHours& obj) { 
                DARABONBA_PTR_TO_JSON(CloseTime, closeTime_);
                DARABONBA_PTR_TO_JSON(DayOfWeek, dayOfWeek_);
                DARABONBA_PTR_TO_JSON(OpenTime, openTime_);
              };
              friend void from_json(const Darabonba::Json& j, WeeklyOperatingHours& obj) { 
                DARABONBA_PTR_FROM_JSON(CloseTime, closeTime_);
                DARABONBA_PTR_FROM_JSON(DayOfWeek, dayOfWeek_);
                DARABONBA_PTR_FROM_JSON(OpenTime, openTime_);
              };
              WeeklyOperatingHours() = default ;
              WeeklyOperatingHours(const WeeklyOperatingHours &) = default ;
              WeeklyOperatingHours(WeeklyOperatingHours &&) = default ;
              WeeklyOperatingHours(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~WeeklyOperatingHours() = default ;
              WeeklyOperatingHours& operator=(const WeeklyOperatingHours &) = default ;
              WeeklyOperatingHours& operator=(WeeklyOperatingHours &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->closeTime_ == nullptr
        && this->dayOfWeek_ == nullptr && this->openTime_ == nullptr; };
              // closeTime Field Functions 
              bool hasCloseTime() const { return this->closeTime_ != nullptr;};
              void deleteCloseTime() { this->closeTime_ = nullptr;};
              inline string getCloseTime() const { DARABONBA_PTR_GET_DEFAULT(closeTime_, "") };
              inline WeeklyOperatingHours& setCloseTime(string closeTime) { DARABONBA_PTR_SET_VALUE(closeTime_, closeTime) };


              // dayOfWeek Field Functions 
              bool hasDayOfWeek() const { return this->dayOfWeek_ != nullptr;};
              void deleteDayOfWeek() { this->dayOfWeek_ = nullptr;};
              inline string getDayOfWeek() const { DARABONBA_PTR_GET_DEFAULT(dayOfWeek_, "") };
              inline WeeklyOperatingHours& setDayOfWeek(string dayOfWeek) { DARABONBA_PTR_SET_VALUE(dayOfWeek_, dayOfWeek) };


              // openTime Field Functions 
              bool hasOpenTime() const { return this->openTime_ != nullptr;};
              void deleteOpenTime() { this->openTime_ = nullptr;};
              inline string getOpenTime() const { DARABONBA_PTR_GET_DEFAULT(openTime_, "") };
              inline WeeklyOperatingHours& setOpenTime(string openTime) { DARABONBA_PTR_SET_VALUE(openTime_, openTime) };


            protected:
              shared_ptr<string> closeTime_ {};
              shared_ptr<string> dayOfWeek_ {};
              shared_ptr<string> openTime_ {};
            };

            class HolidaySchedule : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const HolidaySchedule& obj) { 
                DARABONBA_PTR_TO_JSON(Date, date_);
                DARABONBA_PTR_TO_JSON(EndTime, endTime_);
                DARABONBA_PTR_TO_JSON(StartTime, startTime_);
              };
              friend void from_json(const Darabonba::Json& j, HolidaySchedule& obj) { 
                DARABONBA_PTR_FROM_JSON(Date, date_);
                DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
                DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
              };
              HolidaySchedule() = default ;
              HolidaySchedule(const HolidaySchedule &) = default ;
              HolidaySchedule(HolidaySchedule &&) = default ;
              HolidaySchedule(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~HolidaySchedule() = default ;
              HolidaySchedule& operator=(const HolidaySchedule &) = default ;
              HolidaySchedule& operator=(HolidaySchedule &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->date_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
              // date Field Functions 
              bool hasDate() const { return this->date_ != nullptr;};
              void deleteDate() { this->date_ = nullptr;};
              inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
              inline HolidaySchedule& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


              // endTime Field Functions 
              bool hasEndTime() const { return this->endTime_ != nullptr;};
              void deleteEndTime() { this->endTime_ = nullptr;};
              inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
              inline HolidaySchedule& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


              // startTime Field Functions 
              bool hasStartTime() const { return this->startTime_ != nullptr;};
              void deleteStartTime() { this->startTime_ = nullptr;};
              inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
              inline HolidaySchedule& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            protected:
              shared_ptr<string> date_ {};
              shared_ptr<string> endTime_ {};
              shared_ptr<string> startTime_ {};
            };

            virtual bool empty() const override { return this->callIconVisibility_ == nullptr
        && this->callbackPermissionStatus_ == nullptr && this->holidaySchedule_ == nullptr && this->status_ == nullptr && this->timezoneId_ == nullptr && this->weeklyOperatingHours_ == nullptr; };
            // callIconVisibility Field Functions 
            bool hasCallIconVisibility() const { return this->callIconVisibility_ != nullptr;};
            void deleteCallIconVisibility() { this->callIconVisibility_ = nullptr;};
            inline string getCallIconVisibility() const { DARABONBA_PTR_GET_DEFAULT(callIconVisibility_, "") };
            inline CallHours& setCallIconVisibility(string callIconVisibility) { DARABONBA_PTR_SET_VALUE(callIconVisibility_, callIconVisibility) };


            // callbackPermissionStatus Field Functions 
            bool hasCallbackPermissionStatus() const { return this->callbackPermissionStatus_ != nullptr;};
            void deleteCallbackPermissionStatus() { this->callbackPermissionStatus_ = nullptr;};
            inline string getCallbackPermissionStatus() const { DARABONBA_PTR_GET_DEFAULT(callbackPermissionStatus_, "") };
            inline CallHours& setCallbackPermissionStatus(string callbackPermissionStatus) { DARABONBA_PTR_SET_VALUE(callbackPermissionStatus_, callbackPermissionStatus) };


            // holidaySchedule Field Functions 
            bool hasHolidaySchedule() const { return this->holidaySchedule_ != nullptr;};
            void deleteHolidaySchedule() { this->holidaySchedule_ = nullptr;};
            inline const vector<CallHours::HolidaySchedule> & getHolidaySchedule() const { DARABONBA_PTR_GET_CONST(holidaySchedule_, vector<CallHours::HolidaySchedule>) };
            inline vector<CallHours::HolidaySchedule> getHolidaySchedule() { DARABONBA_PTR_GET(holidaySchedule_, vector<CallHours::HolidaySchedule>) };
            inline CallHours& setHolidaySchedule(const vector<CallHours::HolidaySchedule> & holidaySchedule) { DARABONBA_PTR_SET_VALUE(holidaySchedule_, holidaySchedule) };
            inline CallHours& setHolidaySchedule(vector<CallHours::HolidaySchedule> && holidaySchedule) { DARABONBA_PTR_SET_RVALUE(holidaySchedule_, holidaySchedule) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline CallHours& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // timezoneId Field Functions 
            bool hasTimezoneId() const { return this->timezoneId_ != nullptr;};
            void deleteTimezoneId() { this->timezoneId_ = nullptr;};
            inline string getTimezoneId() const { DARABONBA_PTR_GET_DEFAULT(timezoneId_, "") };
            inline CallHours& setTimezoneId(string timezoneId) { DARABONBA_PTR_SET_VALUE(timezoneId_, timezoneId) };


            // weeklyOperatingHours Field Functions 
            bool hasWeeklyOperatingHours() const { return this->weeklyOperatingHours_ != nullptr;};
            void deleteWeeklyOperatingHours() { this->weeklyOperatingHours_ = nullptr;};
            inline const vector<CallHours::WeeklyOperatingHours> & getWeeklyOperatingHours() const { DARABONBA_PTR_GET_CONST(weeklyOperatingHours_, vector<CallHours::WeeklyOperatingHours>) };
            inline vector<CallHours::WeeklyOperatingHours> getWeeklyOperatingHours() { DARABONBA_PTR_GET(weeklyOperatingHours_, vector<CallHours::WeeklyOperatingHours>) };
            inline CallHours& setWeeklyOperatingHours(const vector<CallHours::WeeklyOperatingHours> & weeklyOperatingHours) { DARABONBA_PTR_SET_VALUE(weeklyOperatingHours_, weeklyOperatingHours) };
            inline CallHours& setWeeklyOperatingHours(vector<CallHours::WeeklyOperatingHours> && weeklyOperatingHours) { DARABONBA_PTR_SET_RVALUE(weeklyOperatingHours_, weeklyOperatingHours) };


          protected:
            shared_ptr<string> callIconVisibility_ {};
            shared_ptr<string> callbackPermissionStatus_ {};
            shared_ptr<vector<CallHours::HolidaySchedule>> holidaySchedule_ {};
            shared_ptr<string> status_ {};
            shared_ptr<string> timezoneId_ {};
            shared_ptr<vector<CallHours::WeeklyOperatingHours>> weeklyOperatingHours_ {};
          };

          virtual bool empty() const override { return this->callHours_ == nullptr
        && this->status_ == nullptr; };
          // callHours Field Functions 
          bool hasCallHours() const { return this->callHours_ != nullptr;};
          void deleteCallHours() { this->callHours_ = nullptr;};
          inline const Calling::CallHours & getCallHours() const { DARABONBA_PTR_GET_CONST(callHours_, Calling::CallHours) };
          inline Calling::CallHours getCallHours() { DARABONBA_PTR_GET(callHours_, Calling::CallHours) };
          inline Calling& setCallHours(const Calling::CallHours & callHours) { DARABONBA_PTR_SET_VALUE(callHours_, callHours) };
          inline Calling& setCallHours(Calling::CallHours && callHours) { DARABONBA_PTR_SET_RVALUE(callHours_, callHours) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Calling& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          shared_ptr<Calling::CallHours> callHours_ {};
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->calling_ == nullptr
        && this->callingCallbackUrl_ == nullptr && this->maxTalkTime_ == nullptr; };
        // calling Field Functions 
        bool hasCalling() const { return this->calling_ != nullptr;};
        void deleteCalling() { this->calling_ = nullptr;};
        inline const CallingConfigure::Calling & getCalling() const { DARABONBA_PTR_GET_CONST(calling_, CallingConfigure::Calling) };
        inline CallingConfigure::Calling getCalling() { DARABONBA_PTR_GET(calling_, CallingConfigure::Calling) };
        inline CallingConfigure& setCalling(const CallingConfigure::Calling & calling) { DARABONBA_PTR_SET_VALUE(calling_, calling) };
        inline CallingConfigure& setCalling(CallingConfigure::Calling && calling) { DARABONBA_PTR_SET_RVALUE(calling_, calling) };


        // callingCallbackUrl Field Functions 
        bool hasCallingCallbackUrl() const { return this->callingCallbackUrl_ != nullptr;};
        void deleteCallingCallbackUrl() { this->callingCallbackUrl_ = nullptr;};
        inline string getCallingCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callingCallbackUrl_, "") };
        inline CallingConfigure& setCallingCallbackUrl(string callingCallbackUrl) { DARABONBA_PTR_SET_VALUE(callingCallbackUrl_, callingCallbackUrl) };


        // maxTalkTime Field Functions 
        bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
        void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
        inline int64_t getMaxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
        inline CallingConfigure& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


      protected:
        shared_ptr<CallingConfigure::Calling> calling_ {};
        shared_ptr<string> callingCallbackUrl_ {};
        shared_ptr<int64_t> maxTalkTime_ {};
      };

      virtual bool empty() const override { return this->callingConfigure_ == nullptr
        && this->codeVerificationStatus_ == nullptr && this->isOfficial_ == nullptr && this->messagingLimitTier_ == nullptr && this->nameStatus_ == nullptr && this->newNameStatus_ == nullptr
        && this->phoneNumber_ == nullptr && this->qualityRating_ == nullptr && this->status_ == nullptr && this->statusCallbackUrl_ == nullptr && this->statusQueue_ == nullptr
        && this->upCallbackUrl_ == nullptr && this->upQueue_ == nullptr && this->verifiedName_ == nullptr; };
      // callingConfigure Field Functions 
      bool hasCallingConfigure() const { return this->callingConfigure_ != nullptr;};
      void deleteCallingConfigure() { this->callingConfigure_ = nullptr;};
      inline const PhoneNumbers::CallingConfigure & getCallingConfigure() const { DARABONBA_PTR_GET_CONST(callingConfigure_, PhoneNumbers::CallingConfigure) };
      inline PhoneNumbers::CallingConfigure getCallingConfigure() { DARABONBA_PTR_GET(callingConfigure_, PhoneNumbers::CallingConfigure) };
      inline PhoneNumbers& setCallingConfigure(const PhoneNumbers::CallingConfigure & callingConfigure) { DARABONBA_PTR_SET_VALUE(callingConfigure_, callingConfigure) };
      inline PhoneNumbers& setCallingConfigure(PhoneNumbers::CallingConfigure && callingConfigure) { DARABONBA_PTR_SET_RVALUE(callingConfigure_, callingConfigure) };


      // codeVerificationStatus Field Functions 
      bool hasCodeVerificationStatus() const { return this->codeVerificationStatus_ != nullptr;};
      void deleteCodeVerificationStatus() { this->codeVerificationStatus_ = nullptr;};
      inline string getCodeVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(codeVerificationStatus_, "") };
      inline PhoneNumbers& setCodeVerificationStatus(string codeVerificationStatus) { DARABONBA_PTR_SET_VALUE(codeVerificationStatus_, codeVerificationStatus) };


      // isOfficial Field Functions 
      bool hasIsOfficial() const { return this->isOfficial_ != nullptr;};
      void deleteIsOfficial() { this->isOfficial_ = nullptr;};
      inline string getIsOfficial() const { DARABONBA_PTR_GET_DEFAULT(isOfficial_, "") };
      inline PhoneNumbers& setIsOfficial(string isOfficial) { DARABONBA_PTR_SET_VALUE(isOfficial_, isOfficial) };


      // messagingLimitTier Field Functions 
      bool hasMessagingLimitTier() const { return this->messagingLimitTier_ != nullptr;};
      void deleteMessagingLimitTier() { this->messagingLimitTier_ = nullptr;};
      inline string getMessagingLimitTier() const { DARABONBA_PTR_GET_DEFAULT(messagingLimitTier_, "") };
      inline PhoneNumbers& setMessagingLimitTier(string messagingLimitTier) { DARABONBA_PTR_SET_VALUE(messagingLimitTier_, messagingLimitTier) };


      // nameStatus Field Functions 
      bool hasNameStatus() const { return this->nameStatus_ != nullptr;};
      void deleteNameStatus() { this->nameStatus_ = nullptr;};
      inline string getNameStatus() const { DARABONBA_PTR_GET_DEFAULT(nameStatus_, "") };
      inline PhoneNumbers& setNameStatus(string nameStatus) { DARABONBA_PTR_SET_VALUE(nameStatus_, nameStatus) };


      // newNameStatus Field Functions 
      bool hasNewNameStatus() const { return this->newNameStatus_ != nullptr;};
      void deleteNewNameStatus() { this->newNameStatus_ = nullptr;};
      inline string getNewNameStatus() const { DARABONBA_PTR_GET_DEFAULT(newNameStatus_, "") };
      inline PhoneNumbers& setNewNameStatus(string newNameStatus) { DARABONBA_PTR_SET_VALUE(newNameStatus_, newNameStatus) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline PhoneNumbers& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // qualityRating Field Functions 
      bool hasQualityRating() const { return this->qualityRating_ != nullptr;};
      void deleteQualityRating() { this->qualityRating_ = nullptr;};
      inline string getQualityRating() const { DARABONBA_PTR_GET_DEFAULT(qualityRating_, "") };
      inline PhoneNumbers& setQualityRating(string qualityRating) { DARABONBA_PTR_SET_VALUE(qualityRating_, qualityRating) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PhoneNumbers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusCallbackUrl Field Functions 
      bool hasStatusCallbackUrl() const { return this->statusCallbackUrl_ != nullptr;};
      void deleteStatusCallbackUrl() { this->statusCallbackUrl_ = nullptr;};
      inline string getStatusCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(statusCallbackUrl_, "") };
      inline PhoneNumbers& setStatusCallbackUrl(string statusCallbackUrl) { DARABONBA_PTR_SET_VALUE(statusCallbackUrl_, statusCallbackUrl) };


      // statusQueue Field Functions 
      bool hasStatusQueue() const { return this->statusQueue_ != nullptr;};
      void deleteStatusQueue() { this->statusQueue_ = nullptr;};
      inline string getStatusQueue() const { DARABONBA_PTR_GET_DEFAULT(statusQueue_, "") };
      inline PhoneNumbers& setStatusQueue(string statusQueue) { DARABONBA_PTR_SET_VALUE(statusQueue_, statusQueue) };


      // upCallbackUrl Field Functions 
      bool hasUpCallbackUrl() const { return this->upCallbackUrl_ != nullptr;};
      void deleteUpCallbackUrl() { this->upCallbackUrl_ = nullptr;};
      inline string getUpCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(upCallbackUrl_, "") };
      inline PhoneNumbers& setUpCallbackUrl(string upCallbackUrl) { DARABONBA_PTR_SET_VALUE(upCallbackUrl_, upCallbackUrl) };


      // upQueue Field Functions 
      bool hasUpQueue() const { return this->upQueue_ != nullptr;};
      void deleteUpQueue() { this->upQueue_ = nullptr;};
      inline string getUpQueue() const { DARABONBA_PTR_GET_DEFAULT(upQueue_, "") };
      inline PhoneNumbers& setUpQueue(string upQueue) { DARABONBA_PTR_SET_VALUE(upQueue_, upQueue) };


      // verifiedName Field Functions 
      bool hasVerifiedName() const { return this->verifiedName_ != nullptr;};
      void deleteVerifiedName() { this->verifiedName_ = nullptr;};
      inline string getVerifiedName() const { DARABONBA_PTR_GET_DEFAULT(verifiedName_, "") };
      inline PhoneNumbers& setVerifiedName(string verifiedName) { DARABONBA_PTR_SET_VALUE(verifiedName_, verifiedName) };


    protected:
      shared_ptr<PhoneNumbers::CallingConfigure> callingConfigure_ {};
      // The verification status of the phone number.
      // 
      // Valid values:
      // 
      // *   REVOKED: The review application is revoked.
      // *   MORE_INFORMATION_REQUESTED: More information needs to be provided.
      // *   VERIFIED: The phone number passes the verification.
      // *   REJECTED: The phone number fails to pass the verification.
      shared_ptr<string> codeVerificationStatus_ {};
      // Indicates whether it is a WhatsApp Official Business Account (OBA).
      shared_ptr<string> isOfficial_ {};
      // The number of phone numbers to which messages can be sent in a day.
      // 
      // Valid values:
      // 
      // *   TIER_100K: 100,000
      // *   TIER_UNLIMITED: unlimited
      // *   TIER_250: 250
      // *   TIER_1K: 1,000
      // *   TIER_50: 50
      // *   TIER_10K: 10,000
      shared_ptr<string> messagingLimitTier_ {};
      // The review status of the name.
      shared_ptr<string> nameStatus_ {};
      // The review status of the new display name of the enterprise.
      shared_ptr<string> newNameStatus_ {};
      // The phone number.
      shared_ptr<string> phoneNumber_ {};
      // The quality rating of the phone number.
      // 
      // Valid values:
      // 
      // *   RED: low
      // *   YELLOW: medium
      // *   UNKNOWN: unknown
      // *   GREEN: high
      shared_ptr<string> qualityRating_ {};
      // The state of the phone number.
      // 
      // Valid values:
      // 
      // *   MIGRATED
      // *   FLAGGED
      // *   DISCONNECTED
      // *   UNVERIFIED
      // *   BANNED
      // *   RATE_LIMITED
      // *   PENDING
      // *   CONNECTED
      // *   UNKNOWN
      // *   DELETED
      // *   RESTRICTED
      shared_ptr<string> status_ {};
      // The URL that receives the status reports.
      shared_ptr<string> statusCallbackUrl_ {};
      // The status report queue.
      shared_ptr<string> statusQueue_ {};
      // The URL that receives the MO messages.
      shared_ptr<string> upCallbackUrl_ {};
      // The mobile originated (MO) message queue.
      shared_ptr<string> upQueue_ {};
      // The display name of the enterprise to which the phone number belongs.
      shared_ptr<string> verifiedName_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->phoneNumbers_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryChatappPhoneNumbersResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryChatappPhoneNumbersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline QueryChatappPhoneNumbersResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryChatappPhoneNumbersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // phoneNumbers Field Functions 
    bool hasPhoneNumbers() const { return this->phoneNumbers_ != nullptr;};
    void deletePhoneNumbers() { this->phoneNumbers_ = nullptr;};
    inline const vector<QueryChatappPhoneNumbersResponseBody::PhoneNumbers> & getPhoneNumbers() const { DARABONBA_PTR_GET_CONST(phoneNumbers_, vector<QueryChatappPhoneNumbersResponseBody::PhoneNumbers>) };
    inline vector<QueryChatappPhoneNumbersResponseBody::PhoneNumbers> getPhoneNumbers() { DARABONBA_PTR_GET(phoneNumbers_, vector<QueryChatappPhoneNumbersResponseBody::PhoneNumbers>) };
    inline QueryChatappPhoneNumbersResponseBody& setPhoneNumbers(const vector<QueryChatappPhoneNumbersResponseBody::PhoneNumbers> & phoneNumbers) { DARABONBA_PTR_SET_VALUE(phoneNumbers_, phoneNumbers) };
    inline QueryChatappPhoneNumbersResponseBody& setPhoneNumbers(vector<QueryChatappPhoneNumbersResponseBody::PhoneNumbers> && phoneNumbers) { DARABONBA_PTR_SET_RVALUE(phoneNumbers_, phoneNumbers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryChatappPhoneNumbersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryChatappPhoneNumbersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The HTTP status code returned.
    // 
    // *   A value of OK indicates that the call is successful.
    // *   Other values indicate that the call fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/196974.html).
    shared_ptr<string> code_ {};
    shared_ptr<string> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The phone numbers.
    shared_ptr<vector<QueryChatappPhoneNumbersResponseBody::PhoneNumbers>> phoneNumbers_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
