// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKSRESPONSEBODYITEMSDBCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKSRESPONSEBODYITEMSDBCLUSTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters() = default ;
    DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters(const DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters &) = default ;
    DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters(DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters &&) = default ;
    DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters() = default ;
    DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters& operator=(const DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters &) = default ;
    DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters& operator=(DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->regionId_ != nullptr && this->role_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeGlobalDatabaseNetworksResponseBodyItemsDBClusters& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    // The role of the cluster. Valid values:
    // 
    // *   **Primary**: the primary cluster
    // *   **standby**: the secondary cluster
    // 
    // > A GDN consists of one primary cluster and up to four secondary clusters. For more information, see [GDN](https://help.aliyun.com/document_detail/160381.html).
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
