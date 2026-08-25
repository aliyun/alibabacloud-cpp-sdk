// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETUSERPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETUSERPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ResetUserPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetUserPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ResetUserPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ResetUserPasswordRequest() = default ;
    ResetUserPasswordRequest(const ResetUserPasswordRequest &) = default ;
    ResetUserPasswordRequest(ResetUserPasswordRequest &&) = default ;
    ResetUserPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetUserPasswordRequest() = default ;
    ResetUserPasswordRequest& operator=(const ResetUserPasswordRequest &) = default ;
    ResetUserPasswordRequest& operator=(ResetUserPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(agentCoreUserId, agentCoreUserId_);
        DARABONBA_PTR_TO_JSON(password, password_);
        DARABONBA_PTR_TO_JSON(username, username_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(agentCoreUserId, agentCoreUserId_);
        DARABONBA_PTR_FROM_JSON(password, password_);
        DARABONBA_PTR_FROM_JSON(username, username_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentCoreUserId_ == nullptr
        && this->password_ == nullptr && this->username_ == nullptr; };
      // agentCoreUserId Field Functions 
      bool hasAgentCoreUserId() const { return this->agentCoreUserId_ != nullptr;};
      void deleteAgentCoreUserId() { this->agentCoreUserId_ = nullptr;};
      inline string getAgentCoreUserId() const { DARABONBA_PTR_GET_DEFAULT(agentCoreUserId_, "") };
      inline Body& setAgentCoreUserId(string agentCoreUserId) { DARABONBA_PTR_SET_VALUE(agentCoreUserId_, agentCoreUserId) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Body& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Body& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<string> agentCoreUserId_ {};
      shared_ptr<string> password_ {};
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ResetUserPasswordRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, ResetUserPasswordRequest::Body) };
    inline ResetUserPasswordRequest::Body getBody() { DARABONBA_PTR_GET(body_, ResetUserPasswordRequest::Body) };
    inline ResetUserPasswordRequest& setBody(const ResetUserPasswordRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ResetUserPasswordRequest& setBody(ResetUserPasswordRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<ResetUserPasswordRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
