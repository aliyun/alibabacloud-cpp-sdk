// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEMBERACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEMBERACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeMemberAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMemberAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountInfos, accountInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMemberAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountInfos, accountInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMemberAccountsResponseBody() = default ;
    DescribeMemberAccountsResponseBody(const DescribeMemberAccountsResponseBody &) = default ;
    DescribeMemberAccountsResponseBody(DescribeMemberAccountsResponseBody &&) = default ;
    DescribeMemberAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMemberAccountsResponseBody() = default ;
    DescribeMemberAccountsResponseBody& operator=(const DescribeMemberAccountsResponseBody &) = default ;
    DescribeMemberAccountsResponseBody& operator=(DescribeMemberAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      };
      friend void from_json(const Darabonba::Json& j, AccountInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      };
      AccountInfos() = default ;
      AccountInfos(const AccountInfos &) = default ;
      AccountInfos(AccountInfos &&) = default ;
      AccountInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountInfos() = default ;
      AccountInfos& operator=(const AccountInfos &) = default ;
      AccountInfos& operator=(AccountInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->accountStatus_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline AccountInfos& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline AccountInfos& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // accountStatus Field Functions 
      bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
      void deleteAccountStatus() { this->accountStatus_ = nullptr;};
      inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
      inline AccountInfos& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AccountInfos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline AccountInfos& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    protected:
      // The ID of the member.
      shared_ptr<string> accountId_ {};
      // The name of the member.
      shared_ptr<string> accountName_ {};
      // The status of the member.
      // 
      // *   **enabled**: managed.
      // *   **disabled**: not managed.
      // *   **disabling**: being deleted.
      shared_ptr<string> accountStatus_ {};
      // The description of the member.
      shared_ptr<string> description_ {};
      // The time when the member was added.
      shared_ptr<int64_t> gmtCreate_ {};
    };

    virtual bool empty() const override { return this->accountInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // accountInfos Field Functions 
    bool hasAccountInfos() const { return this->accountInfos_ != nullptr;};
    void deleteAccountInfos() { this->accountInfos_ = nullptr;};
    inline const vector<DescribeMemberAccountsResponseBody::AccountInfos> & getAccountInfos() const { DARABONBA_PTR_GET_CONST(accountInfos_, vector<DescribeMemberAccountsResponseBody::AccountInfos>) };
    inline vector<DescribeMemberAccountsResponseBody::AccountInfos> getAccountInfos() { DARABONBA_PTR_GET(accountInfos_, vector<DescribeMemberAccountsResponseBody::AccountInfos>) };
    inline DescribeMemberAccountsResponseBody& setAccountInfos(const vector<DescribeMemberAccountsResponseBody::AccountInfos> & accountInfos) { DARABONBA_PTR_SET_VALUE(accountInfos_, accountInfos) };
    inline DescribeMemberAccountsResponseBody& setAccountInfos(vector<DescribeMemberAccountsResponseBody::AccountInfos> && accountInfos) { DARABONBA_PTR_SET_RVALUE(accountInfos_, accountInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMemberAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the member.
    shared_ptr<vector<DescribeMemberAccountsResponseBody::AccountInfos>> accountInfos_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
