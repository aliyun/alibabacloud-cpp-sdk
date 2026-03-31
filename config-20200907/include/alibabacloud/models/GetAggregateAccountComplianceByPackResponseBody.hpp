// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATEACCOUNTCOMPLIANCEBYPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATEACCOUNTCOMPLIANCEBYPACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateAccountComplianceByPackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateAccountComplianceByPackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountComplianceResult, accountComplianceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateAccountComplianceByPackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountComplianceResult, accountComplianceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateAccountComplianceByPackResponseBody() = default ;
    GetAggregateAccountComplianceByPackResponseBody(const GetAggregateAccountComplianceByPackResponseBody &) = default ;
    GetAggregateAccountComplianceByPackResponseBody(GetAggregateAccountComplianceByPackResponseBody &&) = default ;
    GetAggregateAccountComplianceByPackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateAccountComplianceByPackResponseBody() = default ;
    GetAggregateAccountComplianceByPackResponseBody& operator=(const GetAggregateAccountComplianceByPackResponseBody &) = default ;
    GetAggregateAccountComplianceByPackResponseBody& operator=(GetAggregateAccountComplianceByPackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountComplianceResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountComplianceResult& obj) { 
        DARABONBA_PTR_TO_JSON(AccountCompliances, accountCompliances_);
        DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
        DARABONBA_PTR_TO_JSON(NonCompliantCount, nonCompliantCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, AccountComplianceResult& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountCompliances, accountCompliances_);
        DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
        DARABONBA_PTR_FROM_JSON(NonCompliantCount, nonCompliantCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      AccountComplianceResult() = default ;
      AccountComplianceResult(const AccountComplianceResult &) = default ;
      AccountComplianceResult(AccountComplianceResult &&) = default ;
      AccountComplianceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountComplianceResult() = default ;
      AccountComplianceResult& operator=(const AccountComplianceResult &) = default ;
      AccountComplianceResult& operator=(AccountComplianceResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AccountCompliances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccountCompliances& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
        };
        friend void from_json(const Darabonba::Json& j, AccountCompliances& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
        };
        AccountCompliances() = default ;
        AccountCompliances(const AccountCompliances &) = default ;
        AccountCompliances(AccountCompliances &&) = default ;
        AccountCompliances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccountCompliances() = default ;
        AccountCompliances& operator=(const AccountCompliances &) = default ;
        AccountCompliances& operator=(AccountCompliances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->complianceType_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
        inline AccountCompliances& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline AccountCompliances& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // complianceType Field Functions 
        bool hasComplianceType() const { return this->complianceType_ != nullptr;};
        void deleteComplianceType() { this->complianceType_ = nullptr;};
        inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
        inline AccountCompliances& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


      protected:
        // The ID of the member account in the account group.
        shared_ptr<int64_t> accountId_ {};
        // The name of the member account in the account group.
        shared_ptr<string> accountName_ {};
        // The compliance evaluation result. Valid values:
        // 
        // *   COMPLIANT: The resource was evaluated as compliant.
        // *   NON_COMPLIANT: The resource was evaluated as incompliant.
        // *   NOT_APPLICABLE: The rule did not apply to your resource.
        // *   INSUFFICIENT_DATA: No resource data was available.
        shared_ptr<string> complianceType_ {};
      };

      virtual bool empty() const override { return this->accountCompliances_ == nullptr
        && this->compliancePackId_ == nullptr && this->nonCompliantCount_ == nullptr && this->totalCount_ == nullptr; };
      // accountCompliances Field Functions 
      bool hasAccountCompliances() const { return this->accountCompliances_ != nullptr;};
      void deleteAccountCompliances() { this->accountCompliances_ = nullptr;};
      inline const vector<AccountComplianceResult::AccountCompliances> & getAccountCompliances() const { DARABONBA_PTR_GET_CONST(accountCompliances_, vector<AccountComplianceResult::AccountCompliances>) };
      inline vector<AccountComplianceResult::AccountCompliances> getAccountCompliances() { DARABONBA_PTR_GET(accountCompliances_, vector<AccountComplianceResult::AccountCompliances>) };
      inline AccountComplianceResult& setAccountCompliances(const vector<AccountComplianceResult::AccountCompliances> & accountCompliances) { DARABONBA_PTR_SET_VALUE(accountCompliances_, accountCompliances) };
      inline AccountComplianceResult& setAccountCompliances(vector<AccountComplianceResult::AccountCompliances> && accountCompliances) { DARABONBA_PTR_SET_RVALUE(accountCompliances_, accountCompliances) };


      // compliancePackId Field Functions 
      bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
      void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
      inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
      inline AccountComplianceResult& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


      // nonCompliantCount Field Functions 
      bool hasNonCompliantCount() const { return this->nonCompliantCount_ != nullptr;};
      void deleteNonCompliantCount() { this->nonCompliantCount_ = nullptr;};
      inline int32_t getNonCompliantCount() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantCount_, 0) };
      inline AccountComplianceResult& setNonCompliantCount(int32_t nonCompliantCount) { DARABONBA_PTR_SET_VALUE(nonCompliantCount_, nonCompliantCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline AccountComplianceResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The compliance evaluation result of member accounts.
      shared_ptr<vector<AccountComplianceResult::AccountCompliances>> accountCompliances_ {};
      // The ID of the compliance package.
      shared_ptr<string> compliancePackId_ {};
      // The number of non-compliant member accounts.
      shared_ptr<int32_t> nonCompliantCount_ {};
      // The total number of member accounts.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->accountComplianceResult_ == nullptr
        && this->requestId_ == nullptr; };
    // accountComplianceResult Field Functions 
    bool hasAccountComplianceResult() const { return this->accountComplianceResult_ != nullptr;};
    void deleteAccountComplianceResult() { this->accountComplianceResult_ = nullptr;};
    inline const GetAggregateAccountComplianceByPackResponseBody::AccountComplianceResult & getAccountComplianceResult() const { DARABONBA_PTR_GET_CONST(accountComplianceResult_, GetAggregateAccountComplianceByPackResponseBody::AccountComplianceResult) };
    inline GetAggregateAccountComplianceByPackResponseBody::AccountComplianceResult getAccountComplianceResult() { DARABONBA_PTR_GET(accountComplianceResult_, GetAggregateAccountComplianceByPackResponseBody::AccountComplianceResult) };
    inline GetAggregateAccountComplianceByPackResponseBody& setAccountComplianceResult(const GetAggregateAccountComplianceByPackResponseBody::AccountComplianceResult & accountComplianceResult) { DARABONBA_PTR_SET_VALUE(accountComplianceResult_, accountComplianceResult) };
    inline GetAggregateAccountComplianceByPackResponseBody& setAccountComplianceResult(GetAggregateAccountComplianceByPackResponseBody::AccountComplianceResult && accountComplianceResult) { DARABONBA_PTR_SET_RVALUE(accountComplianceResult_, accountComplianceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateAccountComplianceByPackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance evaluation results of member accounts for which the compliance package takes effect in an account group.
    shared_ptr<GetAggregateAccountComplianceByPackResponseBody::AccountComplianceResult> accountComplianceResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
