// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPSECSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPSECSERVERSRESPONSEBODY_HPP_
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
  class ListIpsecServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpsecServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpsecServers, ipsecServers_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpsecServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpsecServers, ipsecServers_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpsecServersResponseBody() = default ;
    ListIpsecServersResponseBody(const ListIpsecServersResponseBody &) = default ;
    ListIpsecServersResponseBody(ListIpsecServersResponseBody &&) = default ;
    ListIpsecServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpsecServersResponseBody() = default ;
    ListIpsecServersResponseBody& operator=(const ListIpsecServersResponseBody &) = default ;
    ListIpsecServersResponseBody& operator=(ListIpsecServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpsecServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpsecServers& obj) { 
        DARABONBA_PTR_TO_JSON(ClientIpPool, clientIpPool_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(EffectImmediately, effectImmediately_);
        DARABONBA_PTR_TO_JSON(IDaaSInstanceId, IDaaSInstanceId_);
        DARABONBA_PTR_TO_JSON(IkeConfig, ikeConfig_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IpsecConfig, ipsecConfig_);
        DARABONBA_PTR_TO_JSON(IpsecServerId, ipsecServerId_);
        DARABONBA_PTR_TO_JSON(IpsecServerName, ipsecServerName_);
        DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
        DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
        DARABONBA_PTR_TO_JSON(MultiFactorAuthEnabled, multiFactorAuthEnabled_);
        DARABONBA_PTR_TO_JSON(OnlineClientCount, onlineClientCount_);
        DARABONBA_PTR_TO_JSON(Psk, psk_);
        DARABONBA_PTR_TO_JSON(PskEnabled, pskEnabled_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
      };
      friend void from_json(const Darabonba::Json& j, IpsecServers& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientIpPool, clientIpPool_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(EffectImmediately, effectImmediately_);
        DARABONBA_PTR_FROM_JSON(IDaaSInstanceId, IDaaSInstanceId_);
        DARABONBA_PTR_FROM_JSON(IkeConfig, ikeConfig_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IpsecConfig, ipsecConfig_);
        DARABONBA_PTR_FROM_JSON(IpsecServerId, ipsecServerId_);
        DARABONBA_PTR_FROM_JSON(IpsecServerName, ipsecServerName_);
        DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
        DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
        DARABONBA_PTR_FROM_JSON(MultiFactorAuthEnabled, multiFactorAuthEnabled_);
        DARABONBA_PTR_FROM_JSON(OnlineClientCount, onlineClientCount_);
        DARABONBA_PTR_FROM_JSON(Psk, psk_);
        DARABONBA_PTR_FROM_JSON(PskEnabled, pskEnabled_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
      };
      IpsecServers() = default ;
      IpsecServers(const IpsecServers &) = default ;
      IpsecServers(IpsecServers &&) = default ;
      IpsecServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpsecServers() = default ;
      IpsecServers& operator=(const IpsecServers &) = default ;
      IpsecServers& operator=(IpsecServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IpsecConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpsecConfig& obj) { 
          DARABONBA_PTR_TO_JSON(IpsecAuthAlg, ipsecAuthAlg_);
          DARABONBA_PTR_TO_JSON(IpsecEncAlg, ipsecEncAlg_);
          DARABONBA_PTR_TO_JSON(IpsecLifetime, ipsecLifetime_);
          DARABONBA_PTR_TO_JSON(IpsecPfs, ipsecPfs_);
        };
        friend void from_json(const Darabonba::Json& j, IpsecConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(IpsecAuthAlg, ipsecAuthAlg_);
          DARABONBA_PTR_FROM_JSON(IpsecEncAlg, ipsecEncAlg_);
          DARABONBA_PTR_FROM_JSON(IpsecLifetime, ipsecLifetime_);
          DARABONBA_PTR_FROM_JSON(IpsecPfs, ipsecPfs_);
        };
        IpsecConfig() = default ;
        IpsecConfig(const IpsecConfig &) = default ;
        IpsecConfig(IpsecConfig &&) = default ;
        IpsecConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpsecConfig() = default ;
        IpsecConfig& operator=(const IpsecConfig &) = default ;
        IpsecConfig& operator=(IpsecConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipsecAuthAlg_ == nullptr
        && this->ipsecEncAlg_ == nullptr && this->ipsecLifetime_ == nullptr && this->ipsecPfs_ == nullptr; };
        // ipsecAuthAlg Field Functions 
        bool hasIpsecAuthAlg() const { return this->ipsecAuthAlg_ != nullptr;};
        void deleteIpsecAuthAlg() { this->ipsecAuthAlg_ = nullptr;};
        inline string getIpsecAuthAlg() const { DARABONBA_PTR_GET_DEFAULT(ipsecAuthAlg_, "") };
        inline IpsecConfig& setIpsecAuthAlg(string ipsecAuthAlg) { DARABONBA_PTR_SET_VALUE(ipsecAuthAlg_, ipsecAuthAlg) };


        // ipsecEncAlg Field Functions 
        bool hasIpsecEncAlg() const { return this->ipsecEncAlg_ != nullptr;};
        void deleteIpsecEncAlg() { this->ipsecEncAlg_ = nullptr;};
        inline string getIpsecEncAlg() const { DARABONBA_PTR_GET_DEFAULT(ipsecEncAlg_, "") };
        inline IpsecConfig& setIpsecEncAlg(string ipsecEncAlg) { DARABONBA_PTR_SET_VALUE(ipsecEncAlg_, ipsecEncAlg) };


        // ipsecLifetime Field Functions 
        bool hasIpsecLifetime() const { return this->ipsecLifetime_ != nullptr;};
        void deleteIpsecLifetime() { this->ipsecLifetime_ = nullptr;};
        inline int64_t getIpsecLifetime() const { DARABONBA_PTR_GET_DEFAULT(ipsecLifetime_, 0L) };
        inline IpsecConfig& setIpsecLifetime(int64_t ipsecLifetime) { DARABONBA_PTR_SET_VALUE(ipsecLifetime_, ipsecLifetime) };


        // ipsecPfs Field Functions 
        bool hasIpsecPfs() const { return this->ipsecPfs_ != nullptr;};
        void deleteIpsecPfs() { this->ipsecPfs_ = nullptr;};
        inline string getIpsecPfs() const { DARABONBA_PTR_GET_DEFAULT(ipsecPfs_, "") };
        inline IpsecConfig& setIpsecPfs(string ipsecPfs) { DARABONBA_PTR_SET_VALUE(ipsecPfs_, ipsecPfs) };


      protected:
        // The IPsec authentication algorithm.
        shared_ptr<string> ipsecAuthAlg_ {};
        // The IPsec encryption algorithm.
        shared_ptr<string> ipsecEncAlg_ {};
        // The IPsec lifetime. Unit: seconds.
        shared_ptr<int64_t> ipsecLifetime_ {};
        // The Diffie-Hellman key exchange algorithm.
        shared_ptr<string> ipsecPfs_ {};
      };

      class IkeConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IkeConfig& obj) { 
          DARABONBA_PTR_TO_JSON(IkeAuthAlg, ikeAuthAlg_);
          DARABONBA_PTR_TO_JSON(IkeEncAlg, ikeEncAlg_);
          DARABONBA_PTR_TO_JSON(IkeLifetime, ikeLifetime_);
          DARABONBA_PTR_TO_JSON(IkeMode, ikeMode_);
          DARABONBA_PTR_TO_JSON(IkePfs, ikePfs_);
          DARABONBA_PTR_TO_JSON(IkeVersion, ikeVersion_);
          DARABONBA_PTR_TO_JSON(LocalId, localId_);
          DARABONBA_PTR_TO_JSON(RemoteId, remoteId_);
        };
        friend void from_json(const Darabonba::Json& j, IkeConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(IkeAuthAlg, ikeAuthAlg_);
          DARABONBA_PTR_FROM_JSON(IkeEncAlg, ikeEncAlg_);
          DARABONBA_PTR_FROM_JSON(IkeLifetime, ikeLifetime_);
          DARABONBA_PTR_FROM_JSON(IkeMode, ikeMode_);
          DARABONBA_PTR_FROM_JSON(IkePfs, ikePfs_);
          DARABONBA_PTR_FROM_JSON(IkeVersion, ikeVersion_);
          DARABONBA_PTR_FROM_JSON(LocalId, localId_);
          DARABONBA_PTR_FROM_JSON(RemoteId, remoteId_);
        };
        IkeConfig() = default ;
        IkeConfig(const IkeConfig &) = default ;
        IkeConfig(IkeConfig &&) = default ;
        IkeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IkeConfig() = default ;
        IkeConfig& operator=(const IkeConfig &) = default ;
        IkeConfig& operator=(IkeConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ikeAuthAlg_ == nullptr
        && this->ikeEncAlg_ == nullptr && this->ikeLifetime_ == nullptr && this->ikeMode_ == nullptr && this->ikePfs_ == nullptr && this->ikeVersion_ == nullptr
        && this->localId_ == nullptr && this->remoteId_ == nullptr; };
        // ikeAuthAlg Field Functions 
        bool hasIkeAuthAlg() const { return this->ikeAuthAlg_ != nullptr;};
        void deleteIkeAuthAlg() { this->ikeAuthAlg_ = nullptr;};
        inline string getIkeAuthAlg() const { DARABONBA_PTR_GET_DEFAULT(ikeAuthAlg_, "") };
        inline IkeConfig& setIkeAuthAlg(string ikeAuthAlg) { DARABONBA_PTR_SET_VALUE(ikeAuthAlg_, ikeAuthAlg) };


        // ikeEncAlg Field Functions 
        bool hasIkeEncAlg() const { return this->ikeEncAlg_ != nullptr;};
        void deleteIkeEncAlg() { this->ikeEncAlg_ = nullptr;};
        inline string getIkeEncAlg() const { DARABONBA_PTR_GET_DEFAULT(ikeEncAlg_, "") };
        inline IkeConfig& setIkeEncAlg(string ikeEncAlg) { DARABONBA_PTR_SET_VALUE(ikeEncAlg_, ikeEncAlg) };


        // ikeLifetime Field Functions 
        bool hasIkeLifetime() const { return this->ikeLifetime_ != nullptr;};
        void deleteIkeLifetime() { this->ikeLifetime_ = nullptr;};
        inline int64_t getIkeLifetime() const { DARABONBA_PTR_GET_DEFAULT(ikeLifetime_, 0L) };
        inline IkeConfig& setIkeLifetime(int64_t ikeLifetime) { DARABONBA_PTR_SET_VALUE(ikeLifetime_, ikeLifetime) };


        // ikeMode Field Functions 
        bool hasIkeMode() const { return this->ikeMode_ != nullptr;};
        void deleteIkeMode() { this->ikeMode_ = nullptr;};
        inline string getIkeMode() const { DARABONBA_PTR_GET_DEFAULT(ikeMode_, "") };
        inline IkeConfig& setIkeMode(string ikeMode) { DARABONBA_PTR_SET_VALUE(ikeMode_, ikeMode) };


        // ikePfs Field Functions 
        bool hasIkePfs() const { return this->ikePfs_ != nullptr;};
        void deleteIkePfs() { this->ikePfs_ = nullptr;};
        inline string getIkePfs() const { DARABONBA_PTR_GET_DEFAULT(ikePfs_, "") };
        inline IkeConfig& setIkePfs(string ikePfs) { DARABONBA_PTR_SET_VALUE(ikePfs_, ikePfs) };


        // ikeVersion Field Functions 
        bool hasIkeVersion() const { return this->ikeVersion_ != nullptr;};
        void deleteIkeVersion() { this->ikeVersion_ = nullptr;};
        inline string getIkeVersion() const { DARABONBA_PTR_GET_DEFAULT(ikeVersion_, "") };
        inline IkeConfig& setIkeVersion(string ikeVersion) { DARABONBA_PTR_SET_VALUE(ikeVersion_, ikeVersion) };


        // localId Field Functions 
        bool hasLocalId() const { return this->localId_ != nullptr;};
        void deleteLocalId() { this->localId_ = nullptr;};
        inline string getLocalId() const { DARABONBA_PTR_GET_DEFAULT(localId_, "") };
        inline IkeConfig& setLocalId(string localId) { DARABONBA_PTR_SET_VALUE(localId_, localId) };


        // remoteId Field Functions 
        bool hasRemoteId() const { return this->remoteId_ != nullptr;};
        void deleteRemoteId() { this->remoteId_ = nullptr;};
        inline string getRemoteId() const { DARABONBA_PTR_GET_DEFAULT(remoteId_, "") };
        inline IkeConfig& setRemoteId(string remoteId) { DARABONBA_PTR_SET_VALUE(remoteId_, remoteId) };


      protected:
        // The IKE authentication algorithm.
        shared_ptr<string> ikeAuthAlg_ {};
        // The IKE encryption algorithm.
        shared_ptr<string> ikeEncAlg_ {};
        // The IKE lifetime. Unit: seconds.
        shared_ptr<int64_t> ikeLifetime_ {};
        // The IKE negotiation mode. Valid values:
        // 
        // **main**: This mode offers higher security during negotiations.
        shared_ptr<string> ikeMode_ {};
        // The Diffie-Hellman key exchange algorithm.
        shared_ptr<string> ikePfs_ {};
        // The IKE version.
        shared_ptr<string> ikeVersion_ {};
        // The ID of the IPsec server. The default value is the public IP address of the VPN gateway. Both FQDNs and IP addresses are supported.
        shared_ptr<string> localId_ {};
        // The identifier of the customer gateway. Both fully qualified domain names (FQDNs) and IP addresses are supported. By default, this parameter is empty.
        shared_ptr<string> remoteId_ {};
      };

      virtual bool empty() const override { return this->clientIpPool_ == nullptr
        && this->creationTime_ == nullptr && this->effectImmediately_ == nullptr && this->IDaaSInstanceId_ == nullptr && this->ikeConfig_ == nullptr && this->internetIp_ == nullptr
        && this->ipsecConfig_ == nullptr && this->ipsecServerId_ == nullptr && this->ipsecServerName_ == nullptr && this->localSubnet_ == nullptr && this->maxConnections_ == nullptr
        && this->multiFactorAuthEnabled_ == nullptr && this->onlineClientCount_ == nullptr && this->psk_ == nullptr && this->pskEnabled_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->vpnGatewayId_ == nullptr; };
      // clientIpPool Field Functions 
      bool hasClientIpPool() const { return this->clientIpPool_ != nullptr;};
      void deleteClientIpPool() { this->clientIpPool_ = nullptr;};
      inline string getClientIpPool() const { DARABONBA_PTR_GET_DEFAULT(clientIpPool_, "") };
      inline IpsecServers& setClientIpPool(string clientIpPool) { DARABONBA_PTR_SET_VALUE(clientIpPool_, clientIpPool) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline IpsecServers& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // effectImmediately Field Functions 
      bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
      void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
      inline bool getEffectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
      inline IpsecServers& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


      // IDaaSInstanceId Field Functions 
      bool hasIDaaSInstanceId() const { return this->IDaaSInstanceId_ != nullptr;};
      void deleteIDaaSInstanceId() { this->IDaaSInstanceId_ = nullptr;};
      inline string getIDaaSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSInstanceId_, "") };
      inline IpsecServers& setIDaaSInstanceId(string IDaaSInstanceId) { DARABONBA_PTR_SET_VALUE(IDaaSInstanceId_, IDaaSInstanceId) };


      // ikeConfig Field Functions 
      bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
      void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
      inline const IpsecServers::IkeConfig & getIkeConfig() const { DARABONBA_PTR_GET_CONST(ikeConfig_, IpsecServers::IkeConfig) };
      inline IpsecServers::IkeConfig getIkeConfig() { DARABONBA_PTR_GET(ikeConfig_, IpsecServers::IkeConfig) };
      inline IpsecServers& setIkeConfig(const IpsecServers::IkeConfig & ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };
      inline IpsecServers& setIkeConfig(IpsecServers::IkeConfig && ikeConfig) { DARABONBA_PTR_SET_RVALUE(ikeConfig_, ikeConfig) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline IpsecServers& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // ipsecConfig Field Functions 
      bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
      void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
      inline const IpsecServers::IpsecConfig & getIpsecConfig() const { DARABONBA_PTR_GET_CONST(ipsecConfig_, IpsecServers::IpsecConfig) };
      inline IpsecServers::IpsecConfig getIpsecConfig() { DARABONBA_PTR_GET(ipsecConfig_, IpsecServers::IpsecConfig) };
      inline IpsecServers& setIpsecConfig(const IpsecServers::IpsecConfig & ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };
      inline IpsecServers& setIpsecConfig(IpsecServers::IpsecConfig && ipsecConfig) { DARABONBA_PTR_SET_RVALUE(ipsecConfig_, ipsecConfig) };


      // ipsecServerId Field Functions 
      bool hasIpsecServerId() const { return this->ipsecServerId_ != nullptr;};
      void deleteIpsecServerId() { this->ipsecServerId_ = nullptr;};
      inline string getIpsecServerId() const { DARABONBA_PTR_GET_DEFAULT(ipsecServerId_, "") };
      inline IpsecServers& setIpsecServerId(string ipsecServerId) { DARABONBA_PTR_SET_VALUE(ipsecServerId_, ipsecServerId) };


      // ipsecServerName Field Functions 
      bool hasIpsecServerName() const { return this->ipsecServerName_ != nullptr;};
      void deleteIpsecServerName() { this->ipsecServerName_ = nullptr;};
      inline string getIpsecServerName() const { DARABONBA_PTR_GET_DEFAULT(ipsecServerName_, "") };
      inline IpsecServers& setIpsecServerName(string ipsecServerName) { DARABONBA_PTR_SET_VALUE(ipsecServerName_, ipsecServerName) };


      // localSubnet Field Functions 
      bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
      void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
      inline string getLocalSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
      inline IpsecServers& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


      // maxConnections Field Functions 
      bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
      void deleteMaxConnections() { this->maxConnections_ = nullptr;};
      inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
      inline IpsecServers& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


      // multiFactorAuthEnabled Field Functions 
      bool hasMultiFactorAuthEnabled() const { return this->multiFactorAuthEnabled_ != nullptr;};
      void deleteMultiFactorAuthEnabled() { this->multiFactorAuthEnabled_ = nullptr;};
      inline bool getMultiFactorAuthEnabled() const { DARABONBA_PTR_GET_DEFAULT(multiFactorAuthEnabled_, false) };
      inline IpsecServers& setMultiFactorAuthEnabled(bool multiFactorAuthEnabled) { DARABONBA_PTR_SET_VALUE(multiFactorAuthEnabled_, multiFactorAuthEnabled) };


      // onlineClientCount Field Functions 
      bool hasOnlineClientCount() const { return this->onlineClientCount_ != nullptr;};
      void deleteOnlineClientCount() { this->onlineClientCount_ = nullptr;};
      inline int32_t getOnlineClientCount() const { DARABONBA_PTR_GET_DEFAULT(onlineClientCount_, 0) };
      inline IpsecServers& setOnlineClientCount(int32_t onlineClientCount) { DARABONBA_PTR_SET_VALUE(onlineClientCount_, onlineClientCount) };


      // psk Field Functions 
      bool hasPsk() const { return this->psk_ != nullptr;};
      void deletePsk() { this->psk_ = nullptr;};
      inline string getPsk() const { DARABONBA_PTR_GET_DEFAULT(psk_, "") };
      inline IpsecServers& setPsk(string psk) { DARABONBA_PTR_SET_VALUE(psk_, psk) };


      // pskEnabled Field Functions 
      bool hasPskEnabled() const { return this->pskEnabled_ != nullptr;};
      void deletePskEnabled() { this->pskEnabled_ = nullptr;};
      inline bool getPskEnabled() const { DARABONBA_PTR_GET_DEFAULT(pskEnabled_, false) };
      inline IpsecServers& setPskEnabled(bool pskEnabled) { DARABONBA_PTR_SET_VALUE(pskEnabled_, pskEnabled) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline IpsecServers& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline IpsecServers& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // vpnGatewayId Field Functions 
      bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
      void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
      inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
      inline IpsecServers& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


    protected:
      // The client CIDR block. It refers to the CIDR block that is allocated to the virtual interface of the client.
      shared_ptr<string> clientIpPool_ {};
      // The time when the IPsec server was created.
      // 
      // T is used as a delimiter. Z indicates that the time is in UTC.
      shared_ptr<string> creationTime_ {};
      // Indicates whether the current IPsec tunnel is deleted and negotiations are reinitiated. Valid values:
      // 
      // *   **true**: immediately initiates negotiations after the configuration is completed.
      // *   **false**: initiates negotiations when inbound traffic is detected.
      shared_ptr<bool> effectImmediately_ {};
      // The ID of the IDaaS instance.
      shared_ptr<string> IDaaSInstanceId_ {};
      // The configurations of Phase 1 negotiations.
      shared_ptr<IpsecServers::IkeConfig> ikeConfig_ {};
      // The public IP address of the VPN gateway.
      shared_ptr<string> internetIp_ {};
      // The configurations of Phase 2 negotiations.
      shared_ptr<IpsecServers::IpsecConfig> ipsecConfig_ {};
      // The IPsec server ID.
      shared_ptr<string> ipsecServerId_ {};
      // The name of the IPsec server.
      shared_ptr<string> ipsecServerName_ {};
      // The local CIDR blocks, which refer to the CIDR blocks on the virtual private cloud (VPC) side.
      shared_ptr<string> localSubnet_ {};
      // The number of SSL-VPN connections supported by the VPN gateway.
      // 
      // >  The number of SSL-VPN connections specified in this parameter includes both SSL-VPN and IPsec-VPN connections. For example, you have five SSL-VPN connections and three SSL clients occupy three SSL-VPN connections. In this case, two clients can connect to the IPsec server.
      shared_ptr<int32_t> maxConnections_ {};
      // Indicates whether two-factor authentication is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**: The feature is disabled.
      shared_ptr<bool> multiFactorAuthEnabled_ {};
      // The number of clients that are connected to the IPsec server.
      shared_ptr<int32_t> onlineClientCount_ {};
      // The pre-shared key.
      shared_ptr<string> psk_ {};
      // Indicates whether pre-shared key authentication is enabled. Only **true** may be returned, which indicates that pre-shared key authentication is enabled.
      shared_ptr<bool> pskEnabled_ {};
      // The ID of the region where the IPsec server is created.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group to which the IPsec server belongs.
      // 
      // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query the resource group information.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the VPN gateway.
      shared_ptr<string> vpnGatewayId_ {};
    };

    virtual bool empty() const override { return this->ipsecServers_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ipsecServers Field Functions 
    bool hasIpsecServers() const { return this->ipsecServers_ != nullptr;};
    void deleteIpsecServers() { this->ipsecServers_ = nullptr;};
    inline const vector<ListIpsecServersResponseBody::IpsecServers> & getIpsecServers() const { DARABONBA_PTR_GET_CONST(ipsecServers_, vector<ListIpsecServersResponseBody::IpsecServers>) };
    inline vector<ListIpsecServersResponseBody::IpsecServers> getIpsecServers() { DARABONBA_PTR_GET(ipsecServers_, vector<ListIpsecServersResponseBody::IpsecServers>) };
    inline ListIpsecServersResponseBody& setIpsecServers(const vector<ListIpsecServersResponseBody::IpsecServers> & ipsecServers) { DARABONBA_PTR_SET_VALUE(ipsecServers_, ipsecServers) };
    inline ListIpsecServersResponseBody& setIpsecServers(vector<ListIpsecServersResponseBody::IpsecServers> && ipsecServers) { DARABONBA_PTR_SET_RVALUE(ipsecServers_, ipsecServers) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIpsecServersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpsecServersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpsecServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListIpsecServersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of IPsec servers.
    shared_ptr<vector<ListIpsecServersResponseBody::IpsecServers>> ipsecServers_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next queries are sent.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
