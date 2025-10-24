// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEMBERACCOUNTSRESPONSEBODYACCOUNTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEMBERACCOUNTSRESPONSEBODYACCOUNTINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeMemberAccountsResponseBodyAccountInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMemberAccountsResponseBodyAccountInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMemberAccountsResponseBodyAccountInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
    };
    DescribeMemberAccountsResponseBodyAccountInfos() = default ;
    DescribeMemberAccountsResponseBodyAccountInfos(const DescribeMemberAccountsResponseBodyAccountInfos &) = default ;
    DescribeMemberAccountsResponseBodyAccountInfos(DescribeMemberAccountsResponseBodyAccountInfos &&) = default ;
    DescribeMemberAccountsResponseBodyAccountInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMemberAccountsResponseBodyAccountInfos() = default ;
    DescribeMemberAccountsResponseBodyAccountInfos& operator=(const DescribeMemberAccountsResponseBodyAccountInfos &) = default ;
    DescribeMemberAccountsResponseBodyAccountInfos& operator=(DescribeMemberAccountsResponseBodyAccountInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->accountName_ == nullptr && return this->accountStatus_ == nullptr && return this->description_ == nullptr && return this->gmtCreate_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DescribeMemberAccountsResponseBodyAccountInfos& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeMemberAccountsResponseBodyAccountInfos& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline DescribeMemberAccountsResponseBodyAccountInfos& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeMemberAccountsResponseBodyAccountInfos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeMemberAccountsResponseBodyAccountInfos& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


  protected:
    // The ID of the member.
    std::shared_ptr<string> accountId_ = nullptr;
    // The name of the member.
    std::shared_ptr<string> accountName_ = nullptr;
    // The status of the member.
    // 
    // *   **enabled**: managed.
    // *   **disabled**: not managed.
    // *   **disabling**: being deleted.
    std::shared_ptr<string> accountStatus_ = nullptr;
    // The description of the member.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the member was added.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
