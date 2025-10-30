// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeAddonsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_profile, clusterProfile_);
      DARABONBA_PTR_TO_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_TO_JSON(cluster_version, clusterVersion_);
      DARABONBA_PTR_TO_JSON(region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_profile, clusterProfile_);
      DARABONBA_PTR_FROM_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_FROM_JSON(cluster_version, clusterVersion_);
      DARABONBA_PTR_FROM_JSON(region, region_);
    };
    DescribeAddonsRequest() = default ;
    DescribeAddonsRequest(const DescribeAddonsRequest &) = default ;
    DescribeAddonsRequest(DescribeAddonsRequest &&) = default ;
    DescribeAddonsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonsRequest() = default ;
    DescribeAddonsRequest& operator=(const DescribeAddonsRequest &) = default ;
    DescribeAddonsRequest& operator=(DescribeAddonsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterProfile_ == nullptr
        && return this->clusterSpec_ == nullptr && return this->clusterType_ == nullptr && return this->clusterVersion_ == nullptr && return this->region_ == nullptr; };
    // clusterProfile Field Functions 
    bool hasClusterProfile() const { return this->clusterProfile_ != nullptr;};
    void deleteClusterProfile() { this->clusterProfile_ = nullptr;};
    inline string clusterProfile() const { DARABONBA_PTR_GET_DEFAULT(clusterProfile_, "") };
    inline DescribeAddonsRequest& setClusterProfile(string clusterProfile) { DARABONBA_PTR_SET_VALUE(clusterProfile_, clusterProfile) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string clusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline DescribeAddonsRequest& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeAddonsRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // clusterVersion Field Functions 
    bool hasClusterVersion() const { return this->clusterVersion_ != nullptr;};
    void deleteClusterVersion() { this->clusterVersion_ = nullptr;};
    inline string clusterVersion() const { DARABONBA_PTR_GET_DEFAULT(clusterVersion_, "") };
    inline DescribeAddonsRequest& setClusterVersion(string clusterVersion) { DARABONBA_PTR_SET_VALUE(clusterVersion_, clusterVersion) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeAddonsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The cluster type. Valid values:
    // 
    // *   `Default`: ACK managed cluster
    // *   `Serverless`: ACK Serverless cluster
    // *   `Edge`: ACK Edge cluster
    std::shared_ptr<string> clusterProfile_ = nullptr;
    // If you set `cluster_type` to `ManagedKubernetes` and specify `profile`, you can further specify the edition of the cluster. Valid values:
    // 
    // *   `ack.pro.small`: creates an ACK Pro cluster.
    // *   `ack.standard`: creates an ACK Basic cluster. If you leave the parameter empty, an ACK Basic cluster is created.
    std::shared_ptr<string> clusterSpec_ = nullptr;
    // *   `Kubernetes`: ACK dedicated cluster.
    // *   `ManagedKubernetes`: ACK managed cluster. ACK managed clusters include ACK Basic clusters, ACK Pro clusters, ACK Serverless Basic clusters, ACK Serverless Pro clusters, ACK Edge Basic clusters, ACK Edge Pro clusters, and ACK Lingjun Pro clusters.
    // *   `ExternalKubernetes`: registered cluster.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The cluster version.
    std::shared_ptr<string> clusterVersion_ = nullptr;
    // The region ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
