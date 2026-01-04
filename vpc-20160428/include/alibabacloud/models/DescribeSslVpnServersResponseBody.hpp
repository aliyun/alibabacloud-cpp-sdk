// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESSLVPNSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESSLVPNSERVERSRESPONSEBODY_HPP_
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
  class DescribeSslVpnServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSslVpnServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SslVpnServers, sslVpnServers_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSslVpnServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SslVpnServers, sslVpnServers_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSslVpnServersResponseBody() = default ;
    DescribeSslVpnServersResponseBody(const DescribeSslVpnServersResponseBody &) = default ;
    DescribeSslVpnServersResponseBody(DescribeSslVpnServersResponseBody &&) = default ;
    DescribeSslVpnServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSslVpnServersResponseBody() = default ;
    DescribeSslVpnServersResponseBody& operator=(const DescribeSslVpnServersResponseBody &) = default ;
    DescribeSslVpnServersResponseBody& operator=(DescribeSslVpnServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SslVpnServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SslVpnServers& obj) { 
        DARABONBA_PTR_TO_JSON(SslVpnServer, sslVpnServer_);
      };
      friend void from_json(const Darabonba::Json& j, SslVpnServers& obj) { 
        DARABONBA_PTR_FROM_JSON(SslVpnServer, sslVpnServer_);
      };
      SslVpnServers() = default ;
      SslVpnServers(const SslVpnServers &) = default ;
      SslVpnServers(SslVpnServers &&) = default ;
      SslVpnServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SslVpnServers() = default ;
      SslVpnServers& operator=(const SslVpnServers &) = default ;
      SslVpnServers& operator=(SslVpnServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SslVpnServer : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SslVpnServer& obj) { 
          DARABONBA_PTR_TO_JSON(Cipher, cipher_);
          DARABONBA_PTR_TO_JSON(ClientIpPool, clientIpPool_);
          DARABONBA_PTR_TO_JSON(Compress, compress_);
          DARABONBA_PTR_TO_JSON(Connections, connections_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EnableMultiFactorAuth, enableMultiFactorAuth_);
          DARABONBA_PTR_TO_JSON(IDaaSApplicationId, IDaaSApplicationId_);
          DARABONBA_PTR_TO_JSON(IDaaSInstanceId, IDaaSInstanceId_);
          DARABONBA_PTR_TO_JSON(IDaaSInstanceVersion, IDaaSInstanceVersion_);
          DARABONBA_PTR_TO_JSON(IDaaSRegionId, IDaaSRegionId_);
          DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
          DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
          DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Proto, proto_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SslVpnServerId, sslVpnServerId_);
          DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
        };
        friend void from_json(const Darabonba::Json& j, SslVpnServer& obj) { 
          DARABONBA_PTR_FROM_JSON(Cipher, cipher_);
          DARABONBA_PTR_FROM_JSON(ClientIpPool, clientIpPool_);
          DARABONBA_PTR_FROM_JSON(Compress, compress_);
          DARABONBA_PTR_FROM_JSON(Connections, connections_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EnableMultiFactorAuth, enableMultiFactorAuth_);
          DARABONBA_PTR_FROM_JSON(IDaaSApplicationId, IDaaSApplicationId_);
          DARABONBA_PTR_FROM_JSON(IDaaSInstanceId, IDaaSInstanceId_);
          DARABONBA_PTR_FROM_JSON(IDaaSInstanceVersion, IDaaSInstanceVersion_);
          DARABONBA_PTR_FROM_JSON(IDaaSRegionId, IDaaSRegionId_);
          DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
          DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
          DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Proto, proto_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SslVpnServerId, sslVpnServerId_);
          DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
        };
        SslVpnServer() = default ;
        SslVpnServer(const SslVpnServer &) = default ;
        SslVpnServer(SslVpnServer &&) = default ;
        SslVpnServer(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SslVpnServer() = default ;
        SslVpnServer& operator=(const SslVpnServer &) = default ;
        SslVpnServer& operator=(SslVpnServer &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cipher_ == nullptr
        && this->clientIpPool_ == nullptr && this->compress_ == nullptr && this->connections_ == nullptr && this->createTime_ == nullptr && this->enableMultiFactorAuth_ == nullptr
        && this->IDaaSApplicationId_ == nullptr && this->IDaaSInstanceId_ == nullptr && this->IDaaSInstanceVersion_ == nullptr && this->IDaaSRegionId_ == nullptr && this->internetIp_ == nullptr
        && this->localSubnet_ == nullptr && this->maxConnections_ == nullptr && this->name_ == nullptr && this->port_ == nullptr && this->proto_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->sslVpnServerId_ == nullptr && this->vpnGatewayId_ == nullptr; };
        // cipher Field Functions 
        bool hasCipher() const { return this->cipher_ != nullptr;};
        void deleteCipher() { this->cipher_ = nullptr;};
        inline string getCipher() const { DARABONBA_PTR_GET_DEFAULT(cipher_, "") };
        inline SslVpnServer& setCipher(string cipher) { DARABONBA_PTR_SET_VALUE(cipher_, cipher) };


        // clientIpPool Field Functions 
        bool hasClientIpPool() const { return this->clientIpPool_ != nullptr;};
        void deleteClientIpPool() { this->clientIpPool_ = nullptr;};
        inline string getClientIpPool() const { DARABONBA_PTR_GET_DEFAULT(clientIpPool_, "") };
        inline SslVpnServer& setClientIpPool(string clientIpPool) { DARABONBA_PTR_SET_VALUE(clientIpPool_, clientIpPool) };


        // compress Field Functions 
        bool hasCompress() const { return this->compress_ != nullptr;};
        void deleteCompress() { this->compress_ = nullptr;};
        inline bool getCompress() const { DARABONBA_PTR_GET_DEFAULT(compress_, false) };
        inline SslVpnServer& setCompress(bool compress) { DARABONBA_PTR_SET_VALUE(compress_, compress) };


        // connections Field Functions 
        bool hasConnections() const { return this->connections_ != nullptr;};
        void deleteConnections() { this->connections_ = nullptr;};
        inline int32_t getConnections() const { DARABONBA_PTR_GET_DEFAULT(connections_, 0) };
        inline SslVpnServer& setConnections(int32_t connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline SslVpnServer& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // enableMultiFactorAuth Field Functions 
        bool hasEnableMultiFactorAuth() const { return this->enableMultiFactorAuth_ != nullptr;};
        void deleteEnableMultiFactorAuth() { this->enableMultiFactorAuth_ = nullptr;};
        inline bool getEnableMultiFactorAuth() const { DARABONBA_PTR_GET_DEFAULT(enableMultiFactorAuth_, false) };
        inline SslVpnServer& setEnableMultiFactorAuth(bool enableMultiFactorAuth) { DARABONBA_PTR_SET_VALUE(enableMultiFactorAuth_, enableMultiFactorAuth) };


        // IDaaSApplicationId Field Functions 
        bool hasIDaaSApplicationId() const { return this->IDaaSApplicationId_ != nullptr;};
        void deleteIDaaSApplicationId() { this->IDaaSApplicationId_ = nullptr;};
        inline string getIDaaSApplicationId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSApplicationId_, "") };
        inline SslVpnServer& setIDaaSApplicationId(string IDaaSApplicationId) { DARABONBA_PTR_SET_VALUE(IDaaSApplicationId_, IDaaSApplicationId) };


        // IDaaSInstanceId Field Functions 
        bool hasIDaaSInstanceId() const { return this->IDaaSInstanceId_ != nullptr;};
        void deleteIDaaSInstanceId() { this->IDaaSInstanceId_ = nullptr;};
        inline string getIDaaSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSInstanceId_, "") };
        inline SslVpnServer& setIDaaSInstanceId(string IDaaSInstanceId) { DARABONBA_PTR_SET_VALUE(IDaaSInstanceId_, IDaaSInstanceId) };


        // IDaaSInstanceVersion Field Functions 
        bool hasIDaaSInstanceVersion() const { return this->IDaaSInstanceVersion_ != nullptr;};
        void deleteIDaaSInstanceVersion() { this->IDaaSInstanceVersion_ = nullptr;};
        inline string getIDaaSInstanceVersion() const { DARABONBA_PTR_GET_DEFAULT(IDaaSInstanceVersion_, "") };
        inline SslVpnServer& setIDaaSInstanceVersion(string IDaaSInstanceVersion) { DARABONBA_PTR_SET_VALUE(IDaaSInstanceVersion_, IDaaSInstanceVersion) };


        // IDaaSRegionId Field Functions 
        bool hasIDaaSRegionId() const { return this->IDaaSRegionId_ != nullptr;};
        void deleteIDaaSRegionId() { this->IDaaSRegionId_ = nullptr;};
        inline string getIDaaSRegionId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSRegionId_, "") };
        inline SslVpnServer& setIDaaSRegionId(string IDaaSRegionId) { DARABONBA_PTR_SET_VALUE(IDaaSRegionId_, IDaaSRegionId) };


        // internetIp Field Functions 
        bool hasInternetIp() const { return this->internetIp_ != nullptr;};
        void deleteInternetIp() { this->internetIp_ = nullptr;};
        inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
        inline SslVpnServer& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


        // localSubnet Field Functions 
        bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
        void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
        inline string getLocalSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
        inline SslVpnServer& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


        // maxConnections Field Functions 
        bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
        void deleteMaxConnections() { this->maxConnections_ = nullptr;};
        inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
        inline SslVpnServer& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SslVpnServer& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline SslVpnServer& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // proto Field Functions 
        bool hasProto() const { return this->proto_ != nullptr;};
        void deleteProto() { this->proto_ = nullptr;};
        inline string getProto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
        inline SslVpnServer& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SslVpnServer& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline SslVpnServer& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // sslVpnServerId Field Functions 
        bool hasSslVpnServerId() const { return this->sslVpnServerId_ != nullptr;};
        void deleteSslVpnServerId() { this->sslVpnServerId_ = nullptr;};
        inline string getSslVpnServerId() const { DARABONBA_PTR_GET_DEFAULT(sslVpnServerId_, "") };
        inline SslVpnServer& setSslVpnServerId(string sslVpnServerId) { DARABONBA_PTR_SET_VALUE(sslVpnServerId_, sslVpnServerId) };


        // vpnGatewayId Field Functions 
        bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
        void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
        inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
        inline SslVpnServer& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


      protected:
        // The encryption algorithm.
        shared_ptr<string> cipher_ {};
        // The client CIDR block.
        shared_ptr<string> clientIpPool_ {};
        // Indicates whether data compression is enabled. Valid values:
        // 
        // *   **true**
        // *   **false** (default)
        shared_ptr<bool> compress_ {};
        // The total number of current connections.
        shared_ptr<int32_t> connections_ {};
        // The timestamp generated when the SSL-VPN server was created.
        shared_ptr<int64_t> createTime_ {};
        // Indicates whether two-factor authentication is enabled.
        // 
        // *   **true**
        // *   **false** (default)
        shared_ptr<bool> enableMultiFactorAuth_ {};
        // The ID of the IDaaS application.
        shared_ptr<string> IDaaSApplicationId_ {};
        // The ID of the IDaaS EIAM instance.
        shared_ptr<string> IDaaSInstanceId_ {};
        // The version of the IDaaS EIAM instance.
        // 
        // *   This parameter is returned only if the SSL server is associated with an IDaaS EIAM 2.0 instance. Only **EIAM 2.0** is returned.
        // *   If the SSL server is associated with an IDaaS EIAM 1.0 instance, no value is returned.
        shared_ptr<string> IDaaSInstanceVersion_ {};
        // The region ID of the IDaaS EIAM instance.
        shared_ptr<string> IDaaSRegionId_ {};
        // The public IP address of the VPN gateway.
        shared_ptr<string> internetIp_ {};
        // The local CIDR block.
        shared_ptr<string> localSubnet_ {};
        // The maximum number of connections.
        shared_ptr<int32_t> maxConnections_ {};
        // The name of the SSL server.
        shared_ptr<string> name_ {};
        // The port that is used by the SSL-VPN server.
        shared_ptr<int32_t> port_ {};
        // The protocol that is used by the SSL server.
        shared_ptr<string> proto_ {};
        // The region ID of the SSL server.
        shared_ptr<string> regionId_ {};
        // The resource group ID of the SSL server.
        // 
        // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query resource groups.
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the SSL server.
        shared_ptr<string> sslVpnServerId_ {};
        // The ID of the VPN gateway.
        shared_ptr<string> vpnGatewayId_ {};
      };

      virtual bool empty() const override { return this->sslVpnServer_ == nullptr; };
      // sslVpnServer Field Functions 
      bool hasSslVpnServer() const { return this->sslVpnServer_ != nullptr;};
      void deleteSslVpnServer() { this->sslVpnServer_ = nullptr;};
      inline const vector<SslVpnServers::SslVpnServer> & getSslVpnServer() const { DARABONBA_PTR_GET_CONST(sslVpnServer_, vector<SslVpnServers::SslVpnServer>) };
      inline vector<SslVpnServers::SslVpnServer> getSslVpnServer() { DARABONBA_PTR_GET(sslVpnServer_, vector<SslVpnServers::SslVpnServer>) };
      inline SslVpnServers& setSslVpnServer(const vector<SslVpnServers::SslVpnServer> & sslVpnServer) { DARABONBA_PTR_SET_VALUE(sslVpnServer_, sslVpnServer) };
      inline SslVpnServers& setSslVpnServer(vector<SslVpnServers::SslVpnServer> && sslVpnServer) { DARABONBA_PTR_SET_RVALUE(sslVpnServer_, sslVpnServer) };


    protected:
      shared_ptr<vector<SslVpnServers::SslVpnServer>> sslVpnServer_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sslVpnServers_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSslVpnServersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSslVpnServersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSslVpnServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sslVpnServers Field Functions 
    bool hasSslVpnServers() const { return this->sslVpnServers_ != nullptr;};
    void deleteSslVpnServers() { this->sslVpnServers_ = nullptr;};
    inline const DescribeSslVpnServersResponseBody::SslVpnServers & getSslVpnServers() const { DARABONBA_PTR_GET_CONST(sslVpnServers_, DescribeSslVpnServersResponseBody::SslVpnServers) };
    inline DescribeSslVpnServersResponseBody::SslVpnServers getSslVpnServers() { DARABONBA_PTR_GET(sslVpnServers_, DescribeSslVpnServersResponseBody::SslVpnServers) };
    inline DescribeSslVpnServersResponseBody& setSslVpnServers(const DescribeSslVpnServersResponseBody::SslVpnServers & sslVpnServers) { DARABONBA_PTR_SET_VALUE(sslVpnServers_, sslVpnServers) };
    inline DescribeSslVpnServersResponseBody& setSslVpnServers(DescribeSslVpnServersResponseBody::SslVpnServers && sslVpnServers) { DARABONBA_PTR_SET_RVALUE(sslVpnServers_, sslVpnServers) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSslVpnServersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The detailed information about the SSL-VPN servers.
    shared_ptr<DescribeSslVpnServersResponseBody::SslVpnServers> sslVpnServers_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
