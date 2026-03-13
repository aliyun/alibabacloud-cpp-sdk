// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENROLLEDACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENROLLEDACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEnrolledAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnrolledAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnrolledAccounts, enrolledAccounts_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnrolledAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnrolledAccounts, enrolledAccounts_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEnrolledAccountsResponseBody() = default ;
    ListEnrolledAccountsResponseBody(const ListEnrolledAccountsResponseBody &) = default ;
    ListEnrolledAccountsResponseBody(ListEnrolledAccountsResponseBody &&) = default ;
    ListEnrolledAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnrolledAccountsResponseBody() = default ;
    ListEnrolledAccountsResponseBody& operator=(const ListEnrolledAccountsResponseBody &) = default ;
    ListEnrolledAccountsResponseBody& operator=(ListEnrolledAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EnrolledAccounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnrolledAccounts& obj) { 
        DARABONBA_PTR_TO_JSON(AccountUid, accountUid_);
        DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(FolderId, folderId_);
        DARABONBA_PTR_TO_JSON(PayerAccountUid, payerAccountUid_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, EnrolledAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountUid, accountUid_);
        DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
        DARABONBA_PTR_FROM_JSON(PayerAccountUid, payerAccountUid_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      EnrolledAccounts() = default ;
      EnrolledAccounts(const EnrolledAccounts &) = default ;
      EnrolledAccounts(EnrolledAccounts &&) = default ;
      EnrolledAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnrolledAccounts() = default ;
      EnrolledAccounts& operator=(const EnrolledAccounts &) = default ;
      EnrolledAccounts& operator=(EnrolledAccounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountUid_ == nullptr
        && this->baselineId_ == nullptr && this->createTime_ == nullptr && this->displayName_ == nullptr && this->folderId_ == nullptr && this->payerAccountUid_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // accountUid Field Functions 
      bool hasAccountUid() const { return this->accountUid_ != nullptr;};
      void deleteAccountUid() { this->accountUid_ = nullptr;};
      inline int64_t getAccountUid() const { DARABONBA_PTR_GET_DEFAULT(accountUid_, 0L) };
      inline EnrolledAccounts& setAccountUid(int64_t accountUid) { DARABONBA_PTR_SET_VALUE(accountUid_, accountUid) };


      // baselineId Field Functions 
      bool hasBaselineId() const { return this->baselineId_ != nullptr;};
      void deleteBaselineId() { this->baselineId_ = nullptr;};
      inline string getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
      inline EnrolledAccounts& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline EnrolledAccounts& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline EnrolledAccounts& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // folderId Field Functions 
      bool hasFolderId() const { return this->folderId_ != nullptr;};
      void deleteFolderId() { this->folderId_ = nullptr;};
      inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
      inline EnrolledAccounts& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


      // payerAccountUid Field Functions 
      bool hasPayerAccountUid() const { return this->payerAccountUid_ != nullptr;};
      void deletePayerAccountUid() { this->payerAccountUid_ = nullptr;};
      inline int64_t getPayerAccountUid() const { DARABONBA_PTR_GET_DEFAULT(payerAccountUid_, 0L) };
      inline EnrolledAccounts& setPayerAccountUid(int64_t payerAccountUid) { DARABONBA_PTR_SET_VALUE(payerAccountUid_, payerAccountUid) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EnrolledAccounts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline EnrolledAccounts& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The account ID.
      shared_ptr<int64_t> accountUid_ {};
      // The ID of the baseline that is implemented.
      shared_ptr<string> baselineId_ {};
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The display name of the account.
      shared_ptr<string> displayName_ {};
      // The ID of the parent folder.
      shared_ptr<string> folderId_ {};
      // The ID of the settlement account.
      shared_ptr<int64_t> payerAccountUid_ {};
      // The creation status. Valid values:
      // 
      // *   Pending: The account is pending to be created.
      // *   Running: The account is being created.
      // *   Finished: The account is created.
      // *   Failed: The account fails to be created.
      // *   Scheduling: The account is being scheduled.
      // *   ScheduleFailed: The account fails to be scheduled.
      shared_ptr<string> status_ {};
      // The update time.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->enrolledAccounts_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // enrolledAccounts Field Functions 
    bool hasEnrolledAccounts() const { return this->enrolledAccounts_ != nullptr;};
    void deleteEnrolledAccounts() { this->enrolledAccounts_ = nullptr;};
    inline const vector<ListEnrolledAccountsResponseBody::EnrolledAccounts> & getEnrolledAccounts() const { DARABONBA_PTR_GET_CONST(enrolledAccounts_, vector<ListEnrolledAccountsResponseBody::EnrolledAccounts>) };
    inline vector<ListEnrolledAccountsResponseBody::EnrolledAccounts> getEnrolledAccounts() { DARABONBA_PTR_GET(enrolledAccounts_, vector<ListEnrolledAccountsResponseBody::EnrolledAccounts>) };
    inline ListEnrolledAccountsResponseBody& setEnrolledAccounts(const vector<ListEnrolledAccountsResponseBody::EnrolledAccounts> & enrolledAccounts) { DARABONBA_PTR_SET_VALUE(enrolledAccounts_, enrolledAccounts) };
    inline ListEnrolledAccountsResponseBody& setEnrolledAccounts(vector<ListEnrolledAccountsResponseBody::EnrolledAccounts> && enrolledAccounts) { DARABONBA_PTR_SET_RVALUE(enrolledAccounts_, enrolledAccounts) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEnrolledAccountsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnrolledAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The enrolled accounts.
    shared_ptr<vector<ListEnrolledAccountsResponseBody::EnrolledAccounts>> enrolledAccounts_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
