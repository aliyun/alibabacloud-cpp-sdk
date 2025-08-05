// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDTSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDTSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CreateDtsInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDtsInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoStart, autoStart_);
      DARABONBA_PTR_TO_JSON(ComputeUnit, computeUnit_);
      DARABONBA_PTR_TO_JSON(DatabaseCount, databaseCount_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointEngineName, destinationEndpointEngineName_);
      DARABONBA_PTR_TO_JSON(DestinationRegion, destinationRegion_);
      DARABONBA_PTR_TO_JSON(DtsRegion, dtsRegion_);
      DARABONBA_PTR_TO_JSON(Du, du_);
      DARABONBA_PTR_TO_JSON(FeeType, feeType_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MaxDu, maxDu_);
      DARABONBA_PTR_TO_JSON(MinDu, minDu_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceEndpointEngineName, sourceEndpointEngineName_);
      DARABONBA_PTR_TO_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_TO_JSON(SyncArchitecture, syncArchitecture_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDtsInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoStart, autoStart_);
      DARABONBA_PTR_FROM_JSON(ComputeUnit, computeUnit_);
      DARABONBA_PTR_FROM_JSON(DatabaseCount, databaseCount_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointEngineName, destinationEndpointEngineName_);
      DARABONBA_PTR_FROM_JSON(DestinationRegion, destinationRegion_);
      DARABONBA_PTR_FROM_JSON(DtsRegion, dtsRegion_);
      DARABONBA_PTR_FROM_JSON(Du, du_);
      DARABONBA_PTR_FROM_JSON(FeeType, feeType_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MaxDu, maxDu_);
      DARABONBA_PTR_FROM_JSON(MinDu, minDu_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointEngineName, sourceEndpointEngineName_);
      DARABONBA_PTR_FROM_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_FROM_JSON(SyncArchitecture, syncArchitecture_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
    };
    CreateDtsInstanceRequest() = default ;
    CreateDtsInstanceRequest(const CreateDtsInstanceRequest &) = default ;
    CreateDtsInstanceRequest(CreateDtsInstanceRequest &&) = default ;
    CreateDtsInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDtsInstanceRequest() = default ;
    CreateDtsInstanceRequest& operator=(const CreateDtsInstanceRequest &) = default ;
    CreateDtsInstanceRequest& operator=(CreateDtsInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPay_ != nullptr
        && this->autoStart_ != nullptr && this->computeUnit_ != nullptr && this->databaseCount_ != nullptr && this->destinationEndpointEngineName_ != nullptr && this->destinationRegion_ != nullptr
        && this->dtsRegion_ != nullptr && this->du_ != nullptr && this->feeType_ != nullptr && this->instanceClass_ != nullptr && this->jobId_ != nullptr
        && this->maxDu_ != nullptr && this->minDu_ != nullptr && this->payType_ != nullptr && this->period_ != nullptr && this->quantity_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->sourceEndpointEngineName_ != nullptr && this->sourceRegion_ != nullptr && this->syncArchitecture_ != nullptr
        && this->type_ != nullptr && this->usedTime_ != nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateDtsInstanceRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoStart Field Functions 
    bool hasAutoStart() const { return this->autoStart_ != nullptr;};
    void deleteAutoStart() { this->autoStart_ = nullptr;};
    inline bool autoStart() const { DARABONBA_PTR_GET_DEFAULT(autoStart_, false) };
    inline CreateDtsInstanceRequest& setAutoStart(bool autoStart) { DARABONBA_PTR_SET_VALUE(autoStart_, autoStart) };


    // computeUnit Field Functions 
    bool hasComputeUnit() const { return this->computeUnit_ != nullptr;};
    void deleteComputeUnit() { this->computeUnit_ = nullptr;};
    inline int32_t computeUnit() const { DARABONBA_PTR_GET_DEFAULT(computeUnit_, 0) };
    inline CreateDtsInstanceRequest& setComputeUnit(int32_t computeUnit) { DARABONBA_PTR_SET_VALUE(computeUnit_, computeUnit) };


    // databaseCount Field Functions 
    bool hasDatabaseCount() const { return this->databaseCount_ != nullptr;};
    void deleteDatabaseCount() { this->databaseCount_ = nullptr;};
    inline int32_t databaseCount() const { DARABONBA_PTR_GET_DEFAULT(databaseCount_, 0) };
    inline CreateDtsInstanceRequest& setDatabaseCount(int32_t databaseCount) { DARABONBA_PTR_SET_VALUE(databaseCount_, databaseCount) };


    // destinationEndpointEngineName Field Functions 
    bool hasDestinationEndpointEngineName() const { return this->destinationEndpointEngineName_ != nullptr;};
    void deleteDestinationEndpointEngineName() { this->destinationEndpointEngineName_ = nullptr;};
    inline string destinationEndpointEngineName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointEngineName_, "") };
    inline CreateDtsInstanceRequest& setDestinationEndpointEngineName(string destinationEndpointEngineName) { DARABONBA_PTR_SET_VALUE(destinationEndpointEngineName_, destinationEndpointEngineName) };


    // destinationRegion Field Functions 
    bool hasDestinationRegion() const { return this->destinationRegion_ != nullptr;};
    void deleteDestinationRegion() { this->destinationRegion_ = nullptr;};
    inline string destinationRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationRegion_, "") };
    inline CreateDtsInstanceRequest& setDestinationRegion(string destinationRegion) { DARABONBA_PTR_SET_VALUE(destinationRegion_, destinationRegion) };


    // dtsRegion Field Functions 
    bool hasDtsRegion() const { return this->dtsRegion_ != nullptr;};
    void deleteDtsRegion() { this->dtsRegion_ = nullptr;};
    inline string dtsRegion() const { DARABONBA_PTR_GET_DEFAULT(dtsRegion_, "") };
    inline CreateDtsInstanceRequest& setDtsRegion(string dtsRegion) { DARABONBA_PTR_SET_VALUE(dtsRegion_, dtsRegion) };


    // du Field Functions 
    bool hasDu() const { return this->du_ != nullptr;};
    void deleteDu() { this->du_ = nullptr;};
    inline int32_t du() const { DARABONBA_PTR_GET_DEFAULT(du_, 0) };
    inline CreateDtsInstanceRequest& setDu(int32_t du) { DARABONBA_PTR_SET_VALUE(du_, du) };


    // feeType Field Functions 
    bool hasFeeType() const { return this->feeType_ != nullptr;};
    void deleteFeeType() { this->feeType_ = nullptr;};
    inline string feeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, "") };
    inline CreateDtsInstanceRequest& setFeeType(string feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string instanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline CreateDtsInstanceRequest& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CreateDtsInstanceRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // maxDu Field Functions 
    bool hasMaxDu() const { return this->maxDu_ != nullptr;};
    void deleteMaxDu() { this->maxDu_ = nullptr;};
    inline double maxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0.0) };
    inline CreateDtsInstanceRequest& setMaxDu(double maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


    // minDu Field Functions 
    bool hasMinDu() const { return this->minDu_ != nullptr;};
    void deleteMinDu() { this->minDu_ = nullptr;};
    inline double minDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0.0) };
    inline CreateDtsInstanceRequest& setMinDu(double minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDtsInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateDtsInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline CreateDtsInstanceRequest& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDtsInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDtsInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceEndpointEngineName Field Functions 
    bool hasSourceEndpointEngineName() const { return this->sourceEndpointEngineName_ != nullptr;};
    void deleteSourceEndpointEngineName() { this->sourceEndpointEngineName_ = nullptr;};
    inline string sourceEndpointEngineName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointEngineName_, "") };
    inline CreateDtsInstanceRequest& setSourceEndpointEngineName(string sourceEndpointEngineName) { DARABONBA_PTR_SET_VALUE(sourceEndpointEngineName_, sourceEndpointEngineName) };


    // sourceRegion Field Functions 
    bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
    void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
    inline string sourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
    inline CreateDtsInstanceRequest& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


    // syncArchitecture Field Functions 
    bool hasSyncArchitecture() const { return this->syncArchitecture_ != nullptr;};
    void deleteSyncArchitecture() { this->syncArchitecture_ = nullptr;};
    inline string syncArchitecture() const { DARABONBA_PTR_GET_DEFAULT(syncArchitecture_, "") };
    inline CreateDtsInstanceRequest& setSyncArchitecture(string syncArchitecture) { DARABONBA_PTR_SET_VALUE(syncArchitecture_, syncArchitecture) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateDtsInstanceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CreateDtsInstanceRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


  protected:
    // Specifies whether to automatically renew the DTS instance when it expires. Valid values:
    // 
    // *   **false**: does not automatically renew the DTS instance when it expires. This is the default value.
    // *   **true**: automatically renews the DTS instance when it expires.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Specifies whether to automatically start the task after the DTS instance is purchased. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    // 
    // >  This parameter can be set to **true** and take effect only if you specify a valid value for **JobId**.
    std::shared_ptr<bool> autoStart_ = nullptr;
    // The specification of the extract, transform, and load (ETL) instance. The unit is compute unit (CU). One CU is equal to 1 vCPU and 4 GB of memory. The value of this parameter must be an integer greater than or equal to 2.
    std::shared_ptr<int32_t> computeUnit_ = nullptr;
    // The number of custom ApsaraDB RDS instances in the PolarDB-X instance. Default value: **1**.
    // 
    // >  This parameter is required only if **SourceEndpointEngineName** is set to **drds**.
    std::shared_ptr<int32_t> databaseCount_ = nullptr;
    // The database engine of the destination instance.
    // 
    // *   **MySQL**: ApsaraDB RDS for MySQL instance or self-managed MySQL database
    // *   **PolarDB**: PolarDB for MySQL cluster
    // *   **polardb_o**: PolarDB for Oracle cluster
    // *   **polardb_pg**: PolarDB for PostgreSQL cluster
    // *   **Redis**: ApsaraDB for Redis instance or self-managed Redis database
    // *   **DRDS**: PolarDB-X 1.0 or PolarDB-X 2.0 instance
    // *   **PostgreSQL**: self-managed PostgreSQL database
    // *   **odps**: MaxCompute project
    // *   **oracle**: self-managed Oracle database
    // *   **mongodb**: ApsaraDB for MongoDB instance or self-managed MongoDB database
    // *   **tidb**: TiDB database
    // *   **ADS**: AnalyticDB for MySQL V2.0 cluster
    // *   **ADB30**: AnalyticDB for MySQL V3.0 cluster
    // *   **Greenplum**: AnalyticDB for PostgreSQL instance
    // *   **MSSQL**: ApsaraDB RDS for SQL Server instance or self-managed SQL Server database
    // *   **kafka**: Message Queue for Apache Kafka instance or self-managed Kafka cluster
    // *   **DataHub**: DataHub project
    // *   **DB2**: self-managed Db2 for LUW database
    // *   **as400**: AS/400
    // *   **Tablestore**: Tablestore instance
    // 
    // > 
    // *   The default value is **MySQL**.
    // *   For more information about the supported source and destination databases, see [Overview of data synchronization scenarios](https://help.aliyun.com/document_detail/130744.html) and [Overview of data migration scenarios](https://help.aliyun.com/document_detail/26618.html).
    // *   You must specify one of this parameter and the **JobId** parameter.
    std::shared_ptr<string> destinationEndpointEngineName_ = nullptr;
    // The ID of the region in which the destination instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // >  You must specify one of this parameter and the **JobId** parameter.
    std::shared_ptr<string> destinationRegion_ = nullptr;
    // The region ID of the DTS instance. Set this parameter to the value of **RegionId**.
    std::shared_ptr<string> dtsRegion_ = nullptr;
    // The number of DTS units (DUs) that are assigned to a DTS task that is run on a DTS dedicated cluster. Valid values: **1** to **100**.
    // 
    // > 
    // *   The value of this parameter must be within the range of the number of DUs available for the DTS dedicated cluster.
    std::shared_ptr<int32_t> du_ = nullptr;
    // The billing type for a change tracking instance. Valid values: ONLY_CONFIGURATION_FEE and CONFIGURATION_FEE_AND_DATA_FEE. ONLY_CONFIGURATION_FEE: charges only configuration fees. CONFIGURATION_FEE_AND_DATA_FEE: charges configuration fees and data traffic fees.
    std::shared_ptr<string> feeType_ = nullptr;
    // The instance class.
    // 
    // *   DTS supports the following instance classes for a data migration instance: **xxlarge**, **xlarge**, **large**, **medium**, and **small**.
    // *   DTS supports the following instance classes for a data synchronization instance: **large**, **medium**, **small**, and **micro**.
    // 
    // >  For more information about the test performance of each instance class, see [Specifications of data migration instances](https://help.aliyun.com/document_detail/26606.html) and [Specifications of data synchronization instances](https://help.aliyun.com/document_detail/26605.html).
    std::shared_ptr<string> instanceClass_ = nullptr;
    // The ID of the task. You can call the **ConfigureDtsJob** operation to obtain the task ID from the **DtsJobId** parameter.
    // 
    // >  If this parameter is specified, you do not need to specify the **SourceRegion**, **DestinationRegion**, **Type**, **SourceEndpointEngineName**, or **DestinationEndpointEngineName** parameter. Even if these parameters are specified, the value of the **JobId** parameter takes precedence.
    std::shared_ptr<string> jobId_ = nullptr;
    // Upper limit of DU.
    // 
    // > Only supported by Serverless instances.
    std::shared_ptr<double> maxDu_ = nullptr;
    // Lower limit of DU.
    // 
    // > Only supported by Serverless instances.
    std::shared_ptr<double> minDu_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   **PrePaid**: subscription
    // *   **PostPaid**: pay-as-you-go
    // 
    // >  This parameter must be specified.
    std::shared_ptr<string> payType_ = nullptr;
    // The unit of the subscription duration. Valid values: **Year** and **Month**.
    // 
    // >  You must specify this parameter only if the **PayType** parameter is set to **PrePaid**.
    std::shared_ptr<string> period_ = nullptr;
    // The number of DTS instances that you want to purchase.
    // 
    // >  You can purchase only one DTS instance each time you call this operation.
    std::shared_ptr<int32_t> quantity_ = nullptr;
    // The ID of the region in which the DTS instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The database engine of the source instance.
    // 
    // *   **MySQL**: ApsaraDB RDS for MySQL instance or self-managed MySQL database
    // *   **PolarDB**: PolarDB for MySQL cluster
    // *   **polardb_o**: PolarDB for Oracle cluster
    // *   **polardb_pg**: PolarDB for PostgreSQL cluster
    // *   **Redis**: ApsaraDB for Redis instance or self-managed Redis database
    // *   **DRDS**: PolarDB-X 1.0 or PolarDB-X 2.0 instance
    // *   **PostgreSQL**: self-managed PostgreSQL database
    // *   **odps**: MaxCompute project
    // *   **oracle**: self-managed Oracle database
    // *   **mongodb**: ApsaraDB for MongoDB instance or self-managed MongoDB database
    // *   **tidb**: TiDB database
    // *   **ADS**: AnalyticDB for MySQL V2.0 cluster
    // *   **ADB30**: AnalyticDB for MySQL V3.0 cluster
    // *   **Greenplum**: AnalyticDB for PostgreSQL instance
    // *   **MSSQL**: ApsaraDB RDS for SQL Server instance or self-managed SQL Server database
    // *   **kafka**: Message Queue for Apache Kafka instance or self-managed Kafka cluster
    // *   **DataHub**: DataHub project
    // *   **DB2**: self-managed Db2 for LUW database
    // *   **as400**: AS/400
    // *   **Tablestore**: Tablestore instance
    // 
    // > 
    // *   The default value is **MySQL**.
    // *   For more information about the supported source and destination databases, see [Overview of data synchronization scenarios](https://help.aliyun.com/document_detail/130744.html) and [Overview of data migration scenarios](https://help.aliyun.com/document_detail/26618.html).
    // *   You must specify one of this parameter and the **JobId** parameter.
    std::shared_ptr<string> sourceEndpointEngineName_ = nullptr;
    // The ID of the region in which the source instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    // 
    // >  You must specify one of this parameter and the **JobId** parameter.
    std::shared_ptr<string> sourceRegion_ = nullptr;
    // The synchronization topology. Valid values:
    // 
    // *   **oneway**: one-way synchronization. This is the default value.
    // *   **bidirectional**: two-way synchronization.
    std::shared_ptr<string> syncArchitecture_ = nullptr;
    // The type of the DTS instance. Valid values:
    // 
    // *   **MIGRATION**: data migration instance
    // 
    // *   **SYNC**: data synchronization instance
    // 
    // *   **SUBSCRIBE**: change tracking instance
    // 
    // > You must specify one of this parameter and the **JobId** parameter.
    std::shared_ptr<string> type_ = nullptr;
    // The subscription duration.
    // 
    // *   Valid values if **Period** is set to **Month**: 1, 2, 3, 4, 5, 6, 7, 8, and 9.
    // *   Valid values if **Period** is set to **Year**: 1, 2, 3, and 5.
    // 
    // > 
    // 
    // *   This parameter is valid and required only if **PayType** is set to **PrePaid**.
    // 
    // *   You can configure **Period** to specify the unit of the subscription duration.
    std::shared_ptr<int32_t> usedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
