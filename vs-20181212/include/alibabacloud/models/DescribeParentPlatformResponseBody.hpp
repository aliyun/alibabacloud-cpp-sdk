// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARENTPLATFORMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARENTPLATFORMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeParentPlatformResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParentPlatformResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoStart, autoStart_);
      DARABONBA_PTR_TO_JSON(ClientAuth, clientAuth_);
      DARABONBA_PTR_TO_JSON(ClientGbId, clientGbId_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(ClientPassword, clientPassword_);
      DARABONBA_PTR_TO_JSON(ClientPort, clientPort_);
      DARABONBA_PTR_TO_JSON(ClientUsername, clientUsername_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GbId, gbId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParentPlatformResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStart, autoStart_);
      DARABONBA_PTR_FROM_JSON(ClientAuth, clientAuth_);
      DARABONBA_PTR_FROM_JSON(ClientGbId, clientGbId_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(ClientPassword, clientPassword_);
      DARABONBA_PTR_FROM_JSON(ClientPort, clientPort_);
      DARABONBA_PTR_FROM_JSON(ClientUsername, clientUsername_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GbId, gbId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeParentPlatformResponseBody() = default ;
    DescribeParentPlatformResponseBody(const DescribeParentPlatformResponseBody &) = default ;
    DescribeParentPlatformResponseBody(DescribeParentPlatformResponseBody &&) = default ;
    DescribeParentPlatformResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParentPlatformResponseBody() = default ;
    DescribeParentPlatformResponseBody& operator=(const DescribeParentPlatformResponseBody &) = default ;
    DescribeParentPlatformResponseBody& operator=(DescribeParentPlatformResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoStart_ == nullptr
        && this->clientAuth_ == nullptr && this->clientGbId_ == nullptr && this->clientIp_ == nullptr && this->clientPassword_ == nullptr && this->clientPort_ == nullptr
        && this->clientUsername_ == nullptr && this->createdTime_ == nullptr && this->description_ == nullptr && this->gbId_ == nullptr && this->id_ == nullptr
        && this->ip_ == nullptr && this->name_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr && this->requestId_ == nullptr
        && this->status_ == nullptr; };
    // autoStart Field Functions 
    bool hasAutoStart() const { return this->autoStart_ != nullptr;};
    void deleteAutoStart() { this->autoStart_ = nullptr;};
    inline bool getAutoStart() const { DARABONBA_PTR_GET_DEFAULT(autoStart_, false) };
    inline DescribeParentPlatformResponseBody& setAutoStart(bool autoStart) { DARABONBA_PTR_SET_VALUE(autoStart_, autoStart) };


    // clientAuth Field Functions 
    bool hasClientAuth() const { return this->clientAuth_ != nullptr;};
    void deleteClientAuth() { this->clientAuth_ = nullptr;};
    inline bool getClientAuth() const { DARABONBA_PTR_GET_DEFAULT(clientAuth_, false) };
    inline DescribeParentPlatformResponseBody& setClientAuth(bool clientAuth) { DARABONBA_PTR_SET_VALUE(clientAuth_, clientAuth) };


    // clientGbId Field Functions 
    bool hasClientGbId() const { return this->clientGbId_ != nullptr;};
    void deleteClientGbId() { this->clientGbId_ = nullptr;};
    inline string getClientGbId() const { DARABONBA_PTR_GET_DEFAULT(clientGbId_, "") };
    inline DescribeParentPlatformResponseBody& setClientGbId(string clientGbId) { DARABONBA_PTR_SET_VALUE(clientGbId_, clientGbId) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeParentPlatformResponseBody& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // clientPassword Field Functions 
    bool hasClientPassword() const { return this->clientPassword_ != nullptr;};
    void deleteClientPassword() { this->clientPassword_ = nullptr;};
    inline string getClientPassword() const { DARABONBA_PTR_GET_DEFAULT(clientPassword_, "") };
    inline DescribeParentPlatformResponseBody& setClientPassword(string clientPassword) { DARABONBA_PTR_SET_VALUE(clientPassword_, clientPassword) };


    // clientPort Field Functions 
    bool hasClientPort() const { return this->clientPort_ != nullptr;};
    void deleteClientPort() { this->clientPort_ = nullptr;};
    inline int64_t getClientPort() const { DARABONBA_PTR_GET_DEFAULT(clientPort_, 0L) };
    inline DescribeParentPlatformResponseBody& setClientPort(int64_t clientPort) { DARABONBA_PTR_SET_VALUE(clientPort_, clientPort) };


    // clientUsername Field Functions 
    bool hasClientUsername() const { return this->clientUsername_ != nullptr;};
    void deleteClientUsername() { this->clientUsername_ = nullptr;};
    inline string getClientUsername() const { DARABONBA_PTR_GET_DEFAULT(clientUsername_, "") };
    inline DescribeParentPlatformResponseBody& setClientUsername(string clientUsername) { DARABONBA_PTR_SET_VALUE(clientUsername_, clientUsername) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeParentPlatformResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeParentPlatformResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gbId Field Functions 
    bool hasGbId() const { return this->gbId_ != nullptr;};
    void deleteGbId() { this->gbId_ = nullptr;};
    inline string getGbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
    inline DescribeParentPlatformResponseBody& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeParentPlatformResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeParentPlatformResponseBody& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeParentPlatformResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
    inline DescribeParentPlatformResponseBody& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeParentPlatformResponseBody& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParentPlatformResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeParentPlatformResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<bool> autoStart_ {};
    shared_ptr<bool> clientAuth_ {};
    shared_ptr<string> clientGbId_ {};
    shared_ptr<string> clientIp_ {};
    shared_ptr<string> clientPassword_ {};
    shared_ptr<int64_t> clientPort_ {};
    shared_ptr<string> clientUsername_ {};
    shared_ptr<string> createdTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> gbId_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> ip_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> port_ {};
    shared_ptr<string> protocol_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
