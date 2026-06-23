// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSFORREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSFORREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClustersForRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersForRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(page_number, pageNumber_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(profile, profile_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersForRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(page_number, pageNumber_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(profile, profile_);
    };
    DescribeClustersForRegionRequest() = default ;
    DescribeClustersForRegionRequest(const DescribeClustersForRegionRequest &) = default ;
    DescribeClustersForRegionRequest(DescribeClustersForRegionRequest &&) = default ;
    DescribeClustersForRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersForRegionRequest() = default ;
    DescribeClustersForRegionRequest& operator=(const DescribeClustersForRegionRequest &) = default ;
    DescribeClustersForRegionRequest& operator=(DescribeClustersForRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterSpec_ == nullptr && this->clusterType_ == nullptr && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->profile_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClustersForRegionRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string getClusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline DescribeClustersForRegionRequest& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClustersForRegionRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClustersForRegionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeClustersForRegionRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeClustersForRegionRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline DescribeClustersForRegionRequest& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // Queries clusters of a specified specification. Valid values:
    // 
    // - `ack.standard`: Basic
    // - `ack.pro.small`: Pro
    // - `ack.pro.xlarge`: Pro XL
    // - `ack.pro.2xlarge`: Pro 2XL
    // - `ack.pro.4xlarge`: Pro 4XL (contact customer service to add your account to the whitelist)
    // 
    // Pro XL, Pro 2XL, and Pro 4XL are three tiers provided by <props="china">[ACK Pro Provisioned Control Plane](https://help.aliyun.com/ack/ack-managed-and-ack-dedicated/user-guide/ack-pro-provisioned-control-plane)<props="intl">[ACK Pro Provisioned Control Plane](https://www.alibabacloud.com/help/ack/ack-managed-and-ack-dedicated/user-guide/ack-pro-provisioned-control-plane). By pre-allocating and dedicating control plane resources, these tiers ensure that API concurrency and Pod scheduling capabilities remain at a consistently high level. They are suitable for AI training and inference, ultra-large-scale clusters, and mission-critical workloads.
    // 
    // For information about cluster management fees for Pro and Provisioned Control Plane editions, see <props="china">[Cluster management fees](https://help.aliyun.com/ack/ack-managed-and-ack-dedicated/product-overview/cluster-management-fee)<props="intl">[Cluster management fees](https://www.alibabacloud.com/help/ack/ack-managed-and-ack-dedicated/product-overview/cluster-management-fee).
    shared_ptr<string> clusterSpec_ {};
    // Queries clusters of a specified type. Valid values:
    // - Kubernetes: ACK dedicated cluster.
    // - ManagedKubernetes: ACK managed cluster types, including ACK managed clusters (ACK Pro and ACK Basic), ACK Serverless clusters (Pro and Basic), ACK Edge clusters (Pro and Basic), and ACK Lingjun clusters (Pro).
    // - ExternalKubernetes: registered cluster.
    shared_ptr<string> clusterType_ {};
    // Fuzzy search by cluster name.
    shared_ptr<string> name_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of records per page.
    shared_ptr<int64_t> pageSize_ {};
    // Queries clusters of a specified subtype. Valid values:
    // - Default: ACK managed cluster, including ACK Pro and ACK Basic.
    // - Edge: ACK Edge cluster, including ACK Edge Pro and ACK Edge Basic.
    // - Serverless: ACK Serverless cluster, including ACK Serverless Pro and ACK Serverless Basic.
    // - LingJun: ACK Lingjun cluster, available in Pro.
    shared_ptr<string> profile_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
