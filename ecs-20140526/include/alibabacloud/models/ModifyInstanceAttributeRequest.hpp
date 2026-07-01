// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CpuOptions, cpuOptions_);
      DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_TO_JSON(EnableNetworkEncryption, enableNetworkEncryption_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceQueueNumber, networkInterfaceQueueNumber_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PrivateDnsNameOptions, privateDnsNameOptions_);
      DARABONBA_PTR_TO_JSON(Recyclable, recyclable_);
      DARABONBA_PTR_TO_JSON(RemoteConnectionOptions, remoteConnectionOptions_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuOptions, cpuOptions_);
      DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_FROM_JSON(EnableNetworkEncryption, enableNetworkEncryption_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceQueueNumber, networkInterfaceQueueNumber_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PrivateDnsNameOptions, privateDnsNameOptions_);
      DARABONBA_PTR_FROM_JSON(Recyclable, recyclable_);
      DARABONBA_PTR_FROM_JSON(RemoteConnectionOptions, remoteConnectionOptions_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    ModifyInstanceAttributeRequest() = default ;
    ModifyInstanceAttributeRequest(const ModifyInstanceAttributeRequest &) = default ;
    ModifyInstanceAttributeRequest(ModifyInstanceAttributeRequest &&) = default ;
    ModifyInstanceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceAttributeRequest() = default ;
    ModifyInstanceAttributeRequest& operator=(const ModifyInstanceAttributeRequest &) = default ;
    ModifyInstanceAttributeRequest& operator=(ModifyInstanceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemoteConnectionOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoteConnectionOptions& obj) { 
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RemoteConnectionOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RemoteConnectionOptions() = default ;
      RemoteConnectionOptions(const RemoteConnectionOptions &) = default ;
      RemoteConnectionOptions(RemoteConnectionOptions &&) = default ;
      RemoteConnectionOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoteConnectionOptions() = default ;
      RemoteConnectionOptions& operator=(const RemoteConnectionOptions &) = default ;
      RemoteConnectionOptions& operator=(RemoteConnectionOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->password_ == nullptr
        && this->type_ == nullptr; };
      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline RemoteConnectionOptions& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RemoteConnectionOptions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // > This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> password_ {};
      // > This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> type_ {};
    };

    class PrivateDnsNameOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivateDnsNameOptions& obj) { 
        DARABONBA_PTR_TO_JSON(EnableInstanceIdDnsAAAARecord, enableInstanceIdDnsAAAARecord_);
        DARABONBA_PTR_TO_JSON(EnableInstanceIdDnsARecord, enableInstanceIdDnsARecord_);
        DARABONBA_PTR_TO_JSON(EnableIpDnsARecord, enableIpDnsARecord_);
        DARABONBA_PTR_TO_JSON(EnableIpDnsPtrRecord, enableIpDnsPtrRecord_);
        DARABONBA_PTR_TO_JSON(HostnameType, hostnameType_);
      };
      friend void from_json(const Darabonba::Json& j, PrivateDnsNameOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableInstanceIdDnsAAAARecord, enableInstanceIdDnsAAAARecord_);
        DARABONBA_PTR_FROM_JSON(EnableInstanceIdDnsARecord, enableInstanceIdDnsARecord_);
        DARABONBA_PTR_FROM_JSON(EnableIpDnsARecord, enableIpDnsARecord_);
        DARABONBA_PTR_FROM_JSON(EnableIpDnsPtrRecord, enableIpDnsPtrRecord_);
        DARABONBA_PTR_FROM_JSON(HostnameType, hostnameType_);
      };
      PrivateDnsNameOptions() = default ;
      PrivateDnsNameOptions(const PrivateDnsNameOptions &) = default ;
      PrivateDnsNameOptions(PrivateDnsNameOptions &&) = default ;
      PrivateDnsNameOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivateDnsNameOptions() = default ;
      PrivateDnsNameOptions& operator=(const PrivateDnsNameOptions &) = default ;
      PrivateDnsNameOptions& operator=(PrivateDnsNameOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableInstanceIdDnsAAAARecord_ == nullptr
        && this->enableInstanceIdDnsARecord_ == nullptr && this->enableIpDnsARecord_ == nullptr && this->enableIpDnsPtrRecord_ == nullptr && this->hostnameType_ == nullptr; };
      // enableInstanceIdDnsAAAARecord Field Functions 
      bool hasEnableInstanceIdDnsAAAARecord() const { return this->enableInstanceIdDnsAAAARecord_ != nullptr;};
      void deleteEnableInstanceIdDnsAAAARecord() { this->enableInstanceIdDnsAAAARecord_ = nullptr;};
      inline bool getEnableInstanceIdDnsAAAARecord() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceIdDnsAAAARecord_, false) };
      inline PrivateDnsNameOptions& setEnableInstanceIdDnsAAAARecord(bool enableInstanceIdDnsAAAARecord) { DARABONBA_PTR_SET_VALUE(enableInstanceIdDnsAAAARecord_, enableInstanceIdDnsAAAARecord) };


      // enableInstanceIdDnsARecord Field Functions 
      bool hasEnableInstanceIdDnsARecord() const { return this->enableInstanceIdDnsARecord_ != nullptr;};
      void deleteEnableInstanceIdDnsARecord() { this->enableInstanceIdDnsARecord_ = nullptr;};
      inline bool getEnableInstanceIdDnsARecord() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceIdDnsARecord_, false) };
      inline PrivateDnsNameOptions& setEnableInstanceIdDnsARecord(bool enableInstanceIdDnsARecord) { DARABONBA_PTR_SET_VALUE(enableInstanceIdDnsARecord_, enableInstanceIdDnsARecord) };


      // enableIpDnsARecord Field Functions 
      bool hasEnableIpDnsARecord() const { return this->enableIpDnsARecord_ != nullptr;};
      void deleteEnableIpDnsARecord() { this->enableIpDnsARecord_ = nullptr;};
      inline bool getEnableIpDnsARecord() const { DARABONBA_PTR_GET_DEFAULT(enableIpDnsARecord_, false) };
      inline PrivateDnsNameOptions& setEnableIpDnsARecord(bool enableIpDnsARecord) { DARABONBA_PTR_SET_VALUE(enableIpDnsARecord_, enableIpDnsARecord) };


      // enableIpDnsPtrRecord Field Functions 
      bool hasEnableIpDnsPtrRecord() const { return this->enableIpDnsPtrRecord_ != nullptr;};
      void deleteEnableIpDnsPtrRecord() { this->enableIpDnsPtrRecord_ = nullptr;};
      inline bool getEnableIpDnsPtrRecord() const { DARABONBA_PTR_GET_DEFAULT(enableIpDnsPtrRecord_, false) };
      inline PrivateDnsNameOptions& setEnableIpDnsPtrRecord(bool enableIpDnsPtrRecord) { DARABONBA_PTR_SET_VALUE(enableIpDnsPtrRecord_, enableIpDnsPtrRecord) };


      // hostnameType Field Functions 
      bool hasHostnameType() const { return this->hostnameType_ != nullptr;};
      void deleteHostnameType() { this->hostnameType_ = nullptr;};
      inline string getHostnameType() const { DARABONBA_PTR_GET_DEFAULT(hostnameType_, "") };
      inline PrivateDnsNameOptions& setHostnameType(string hostnameType) { DARABONBA_PTR_SET_VALUE(hostnameType_, hostnameType) };


    protected:
      // Specifies whether to enable DNS resolution from the instance ID-based domain name to the IPv6 address. Valid values:
      //  
      // - true: enables the resolution.
      // - false: disables the resolution.
      // 
      // Default value: false.
      shared_ptr<bool> enableInstanceIdDnsAAAARecord_ {};
      // Specifies whether to enable DNS resolution from the instance ID-based domain name to the IPv4 address. Valid values:
      //  
      // - true: enables the resolution.
      // - false: disables the resolution.
      // 
      // Default value: false.
      shared_ptr<bool> enableInstanceIdDnsARecord_ {};
      // Specifies whether to enable DNS resolution from the IP-based domain name to the IPv4 address. Valid values:
      // - true: enables the resolution.
      // - false: disables the resolution.
      // 
      // Default value: false.
      shared_ptr<bool> enableIpDnsARecord_ {};
      // Specifies whether to enable reverse DNS resolution from the IPv4 address to the IP-based domain name. Valid values:
      // - true: enables the resolution.
      // - false: disables the resolution.
      // 
      // Default value: false.
      shared_ptr<bool> enableIpDnsPtrRecord_ {};
      // The hostname type. Valid values:
      // 
      // - Custom: custom.
      // - IpBased: IP-based hostname.
      // - InstanceIdBased: instance ID-based hostname.
      // 
      // Default value: Custom.
      shared_ptr<string> hostnameType_ {};
    };

    class CpuOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CpuOptions& obj) { 
        DARABONBA_PTR_TO_JSON(Core, core_);
        DARABONBA_PTR_TO_JSON(ThreadsPerCore, threadsPerCore_);
        DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
        DARABONBA_PTR_TO_JSON(NestedVirtualization, nestedVirtualization_);
      };
      friend void from_json(const Darabonba::Json& j, CpuOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(Core, core_);
        DARABONBA_PTR_FROM_JSON(ThreadsPerCore, threadsPerCore_);
        DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
        DARABONBA_PTR_FROM_JSON(NestedVirtualization, nestedVirtualization_);
      };
      CpuOptions() = default ;
      CpuOptions(const CpuOptions &) = default ;
      CpuOptions(CpuOptions &&) = default ;
      CpuOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CpuOptions() = default ;
      CpuOptions& operator=(const CpuOptions &) = default ;
      CpuOptions& operator=(CpuOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->core_ == nullptr
        && this->threadsPerCore_ == nullptr && this->topologyType_ == nullptr && this->nestedVirtualization_ == nullptr; };
      // core Field Functions 
      bool hasCore() const { return this->core_ != nullptr;};
      void deleteCore() { this->core_ = nullptr;};
      inline int32_t getCore() const { DARABONBA_PTR_GET_DEFAULT(core_, 0) };
      inline CpuOptions& setCore(int32_t core) { DARABONBA_PTR_SET_VALUE(core_, core) };


      // threadsPerCore Field Functions 
      bool hasThreadsPerCore() const { return this->threadsPerCore_ != nullptr;};
      void deleteThreadsPerCore() { this->threadsPerCore_ = nullptr;};
      inline int32_t getThreadsPerCore() const { DARABONBA_PTR_GET_DEFAULT(threadsPerCore_, 0) };
      inline CpuOptions& setThreadsPerCore(int32_t threadsPerCore) { DARABONBA_PTR_SET_VALUE(threadsPerCore_, threadsPerCore) };


      // topologyType Field Functions 
      bool hasTopologyType() const { return this->topologyType_ != nullptr;};
      void deleteTopologyType() { this->topologyType_ = nullptr;};
      inline string getTopologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
      inline CpuOptions& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


      // nestedVirtualization Field Functions 
      bool hasNestedVirtualization() const { return this->nestedVirtualization_ != nullptr;};
      void deleteNestedVirtualization() { this->nestedVirtualization_ = nullptr;};
      inline string getNestedVirtualization() const { DARABONBA_PTR_GET_DEFAULT(nestedVirtualization_, "") };
      inline CpuOptions& setNestedVirtualization(string nestedVirtualization) { DARABONBA_PTR_SET_VALUE(nestedVirtualization_, nestedVirtualization) };


    protected:
      // The number of CPU cores. This parameter does not support custom values and can only use the default value.
      // 
      // <props="china">Default value: see [Customize CPU options](https://help.aliyun.com/document_detail/145895.html).
      shared_ptr<int32_t> core_ {};
      // The number of threads per CPU core. The number of vCPUs of the ECS instance = CpuOptions.Core value × CpuOptions.ThreadsPerCore value.
      // 
      // - CpuOptions.ThreadsPerCore=1 indicates that hyper-threading is disabled.
      // 
      // - Only some instance types support custom thread counts.
      // 
      // <props="china">Valid values and default value: see [Customize CPU options](https://help.aliyun.com/document_detail/145895.html).
      shared_ptr<int32_t> threadsPerCore_ {};
      // The CPU topology type of the instance. Valid values:
      // 
      // - ContinuousCoreToHTMapping: the hyper-threads of the same core in the CPU topology are continuous.
      // - DiscreteCoreToHTMapping: the hyper-threads of the same core are discrete.
      // 
      // Default value: none.
      // 
      // Take note of the following items:
      // - The instance must be in the Stopped state.
      // 
      // > Only some instance families support this parameter. For information about the supported instance families, see [View and modify the CPU topology structure](https://help.aliyun.com/document_detail/2636059.html).
      shared_ptr<string> topologyType_ {};
      // > This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> nestedVirtualization_ {};
    };

    virtual bool empty() const override { return this->cpuOptions_ == nullptr
        && this->creditSpecification_ == nullptr && this->deletionProtection_ == nullptr && this->description_ == nullptr && this->enableJumboFrame_ == nullptr && this->enableNetworkEncryption_ == nullptr
        && this->hostName_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->networkInterfaceQueueNumber_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->password_ == nullptr && this->privateDnsNameOptions_ == nullptr && this->recyclable_ == nullptr && this->remoteConnectionOptions_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityGroupIds_ == nullptr && this->userData_ == nullptr; };
    // cpuOptions Field Functions 
    bool hasCpuOptions() const { return this->cpuOptions_ != nullptr;};
    void deleteCpuOptions() { this->cpuOptions_ = nullptr;};
    inline const ModifyInstanceAttributeRequest::CpuOptions & getCpuOptions() const { DARABONBA_PTR_GET_CONST(cpuOptions_, ModifyInstanceAttributeRequest::CpuOptions) };
    inline ModifyInstanceAttributeRequest::CpuOptions getCpuOptions() { DARABONBA_PTR_GET(cpuOptions_, ModifyInstanceAttributeRequest::CpuOptions) };
    inline ModifyInstanceAttributeRequest& setCpuOptions(const ModifyInstanceAttributeRequest::CpuOptions & cpuOptions) { DARABONBA_PTR_SET_VALUE(cpuOptions_, cpuOptions) };
    inline ModifyInstanceAttributeRequest& setCpuOptions(ModifyInstanceAttributeRequest::CpuOptions && cpuOptions) { DARABONBA_PTR_SET_RVALUE(cpuOptions_, cpuOptions) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string getCreditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline ModifyInstanceAttributeRequest& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ModifyInstanceAttributeRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyInstanceAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableJumboFrame Field Functions 
    bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
    void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
    inline bool getEnableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
    inline ModifyInstanceAttributeRequest& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


    // enableNetworkEncryption Field Functions 
    bool hasEnableNetworkEncryption() const { return this->enableNetworkEncryption_ != nullptr;};
    void deleteEnableNetworkEncryption() { this->enableNetworkEncryption_ = nullptr;};
    inline bool getEnableNetworkEncryption() const { DARABONBA_PTR_GET_DEFAULT(enableNetworkEncryption_, false) };
    inline ModifyInstanceAttributeRequest& setEnableNetworkEncryption(bool enableNetworkEncryption) { DARABONBA_PTR_SET_VALUE(enableNetworkEncryption_, enableNetworkEncryption) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ModifyInstanceAttributeRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceAttributeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyInstanceAttributeRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // networkInterfaceQueueNumber Field Functions 
    bool hasNetworkInterfaceQueueNumber() const { return this->networkInterfaceQueueNumber_ != nullptr;};
    void deleteNetworkInterfaceQueueNumber() { this->networkInterfaceQueueNumber_ = nullptr;};
    inline int32_t getNetworkInterfaceQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceQueueNumber_, 0) };
    inline ModifyInstanceAttributeRequest& setNetworkInterfaceQueueNumber(int32_t networkInterfaceQueueNumber) { DARABONBA_PTR_SET_VALUE(networkInterfaceQueueNumber_, networkInterfaceQueueNumber) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyInstanceAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyInstanceAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyInstanceAttributeRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // privateDnsNameOptions Field Functions 
    bool hasPrivateDnsNameOptions() const { return this->privateDnsNameOptions_ != nullptr;};
    void deletePrivateDnsNameOptions() { this->privateDnsNameOptions_ = nullptr;};
    inline const ModifyInstanceAttributeRequest::PrivateDnsNameOptions & getPrivateDnsNameOptions() const { DARABONBA_PTR_GET_CONST(privateDnsNameOptions_, ModifyInstanceAttributeRequest::PrivateDnsNameOptions) };
    inline ModifyInstanceAttributeRequest::PrivateDnsNameOptions getPrivateDnsNameOptions() { DARABONBA_PTR_GET(privateDnsNameOptions_, ModifyInstanceAttributeRequest::PrivateDnsNameOptions) };
    inline ModifyInstanceAttributeRequest& setPrivateDnsNameOptions(const ModifyInstanceAttributeRequest::PrivateDnsNameOptions & privateDnsNameOptions) { DARABONBA_PTR_SET_VALUE(privateDnsNameOptions_, privateDnsNameOptions) };
    inline ModifyInstanceAttributeRequest& setPrivateDnsNameOptions(ModifyInstanceAttributeRequest::PrivateDnsNameOptions && privateDnsNameOptions) { DARABONBA_PTR_SET_RVALUE(privateDnsNameOptions_, privateDnsNameOptions) };


    // recyclable Field Functions 
    bool hasRecyclable() const { return this->recyclable_ != nullptr;};
    void deleteRecyclable() { this->recyclable_ = nullptr;};
    inline bool getRecyclable() const { DARABONBA_PTR_GET_DEFAULT(recyclable_, false) };
    inline ModifyInstanceAttributeRequest& setRecyclable(bool recyclable) { DARABONBA_PTR_SET_VALUE(recyclable_, recyclable) };


    // remoteConnectionOptions Field Functions 
    bool hasRemoteConnectionOptions() const { return this->remoteConnectionOptions_ != nullptr;};
    void deleteRemoteConnectionOptions() { this->remoteConnectionOptions_ = nullptr;};
    inline const ModifyInstanceAttributeRequest::RemoteConnectionOptions & getRemoteConnectionOptions() const { DARABONBA_PTR_GET_CONST(remoteConnectionOptions_, ModifyInstanceAttributeRequest::RemoteConnectionOptions) };
    inline ModifyInstanceAttributeRequest::RemoteConnectionOptions getRemoteConnectionOptions() { DARABONBA_PTR_GET(remoteConnectionOptions_, ModifyInstanceAttributeRequest::RemoteConnectionOptions) };
    inline ModifyInstanceAttributeRequest& setRemoteConnectionOptions(const ModifyInstanceAttributeRequest::RemoteConnectionOptions & remoteConnectionOptions) { DARABONBA_PTR_SET_VALUE(remoteConnectionOptions_, remoteConnectionOptions) };
    inline ModifyInstanceAttributeRequest& setRemoteConnectionOptions(ModifyInstanceAttributeRequest::RemoteConnectionOptions && remoteConnectionOptions) { DARABONBA_PTR_SET_RVALUE(remoteConnectionOptions_, remoteConnectionOptions) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyInstanceAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInstanceAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline ModifyInstanceAttributeRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline ModifyInstanceAttributeRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ModifyInstanceAttributeRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<ModifyInstanceAttributeRequest::CpuOptions> cpuOptions_ {};
    // The running mode of the burstable instance. Valid values:
    // 
    // - Standard: standard mode.
    // - Unlimited: unlimited mode.
    // 
    // For more information about the running modes of burstable instances, see [What are burstable instances?](https://help.aliyun.com/document_detail/59977.html).
    shared_ptr<string> creditSpecification_ {};
    // The release protection attribute of the instance. Specifies whether the instance can be released from the console or by calling [DeleteInstance](https://help.aliyun.com/document_detail/25507.html).
    // 
    // > This attribute applies only to pay-as-you-go instances and only prevents manual release operations. It does not apply to system-initiated release operations.
    shared_ptr<bool> deletionProtection_ {};
    // The description of the instance. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the Jumbo Frame feature for the instance MTU. Valid values:
    // 
    // - true: enables the feature.
    // - false: does not enable the feature.
    // 
    // Take note of the following items:
    // - The instance must be in the Running or Stopped state.
    // - The instance must be a VPC-connected instance.
    // - After the Jumbo Frame feature is enabled, the MTU value of the instance changes to 8500. After the feature is disabled, the MTU value reverts to 1500.
    // Only some instance types support the Jumbo Frame feature. For more information, see [ECS instance MTU](https://help.aliyun.com/document_detail/200512.html).
    shared_ptr<bool> enableJumboFrame_ {};
    // Specifies whether to enable VPC network traffic encryption. Valid values:
    // 
    // - true: enables the encryption.
    // - false: disables the encryption.
    // > This parameter is in invitational preview and is not publicly available.
    shared_ptr<bool> enableNetworkEncryption_ {};
    // The hostname of the operating system. Take note of the following items:
    // 
    // - The instance cannot be in the Pending or Starting state. Otherwise, the hostname and `/etc/hosts` configuration may not take effect. You can call [DescribeInstances](https://help.aliyun.com/document_detail/25506.html) to query the current status of the instance.
    // 
    // - The new hostname takes effect after you restart the instance. You can restart the instance in the ECS console (for more information, see [Restart an instance](https://help.aliyun.com/document_detail/25440.html)) or by calling [RebootInstance](https://help.aliyun.com/document_detail/25502.html). Restarting the instance from within the operating system does not take effect.
    // 
    // 
    // The hostname has the following limits for different operating systems:
    // 
    // - Windows Server: The hostname must be 2 to 15 characters in length and can contain uppercase letters, lowercase letters, digits, and hyphens (-). It cannot start or end with a hyphen (-), cannot contain consecutive hyphens (-), and cannot contain only digits.
    // 
    // - Other instances (such as Linux): The hostname must be 2 to 64 characters in length. You can use periods (.) to separate the hostname into multiple segments. Each segment can contain uppercase letters, lowercase letters, digits, and hyphens (-), but cannot contain consecutive periods (.) or hyphens (-). The hostname cannot start or end with a period (.) or hyphen (-).
    shared_ptr<string> hostName_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the instance. The name must be 2 to 128 characters in length. It must start with an uppercase letter, lowercase letter, or Chinese character and cannot start with `http://` or `https://`. The name can contain digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> instanceName_ {};
    // The number of queues for the primary network interface controller (NIC). Take note of the following items:
    // - The instance must be in the Stopped state.
    // - The value cannot exceed the maximum number of queues per NIC allowed by the instance type. The total number of queues for all NICs on the instance cannot exceed the total queue quota allowed by the instance type. You can call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) to query the maximum number of queues per NIC and the total queue quota for an instance type.
    // - If you set this parameter to -1, the number of queues for the primary NIC is reset to the default value for the instance type. You can call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) to query the default number of Elastic Network Interface (ENI) queues for an instance type.
    shared_ptr<int32_t> networkInterfaceQueueNumber_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The password of the instance. The password must be 8 to 30 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The following special characters are supported: **()`~!@#$%^&*-_+=|{}[]:;\\"<>,.?/**
    // . For Windows instances, the password cannot start with a forward slash (/). Take note of the following items:
    // 
    // - The instance cannot be in the Starting state.
    // - The new password takes effect after you restart the instance. You can restart the instance in the ECS console (for more information, see [Restart an instance](https://help.aliyun.com/document_detail/25440.html)) or by calling [RebootInstance](https://help.aliyun.com/document_detail/25502.html). Restarting the instance from within the operating system does not take effect.
    // 
    // > If you specify the Password parameter, use HTTPS to send the request to avoid password leaks.
    shared_ptr<string> password_ {};
    // The private domain name configuration of the instance.
    // 
    // 
    // For more information about private private domain resolution, see [ECS private private domain resolution](https://help.aliyun.com/document_detail/2844797.html).
    shared_ptr<ModifyInstanceAttributeRequest::PrivateDnsNameOptions> privateDnsNameOptions_ {};
    // > This parameter is in invitational preview and is not publicly available.
    shared_ptr<bool> recyclable_ {};
    // > This parameter is in invitational preview and is not publicly available.
    shared_ptr<ModifyInstanceAttributeRequest::RemoteConnectionOptions> remoteConnectionOptions_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The IDs of the security groups to which the instance is reassigned. Take note of the following items:
    // 
    // - Security group IDs in the array cannot be duplicated. The maximum length of the array depends on the maximum number of security groups to which the instance can belong. For more information, see [Limits](~~25412#SecurityGroupQuota1~~).
    // - The instance leaves its current security groups. To retain the current security groups, add their IDs to the array.
    // - You can switch between security group types, but the list cannot contain both basic security groups and advanced security groups at the same time.
    // - The security groups must belong to the same VPC as the instance.
    // 
    // > Changes to security groups take effect on the instance shortly after the modification, but a slight delay may occur.
    shared_ptr<vector<string>> securityGroupIds_ {};
    // The instance user data. We recommend that you Base64-encode the data before you pass it in. Take note of the following items:
    // 
    // - The instance must meet the usage limits for instance user data. For more information, see [Create instance user data](https://help.aliyun.com/document_detail/49121.html).
    // - After you restart the instance, the new user data is displayed on the instance but is not run.
    // 
    // > Before Base64 encoding, the raw data cannot exceed 32 KB. Do not pass in sensitive information such as passwords and private keys in plaintext. If you must pass in sensitive information, encrypt the information, Base64-encode it, and then decrypt it in the same way within the instance.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
