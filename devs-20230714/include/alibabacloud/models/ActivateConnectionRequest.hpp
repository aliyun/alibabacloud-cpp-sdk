// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATECONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATECONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ActivateConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(account, account_);
      DARABONBA_PTR_TO_JSON(credential, credential_);
    };
    friend void from_json(const Darabonba::Json& j, ActivateConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(account, account_);
      DARABONBA_PTR_FROM_JSON(credential, credential_);
    };
    ActivateConnectionRequest() = default ;
    ActivateConnectionRequest(const ActivateConnectionRequest &) = default ;
    ActivateConnectionRequest(ActivateConnectionRequest &&) = default ;
    ActivateConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateConnectionRequest() = default ;
    ActivateConnectionRequest& operator=(const ActivateConnectionRequest &) = default ;
    ActivateConnectionRequest& operator=(ActivateConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr
        && this->credential_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const GitAccount & account() const { DARABONBA_PTR_GET_CONST(account_, GitAccount) };
    inline GitAccount account() { DARABONBA_PTR_GET(account_, GitAccount) };
    inline ActivateConnectionRequest& setAccount(const GitAccount & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline ActivateConnectionRequest& setAccount(GitAccount && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline const OAuthCredential & credential() const { DARABONBA_PTR_GET_CONST(credential_, OAuthCredential) };
    inline OAuthCredential credential() { DARABONBA_PTR_GET(credential_, OAuthCredential) };
    inline ActivateConnectionRequest& setCredential(const OAuthCredential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
    inline ActivateConnectionRequest& setCredential(OAuthCredential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


  protected:
    std::shared_ptr<GitAccount> account_ = nullptr;
    std::shared_ptr<OAuthCredential> credential_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
