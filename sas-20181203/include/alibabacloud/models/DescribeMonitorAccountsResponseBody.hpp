// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeMonitorAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIdInfos, accountIdInfos_);
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIdInfos, accountIdInfos_);
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMonitorAccountsResponseBody() = default ;
    DescribeMonitorAccountsResponseBody(const DescribeMonitorAccountsResponseBody &) = default ;
    DescribeMonitorAccountsResponseBody(DescribeMonitorAccountsResponseBody &&) = default ;
    DescribeMonitorAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorAccountsResponseBody() = default ;
    DescribeMonitorAccountsResponseBody& operator=(const DescribeMonitorAccountsResponseBody &) = default ;
    DescribeMonitorAccountsResponseBody& operator=(DescribeMonitorAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountIdInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountIdInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AddTime, addTime_);
        DARABONBA_PTR_TO_JSON(OperatorUid, operatorUid_);
        DARABONBA_PTR_TO_JSON(PostBasicService, postBasicService_);
        DARABONBA_PTR_TO_JSON(SasVersion, sasVersion_);
      };
      friend void from_json(const Darabonba::Json& j, AccountIdInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AddTime, addTime_);
        DARABONBA_PTR_FROM_JSON(OperatorUid, operatorUid_);
        DARABONBA_PTR_FROM_JSON(PostBasicService, postBasicService_);
        DARABONBA_PTR_FROM_JSON(SasVersion, sasVersion_);
      };
      AccountIdInfos() = default ;
      AccountIdInfos(const AccountIdInfos &) = default ;
      AccountIdInfos(AccountIdInfos &&) = default ;
      AccountIdInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountIdInfos() = default ;
      AccountIdInfos& operator=(const AccountIdInfos &) = default ;
      AccountIdInfos& operator=(AccountIdInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->addTime_ == nullptr && this->operatorUid_ == nullptr && this->postBasicService_ == nullptr && this->sasVersion_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline AccountIdInfos& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // addTime Field Functions 
      bool hasAddTime() const { return this->addTime_ != nullptr;};
      void deleteAddTime() { this->addTime_ = nullptr;};
      inline int64_t getAddTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, 0L) };
      inline AccountIdInfos& setAddTime(int64_t addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


      // operatorUid Field Functions 
      bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
      void deleteOperatorUid() { this->operatorUid_ = nullptr;};
      inline string getOperatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, "") };
      inline AccountIdInfos& setOperatorUid(string operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


      // postBasicService Field Functions 
      bool hasPostBasicService() const { return this->postBasicService_ != nullptr;};
      void deletePostBasicService() { this->postBasicService_ = nullptr;};
      inline int32_t getPostBasicService() const { DARABONBA_PTR_GET_DEFAULT(postBasicService_, 0) };
      inline AccountIdInfos& setPostBasicService(int32_t postBasicService) { DARABONBA_PTR_SET_VALUE(postBasicService_, postBasicService) };


      // sasVersion Field Functions 
      bool hasSasVersion() const { return this->sasVersion_ != nullptr;};
      void deleteSasVersion() { this->sasVersion_ = nullptr;};
      inline string getSasVersion() const { DARABONBA_PTR_GET_DEFAULT(sasVersion_, "") };
      inline AccountIdInfos& setSasVersion(string sasVersion) { DARABONBA_PTR_SET_VALUE(sasVersion_, sasVersion) };


    protected:
      // The Alibaba Cloud account ID of the member.
      shared_ptr<string> accountId_ {};
      // The time when it was added to the control list, in timestamp format with second precision.
      shared_ptr<int64_t> addTime_ {};
      // The account ID of the operator.
      shared_ptr<string> operatorUid_ {};
      // Basic service switch. Values: 
      // - **0**: Off 
      // - **1**: On
      shared_ptr<int32_t> postBasicService_ {};
      // The purchased version of Cloud Security Center. Values:
      // - **0** or **1**: Free Edition 
      // - **2** or **3**: Enterprise Edition
      //  - **5**: Advanced Edition 
      // - **6**: Anti-Virus Edition 
      // - **7**: Flagship Edition
      shared_ptr<string> sasVersion_ {};
    };

    virtual bool empty() const override { return this->accountIdInfos_ == nullptr
        && this->accountIds_ == nullptr && this->requestId_ == nullptr; };
    // accountIdInfos Field Functions 
    bool hasAccountIdInfos() const { return this->accountIdInfos_ != nullptr;};
    void deleteAccountIdInfos() { this->accountIdInfos_ = nullptr;};
    inline const vector<DescribeMonitorAccountsResponseBody::AccountIdInfos> & getAccountIdInfos() const { DARABONBA_PTR_GET_CONST(accountIdInfos_, vector<DescribeMonitorAccountsResponseBody::AccountIdInfos>) };
    inline vector<DescribeMonitorAccountsResponseBody::AccountIdInfos> getAccountIdInfos() { DARABONBA_PTR_GET(accountIdInfos_, vector<DescribeMonitorAccountsResponseBody::AccountIdInfos>) };
    inline DescribeMonitorAccountsResponseBody& setAccountIdInfos(const vector<DescribeMonitorAccountsResponseBody::AccountIdInfos> & accountIdInfos) { DARABONBA_PTR_SET_VALUE(accountIdInfos_, accountIdInfos) };
    inline DescribeMonitorAccountsResponseBody& setAccountIdInfos(vector<DescribeMonitorAccountsResponseBody::AccountIdInfos> && accountIdInfos) { DARABONBA_PTR_SET_RVALUE(accountIdInfos_, accountIdInfos) };


    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline DescribeMonitorAccountsResponseBody& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline DescribeMonitorAccountsResponseBody& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitorAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of member account information.
    shared_ptr<vector<DescribeMonitorAccountsResponseBody::AccountIdInfos>> accountIdInfos_ {};
    // The IDs of the members.
    shared_ptr<vector<string>> accountIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
