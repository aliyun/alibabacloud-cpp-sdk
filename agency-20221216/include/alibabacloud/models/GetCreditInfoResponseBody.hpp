// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREDITINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCREDITINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCreditInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCreditInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCreditInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCreditInfoResponseBody() = default ;
    GetCreditInfoResponseBody(const GetCreditInfoResponseBody &) = default ;
    GetCreditInfoResponseBody(GetCreditInfoResponseBody &&) = default ;
    GetCreditInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCreditInfoResponseBody() = default ;
    GetCreditInfoResponseBody& operator=(const GetCreditInfoResponseBody &) = default ;
    GetCreditInfoResponseBody& operator=(GetCreditInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
        DARABONBA_PTR_TO_JSON(AlarmThreshold, alarmThreshold_);
        DARABONBA_PTR_TO_JSON(AvailableCredit, availableCredit_);
        DARABONBA_PTR_TO_JSON(ConsumedUndeductedValue, consumedUndeductedValue_);
        DARABONBA_PTR_TO_JSON(CreditLine, creditLine_);
        DARABONBA_PTR_TO_JSON(OutstandingBalance, outstandingBalance_);
        DARABONBA_PTR_TO_JSON(PAYGFreezeStatus, PAYGFreezeStatus_);
        DARABONBA_PTR_TO_JSON(ZeroCreditShutdownPolicy, zeroCreditShutdownPolicy_);
        DARABONBA_PTR_TO_JSON(newBuyStatus, newBuyStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
        DARABONBA_PTR_FROM_JSON(AlarmThreshold, alarmThreshold_);
        DARABONBA_PTR_FROM_JSON(AvailableCredit, availableCredit_);
        DARABONBA_PTR_FROM_JSON(ConsumedUndeductedValue, consumedUndeductedValue_);
        DARABONBA_PTR_FROM_JSON(CreditLine, creditLine_);
        DARABONBA_PTR_FROM_JSON(OutstandingBalance, outstandingBalance_);
        DARABONBA_PTR_FROM_JSON(PAYGFreezeStatus, PAYGFreezeStatus_);
        DARABONBA_PTR_FROM_JSON(ZeroCreditShutdownPolicy, zeroCreditShutdownPolicy_);
        DARABONBA_PTR_FROM_JSON(newBuyStatus, newBuyStatus_);
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
      virtual bool empty() const override { return this->accountStatus_ == nullptr
        && this->alarmThreshold_ == nullptr && this->availableCredit_ == nullptr && this->consumedUndeductedValue_ == nullptr && this->creditLine_ == nullptr && this->outstandingBalance_ == nullptr
        && this->PAYGFreezeStatus_ == nullptr && this->zeroCreditShutdownPolicy_ == nullptr && this->newBuyStatus_ == nullptr; };
      // accountStatus Field Functions 
      bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
      void deleteAccountStatus() { this->accountStatus_ = nullptr;};
      inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
      inline Data& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


      // alarmThreshold Field Functions 
      bool hasAlarmThreshold() const { return this->alarmThreshold_ != nullptr;};
      void deleteAlarmThreshold() { this->alarmThreshold_ = nullptr;};
      inline string getAlarmThreshold() const { DARABONBA_PTR_GET_DEFAULT(alarmThreshold_, "") };
      inline Data& setAlarmThreshold(string alarmThreshold) { DARABONBA_PTR_SET_VALUE(alarmThreshold_, alarmThreshold) };


      // availableCredit Field Functions 
      bool hasAvailableCredit() const { return this->availableCredit_ != nullptr;};
      void deleteAvailableCredit() { this->availableCredit_ = nullptr;};
      inline string getAvailableCredit() const { DARABONBA_PTR_GET_DEFAULT(availableCredit_, "") };
      inline Data& setAvailableCredit(string availableCredit) { DARABONBA_PTR_SET_VALUE(availableCredit_, availableCredit) };


      // consumedUndeductedValue Field Functions 
      bool hasConsumedUndeductedValue() const { return this->consumedUndeductedValue_ != nullptr;};
      void deleteConsumedUndeductedValue() { this->consumedUndeductedValue_ = nullptr;};
      inline string getConsumedUndeductedValue() const { DARABONBA_PTR_GET_DEFAULT(consumedUndeductedValue_, "") };
      inline Data& setConsumedUndeductedValue(string consumedUndeductedValue) { DARABONBA_PTR_SET_VALUE(consumedUndeductedValue_, consumedUndeductedValue) };


      // creditLine Field Functions 
      bool hasCreditLine() const { return this->creditLine_ != nullptr;};
      void deleteCreditLine() { this->creditLine_ = nullptr;};
      inline string getCreditLine() const { DARABONBA_PTR_GET_DEFAULT(creditLine_, "") };
      inline Data& setCreditLine(string creditLine) { DARABONBA_PTR_SET_VALUE(creditLine_, creditLine) };


      // outstandingBalance Field Functions 
      bool hasOutstandingBalance() const { return this->outstandingBalance_ != nullptr;};
      void deleteOutstandingBalance() { this->outstandingBalance_ = nullptr;};
      inline string getOutstandingBalance() const { DARABONBA_PTR_GET_DEFAULT(outstandingBalance_, "") };
      inline Data& setOutstandingBalance(string outstandingBalance) { DARABONBA_PTR_SET_VALUE(outstandingBalance_, outstandingBalance) };


      // PAYGFreezeStatus Field Functions 
      bool hasPAYGFreezeStatus() const { return this->PAYGFreezeStatus_ != nullptr;};
      void deletePAYGFreezeStatus() { this->PAYGFreezeStatus_ = nullptr;};
      inline string getPAYGFreezeStatus() const { DARABONBA_PTR_GET_DEFAULT(PAYGFreezeStatus_, "") };
      inline Data& setPAYGFreezeStatus(string PAYGFreezeStatus) { DARABONBA_PTR_SET_VALUE(PAYGFreezeStatus_, PAYGFreezeStatus) };


      // zeroCreditShutdownPolicy Field Functions 
      bool hasZeroCreditShutdownPolicy() const { return this->zeroCreditShutdownPolicy_ != nullptr;};
      void deleteZeroCreditShutdownPolicy() { this->zeroCreditShutdownPolicy_ = nullptr;};
      inline string getZeroCreditShutdownPolicy() const { DARABONBA_PTR_GET_DEFAULT(zeroCreditShutdownPolicy_, "") };
      inline Data& setZeroCreditShutdownPolicy(string zeroCreditShutdownPolicy) { DARABONBA_PTR_SET_VALUE(zeroCreditShutdownPolicy_, zeroCreditShutdownPolicy) };


      // newBuyStatus Field Functions 
      bool hasNewBuyStatus() const { return this->newBuyStatus_ != nullptr;};
      void deleteNewBuyStatus() { this->newBuyStatus_ = nullptr;};
      inline string getNewBuyStatus() const { DARABONBA_PTR_GET_DEFAULT(newBuyStatus_, "") };
      inline Data& setNewBuyStatus(string newBuyStatus) { DARABONBA_PTR_SET_VALUE(newBuyStatus_, newBuyStatus) };


    protected:
      // The credit control status of the sub-account. Valid values:
      // 1. normal: Normal.
      // 2. arrearsNotShutdown: The account has an overdue payment but is not shut down.
      // 3. shutdown: Shut down.
      shared_ptr<string> accountStatus_ {};
      // The percentage value. When the available credit drops below this percentage of the credit limit, an email notification is sent to the main account.
      shared_ptr<string> alarmThreshold_ {};
      // The available credit.
      shared_ptr<string> availableCredit_ {};
      // The total outstanding amount of virtual bills before simulated deduction.
      shared_ptr<string> consumedUndeductedValue_ {};
      // The credit limit of the sub-account.
      shared_ptr<string> creditLine_ {};
      // The credit amount consumed by the sub-account that has not yet been paid.
      shared_ptr<string> outstandingBalance_ {};
      // The freeze status of pay-as-you-go. Valid values:
      // - freeze: Frozen.
      // - normal: Normal.
      shared_ptr<string> PAYGFreezeStatus_ {};
      // The policy that the system uses to manage resources when the active credit is 0 or less. Valid values:
      // 
      // 1: delayStop. Alibaba Cloud takes over the resources. Instances are shut down after the credit is exhausted with a delay epoch. If payment is not made within 15 days, storage resources are released.
      // 
      // 2: noStop. The system does not manage the resource lifecycle of the non-trusteeship linked account. The partner must manage it manually.
      // 
      // 3: immediatelyStop. Instances are shut down immediately when the account enters the overdue payment state, which triggers instance shutdown.
      shared_ptr<string> zeroCreditShutdownPolicy_ {};
      // The status that manages the purchase actions of the customer. Valid values:
      // 
      // - ban: New purchases are prohibited.
      // - cancelBan: Normal status.
      shared_ptr<string> newBuyStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCreditInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCreditInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCreditInfoResponseBody::Data) };
    inline GetCreditInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCreditInfoResponseBody::Data) };
    inline GetCreditInfoResponseBody& setData(const GetCreditInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCreditInfoResponseBody& setData(GetCreditInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCreditInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCreditInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCreditInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result code. Valid values:
    // - 200: OK.
    // - 1109: System error.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetCreditInfoResponseBody::Data> data_ {};
    // The message information.
    shared_ptr<string> message_ {};
    // The request ID. Alibaba Cloud uses this ID for error tracking.
    shared_ptr<string> requestId_ {};
    // Indicates whether the current API call is successful. Valid values:
    // - True: Successful.
    // - False: Failed.
    // 
    // This does not indicate whether the subsequent business operation is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
