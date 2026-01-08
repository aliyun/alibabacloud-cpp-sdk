// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetUserConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountSufficient, accountSufficient_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EnableEciDisk, enableEciDisk_);
      DARABONBA_PTR_TO_JSON(FreeTier, freeTier_);
      DARABONBA_PTR_TO_JSON(FreeTierSpecAvailable, freeTierSpecAvailable_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountSufficient, accountSufficient_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EnableEciDisk, enableEciDisk_);
      DARABONBA_PTR_FROM_JSON(FreeTier, freeTier_);
      DARABONBA_PTR_FROM_JSON(FreeTierSpecAvailable, freeTierSpecAvailable_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetUserConfigResponseBody() = default ;
    GetUserConfigResponseBody(const GetUserConfigResponseBody &) = default ;
    GetUserConfigResponseBody(GetUserConfigResponseBody &&) = default ;
    GetUserConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserConfigResponseBody() = default ;
    GetUserConfigResponseBody& operator=(const GetUserConfigResponseBody &) = default ;
    GetUserConfigResponseBody& operator=(GetUserConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FreeTier : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FreeTier& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InitBaseUnit, initBaseUnit_);
        DARABONBA_PTR_TO_JSON(InitBaseValue, initBaseValue_);
        DARABONBA_PTR_TO_JSON(InitShowUnit, initShowUnit_);
        DARABONBA_PTR_TO_JSON(InitShowValue, initShowValue_);
        DARABONBA_PTR_TO_JSON(IsFreeTierUser, isFreeTierUser_);
        DARABONBA_PTR_TO_JSON(PeriodBaseUnit, periodBaseUnit_);
        DARABONBA_PTR_TO_JSON(PeriodBaseValue, periodBaseValue_);
        DARABONBA_PTR_TO_JSON(PeriodShowUnit, periodShowUnit_);
        DARABONBA_PTR_TO_JSON(PeriodShowValue, periodShowValue_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, FreeTier& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InitBaseUnit, initBaseUnit_);
        DARABONBA_PTR_FROM_JSON(InitBaseValue, initBaseValue_);
        DARABONBA_PTR_FROM_JSON(InitShowUnit, initShowUnit_);
        DARABONBA_PTR_FROM_JSON(InitShowValue, initShowValue_);
        DARABONBA_PTR_FROM_JSON(IsFreeTierUser, isFreeTierUser_);
        DARABONBA_PTR_FROM_JSON(PeriodBaseUnit, periodBaseUnit_);
        DARABONBA_PTR_FROM_JSON(PeriodBaseValue, periodBaseValue_);
        DARABONBA_PTR_FROM_JSON(PeriodShowUnit, periodShowUnit_);
        DARABONBA_PTR_FROM_JSON(PeriodShowValue, periodShowValue_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      FreeTier() = default ;
      FreeTier(const FreeTier &) = default ;
      FreeTier(FreeTier &&) = default ;
      FreeTier(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FreeTier() = default ;
      FreeTier& operator=(const FreeTier &) = default ;
      FreeTier& operator=(FreeTier &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->initBaseUnit_ == nullptr && this->initBaseValue_ == nullptr && this->initShowUnit_ == nullptr && this->initShowValue_ == nullptr && this->isFreeTierUser_ == nullptr
        && this->periodBaseUnit_ == nullptr && this->periodBaseValue_ == nullptr && this->periodShowUnit_ == nullptr && this->periodShowValue_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline FreeTier& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // initBaseUnit Field Functions 
      bool hasInitBaseUnit() const { return this->initBaseUnit_ != nullptr;};
      void deleteInitBaseUnit() { this->initBaseUnit_ = nullptr;};
      inline string getInitBaseUnit() const { DARABONBA_PTR_GET_DEFAULT(initBaseUnit_, "") };
      inline FreeTier& setInitBaseUnit(string initBaseUnit) { DARABONBA_PTR_SET_VALUE(initBaseUnit_, initBaseUnit) };


      // initBaseValue Field Functions 
      bool hasInitBaseValue() const { return this->initBaseValue_ != nullptr;};
      void deleteInitBaseValue() { this->initBaseValue_ = nullptr;};
      inline double getInitBaseValue() const { DARABONBA_PTR_GET_DEFAULT(initBaseValue_, 0.0) };
      inline FreeTier& setInitBaseValue(double initBaseValue) { DARABONBA_PTR_SET_VALUE(initBaseValue_, initBaseValue) };


      // initShowUnit Field Functions 
      bool hasInitShowUnit() const { return this->initShowUnit_ != nullptr;};
      void deleteInitShowUnit() { this->initShowUnit_ = nullptr;};
      inline string getInitShowUnit() const { DARABONBA_PTR_GET_DEFAULT(initShowUnit_, "") };
      inline FreeTier& setInitShowUnit(string initShowUnit) { DARABONBA_PTR_SET_VALUE(initShowUnit_, initShowUnit) };


      // initShowValue Field Functions 
      bool hasInitShowValue() const { return this->initShowValue_ != nullptr;};
      void deleteInitShowValue() { this->initShowValue_ = nullptr;};
      inline string getInitShowValue() const { DARABONBA_PTR_GET_DEFAULT(initShowValue_, "") };
      inline FreeTier& setInitShowValue(string initShowValue) { DARABONBA_PTR_SET_VALUE(initShowValue_, initShowValue) };


      // isFreeTierUser Field Functions 
      bool hasIsFreeTierUser() const { return this->isFreeTierUser_ != nullptr;};
      void deleteIsFreeTierUser() { this->isFreeTierUser_ = nullptr;};
      inline bool getIsFreeTierUser() const { DARABONBA_PTR_GET_DEFAULT(isFreeTierUser_, false) };
      inline FreeTier& setIsFreeTierUser(bool isFreeTierUser) { DARABONBA_PTR_SET_VALUE(isFreeTierUser_, isFreeTierUser) };


      // periodBaseUnit Field Functions 
      bool hasPeriodBaseUnit() const { return this->periodBaseUnit_ != nullptr;};
      void deletePeriodBaseUnit() { this->periodBaseUnit_ = nullptr;};
      inline string getPeriodBaseUnit() const { DARABONBA_PTR_GET_DEFAULT(periodBaseUnit_, "") };
      inline FreeTier& setPeriodBaseUnit(string periodBaseUnit) { DARABONBA_PTR_SET_VALUE(periodBaseUnit_, periodBaseUnit) };


      // periodBaseValue Field Functions 
      bool hasPeriodBaseValue() const { return this->periodBaseValue_ != nullptr;};
      void deletePeriodBaseValue() { this->periodBaseValue_ = nullptr;};
      inline double getPeriodBaseValue() const { DARABONBA_PTR_GET_DEFAULT(periodBaseValue_, 0.0) };
      inline FreeTier& setPeriodBaseValue(double periodBaseValue) { DARABONBA_PTR_SET_VALUE(periodBaseValue_, periodBaseValue) };


      // periodShowUnit Field Functions 
      bool hasPeriodShowUnit() const { return this->periodShowUnit_ != nullptr;};
      void deletePeriodShowUnit() { this->periodShowUnit_ = nullptr;};
      inline string getPeriodShowUnit() const { DARABONBA_PTR_GET_DEFAULT(periodShowUnit_, "") };
      inline FreeTier& setPeriodShowUnit(string periodShowUnit) { DARABONBA_PTR_SET_VALUE(periodShowUnit_, periodShowUnit) };


      // periodShowValue Field Functions 
      bool hasPeriodShowValue() const { return this->periodShowValue_ != nullptr;};
      void deletePeriodShowValue() { this->periodShowValue_ = nullptr;};
      inline string getPeriodShowValue() const { DARABONBA_PTR_GET_DEFAULT(periodShowValue_, "") };
      inline FreeTier& setPeriodShowValue(string periodShowValue) { DARABONBA_PTR_SET_VALUE(periodShowValue_, periodShowValue) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline FreeTier& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline FreeTier& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> endTime_ {};
      shared_ptr<string> initBaseUnit_ {};
      shared_ptr<double> initBaseValue_ {};
      shared_ptr<string> initShowUnit_ {};
      shared_ptr<string> initShowValue_ {};
      shared_ptr<bool> isFreeTierUser_ {};
      shared_ptr<string> periodBaseUnit_ {};
      shared_ptr<double> periodBaseValue_ {};
      shared_ptr<string> periodShowUnit_ {};
      shared_ptr<string> periodShowValue_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accountSufficient_ == nullptr
        && this->code_ == nullptr && this->enableEciDisk_ == nullptr && this->freeTier_ == nullptr && this->freeTierSpecAvailable_ == nullptr && this->httpStatusCode_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accountSufficient Field Functions 
    bool hasAccountSufficient() const { return this->accountSufficient_ != nullptr;};
    void deleteAccountSufficient() { this->accountSufficient_ = nullptr;};
    inline bool getAccountSufficient() const { DARABONBA_PTR_GET_DEFAULT(accountSufficient_, false) };
    inline GetUserConfigResponseBody& setAccountSufficient(bool accountSufficient) { DARABONBA_PTR_SET_VALUE(accountSufficient_, accountSufficient) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUserConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // enableEciDisk Field Functions 
    bool hasEnableEciDisk() const { return this->enableEciDisk_ != nullptr;};
    void deleteEnableEciDisk() { this->enableEciDisk_ = nullptr;};
    inline bool getEnableEciDisk() const { DARABONBA_PTR_GET_DEFAULT(enableEciDisk_, false) };
    inline GetUserConfigResponseBody& setEnableEciDisk(bool enableEciDisk) { DARABONBA_PTR_SET_VALUE(enableEciDisk_, enableEciDisk) };


    // freeTier Field Functions 
    bool hasFreeTier() const { return this->freeTier_ != nullptr;};
    void deleteFreeTier() { this->freeTier_ = nullptr;};
    inline const GetUserConfigResponseBody::FreeTier & getFreeTier() const { DARABONBA_PTR_GET_CONST(freeTier_, GetUserConfigResponseBody::FreeTier) };
    inline GetUserConfigResponseBody::FreeTier getFreeTier() { DARABONBA_PTR_GET(freeTier_, GetUserConfigResponseBody::FreeTier) };
    inline GetUserConfigResponseBody& setFreeTier(const GetUserConfigResponseBody::FreeTier & freeTier) { DARABONBA_PTR_SET_VALUE(freeTier_, freeTier) };
    inline GetUserConfigResponseBody& setFreeTier(GetUserConfigResponseBody::FreeTier && freeTier) { DARABONBA_PTR_SET_RVALUE(freeTier_, freeTier) };


    // freeTierSpecAvailable Field Functions 
    bool hasFreeTierSpecAvailable() const { return this->freeTierSpecAvailable_ != nullptr;};
    void deleteFreeTierSpecAvailable() { this->freeTierSpecAvailable_ = nullptr;};
    inline bool getFreeTierSpecAvailable() const { DARABONBA_PTR_GET_DEFAULT(freeTierSpecAvailable_, false) };
    inline GetUserConfigResponseBody& setFreeTierSpecAvailable(bool freeTierSpecAvailable) { DARABONBA_PTR_SET_VALUE(freeTierSpecAvailable_, freeTierSpecAvailable) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetUserConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUserConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<bool> accountSufficient_ {};
    shared_ptr<string> code_ {};
    shared_ptr<bool> enableEciDisk_ {};
    shared_ptr<GetUserConfigResponseBody::FreeTier> freeTier_ {};
    shared_ptr<bool> freeTierSpecAvailable_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
