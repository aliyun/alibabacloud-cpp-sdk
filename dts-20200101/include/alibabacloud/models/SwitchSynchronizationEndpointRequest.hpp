// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHSYNCHRONIZATIONENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHSYNCHRONIZATIONENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class SwitchSynchronizationEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchSynchronizationEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobId, synchronizationJobId_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchSynchronizationEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobId, synchronizationJobId_);
    };
    SwitchSynchronizationEndpointRequest() = default ;
    SwitchSynchronizationEndpointRequest(const SwitchSynchronizationEndpointRequest &) = default ;
    SwitchSynchronizationEndpointRequest(SwitchSynchronizationEndpointRequest &&) = default ;
    SwitchSynchronizationEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchSynchronizationEndpointRequest() = default ;
    SwitchSynchronizationEndpointRequest& operator=(const SwitchSynchronizationEndpointRequest &) = default ;
    SwitchSynchronizationEndpointRequest& operator=(SwitchSynchronizationEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
        DARABONBA_PTR_TO_JSON(OwnerID, ownerID_);
        DARABONBA_PTR_TO_JSON(Role, role_);
      };
      friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(OwnerID, ownerID_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
      };
      SourceEndpoint() = default ;
      SourceEndpoint(const SourceEndpoint &) = default ;
      SourceEndpoint(SourceEndpoint &&) = default ;
      SourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceEndpoint() = default ;
      SourceEndpoint& operator=(const SourceEndpoint &) = default ;
      SourceEndpoint& operator=(SourceEndpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ownerID_ == nullptr
        && this->role_ == nullptr; };
      // ownerID Field Functions 
      bool hasOwnerID() const { return this->ownerID_ != nullptr;};
      void deleteOwnerID() { this->ownerID_ = nullptr;};
      inline string getOwnerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, "") };
      inline SourceEndpoint& setOwnerID(string ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline SourceEndpoint& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      // 当源实例与目标实例所属阿里云账号不同时，您需要传入该参数指定源实例的所属阿里云账号的ID。
      shared_ptr<string> ownerID_ {};
      // 当源实例与目标实例所属阿里云账号不同时，需传入该参数，来指定源实例的授权角色，以允许目标实例阿里云账号访问源实例的实例信息。
      // > 角色所需的权限及授权方式，请参见[跨阿里云账号数据迁移或同步时如何配置RAM授权](https://help.aliyun.com/document_detail/48468.html)。
      shared_ptr<string> role_ {};
    };

    class Endpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoint& obj) { 
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Endpoint() = default ;
      Endpoint(const Endpoint &) = default ;
      Endpoint(Endpoint &&) = default ;
      Endpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoint() = default ;
      Endpoint& operator=(const Endpoint &) = default ;
      Endpoint& operator=(Endpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->IP_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->port_ == nullptr && this->type_ == nullptr; };
      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline Endpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Endpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Endpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Endpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Endpoint& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // 新数据库的IP地址。
      // > 当**Endpoint.InstanceType**取值为**Express**时，本参数才可用且必须传入。
      shared_ptr<string> IP_ {};
      // ECS或专有网络的实例ID。
      // > - 当**Endpoint.InstanceType**取值为**ECS**时，本参数需传入ECS实例的ID。
      // - 当**Endpoint.InstanceType**取值为**Express**时，本参数需传入专有网络ID。
      // 
      // This parameter is required.
      shared_ptr<string> instanceId_ {};
      // 新数据库所属的实例类型，取值：
      // 
      // - **LocalInstance**：有公网IP的自建数据库；
      // - **ECS**：ECS上的自建数据库。
      // - **Express**：通过专线接入的自建数据库。
      // 
      // This parameter is required.
      shared_ptr<string> instanceType_ {};
      // 新的数据库服务端口。
      // 
      // This parameter is required.
      shared_ptr<string> port_ {};
      // 待调整连接信息的实例，取值：
      // 
      // - **Source**：源实例。
      // - **Destination**：目标实例。
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->sourceEndpoint_ == nullptr && this->accountId_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->synchronizationDirection_ == nullptr && this->synchronizationJobId_ == nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline const SwitchSynchronizationEndpointRequest::Endpoint & getEndpoint() const { DARABONBA_PTR_GET_CONST(endpoint_, SwitchSynchronizationEndpointRequest::Endpoint) };
    inline SwitchSynchronizationEndpointRequest::Endpoint getEndpoint() { DARABONBA_PTR_GET(endpoint_, SwitchSynchronizationEndpointRequest::Endpoint) };
    inline SwitchSynchronizationEndpointRequest& setEndpoint(const SwitchSynchronizationEndpointRequest::Endpoint & endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };
    inline SwitchSynchronizationEndpointRequest& setEndpoint(SwitchSynchronizationEndpointRequest::Endpoint && endpoint) { DARABONBA_PTR_SET_RVALUE(endpoint_, endpoint) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const SwitchSynchronizationEndpointRequest::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, SwitchSynchronizationEndpointRequest::SourceEndpoint) };
    inline SwitchSynchronizationEndpointRequest::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, SwitchSynchronizationEndpointRequest::SourceEndpoint) };
    inline SwitchSynchronizationEndpointRequest& setSourceEndpoint(const SwitchSynchronizationEndpointRequest::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline SwitchSynchronizationEndpointRequest& setSourceEndpoint(SwitchSynchronizationEndpointRequest::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline SwitchSynchronizationEndpointRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline SwitchSynchronizationEndpointRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SwitchSynchronizationEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SwitchSynchronizationEndpointRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline SwitchSynchronizationEndpointRequest& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // synchronizationJobId Field Functions 
    bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
    void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
    inline string getSynchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
    inline SwitchSynchronizationEndpointRequest& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


  protected:
    shared_ptr<SwitchSynchronizationEndpointRequest::Endpoint> endpoint_ {};
    shared_ptr<SwitchSynchronizationEndpointRequest::SourceEndpoint> sourceEndpoint_ {};
    // The Alibaba Cloud account ID. You do not need to specify this parameter because it will be deprecated.
    shared_ptr<string> accountId_ {};
    shared_ptr<string> ownerId_ {};
    // The region ID. Specify this parameter to indicate the region where the instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The synchronization direction. Valid values:
    // - **Forward**: forward.
    // - **Reverse**: reverse.
    // 
    // > Default value: **Forward**. The value **Reverse** takes effect only when the synchronization topology of the data synchronization instance is two-way synchronization.
    shared_ptr<string> synchronizationDirection_ {};
    // Instance ID of the data synchronization instance. You can call the DescribeSynchronizationJobs operation to query instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> synchronizationJobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
