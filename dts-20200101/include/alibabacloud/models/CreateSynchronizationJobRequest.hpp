// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNCHRONIZATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNCHRONIZATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSynchronizationJobRequestDestinationEndpoint.hpp>
#include <alibabacloud/models/CreateSynchronizationJobRequestSourceEndpoint.hpp>
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
    virtual bool empty() const override { this->destinationEndpoint_ != nullptr
        && this->sourceEndpoint_ != nullptr && this->accountId_ != nullptr && this->clientToken_ != nullptr && this->DBInstanceCount_ != nullptr && this->destRegion_ != nullptr
        && this->ownerId_ != nullptr && this->payType_ != nullptr && this->period_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->sourceRegion_ != nullptr && this->synchronizationJobClass_ != nullptr && this->topology_ != nullptr && this->usedTime_ != nullptr && this->networkType_ != nullptr; };
    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const CreateSynchronizationJobRequestDestinationEndpoint & destinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, CreateSynchronizationJobRequestDestinationEndpoint) };
    inline CreateSynchronizationJobRequestDestinationEndpoint destinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, CreateSynchronizationJobRequestDestinationEndpoint) };
    inline CreateSynchronizationJobRequest& setDestinationEndpoint(const CreateSynchronizationJobRequestDestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline CreateSynchronizationJobRequest& setDestinationEndpoint(CreateSynchronizationJobRequestDestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const CreateSynchronizationJobRequestSourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, CreateSynchronizationJobRequestSourceEndpoint) };
    inline CreateSynchronizationJobRequestSourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, CreateSynchronizationJobRequestSourceEndpoint) };
    inline CreateSynchronizationJobRequest& setSourceEndpoint(const CreateSynchronizationJobRequestSourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline CreateSynchronizationJobRequest& setSourceEndpoint(CreateSynchronizationJobRequestSourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CreateSynchronizationJobRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSynchronizationJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceCount Field Functions 
    bool hasDBInstanceCount() const { return this->DBInstanceCount_ != nullptr;};
    void deleteDBInstanceCount() { this->DBInstanceCount_ = nullptr;};
    inline int32_t DBInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceCount_, 0) };
    inline CreateSynchronizationJobRequest& setDBInstanceCount(int32_t DBInstanceCount) { DARABONBA_PTR_SET_VALUE(DBInstanceCount_, DBInstanceCount) };


    // destRegion Field Functions 
    bool hasDestRegion() const { return this->destRegion_ != nullptr;};
    void deleteDestRegion() { this->destRegion_ = nullptr;};
    inline string destRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
    inline CreateSynchronizationJobRequest& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateSynchronizationJobRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateSynchronizationJobRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateSynchronizationJobRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSynchronizationJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSynchronizationJobRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceRegion Field Functions 
    bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
    void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
    inline string sourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
    inline CreateSynchronizationJobRequest& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


    // synchronizationJobClass Field Functions 
    bool hasSynchronizationJobClass() const { return this->synchronizationJobClass_ != nullptr;};
    void deleteSynchronizationJobClass() { this->synchronizationJobClass_ = nullptr;};
    inline string synchronizationJobClass() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobClass_, "") };
    inline CreateSynchronizationJobRequest& setSynchronizationJobClass(string synchronizationJobClass) { DARABONBA_PTR_SET_VALUE(synchronizationJobClass_, synchronizationJobClass) };


    // topology Field Functions 
    bool hasTopology() const { return this->topology_ != nullptr;};
    void deleteTopology() { this->topology_ = nullptr;};
    inline string topology() const { DARABONBA_PTR_GET_DEFAULT(topology_, "") };
    inline CreateSynchronizationJobRequest& setTopology(string topology) { DARABONBA_PTR_SET_VALUE(topology_, topology) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CreateSynchronizationJobRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateSynchronizationJobRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


  protected:
    std::shared_ptr<CreateSynchronizationJobRequestDestinationEndpoint> destinationEndpoint_ = nullptr;
    std::shared_ptr<CreateSynchronizationJobRequestSourceEndpoint> sourceEndpoint_ = nullptr;
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because this parameter will be removed in the future.
    std::shared_ptr<string> accountId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that it is unique among different requests. The **ClientToken** parameter can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // If you set the **SourceEndpoint.InstanceType** parameter to **DRDS**, you must specify the DBInstanceCount parameter. This parameter specifies the number of private RDS instances attached to the source PolarDB-X instance. Default value: **1**.
    std::shared_ptr<int32_t> DBInstanceCount_ = nullptr;
    // The ID of the region where the destination database resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // >  If the **SourceRegion** parameter is set to the China (Hong Kong) region or a region outside the Chinese mainland, you must set the DestRegion parameter to the same region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> destRegion_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The billing method of the data synchronization instance.
    // 
    // *   **PrePaid**: subscription
    // *   **PostPaid** (default value): pay-as-you-go
    // 
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    // The billing cycle of the subscription instance. Valid values:
    // 
    // *   **Year**
    // *   **Month**
    // 
    // >  You must specify this parameter only if you set the PayType parameter to **PrePaid**.
    std::shared_ptr<string> period_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource GroupId
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the region where the source database resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceRegion_ = nullptr;
    // The specification of the data synchronization instance. Valid values: **micro**, **small**, **medium**, and **large**.
    // 
    // >  For more information about the test performance of each specification, see [Specifications of data synchronization instances](https://help.aliyun.com/document_detail/26605.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> synchronizationJobClass_ = nullptr;
    // The synchronization topology. Valid values:
    // 
    // *   **oneway**: one-way synchronization
    // *   **bidirectional**: two-way synchronization
    // 
    // > 
    // *   The default value is **oneway**.
    // *   This parameter can be set to **bidirectional** only when the **SourceEndpoint.InstanceType** and **DestinationEndpoint.InstanceType** parameters are set to **MySQL**, **PolarDB**, or **Redis**.
    std::shared_ptr<string> topology_ = nullptr;
    // The subscription length.
    // 
    // *   If the billing cycle is **Year**, the value range is **1 to 5**.
    // *   If the billing cycle is **Month**, the value range is **1 to 60**.
    // 
    // >  You must specify this parameter only if you set the PayType parameter to **PrePaid**.
    std::shared_ptr<int32_t> usedTime_ = nullptr;
    // The network type. Valid value: **Intranet**, which indicates virtual private cloud (VPC).
    std::shared_ptr<string> networkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
