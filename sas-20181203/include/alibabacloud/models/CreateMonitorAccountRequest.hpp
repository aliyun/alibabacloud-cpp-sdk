// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMONITORACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMONITORACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateMonitorAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMonitorAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMonitorAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
    };
    CreateMonitorAccountRequest() = default ;
    CreateMonitorAccountRequest(const CreateMonitorAccountRequest &) = default ;
    CreateMonitorAccountRequest(CreateMonitorAccountRequest &&) = default ;
    CreateMonitorAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMonitorAccountRequest() = default ;
    CreateMonitorAccountRequest& operator=(const CreateMonitorAccountRequest &) = default ;
    CreateMonitorAccountRequest& operator=(CreateMonitorAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountIds_ != nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline string accountIds() const { DARABONBA_PTR_GET_DEFAULT(accountIds_, "") };
    inline CreateMonitorAccountRequest& setAccountIds(string accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };


  protected:
    // The account IDs of members in the resource directory.
    // 
    // >  You can call the [ListAccountsInResourceDirectory](~~ListAccountsInResourceDirectory~~) operation to obtain the account IDs. Separate multiple account IDs with commas (,). If you specify a value for this parameter, the existing list of members is replaced by the new list that you specify. Otherwise, the existing list is cleared.
    std::shared_ptr<string> accountIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
