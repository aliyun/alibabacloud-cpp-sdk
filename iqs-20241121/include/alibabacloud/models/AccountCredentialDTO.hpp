// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCOUNTCREDENTIALDTO_HPP_
#define ALIBABACLOUD_MODELS_ACCOUNTCREDENTIALDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class AccountCredentialDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccountCredentialDTO& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(callerIdentity, callerIdentity_);
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, AccountCredentialDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(callerIdentity, callerIdentity_);
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    AccountCredentialDTO() = default ;
    AccountCredentialDTO(const AccountCredentialDTO &) = default ;
    AccountCredentialDTO(AccountCredentialDTO &&) = default ;
    AccountCredentialDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccountCredentialDTO() = default ;
    AccountCredentialDTO& operator=(const AccountCredentialDTO &) = default ;
    AccountCredentialDTO& operator=(AccountCredentialDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->callerIdentity_ == nullptr && this->id_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline AccountCredentialDTO& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // callerIdentity Field Functions 
    bool hasCallerIdentity() const { return this->callerIdentity_ != nullptr;};
    void deleteCallerIdentity() { this->callerIdentity_ = nullptr;};
    inline string getCallerIdentity() const { DARABONBA_PTR_GET_DEFAULT(callerIdentity_, "") };
    inline AccountCredentialDTO& setCallerIdentity(string callerIdentity) { DARABONBA_PTR_SET_VALUE(callerIdentity_, callerIdentity) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AccountCredentialDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> callerIdentity_ {};
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
