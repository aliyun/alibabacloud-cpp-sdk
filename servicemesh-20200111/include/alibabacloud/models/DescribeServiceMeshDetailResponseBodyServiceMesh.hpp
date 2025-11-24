// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESH_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESH_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMesh : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMesh& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_TO_JSON(ServiceMeshInfo, serviceMeshInfo_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMesh& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshInfo, serviceMeshInfo_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMesh() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMesh(const DescribeServiceMeshDetailResponseBodyServiceMesh &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMesh(DescribeServiceMeshDetailResponseBodyServiceMesh &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMesh(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMesh() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMesh& operator=(const DescribeServiceMeshDetailResponseBodyServiceMesh &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMesh& operator=(DescribeServiceMeshDetailResponseBodyServiceMesh &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterSpec_ == nullptr
        && return this->clusters_ == nullptr && return this->endpoints_ == nullptr && return this->ownerId_ == nullptr && return this->ownerType_ == nullptr && return this->serviceMeshInfo_ == nullptr
        && return this->spec_ == nullptr; };
    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string clusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMesh& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<string> & clusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<string>) };
    inline vector<string> clusters() { DARABONBA_PTR_GET(clusters_, vector<string>) };
    inline DescribeServiceMeshDetailResponseBodyServiceMesh& setClusters(const vector<string> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline DescribeServiceMeshDetailResponseBodyServiceMesh& setClusters(vector<string> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints endpoints() { DARABONBA_PTR_GET(endpoints_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints) };
    inline DescribeServiceMeshDetailResponseBodyServiceMesh& setEndpoints(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeServiceMeshDetailResponseBodyServiceMesh& setEndpoints(Models::DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMesh& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string ownerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMesh& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // serviceMeshInfo Field Functions 
    bool hasServiceMeshInfo() const { return this->serviceMeshInfo_ != nullptr;};
    void deleteServiceMeshInfo() { this->serviceMeshInfo_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo & serviceMeshInfo() const { DARABONBA_PTR_GET_CONST(serviceMeshInfo_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo serviceMeshInfo() { DARABONBA_PTR_GET(serviceMeshInfo_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo) };
    inline DescribeServiceMeshDetailResponseBodyServiceMesh& setServiceMeshInfo(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo & serviceMeshInfo) { DARABONBA_PTR_SET_VALUE(serviceMeshInfo_, serviceMeshInfo) };
    inline DescribeServiceMeshDetailResponseBodyServiceMesh& setServiceMeshInfo(Models::DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo && serviceMeshInfo) { DARABONBA_PTR_SET_RVALUE(serviceMeshInfo_, serviceMeshInfo) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpec & spec() const { DARABONBA_PTR_GET_CONST(spec_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpec) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpec spec() { DARABONBA_PTR_GET(spec_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpec) };
    inline DescribeServiceMeshDetailResponseBodyServiceMesh& setSpec(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline DescribeServiceMeshDetailResponseBodyServiceMesh& setSpec(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


  protected:
    // The specification of the ASM instance. Valid values:
    // 
    // *   `standard`: Standard Edition
    // *   `enterprise`: Enterprise Edition
    // *   `ultimate`: Ultimate Edition
    std::shared_ptr<string> clusterSpec_ = nullptr;
    // The clusters.
    std::shared_ptr<vector<string>> clusters_ = nullptr;
    // The endpoints of the ASM instance.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints> endpoints_ = nullptr;
    // The ID of the Alibaba Cloud service instance for which the ASM instance is created.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The Alibaba Cloud service for which the ASM instance is created. Valid values:
    // 
    // *   `ackone`: The ASM instance is created for Alibaba Cloud Distributed Cloud Container Platform (ACK One).
    // *   An empty value indicates that the ASM instance is created by the user.
    std::shared_ptr<string> ownerType_ = nullptr;
    // The basic information about the ASM instance.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo> serviceMeshInfo_ = nullptr;
    // The specifications of the ASM instance.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpec> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
