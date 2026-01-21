// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTSRESPONSEBODY_HPP_
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
  class ListHostsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHostsResponseBody() = default ;
    ListHostsResponseBody(const ListHostsResponseBody &) = default ;
    ListHostsResponseBody(ListHostsResponseBody &&) = default ;
    ListHostsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostsResponseBody() = default ;
    ListHostsResponseBody& operator=(const ListHostsResponseBody &) = default ;
    ListHostsResponseBody& operator=(ListHostsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Hosts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Hosts& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveAddressType, activeAddressType_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(HostAccountCount, hostAccountCount_);
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(HostPrivateAddress, hostPrivateAddress_);
        DARABONBA_PTR_TO_JSON(HostPublicAddress, hostPublicAddress_);
        DARABONBA_PTR_TO_JSON(OSType, OSType_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
        DARABONBA_PTR_TO_JSON(SourceInstanceState, sourceInstanceState_);
      };
      friend void from_json(const Darabonba::Json& j, Hosts& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveAddressType, activeAddressType_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(HostAccountCount, hostAccountCount_);
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(HostPrivateAddress, hostPrivateAddress_);
        DARABONBA_PTR_FROM_JSON(HostPublicAddress, hostPublicAddress_);
        DARABONBA_PTR_FROM_JSON(OSType, OSType_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
        DARABONBA_PTR_FROM_JSON(SourceInstanceState, sourceInstanceState_);
      };
      Hosts() = default ;
      Hosts(const Hosts &) = default ;
      Hosts(Hosts &&) = default ;
      Hosts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Hosts() = default ;
      Hosts& operator=(const Hosts &) = default ;
      Hosts& operator=(Hosts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeAddressType_ == nullptr
        && this->comment_ == nullptr && this->hostAccountCount_ == nullptr && this->hostId_ == nullptr && this->hostName_ == nullptr && this->hostPrivateAddress_ == nullptr
        && this->hostPublicAddress_ == nullptr && this->OSType_ == nullptr && this->source_ == nullptr && this->sourceInstanceId_ == nullptr && this->sourceInstanceState_ == nullptr; };
      // activeAddressType Field Functions 
      bool hasActiveAddressType() const { return this->activeAddressType_ != nullptr;};
      void deleteActiveAddressType() { this->activeAddressType_ = nullptr;};
      inline string getActiveAddressType() const { DARABONBA_PTR_GET_DEFAULT(activeAddressType_, "") };
      inline Hosts& setActiveAddressType(string activeAddressType) { DARABONBA_PTR_SET_VALUE(activeAddressType_, activeAddressType) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Hosts& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // hostAccountCount Field Functions 
      bool hasHostAccountCount() const { return this->hostAccountCount_ != nullptr;};
      void deleteHostAccountCount() { this->hostAccountCount_ = nullptr;};
      inline int32_t getHostAccountCount() const { DARABONBA_PTR_GET_DEFAULT(hostAccountCount_, 0) };
      inline Hosts& setHostAccountCount(int32_t hostAccountCount) { DARABONBA_PTR_SET_VALUE(hostAccountCount_, hostAccountCount) };


      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline Hosts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline Hosts& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // hostPrivateAddress Field Functions 
      bool hasHostPrivateAddress() const { return this->hostPrivateAddress_ != nullptr;};
      void deleteHostPrivateAddress() { this->hostPrivateAddress_ = nullptr;};
      inline string getHostPrivateAddress() const { DARABONBA_PTR_GET_DEFAULT(hostPrivateAddress_, "") };
      inline Hosts& setHostPrivateAddress(string hostPrivateAddress) { DARABONBA_PTR_SET_VALUE(hostPrivateAddress_, hostPrivateAddress) };


      // hostPublicAddress Field Functions 
      bool hasHostPublicAddress() const { return this->hostPublicAddress_ != nullptr;};
      void deleteHostPublicAddress() { this->hostPublicAddress_ = nullptr;};
      inline string getHostPublicAddress() const { DARABONBA_PTR_GET_DEFAULT(hostPublicAddress_, "") };
      inline Hosts& setHostPublicAddress(string hostPublicAddress) { DARABONBA_PTR_SET_VALUE(hostPublicAddress_, hostPublicAddress) };


      // OSType Field Functions 
      bool hasOSType() const { return this->OSType_ != nullptr;};
      void deleteOSType() { this->OSType_ = nullptr;};
      inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
      inline Hosts& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Hosts& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceInstanceId Field Functions 
      bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
      void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
      inline string getSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
      inline Hosts& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


      // sourceInstanceState Field Functions 
      bool hasSourceInstanceState() const { return this->sourceInstanceState_ != nullptr;};
      void deleteSourceInstanceState() { this->sourceInstanceState_ = nullptr;};
      inline string getSourceInstanceState() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceState_, "") };
      inline Hosts& setSourceInstanceState(string sourceInstanceState) { DARABONBA_PTR_SET_VALUE(sourceInstanceState_, sourceInstanceState) };


    protected:
      // The address type of the host. Valid values:
      // 
      // *   **Public**: a public address
      // *   **Private**: a private address
      shared_ptr<string> activeAddressType_ {};
      // The description of the host.
      shared_ptr<string> comment_ {};
      // The number of host accounts.
      shared_ptr<int32_t> hostAccountCount_ {};
      // The ID of the host.
      shared_ptr<string> hostId_ {};
      // The name of the host.
      shared_ptr<string> hostName_ {};
      // The private address of the host. The value is a domain name or an IP address.
      shared_ptr<string> hostPrivateAddress_ {};
      // The public address of the host. The value is a domain name or an IP address.
      shared_ptr<string> hostPublicAddress_ {};
      // The operating system of the host. Valid values:
      // 
      // *   **Linux**
      // *   **Windows**
      shared_ptr<string> OSType_ {};
      // The source of the host. Valid values:
      // 
      // *   **Local**: a host in a data center
      // *   **Ecs**: an ECS instance
      // *   **Rds**: a host in an ApsaraDB MyBase dedicated cluster
      shared_ptr<string> source_ {};
      // The ID of the ECS instance or the host in an ApsaraDB MyBase dedicated cluster.
      // 
      // > No value is returned for this parameter if the **Source** parameter is set to **Local**.
      shared_ptr<string> sourceInstanceId_ {};
      // The status of the host. Valid values:
      // 
      // *   **Normal**: normal
      // *   **Release**: released
      shared_ptr<string> sourceInstanceState_ {};
    };

    virtual bool empty() const override { return this->hosts_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<ListHostsResponseBody::Hosts> & getHosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<ListHostsResponseBody::Hosts>) };
    inline vector<ListHostsResponseBody::Hosts> getHosts() { DARABONBA_PTR_GET(hosts_, vector<ListHostsResponseBody::Hosts>) };
    inline ListHostsResponseBody& setHosts(const vector<ListHostsResponseBody::Hosts> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline ListHostsResponseBody& setHosts(vector<ListHostsResponseBody::Hosts> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHostsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHostsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the hosts returned.
    shared_ptr<vector<ListHostsResponseBody::Hosts>> hosts_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of hosts returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
