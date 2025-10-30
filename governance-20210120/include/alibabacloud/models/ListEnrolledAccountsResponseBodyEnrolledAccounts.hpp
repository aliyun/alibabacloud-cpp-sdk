// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENROLLEDACCOUNTSRESPONSEBODYENROLLEDACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTENROLLEDACCOUNTSRESPONSEBODYENROLLEDACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEnrolledAccountsResponseBodyEnrolledAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnrolledAccountsResponseBodyEnrolledAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(PayerAccountUid, payerAccountUid_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnrolledAccountsResponseBodyEnrolledAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(PayerAccountUid, payerAccountUid_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListEnrolledAccountsResponseBodyEnrolledAccounts() = default ;
    ListEnrolledAccountsResponseBodyEnrolledAccounts(const ListEnrolledAccountsResponseBodyEnrolledAccounts &) = default ;
    ListEnrolledAccountsResponseBodyEnrolledAccounts(ListEnrolledAccountsResponseBodyEnrolledAccounts &&) = default ;
    ListEnrolledAccountsResponseBodyEnrolledAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnrolledAccountsResponseBodyEnrolledAccounts() = default ;
    ListEnrolledAccountsResponseBodyEnrolledAccounts& operator=(const ListEnrolledAccountsResponseBodyEnrolledAccounts &) = default ;
    ListEnrolledAccountsResponseBodyEnrolledAccounts& operator=(ListEnrolledAccountsResponseBodyEnrolledAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountUid_ == nullptr
        && return this->baselineId_ == nullptr && return this->createTime_ == nullptr && return this->displayName_ == nullptr && return this->folderId_ == nullptr && return this->payerAccountUid_ == nullptr
        && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // accountUid Field Functions 
    bool hasAccountUid() const { return this->accountUid_ != nullptr;};
    void deleteAccountUid() { this->accountUid_ = nullptr;};
    inline int64_t accountUid() const { DARABONBA_PTR_GET_DEFAULT(accountUid_, 0L) };
    inline ListEnrolledAccountsResponseBodyEnrolledAccounts& setAccountUid(int64_t accountUid) { DARABONBA_PTR_SET_VALUE(accountUid_, accountUid) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline string baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
    inline ListEnrolledAccountsResponseBodyEnrolledAccounts& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListEnrolledAccountsResponseBodyEnrolledAccounts& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListEnrolledAccountsResponseBodyEnrolledAccounts& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline ListEnrolledAccountsResponseBodyEnrolledAccounts& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // payerAccountUid Field Functions 
    bool hasPayerAccountUid() const { return this->payerAccountUid_ != nullptr;};
    void deletePayerAccountUid() { this->payerAccountUid_ = nullptr;};
    inline int64_t payerAccountUid() const { DARABONBA_PTR_GET_DEFAULT(payerAccountUid_, 0L) };
    inline ListEnrolledAccountsResponseBodyEnrolledAccounts& setPayerAccountUid(int64_t payerAccountUid) { DARABONBA_PTR_SET_VALUE(payerAccountUid_, payerAccountUid) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEnrolledAccountsResponseBodyEnrolledAccounts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListEnrolledAccountsResponseBodyEnrolledAccounts& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The account ID.
    std::shared_ptr<int64_t> accountUid_ = nullptr;
    // The ID of the baseline that is implemented.
    std::shared_ptr<string> baselineId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // The display name of the account.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the parent folder.
    std::shared_ptr<string> folderId_ = nullptr;
    // The ID of the settlement account.
    std::shared_ptr<int64_t> payerAccountUid_ = nullptr;
    // The creation status. Valid values:
    // 
    // *   Pending: The account is pending to be created.
    // *   Running: The account is being created.
    // *   Finished: The account is created.
    // *   Failed: The account fails to be created.
    // *   Scheduling: The account is being scheduled.
    // *   ScheduleFailed: The account fails to be scheduled.
    std::shared_ptr<string> status_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
