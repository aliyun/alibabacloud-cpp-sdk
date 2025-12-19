// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPLETERESOURCETOKENAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPLETERESOURCETOKENAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CompleteResourceTokenAuthRequestUserIdentifier.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class CompleteResourceTokenAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompleteResourceTokenAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SessionURI, sessionURI_);
      DARABONBA_PTR_TO_JSON(UserIdentifier, userIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CompleteResourceTokenAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionURI, sessionURI_);
      DARABONBA_PTR_FROM_JSON(UserIdentifier, userIdentifier_);
    };
    CompleteResourceTokenAuthRequest() = default ;
    CompleteResourceTokenAuthRequest(const CompleteResourceTokenAuthRequest &) = default ;
    CompleteResourceTokenAuthRequest(CompleteResourceTokenAuthRequest &&) = default ;
    CompleteResourceTokenAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompleteResourceTokenAuthRequest() = default ;
    CompleteResourceTokenAuthRequest& operator=(const CompleteResourceTokenAuthRequest &) = default ;
    CompleteResourceTokenAuthRequest& operator=(CompleteResourceTokenAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionURI_ == nullptr
        && return this->userIdentifier_ == nullptr; };
    // sessionURI Field Functions 
    bool hasSessionURI() const { return this->sessionURI_ != nullptr;};
    void deleteSessionURI() { this->sessionURI_ = nullptr;};
    inline string sessionURI() const { DARABONBA_PTR_GET_DEFAULT(sessionURI_, "") };
    inline CompleteResourceTokenAuthRequest& setSessionURI(string sessionURI) { DARABONBA_PTR_SET_VALUE(sessionURI_, sessionURI) };


    // userIdentifier Field Functions 
    bool hasUserIdentifier() const { return this->userIdentifier_ != nullptr;};
    void deleteUserIdentifier() { this->userIdentifier_ = nullptr;};
    inline const CompleteResourceTokenAuthRequestUserIdentifier & userIdentifier() const { DARABONBA_PTR_GET_CONST(userIdentifier_, CompleteResourceTokenAuthRequestUserIdentifier) };
    inline CompleteResourceTokenAuthRequestUserIdentifier userIdentifier() { DARABONBA_PTR_GET(userIdentifier_, CompleteResourceTokenAuthRequestUserIdentifier) };
    inline CompleteResourceTokenAuthRequest& setUserIdentifier(const CompleteResourceTokenAuthRequestUserIdentifier & userIdentifier) { DARABONBA_PTR_SET_VALUE(userIdentifier_, userIdentifier) };
    inline CompleteResourceTokenAuthRequest& setUserIdentifier(CompleteResourceTokenAuthRequestUserIdentifier && userIdentifier) { DARABONBA_PTR_SET_RVALUE(userIdentifier_, userIdentifier) };


  protected:
    std::shared_ptr<string> sessionURI_ = nullptr;
    std::shared_ptr<CompleteResourceTokenAuthRequestUserIdentifier> userIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
