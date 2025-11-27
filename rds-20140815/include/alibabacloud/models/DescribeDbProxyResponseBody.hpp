// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBProxyResponseBodyDBProxyAVZones.hpp>
#include <alibabacloud/models/DescribeDBProxyResponseBodyDBProxyConnectStringItems.hpp>
#include <alibabacloud/models/DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions.hpp>
#include <alibabacloud/models/DescribeDBProxyResponseBodyDBProxyNodes.hpp>
#include <alibabacloud/models/DescribeDBProxyResponseBodyDbProxyEndpointItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBProxyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBProxyAVZones, DBProxyAVZones_);
      DARABONBA_PTR_TO_JSON(DBProxyConnectStringItems, DBProxyConnectStringItems_);
      DARABONBA_PTR_TO_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceCurrentMinorVersion, DBProxyInstanceCurrentMinorVersion_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceLatestMinorVersion, DBProxyInstanceLatestMinorVersion_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceMinorVersions, DBProxyInstanceMinorVersions_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceName, DBProxyInstanceName_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceNum, DBProxyInstanceNum_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceSize, DBProxyInstanceSize_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceStatus, DBProxyInstanceStatus_);
      DARABONBA_PTR_TO_JSON(DBProxyInstanceType, DBProxyInstanceType_);
      DARABONBA_PTR_TO_JSON(DBProxyKindCode, DBProxyKindCode_);
      DARABONBA_PTR_TO_JSON(DBProxyNodes, DBProxyNodes_);
      DARABONBA_PTR_TO_JSON(DBProxyPersistentConnectionStatus, DBProxyPersistentConnectionStatus_);
      DARABONBA_PTR_TO_JSON(DBProxyServiceStatus, DBProxyServiceStatus_);
      DARABONBA_PTR_TO_JSON(DbProxyEndpointItems, dbProxyEndpointItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBProxyAVZones, DBProxyAVZones_);
      DARABONBA_PTR_FROM_JSON(DBProxyConnectStringItems, DBProxyConnectStringItems_);
      DARABONBA_PTR_FROM_JSON(DBProxyEngineType, DBProxyEngineType_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceCurrentMinorVersion, DBProxyInstanceCurrentMinorVersion_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceLatestMinorVersion, DBProxyInstanceLatestMinorVersion_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceMinorVersions, DBProxyInstanceMinorVersions_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceName, DBProxyInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceNum, DBProxyInstanceNum_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceSize, DBProxyInstanceSize_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceStatus, DBProxyInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceType, DBProxyInstanceType_);
      DARABONBA_PTR_FROM_JSON(DBProxyKindCode, DBProxyKindCode_);
      DARABONBA_PTR_FROM_JSON(DBProxyNodes, DBProxyNodes_);
      DARABONBA_PTR_FROM_JSON(DBProxyPersistentConnectionStatus, DBProxyPersistentConnectionStatus_);
      DARABONBA_PTR_FROM_JSON(DBProxyServiceStatus, DBProxyServiceStatus_);
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointItems, dbProxyEndpointItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeDBProxyResponseBody() = default ;
    DescribeDBProxyResponseBody(const DescribeDBProxyResponseBody &) = default ;
    DescribeDBProxyResponseBody(DescribeDBProxyResponseBody &&) = default ;
    DescribeDBProxyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyResponseBody() = default ;
    DescribeDBProxyResponseBody& operator=(const DescribeDBProxyResponseBody &) = default ;
    DescribeDBProxyResponseBody& operator=(DescribeDBProxyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBProxyAVZones_ == nullptr
        && return this->DBProxyConnectStringItems_ == nullptr && return this->DBProxyEngineType_ == nullptr && return this->DBProxyInstanceCurrentMinorVersion_ == nullptr && return this->DBProxyInstanceLatestMinorVersion_ == nullptr && return this->DBProxyInstanceMinorVersions_ == nullptr
        && return this->DBProxyInstanceName_ == nullptr && return this->DBProxyInstanceNum_ == nullptr && return this->DBProxyInstanceSize_ == nullptr && return this->DBProxyInstanceStatus_ == nullptr && return this->DBProxyInstanceType_ == nullptr
        && return this->DBProxyKindCode_ == nullptr && return this->DBProxyNodes_ == nullptr && return this->DBProxyPersistentConnectionStatus_ == nullptr && return this->DBProxyServiceStatus_ == nullptr && return this->dbProxyEndpointItems_ == nullptr
        && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // DBProxyAVZones Field Functions 
    bool hasDBProxyAVZones() const { return this->DBProxyAVZones_ != nullptr;};
    void deleteDBProxyAVZones() { this->DBProxyAVZones_ = nullptr;};
    inline const DescribeDBProxyResponseBodyDBProxyAVZones & DBProxyAVZones() const { DARABONBA_PTR_GET_CONST(DBProxyAVZones_, DescribeDBProxyResponseBodyDBProxyAVZones) };
    inline DescribeDBProxyResponseBodyDBProxyAVZones DBProxyAVZones() { DARABONBA_PTR_GET(DBProxyAVZones_, DescribeDBProxyResponseBodyDBProxyAVZones) };
    inline DescribeDBProxyResponseBody& setDBProxyAVZones(const DescribeDBProxyResponseBodyDBProxyAVZones & DBProxyAVZones) { DARABONBA_PTR_SET_VALUE(DBProxyAVZones_, DBProxyAVZones) };
    inline DescribeDBProxyResponseBody& setDBProxyAVZones(DescribeDBProxyResponseBodyDBProxyAVZones && DBProxyAVZones) { DARABONBA_PTR_SET_RVALUE(DBProxyAVZones_, DBProxyAVZones) };


    // DBProxyConnectStringItems Field Functions 
    bool hasDBProxyConnectStringItems() const { return this->DBProxyConnectStringItems_ != nullptr;};
    void deleteDBProxyConnectStringItems() { this->DBProxyConnectStringItems_ = nullptr;};
    inline const DescribeDBProxyResponseBodyDBProxyConnectStringItems & DBProxyConnectStringItems() const { DARABONBA_PTR_GET_CONST(DBProxyConnectStringItems_, DescribeDBProxyResponseBodyDBProxyConnectStringItems) };
    inline DescribeDBProxyResponseBodyDBProxyConnectStringItems DBProxyConnectStringItems() { DARABONBA_PTR_GET(DBProxyConnectStringItems_, DescribeDBProxyResponseBodyDBProxyConnectStringItems) };
    inline DescribeDBProxyResponseBody& setDBProxyConnectStringItems(const DescribeDBProxyResponseBodyDBProxyConnectStringItems & DBProxyConnectStringItems) { DARABONBA_PTR_SET_VALUE(DBProxyConnectStringItems_, DBProxyConnectStringItems) };
    inline DescribeDBProxyResponseBody& setDBProxyConnectStringItems(DescribeDBProxyResponseBodyDBProxyConnectStringItems && DBProxyConnectStringItems) { DARABONBA_PTR_SET_RVALUE(DBProxyConnectStringItems_, DBProxyConnectStringItems) };


    // DBProxyEngineType Field Functions 
    bool hasDBProxyEngineType() const { return this->DBProxyEngineType_ != nullptr;};
    void deleteDBProxyEngineType() { this->DBProxyEngineType_ = nullptr;};
    inline string DBProxyEngineType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyEngineType_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyEngineType(string DBProxyEngineType) { DARABONBA_PTR_SET_VALUE(DBProxyEngineType_, DBProxyEngineType) };


    // DBProxyInstanceCurrentMinorVersion Field Functions 
    bool hasDBProxyInstanceCurrentMinorVersion() const { return this->DBProxyInstanceCurrentMinorVersion_ != nullptr;};
    void deleteDBProxyInstanceCurrentMinorVersion() { this->DBProxyInstanceCurrentMinorVersion_ = nullptr;};
    inline string DBProxyInstanceCurrentMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceCurrentMinorVersion_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceCurrentMinorVersion(string DBProxyInstanceCurrentMinorVersion) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceCurrentMinorVersion_, DBProxyInstanceCurrentMinorVersion) };


    // DBProxyInstanceLatestMinorVersion Field Functions 
    bool hasDBProxyInstanceLatestMinorVersion() const { return this->DBProxyInstanceLatestMinorVersion_ != nullptr;};
    void deleteDBProxyInstanceLatestMinorVersion() { this->DBProxyInstanceLatestMinorVersion_ = nullptr;};
    inline string DBProxyInstanceLatestMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceLatestMinorVersion_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceLatestMinorVersion(string DBProxyInstanceLatestMinorVersion) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceLatestMinorVersion_, DBProxyInstanceLatestMinorVersion) };


    // DBProxyInstanceMinorVersions Field Functions 
    bool hasDBProxyInstanceMinorVersions() const { return this->DBProxyInstanceMinorVersions_ != nullptr;};
    void deleteDBProxyInstanceMinorVersions() { this->DBProxyInstanceMinorVersions_ = nullptr;};
    inline const DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions & DBProxyInstanceMinorVersions() const { DARABONBA_PTR_GET_CONST(DBProxyInstanceMinorVersions_, DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions) };
    inline DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions DBProxyInstanceMinorVersions() { DARABONBA_PTR_GET(DBProxyInstanceMinorVersions_, DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions) };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceMinorVersions(const DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions & DBProxyInstanceMinorVersions) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceMinorVersions_, DBProxyInstanceMinorVersions) };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceMinorVersions(DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions && DBProxyInstanceMinorVersions) { DARABONBA_PTR_SET_RVALUE(DBProxyInstanceMinorVersions_, DBProxyInstanceMinorVersions) };


    // DBProxyInstanceName Field Functions 
    bool hasDBProxyInstanceName() const { return this->DBProxyInstanceName_ != nullptr;};
    void deleteDBProxyInstanceName() { this->DBProxyInstanceName_ = nullptr;};
    inline string DBProxyInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceName_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceName(string DBProxyInstanceName) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceName_, DBProxyInstanceName) };


    // DBProxyInstanceNum Field Functions 
    bool hasDBProxyInstanceNum() const { return this->DBProxyInstanceNum_ != nullptr;};
    void deleteDBProxyInstanceNum() { this->DBProxyInstanceNum_ = nullptr;};
    inline int32_t DBProxyInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceNum_, 0) };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceNum(int32_t DBProxyInstanceNum) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceNum_, DBProxyInstanceNum) };


    // DBProxyInstanceSize Field Functions 
    bool hasDBProxyInstanceSize() const { return this->DBProxyInstanceSize_ != nullptr;};
    void deleteDBProxyInstanceSize() { this->DBProxyInstanceSize_ = nullptr;};
    inline string DBProxyInstanceSize() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceSize_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceSize(string DBProxyInstanceSize) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceSize_, DBProxyInstanceSize) };


    // DBProxyInstanceStatus Field Functions 
    bool hasDBProxyInstanceStatus() const { return this->DBProxyInstanceStatus_ != nullptr;};
    void deleteDBProxyInstanceStatus() { this->DBProxyInstanceStatus_ = nullptr;};
    inline string DBProxyInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceStatus_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceStatus(string DBProxyInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceStatus_, DBProxyInstanceStatus) };


    // DBProxyInstanceType Field Functions 
    bool hasDBProxyInstanceType() const { return this->DBProxyInstanceType_ != nullptr;};
    void deleteDBProxyInstanceType() { this->DBProxyInstanceType_ = nullptr;};
    inline string DBProxyInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBProxyInstanceType_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyInstanceType(string DBProxyInstanceType) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceType_, DBProxyInstanceType) };


    // DBProxyKindCode Field Functions 
    bool hasDBProxyKindCode() const { return this->DBProxyKindCode_ != nullptr;};
    void deleteDBProxyKindCode() { this->DBProxyKindCode_ = nullptr;};
    inline string DBProxyKindCode() const { DARABONBA_PTR_GET_DEFAULT(DBProxyKindCode_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyKindCode(string DBProxyKindCode) { DARABONBA_PTR_SET_VALUE(DBProxyKindCode_, DBProxyKindCode) };


    // DBProxyNodes Field Functions 
    bool hasDBProxyNodes() const { return this->DBProxyNodes_ != nullptr;};
    void deleteDBProxyNodes() { this->DBProxyNodes_ = nullptr;};
    inline const DescribeDBProxyResponseBodyDBProxyNodes & DBProxyNodes() const { DARABONBA_PTR_GET_CONST(DBProxyNodes_, DescribeDBProxyResponseBodyDBProxyNodes) };
    inline DescribeDBProxyResponseBodyDBProxyNodes DBProxyNodes() { DARABONBA_PTR_GET(DBProxyNodes_, DescribeDBProxyResponseBodyDBProxyNodes) };
    inline DescribeDBProxyResponseBody& setDBProxyNodes(const DescribeDBProxyResponseBodyDBProxyNodes & DBProxyNodes) { DARABONBA_PTR_SET_VALUE(DBProxyNodes_, DBProxyNodes) };
    inline DescribeDBProxyResponseBody& setDBProxyNodes(DescribeDBProxyResponseBodyDBProxyNodes && DBProxyNodes) { DARABONBA_PTR_SET_RVALUE(DBProxyNodes_, DBProxyNodes) };


    // DBProxyPersistentConnectionStatus Field Functions 
    bool hasDBProxyPersistentConnectionStatus() const { return this->DBProxyPersistentConnectionStatus_ != nullptr;};
    void deleteDBProxyPersistentConnectionStatus() { this->DBProxyPersistentConnectionStatus_ = nullptr;};
    inline string DBProxyPersistentConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(DBProxyPersistentConnectionStatus_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyPersistentConnectionStatus(string DBProxyPersistentConnectionStatus) { DARABONBA_PTR_SET_VALUE(DBProxyPersistentConnectionStatus_, DBProxyPersistentConnectionStatus) };


    // DBProxyServiceStatus Field Functions 
    bool hasDBProxyServiceStatus() const { return this->DBProxyServiceStatus_ != nullptr;};
    void deleteDBProxyServiceStatus() { this->DBProxyServiceStatus_ = nullptr;};
    inline string DBProxyServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBProxyServiceStatus_, "") };
    inline DescribeDBProxyResponseBody& setDBProxyServiceStatus(string DBProxyServiceStatus) { DARABONBA_PTR_SET_VALUE(DBProxyServiceStatus_, DBProxyServiceStatus) };


    // dbProxyEndpointItems Field Functions 
    bool hasDbProxyEndpointItems() const { return this->dbProxyEndpointItems_ != nullptr;};
    void deleteDbProxyEndpointItems() { this->dbProxyEndpointItems_ = nullptr;};
    inline const DescribeDBProxyResponseBodyDbProxyEndpointItems & dbProxyEndpointItems() const { DARABONBA_PTR_GET_CONST(dbProxyEndpointItems_, DescribeDBProxyResponseBodyDbProxyEndpointItems) };
    inline DescribeDBProxyResponseBodyDbProxyEndpointItems dbProxyEndpointItems() { DARABONBA_PTR_GET(dbProxyEndpointItems_, DescribeDBProxyResponseBodyDbProxyEndpointItems) };
    inline DescribeDBProxyResponseBody& setDbProxyEndpointItems(const DescribeDBProxyResponseBodyDbProxyEndpointItems & dbProxyEndpointItems) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointItems_, dbProxyEndpointItems) };
    inline DescribeDBProxyResponseBody& setDbProxyEndpointItems(DescribeDBProxyResponseBodyDbProxyEndpointItems && dbProxyEndpointItems) { DARABONBA_PTR_SET_RVALUE(dbProxyEndpointItems_, dbProxyEndpointItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBProxyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBProxyResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The list of zones that are available for the database proxy.
    std::shared_ptr<DescribeDBProxyResponseBodyDBProxyAVZones> DBProxyAVZones_ = nullptr;
    // An array consisting of the information about the database proxy endpoint that is created for the instance.
    std::shared_ptr<DescribeDBProxyResponseBodyDBProxyConnectStringItems> DBProxyConnectStringItems_ = nullptr;
    // An internal parameter. You can ignore this parameter.
    std::shared_ptr<string> DBProxyEngineType_ = nullptr;
    // The version of the proxy instance.
    std::shared_ptr<string> DBProxyInstanceCurrentMinorVersion_ = nullptr;
    // The latest version that is available for the proxy instance.
    std::shared_ptr<string> DBProxyInstanceLatestMinorVersion_ = nullptr;
    std::shared_ptr<DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions> DBProxyInstanceMinorVersions_ = nullptr;
    // The name of the proxy instance.
    std::shared_ptr<string> DBProxyInstanceName_ = nullptr;
    // The number of proxies that are enabled on the instance.
    std::shared_ptr<int32_t> DBProxyInstanceNum_ = nullptr;
    // This parameter is available only for ApsaraDB RDS for PostgreSQL instances. The specifications of the proxy instance that is enabled.
    // 
    // Format: `Number of cores/Memory capacity`.
    // 
    // For example, a value of 4/8 indicates that the proxy instance has 4 cores and 8 GB of memory.
    std::shared_ptr<string> DBProxyInstanceSize_ = nullptr;
    // The status of the proxy instance.
    // 
    // *   DBInstanceClassChanging: The specifications of the proxy instance are being changed.
    // *   Creating: The proxy instance is being created.
    // *   Running: The proxy instance is running.
    // *   Deleting: The proxy instance is being deleted.
    std::shared_ptr<string> DBProxyInstanceStatus_ = nullptr;
    // The type of the database proxy that is enabled on the instance. Valid values:
    // 
    // *   1: shared database proxy
    // *   2: dedicated database proxy
    // *   3: general-purpose database proxy
    // 
    // >  ApsaraDB RDS for PostgreSQL does not support shared database proxies.
    std::shared_ptr<string> DBProxyInstanceType_ = nullptr;
    // An internal parameter. You do not need to specify this parameter.
    std::shared_ptr<string> DBProxyKindCode_ = nullptr;
    // The proxy nodes.
    std::shared_ptr<DescribeDBProxyResponseBodyDBProxyNodes> DBProxyNodes_ = nullptr;
    // The status of persistence connections. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    // *   **Unsupported**
    std::shared_ptr<string> DBProxyPersistentConnectionStatus_ = nullptr;
    // The status of the database proxy.
    // 
    // *   Shutdown: disabled
    // *   Startup: enabled
    std::shared_ptr<string> DBProxyServiceStatus_ = nullptr;
    // The proxy terminals of the instance.
    std::shared_ptr<DescribeDBProxyResponseBodyDbProxyEndpointItems> dbProxyEndpointItems_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
