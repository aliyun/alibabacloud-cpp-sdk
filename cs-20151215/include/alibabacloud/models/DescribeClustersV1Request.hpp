// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClustersV1Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersV1Request& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(page_number, pageNumber_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(profile, profile_);
      DARABONBA_PTR_TO_JSON(region_id, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersV1Request& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(page_number, pageNumber_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(profile, profile_);
      DARABONBA_PTR_FROM_JSON(region_id, regionId_);
    };
    DescribeClustersV1Request() = default ;
    DescribeClustersV1Request(const DescribeClustersV1Request &) = default ;
    DescribeClustersV1Request(DescribeClustersV1Request &&) = default ;
    DescribeClustersV1Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersV1Request() = default ;
    DescribeClustersV1Request& operator=(const DescribeClustersV1Request &) = default ;
    DescribeClustersV1Request& operator=(DescribeClustersV1Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterSpec_ == nullptr && this->clusterType_ == nullptr && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->profile_ == nullptr && this->regionId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClustersV1Request& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string getClusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline DescribeClustersV1Request& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClustersV1Request& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClustersV1Request& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeClustersV1Request& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeClustersV1Request& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline DescribeClustersV1Request& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClustersV1Request& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The cluster specification. This parameter is valid only when `cluster_type` is set to `ManagedKubernetes` and the `profile` parameter is specified. Valid values:
    // 
    // - `ack.standard`: Standard
    // 
    // - `ack.pro.small`: Pro
    // 
    // - `ack.pro.xlarge`: Pro XL
    // 
    // - `ack.pro.2xlarge`: Pro 2XL
    // 
    // - `ack.pro.4xlarge`: Pro 4XL (Contact customer service to enable this option.)
    // 
    // Pro XL, Pro 2XL, and Pro 4XL are three tiers provided by the <props="china">[ACK Pro provisioned control plane](https://help.aliyun.com/ack/ack-managed-and-ack-dedicated/user-guide/ack-pro-provisioned-control-plane)<props="intl">[ACK Pro provisioned control plane](https://www.alibabacloud.com/help/ack/ack-managed-and-ack-dedicated/user-guide/ack-pro-provisioned-control-plane). These tiers pre-allocate and dedicate control plane resources to ensure a consistently high, predictable level of performance for API concurrency and pod scheduling. They are suitable for AI training and inference, ultra-large-scale clusters, and mission-critical workloads.
    // 
    // For information about the cluster management fees for Pro and provisioned control plane editions, see <props="china">[Cluster management fee](https://help.aliyun.com/ack/ack-managed-and-ack-dedicated/product-overview/cluster-management-fee)<props="intl">[Cluster management fee](https://www.alibabacloud.com/help/ack/ack-managed-and-ack-dedicated/product-overview/cluster-management-fee).
    shared_ptr<string> clusterSpec_ {};
    // The cluster type.
    // 
    // - `Kubernetes`: an ACK dedicated cluster.
    // 
    // - `ManagedKubernetes`: an ACK managed cluster. This type includes ACK managed clusters (Pro and Standard), ACK Serverless clusters (Pro and Standard), ACK Edge clusters (Pro and Standard), and ACK Lingjun clusters (Pro).
    // 
    // - `ExternalKubernetes`: a registered cluster.
    shared_ptr<string> clusterType_ {};
    // The name of the cluster.
    shared_ptr<string> name_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // When `cluster_type` is set to `ManagedKubernetes`, you can further specify a sub-type of the cluster.
    // 
    // - `Default`: an ACK managed cluster. This includes ACK Pro and ACK Standard clusters.
    // 
    // - `Edge`: an ACK Edge cluster. This includes ACK Edge Pro and ACK Edge Standard clusters.
    // 
    // - `Serverless`: an ACK Serverless cluster. This includes ACK Serverless Pro and ACK Serverless Standard clusters.
    // 
    // - `Lingjun`: an ACK Lingjun cluster (Pro edition).
    shared_ptr<string> profile_ {};
    // The ID of the region to which the clusters belong.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
