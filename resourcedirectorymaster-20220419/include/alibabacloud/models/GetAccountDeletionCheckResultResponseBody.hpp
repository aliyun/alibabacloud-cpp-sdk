// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTDELETIONCHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTDELETIONCHECKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetAccountDeletionCheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountDeletionCheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDeletionCheckResultInfo, accountDeletionCheckResultInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountDeletionCheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDeletionCheckResultInfo, accountDeletionCheckResultInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccountDeletionCheckResultResponseBody() = default ;
    GetAccountDeletionCheckResultResponseBody(const GetAccountDeletionCheckResultResponseBody &) = default ;
    GetAccountDeletionCheckResultResponseBody(GetAccountDeletionCheckResultResponseBody &&) = default ;
    GetAccountDeletionCheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountDeletionCheckResultResponseBody() = default ;
    GetAccountDeletionCheckResultResponseBody& operator=(const GetAccountDeletionCheckResultResponseBody &) = default ;
    GetAccountDeletionCheckResultResponseBody& operator=(GetAccountDeletionCheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountDeletionCheckResultInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountDeletionCheckResultInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AbandonableChecks, abandonableChecks_);
        DARABONBA_PTR_TO_JSON(AllowDelete, allowDelete_);
        DARABONBA_PTR_TO_JSON(NotAllowReason, notAllowReason_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, AccountDeletionCheckResultInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AbandonableChecks, abandonableChecks_);
        DARABONBA_PTR_FROM_JSON(AllowDelete, allowDelete_);
        DARABONBA_PTR_FROM_JSON(NotAllowReason, notAllowReason_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      AccountDeletionCheckResultInfo() = default ;
      AccountDeletionCheckResultInfo(const AccountDeletionCheckResultInfo &) = default ;
      AccountDeletionCheckResultInfo(AccountDeletionCheckResultInfo &&) = default ;
      AccountDeletionCheckResultInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountDeletionCheckResultInfo() = default ;
      AccountDeletionCheckResultInfo& operator=(const AccountDeletionCheckResultInfo &) = default ;
      AccountDeletionCheckResultInfo& operator=(AccountDeletionCheckResultInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NotAllowReason : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NotAllowReason& obj) { 
          DARABONBA_PTR_TO_JSON(CheckId, checkId_);
          DARABONBA_PTR_TO_JSON(CheckName, checkName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
        };
        friend void from_json(const Darabonba::Json& j, NotAllowReason& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
          DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
        };
        NotAllowReason() = default ;
        NotAllowReason(const NotAllowReason &) = default ;
        NotAllowReason(NotAllowReason &&) = default ;
        NotAllowReason(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NotAllowReason() = default ;
        NotAllowReason& operator=(const NotAllowReason &) = default ;
        NotAllowReason& operator=(NotAllowReason &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkId_ == nullptr
        && this->checkName_ == nullptr && this->description_ == nullptr; };
        // checkId Field Functions 
        bool hasCheckId() const { return this->checkId_ != nullptr;};
        void deleteCheckId() { this->checkId_ = nullptr;};
        inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
        inline NotAllowReason& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


        // checkName Field Functions 
        bool hasCheckName() const { return this->checkName_ != nullptr;};
        void deleteCheckName() { this->checkName_ = nullptr;};
        inline string getCheckName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
        inline NotAllowReason& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline NotAllowReason& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      protected:
        // The ID of the check item.
        shared_ptr<string> checkId_ {};
        // The name of the cloud service to which the check item belongs.
        shared_ptr<string> checkName_ {};
        // The description of the check item.
        shared_ptr<string> description_ {};
      };

      class AbandonableChecks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AbandonableChecks& obj) { 
          DARABONBA_PTR_TO_JSON(CheckId, checkId_);
          DARABONBA_PTR_TO_JSON(CheckName, checkName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
        };
        friend void from_json(const Darabonba::Json& j, AbandonableChecks& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
          DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
        };
        AbandonableChecks() = default ;
        AbandonableChecks(const AbandonableChecks &) = default ;
        AbandonableChecks(AbandonableChecks &&) = default ;
        AbandonableChecks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AbandonableChecks() = default ;
        AbandonableChecks& operator=(const AbandonableChecks &) = default ;
        AbandonableChecks& operator=(AbandonableChecks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkId_ == nullptr
        && this->checkName_ == nullptr && this->description_ == nullptr; };
        // checkId Field Functions 
        bool hasCheckId() const { return this->checkId_ != nullptr;};
        void deleteCheckId() { this->checkId_ = nullptr;};
        inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
        inline AbandonableChecks& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


        // checkName Field Functions 
        bool hasCheckName() const { return this->checkName_ != nullptr;};
        void deleteCheckName() { this->checkName_ = nullptr;};
        inline string getCheckName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
        inline AbandonableChecks& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AbandonableChecks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      protected:
        // The ID of the check item.
        shared_ptr<string> checkId_ {};
        // The name of the cloud service to which the check item belongs.
        shared_ptr<string> checkName_ {};
        // The description of the check item.
        shared_ptr<string> description_ {};
      };

      virtual bool empty() const override { return this->abandonableChecks_ == nullptr
        && this->allowDelete_ == nullptr && this->notAllowReason_ == nullptr && this->status_ == nullptr; };
      // abandonableChecks Field Functions 
      bool hasAbandonableChecks() const { return this->abandonableChecks_ != nullptr;};
      void deleteAbandonableChecks() { this->abandonableChecks_ = nullptr;};
      inline const vector<AccountDeletionCheckResultInfo::AbandonableChecks> & getAbandonableChecks() const { DARABONBA_PTR_GET_CONST(abandonableChecks_, vector<AccountDeletionCheckResultInfo::AbandonableChecks>) };
      inline vector<AccountDeletionCheckResultInfo::AbandonableChecks> getAbandonableChecks() { DARABONBA_PTR_GET(abandonableChecks_, vector<AccountDeletionCheckResultInfo::AbandonableChecks>) };
      inline AccountDeletionCheckResultInfo& setAbandonableChecks(const vector<AccountDeletionCheckResultInfo::AbandonableChecks> & abandonableChecks) { DARABONBA_PTR_SET_VALUE(abandonableChecks_, abandonableChecks) };
      inline AccountDeletionCheckResultInfo& setAbandonableChecks(vector<AccountDeletionCheckResultInfo::AbandonableChecks> && abandonableChecks) { DARABONBA_PTR_SET_RVALUE(abandonableChecks_, abandonableChecks) };


      // allowDelete Field Functions 
      bool hasAllowDelete() const { return this->allowDelete_ != nullptr;};
      void deleteAllowDelete() { this->allowDelete_ = nullptr;};
      inline string getAllowDelete() const { DARABONBA_PTR_GET_DEFAULT(allowDelete_, "") };
      inline AccountDeletionCheckResultInfo& setAllowDelete(string allowDelete) { DARABONBA_PTR_SET_VALUE(allowDelete_, allowDelete) };


      // notAllowReason Field Functions 
      bool hasNotAllowReason() const { return this->notAllowReason_ != nullptr;};
      void deleteNotAllowReason() { this->notAllowReason_ = nullptr;};
      inline const vector<AccountDeletionCheckResultInfo::NotAllowReason> & getNotAllowReason() const { DARABONBA_PTR_GET_CONST(notAllowReason_, vector<AccountDeletionCheckResultInfo::NotAllowReason>) };
      inline vector<AccountDeletionCheckResultInfo::NotAllowReason> getNotAllowReason() { DARABONBA_PTR_GET(notAllowReason_, vector<AccountDeletionCheckResultInfo::NotAllowReason>) };
      inline AccountDeletionCheckResultInfo& setNotAllowReason(const vector<AccountDeletionCheckResultInfo::NotAllowReason> & notAllowReason) { DARABONBA_PTR_SET_VALUE(notAllowReason_, notAllowReason) };
      inline AccountDeletionCheckResultInfo& setNotAllowReason(vector<AccountDeletionCheckResultInfo::NotAllowReason> && notAllowReason) { DARABONBA_PTR_SET_RVALUE(notAllowReason_, notAllowReason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AccountDeletionCheckResultInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The check items that you can choose to ignore for the member deletion.
      // 
      // > This parameter may be returned if the value of AllowDelete is true.
      shared_ptr<vector<AccountDeletionCheckResultInfo::AbandonableChecks>> abandonableChecks_ {};
      // Indicates whether the member can be deleted. Valid values:
      // 
      // *   true: The member can be deleted.
      // *   false: The member cannot be deleted.
      shared_ptr<string> allowDelete_ {};
      // The reasons why the member cannot be deleted.
      // 
      // > This parameter is returned only if the value of AllowDelete is false.
      shared_ptr<vector<AccountDeletionCheckResultInfo::NotAllowReason>> notAllowReason_ {};
      // The status of the check. Valid values:
      // 
      // *   PreCheckComplete: The check is complete.
      // *   PreChecking: The check is in progress.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accountDeletionCheckResultInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // accountDeletionCheckResultInfo Field Functions 
    bool hasAccountDeletionCheckResultInfo() const { return this->accountDeletionCheckResultInfo_ != nullptr;};
    void deleteAccountDeletionCheckResultInfo() { this->accountDeletionCheckResultInfo_ = nullptr;};
    inline const GetAccountDeletionCheckResultResponseBody::AccountDeletionCheckResultInfo & getAccountDeletionCheckResultInfo() const { DARABONBA_PTR_GET_CONST(accountDeletionCheckResultInfo_, GetAccountDeletionCheckResultResponseBody::AccountDeletionCheckResultInfo) };
    inline GetAccountDeletionCheckResultResponseBody::AccountDeletionCheckResultInfo getAccountDeletionCheckResultInfo() { DARABONBA_PTR_GET(accountDeletionCheckResultInfo_, GetAccountDeletionCheckResultResponseBody::AccountDeletionCheckResultInfo) };
    inline GetAccountDeletionCheckResultResponseBody& setAccountDeletionCheckResultInfo(const GetAccountDeletionCheckResultResponseBody::AccountDeletionCheckResultInfo & accountDeletionCheckResultInfo) { DARABONBA_PTR_SET_VALUE(accountDeletionCheckResultInfo_, accountDeletionCheckResultInfo) };
    inline GetAccountDeletionCheckResultResponseBody& setAccountDeletionCheckResultInfo(GetAccountDeletionCheckResultResponseBody::AccountDeletionCheckResultInfo && accountDeletionCheckResultInfo) { DARABONBA_PTR_SET_RVALUE(accountDeletionCheckResultInfo_, accountDeletionCheckResultInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountDeletionCheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result of the deletion check for the member.
    shared_ptr<GetAccountDeletionCheckResultResponseBody::AccountDeletionCheckResultInfo> accountDeletionCheckResultInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
