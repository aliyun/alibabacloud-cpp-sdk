// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESSLVPNCLIENTSRESPONSEBODYCLIENTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESSLVPNCLIENTSRESPONSEBODYCLIENTINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeSslVpnClientsResponseBodyClientInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSslVpnClientsResponseBodyClientInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(ConnectedTime, connectedTime_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_TO_JSON(ReceiveBytes, receiveBytes_);
      DARABONBA_PTR_TO_JSON(SendBytes, sendBytes_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSslVpnClientsResponseBodyClientInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(ConnectedTime, connectedTime_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_FROM_JSON(ReceiveBytes, receiveBytes_);
      DARABONBA_PTR_FROM_JSON(SendBytes, sendBytes_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSslVpnClientsResponseBodyClientInfoList() = default ;
    DescribeSslVpnClientsResponseBodyClientInfoList(const DescribeSslVpnClientsResponseBodyClientInfoList &) = default ;
    DescribeSslVpnClientsResponseBodyClientInfoList(DescribeSslVpnClientsResponseBodyClientInfoList &&) = default ;
    DescribeSslVpnClientsResponseBodyClientInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSslVpnClientsResponseBodyClientInfoList() = default ;
    DescribeSslVpnClientsResponseBodyClientInfoList& operator=(const DescribeSslVpnClientsResponseBodyClientInfoList &) = default ;
    DescribeSslVpnClientsResponseBodyClientInfoList& operator=(DescribeSslVpnClientsResponseBodyClientInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonName_ == nullptr
        && return this->connectedTime_ == nullptr && return this->ip_ == nullptr && return this->port_ == nullptr && return this->privateIp_ == nullptr && return this->receiveBytes_ == nullptr
        && return this->sendBytes_ == nullptr && return this->status_ == nullptr; };
    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline DescribeSslVpnClientsResponseBodyClientInfoList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // connectedTime Field Functions 
    bool hasConnectedTime() const { return this->connectedTime_ != nullptr;};
    void deleteConnectedTime() { this->connectedTime_ = nullptr;};
    inline int64_t connectedTime() const { DARABONBA_PTR_GET_DEFAULT(connectedTime_, 0L) };
    inline DescribeSslVpnClientsResponseBodyClientInfoList& setConnectedTime(int64_t connectedTime) { DARABONBA_PTR_SET_VALUE(connectedTime_, connectedTime) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeSslVpnClientsResponseBodyClientInfoList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeSslVpnClientsResponseBodyClientInfoList& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIp Field Functions 
    bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
    void deletePrivateIp() { this->privateIp_ = nullptr;};
    inline string privateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
    inline DescribeSslVpnClientsResponseBodyClientInfoList& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


    // receiveBytes Field Functions 
    bool hasReceiveBytes() const { return this->receiveBytes_ != nullptr;};
    void deleteReceiveBytes() { this->receiveBytes_ = nullptr;};
    inline int64_t receiveBytes() const { DARABONBA_PTR_GET_DEFAULT(receiveBytes_, 0L) };
    inline DescribeSslVpnClientsResponseBodyClientInfoList& setReceiveBytes(int64_t receiveBytes) { DARABONBA_PTR_SET_VALUE(receiveBytes_, receiveBytes) };


    // sendBytes Field Functions 
    bool hasSendBytes() const { return this->sendBytes_ != nullptr;};
    void deleteSendBytes() { this->sendBytes_ = nullptr;};
    inline int64_t sendBytes() const { DARABONBA_PTR_GET_DEFAULT(sendBytes_, 0L) };
    inline DescribeSslVpnClientsResponseBodyClientInfoList& setSendBytes(int64_t sendBytes) { DARABONBA_PTR_SET_VALUE(sendBytes_, sendBytes) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSslVpnClientsResponseBodyClientInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The SSL client certificate used by the client.
    // 
    // >  If the client uses two-factor authentication to establish an SSL-VPN connection to Alibaba Cloud, the return value is the username of the client.
    std::shared_ptr<string> commonName_ = nullptr;
    // The timestamp that indicates when the client connected to Alibaba Cloud through an SSL-VPN connection. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> connectedTime_ = nullptr;
    // The actual public IP address used by the client when the client established an SSL-VPN connection to Alibaba Cloud.
    std::shared_ptr<string> ip_ = nullptr;
    // The port used by the client when the client established an SSL-VPN connection to Alibaba Cloud.
    std::shared_ptr<string> port_ = nullptr;
    // The private IP address allocated to the client by the VPN gateway when the client established an SSL-VPN connection to Alibaba Cloud.
    std::shared_ptr<string> privateIp_ = nullptr;
    // The amount of data transferred from the client to the VPN gateway through the SSL-VPN connection. Unit: bytes.
    std::shared_ptr<int64_t> receiveBytes_ = nullptr;
    // The amount of data transferred from the VPN gateway to the client through the SSL-VPN connection. Unit: bytes.
    std::shared_ptr<int64_t> sendBytes_ = nullptr;
    // The status of the SSL-VPN connection.
    // 
    // The value is set to **online**, which indicates that the client has connected to Alibaba Cloud through an SSL-VPN connection.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
