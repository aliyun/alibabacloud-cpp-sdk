// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTSTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTSTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
namespace Models
{
  class GetStsTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStsTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetStsTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetStsTokenRequest() = default ;
    GetStsTokenRequest(const GetStsTokenRequest &) = default ;
    GetStsTokenRequest(GetStsTokenRequest &&) = default ;
    GetStsTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStsTokenRequest() = default ;
    GetStsTokenRequest& operator=(const GetStsTokenRequest &) = default ;
    GetStsTokenRequest& operator=(GetStsTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && return this->clientId_ == nullptr && return this->clientIp_ == nullptr && return this->clientOS_ == nullptr && return this->clientVersion_ == nullptr && return this->uuid_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string authCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline GetStsTokenRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GetStsTokenRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline GetStsTokenRequest& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // clientOS Field Functions 
    bool hasClientOS() const { return this->clientOS_ != nullptr;};
    void deleteClientOS() { this->clientOS_ = nullptr;};
    inline string clientOS() const { DARABONBA_PTR_GET_DEFAULT(clientOS_, "") };
    inline GetStsTokenRequest& setClientOS(string clientOS) { DARABONBA_PTR_SET_VALUE(clientOS_, clientOS) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline GetStsTokenRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetStsTokenRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> authCode_ = nullptr;
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> clientIp_ = nullptr;
    std::shared_ptr<string> clientOS_ = nullptr;
    std::shared_ptr<string> clientVersion_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
