// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDUSERDESKTOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDUSERDESKTOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class UnbindUserDesktopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindUserDesktopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(UserDesktopId, userDesktopId_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindUserDesktopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(UserDesktopId, userDesktopId_);
    };
    UnbindUserDesktopRequest() = default ;
    UnbindUserDesktopRequest(const UnbindUserDesktopRequest &) = default ;
    UnbindUserDesktopRequest(UnbindUserDesktopRequest &&) = default ;
    UnbindUserDesktopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindUserDesktopRequest() = default ;
    UnbindUserDesktopRequest& operator=(const UnbindUserDesktopRequest &) = default ;
    UnbindUserDesktopRequest& operator=(UnbindUserDesktopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientType_ == nullptr && this->force_ == nullptr && this->loginToken_ == nullptr && this->regionId_ == nullptr && this->sessionId_ == nullptr
        && this->userDesktopId_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline UnbindUserDesktopRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline UnbindUserDesktopRequest& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline UnbindUserDesktopRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string getLoginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline UnbindUserDesktopRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UnbindUserDesktopRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline UnbindUserDesktopRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // userDesktopId Field Functions 
    bool hasUserDesktopId() const { return this->userDesktopId_ != nullptr;};
    void deleteUserDesktopId() { this->userDesktopId_ = nullptr;};
    inline string getUserDesktopId() const { DARABONBA_PTR_GET_DEFAULT(userDesktopId_, "") };
    inline UnbindUserDesktopRequest& setUserDesktopId(string userDesktopId) { DARABONBA_PTR_SET_VALUE(userDesktopId_, userDesktopId) };


  protected:
    // The client ID.
    // 
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    // The client type.
    shared_ptr<string> clientType_ {};
    // Specifies whether to enable forced unbinding.
    // 
    // Valid values:
    // 
    // *   true: Even when end users connect to cloud computers, the forced unbinding is still enforced.
    // *   false: Forced unbinding is only enforced when end users are disconnected from cloud computers.
    shared_ptr<bool> force_ {};
    // The logon token.
    // 
    // This parameter is required.
    shared_ptr<string> loginToken_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The session ID.
    // 
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    // The cloud computer ID.
    // 
    // This parameter is required.
    shared_ptr<string> userDesktopId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
