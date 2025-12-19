// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPLETERESOURCETOKENAUTHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPLETERESOURCETOKENAUTHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class CompleteResourceTokenAuthShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompleteResourceTokenAuthShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SessionURI, sessionURI_);
      DARABONBA_PTR_TO_JSON(UserIdentifier, userIdentifierShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CompleteResourceTokenAuthShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionURI, sessionURI_);
      DARABONBA_PTR_FROM_JSON(UserIdentifier, userIdentifierShrink_);
    };
    CompleteResourceTokenAuthShrinkRequest() = default ;
    CompleteResourceTokenAuthShrinkRequest(const CompleteResourceTokenAuthShrinkRequest &) = default ;
    CompleteResourceTokenAuthShrinkRequest(CompleteResourceTokenAuthShrinkRequest &&) = default ;
    CompleteResourceTokenAuthShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompleteResourceTokenAuthShrinkRequest() = default ;
    CompleteResourceTokenAuthShrinkRequest& operator=(const CompleteResourceTokenAuthShrinkRequest &) = default ;
    CompleteResourceTokenAuthShrinkRequest& operator=(CompleteResourceTokenAuthShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionURI_ == nullptr
        && return this->userIdentifierShrink_ == nullptr; };
    // sessionURI Field Functions 
    bool hasSessionURI() const { return this->sessionURI_ != nullptr;};
    void deleteSessionURI() { this->sessionURI_ = nullptr;};
    inline string sessionURI() const { DARABONBA_PTR_GET_DEFAULT(sessionURI_, "") };
    inline CompleteResourceTokenAuthShrinkRequest& setSessionURI(string sessionURI) { DARABONBA_PTR_SET_VALUE(sessionURI_, sessionURI) };


    // userIdentifierShrink Field Functions 
    bool hasUserIdentifierShrink() const { return this->userIdentifierShrink_ != nullptr;};
    void deleteUserIdentifierShrink() { this->userIdentifierShrink_ = nullptr;};
    inline string userIdentifierShrink() const { DARABONBA_PTR_GET_DEFAULT(userIdentifierShrink_, "") };
    inline CompleteResourceTokenAuthShrinkRequest& setUserIdentifierShrink(string userIdentifierShrink) { DARABONBA_PTR_SET_VALUE(userIdentifierShrink_, userIdentifierShrink) };


  protected:
    std::shared_ptr<string> sessionURI_ = nullptr;
    std::shared_ptr<string> userIdentifierShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
