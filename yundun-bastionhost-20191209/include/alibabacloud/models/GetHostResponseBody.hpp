// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetHostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetHostResponseBody() = default ;
    GetHostResponseBody(const GetHostResponseBody &) = default ;
    GetHostResponseBody(GetHostResponseBody &&) = default ;
    GetHostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostResponseBody() = default ;
    GetHostResponseBody& operator=(const GetHostResponseBody &) = default ;
    GetHostResponseBody& operator=(GetHostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Host : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Host& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveAddressType, activeAddressType_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(HostPrivateAddress, hostPrivateAddress_);
        DARABONBA_PTR_TO_JSON(HostPublicAddress, hostPublicAddress_);
        DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
        DARABONBA_PTR_TO_JSON(OSType, OSType_);
        DARABONBA_PTR_TO_JSON(PrefKex, prefKex_);
        DARABONBA_PTR_TO_JSON(Protocols, protocols_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
        DARABONBA_PTR_TO_JSON(SourceInstanceState, sourceInstanceState_);
      };
      friend void from_json(const Darabonba::Json& j, Host& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveAddressType, activeAddressType_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(HostPrivateAddress, hostPrivateAddress_);
        DARABONBA_PTR_FROM_JSON(HostPublicAddress, hostPublicAddress_);
        DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
        DARABONBA_PTR_FROM_JSON(OSType, OSType_);
        DARABONBA_PTR_FROM_JSON(PrefKex, prefKex_);
        DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
        DARABONBA_PTR_FROM_JSON(SourceInstanceState, sourceInstanceState_);
      };
      Host() = default ;
      Host(const Host &) = default ;
      Host(Host &&) = default ;
      Host(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Host() = default ;
      Host& operator=(const Host &) = default ;
      Host& operator=(Host &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Protocols : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Protocols& obj) { 
          DARABONBA_PTR_TO_JSON(HostFingerPrint, hostFingerPrint_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
        };
        friend void from_json(const Darabonba::Json& j, Protocols& obj) { 
          DARABONBA_PTR_FROM_JSON(HostFingerPrint, hostFingerPrint_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
        };
        Protocols() = default ;
        Protocols(const Protocols &) = default ;
        Protocols(Protocols &&) = default ;
        Protocols(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Protocols() = default ;
        Protocols& operator=(const Protocols &) = default ;
        Protocols& operator=(Protocols &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hostFingerPrint_ == nullptr
        && this->port_ == nullptr && this->protocolName_ == nullptr; };
        // hostFingerPrint Field Functions 
        bool hasHostFingerPrint() const { return this->hostFingerPrint_ != nullptr;};
        void deleteHostFingerPrint() { this->hostFingerPrint_ = nullptr;};
        inline string getHostFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(hostFingerPrint_, "") };
        inline Protocols& setHostFingerPrint(string hostFingerPrint) { DARABONBA_PTR_SET_VALUE(hostFingerPrint_, hostFingerPrint) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Protocols& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocolName Field Functions 
        bool hasProtocolName() const { return this->protocolName_ != nullptr;};
        void deleteProtocolName() { this->protocolName_ = nullptr;};
        inline string getProtocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
        inline Protocols& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


      protected:
        // The fingerprint of the host. This parameter uniquely identifies a host. A value is returned for this parameter only if you have performed O\\&M operations on the host by using the bastion host. Otherwise, no value is returned.
        shared_ptr<string> hostFingerPrint_ {};
        // The service port of the host.
        shared_ptr<int32_t> port_ {};
        // The protocol that is used to connect to the host. Valid values:
        // 
        // *   **SSH**
        // *   **RDP**
        shared_ptr<string> protocolName_ {};
      };

      virtual bool empty() const override { return this->activeAddressType_ == nullptr
        && this->comment_ == nullptr && this->hostId_ == nullptr && this->hostName_ == nullptr && this->hostPrivateAddress_ == nullptr && this->hostPublicAddress_ == nullptr
        && this->networkDomainId_ == nullptr && this->OSType_ == nullptr && this->prefKex_ == nullptr && this->protocols_ == nullptr && this->source_ == nullptr
        && this->sourceInstanceId_ == nullptr && this->sourceInstanceState_ == nullptr; };
      // activeAddressType Field Functions 
      bool hasActiveAddressType() const { return this->activeAddressType_ != nullptr;};
      void deleteActiveAddressType() { this->activeAddressType_ = nullptr;};
      inline string getActiveAddressType() const { DARABONBA_PTR_GET_DEFAULT(activeAddressType_, "") };
      inline Host& setActiveAddressType(string activeAddressType) { DARABONBA_PTR_SET_VALUE(activeAddressType_, activeAddressType) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Host& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline Host& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline Host& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // hostPrivateAddress Field Functions 
      bool hasHostPrivateAddress() const { return this->hostPrivateAddress_ != nullptr;};
      void deleteHostPrivateAddress() { this->hostPrivateAddress_ = nullptr;};
      inline string getHostPrivateAddress() const { DARABONBA_PTR_GET_DEFAULT(hostPrivateAddress_, "") };
      inline Host& setHostPrivateAddress(string hostPrivateAddress) { DARABONBA_PTR_SET_VALUE(hostPrivateAddress_, hostPrivateAddress) };


      // hostPublicAddress Field Functions 
      bool hasHostPublicAddress() const { return this->hostPublicAddress_ != nullptr;};
      void deleteHostPublicAddress() { this->hostPublicAddress_ = nullptr;};
      inline string getHostPublicAddress() const { DARABONBA_PTR_GET_DEFAULT(hostPublicAddress_, "") };
      inline Host& setHostPublicAddress(string hostPublicAddress) { DARABONBA_PTR_SET_VALUE(hostPublicAddress_, hostPublicAddress) };


      // networkDomainId Field Functions 
      bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
      void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
      inline string getNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
      inline Host& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


      // OSType Field Functions 
      bool hasOSType() const { return this->OSType_ != nullptr;};
      void deleteOSType() { this->OSType_ = nullptr;};
      inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
      inline Host& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


      // prefKex Field Functions 
      bool hasPrefKex() const { return this->prefKex_ != nullptr;};
      void deletePrefKex() { this->prefKex_ = nullptr;};
      inline string getPrefKex() const { DARABONBA_PTR_GET_DEFAULT(prefKex_, "") };
      inline Host& setPrefKex(string prefKex) { DARABONBA_PTR_SET_VALUE(prefKex_, prefKex) };


      // protocols Field Functions 
      bool hasProtocols() const { return this->protocols_ != nullptr;};
      void deleteProtocols() { this->protocols_ = nullptr;};
      inline const vector<Host::Protocols> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<Host::Protocols>) };
      inline vector<Host::Protocols> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<Host::Protocols>) };
      inline Host& setProtocols(const vector<Host::Protocols> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
      inline Host& setProtocols(vector<Host::Protocols> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Host& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceInstanceId Field Functions 
      bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
      void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
      inline string getSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
      inline Host& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


      // sourceInstanceState Field Functions 
      bool hasSourceInstanceState() const { return this->sourceInstanceState_ != nullptr;};
      void deleteSourceInstanceState() { this->sourceInstanceState_ = nullptr;};
      inline string getSourceInstanceState() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceState_, "") };
      inline Host& setSourceInstanceState(string sourceInstanceState) { DARABONBA_PTR_SET_VALUE(sourceInstanceState_, sourceInstanceState) };


    protected:
      // The address type of the host. Valid values:
      // 
      // *   **Public**: a public address
      // *   **Private**: a private address
      shared_ptr<string> activeAddressType_ {};
      // The description of the host.
      shared_ptr<string> comment_ {};
      // The ID of the host.
      shared_ptr<string> hostId_ {};
      // The hostname.
      shared_ptr<string> hostName_ {};
      // The internal endpoint of the host. The value is a domain name or an IP address.
      shared_ptr<string> hostPrivateAddress_ {};
      // The public address of the host. The value is a domain name or an IP address.
      shared_ptr<string> hostPublicAddress_ {};
      // The ID of the network domain to which the host belongs.
      shared_ptr<string> networkDomainId_ {};
      // The operating system of the host. Valid values:
      // 
      // *   **Linux**
      // *   **Windows**
      shared_ptr<string> OSType_ {};
      // The preferred key exchange algorithm of the host. The value of this parameter is returned if OSType is set to Linux. Valid values:
      // 
      // *   **default**
      // *   **diffie-hellman-group1-sha1**
      // *   **diffie-hellman-group14-sha1**
      // *   **diffie-hellman-group-exchange-sha1**
      shared_ptr<string> prefKex_ {};
      // The protocol information about the host.
      shared_ptr<vector<Host::Protocols>> protocols_ {};
      // The source of the host. Valid values:
      // 
      // *   **Local**: a host in a data center
      // *   **Ecs**: an Elastic Compute Service (ECS) instance
      // *   **Rds**: a host in an ApsaraDB MyBase dedicated cluster
      shared_ptr<string> source_ {};
      // The ID of the ECS instance or the host in an ApsaraDB MyBase dedicated cluster.
      // 
      // >  If **Local** is returned for the **Source** parameter, no value is returned for this parameter.
      shared_ptr<string> sourceInstanceId_ {};
      // The status of the host. Valid values:
      // 
      // *   **Normal**: normal
      // *   **Release**: released
      shared_ptr<string> sourceInstanceState_ {};
    };

    virtual bool empty() const override { return this->host_ == nullptr
        && this->requestId_ == nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline const GetHostResponseBody::Host & getHost() const { DARABONBA_PTR_GET_CONST(host_, GetHostResponseBody::Host) };
    inline GetHostResponseBody::Host getHost() { DARABONBA_PTR_GET(host_, GetHostResponseBody::Host) };
    inline GetHostResponseBody& setHost(const GetHostResponseBody::Host & host) { DARABONBA_PTR_SET_VALUE(host_, host) };
    inline GetHostResponseBody& setHost(GetHostResponseBody::Host && host) { DARABONBA_PTR_SET_RVALUE(host_, host) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned information about the host.
    shared_ptr<GetHostResponseBody::Host> host_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
