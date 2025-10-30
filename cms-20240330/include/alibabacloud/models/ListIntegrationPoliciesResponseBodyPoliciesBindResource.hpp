// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESRESPONSEBODYPOLICIESBINDRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICIESRESPONSEBODYPOLICIESBINDRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPoliciesResponseBodyPoliciesBindResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPoliciesResponseBodyPoliciesBindResource& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(clusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(vpcCidr, vpcCidr_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPoliciesResponseBodyPoliciesBindResource& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(clusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(vpcCidr, vpcCidr_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    ListIntegrationPoliciesResponseBodyPoliciesBindResource() = default ;
    ListIntegrationPoliciesResponseBodyPoliciesBindResource(const ListIntegrationPoliciesResponseBodyPoliciesBindResource &) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesBindResource(ListIntegrationPoliciesResponseBodyPoliciesBindResource &&) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesBindResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPoliciesResponseBodyPoliciesBindResource() = default ;
    ListIntegrationPoliciesResponseBodyPoliciesBindResource& operator=(const ListIntegrationPoliciesResponseBodyPoliciesBindResource &) = default ;
    ListIntegrationPoliciesResponseBodyPoliciesBindResource& operator=(ListIntegrationPoliciesResponseBodyPoliciesBindResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterType_ == nullptr && return this->vpcCidr_ == nullptr && return this->vpcId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesBindResource& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesBindResource& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // vpcCidr Field Functions 
    bool hasVpcCidr() const { return this->vpcCidr_ != nullptr;};
    void deleteVpcCidr() { this->vpcCidr_ = nullptr;};
    inline string vpcCidr() const { DARABONBA_PTR_GET_DEFAULT(vpcCidr_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesBindResource& setVpcCidr(string vpcCidr) { DARABONBA_PTR_SET_VALUE(vpcCidr_, vpcCidr) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListIntegrationPoliciesResponseBodyPoliciesBindResource& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Cluster type.
    std::shared_ptr<string> clusterType_ = nullptr;
    // VPC CIDR
    std::shared_ptr<string> vpcCidr_ = nullptr;
    // Virtual Private Cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
