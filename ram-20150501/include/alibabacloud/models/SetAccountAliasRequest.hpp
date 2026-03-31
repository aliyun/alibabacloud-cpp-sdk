// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETACCOUNTALIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETACCOUNTALIASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class SetAccountAliasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAccountAliasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountAlias, accountAlias_);
    };
    friend void from_json(const Darabonba::Json& j, SetAccountAliasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountAlias, accountAlias_);
    };
    SetAccountAliasRequest() = default ;
    SetAccountAliasRequest(const SetAccountAliasRequest &) = default ;
    SetAccountAliasRequest(SetAccountAliasRequest &&) = default ;
    SetAccountAliasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAccountAliasRequest() = default ;
    SetAccountAliasRequest& operator=(const SetAccountAliasRequest &) = default ;
    SetAccountAliasRequest& operator=(SetAccountAliasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountAlias_ == nullptr; };
    // accountAlias Field Functions 
    bool hasAccountAlias() const { return this->accountAlias_ != nullptr;};
    void deleteAccountAlias() { this->accountAlias_ = nullptr;};
    inline string getAccountAlias() const { DARABONBA_PTR_GET_DEFAULT(accountAlias_, "") };
    inline SetAccountAliasRequest& setAccountAlias(string accountAlias) { DARABONBA_PTR_SET_VALUE(accountAlias_, accountAlias) };


  protected:
    // The alias of the Alibaba Cloud account.
    // 
    // The alias must be 3 to 32 characters in length, and can contain lowercase letters, digits, and hyphens (-).
    // 
    // >  It cannot start or end with a hyphen (-), and cannot contain consecutive hyphens (-).
    shared_ptr<string> accountAlias_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
