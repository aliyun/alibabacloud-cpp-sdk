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
    // The ID of the cluster.
    shared_ptr<string> clusterId_ {};
    // The specification of the cluster. Valid values:
    // 
    // - `ack.standard`: Standard Edition
    // 
    // - `ack.pro.small`: Pro Edition
    // 
    // - `ack.pro.xlarge`: Pro XL
    // 
    // - `ack.pro.2xlarge`: Pro 2XL
    // 
    // - `ack.pro.4xlarge`: Pro 4XL (To use this specification, you must submit a ticket.)
    // 
    // Pro XL, Pro 2XL, and Pro 4XL are three specifications available for the <props="china">[ACK Pro provisioned control plane](https://help.aliyun.com/ack/ack-managed-and-ack-dedicated/user-guide/ack-pro-provisioned-control-plane)<props="intl">[ACK Pro provisioned control plane](https://www.alibabacloud.com/help/ack/ack-managed-and-ack-dedicated/user-guide/ack-pro-provisioned-control-plane). These specifications ensure a high and deterministic level of API concurrency and Pod scheduling capabilities by pre-allocating and dedicating control plane resources. They are suitable for AI training and inference, large-scale clusters, and mission-critical workloads.
    // 
    // For information about the cluster management fees for Pro Edition and provisioned control plane clusters, see <props="china">[cluster management fee](https://help.aliyun.com/ack/ack-managed-and-ack-dedicated/product-overview/cluster-management-fee)<props="intl">[cluster management fee](https://www.alibabacloud.com/help/ack/ack-managed-and-ack-dedicated/product-overview/cluster-management-fee).
    shared_ptr<string> clusterSpec_ {};
    // The type of the cluster. Valid values:
    // 
    // - `Kubernetes`: an ACK dedicated cluster.
    // 
    // - `ManagedKubernetes`: an ACK managed cluster. This includes ACK managed clusters (Pro and Standard Editions), ACK Serverless clusters (Pro and Standard Editions), ACK Edge clusters (Pro and Standard Editions), and ACK Lingjun clusters (Pro Edition).
    // 
    // - `ExternalKubernetes`: a registered cluster.
    shared_ptr<string> clusterType_ {};
    // The name of the cluster. Fuzzy search is supported.
    shared_ptr<string> name_ {};
    // The page number to return.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries to return on each page.
    shared_ptr<int64_t> pageSize_ {};
    // The subtype of the cluster. Valid values:
    // 
    // - `Default`: ACK managed clusters, including Pro and Standard Editions.
    // 
    // - `Edge`: ACK Edge clusters, including Pro and Standard Editions.
    // 
    // - `Serverless`: ACK Serverless clusters, including Pro and Standard Editions.
    // 
    // - `LingJun`: ACK Lingjun clusters, available in the Pro Edition.
    shared_ptr<string> profile_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
