// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNCHRONIZATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNCHRONIZATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CreateSynchronizationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSynchronizationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceCount, DBInstanceCount_);
      DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobClass, synchronizationJobClass_);
      DARABONBA_PTR_TO_JSON(Topology, topology_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(networkType, networkType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSynchronizationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceCount, DBInstanceCount_);
      DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobClass, synchronizationJobClass_);
      DARABONBA_PTR_FROM_JSON(Topology, topology_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(networkType, networkType_);
    };
    CreateSynchronizationJobRequest() = default ;
    CreateSynchronizationJobRequest(const CreateSynchronizationJobRequest &) = default ;
    CreateSynchronizationJobRequest(CreateSynchronizationJobRequest &&) = default ;
    CreateSynchronizationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSynchronizationJobRequest() = default ;
    CreateSynchronizationJobRequest& operator=(const CreateSynchronizationJobRequest &) = default ;
    CreateSynchronizationJobRequest& operator=(CreateSynchronizationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      };
      friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
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
      virtual bool empty() const override { return this->instanceType_ == nullptr; };
      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    protected:
      // 源库的实例类型，取值：
      // 
      // - **MySQL**：MySQL数据库（包括RDS MySQL和自建MySQL）。
      // - **PolarDB**：PolarDB集群（仅支持MySQL或兼容Oracle语法的引擎）。
      // - **Redis**：Redis数据库。
      // - **DRDS**：云原生分布式数据库PolarDB-X 1.0。
      // 
      // > - 默认取值为**MySQL**。
      // - 关于支持的源库和目标库对应情况，请参见支持的[数据库、同步初始化类型和同步拓扑](https://help.aliyun.com/document_detail/130744.html)。
      shared_ptr<string> instanceType_ {};
    };

    class DestinationEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DestinationEndpoint& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      };
      friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      };
      DestinationEndpoint() = default ;
      DestinationEndpoint(const DestinationEndpoint &) = default ;
      DestinationEndpoint(DestinationEndpoint &&) = default ;
      DestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DestinationEndpoint() = default ;
      DestinationEndpoint& operator=(const DestinationEndpoint &) = default ;
      DestinationEndpoint& operator=(DestinationEndpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceType_ == nullptr; };
      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline DestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    protected:
      // 目标库的实例类型，取值：
      // - **MySQL**：MySQL数据库（包括RDS MySQL和自建MySQL）。
      // - **PolarDB**：PolarDB集群（仅支持MySQL或兼容Oracle语法的引擎）。
      // - **Redis**：Redis数据库。
      // - **MaxCompute**：MaxCompute实例。
      // 
      // >- 默认取值为**MySQL**。
      // - 关于支持的源库和目标库对应情况，请参见支持的[数据库、同步初始化类型和同步拓扑](https://help.aliyun.com/document_detail/130744.html)。
      shared_ptr<string> instanceType_ {};
    };

    virtual bool empty() const override { return this->destinationEndpoint_ == nullptr
        && this->sourceEndpoint_ == nullptr && this->accountId_ == nullptr && this->clientToken_ == nullptr && this->DBInstanceCount_ == nullptr && this->destRegion_ == nullptr
        && this->ownerId_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->sourceRegion_ == nullptr && this->synchronizationJobClass_ == nullptr && this->topology_ == nullptr && this->usedTime_ == nullptr && this->networkType_ == nullptr; };
    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const CreateSynchronizationJobRequest::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, CreateSynchronizationJobRequest::DestinationEndpoint) };
    inline CreateSynchronizationJobRequest::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, CreateSynchronizationJobRequest::DestinationEndpoint) };
    inline CreateSynchronizationJobRequest& setDestinationEndpoint(const CreateSynchronizationJobRequest::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline CreateSynchronizationJobRequest& setDestinationEndpoint(CreateSynchronizationJobRequest::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const CreateSynchronizationJobRequest::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, CreateSynchronizationJobRequest::SourceEndpoint) };
    inline CreateSynchronizationJobRequest::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, CreateSynchronizationJobRequest::SourceEndpoint) };
    inline CreateSynchronizationJobRequest& setSourceEndpoint(const CreateSynchronizationJobRequest::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline CreateSynchronizationJobRequest& setSourceEndpoint(CreateSynchronizationJobRequest::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CreateSynchronizationJobRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSynchronizationJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceCount Field Functions 
    bool hasDBInstanceCount() const { return this->DBInstanceCount_ != nullptr;};
    void deleteDBInstanceCount() { this->DBInstanceCount_ = nullptr;};
    inline int32_t getDBInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCount_, 0) };
    inline CreateSynchronizationJobRequest& setDBInstanceCount(int32_t DBInstanceCount) { DARABONBA_PTR_SET_VALUE(DBInstanceCount_, DBInstanceCount) };


    // destRegion Field Functions 
    bool hasDestRegion() const { return this->destRegion_ != nullptr;};
    void deleteDestRegion() { this->destRegion_ = nullptr;};
    inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
    inline CreateSynchronizationJobRequest& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateSynchronizationJobRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateSynchronizationJobRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateSynchronizationJobRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSynchronizationJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSynchronizationJobRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceRegion Field Functions 
    bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
    void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
    inline string getSourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
    inline CreateSynchronizationJobRequest& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


    // synchronizationJobClass Field Functions 
    bool hasSynchronizationJobClass() const { return this->synchronizationJobClass_ != nullptr;};
    void deleteSynchronizationJobClass() { this->synchronizationJobClass_ = nullptr;};
    inline string getSynchronizationJobClass() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobClass_, "") };
    inline CreateSynchronizationJobRequest& setSynchronizationJobClass(string synchronizationJobClass) { DARABONBA_PTR_SET_VALUE(synchronizationJobClass_, synchronizationJobClass) };


    // topology Field Functions 
    bool hasTopology() const { return this->topology_ != nullptr;};
    void deleteTopology() { this->topology_ = nullptr;};
    inline string getTopology() const { DARABONBA_PTR_GET_DEFAULT(topology_, "") };
    inline CreateSynchronizationJobRequest& setTopology(string topology) { DARABONBA_PTR_SET_VALUE(topology_, topology) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CreateSynchronizationJobRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateSynchronizationJobRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


  protected:
    shared_ptr<CreateSynchronizationJobRequest::DestinationEndpoint> destinationEndpoint_ {};
    shared_ptr<CreateSynchronizationJobRequest::SourceEndpoint> sourceEndpoint_ {};
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because it will be deprecated.
    shared_ptr<string> accountId_ {};
    // The client token that is used to ensure the idempotence of the request. Generate a value from your client to ensure uniqueness across different requests. **ClientToken** supports only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The number of private custom ApsaraDB RDS instances attached to the source PolarDB-X instance. This parameter is required when **SourceEndpoint.InstanceType** is set to **DRDS**. Default value: **1**.
    shared_ptr<int32_t> DBInstanceCount_ {};
    // The region ID of the destination database for data synchronization. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    // > If the region specified by the **SourceRegion** parameter is Hong Kong (China) or a region outside China, set this parameter to the same region ID.
    // 
    // This parameter is required.
    shared_ptr<string> destRegion_ {};
    shared_ptr<string> ownerId_ {};
    // The billing method. Valid values:
    // 
    // - **PrePaid**: subscription.
    // - **PostPaid**: pay-as-you-go. This is the default value.
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The billing method of the subscription instance. Valid values:
    // 
    // - **Year**: annual subscription.
    // - **Month**: monthly subscription.
    // 
    // > This parameter is valid and required only when **PayType** is set to **PrePaid** (subscription).
    shared_ptr<string> period_ {};
    // The region ID of the data synchronization instance. Set this parameter to the same value as the **DestRegion** parameter.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The region ID of the source database for data synchronization. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // This parameter is required.
    shared_ptr<string> sourceRegion_ {};
    // The specification of the data synchronization link. Valid values: **micro**, **small**, **medium**, **large**.
    // > For more information about the description and performance test results of each specification, see [Specifications of data synchronization links](https://help.aliyun.com/document_detail/26605.html).
    // 
    // This parameter is required.
    shared_ptr<string> synchronizationJobClass_ {};
    // The synchronization topology. Valid values:
    // 
    // - **oneway**: one-way synchronization.
    // - **bidirectional**: two-way synchronization.
    // 
    // > - Default value: **oneway**.
    // - You can set this parameter to **bidirectional** only when both **SourceEndpoint.InstanceType** and **DestinationEndpoint.InstanceType** are set to **MySQL**, **PolarDB**, or **Redis**.
    shared_ptr<string> topology_ {};
    // The subscription duration of the subscription instance.
    // 
    // - If the billing method is set to **Year**, valid values are **1 to 5**.
    // - If the billing method is set to **Month**, valid values are **1 to 60**.
    // 
    // > This parameter is valid and required only when **PayType** is set to **PrePaid** (subscription).
    shared_ptr<int32_t> usedTime_ {};
    // The network type for Data Transmission Service. Set the value to **Intranet** (Express Connect).
    shared_ptr<string> networkType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
