// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMOTERESOURCEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROMOTERESOURCEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class PromoteResourceAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PromoteResourceAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Email, email_);
    };
    friend void from_json(const Darabonba::Json& j, PromoteResourceAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
    };
    PromoteResourceAccountRequest() = default ;
    PromoteResourceAccountRequest(const PromoteResourceAccountRequest &) = default ;
    PromoteResourceAccountRequest(PromoteResourceAccountRequest &&) = default ;
    PromoteResourceAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PromoteResourceAccountRequest() = default ;
    PromoteResourceAccountRequest& operator=(const PromoteResourceAccountRequest &) = default ;
    PromoteResourceAccountRequest& operator=(PromoteResourceAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->email_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline PromoteResourceAccountRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline PromoteResourceAccountRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


  protected:
    // The ID of the resource account you want to upgrade.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
    // The email address used to log on to the cloud account after the upgrade.
    // 
    // This parameter is required.
    std::shared_ptr<string> email_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
