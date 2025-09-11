// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCAVAILABLEDBCLUSTERLISTREQUESTSOURCEDBCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCAVAILABLEDBCLUSTERLISTREQUESTSOURCEDBCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSyncAvailableDBClusterListRequestSourceDBCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncAvailableDBClusterListRequestSourceDBCluster& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncAvailableDBClusterListRequestSourceDBCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSyncAvailableDBClusterListRequestSourceDBCluster() = default ;
    DescribeSyncAvailableDBClusterListRequestSourceDBCluster(const DescribeSyncAvailableDBClusterListRequestSourceDBCluster &) = default ;
    DescribeSyncAvailableDBClusterListRequestSourceDBCluster(DescribeSyncAvailableDBClusterListRequestSourceDBCluster &&) = default ;
    DescribeSyncAvailableDBClusterListRequestSourceDBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncAvailableDBClusterListRequestSourceDBCluster() = default ;
    DescribeSyncAvailableDBClusterListRequestSourceDBCluster& operator=(const DescribeSyncAvailableDBClusterListRequestSourceDBCluster &) = default ;
    DescribeSyncAvailableDBClusterListRequestSourceDBCluster& operator=(DescribeSyncAvailableDBClusterListRequestSourceDBCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterIds_ != nullptr
        && this->regionId_ != nullptr && this->type_ != nullptr; };
    // clusterIds Field Functions 
    bool hasClusterIds() const { return this->clusterIds_ != nullptr;};
    void deleteClusterIds() { this->clusterIds_ = nullptr;};
    inline string clusterIds() const { DARABONBA_PTR_GET_DEFAULT(clusterIds_, "") };
    inline DescribeSyncAvailableDBClusterListRequestSourceDBCluster& setClusterIds(string clusterIds) { DARABONBA_PTR_SET_VALUE(clusterIds_, clusterIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSyncAvailableDBClusterListRequestSourceDBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSyncAvailableDBClusterListRequestSourceDBCluster& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the source instance or cluster. Separate multiple IDs with commas (,).
    std::shared_ptr<string> clusterIds_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The database type of the source instance or cluster.
    // 
    // Valid values:
    // 
    // *   rds: ApsaraDB RDS.
    // *   sls: Simple Log Service.
    // *   polardb: PolarDB.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
