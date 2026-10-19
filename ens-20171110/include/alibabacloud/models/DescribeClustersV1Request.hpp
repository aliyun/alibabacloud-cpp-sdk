// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeClustersV1Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersV1Request& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersV1Request& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
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
        && this->clusterType_ == nullptr && this->ensRegionId_ == nullptr && this->name_ == nullptr && this->profile_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClustersV1Request& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClustersV1Request& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeClustersV1Request& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClustersV1Request& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline DescribeClustersV1Request& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


  protected:
    // The ID of the cluster.
    shared_ptr<string> clusterId_ {};
    // The cluster type. Valid values: Kubernetes and ManagedKubernetes. A value of Kubernetes indicates an ECK cluster. A value of ManagedKubernetes indicates a serverless virtual cluster. This parameter must be used together with the profile parameter.
    shared_ptr<string> clusterType_ {};
    // The ENS region ID of the cluster.
    shared_ptr<string> ensRegionId_ {};
    // The name of the cluster.
    shared_ptr<string> name_ {};
    // The cluster profile. Valid values: Default and Serverless. A value of Default indicates an ECK cluster. A value of Serverless indicates a serverless virtual cluster. This parameter must be used together with the cluster_type parameter.
    shared_ptr<string> profile_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
