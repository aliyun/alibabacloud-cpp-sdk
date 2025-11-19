// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALPUBLICCONFIGUSERS_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALPUBLICCONFIGUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CredentialPublicConfigUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialPublicConfigUsers& obj) { 
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialPublicConfigUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    CredentialPublicConfigUsers() = default ;
    CredentialPublicConfigUsers(const CredentialPublicConfigUsers &) = default ;
    CredentialPublicConfigUsers(CredentialPublicConfigUsers &&) = default ;
    CredentialPublicConfigUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialPublicConfigUsers() = default ;
    CredentialPublicConfigUsers& operator=(const CredentialPublicConfigUsers &) = default ;
    CredentialPublicConfigUsers& operator=(CredentialPublicConfigUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->password_ == nullptr
        && return this->username_ == nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CredentialPublicConfigUsers& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CredentialPublicConfigUsers& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
