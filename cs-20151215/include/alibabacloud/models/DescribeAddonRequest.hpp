// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeAddonRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_TO_JSON(cluster_version, clusterVersion_);
      DARABONBA_PTR_TO_JSON(profile, profile_);
      DARABONBA_PTR_TO_JSON(region_id, regionId_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_FROM_JSON(cluster_version, clusterVersion_);
      DARABONBA_PTR_FROM_JSON(profile, profile_);
      DARABONBA_PTR_FROM_JSON(region_id, regionId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeAddonRequest() = default ;
    DescribeAddonRequest(const DescribeAddonRequest &) = default ;
    DescribeAddonRequest(DescribeAddonRequest &&) = default ;
    DescribeAddonRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonRequest() = default ;
    DescribeAddonRequest& operator=(const DescribeAddonRequest &) = default ;
    DescribeAddonRequest& operator=(DescribeAddonRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterSpec_ == nullptr && this->clusterType_ == nullptr && this->clusterVersion_ == nullptr && this->profile_ == nullptr && this->regionId_ == nullptr
        && this->version_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeAddonRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string getClusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline DescribeAddonRequest& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeAddonRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // clusterVersion Field Functions 
    bool hasClusterVersion() const { return this->clusterVersion_ != nullptr;};
    void deleteClusterVersion() { this->clusterVersion_ = nullptr;};
    inline string getClusterVersion() const { DARABONBA_PTR_GET_DEFAULT(clusterVersion_, "") };
    inline DescribeAddonRequest& setClusterVersion(string clusterVersion) { DARABONBA_PTR_SET_VALUE(clusterVersion_, clusterVersion) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline DescribeAddonRequest& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAddonRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeAddonRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Cluster ID.
    // When a cluster ID is specified, the list of available components for the cluster is queried, and other parameters are ignored.
    shared_ptr<string> clusterId_ {};
    // Cluster specification.
    // If cluster_id is specified, this parameter is ignored.
    // The five parameters region_id, cluster_type, profile, cluster_spec, and cluster_version must be specified together.
    shared_ptr<string> clusterSpec_ {};
    // Cluster type.
    // If cluster_id is specified, this parameter is ignored.
    // The five parameters region_id, cluster_type, profile, cluster_spec, and cluster_version must be specified together.
    shared_ptr<string> clusterType_ {};
    // Cluster version.
    // If cluster_id is specified, this parameter is ignored.
    // The five parameters region_id, cluster_type, profile, cluster_spec, and cluster_version must be specified together.
    shared_ptr<string> clusterVersion_ {};
    // Cluster subtype.
    // If cluster_id is specified, this parameter is ignored.
    // The five parameters region_id, cluster_type, profile, cluster_spec, and cluster_version must be specified together.
    shared_ptr<string> profile_ {};
    // Region.
    // If cluster_id is specified, this parameter is ignored.
    // The five parameters region_id, cluster_type, profile, cluster_spec, and cluster_version must be specified together.
    shared_ptr<string> regionId_ {};
    // Component version. If not specified, the latest available version of the component is queried.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
