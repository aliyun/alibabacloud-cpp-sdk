// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGGREGATORREQUESTAGGREGATORACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGGREGATORREQUESTAGGREGATORACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CreateAggregatorRequestAggregatorAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAggregatorRequestAggregatorAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAggregatorRequestAggregatorAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
    };
    CreateAggregatorRequestAggregatorAccounts() = default ;
    CreateAggregatorRequestAggregatorAccounts(const CreateAggregatorRequestAggregatorAccounts &) = default ;
    CreateAggregatorRequestAggregatorAccounts(CreateAggregatorRequestAggregatorAccounts &&) = default ;
    CreateAggregatorRequestAggregatorAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAggregatorRequestAggregatorAccounts() = default ;
    CreateAggregatorRequestAggregatorAccounts& operator=(const CreateAggregatorRequestAggregatorAccounts &) = default ;
    CreateAggregatorRequestAggregatorAccounts& operator=(CreateAggregatorRequestAggregatorAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->accountName_ == nullptr && return this->accountType_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline CreateAggregatorRequestAggregatorAccounts& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateAggregatorRequestAggregatorAccounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline CreateAggregatorRequestAggregatorAccounts& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


  protected:
    // The member account ID. For more information about how to obtain the ID of a member account, see [ListAccounts](https://help.aliyun.com/document_detail/160016.html).
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The name of the member account. For more information about how to obtain the name of a member account, see [ListAccounts](https://help.aliyun.com/document_detail/160016.html).
    std::shared_ptr<string> accountName_ = nullptr;
    // The type of the member account. Set this parameter to ResourceDirectory.
    std::shared_ptr<string> accountType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
