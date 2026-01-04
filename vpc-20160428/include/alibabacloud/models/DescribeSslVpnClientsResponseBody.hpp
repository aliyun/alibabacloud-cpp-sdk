// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESSLVPNCLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESSLVPNCLIENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeSslVpnClientsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSslVpnClientsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientInfoList, clientInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSslVpnClientsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientInfoList, clientInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    DescribeSslVpnClientsResponseBody() = default ;
    DescribeSslVpnClientsResponseBody(const DescribeSslVpnClientsResponseBody &) = default ;
    DescribeSslVpnClientsResponseBody(DescribeSslVpnClientsResponseBody &&) = default ;
    DescribeSslVpnClientsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSslVpnClientsResponseBody() = default ;
    DescribeSslVpnClientsResponseBody& operator=(const DescribeSslVpnClientsResponseBody &) = default ;
    DescribeSslVpnClientsResponseBody& operator=(DescribeSslVpnClientsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClientInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(ConnectedTime, connectedTime_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
        DARABONBA_PTR_TO_JSON(ReceiveBytes, receiveBytes_);
        DARABONBA_PTR_TO_JSON(SendBytes, sendBytes_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ClientInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(ConnectedTime, connectedTime_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
        DARABONBA_PTR_FROM_JSON(ReceiveBytes, receiveBytes_);
        DARABONBA_PTR_FROM_JSON(SendBytes, sendBytes_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ClientInfoList() = default ;
      ClientInfoList(const ClientInfoList &) = default ;
      ClientInfoList(ClientInfoList &&) = default ;
      ClientInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientInfoList() = default ;
      ClientInfoList& operator=(const ClientInfoList &) = default ;
      ClientInfoList& operator=(ClientInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commonName_ == nullptr
        && this->connectedTime_ == nullptr && this->ip_ == nullptr && this->port_ == nullptr && this->privateIp_ == nullptr && this->receiveBytes_ == nullptr
        && this->sendBytes_ == nullptr && this->status_ == nullptr; };
      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline ClientInfoList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // connectedTime Field Functions 
      bool hasConnectedTime() const { return this->connectedTime_ != nullptr;};
      void deleteConnectedTime() { this->connectedTime_ = nullptr;};
      inline int64_t getConnectedTime() const { DARABONBA_PTR_GET_DEFAULT(connectedTime_, 0L) };
      inline ClientInfoList& setConnectedTime(int64_t connectedTime) { DARABONBA_PTR_SET_VALUE(connectedTime_, connectedTime) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline ClientInfoList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline ClientInfoList& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // privateIp Field Functions 
      bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
      void deletePrivateIp() { this->privateIp_ = nullptr;};
      inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
      inline ClientInfoList& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


      // receiveBytes Field Functions 
      bool hasReceiveBytes() const { return this->receiveBytes_ != nullptr;};
      void deleteReceiveBytes() { this->receiveBytes_ = nullptr;};
      inline int64_t getReceiveBytes() const { DARABONBA_PTR_GET_DEFAULT(receiveBytes_, 0L) };
      inline ClientInfoList& setReceiveBytes(int64_t receiveBytes) { DARABONBA_PTR_SET_VALUE(receiveBytes_, receiveBytes) };


      // sendBytes Field Functions 
      bool hasSendBytes() const { return this->sendBytes_ != nullptr;};
      void deleteSendBytes() { this->sendBytes_ = nullptr;};
      inline int64_t getSendBytes() const { DARABONBA_PTR_GET_DEFAULT(sendBytes_, 0L) };
      inline ClientInfoList& setSendBytes(int64_t sendBytes) { DARABONBA_PTR_SET_VALUE(sendBytes_, sendBytes) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ClientInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The SSL client certificate used by the client.
      // 
      // >  If the client uses two-factor authentication to establish an SSL-VPN connection to Alibaba Cloud, the return value is the username of the client.
      shared_ptr<string> commonName_ {};
      // The timestamp that indicates when the client connected to Alibaba Cloud through an SSL-VPN connection. Unit: milliseconds.
      // 
      // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> connectedTime_ {};
      // The actual public IP address used by the client when the client established an SSL-VPN connection to Alibaba Cloud.
      shared_ptr<string> ip_ {};
      // The port used by the client when the client established an SSL-VPN connection to Alibaba Cloud.
      shared_ptr<string> port_ {};
      // The private IP address allocated to the client by the VPN gateway when the client established an SSL-VPN connection to Alibaba Cloud.
      shared_ptr<string> privateIp_ {};
      // The amount of data transferred from the client to the VPN gateway through the SSL-VPN connection. Unit: bytes.
      shared_ptr<int64_t> receiveBytes_ {};
      // The amount of data transferred from the VPN gateway to the client through the SSL-VPN connection. Unit: bytes.
      shared_ptr<int64_t> sendBytes_ {};
      // The status of the SSL-VPN connection.
      // 
      // The value is set to **online**, which indicates that the client has connected to Alibaba Cloud through an SSL-VPN connection.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->clientInfoList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr
        && this->vpnGatewayId_ == nullptr; };
    // clientInfoList Field Functions 
    bool hasClientInfoList() const { return this->clientInfoList_ != nullptr;};
    void deleteClientInfoList() { this->clientInfoList_ = nullptr;};
    inline const vector<DescribeSslVpnClientsResponseBody::ClientInfoList> & getClientInfoList() const { DARABONBA_PTR_GET_CONST(clientInfoList_, vector<DescribeSslVpnClientsResponseBody::ClientInfoList>) };
    inline vector<DescribeSslVpnClientsResponseBody::ClientInfoList> getClientInfoList() { DARABONBA_PTR_GET(clientInfoList_, vector<DescribeSslVpnClientsResponseBody::ClientInfoList>) };
    inline DescribeSslVpnClientsResponseBody& setClientInfoList(const vector<DescribeSslVpnClientsResponseBody::ClientInfoList> & clientInfoList) { DARABONBA_PTR_SET_VALUE(clientInfoList_, clientInfoList) };
    inline DescribeSslVpnClientsResponseBody& setClientInfoList(vector<DescribeSslVpnClientsResponseBody::ClientInfoList> && clientInfoList) { DARABONBA_PTR_SET_RVALUE(clientInfoList_, clientInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSslVpnClientsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSslVpnClientsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSslVpnClientsResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSslVpnClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSslVpnClientsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline DescribeSslVpnClientsResponseBody& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The list of clients.
    shared_ptr<vector<DescribeSslVpnClientsResponseBody::ClientInfoList>> clientInfoList_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
    // The ID of the VPN gateway.
    shared_ptr<string> vpnGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
