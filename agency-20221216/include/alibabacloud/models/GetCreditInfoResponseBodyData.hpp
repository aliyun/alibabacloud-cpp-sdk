// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREDITINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCREDITINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCreditInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCreditInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(AlarmThreshold, alarmThreshold_);
      DARABONBA_PTR_TO_JSON(AvailableCredit, availableCredit_);
      DARABONBA_PTR_TO_JSON(ConsumedUndeductedValue, consumedUndeductedValue_);
      DARABONBA_PTR_TO_JSON(CreditLine, creditLine_);
      DARABONBA_PTR_TO_JSON(OutstandingBalance, outstandingBalance_);
      DARABONBA_PTR_TO_JSON(ZeroCreditShutdownPolicy, zeroCreditShutdownPolicy_);
      DARABONBA_PTR_TO_JSON(newBuyStatus, newBuyStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetCreditInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(AlarmThreshold, alarmThreshold_);
      DARABONBA_PTR_FROM_JSON(AvailableCredit, availableCredit_);
      DARABONBA_PTR_FROM_JSON(ConsumedUndeductedValue, consumedUndeductedValue_);
      DARABONBA_PTR_FROM_JSON(CreditLine, creditLine_);
      DARABONBA_PTR_FROM_JSON(OutstandingBalance, outstandingBalance_);
      DARABONBA_PTR_FROM_JSON(ZeroCreditShutdownPolicy, zeroCreditShutdownPolicy_);
      DARABONBA_PTR_FROM_JSON(newBuyStatus, newBuyStatus_);
    };
    GetCreditInfoResponseBodyData() = default ;
    GetCreditInfoResponseBodyData(const GetCreditInfoResponseBodyData &) = default ;
    GetCreditInfoResponseBodyData(GetCreditInfoResponseBodyData &&) = default ;
    GetCreditInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCreditInfoResponseBodyData() = default ;
    GetCreditInfoResponseBodyData& operator=(const GetCreditInfoResponseBodyData &) = default ;
    GetCreditInfoResponseBodyData& operator=(GetCreditInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountStatus_ == nullptr
        && return this->alarmThreshold_ == nullptr && return this->availableCredit_ == nullptr && return this->consumedUndeductedValue_ == nullptr && return this->creditLine_ == nullptr && return this->outstandingBalance_ == nullptr
        && return this->zeroCreditShutdownPolicy_ == nullptr && return this->newBuyStatus_ == nullptr; };
    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline GetCreditInfoResponseBodyData& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // alarmThreshold Field Functions 
    bool hasAlarmThreshold() const { return this->alarmThreshold_ != nullptr;};
    void deleteAlarmThreshold() { this->alarmThreshold_ = nullptr;};
    inline string alarmThreshold() const { DARABONBA_PTR_GET_DEFAULT(alarmThreshold_, "") };
    inline GetCreditInfoResponseBodyData& setAlarmThreshold(string alarmThreshold) { DARABONBA_PTR_SET_VALUE(alarmThreshold_, alarmThreshold) };


    // availableCredit Field Functions 
    bool hasAvailableCredit() const { return this->availableCredit_ != nullptr;};
    void deleteAvailableCredit() { this->availableCredit_ = nullptr;};
    inline string availableCredit() const { DARABONBA_PTR_GET_DEFAULT(availableCredit_, "") };
    inline GetCreditInfoResponseBodyData& setAvailableCredit(string availableCredit) { DARABONBA_PTR_SET_VALUE(availableCredit_, availableCredit) };


    // consumedUndeductedValue Field Functions 
    bool hasConsumedUndeductedValue() const { return this->consumedUndeductedValue_ != nullptr;};
    void deleteConsumedUndeductedValue() { this->consumedUndeductedValue_ = nullptr;};
    inline string consumedUndeductedValue() const { DARABONBA_PTR_GET_DEFAULT(consumedUndeductedValue_, "") };
    inline GetCreditInfoResponseBodyData& setConsumedUndeductedValue(string consumedUndeductedValue) { DARABONBA_PTR_SET_VALUE(consumedUndeductedValue_, consumedUndeductedValue) };


    // creditLine Field Functions 
    bool hasCreditLine() const { return this->creditLine_ != nullptr;};
    void deleteCreditLine() { this->creditLine_ = nullptr;};
    inline string creditLine() const { DARABONBA_PTR_GET_DEFAULT(creditLine_, "") };
    inline GetCreditInfoResponseBodyData& setCreditLine(string creditLine) { DARABONBA_PTR_SET_VALUE(creditLine_, creditLine) };


    // outstandingBalance Field Functions 
    bool hasOutstandingBalance() const { return this->outstandingBalance_ != nullptr;};
    void deleteOutstandingBalance() { this->outstandingBalance_ = nullptr;};
    inline string outstandingBalance() const { DARABONBA_PTR_GET_DEFAULT(outstandingBalance_, "") };
    inline GetCreditInfoResponseBodyData& setOutstandingBalance(string outstandingBalance) { DARABONBA_PTR_SET_VALUE(outstandingBalance_, outstandingBalance) };


    // zeroCreditShutdownPolicy Field Functions 
    bool hasZeroCreditShutdownPolicy() const { return this->zeroCreditShutdownPolicy_ != nullptr;};
    void deleteZeroCreditShutdownPolicy() { this->zeroCreditShutdownPolicy_ = nullptr;};
    inline string zeroCreditShutdownPolicy() const { DARABONBA_PTR_GET_DEFAULT(zeroCreditShutdownPolicy_, "") };
    inline GetCreditInfoResponseBodyData& setZeroCreditShutdownPolicy(string zeroCreditShutdownPolicy) { DARABONBA_PTR_SET_VALUE(zeroCreditShutdownPolicy_, zeroCreditShutdownPolicy) };


    // newBuyStatus Field Functions 
    bool hasNewBuyStatus() const { return this->newBuyStatus_ != nullptr;};
    void deleteNewBuyStatus() { this->newBuyStatus_ = nullptr;};
    inline string newBuyStatus() const { DARABONBA_PTR_GET_DEFAULT(newBuyStatus_, "") };
    inline GetCreditInfoResponseBodyData& setNewBuyStatus(string newBuyStatus) { DARABONBA_PTR_SET_VALUE(newBuyStatus_, newBuyStatus) };


  protected:
    // The Credit Control status, Value Range:</br>
    // 1. normal - Sub Account status is running as usual.
    // 2. arrearsNotShutdown - Sub Account status is running as usual, but have outstanding bill(s).
    // 3. shutdown -  Sub Account status is down.
    std::shared_ptr<string> accountStatus_ = nullptr;
    // Percentage value, when the available credit limit is lower than this credit limit percentage, a notification E-mail will be sent to the main account.
    std::shared_ptr<string> alarmThreshold_ = nullptr;
    // The Credit available to consume.
    std::shared_ptr<string> availableCredit_ = nullptr;
    // Obtain total unpaid amount on demo bill before simulated deduction.
    std::shared_ptr<string> consumedUndeductedValue_ = nullptr;
    // The Credit Line of Sub Account
    std::shared_ptr<string> creditLine_ = nullptr;
    // The Credit have been consumed by Sub Account, and haven\\"t be paid.
    std::shared_ptr<string> outstandingBalance_ = nullptr;
    // The systematic controlling policy for resource management, specifically when the available Credit of Sub Account falls to 0 or less.</br>
    // 
    // - 1: delayStop. The account have Shutdown-delay Privilege,  After Shutdown-delay Credit is ran out, Alibaba Cloud will take over resources and keep the instance for 15 days. In addition, the instance will be released if Sub Account failed to pay the bill within these 15 days.</br>
    // - 2: noStop. Partner will manually manage Shutdown Status for Sub Account. Meanwhile, System would not manage the resource\\"s life-circle of Sub Account.</br>
    // - 3: immediatelyStop. Once valid quota of Sub Account falls below 0 and be identified as defaulting account, it will trigger the instance shutdown immediately.</br>
    std::shared_ptr<string> zeroCreditShutdownPolicy_ = nullptr;
    // Manage order operation.
    // - ban：Ban the new purchase action.
    // - normal：The account could raise new purchase order as usual.
    std::shared_ptr<string> newBuyStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
