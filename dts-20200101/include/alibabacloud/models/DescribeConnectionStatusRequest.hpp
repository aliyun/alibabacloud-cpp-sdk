// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONNECTIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONNECTIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeConnectionStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConnectionStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationEndpointArchitecture, destinationEndpointArchitecture_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointDatabaseName, destinationEndpointDatabaseName_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointEngineName, destinationEndpointEngineName_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointIP, destinationEndpointIP_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointInstanceType, destinationEndpointInstanceType_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointOracleSID, destinationEndpointOracleSID_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointPassword, destinationEndpointPassword_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointPort, destinationEndpointPort_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointRegion, destinationEndpointRegion_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointUserName, destinationEndpointUserName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceEndpointArchitecture, sourceEndpointArchitecture_);
      DARABONBA_PTR_TO_JSON(SourceEndpointDatabaseName, sourceEndpointDatabaseName_);
      DARABONBA_PTR_TO_JSON(SourceEndpointEngineName, sourceEndpointEngineName_);
      DARABONBA_PTR_TO_JSON(SourceEndpointIP, sourceEndpointIP_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
      DARABONBA_PTR_TO_JSON(SourceEndpointOracleSID, sourceEndpointOracleSID_);
      DARABONBA_PTR_TO_JSON(SourceEndpointPassword, sourceEndpointPassword_);
      DARABONBA_PTR_TO_JSON(SourceEndpointPort, sourceEndpointPort_);
      DARABONBA_PTR_TO_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_TO_JSON(SourceEndpointUserName, sourceEndpointUserName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConnectionStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationEndpointArchitecture, destinationEndpointArchitecture_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointDatabaseName, destinationEndpointDatabaseName_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointEngineName, destinationEndpointEngineName_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointIP, destinationEndpointIP_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointInstanceType, destinationEndpointInstanceType_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointOracleSID, destinationEndpointOracleSID_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointPassword, destinationEndpointPassword_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointPort, destinationEndpointPort_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointRegion, destinationEndpointRegion_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointUserName, destinationEndpointUserName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointArchitecture, sourceEndpointArchitecture_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointDatabaseName, sourceEndpointDatabaseName_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointEngineName, sourceEndpointEngineName_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointIP, sourceEndpointIP_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointOracleSID, sourceEndpointOracleSID_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointPassword, sourceEndpointPassword_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointPort, sourceEndpointPort_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointUserName, sourceEndpointUserName_);
    };
    DescribeConnectionStatusRequest() = default ;
    DescribeConnectionStatusRequest(const DescribeConnectionStatusRequest &) = default ;
    DescribeConnectionStatusRequest(DescribeConnectionStatusRequest &&) = default ;
    DescribeConnectionStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConnectionStatusRequest() = default ;
    DescribeConnectionStatusRequest& operator=(const DescribeConnectionStatusRequest &) = default ;
    DescribeConnectionStatusRequest& operator=(DescribeConnectionStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationEndpointArchitecture_ != nullptr
        && this->destinationEndpointDatabaseName_ != nullptr && this->destinationEndpointEngineName_ != nullptr && this->destinationEndpointIP_ != nullptr && this->destinationEndpointInstanceID_ != nullptr && this->destinationEndpointInstanceType_ != nullptr
        && this->destinationEndpointOracleSID_ != nullptr && this->destinationEndpointPassword_ != nullptr && this->destinationEndpointPort_ != nullptr && this->destinationEndpointRegion_ != nullptr && this->destinationEndpointUserName_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->sourceEndpointArchitecture_ != nullptr && this->sourceEndpointDatabaseName_ != nullptr && this->sourceEndpointEngineName_ != nullptr
        && this->sourceEndpointIP_ != nullptr && this->sourceEndpointInstanceID_ != nullptr && this->sourceEndpointInstanceType_ != nullptr && this->sourceEndpointOracleSID_ != nullptr && this->sourceEndpointPassword_ != nullptr
        && this->sourceEndpointPort_ != nullptr && this->sourceEndpointRegion_ != nullptr && this->sourceEndpointUserName_ != nullptr; };
    // destinationEndpointArchitecture Field Functions 
    bool hasDestinationEndpointArchitecture() const { return this->destinationEndpointArchitecture_ != nullptr;};
    void deleteDestinationEndpointArchitecture() { this->destinationEndpointArchitecture_ = nullptr;};
    inline string destinationEndpointArchitecture() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointArchitecture_, "") };
    inline DescribeConnectionStatusRequest& setDestinationEndpointArchitecture(string destinationEndpointArchitecture) { DARABONBA_PTR_SET_VALUE(destinationEndpointArchitecture_, destinationEndpointArchitecture) };


    // destinationEndpointDatabaseName Field Functions 
    bool hasDestinationEndpointDatabaseName() const { return this->destinationEndpointDatabaseName_ != nullptr;};
    void deleteDestinationEndpointDatabaseName() { this->destinationEndpointDatabaseName_ = nullptr;};
    inline string destinationEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointDatabaseName_, "") };
    inline DescribeConnectionStatusRequest& setDestinationEndpointDatabaseName(string destinationEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(destinationEndpointDatabaseName_, destinationEndpointDatabaseName) };


    // destinationEndpointEngineName Field Functions 
    bool hasDestinationEndpointEngineName() const { return this->destinationEndpointEngineName_ != nullptr;};
    void deleteDestinationEndpointEngineName() { this->destinationEndpointEngineName_ = nullptr;};
    inline string destinationEndpointEngineName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointEngineName_, "") };
    inline DescribeConnectionStatusRequest& setDestinationEndpointEngineName(string destinationEndpointEngineName) { DARABONBA_PTR_SET_VALUE(destinationEndpointEngineName_, destinationEndpointEngineName) };


    // destinationEndpointIP Field Functions 
    bool hasDestinationEndpointIP() const { return this->destinationEndpointIP_ != nullptr;};
    void deleteDestinationEndpointIP() { this->destinationEndpointIP_ = nullptr;};
    inline string destinationEndpointIP() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointIP_, "") };
    inline DescribeConnectionStatusRequest& setDestinationEndpointIP(string destinationEndpointIP) { DARABONBA_PTR_SET_VALUE(destinationEndpointIP_, destinationEndpointIP) };


    // destinationEndpointInstanceID Field Functions 
    bool hasDestinationEndpointInstanceID() const { return this->destinationEndpointInstanceID_ != nullptr;};
    void deleteDestinationEndpointInstanceID() { this->destinationEndpointInstanceID_ = nullptr;};
    inline string destinationEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceID_, "") };
    inline DescribeConnectionStatusRequest& setDestinationEndpointInstanceID(string destinationEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceID_, destinationEndpointInstanceID) };


    // destinationEndpointInstanceType Field Functions 
    bool hasDestinationEndpointInstanceType() const { return this->destinationEndpointInstanceType_ != nullptr;};
    void deleteDestinationEndpointInstanceType() { this->destinationEndpointInstanceType_ = nullptr;};
    inline string destinationEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceType_, "") };
    inline DescribeConnectionStatusRequest& setDestinationEndpointInstanceType(string destinationEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceType_, destinationEndpointInstanceType) };


    // destinationEndpointOracleSID Field Functions 
    bool hasDestinationEndpointOracleSID() const { return this->destinationEndpointOracleSID_ != nullptr;};
    void deleteDestinationEndpointOracleSID() { this->destinationEndpointOracleSID_ = nullptr;};
    inline string destinationEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointOracleSID_, "") };
    inline DescribeConnectionStatusRequest& setDestinationEndpointOracleSID(string destinationEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(destinationEndpointOracleSID_, destinationEndpointOracleSID) };


    // destinationEndpointPassword Field Functions 
    bool hasDestinationEndpointPassword() const { return this->destinationEndpointPassword_ != nullptr;};
    void deleteDestinationEndpointPassword() { this->destinationEndpointPassword_ = nullptr;};
    inline string destinationEndpointPassword() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointPassword_, "") };
    inline DescribeConnectionStatusRequest& setDestinationEndpointPassword(string destinationEndpointPassword) { DARABONBA_PTR_SET_VALUE(destinationEndpointPassword_, destinationEndpointPassword) };


    // destinationEndpointPort Field Functions 
    bool hasDestinationEndpointPort() const { return this->destinationEndpointPort_ != nullptr;};
    void deleteDestinationEndpointPort() { this->destinationEndpointPort_ = nullptr;};
    inline string destinationEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointPort_, "") };
    inline DescribeConnectionStatusRequest& setDestinationEndpointPort(string destinationEndpointPort) { DARABONBA_PTR_SET_VALUE(destinationEndpointPort_, destinationEndpointPort) };


    // destinationEndpointRegion Field Functions 
    bool hasDestinationEndpointRegion() const { return this->destinationEndpointRegion_ != nullptr;};
    void deleteDestinationEndpointRegion() { this->destinationEndpointRegion_ = nullptr;};
    inline string destinationEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointRegion_, "") };
    inline DescribeConnectionStatusRequest& setDestinationEndpointRegion(string destinationEndpointRegion) { DARABONBA_PTR_SET_VALUE(destinationEndpointRegion_, destinationEndpointRegion) };


    // destinationEndpointUserName Field Functions 
    bool hasDestinationEndpointUserName() const { return this->destinationEndpointUserName_ != nullptr;};
    void deleteDestinationEndpointUserName() { this->destinationEndpointUserName_ = nullptr;};
    inline string destinationEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointUserName_, "") };
    inline DescribeConnectionStatusRequest& setDestinationEndpointUserName(string destinationEndpointUserName) { DARABONBA_PTR_SET_VALUE(destinationEndpointUserName_, destinationEndpointUserName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeConnectionStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeConnectionStatusRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceEndpointArchitecture Field Functions 
    bool hasSourceEndpointArchitecture() const { return this->sourceEndpointArchitecture_ != nullptr;};
    void deleteSourceEndpointArchitecture() { this->sourceEndpointArchitecture_ = nullptr;};
    inline string sourceEndpointArchitecture() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointArchitecture_, "") };
    inline DescribeConnectionStatusRequest& setSourceEndpointArchitecture(string sourceEndpointArchitecture) { DARABONBA_PTR_SET_VALUE(sourceEndpointArchitecture_, sourceEndpointArchitecture) };


    // sourceEndpointDatabaseName Field Functions 
    bool hasSourceEndpointDatabaseName() const { return this->sourceEndpointDatabaseName_ != nullptr;};
    void deleteSourceEndpointDatabaseName() { this->sourceEndpointDatabaseName_ = nullptr;};
    inline string sourceEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointDatabaseName_, "") };
    inline DescribeConnectionStatusRequest& setSourceEndpointDatabaseName(string sourceEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(sourceEndpointDatabaseName_, sourceEndpointDatabaseName) };


    // sourceEndpointEngineName Field Functions 
    bool hasSourceEndpointEngineName() const { return this->sourceEndpointEngineName_ != nullptr;};
    void deleteSourceEndpointEngineName() { this->sourceEndpointEngineName_ = nullptr;};
    inline string sourceEndpointEngineName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointEngineName_, "") };
    inline DescribeConnectionStatusRequest& setSourceEndpointEngineName(string sourceEndpointEngineName) { DARABONBA_PTR_SET_VALUE(sourceEndpointEngineName_, sourceEndpointEngineName) };


    // sourceEndpointIP Field Functions 
    bool hasSourceEndpointIP() const { return this->sourceEndpointIP_ != nullptr;};
    void deleteSourceEndpointIP() { this->sourceEndpointIP_ = nullptr;};
    inline string sourceEndpointIP() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIP_, "") };
    inline DescribeConnectionStatusRequest& setSourceEndpointIP(string sourceEndpointIP) { DARABONBA_PTR_SET_VALUE(sourceEndpointIP_, sourceEndpointIP) };


    // sourceEndpointInstanceID Field Functions 
    bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
    void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
    inline string sourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
    inline DescribeConnectionStatusRequest& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


    // sourceEndpointInstanceType Field Functions 
    bool hasSourceEndpointInstanceType() const { return this->sourceEndpointInstanceType_ != nullptr;};
    void deleteSourceEndpointInstanceType() { this->sourceEndpointInstanceType_ = nullptr;};
    inline string sourceEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceType_, "") };
    inline DescribeConnectionStatusRequest& setSourceEndpointInstanceType(string sourceEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceType_, sourceEndpointInstanceType) };


    // sourceEndpointOracleSID Field Functions 
    bool hasSourceEndpointOracleSID() const { return this->sourceEndpointOracleSID_ != nullptr;};
    void deleteSourceEndpointOracleSID() { this->sourceEndpointOracleSID_ = nullptr;};
    inline string sourceEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointOracleSID_, "") };
    inline DescribeConnectionStatusRequest& setSourceEndpointOracleSID(string sourceEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(sourceEndpointOracleSID_, sourceEndpointOracleSID) };


    // sourceEndpointPassword Field Functions 
    bool hasSourceEndpointPassword() const { return this->sourceEndpointPassword_ != nullptr;};
    void deleteSourceEndpointPassword() { this->sourceEndpointPassword_ = nullptr;};
    inline string sourceEndpointPassword() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPassword_, "") };
    inline DescribeConnectionStatusRequest& setSourceEndpointPassword(string sourceEndpointPassword) { DARABONBA_PTR_SET_VALUE(sourceEndpointPassword_, sourceEndpointPassword) };


    // sourceEndpointPort Field Functions 
    bool hasSourceEndpointPort() const { return this->sourceEndpointPort_ != nullptr;};
    void deleteSourceEndpointPort() { this->sourceEndpointPort_ = nullptr;};
    inline string sourceEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPort_, "") };
    inline DescribeConnectionStatusRequest& setSourceEndpointPort(string sourceEndpointPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointPort_, sourceEndpointPort) };


    // sourceEndpointRegion Field Functions 
    bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
    void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
    inline string sourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
    inline DescribeConnectionStatusRequest& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


    // sourceEndpointUserName Field Functions 
    bool hasSourceEndpointUserName() const { return this->sourceEndpointUserName_ != nullptr;};
    void deleteSourceEndpointUserName() { this->sourceEndpointUserName_ = nullptr;};
    inline string sourceEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointUserName_, "") };
    inline DescribeConnectionStatusRequest& setSourceEndpointUserName(string sourceEndpointUserName) { DARABONBA_PTR_SET_VALUE(sourceEndpointUserName_, sourceEndpointUserName) };


  protected:
    // You must specify this parameter only if the **SourceEndpointEngineName** parameter is set to **Oracle**. Valid values:
    // 
    // *   **SID**: non-RAC architecture
    // *   **RAC**: Real Application Cluster (RAC) architecture
    // 
    // >  This parameter is optional. The data type of this parameter is String.
    std::shared_ptr<string> destinationEndpointArchitecture_ = nullptr;
    // The name of the destination database or the authentication database.
    // 
    // > 
    // *   You must specify this parameter if the **DestinationEndpointEngineName** parameter is set to **PostgreSQL**, **DRDS**, or **MongoDB**. You must also specify this parameter if the **DestinationEndpointInstanceType** parameter is set to **PolarDB_o**.
    // *   If the **DestinationEndpointEngineName** parameter is set to **PostgreSQL** or **DRDS**, specify the name of the destination database. If the DestinationEndpointEngineName parameter is set to **MongoDB**, specify the name of the authentication database.
    // *   If the **DestinationEndpointInstanceType** parameter is set to **PolarDB_o**, specify the name of the destination database.
    std::shared_ptr<string> destinationEndpointDatabaseName_ = nullptr;
    // The engine type of the destination database. Valid values: **MySQL**, **DRDS**, **SQLServer**, **PostgreSQL**, **PPAS**, **MongoDB**, and **Redis**.
    // 
    // >  You must specify this parameter only if the **DestinationEndpointInstanceType** parameter is set to **RDS**, **DRDS**, **ECS**, **LocalInstance**, or **Express**.
    std::shared_ptr<string> destinationEndpointEngineName_ = nullptr;
    // The endpoint of the destination database.
    // 
    // >  You must specify this parameter only if the **DestinationEndpointInstanceType** parameter is set to **LocalInstance** or **Express**.
    std::shared_ptr<string> destinationEndpointIP_ = nullptr;
    // The ID of the destination instance.
    std::shared_ptr<string> destinationEndpointInstanceID_ = nullptr;
    // The instance type of the destination database. Valid values:
    // 
    // > 
    // *   **ECS**: self-managed database that is hosted on Elastic Compute Service (ECS)
    // *   **LocalInstance**: self-managed database with a public IP address
    // *   **RDS**: ApsaraDB RDS instance
    // *   **DRDS**: PolarDB-X instance
    // *   **MongoDB**: ApsaraDB for MongoDB instance
    // *   **Redis**: ApsaraDB for Redis instance
    // *   **PetaData**: HybridDB for MySQL instance
    // *   **POLARDB**: PolarDB for MySQL cluster
    // *   **PolarDB_o**: PolarDB for Oracle cluster
    // *   **AnalyticDB**: AnalyticDB for MySQL cluster V3.0 or V2.0
    // *   **Greenplum**: AnalyticDB for PostgreSQL instance
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationEndpointInstanceType_ = nullptr;
    // You must specify this parameter only if the **DestinationEndpointEngineName** parameter is set to **Oracle**. Valid values:
    // 
    // *   **SID**: non-RAC architecture
    // *   **RAC**: RAC architecture
    // 
    // >  This parameter is optional. The data type of this parameter is String.
    std::shared_ptr<string> destinationEndpointOracleSID_ = nullptr;
    // The password of the destination database account.
    std::shared_ptr<string> destinationEndpointPassword_ = nullptr;
    // The service port number of the source database.
    // 
    // >  You must specify this parameter only if the **SourceEndpointInstanceType** parameter is set to **ECS**, **LocalInstance**, or **Express**.
    std::shared_ptr<string> destinationEndpointPort_ = nullptr;
    // The ID of the region where the destination instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> destinationEndpointRegion_ = nullptr;
    // The database account of the destination database.
    // 
    // >  The permissions that are required for database accounts vary with the migration or synchronization scenario. For more information, see [Overview of data migration scenarios](https://help.aliyun.com/document_detail/26618.html) and [Overview of data synchronization scenarios](https://help.aliyun.com/document_detail/130744.html).
    std::shared_ptr<string> destinationEndpointUserName_ = nullptr;
    // The ID of the region where the DTS instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // You must specify this parameter only if the **SourceEndpointEngineName** parameter is set to **Oracle**. Valid values:
    // 
    // *   **SID**: non-RAC architecture
    // *   **RAC**: RAC architecture
    // 
    // >  This parameter is optional.
    std::shared_ptr<string> sourceEndpointArchitecture_ = nullptr;
    // The name of the source database or the authentication database.
    // 
    // > 
    // *   You must specify this parameter if the **SourceEndpointEngineName** parameter is set to **PostgreSQL** or **MongoDB**. You must also specify this parameter if the **SourceEndpointInstanceType** parameter is set to **PolarDB_o**.
    // *   If the **SourceEndpointEngineName** parameter is set to **PostgreSQL** or **DRDS**, specify the name of the source database. If the SourceEndpointEngineName parameter is set to **MongoDB**, specify the name of the authentication database.
    // *   If the **SourceEndpointInstanceType** parameter is set to **PolarDB_o**, specify the name of the source database.
    std::shared_ptr<string> sourceEndpointDatabaseName_ = nullptr;
    // The engine type of the source database. Valid values: **MySQL**, **TiDB**, **SQLServer**, **PostgreSQL**, **Oracle**, **MongoDB**, and **Redis**.
    // 
    // >  Default value: **MySQL**.
    std::shared_ptr<string> sourceEndpointEngineName_ = nullptr;
    // The endpoint of the source database.
    // 
    // >  You must specify this parameter only if the **SourceEndpointInstanceType** parameter is set to **LocalInstance** or **Express**.
    std::shared_ptr<string> sourceEndpointIP_ = nullptr;
    // The ID of the source instance.
    std::shared_ptr<string> sourceEndpointInstanceID_ = nullptr;
    // The type of the source instance. Valid values:
    // 
    // *   **RDS**: ApsaraDB RDS instance
    // *   **LocalInstance**: self-managed database with a public IP address
    // *   **ECS**: self-managed database that is hosted on ECS
    // *   **Express**: self-managed database that is connected over Express Connect
    // *   **dg**: self-managed database that is connected over Database Gateway
    // *   **MongoDB**: ApsaraDB for MongoDB instance
    // *   **POLARDB**: PolarDB for MySQL cluster
    // *   **PolarDB_o**: PolarDB for Oracle cluster
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceEndpointInstanceType_ = nullptr;
    // The SID of the Oracle database.
    // 
    // >  You must specify this parameter only if the **SourceEndpointEngineName** parameter is set to **Oracle** and the Oracle database is deployed in a non-RAC architecture.
    std::shared_ptr<string> sourceEndpointOracleSID_ = nullptr;
    // The password of the source database account.
    std::shared_ptr<string> sourceEndpointPassword_ = nullptr;
    // The service port number of the source database.
    // 
    // >  You must specify this parameter only if the **SourceEndpointInstanceType** parameter is set to **ECS**, **LocalInstance**, or **Express**.
    std::shared_ptr<string> sourceEndpointPort_ = nullptr;
    // The ID of the region where the source instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> sourceEndpointRegion_ = nullptr;
    // The database account of the source database.
    // 
    // >  The permissions that are required for database accounts vary with the migration or synchronization scenario. For more information, see [Overview of data migration scenarios](https://help.aliyun.com/document_detail/26618.html) and [Overview of data synchronization scenarios](https://help.aliyun.com/document_detail/130744.html).
    std::shared_ptr<string> sourceEndpointUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
