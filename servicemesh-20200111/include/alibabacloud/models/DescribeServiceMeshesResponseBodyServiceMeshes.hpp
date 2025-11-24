// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServiceMeshesResponseBodyServiceMeshesEndpoints.hpp>
#include <alibabacloud/models/DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo.hpp>
#include <alibabacloud/models/DescribeServiceMeshesResponseBodyServiceMeshesSpec.hpp>
#include <alibabacloud/models/DescribeServiceMeshesResponseBodyServiceMeshesTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshesResponseBodyServiceMeshes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshesResponseBodyServiceMeshes& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_TO_JSON(ServiceMeshInfo, serviceMeshInfo_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Upgradable, upgradable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshesResponseBodyServiceMeshes& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshInfo, serviceMeshInfo_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Upgradable, upgradable_);
    };
    DescribeServiceMeshesResponseBodyServiceMeshes() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshes(const DescribeServiceMeshesResponseBodyServiceMeshes &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshes(DescribeServiceMeshesResponseBodyServiceMeshes &&) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshesResponseBodyServiceMeshes() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshes& operator=(const DescribeServiceMeshesResponseBodyServiceMeshes &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshes& operator=(DescribeServiceMeshesResponseBodyServiceMeshes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterSpec_ == nullptr
        && return this->clusters_ == nullptr && return this->endpoints_ == nullptr && return this->ownerId_ == nullptr && return this->ownerType_ == nullptr && return this->serviceMeshInfo_ == nullptr
        && return this->spec_ == nullptr && return this->tag_ == nullptr && return this->upgradable_ == nullptr; };
    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string clusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshes& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<string> & clusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<string>) };
    inline vector<string> clusters() { DARABONBA_PTR_GET(clusters_, vector<string>) };
    inline DescribeServiceMeshesResponseBodyServiceMeshes& setClusters(const vector<string> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline DescribeServiceMeshesResponseBodyServiceMeshes& setClusters(vector<string> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const Models::DescribeServiceMeshesResponseBodyServiceMeshesEndpoints & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, Models::DescribeServiceMeshesResponseBodyServiceMeshesEndpoints) };
    inline Models::DescribeServiceMeshesResponseBodyServiceMeshesEndpoints endpoints() { DARABONBA_PTR_GET(endpoints_, Models::DescribeServiceMeshesResponseBodyServiceMeshesEndpoints) };
    inline DescribeServiceMeshesResponseBodyServiceMeshes& setEndpoints(const Models::DescribeServiceMeshesResponseBodyServiceMeshesEndpoints & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeServiceMeshesResponseBodyServiceMeshes& setEndpoints(Models::DescribeServiceMeshesResponseBodyServiceMeshesEndpoints && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshes& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string ownerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshes& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // serviceMeshInfo Field Functions 
    bool hasServiceMeshInfo() const { return this->serviceMeshInfo_ != nullptr;};
    void deleteServiceMeshInfo() { this->serviceMeshInfo_ = nullptr;};
    inline const Models::DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo & serviceMeshInfo() const { DARABONBA_PTR_GET_CONST(serviceMeshInfo_, Models::DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo) };
    inline Models::DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo serviceMeshInfo() { DARABONBA_PTR_GET(serviceMeshInfo_, Models::DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo) };
    inline DescribeServiceMeshesResponseBodyServiceMeshes& setServiceMeshInfo(const Models::DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo & serviceMeshInfo) { DARABONBA_PTR_SET_VALUE(serviceMeshInfo_, serviceMeshInfo) };
    inline DescribeServiceMeshesResponseBodyServiceMeshes& setServiceMeshInfo(Models::DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo && serviceMeshInfo) { DARABONBA_PTR_SET_RVALUE(serviceMeshInfo_, serviceMeshInfo) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpec & spec() const { DARABONBA_PTR_GET_CONST(spec_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpec) };
    inline Models::DescribeServiceMeshesResponseBodyServiceMeshesSpec spec() { DARABONBA_PTR_GET(spec_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpec) };
    inline DescribeServiceMeshesResponseBodyServiceMeshes& setSpec(const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline DescribeServiceMeshesResponseBodyServiceMeshes& setSpec(Models::DescribeServiceMeshesResponseBodyServiceMeshesSpec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeServiceMeshesResponseBodyServiceMeshesTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeServiceMeshesResponseBodyServiceMeshesTag>) };
    inline vector<Models::DescribeServiceMeshesResponseBodyServiceMeshesTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeServiceMeshesResponseBodyServiceMeshesTag>) };
    inline DescribeServiceMeshesResponseBodyServiceMeshes& setTag(const vector<Models::DescribeServiceMeshesResponseBodyServiceMeshesTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeServiceMeshesResponseBodyServiceMeshes& setTag(vector<Models::DescribeServiceMeshesResponseBodyServiceMeshesTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // upgradable Field Functions 
    bool hasUpgradable() const { return this->upgradable_ != nullptr;};
    void deleteUpgradable() { this->upgradable_ = nullptr;};
    inline bool upgradable() const { DARABONBA_PTR_GET_DEFAULT(upgradable_, false) };
    inline DescribeServiceMeshesResponseBodyServiceMeshes& setUpgradable(bool upgradable) { DARABONBA_PTR_SET_VALUE(upgradable_, upgradable) };


  protected:
    // The edition of the ASM instance. Valid values:
    // 
    // *   `standard`: Standard Edition
    // *   `enterprise`: Enterprise Edition
    // *   `ultimate`: Ultimate Edition
    std::shared_ptr<string> clusterSpec_ = nullptr;
    // The clusters.
    std::shared_ptr<vector<string>> clusters_ = nullptr;
    // The information about all endpoints of the ASM instance.
    std::shared_ptr<Models::DescribeServiceMeshesResponseBodyServiceMeshesEndpoints> endpoints_ = nullptr;
    // The ID of the Alibaba Cloud service instance for which the ASM instance is created.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The Alibaba Cloud service for which the ASM instance is created. Valid values:
    // 
    // *   `ackone`: The ASM instance is created for Alibaba Cloud Distributed Cloud Container Platform (ACK One).
    // *   An empty value indicates that the ASM instance is created by the user.
    std::shared_ptr<string> ownerType_ = nullptr;
    // The basic information about the ASM instances.
    std::shared_ptr<Models::DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo> serviceMeshInfo_ = nullptr;
    // The specifications of the ASM instance.
    std::shared_ptr<Models::DescribeServiceMeshesResponseBodyServiceMeshesSpec> spec_ = nullptr;
    // The details about the tags.
    std::shared_ptr<vector<Models::DescribeServiceMeshesResponseBodyServiceMeshesTag>> tag_ = nullptr;
    // Indicates whether the ASM instance can be upgraded.
    std::shared_ptr<bool> upgradable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
