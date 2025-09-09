// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTRESPONSEBODYHOST_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTRESPONSEBODYHOST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHostResponseBodyHostProtocols.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetHostResponseBodyHost : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostResponseBodyHost& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetHostResponseBodyHost& obj) { 
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
    GetHostResponseBodyHost() = default ;
    GetHostResponseBodyHost(const GetHostResponseBodyHost &) = default ;
    GetHostResponseBodyHost(GetHostResponseBodyHost &&) = default ;
    GetHostResponseBodyHost(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostResponseBodyHost() = default ;
    GetHostResponseBodyHost& operator=(const GetHostResponseBodyHost &) = default ;
    GetHostResponseBodyHost& operator=(GetHostResponseBodyHost &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeAddressType_ != nullptr
        && this->comment_ != nullptr && this->hostId_ != nullptr && this->hostName_ != nullptr && this->hostPrivateAddress_ != nullptr && this->hostPublicAddress_ != nullptr
        && this->networkDomainId_ != nullptr && this->OSType_ != nullptr && this->prefKex_ != nullptr && this->protocols_ != nullptr && this->source_ != nullptr
        && this->sourceInstanceId_ != nullptr && this->sourceInstanceState_ != nullptr; };
    // activeAddressType Field Functions 
    bool hasActiveAddressType() const { return this->activeAddressType_ != nullptr;};
    void deleteActiveAddressType() { this->activeAddressType_ = nullptr;};
    inline string activeAddressType() const { DARABONBA_PTR_GET_DEFAULT(activeAddressType_, "") };
    inline GetHostResponseBodyHost& setActiveAddressType(string activeAddressType) { DARABONBA_PTR_SET_VALUE(activeAddressType_, activeAddressType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetHostResponseBodyHost& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline GetHostResponseBodyHost& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline GetHostResponseBodyHost& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hostPrivateAddress Field Functions 
    bool hasHostPrivateAddress() const { return this->hostPrivateAddress_ != nullptr;};
    void deleteHostPrivateAddress() { this->hostPrivateAddress_ = nullptr;};
    inline string hostPrivateAddress() const { DARABONBA_PTR_GET_DEFAULT(hostPrivateAddress_, "") };
    inline GetHostResponseBodyHost& setHostPrivateAddress(string hostPrivateAddress) { DARABONBA_PTR_SET_VALUE(hostPrivateAddress_, hostPrivateAddress) };


    // hostPublicAddress Field Functions 
    bool hasHostPublicAddress() const { return this->hostPublicAddress_ != nullptr;};
    void deleteHostPublicAddress() { this->hostPublicAddress_ = nullptr;};
    inline string hostPublicAddress() const { DARABONBA_PTR_GET_DEFAULT(hostPublicAddress_, "") };
    inline GetHostResponseBodyHost& setHostPublicAddress(string hostPublicAddress) { DARABONBA_PTR_SET_VALUE(hostPublicAddress_, hostPublicAddress) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string networkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline GetHostResponseBodyHost& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string OSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline GetHostResponseBodyHost& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // prefKex Field Functions 
    bool hasPrefKex() const { return this->prefKex_ != nullptr;};
    void deletePrefKex() { this->prefKex_ = nullptr;};
    inline string prefKex() const { DARABONBA_PTR_GET_DEFAULT(prefKex_, "") };
    inline GetHostResponseBodyHost& setPrefKex(string prefKex) { DARABONBA_PTR_SET_VALUE(prefKex_, prefKex) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<Models::GetHostResponseBodyHostProtocols> & protocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<Models::GetHostResponseBodyHostProtocols>) };
    inline vector<Models::GetHostResponseBodyHostProtocols> protocols() { DARABONBA_PTR_GET(protocols_, vector<Models::GetHostResponseBodyHostProtocols>) };
    inline GetHostResponseBodyHost& setProtocols(const vector<Models::GetHostResponseBodyHostProtocols> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline GetHostResponseBodyHost& setProtocols(vector<Models::GetHostResponseBodyHostProtocols> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetHostResponseBodyHost& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string sourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline GetHostResponseBodyHost& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


    // sourceInstanceState Field Functions 
    bool hasSourceInstanceState() const { return this->sourceInstanceState_ != nullptr;};
    void deleteSourceInstanceState() { this->sourceInstanceState_ = nullptr;};
    inline string sourceInstanceState() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceState_, "") };
    inline GetHostResponseBodyHost& setSourceInstanceState(string sourceInstanceState) { DARABONBA_PTR_SET_VALUE(sourceInstanceState_, sourceInstanceState) };


  protected:
    // The address type of the host. Valid values:
    // 
    // *   **Public**: a public address
    // *   **Private**: a private address
    std::shared_ptr<string> activeAddressType_ = nullptr;
    // The description of the host.
    std::shared_ptr<string> comment_ = nullptr;
    // The ID of the host.
    std::shared_ptr<string> hostId_ = nullptr;
    // The hostname.
    std::shared_ptr<string> hostName_ = nullptr;
    // The internal endpoint of the host. The value is a domain name or an IP address.
    std::shared_ptr<string> hostPrivateAddress_ = nullptr;
    // The public address of the host. The value is a domain name or an IP address.
    std::shared_ptr<string> hostPublicAddress_ = nullptr;
    // The ID of the network domain to which the host belongs.
    std::shared_ptr<string> networkDomainId_ = nullptr;
    // The operating system of the host. Valid values:
    // 
    // *   **Linux**
    // *   **Windows**
    std::shared_ptr<string> OSType_ = nullptr;
    // The preferred key exchange algorithm of the host. The value of this parameter is returned if OSType is set to Linux. Valid values:
    // 
    // *   **default**
    // *   **diffie-hellman-group1-sha1**
    // *   **diffie-hellman-group14-sha1**
    // *   **diffie-hellman-group-exchange-sha1**
    std::shared_ptr<string> prefKex_ = nullptr;
    // The protocol information about the host.
    std::shared_ptr<vector<Models::GetHostResponseBodyHostProtocols>> protocols_ = nullptr;
    // The source of the host. Valid values:
    // 
    // *   **Local**: a host in a data center
    // *   **Ecs**: an Elastic Compute Service (ECS) instance
    // *   **Rds**: a host in an ApsaraDB MyBase dedicated cluster
    std::shared_ptr<string> source_ = nullptr;
    // The ID of the ECS instance or the host in an ApsaraDB MyBase dedicated cluster.
    // 
    // >  If **Local** is returned for the **Source** parameter, no value is returned for this parameter.
    std::shared_ptr<string> sourceInstanceId_ = nullptr;
    // The status of the host. Valid values:
    // 
    // *   **Normal**: normal
    // *   **Release**: released
    std::shared_ptr<string> sourceInstanceState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
