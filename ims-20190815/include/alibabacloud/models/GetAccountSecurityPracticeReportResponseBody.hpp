// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTSECURITYPRACTICEREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTSECURITYPRACTICEREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccountSecurityPracticeReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountSecurityPracticeReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountSecurityPracticeInfo, accountSecurityPracticeInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountSecurityPracticeReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountSecurityPracticeInfo, accountSecurityPracticeInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccountSecurityPracticeReportResponseBody() = default ;
    GetAccountSecurityPracticeReportResponseBody(const GetAccountSecurityPracticeReportResponseBody &) = default ;
    GetAccountSecurityPracticeReportResponseBody(GetAccountSecurityPracticeReportResponseBody &&) = default ;
    GetAccountSecurityPracticeReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountSecurityPracticeReportResponseBody() = default ;
    GetAccountSecurityPracticeReportResponseBody& operator=(const GetAccountSecurityPracticeReportResponseBody &) = default ;
    GetAccountSecurityPracticeReportResponseBody& operator=(GetAccountSecurityPracticeReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountSecurityPracticeInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountSecurityPracticeInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AccountSecurityPracticeUserInfo, accountSecurityPracticeUserInfo_);
        DARABONBA_PTR_TO_JSON(Score, score_);
      };
      friend void from_json(const Darabonba::Json& j, AccountSecurityPracticeInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountSecurityPracticeUserInfo, accountSecurityPracticeUserInfo_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
      };
      AccountSecurityPracticeInfo() = default ;
      AccountSecurityPracticeInfo(const AccountSecurityPracticeInfo &) = default ;
      AccountSecurityPracticeInfo(AccountSecurityPracticeInfo &&) = default ;
      AccountSecurityPracticeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountSecurityPracticeInfo() = default ;
      AccountSecurityPracticeInfo& operator=(const AccountSecurityPracticeInfo &) = default ;
      AccountSecurityPracticeInfo& operator=(AccountSecurityPracticeInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AccountSecurityPracticeUserInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccountSecurityPracticeUserInfo& obj) { 
          DARABONBA_PTR_TO_JSON(BindMfa, bindMfa_);
          DARABONBA_PTR_TO_JSON(OldAkNum, oldAkNum_);
          DARABONBA_PTR_TO_JSON(RootWithAccessKey, rootWithAccessKey_);
          DARABONBA_PTR_TO_JSON(SubUser, subUser_);
          DARABONBA_PTR_TO_JSON(SubUserBindMfa, subUserBindMfa_);
          DARABONBA_PTR_TO_JSON(SubUserPwdLevel, subUserPwdLevel_);
          DARABONBA_PTR_TO_JSON(SubUserWithOldAccessKey, subUserWithOldAccessKey_);
          DARABONBA_PTR_TO_JSON(SubUserWithUnusedAccessKey, subUserWithUnusedAccessKey_);
          DARABONBA_PTR_TO_JSON(UnusedAkNum, unusedAkNum_);
        };
        friend void from_json(const Darabonba::Json& j, AccountSecurityPracticeUserInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(BindMfa, bindMfa_);
          DARABONBA_PTR_FROM_JSON(OldAkNum, oldAkNum_);
          DARABONBA_PTR_FROM_JSON(RootWithAccessKey, rootWithAccessKey_);
          DARABONBA_PTR_FROM_JSON(SubUser, subUser_);
          DARABONBA_PTR_FROM_JSON(SubUserBindMfa, subUserBindMfa_);
          DARABONBA_PTR_FROM_JSON(SubUserPwdLevel, subUserPwdLevel_);
          DARABONBA_PTR_FROM_JSON(SubUserWithOldAccessKey, subUserWithOldAccessKey_);
          DARABONBA_PTR_FROM_JSON(SubUserWithUnusedAccessKey, subUserWithUnusedAccessKey_);
          DARABONBA_PTR_FROM_JSON(UnusedAkNum, unusedAkNum_);
        };
        AccountSecurityPracticeUserInfo() = default ;
        AccountSecurityPracticeUserInfo(const AccountSecurityPracticeUserInfo &) = default ;
        AccountSecurityPracticeUserInfo(AccountSecurityPracticeUserInfo &&) = default ;
        AccountSecurityPracticeUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccountSecurityPracticeUserInfo() = default ;
        AccountSecurityPracticeUserInfo& operator=(const AccountSecurityPracticeUserInfo &) = default ;
        AccountSecurityPracticeUserInfo& operator=(AccountSecurityPracticeUserInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindMfa_ == nullptr
        && this->oldAkNum_ == nullptr && this->rootWithAccessKey_ == nullptr && this->subUser_ == nullptr && this->subUserBindMfa_ == nullptr && this->subUserPwdLevel_ == nullptr
        && this->subUserWithOldAccessKey_ == nullptr && this->subUserWithUnusedAccessKey_ == nullptr && this->unusedAkNum_ == nullptr; };
        // bindMfa Field Functions 
        bool hasBindMfa() const { return this->bindMfa_ != nullptr;};
        void deleteBindMfa() { this->bindMfa_ = nullptr;};
        inline bool getBindMfa() const { DARABONBA_PTR_GET_DEFAULT(bindMfa_, false) };
        inline AccountSecurityPracticeUserInfo& setBindMfa(bool bindMfa) { DARABONBA_PTR_SET_VALUE(bindMfa_, bindMfa) };


        // oldAkNum Field Functions 
        bool hasOldAkNum() const { return this->oldAkNum_ != nullptr;};
        void deleteOldAkNum() { this->oldAkNum_ = nullptr;};
        inline int32_t getOldAkNum() const { DARABONBA_PTR_GET_DEFAULT(oldAkNum_, 0) };
        inline AccountSecurityPracticeUserInfo& setOldAkNum(int32_t oldAkNum) { DARABONBA_PTR_SET_VALUE(oldAkNum_, oldAkNum) };


        // rootWithAccessKey Field Functions 
        bool hasRootWithAccessKey() const { return this->rootWithAccessKey_ != nullptr;};
        void deleteRootWithAccessKey() { this->rootWithAccessKey_ = nullptr;};
        inline int32_t getRootWithAccessKey() const { DARABONBA_PTR_GET_DEFAULT(rootWithAccessKey_, 0) };
        inline AccountSecurityPracticeUserInfo& setRootWithAccessKey(int32_t rootWithAccessKey) { DARABONBA_PTR_SET_VALUE(rootWithAccessKey_, rootWithAccessKey) };


        // subUser Field Functions 
        bool hasSubUser() const { return this->subUser_ != nullptr;};
        void deleteSubUser() { this->subUser_ = nullptr;};
        inline int32_t getSubUser() const { DARABONBA_PTR_GET_DEFAULT(subUser_, 0) };
        inline AccountSecurityPracticeUserInfo& setSubUser(int32_t subUser) { DARABONBA_PTR_SET_VALUE(subUser_, subUser) };


        // subUserBindMfa Field Functions 
        bool hasSubUserBindMfa() const { return this->subUserBindMfa_ != nullptr;};
        void deleteSubUserBindMfa() { this->subUserBindMfa_ = nullptr;};
        inline int32_t getSubUserBindMfa() const { DARABONBA_PTR_GET_DEFAULT(subUserBindMfa_, 0) };
        inline AccountSecurityPracticeUserInfo& setSubUserBindMfa(int32_t subUserBindMfa) { DARABONBA_PTR_SET_VALUE(subUserBindMfa_, subUserBindMfa) };


        // subUserPwdLevel Field Functions 
        bool hasSubUserPwdLevel() const { return this->subUserPwdLevel_ != nullptr;};
        void deleteSubUserPwdLevel() { this->subUserPwdLevel_ = nullptr;};
        inline string getSubUserPwdLevel() const { DARABONBA_PTR_GET_DEFAULT(subUserPwdLevel_, "") };
        inline AccountSecurityPracticeUserInfo& setSubUserPwdLevel(string subUserPwdLevel) { DARABONBA_PTR_SET_VALUE(subUserPwdLevel_, subUserPwdLevel) };


        // subUserWithOldAccessKey Field Functions 
        bool hasSubUserWithOldAccessKey() const { return this->subUserWithOldAccessKey_ != nullptr;};
        void deleteSubUserWithOldAccessKey() { this->subUserWithOldAccessKey_ = nullptr;};
        inline int32_t getSubUserWithOldAccessKey() const { DARABONBA_PTR_GET_DEFAULT(subUserWithOldAccessKey_, 0) };
        inline AccountSecurityPracticeUserInfo& setSubUserWithOldAccessKey(int32_t subUserWithOldAccessKey) { DARABONBA_PTR_SET_VALUE(subUserWithOldAccessKey_, subUserWithOldAccessKey) };


        // subUserWithUnusedAccessKey Field Functions 
        bool hasSubUserWithUnusedAccessKey() const { return this->subUserWithUnusedAccessKey_ != nullptr;};
        void deleteSubUserWithUnusedAccessKey() { this->subUserWithUnusedAccessKey_ = nullptr;};
        inline int32_t getSubUserWithUnusedAccessKey() const { DARABONBA_PTR_GET_DEFAULT(subUserWithUnusedAccessKey_, 0) };
        inline AccountSecurityPracticeUserInfo& setSubUserWithUnusedAccessKey(int32_t subUserWithUnusedAccessKey) { DARABONBA_PTR_SET_VALUE(subUserWithUnusedAccessKey_, subUserWithUnusedAccessKey) };


        // unusedAkNum Field Functions 
        bool hasUnusedAkNum() const { return this->unusedAkNum_ != nullptr;};
        void deleteUnusedAkNum() { this->unusedAkNum_ = nullptr;};
        inline int32_t getUnusedAkNum() const { DARABONBA_PTR_GET_DEFAULT(unusedAkNum_, 0) };
        inline AccountSecurityPracticeUserInfo& setUnusedAkNum(int32_t unusedAkNum) { DARABONBA_PTR_SET_VALUE(unusedAkNum_, unusedAkNum) };


      protected:
        // Indicates whether multi-factor authentication (MFA) is enabled. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> bindMfa_ {};
        // The number of old AccessKey pairs for the Alibaba Cloud account.
        shared_ptr<int32_t> oldAkNum_ {};
        // The number of AccessKey pairs for the Alibaba Cloud account.
        shared_ptr<int32_t> rootWithAccessKey_ {};
        // The number of RAM users within the Alibaba Cloud account.
        shared_ptr<int32_t> subUser_ {};
        // The number of RAM users that have MFA devices bound.
        shared_ptr<int32_t> subUserBindMfa_ {};
        // The complexity level of the password for the RAM user. Valid values:
        // 
        // *   low
        // *   mid
        // *   high
        shared_ptr<string> subUserPwdLevel_ {};
        // The number of RAM users that use the old AccessKey pairs.
        shared_ptr<int32_t> subUserWithOldAccessKey_ {};
        // The number of Resource Access Management (RAM) users that have unused AccessKey pairs.
        shared_ptr<int32_t> subUserWithUnusedAccessKey_ {};
        // The number of AccessKey pairs that are not used for the Alibaba Cloud account.
        shared_ptr<int32_t> unusedAkNum_ {};
      };

      virtual bool empty() const override { return this->accountSecurityPracticeUserInfo_ == nullptr
        && this->score_ == nullptr; };
      // accountSecurityPracticeUserInfo Field Functions 
      bool hasAccountSecurityPracticeUserInfo() const { return this->accountSecurityPracticeUserInfo_ != nullptr;};
      void deleteAccountSecurityPracticeUserInfo() { this->accountSecurityPracticeUserInfo_ = nullptr;};
      inline const AccountSecurityPracticeInfo::AccountSecurityPracticeUserInfo & getAccountSecurityPracticeUserInfo() const { DARABONBA_PTR_GET_CONST(accountSecurityPracticeUserInfo_, AccountSecurityPracticeInfo::AccountSecurityPracticeUserInfo) };
      inline AccountSecurityPracticeInfo::AccountSecurityPracticeUserInfo getAccountSecurityPracticeUserInfo() { DARABONBA_PTR_GET(accountSecurityPracticeUserInfo_, AccountSecurityPracticeInfo::AccountSecurityPracticeUserInfo) };
      inline AccountSecurityPracticeInfo& setAccountSecurityPracticeUserInfo(const AccountSecurityPracticeInfo::AccountSecurityPracticeUserInfo & accountSecurityPracticeUserInfo) { DARABONBA_PTR_SET_VALUE(accountSecurityPracticeUserInfo_, accountSecurityPracticeUserInfo) };
      inline AccountSecurityPracticeInfo& setAccountSecurityPracticeUserInfo(AccountSecurityPracticeInfo::AccountSecurityPracticeUserInfo && accountSecurityPracticeUserInfo) { DARABONBA_PTR_SET_RVALUE(accountSecurityPracticeUserInfo_, accountSecurityPracticeUserInfo) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
      inline AccountSecurityPracticeInfo& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    protected:
      // The information about the security report for the Alibaba Cloud account.
      shared_ptr<AccountSecurityPracticeInfo::AccountSecurityPracticeUserInfo> accountSecurityPracticeUserInfo_ {};
      // The security score of the Alibaba Cloud account.
      shared_ptr<int32_t> score_ {};
    };

    virtual bool empty() const override { return this->accountSecurityPracticeInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // accountSecurityPracticeInfo Field Functions 
    bool hasAccountSecurityPracticeInfo() const { return this->accountSecurityPracticeInfo_ != nullptr;};
    void deleteAccountSecurityPracticeInfo() { this->accountSecurityPracticeInfo_ = nullptr;};
    inline const GetAccountSecurityPracticeReportResponseBody::AccountSecurityPracticeInfo & getAccountSecurityPracticeInfo() const { DARABONBA_PTR_GET_CONST(accountSecurityPracticeInfo_, GetAccountSecurityPracticeReportResponseBody::AccountSecurityPracticeInfo) };
    inline GetAccountSecurityPracticeReportResponseBody::AccountSecurityPracticeInfo getAccountSecurityPracticeInfo() { DARABONBA_PTR_GET(accountSecurityPracticeInfo_, GetAccountSecurityPracticeReportResponseBody::AccountSecurityPracticeInfo) };
    inline GetAccountSecurityPracticeReportResponseBody& setAccountSecurityPracticeInfo(const GetAccountSecurityPracticeReportResponseBody::AccountSecurityPracticeInfo & accountSecurityPracticeInfo) { DARABONBA_PTR_SET_VALUE(accountSecurityPracticeInfo_, accountSecurityPracticeInfo) };
    inline GetAccountSecurityPracticeReportResponseBody& setAccountSecurityPracticeInfo(GetAccountSecurityPracticeReportResponseBody::AccountSecurityPracticeInfo && accountSecurityPracticeInfo) { DARABONBA_PTR_SET_RVALUE(accountSecurityPracticeInfo_, accountSecurityPracticeInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountSecurityPracticeReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the security report for the Alibaba Cloud account.
    shared_ptr<GetAccountSecurityPracticeReportResponseBody::AccountSecurityPracticeInfo> accountSecurityPracticeInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
