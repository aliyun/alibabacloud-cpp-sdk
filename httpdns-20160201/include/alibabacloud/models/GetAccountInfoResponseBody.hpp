// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class GetAccountInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountInfo, accountInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountInfo, accountInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccountInfoResponseBody() = default ;
    GetAccountInfoResponseBody(const GetAccountInfoResponseBody &) = default ;
    GetAccountInfoResponseBody(GetAccountInfoResponseBody &&) = default ;
    GetAccountInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountInfoResponseBody() = default ;
    GetAccountInfoResponseBody& operator=(const GetAccountInfoResponseBody &) = default ;
    GetAccountInfoResponseBody& operator=(GetAccountInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(DohEnabled, dohEnabled_);
        DARABONBA_PTR_TO_JSON(DohResolveAllEnabled, dohResolveAllEnabled_);
        DARABONBA_PTR_TO_JSON(MonthDohResolveCount, monthDohResolveCount_);
        DARABONBA_PTR_TO_JSON(MonthFreeCount, monthFreeCount_);
        DARABONBA_PTR_TO_JSON(MonthHttpAesResolveCount, monthHttpAesResolveCount_);
        DARABONBA_PTR_TO_JSON(MonthHttpsAesResolveCount, monthHttpsAesResolveCount_);
        DARABONBA_PTR_TO_JSON(MonthHttpsResolveCount, monthHttpsResolveCount_);
        DARABONBA_PTR_TO_JSON(MonthResolveCount, monthResolveCount_);
        DARABONBA_PTR_TO_JSON(PackageCount, packageCount_);
        DARABONBA_PTR_TO_JSON(SignSecret, signSecret_);
        DARABONBA_PTR_TO_JSON(SignedCount, signedCount_);
        DARABONBA_PTR_TO_JSON(UnsignedCount, unsignedCount_);
        DARABONBA_PTR_TO_JSON(UnsignedEnabled, unsignedEnabled_);
        DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
      };
      friend void from_json(const Darabonba::Json& j, AccountInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(DohEnabled, dohEnabled_);
        DARABONBA_PTR_FROM_JSON(DohResolveAllEnabled, dohResolveAllEnabled_);
        DARABONBA_PTR_FROM_JSON(MonthDohResolveCount, monthDohResolveCount_);
        DARABONBA_PTR_FROM_JSON(MonthFreeCount, monthFreeCount_);
        DARABONBA_PTR_FROM_JSON(MonthHttpAesResolveCount, monthHttpAesResolveCount_);
        DARABONBA_PTR_FROM_JSON(MonthHttpsAesResolveCount, monthHttpsAesResolveCount_);
        DARABONBA_PTR_FROM_JSON(MonthHttpsResolveCount, monthHttpsResolveCount_);
        DARABONBA_PTR_FROM_JSON(MonthResolveCount, monthResolveCount_);
        DARABONBA_PTR_FROM_JSON(PackageCount, packageCount_);
        DARABONBA_PTR_FROM_JSON(SignSecret, signSecret_);
        DARABONBA_PTR_FROM_JSON(SignedCount, signedCount_);
        DARABONBA_PTR_FROM_JSON(UnsignedCount, unsignedCount_);
        DARABONBA_PTR_FROM_JSON(UnsignedEnabled, unsignedEnabled_);
        DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
      };
      AccountInfo() = default ;
      AccountInfo(const AccountInfo &) = default ;
      AccountInfo(AccountInfo &&) = default ;
      AccountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountInfo() = default ;
      AccountInfo& operator=(const AccountInfo &) = default ;
      AccountInfo& operator=(AccountInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->dohEnabled_ == nullptr && this->dohResolveAllEnabled_ == nullptr && this->monthDohResolveCount_ == nullptr && this->monthFreeCount_ == nullptr && this->monthHttpAesResolveCount_ == nullptr
        && this->monthHttpsAesResolveCount_ == nullptr && this->monthHttpsResolveCount_ == nullptr && this->monthResolveCount_ == nullptr && this->packageCount_ == nullptr && this->signSecret_ == nullptr
        && this->signedCount_ == nullptr && this->unsignedCount_ == nullptr && this->unsignedEnabled_ == nullptr && this->userStatus_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline AccountInfo& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // dohEnabled Field Functions 
      bool hasDohEnabled() const { return this->dohEnabled_ != nullptr;};
      void deleteDohEnabled() { this->dohEnabled_ = nullptr;};
      inline bool getDohEnabled() const { DARABONBA_PTR_GET_DEFAULT(dohEnabled_, false) };
      inline AccountInfo& setDohEnabled(bool dohEnabled) { DARABONBA_PTR_SET_VALUE(dohEnabled_, dohEnabled) };


      // dohResolveAllEnabled Field Functions 
      bool hasDohResolveAllEnabled() const { return this->dohResolveAllEnabled_ != nullptr;};
      void deleteDohResolveAllEnabled() { this->dohResolveAllEnabled_ = nullptr;};
      inline bool getDohResolveAllEnabled() const { DARABONBA_PTR_GET_DEFAULT(dohResolveAllEnabled_, false) };
      inline AccountInfo& setDohResolveAllEnabled(bool dohResolveAllEnabled) { DARABONBA_PTR_SET_VALUE(dohResolveAllEnabled_, dohResolveAllEnabled) };


      // monthDohResolveCount Field Functions 
      bool hasMonthDohResolveCount() const { return this->monthDohResolveCount_ != nullptr;};
      void deleteMonthDohResolveCount() { this->monthDohResolveCount_ = nullptr;};
      inline int64_t getMonthDohResolveCount() const { DARABONBA_PTR_GET_DEFAULT(monthDohResolveCount_, 0L) };
      inline AccountInfo& setMonthDohResolveCount(int64_t monthDohResolveCount) { DARABONBA_PTR_SET_VALUE(monthDohResolveCount_, monthDohResolveCount) };


      // monthFreeCount Field Functions 
      bool hasMonthFreeCount() const { return this->monthFreeCount_ != nullptr;};
      void deleteMonthFreeCount() { this->monthFreeCount_ = nullptr;};
      inline int32_t getMonthFreeCount() const { DARABONBA_PTR_GET_DEFAULT(monthFreeCount_, 0) };
      inline AccountInfo& setMonthFreeCount(int32_t monthFreeCount) { DARABONBA_PTR_SET_VALUE(monthFreeCount_, monthFreeCount) };


      // monthHttpAesResolveCount Field Functions 
      bool hasMonthHttpAesResolveCount() const { return this->monthHttpAesResolveCount_ != nullptr;};
      void deleteMonthHttpAesResolveCount() { this->monthHttpAesResolveCount_ = nullptr;};
      inline int64_t getMonthHttpAesResolveCount() const { DARABONBA_PTR_GET_DEFAULT(monthHttpAesResolveCount_, 0L) };
      inline AccountInfo& setMonthHttpAesResolveCount(int64_t monthHttpAesResolveCount) { DARABONBA_PTR_SET_VALUE(monthHttpAesResolveCount_, monthHttpAesResolveCount) };


      // monthHttpsAesResolveCount Field Functions 
      bool hasMonthHttpsAesResolveCount() const { return this->monthHttpsAesResolveCount_ != nullptr;};
      void deleteMonthHttpsAesResolveCount() { this->monthHttpsAesResolveCount_ = nullptr;};
      inline int64_t getMonthHttpsAesResolveCount() const { DARABONBA_PTR_GET_DEFAULT(monthHttpsAesResolveCount_, 0L) };
      inline AccountInfo& setMonthHttpsAesResolveCount(int64_t monthHttpsAesResolveCount) { DARABONBA_PTR_SET_VALUE(monthHttpsAesResolveCount_, monthHttpsAesResolveCount) };


      // monthHttpsResolveCount Field Functions 
      bool hasMonthHttpsResolveCount() const { return this->monthHttpsResolveCount_ != nullptr;};
      void deleteMonthHttpsResolveCount() { this->monthHttpsResolveCount_ = nullptr;};
      inline int32_t getMonthHttpsResolveCount() const { DARABONBA_PTR_GET_DEFAULT(monthHttpsResolveCount_, 0) };
      inline AccountInfo& setMonthHttpsResolveCount(int32_t monthHttpsResolveCount) { DARABONBA_PTR_SET_VALUE(monthHttpsResolveCount_, monthHttpsResolveCount) };


      // monthResolveCount Field Functions 
      bool hasMonthResolveCount() const { return this->monthResolveCount_ != nullptr;};
      void deleteMonthResolveCount() { this->monthResolveCount_ = nullptr;};
      inline int32_t getMonthResolveCount() const { DARABONBA_PTR_GET_DEFAULT(monthResolveCount_, 0) };
      inline AccountInfo& setMonthResolveCount(int32_t monthResolveCount) { DARABONBA_PTR_SET_VALUE(monthResolveCount_, monthResolveCount) };


      // packageCount Field Functions 
      bool hasPackageCount() const { return this->packageCount_ != nullptr;};
      void deletePackageCount() { this->packageCount_ = nullptr;};
      inline int32_t getPackageCount() const { DARABONBA_PTR_GET_DEFAULT(packageCount_, 0) };
      inline AccountInfo& setPackageCount(int32_t packageCount) { DARABONBA_PTR_SET_VALUE(packageCount_, packageCount) };


      // signSecret Field Functions 
      bool hasSignSecret() const { return this->signSecret_ != nullptr;};
      void deleteSignSecret() { this->signSecret_ = nullptr;};
      inline string getSignSecret() const { DARABONBA_PTR_GET_DEFAULT(signSecret_, "") };
      inline AccountInfo& setSignSecret(string signSecret) { DARABONBA_PTR_SET_VALUE(signSecret_, signSecret) };


      // signedCount Field Functions 
      bool hasSignedCount() const { return this->signedCount_ != nullptr;};
      void deleteSignedCount() { this->signedCount_ = nullptr;};
      inline int64_t getSignedCount() const { DARABONBA_PTR_GET_DEFAULT(signedCount_, 0L) };
      inline AccountInfo& setSignedCount(int64_t signedCount) { DARABONBA_PTR_SET_VALUE(signedCount_, signedCount) };


      // unsignedCount Field Functions 
      bool hasUnsignedCount() const { return this->unsignedCount_ != nullptr;};
      void deleteUnsignedCount() { this->unsignedCount_ = nullptr;};
      inline int64_t getUnsignedCount() const { DARABONBA_PTR_GET_DEFAULT(unsignedCount_, 0L) };
      inline AccountInfo& setUnsignedCount(int64_t unsignedCount) { DARABONBA_PTR_SET_VALUE(unsignedCount_, unsignedCount) };


      // unsignedEnabled Field Functions 
      bool hasUnsignedEnabled() const { return this->unsignedEnabled_ != nullptr;};
      void deleteUnsignedEnabled() { this->unsignedEnabled_ = nullptr;};
      inline bool getUnsignedEnabled() const { DARABONBA_PTR_GET_DEFAULT(unsignedEnabled_, false) };
      inline AccountInfo& setUnsignedEnabled(bool unsignedEnabled) { DARABONBA_PTR_SET_VALUE(unsignedEnabled_, unsignedEnabled) };


      // userStatus Field Functions 
      bool hasUserStatus() const { return this->userStatus_ != nullptr;};
      void deleteUserStatus() { this->userStatus_ = nullptr;};
      inline int32_t getUserStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, 0) };
      inline AccountInfo& setUserStatus(int32_t userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


    protected:
      shared_ptr<string> accountId_ {};
      shared_ptr<bool> dohEnabled_ {};
      shared_ptr<bool> dohResolveAllEnabled_ {};
      shared_ptr<int64_t> monthDohResolveCount_ {};
      shared_ptr<int32_t> monthFreeCount_ {};
      shared_ptr<int64_t> monthHttpAesResolveCount_ {};
      shared_ptr<int64_t> monthHttpsAesResolveCount_ {};
      shared_ptr<int32_t> monthHttpsResolveCount_ {};
      shared_ptr<int32_t> monthResolveCount_ {};
      shared_ptr<int32_t> packageCount_ {};
      shared_ptr<string> signSecret_ {};
      shared_ptr<int64_t> signedCount_ {};
      shared_ptr<int64_t> unsignedCount_ {};
      shared_ptr<bool> unsignedEnabled_ {};
      shared_ptr<int32_t> userStatus_ {};
    };

    virtual bool empty() const override { return this->accountInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // accountInfo Field Functions 
    bool hasAccountInfo() const { return this->accountInfo_ != nullptr;};
    void deleteAccountInfo() { this->accountInfo_ = nullptr;};
    inline const GetAccountInfoResponseBody::AccountInfo & getAccountInfo() const { DARABONBA_PTR_GET_CONST(accountInfo_, GetAccountInfoResponseBody::AccountInfo) };
    inline GetAccountInfoResponseBody::AccountInfo getAccountInfo() { DARABONBA_PTR_GET(accountInfo_, GetAccountInfoResponseBody::AccountInfo) };
    inline GetAccountInfoResponseBody& setAccountInfo(const GetAccountInfoResponseBody::AccountInfo & accountInfo) { DARABONBA_PTR_SET_VALUE(accountInfo_, accountInfo) };
    inline GetAccountInfoResponseBody& setAccountInfo(GetAccountInfoResponseBody::AccountInfo && accountInfo) { DARABONBA_PTR_SET_RVALUE(accountInfo_, accountInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetAccountInfoResponseBody::AccountInfo> accountInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
