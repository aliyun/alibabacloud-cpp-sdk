// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGlobalDatabaseNetworkResponseBodyConnections.hpp>
#include <alibabacloud/models/DescribeGlobalDatabaseNetworkResponseBodyDBClusters.hpp>
#include <alibabacloud/models/DescribeGlobalDatabaseNetworkResponseBodyLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDatabaseNetworkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDatabaseNetworkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Connections, connections_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusters, DBClusters_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(GDNDescription, GDNDescription_);
      DARABONBA_PTR_TO_JSON(GDNId, GDNId_);
      DARABONBA_PTR_TO_JSON(GDNStatus, GDNStatus_);
      DARABONBA_PTR_TO_JSON(GlobalDomainName, globalDomainName_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDatabaseNetworkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Connections, connections_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusters, DBClusters_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(GDNDescription, GDNDescription_);
      DARABONBA_PTR_FROM_JSON(GDNId, GDNId_);
      DARABONBA_PTR_FROM_JSON(GDNStatus, GDNStatus_);
      DARABONBA_PTR_FROM_JSON(GlobalDomainName, globalDomainName_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeGlobalDatabaseNetworkResponseBody() = default ;
    DescribeGlobalDatabaseNetworkResponseBody(const DescribeGlobalDatabaseNetworkResponseBody &) = default ;
    DescribeGlobalDatabaseNetworkResponseBody(DescribeGlobalDatabaseNetworkResponseBody &&) = default ;
    DescribeGlobalDatabaseNetworkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDatabaseNetworkResponseBody() = default ;
    DescribeGlobalDatabaseNetworkResponseBody& operator=(const DescribeGlobalDatabaseNetworkResponseBody &) = default ;
    DescribeGlobalDatabaseNetworkResponseBody& operator=(DescribeGlobalDatabaseNetworkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connections_ != nullptr
        && this->createTime_ != nullptr && this->DBClusterId_ != nullptr && this->DBClusters_ != nullptr && this->DBType_ != nullptr && this->DBVersion_ != nullptr
        && this->GDNDescription_ != nullptr && this->GDNId_ != nullptr && this->GDNStatus_ != nullptr && this->globalDomainName_ != nullptr && this->labels_ != nullptr
        && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr; };
    // connections Field Functions 
    bool hasConnections() const { return this->connections_ != nullptr;};
    void deleteConnections() { this->connections_ = nullptr;};
    inline const vector<DescribeGlobalDatabaseNetworkResponseBodyConnections> & connections() const { DARABONBA_PTR_GET_CONST(connections_, vector<DescribeGlobalDatabaseNetworkResponseBodyConnections>) };
    inline vector<DescribeGlobalDatabaseNetworkResponseBodyConnections> connections() { DARABONBA_PTR_GET(connections_, vector<DescribeGlobalDatabaseNetworkResponseBodyConnections>) };
    inline DescribeGlobalDatabaseNetworkResponseBody& setConnections(const vector<DescribeGlobalDatabaseNetworkResponseBodyConnections> & connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };
    inline DescribeGlobalDatabaseNetworkResponseBody& setConnections(vector<DescribeGlobalDatabaseNetworkResponseBodyConnections> && connections) { DARABONBA_PTR_SET_RVALUE(connections_, connections) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusters Field Functions 
    bool hasDBClusters() const { return this->DBClusters_ != nullptr;};
    void deleteDBClusters() { this->DBClusters_ = nullptr;};
    inline const vector<DescribeGlobalDatabaseNetworkResponseBodyDBClusters> & DBClusters() const { DARABONBA_PTR_GET_CONST(DBClusters_, vector<DescribeGlobalDatabaseNetworkResponseBodyDBClusters>) };
    inline vector<DescribeGlobalDatabaseNetworkResponseBodyDBClusters> DBClusters() { DARABONBA_PTR_GET(DBClusters_, vector<DescribeGlobalDatabaseNetworkResponseBodyDBClusters>) };
    inline DescribeGlobalDatabaseNetworkResponseBody& setDBClusters(const vector<DescribeGlobalDatabaseNetworkResponseBodyDBClusters> & DBClusters) { DARABONBA_PTR_SET_VALUE(DBClusters_, DBClusters) };
    inline DescribeGlobalDatabaseNetworkResponseBody& setDBClusters(vector<DescribeGlobalDatabaseNetworkResponseBodyDBClusters> && DBClusters) { DARABONBA_PTR_SET_RVALUE(DBClusters_, DBClusters) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // GDNDescription Field Functions 
    bool hasGDNDescription() const { return this->GDNDescription_ != nullptr;};
    void deleteGDNDescription() { this->GDNDescription_ = nullptr;};
    inline string GDNDescription() const { DARABONBA_PTR_GET_DEFAULT(GDNDescription_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setGDNDescription(string GDNDescription) { DARABONBA_PTR_SET_VALUE(GDNDescription_, GDNDescription) };


    // GDNId Field Functions 
    bool hasGDNId() const { return this->GDNId_ != nullptr;};
    void deleteGDNId() { this->GDNId_ = nullptr;};
    inline string GDNId() const { DARABONBA_PTR_GET_DEFAULT(GDNId_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setGDNId(string GDNId) { DARABONBA_PTR_SET_VALUE(GDNId_, GDNId) };


    // GDNStatus Field Functions 
    bool hasGDNStatus() const { return this->GDNStatus_ != nullptr;};
    void deleteGDNStatus() { this->GDNStatus_ = nullptr;};
    inline string GDNStatus() const { DARABONBA_PTR_GET_DEFAULT(GDNStatus_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setGDNStatus(string GDNStatus) { DARABONBA_PTR_SET_VALUE(GDNStatus_, GDNStatus) };


    // globalDomainName Field Functions 
    bool hasGlobalDomainName() const { return this->globalDomainName_ != nullptr;};
    void deleteGlobalDomainName() { this->globalDomainName_ = nullptr;};
    inline string globalDomainName() const { DARABONBA_PTR_GET_DEFAULT(globalDomainName_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setGlobalDomainName(string globalDomainName) { DARABONBA_PTR_SET_VALUE(globalDomainName_, globalDomainName) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const DescribeGlobalDatabaseNetworkResponseBodyLabels & labels() const { DARABONBA_PTR_GET_CONST(labels_, DescribeGlobalDatabaseNetworkResponseBodyLabels) };
    inline DescribeGlobalDatabaseNetworkResponseBodyLabels labels() { DARABONBA_PTR_GET(labels_, DescribeGlobalDatabaseNetworkResponseBodyLabels) };
    inline DescribeGlobalDatabaseNetworkResponseBody& setLabels(const DescribeGlobalDatabaseNetworkResponseBodyLabels & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DescribeGlobalDatabaseNetworkResponseBody& setLabels(DescribeGlobalDatabaseNetworkResponseBodyLabels && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The information about the connection to the cluster.
    std::shared_ptr<vector<DescribeGlobalDatabaseNetworkResponseBodyConnections>> connections_ = nullptr;
    // The time at which the GDN was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The clusters in the GDN.
    std::shared_ptr<vector<DescribeGlobalDatabaseNetworkResponseBodyDBClusters>> DBClusters_ = nullptr;
    // The type of the database engine. Only MySQL is supported.
    std::shared_ptr<string> DBType_ = nullptr;
    // The version of the database engine. Only version 8.0 is supported.
    std::shared_ptr<string> DBVersion_ = nullptr;
    // The description of the GDN. The description must meet the following requirements:
    // 
    // *   It cannot start with `http://` or `https://`.
    // *   It must start with a letter.
    // *   It can contain letters, digits, underscores (_), and hyphens (-).
    // *   It must be 2 to 126 characters in length.
    std::shared_ptr<string> GDNDescription_ = nullptr;
    // The ID of the GDN.
    std::shared_ptr<string> GDNId_ = nullptr;
    // The status of the GDN. Valid values:
    // 
    // *   **Creating**: The GDN is being created.
    // *   **active**: The GDN is running.
    // *   **deleting**: The GDN is being deleted.
    // *   **locked**: The GDN is locked. If the GDN is locked, you cannot perform operations on clusters in the GDN.
    // *   **removing_member**: The secondary cluster is being removed from the GDN.
    std::shared_ptr<string> GDNStatus_ = nullptr;
    // The global domain name.
    std::shared_ptr<string> globalDomainName_ = nullptr;
    std::shared_ptr<DescribeGlobalDatabaseNetworkResponseBodyLabels> labels_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
