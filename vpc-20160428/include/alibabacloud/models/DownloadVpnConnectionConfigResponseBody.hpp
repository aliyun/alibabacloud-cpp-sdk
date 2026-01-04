// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADVPNCONNECTIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADVPNCONNECTIONCONFIGRESPONSEBODY_HPP_
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
  class DownloadVpnConnectionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadVpnConnectionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpnConnectionConfig, vpnConnectionConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadVpnConnectionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionConfig, vpnConnectionConfig_);
    };
    DownloadVpnConnectionConfigResponseBody() = default ;
    DownloadVpnConnectionConfigResponseBody(const DownloadVpnConnectionConfigResponseBody &) = default ;
    DownloadVpnConnectionConfigResponseBody(DownloadVpnConnectionConfigResponseBody &&) = default ;
    DownloadVpnConnectionConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadVpnConnectionConfigResponseBody() = default ;
    DownloadVpnConnectionConfigResponseBody& operator=(const DownloadVpnConnectionConfigResponseBody &) = default ;
    DownloadVpnConnectionConfigResponseBody& operator=(DownloadVpnConnectionConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpnConnectionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpnConnectionConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BgpConfigs, bgpConfigs_);
        DARABONBA_PTR_TO_JSON(IkeConfig, ikeConfig_);
        DARABONBA_PTR_TO_JSON(IpsecConfig, ipsecConfig_);
        DARABONBA_PTR_TO_JSON(Local, local_);
        DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
        DARABONBA_PTR_TO_JSON(Remote, remote_);
        DARABONBA_PTR_TO_JSON(RemoteSubnet, remoteSubnet_);
        DARABONBA_PTR_TO_JSON(TunnelsConfig, tunnelsConfig_);
      };
      friend void from_json(const Darabonba::Json& j, VpnConnectionConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BgpConfigs, bgpConfigs_);
        DARABONBA_PTR_FROM_JSON(IkeConfig, ikeConfig_);
        DARABONBA_PTR_FROM_JSON(IpsecConfig, ipsecConfig_);
        DARABONBA_PTR_FROM_JSON(Local, local_);
        DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
        DARABONBA_PTR_FROM_JSON(Remote, remote_);
        DARABONBA_PTR_FROM_JSON(RemoteSubnet, remoteSubnet_);
        DARABONBA_PTR_FROM_JSON(TunnelsConfig, tunnelsConfig_);
      };
      VpnConnectionConfig() = default ;
      VpnConnectionConfig(const VpnConnectionConfig &) = default ;
      VpnConnectionConfig(VpnConnectionConfig &&) = default ;
      VpnConnectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpnConnectionConfig() = default ;
      VpnConnectionConfig& operator=(const VpnConnectionConfig &) = default ;
      VpnConnectionConfig& operator=(VpnConnectionConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TunnelsConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TunnelsConfig& obj) { 
          DARABONBA_PTR_TO_JSON(TunnelConfig, tunnelConfig_);
        };
        friend void from_json(const Darabonba::Json& j, TunnelsConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(TunnelConfig, tunnelConfig_);
        };
        TunnelsConfig() = default ;
        TunnelsConfig(const TunnelsConfig &) = default ;
        TunnelsConfig(TunnelsConfig &&) = default ;
        TunnelsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TunnelsConfig() = default ;
        TunnelsConfig& operator=(const TunnelsConfig &) = default ;
        TunnelsConfig& operator=(TunnelsConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TunnelConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TunnelConfig& obj) { 
            DARABONBA_PTR_TO_JSON(IkeConfig, ikeConfig_);
            DARABONBA_PTR_TO_JSON(IpsecConfig, ipsecConfig_);
            DARABONBA_PTR_TO_JSON(Local, local_);
            DARABONBA_PTR_TO_JSON(Remote, remote_);
            DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
          };
          friend void from_json(const Darabonba::Json& j, TunnelConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(IkeConfig, ikeConfig_);
            DARABONBA_PTR_FROM_JSON(IpsecConfig, ipsecConfig_);
            DARABONBA_PTR_FROM_JSON(Local, local_);
            DARABONBA_PTR_FROM_JSON(Remote, remote_);
            DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
          };
          TunnelConfig() = default ;
          TunnelConfig(const TunnelConfig &) = default ;
          TunnelConfig(TunnelConfig &&) = default ;
          TunnelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TunnelConfig() = default ;
          TunnelConfig& operator=(const TunnelConfig &) = default ;
          TunnelConfig& operator=(TunnelConfig &&) = default ;
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
            // The authentication algorithm in the IPsec phase.
            shared_ptr<string> ipsecAuthAlg_ {};
            // The encryption algorithm in the IPsec phase.
            shared_ptr<string> ipsecEncAlg_ {};
            // The lifetime in the IPsec phase. Unit: seconds.
            shared_ptr<int64_t> ipsecLifetime_ {};
            // The DH group in the IPsec phase.
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
              DARABONBA_PTR_TO_JSON(Psk, psk_);
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
              DARABONBA_PTR_FROM_JSON(Psk, psk_);
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
        && this->localId_ == nullptr && this->psk_ == nullptr && this->remoteId_ == nullptr; };
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


            // psk Field Functions 
            bool hasPsk() const { return this->psk_ != nullptr;};
            void deletePsk() { this->psk_ = nullptr;};
            inline string getPsk() const { DARABONBA_PTR_GET_DEFAULT(psk_, "") };
            inline IkeConfig& setPsk(string psk) { DARABONBA_PTR_SET_VALUE(psk_, psk) };


            // remoteId Field Functions 
            bool hasRemoteId() const { return this->remoteId_ != nullptr;};
            void deleteRemoteId() { this->remoteId_ = nullptr;};
            inline string getRemoteId() const { DARABONBA_PTR_GET_DEFAULT(remoteId_, "") };
            inline IkeConfig& setRemoteId(string remoteId) { DARABONBA_PTR_SET_VALUE(remoteId_, remoteId) };


          protected:
            // The authentication algorithm in the IKE phase.
            shared_ptr<string> ikeAuthAlg_ {};
            // The encryption algorithm in the IKE phase.
            shared_ptr<string> ikeEncAlg_ {};
            // The lifetime in the IKE phase. Unit: seconds.
            shared_ptr<int64_t> ikeLifetime_ {};
            // The IKE negotiation mode. Valid values:
            // 
            // *   **main**: This mode offers higher security during negotiations.
            // *   **aggressive**: This mode is faster and has a higher success rate.
            shared_ptr<string> ikeMode_ {};
            // The DH group in the IKE phase.
            shared_ptr<string> ikePfs_ {};
            // The IKE version.
            shared_ptr<string> ikeVersion_ {};
            // The identifier of the tunnel on the data center side.
            shared_ptr<string> localId_ {};
            // The pre-shared key.
            shared_ptr<string> psk_ {};
            // The identifier of the tunnel on the Alibaba Cloud side.
            shared_ptr<string> remoteId_ {};
          };

          virtual bool empty() const override { return this->ikeConfig_ == nullptr
        && this->ipsecConfig_ == nullptr && this->local_ == nullptr && this->remote_ == nullptr && this->tunnelId_ == nullptr; };
          // ikeConfig Field Functions 
          bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
          void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
          inline const TunnelConfig::IkeConfig & getIkeConfig() const { DARABONBA_PTR_GET_CONST(ikeConfig_, TunnelConfig::IkeConfig) };
          inline TunnelConfig::IkeConfig getIkeConfig() { DARABONBA_PTR_GET(ikeConfig_, TunnelConfig::IkeConfig) };
          inline TunnelConfig& setIkeConfig(const TunnelConfig::IkeConfig & ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };
          inline TunnelConfig& setIkeConfig(TunnelConfig::IkeConfig && ikeConfig) { DARABONBA_PTR_SET_RVALUE(ikeConfig_, ikeConfig) };


          // ipsecConfig Field Functions 
          bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
          void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
          inline const TunnelConfig::IpsecConfig & getIpsecConfig() const { DARABONBA_PTR_GET_CONST(ipsecConfig_, TunnelConfig::IpsecConfig) };
          inline TunnelConfig::IpsecConfig getIpsecConfig() { DARABONBA_PTR_GET(ipsecConfig_, TunnelConfig::IpsecConfig) };
          inline TunnelConfig& setIpsecConfig(const TunnelConfig::IpsecConfig & ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };
          inline TunnelConfig& setIpsecConfig(TunnelConfig::IpsecConfig && ipsecConfig) { DARABONBA_PTR_SET_RVALUE(ipsecConfig_, ipsecConfig) };


          // local Field Functions 
          bool hasLocal() const { return this->local_ != nullptr;};
          void deleteLocal() { this->local_ = nullptr;};
          inline string getLocal() const { DARABONBA_PTR_GET_DEFAULT(local_, "") };
          inline TunnelConfig& setLocal(string local) { DARABONBA_PTR_SET_VALUE(local_, local) };


          // remote Field Functions 
          bool hasRemote() const { return this->remote_ != nullptr;};
          void deleteRemote() { this->remote_ = nullptr;};
          inline string getRemote() const { DARABONBA_PTR_GET_DEFAULT(remote_, "") };
          inline TunnelConfig& setRemote(string remote) { DARABONBA_PTR_SET_VALUE(remote_, remote) };


          // tunnelId Field Functions 
          bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
          void deleteTunnelId() { this->tunnelId_ = nullptr;};
          inline string getTunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
          inline TunnelConfig& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


        protected:
          // The configurations of Phase 1 negotiations.
          shared_ptr<TunnelConfig::IkeConfig> ikeConfig_ {};
          // The configurations of Phase 2 negotiations.
          shared_ptr<TunnelConfig::IpsecConfig> ipsecConfig_ {};
          // The identifier of the tunnel on the data center side.
          shared_ptr<string> local_ {};
          // The identifier of the tunnel on the Alibaba Cloud side.
          shared_ptr<string> remote_ {};
          // The tunnel ID.
          shared_ptr<string> tunnelId_ {};
        };

        virtual bool empty() const override { return this->tunnelConfig_ == nullptr; };
        // tunnelConfig Field Functions 
        bool hasTunnelConfig() const { return this->tunnelConfig_ != nullptr;};
        void deleteTunnelConfig() { this->tunnelConfig_ = nullptr;};
        inline const vector<TunnelsConfig::TunnelConfig> & getTunnelConfig() const { DARABONBA_PTR_GET_CONST(tunnelConfig_, vector<TunnelsConfig::TunnelConfig>) };
        inline vector<TunnelsConfig::TunnelConfig> getTunnelConfig() { DARABONBA_PTR_GET(tunnelConfig_, vector<TunnelsConfig::TunnelConfig>) };
        inline TunnelsConfig& setTunnelConfig(const vector<TunnelsConfig::TunnelConfig> & tunnelConfig) { DARABONBA_PTR_SET_VALUE(tunnelConfig_, tunnelConfig) };
        inline TunnelsConfig& setTunnelConfig(vector<TunnelsConfig::TunnelConfig> && tunnelConfig) { DARABONBA_PTR_SET_RVALUE(tunnelConfig_, tunnelConfig) };


      protected:
        shared_ptr<vector<TunnelsConfig::TunnelConfig>> tunnelConfig_ {};
      };

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
        // The authentication algorithm in the IPsec phase.
        shared_ptr<string> ipsecAuthAlg_ {};
        // The encryption algorithm in the IPsec phase.
        shared_ptr<string> ipsecEncAlg_ {};
        // The lifetime in the IPsec phase. Unit: seconds.
        shared_ptr<int64_t> ipsecLifetime_ {};
        // The DH group in the IPsec phase.
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
          DARABONBA_PTR_TO_JSON(Psk, psk_);
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
          DARABONBA_PTR_FROM_JSON(Psk, psk_);
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
        && this->localId_ == nullptr && this->psk_ == nullptr && this->remoteId_ == nullptr; };
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


        // psk Field Functions 
        bool hasPsk() const { return this->psk_ != nullptr;};
        void deletePsk() { this->psk_ = nullptr;};
        inline string getPsk() const { DARABONBA_PTR_GET_DEFAULT(psk_, "") };
        inline IkeConfig& setPsk(string psk) { DARABONBA_PTR_SET_VALUE(psk_, psk) };


        // remoteId Field Functions 
        bool hasRemoteId() const { return this->remoteId_ != nullptr;};
        void deleteRemoteId() { this->remoteId_ = nullptr;};
        inline string getRemoteId() const { DARABONBA_PTR_GET_DEFAULT(remoteId_, "") };
        inline IkeConfig& setRemoteId(string remoteId) { DARABONBA_PTR_SET_VALUE(remoteId_, remoteId) };


      protected:
        // The authentication algorithm in the IKE phase.
        shared_ptr<string> ikeAuthAlg_ {};
        // The encryption algorithm in the IKE phase.
        shared_ptr<string> ikeEncAlg_ {};
        // The lifetime in the IKE phase. Unit: seconds.
        shared_ptr<int64_t> ikeLifetime_ {};
        // The IKE negotiation mode. Valid values:
        // 
        // *   **main**: This mode offers higher security during negotiations.
        // *   **aggressive**: This mode is faster and has a higher success rate.
        shared_ptr<string> ikeMode_ {};
        // The DH group in the IKE phase.
        shared_ptr<string> ikePfs_ {};
        // The IKE version.
        shared_ptr<string> ikeVersion_ {};
        // The identifier of the customer gateway. FQDN and IP formats are supported. The default value is the IP address of the customer gateway.
        shared_ptr<string> localId_ {};
        // The pre-shared key.
        shared_ptr<string> psk_ {};
        // The identifier of the VPN gateway. FQDN and IP formats are supported. The default value is the IP address of the VPN gateway.
        shared_ptr<string> remoteId_ {};
      };

      class BgpConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BgpConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(BgpConfig, bgpConfig_);
        };
        friend void from_json(const Darabonba::Json& j, BgpConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(BgpConfig, bgpConfig_);
        };
        BgpConfigs() = default ;
        BgpConfigs(const BgpConfigs &) = default ;
        BgpConfigs(BgpConfigs &&) = default ;
        BgpConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BgpConfigs() = default ;
        BgpConfigs& operator=(const BgpConfigs &) = default ;
        BgpConfigs& operator=(BgpConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BgpConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BgpConfig& obj) { 
            DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
            DARABONBA_PTR_TO_JSON(LocalBgpIp, localBgpIp_);
            DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
            DARABONBA_PTR_TO_JSON(PeerBgpIp, peerBgpIp_);
            DARABONBA_PTR_TO_JSON(TunnelCidr, tunnelCidr_);
            DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
          };
          friend void from_json(const Darabonba::Json& j, BgpConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(LocalAsn, localAsn_);
            DARABONBA_PTR_FROM_JSON(LocalBgpIp, localBgpIp_);
            DARABONBA_PTR_FROM_JSON(PeerAsn, peerAsn_);
            DARABONBA_PTR_FROM_JSON(PeerBgpIp, peerBgpIp_);
            DARABONBA_PTR_FROM_JSON(TunnelCidr, tunnelCidr_);
            DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
          };
          BgpConfig() = default ;
          BgpConfig(const BgpConfig &) = default ;
          BgpConfig(BgpConfig &&) = default ;
          BgpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BgpConfig() = default ;
          BgpConfig& operator=(const BgpConfig &) = default ;
          BgpConfig& operator=(BgpConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->localAsn_ == nullptr
        && this->localBgpIp_ == nullptr && this->peerAsn_ == nullptr && this->peerBgpIp_ == nullptr && this->tunnelCidr_ == nullptr && this->tunnelId_ == nullptr; };
          // localAsn Field Functions 
          bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
          void deleteLocalAsn() { this->localAsn_ = nullptr;};
          inline string getLocalAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, "") };
          inline BgpConfig& setLocalAsn(string localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


          // localBgpIp Field Functions 
          bool hasLocalBgpIp() const { return this->localBgpIp_ != nullptr;};
          void deleteLocalBgpIp() { this->localBgpIp_ = nullptr;};
          inline string getLocalBgpIp() const { DARABONBA_PTR_GET_DEFAULT(localBgpIp_, "") };
          inline BgpConfig& setLocalBgpIp(string localBgpIp) { DARABONBA_PTR_SET_VALUE(localBgpIp_, localBgpIp) };


          // peerAsn Field Functions 
          bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
          void deletePeerAsn() { this->peerAsn_ = nullptr;};
          inline string getPeerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, "") };
          inline BgpConfig& setPeerAsn(string peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


          // peerBgpIp Field Functions 
          bool hasPeerBgpIp() const { return this->peerBgpIp_ != nullptr;};
          void deletePeerBgpIp() { this->peerBgpIp_ = nullptr;};
          inline string getPeerBgpIp() const { DARABONBA_PTR_GET_DEFAULT(peerBgpIp_, "") };
          inline BgpConfig& setPeerBgpIp(string peerBgpIp) { DARABONBA_PTR_SET_VALUE(peerBgpIp_, peerBgpIp) };


          // tunnelCidr Field Functions 
          bool hasTunnelCidr() const { return this->tunnelCidr_ != nullptr;};
          void deleteTunnelCidr() { this->tunnelCidr_ = nullptr;};
          inline string getTunnelCidr() const { DARABONBA_PTR_GET_DEFAULT(tunnelCidr_, "") };
          inline BgpConfig& setTunnelCidr(string tunnelCidr) { DARABONBA_PTR_SET_VALUE(tunnelCidr_, tunnelCidr) };


          // tunnelId Field Functions 
          bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
          void deleteTunnelId() { this->tunnelId_ = nullptr;};
          inline string getTunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
          inline BgpConfig& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


        protected:
          shared_ptr<string> localAsn_ {};
          shared_ptr<string> localBgpIp_ {};
          shared_ptr<string> peerAsn_ {};
          shared_ptr<string> peerBgpIp_ {};
          shared_ptr<string> tunnelCidr_ {};
          shared_ptr<string> tunnelId_ {};
        };

        virtual bool empty() const override { return this->bgpConfig_ == nullptr; };
        // bgpConfig Field Functions 
        bool hasBgpConfig() const { return this->bgpConfig_ != nullptr;};
        void deleteBgpConfig() { this->bgpConfig_ = nullptr;};
        inline const vector<BgpConfigs::BgpConfig> & getBgpConfig() const { DARABONBA_PTR_GET_CONST(bgpConfig_, vector<BgpConfigs::BgpConfig>) };
        inline vector<BgpConfigs::BgpConfig> getBgpConfig() { DARABONBA_PTR_GET(bgpConfig_, vector<BgpConfigs::BgpConfig>) };
        inline BgpConfigs& setBgpConfig(const vector<BgpConfigs::BgpConfig> & bgpConfig) { DARABONBA_PTR_SET_VALUE(bgpConfig_, bgpConfig) };
        inline BgpConfigs& setBgpConfig(vector<BgpConfigs::BgpConfig> && bgpConfig) { DARABONBA_PTR_SET_RVALUE(bgpConfig_, bgpConfig) };


      protected:
        shared_ptr<vector<BgpConfigs::BgpConfig>> bgpConfig_ {};
      };

      virtual bool empty() const override { return this->bgpConfigs_ == nullptr
        && this->ikeConfig_ == nullptr && this->ipsecConfig_ == nullptr && this->local_ == nullptr && this->localSubnet_ == nullptr && this->remote_ == nullptr
        && this->remoteSubnet_ == nullptr && this->tunnelsConfig_ == nullptr; };
      // bgpConfigs Field Functions 
      bool hasBgpConfigs() const { return this->bgpConfigs_ != nullptr;};
      void deleteBgpConfigs() { this->bgpConfigs_ = nullptr;};
      inline const VpnConnectionConfig::BgpConfigs & getBgpConfigs() const { DARABONBA_PTR_GET_CONST(bgpConfigs_, VpnConnectionConfig::BgpConfigs) };
      inline VpnConnectionConfig::BgpConfigs getBgpConfigs() { DARABONBA_PTR_GET(bgpConfigs_, VpnConnectionConfig::BgpConfigs) };
      inline VpnConnectionConfig& setBgpConfigs(const VpnConnectionConfig::BgpConfigs & bgpConfigs) { DARABONBA_PTR_SET_VALUE(bgpConfigs_, bgpConfigs) };
      inline VpnConnectionConfig& setBgpConfigs(VpnConnectionConfig::BgpConfigs && bgpConfigs) { DARABONBA_PTR_SET_RVALUE(bgpConfigs_, bgpConfigs) };


      // ikeConfig Field Functions 
      bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
      void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
      inline const VpnConnectionConfig::IkeConfig & getIkeConfig() const { DARABONBA_PTR_GET_CONST(ikeConfig_, VpnConnectionConfig::IkeConfig) };
      inline VpnConnectionConfig::IkeConfig getIkeConfig() { DARABONBA_PTR_GET(ikeConfig_, VpnConnectionConfig::IkeConfig) };
      inline VpnConnectionConfig& setIkeConfig(const VpnConnectionConfig::IkeConfig & ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };
      inline VpnConnectionConfig& setIkeConfig(VpnConnectionConfig::IkeConfig && ikeConfig) { DARABONBA_PTR_SET_RVALUE(ikeConfig_, ikeConfig) };


      // ipsecConfig Field Functions 
      bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
      void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
      inline const VpnConnectionConfig::IpsecConfig & getIpsecConfig() const { DARABONBA_PTR_GET_CONST(ipsecConfig_, VpnConnectionConfig::IpsecConfig) };
      inline VpnConnectionConfig::IpsecConfig getIpsecConfig() { DARABONBA_PTR_GET(ipsecConfig_, VpnConnectionConfig::IpsecConfig) };
      inline VpnConnectionConfig& setIpsecConfig(const VpnConnectionConfig::IpsecConfig & ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };
      inline VpnConnectionConfig& setIpsecConfig(VpnConnectionConfig::IpsecConfig && ipsecConfig) { DARABONBA_PTR_SET_RVALUE(ipsecConfig_, ipsecConfig) };


      // local Field Functions 
      bool hasLocal() const { return this->local_ != nullptr;};
      void deleteLocal() { this->local_ = nullptr;};
      inline string getLocal() const { DARABONBA_PTR_GET_DEFAULT(local_, "") };
      inline VpnConnectionConfig& setLocal(string local) { DARABONBA_PTR_SET_VALUE(local_, local) };


      // localSubnet Field Functions 
      bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
      void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
      inline string getLocalSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
      inline VpnConnectionConfig& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


      // remote Field Functions 
      bool hasRemote() const { return this->remote_ != nullptr;};
      void deleteRemote() { this->remote_ = nullptr;};
      inline string getRemote() const { DARABONBA_PTR_GET_DEFAULT(remote_, "") };
      inline VpnConnectionConfig& setRemote(string remote) { DARABONBA_PTR_SET_VALUE(remote_, remote) };


      // remoteSubnet Field Functions 
      bool hasRemoteSubnet() const { return this->remoteSubnet_ != nullptr;};
      void deleteRemoteSubnet() { this->remoteSubnet_ = nullptr;};
      inline string getRemoteSubnet() const { DARABONBA_PTR_GET_DEFAULT(remoteSubnet_, "") };
      inline VpnConnectionConfig& setRemoteSubnet(string remoteSubnet) { DARABONBA_PTR_SET_VALUE(remoteSubnet_, remoteSubnet) };


      // tunnelsConfig Field Functions 
      bool hasTunnelsConfig() const { return this->tunnelsConfig_ != nullptr;};
      void deleteTunnelsConfig() { this->tunnelsConfig_ = nullptr;};
      inline const VpnConnectionConfig::TunnelsConfig & getTunnelsConfig() const { DARABONBA_PTR_GET_CONST(tunnelsConfig_, VpnConnectionConfig::TunnelsConfig) };
      inline VpnConnectionConfig::TunnelsConfig getTunnelsConfig() { DARABONBA_PTR_GET(tunnelsConfig_, VpnConnectionConfig::TunnelsConfig) };
      inline VpnConnectionConfig& setTunnelsConfig(const VpnConnectionConfig::TunnelsConfig & tunnelsConfig) { DARABONBA_PTR_SET_VALUE(tunnelsConfig_, tunnelsConfig) };
      inline VpnConnectionConfig& setTunnelsConfig(VpnConnectionConfig::TunnelsConfig && tunnelsConfig) { DARABONBA_PTR_SET_RVALUE(tunnelsConfig_, tunnelsConfig) };


    protected:
      shared_ptr<VpnConnectionConfig::BgpConfigs> bgpConfigs_ {};
      // The configurations of Phase 1 negotiations.
      shared_ptr<VpnConnectionConfig::IkeConfig> ikeConfig_ {};
      // The configurations of Phase 2 negotiations.
      shared_ptr<VpnConnectionConfig::IpsecConfig> ipsecConfig_ {};
      // The identifier of the customer gateway.
      shared_ptr<string> local_ {};
      // The CIDR block on the data center side.
      shared_ptr<string> localSubnet_ {};
      // The identifier of the VPN gateway.
      shared_ptr<string> remote_ {};
      // The CIDR block on the virtual private cloud (VPC) side.
      shared_ptr<string> remoteSubnet_ {};
      // The tunnel configurations of the peer gateway device.
      // 
      // The parameters in **TunnelsConfig** are returned only when the IPsec-VPN connection supports the dual-tunnel mode.
      shared_ptr<VpnConnectionConfig::TunnelsConfig> tunnelsConfig_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vpnConnectionConfig_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadVpnConnectionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpnConnectionConfig Field Functions 
    bool hasVpnConnectionConfig() const { return this->vpnConnectionConfig_ != nullptr;};
    void deleteVpnConnectionConfig() { this->vpnConnectionConfig_ = nullptr;};
    inline const DownloadVpnConnectionConfigResponseBody::VpnConnectionConfig & getVpnConnectionConfig() const { DARABONBA_PTR_GET_CONST(vpnConnectionConfig_, DownloadVpnConnectionConfigResponseBody::VpnConnectionConfig) };
    inline DownloadVpnConnectionConfigResponseBody::VpnConnectionConfig getVpnConnectionConfig() { DARABONBA_PTR_GET(vpnConnectionConfig_, DownloadVpnConnectionConfigResponseBody::VpnConnectionConfig) };
    inline DownloadVpnConnectionConfigResponseBody& setVpnConnectionConfig(const DownloadVpnConnectionConfigResponseBody::VpnConnectionConfig & vpnConnectionConfig) { DARABONBA_PTR_SET_VALUE(vpnConnectionConfig_, vpnConnectionConfig) };
    inline DownloadVpnConnectionConfigResponseBody& setVpnConnectionConfig(DownloadVpnConnectionConfigResponseBody::VpnConnectionConfig && vpnConnectionConfig) { DARABONBA_PTR_SET_RVALUE(vpnConnectionConfig_, vpnConnectionConfig) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The configurations of the peer gateway device.
    shared_ptr<DownloadVpnConnectionConfigResponseBody::VpnConnectionConfig> vpnConnectionConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
