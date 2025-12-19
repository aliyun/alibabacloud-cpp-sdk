// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPLETERESOURCETOKENAUTHREQUESTUSERIDENTIFIER_HPP_
#define ALIBABACLOUD_MODELS_COMPLETERESOURCETOKENAUTHREQUESTUSERIDENTIFIER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class CompleteResourceTokenAuthRequestUserIdentifier : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompleteResourceTokenAuthRequestUserIdentifier& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserJWT, userJWT_);
    };
    friend void from_json(const Darabonba::Json& j, CompleteResourceTokenAuthRequestUserIdentifier& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserJWT, userJWT_);
    };
    CompleteResourceTokenAuthRequestUserIdentifier() = default ;
    CompleteResourceTokenAuthRequestUserIdentifier(const CompleteResourceTokenAuthRequestUserIdentifier &) = default ;
    CompleteResourceTokenAuthRequestUserIdentifier(CompleteResourceTokenAuthRequestUserIdentifier &&) = default ;
    CompleteResourceTokenAuthRequestUserIdentifier(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompleteResourceTokenAuthRequestUserIdentifier() = default ;
    CompleteResourceTokenAuthRequestUserIdentifier& operator=(const CompleteResourceTokenAuthRequestUserIdentifier &) = default ;
    CompleteResourceTokenAuthRequestUserIdentifier& operator=(CompleteResourceTokenAuthRequestUserIdentifier &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr
        && return this->userJWT_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CompleteResourceTokenAuthRequestUserIdentifier& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userJWT Field Functions 
    bool hasUserJWT() const { return this->userJWT_ != nullptr;};
    void deleteUserJWT() { this->userJWT_ = nullptr;};
    inline string userJWT() const { DARABONBA_PTR_GET_DEFAULT(userJWT_, "") };
    inline CompleteResourceTokenAuthRequestUserIdentifier& setUserJWT(string userJWT) { DARABONBA_PTR_SET_VALUE(userJWT_, userJWT) };


  protected:
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userJWT_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
