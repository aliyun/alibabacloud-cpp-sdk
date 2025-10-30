// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHENROLLACCOUNTSREQUESTACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_BATCHENROLLACCOUNTSREQUESTACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class BatchEnrollAccountsRequestAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEnrollAccountsRequestAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountUid, accountUid_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEnrollAccountsRequestAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountUid, accountUid_);
    };
    BatchEnrollAccountsRequestAccounts() = default ;
    BatchEnrollAccountsRequestAccounts(const BatchEnrollAccountsRequestAccounts &) = default ;
    BatchEnrollAccountsRequestAccounts(BatchEnrollAccountsRequestAccounts &&) = default ;
    BatchEnrollAccountsRequestAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEnrollAccountsRequestAccounts() = default ;
    BatchEnrollAccountsRequestAccounts& operator=(const BatchEnrollAccountsRequestAccounts &) = default ;
    BatchEnrollAccountsRequestAccounts& operator=(BatchEnrollAccountsRequestAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountUid_ == nullptr; };
    // accountUid Field Functions 
    bool hasAccountUid() const { return this->accountUid_ != nullptr;};
    void deleteAccountUid() { this->accountUid_ = nullptr;};
    inline int64_t accountUid() const { DARABONBA_PTR_GET_DEFAULT(accountUid_, 0L) };
    inline BatchEnrollAccountsRequestAccounts& setAccountUid(int64_t accountUid) { DARABONBA_PTR_SET_VALUE(accountUid_, accountUid) };


  protected:
    // The account ID. This parameter is required.
    std::shared_ptr<int64_t> accountUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
