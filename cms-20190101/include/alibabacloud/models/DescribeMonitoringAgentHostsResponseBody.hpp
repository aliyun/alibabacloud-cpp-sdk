// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTHOSTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTHOSTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentHostsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentHostsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PageTotal, pageTotal_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentHostsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PageTotal, pageTotal_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMonitoringAgentHostsResponseBody() = default ;
    DescribeMonitoringAgentHostsResponseBody(const DescribeMonitoringAgentHostsResponseBody &) = default ;
    DescribeMonitoringAgentHostsResponseBody(DescribeMonitoringAgentHostsResponseBody &&) = default ;
    DescribeMonitoringAgentHostsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentHostsResponseBody() = default ;
    DescribeMonitoringAgentHostsResponseBody& operator=(const DescribeMonitoringAgentHostsResponseBody &) = default ;
    DescribeMonitoringAgentHostsResponseBody& operator=(DescribeMonitoringAgentHostsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Hosts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Hosts& obj) { 
        DARABONBA_PTR_TO_JSON(Host, host_);
      };
      friend void from_json(const Darabonba::Json& j, Hosts& obj) { 
        DARABONBA_PTR_FROM_JSON(Host, host_);
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
      class Host : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Host& obj) { 
          DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
          DARABONBA_PTR_TO_JSON(EipId, eipId_);
          DARABONBA_PTR_TO_JSON(HostName, hostName_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
          DARABONBA_PTR_TO_JSON(IpGroup, ipGroup_);
          DARABONBA_PTR_TO_JSON(NatIp, natIp_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(OperatingSystem, operatingSystem_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
          DARABONBA_PTR_TO_JSON(isAliyunHost, isAliyunHost_);
        };
        friend void from_json(const Darabonba::Json& j, Host& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
          DARABONBA_PTR_FROM_JSON(EipId, eipId_);
          DARABONBA_PTR_FROM_JSON(HostName, hostName_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
          DARABONBA_PTR_FROM_JSON(IpGroup, ipGroup_);
          DARABONBA_PTR_FROM_JSON(NatIp, natIp_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(OperatingSystem, operatingSystem_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
          DARABONBA_PTR_FROM_JSON(isAliyunHost, isAliyunHost_);
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
        virtual bool empty() const override { return this->agentVersion_ == nullptr
        && this->aliUid_ == nullptr && this->eipAddress_ == nullptr && this->eipId_ == nullptr && this->hostName_ == nullptr && this->instanceId_ == nullptr
        && this->instanceTypeFamily_ == nullptr && this->ipGroup_ == nullptr && this->natIp_ == nullptr && this->networkType_ == nullptr && this->operatingSystem_ == nullptr
        && this->region_ == nullptr && this->serialNumber_ == nullptr && this->isAliyunHost_ == nullptr; };
        // agentVersion Field Functions 
        bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
        void deleteAgentVersion() { this->agentVersion_ = nullptr;};
        inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
        inline Host& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
        inline Host& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // eipAddress Field Functions 
        bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
        void deleteEipAddress() { this->eipAddress_ = nullptr;};
        inline string getEipAddress() const { DARABONBA_PTR_GET_DEFAULT(eipAddress_, "") };
        inline Host& setEipAddress(string eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };


        // eipId Field Functions 
        bool hasEipId() const { return this->eipId_ != nullptr;};
        void deleteEipId() { this->eipId_ = nullptr;};
        inline string getEipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
        inline Host& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


        // hostName Field Functions 
        bool hasHostName() const { return this->hostName_ != nullptr;};
        void deleteHostName() { this->hostName_ = nullptr;};
        inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
        inline Host& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Host& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceTypeFamily Field Functions 
        bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
        void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
        inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
        inline Host& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


        // ipGroup Field Functions 
        bool hasIpGroup() const { return this->ipGroup_ != nullptr;};
        void deleteIpGroup() { this->ipGroup_ = nullptr;};
        inline string getIpGroup() const { DARABONBA_PTR_GET_DEFAULT(ipGroup_, "") };
        inline Host& setIpGroup(string ipGroup) { DARABONBA_PTR_SET_VALUE(ipGroup_, ipGroup) };


        // natIp Field Functions 
        bool hasNatIp() const { return this->natIp_ != nullptr;};
        void deleteNatIp() { this->natIp_ = nullptr;};
        inline string getNatIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
        inline Host& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline Host& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // operatingSystem Field Functions 
        bool hasOperatingSystem() const { return this->operatingSystem_ != nullptr;};
        void deleteOperatingSystem() { this->operatingSystem_ = nullptr;};
        inline string getOperatingSystem() const { DARABONBA_PTR_GET_DEFAULT(operatingSystem_, "") };
        inline Host& setOperatingSystem(string operatingSystem) { DARABONBA_PTR_SET_VALUE(operatingSystem_, operatingSystem) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Host& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // serialNumber Field Functions 
        bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
        void deleteSerialNumber() { this->serialNumber_ = nullptr;};
        inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
        inline Host& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


        // isAliyunHost Field Functions 
        bool hasIsAliyunHost() const { return this->isAliyunHost_ != nullptr;};
        void deleteIsAliyunHost() { this->isAliyunHost_ = nullptr;};
        inline bool getIsAliyunHost() const { DARABONBA_PTR_GET_DEFAULT(isAliyunHost_, false) };
        inline Host& setIsAliyunHost(bool isAliyunHost) { DARABONBA_PTR_SET_VALUE(isAliyunHost_, isAliyunHost) };


      protected:
        // The version of the CloudMonitor agent.
        shared_ptr<string> agentVersion_ {};
        // The ID of the Alibaba Cloud account.
        shared_ptr<int64_t> aliUid_ {};
        // The elastic IP address (EIP) of the host.
        shared_ptr<string> eipAddress_ {};
        // The ID of the EIP.
        shared_ptr<string> eipId_ {};
        // The name of the host.
        shared_ptr<string> hostName_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The type of the ECS instance.
        shared_ptr<string> instanceTypeFamily_ {};
        // The IP address of the host.
        // 
        // > Multiple IP addresses are separated with commas (,).
        shared_ptr<string> ipGroup_ {};
        // The IP address of the Network Address Translation (NAT) gateway.
        shared_ptr<string> natIp_ {};
        // The network type.
        shared_ptr<string> networkType_ {};
        // The operating system.
        shared_ptr<string> operatingSystem_ {};
        // The ID of the region.
        shared_ptr<string> region_ {};
        // The serial number of the host. A host that is not provided by Alibaba Cloud has a serial number instead of an instance ID.
        // 
        // > This parameter can be used to accurately search for a monitored host.
        shared_ptr<string> serialNumber_ {};
        // Indicates whether the host is provided by Alibaba Cloud. Valid values:
        // 
        // *   true: The host is provided by Alibaba Cloud.
        // *   false: The host is not provided by Alibaba Cloud.
        shared_ptr<bool> isAliyunHost_ {};
      };

      virtual bool empty() const override { return this->host_ == nullptr; };
      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline const vector<Hosts::Host> & getHost() const { DARABONBA_PTR_GET_CONST(host_, vector<Hosts::Host>) };
      inline vector<Hosts::Host> getHost() { DARABONBA_PTR_GET(host_, vector<Hosts::Host>) };
      inline Hosts& setHost(const vector<Hosts::Host> & host) { DARABONBA_PTR_SET_VALUE(host_, host) };
      inline Hosts& setHost(vector<Hosts::Host> && host) { DARABONBA_PTR_SET_RVALUE(host_, host) };


    protected:
      shared_ptr<vector<Hosts::Host>> host_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hosts_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->pageTotal_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMonitoringAgentHostsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const DescribeMonitoringAgentHostsResponseBody::Hosts & getHosts() const { DARABONBA_PTR_GET_CONST(hosts_, DescribeMonitoringAgentHostsResponseBody::Hosts) };
    inline DescribeMonitoringAgentHostsResponseBody::Hosts getHosts() { DARABONBA_PTR_GET(hosts_, DescribeMonitoringAgentHostsResponseBody::Hosts) };
    inline DescribeMonitoringAgentHostsResponseBody& setHosts(const DescribeMonitoringAgentHostsResponseBody::Hosts & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline DescribeMonitoringAgentHostsResponseBody& setHosts(DescribeMonitoringAgentHostsResponseBody::Hosts && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitoringAgentHostsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMonitoringAgentHostsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMonitoringAgentHostsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pageTotal Field Functions 
    bool hasPageTotal() const { return this->pageTotal_ != nullptr;};
    void deletePageTotal() { this->pageTotal_ = nullptr;};
    inline int32_t getPageTotal() const { DARABONBA_PTR_GET_DEFAULT(pageTotal_, 0) };
    inline DescribeMonitoringAgentHostsResponseBody& setPageTotal(int32_t pageTotal) { DARABONBA_PTR_SET_VALUE(pageTotal_, pageTotal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitoringAgentHostsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMonitoringAgentHostsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeMonitoringAgentHostsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code.
    // 
    // > The status code 200 indicates that the call is successful.
    shared_ptr<string> code_ {};
    // The information about the hosts.
    shared_ptr<DescribeMonitoringAgentHostsResponseBody::Hosts> hosts_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The total number of returned pages.
    shared_ptr<int32_t> pageTotal_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    shared_ptr<bool> success_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
