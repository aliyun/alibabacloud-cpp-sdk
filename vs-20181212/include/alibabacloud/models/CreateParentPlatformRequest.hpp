// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPARENTPLATFORMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPARENTPLATFORMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateParentPlatformRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateParentPlatformRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoStart, autoStart_);
      DARABONBA_PTR_TO_JSON(ClientAuth, clientAuth_);
      DARABONBA_PTR_TO_JSON(ClientPassword, clientPassword_);
      DARABONBA_PTR_TO_JSON(ClientUsername, clientUsername_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GbId, gbId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, CreateParentPlatformRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStart, autoStart_);
      DARABONBA_PTR_FROM_JSON(ClientAuth, clientAuth_);
      DARABONBA_PTR_FROM_JSON(ClientPassword, clientPassword_);
      DARABONBA_PTR_FROM_JSON(ClientUsername, clientUsername_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GbId, gbId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    CreateParentPlatformRequest() = default ;
    CreateParentPlatformRequest(const CreateParentPlatformRequest &) = default ;
    CreateParentPlatformRequest(CreateParentPlatformRequest &&) = default ;
    CreateParentPlatformRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateParentPlatformRequest() = default ;
    CreateParentPlatformRequest& operator=(const CreateParentPlatformRequest &) = default ;
    CreateParentPlatformRequest& operator=(CreateParentPlatformRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoStart_ == nullptr
        && return this->clientAuth_ == nullptr && return this->clientPassword_ == nullptr && return this->clientUsername_ == nullptr && return this->description_ == nullptr && return this->gbId_ == nullptr
        && return this->ip_ == nullptr && return this->name_ == nullptr && return this->ownerId_ == nullptr && return this->port_ == nullptr && return this->protocol_ == nullptr; };
    // autoStart Field Functions 
    bool hasAutoStart() const { return this->autoStart_ != nullptr;};
    void deleteAutoStart() { this->autoStart_ = nullptr;};
    inline bool autoStart() const { DARABONBA_PTR_GET_DEFAULT(autoStart_, false) };
    inline CreateParentPlatformRequest& setAutoStart(bool autoStart) { DARABONBA_PTR_SET_VALUE(autoStart_, autoStart) };


    // clientAuth Field Functions 
    bool hasClientAuth() const { return this->clientAuth_ != nullptr;};
    void deleteClientAuth() { this->clientAuth_ = nullptr;};
    inline bool clientAuth() const { DARABONBA_PTR_GET_DEFAULT(clientAuth_, false) };
    inline CreateParentPlatformRequest& setClientAuth(bool clientAuth) { DARABONBA_PTR_SET_VALUE(clientAuth_, clientAuth) };


    // clientPassword Field Functions 
    bool hasClientPassword() const { return this->clientPassword_ != nullptr;};
    void deleteClientPassword() { this->clientPassword_ = nullptr;};
    inline string clientPassword() const { DARABONBA_PTR_GET_DEFAULT(clientPassword_, "") };
    inline CreateParentPlatformRequest& setClientPassword(string clientPassword) { DARABONBA_PTR_SET_VALUE(clientPassword_, clientPassword) };


    // clientUsername Field Functions 
    bool hasClientUsername() const { return this->clientUsername_ != nullptr;};
    void deleteClientUsername() { this->clientUsername_ = nullptr;};
    inline string clientUsername() const { DARABONBA_PTR_GET_DEFAULT(clientUsername_, "") };
    inline CreateParentPlatformRequest& setClientUsername(string clientUsername) { DARABONBA_PTR_SET_VALUE(clientUsername_, clientUsername) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateParentPlatformRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gbId Field Functions 
    bool hasGbId() const { return this->gbId_ != nullptr;};
    void deleteGbId() { this->gbId_ = nullptr;};
    inline string gbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
    inline CreateParentPlatformRequest& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline CreateParentPlatformRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateParentPlatformRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateParentPlatformRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int64_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
    inline CreateParentPlatformRequest& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateParentPlatformRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    std::shared_ptr<bool> autoStart_ = nullptr;
    std::shared_ptr<bool> clientAuth_ = nullptr;
    std::shared_ptr<string> clientPassword_ = nullptr;
    std::shared_ptr<string> clientUsername_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> gbId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ip_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> port_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
