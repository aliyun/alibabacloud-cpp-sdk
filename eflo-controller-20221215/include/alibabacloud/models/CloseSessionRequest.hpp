// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSESESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOSESESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CloseSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SessionToken, sessionToken_);
    };
    friend void from_json(const Darabonba::Json& j, CloseSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SessionToken, sessionToken_);
    };
    CloseSessionRequest() = default ;
    CloseSessionRequest(const CloseSessionRequest &) = default ;
    CloseSessionRequest(CloseSessionRequest &&) = default ;
    CloseSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseSessionRequest() = default ;
    CloseSessionRequest& operator=(const CloseSessionRequest &) = default ;
    CloseSessionRequest& operator=(CloseSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sessionId_ != nullptr
        && this->sessionToken_ != nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CloseSessionRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionToken Field Functions 
    bool hasSessionToken() const { return this->sessionToken_ != nullptr;};
    void deleteSessionToken() { this->sessionToken_ = nullptr;};
    inline string sessionToken() const { DARABONBA_PTR_GET_DEFAULT(sessionToken_, "") };
    inline CloseSessionRequest& setSessionToken(string sessionToken) { DARABONBA_PTR_SET_VALUE(sessionToken_, sessionToken) };


  protected:
    // The session ID.
    std::shared_ptr<string> sessionId_ = nullptr;
    // Session token.
    std::shared_ptr<string> sessionToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
