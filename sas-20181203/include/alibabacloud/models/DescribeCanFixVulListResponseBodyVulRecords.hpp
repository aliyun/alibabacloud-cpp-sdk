// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECANFIXVULLISTRESPONSEBODYVULRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECANFIXVULLISTRESPONSEBODYVULRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCanFixVulListResponseBodyVulRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCanFixVulListResponseBodyVulRecords& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(CanFix, canFix_);
      DARABONBA_PTR_TO_JSON(CanUpdate, canUpdate_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(ExtendContentJson, extendContentJson_);
      DARABONBA_PTR_TO_JSON(FirstTs, firstTs_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(LastTs, lastTs_);
      DARABONBA_PTR_TO_JSON(Layers, layers_);
      DARABONBA_PTR_TO_JSON(MaliciousSource, maliciousSource_);
      DARABONBA_PTR_TO_JSON(ModifyTs, modifyTs_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Necessity, necessity_);
      DARABONBA_PTR_TO_JSON(Pod, pod_);
      DARABONBA_PTR_TO_JSON(PrimaryId, primaryId_);
      DARABONBA_PTR_TO_JSON(Related, related_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(ScanTime, scanTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCanFixVulListResponseBodyVulRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(CanFix, canFix_);
      DARABONBA_PTR_FROM_JSON(CanUpdate, canUpdate_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(ExtendContentJson, extendContentJson_);
      DARABONBA_PTR_FROM_JSON(FirstTs, firstTs_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImageDigest, imageDigest_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(LastTs, lastTs_);
      DARABONBA_PTR_FROM_JSON(Layers, layers_);
      DARABONBA_PTR_FROM_JSON(MaliciousSource, maliciousSource_);
      DARABONBA_PTR_FROM_JSON(ModifyTs, modifyTs_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
      DARABONBA_PTR_FROM_JSON(Pod, pod_);
      DARABONBA_PTR_FROM_JSON(PrimaryId, primaryId_);
      DARABONBA_PTR_FROM_JSON(Related, related_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(ScanTime, scanTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeCanFixVulListResponseBodyVulRecords() = default ;
    DescribeCanFixVulListResponseBodyVulRecords(const DescribeCanFixVulListResponseBodyVulRecords &) = default ;
    DescribeCanFixVulListResponseBodyVulRecords(DescribeCanFixVulListResponseBodyVulRecords &&) = default ;
    DescribeCanFixVulListResponseBodyVulRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCanFixVulListResponseBodyVulRecords() = default ;
    DescribeCanFixVulListResponseBodyVulRecords& operator=(const DescribeCanFixVulListResponseBodyVulRecords &) = default ;
    DescribeCanFixVulListResponseBodyVulRecords& operator=(DescribeCanFixVulListResponseBodyVulRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->canFix_ == nullptr && return this->canUpdate_ == nullptr && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->containerId_ == nullptr
        && return this->extendContentJson_ == nullptr && return this->firstTs_ == nullptr && return this->image_ == nullptr && return this->imageDigest_ == nullptr && return this->instanceName_ == nullptr
        && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->lastTs_ == nullptr && return this->layers_ == nullptr && return this->maliciousSource_ == nullptr
        && return this->modifyTs_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->necessity_ == nullptr && return this->pod_ == nullptr
        && return this->primaryId_ == nullptr && return this->related_ == nullptr && return this->repoName_ == nullptr && return this->repoNamespace_ == nullptr && return this->scanTime_ == nullptr
        && return this->status_ == nullptr && return this->tag_ == nullptr && return this->targetId_ == nullptr && return this->targetName_ == nullptr && return this->targetType_ == nullptr
        && return this->type_ == nullptr && return this->uuid_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // canFix Field Functions 
    bool hasCanFix() const { return this->canFix_ != nullptr;};
    void deleteCanFix() { this->canFix_ = nullptr;};
    inline string canFix() const { DARABONBA_PTR_GET_DEFAULT(canFix_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setCanFix(string canFix) { DARABONBA_PTR_SET_VALUE(canFix_, canFix) };


    // canUpdate Field Functions 
    bool hasCanUpdate() const { return this->canUpdate_ != nullptr;};
    void deleteCanUpdate() { this->canUpdate_ = nullptr;};
    inline bool canUpdate() const { DARABONBA_PTR_GET_DEFAULT(canUpdate_, false) };
    inline DescribeCanFixVulListResponseBodyVulRecords& setCanUpdate(bool canUpdate) { DARABONBA_PTR_SET_VALUE(canUpdate_, canUpdate) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // extendContentJson Field Functions 
    bool hasExtendContentJson() const { return this->extendContentJson_ != nullptr;};
    void deleteExtendContentJson() { this->extendContentJson_ = nullptr;};
    inline const Models::DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson & extendContentJson() const { DARABONBA_PTR_GET_CONST(extendContentJson_, Models::DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson) };
    inline Models::DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson extendContentJson() { DARABONBA_PTR_GET(extendContentJson_, Models::DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson) };
    inline DescribeCanFixVulListResponseBodyVulRecords& setExtendContentJson(const Models::DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson & extendContentJson) { DARABONBA_PTR_SET_VALUE(extendContentJson_, extendContentJson) };
    inline DescribeCanFixVulListResponseBodyVulRecords& setExtendContentJson(Models::DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson && extendContentJson) { DARABONBA_PTR_SET_RVALUE(extendContentJson_, extendContentJson) };


    // firstTs Field Functions 
    bool hasFirstTs() const { return this->firstTs_ != nullptr;};
    void deleteFirstTs() { this->firstTs_ = nullptr;};
    inline int64_t firstTs() const { DARABONBA_PTR_GET_DEFAULT(firstTs_, 0L) };
    inline DescribeCanFixVulListResponseBodyVulRecords& setFirstTs(int64_t firstTs) { DARABONBA_PTR_SET_VALUE(firstTs_, firstTs) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imageDigest Field Functions 
    bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
    void deleteImageDigest() { this->imageDigest_ = nullptr;};
    inline string imageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // lastTs Field Functions 
    bool hasLastTs() const { return this->lastTs_ != nullptr;};
    void deleteLastTs() { this->lastTs_ = nullptr;};
    inline int64_t lastTs() const { DARABONBA_PTR_GET_DEFAULT(lastTs_, 0L) };
    inline DescribeCanFixVulListResponseBodyVulRecords& setLastTs(int64_t lastTs) { DARABONBA_PTR_SET_VALUE(lastTs_, lastTs) };


    // layers Field Functions 
    bool hasLayers() const { return this->layers_ != nullptr;};
    void deleteLayers() { this->layers_ = nullptr;};
    inline const vector<string> & layers() const { DARABONBA_PTR_GET_CONST(layers_, vector<string>) };
    inline vector<string> layers() { DARABONBA_PTR_GET(layers_, vector<string>) };
    inline DescribeCanFixVulListResponseBodyVulRecords& setLayers(const vector<string> & layers) { DARABONBA_PTR_SET_VALUE(layers_, layers) };
    inline DescribeCanFixVulListResponseBodyVulRecords& setLayers(vector<string> && layers) { DARABONBA_PTR_SET_RVALUE(layers_, layers) };


    // maliciousSource Field Functions 
    bool hasMaliciousSource() const { return this->maliciousSource_ != nullptr;};
    void deleteMaliciousSource() { this->maliciousSource_ = nullptr;};
    inline string maliciousSource() const { DARABONBA_PTR_GET_DEFAULT(maliciousSource_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setMaliciousSource(string maliciousSource) { DARABONBA_PTR_SET_VALUE(maliciousSource_, maliciousSource) };


    // modifyTs Field Functions 
    bool hasModifyTs() const { return this->modifyTs_ != nullptr;};
    void deleteModifyTs() { this->modifyTs_ = nullptr;};
    inline int64_t modifyTs() const { DARABONBA_PTR_GET_DEFAULT(modifyTs_, 0L) };
    inline DescribeCanFixVulListResponseBodyVulRecords& setModifyTs(int64_t modifyTs) { DARABONBA_PTR_SET_VALUE(modifyTs_, modifyTs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string necessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // primaryId Field Functions 
    bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
    void deletePrimaryId() { this->primaryId_ = nullptr;};
    inline int64_t primaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
    inline DescribeCanFixVulListResponseBodyVulRecords& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


    // related Field Functions 
    bool hasRelated() const { return this->related_ != nullptr;};
    void deleteRelated() { this->related_ = nullptr;};
    inline string related() const { DARABONBA_PTR_GET_DEFAULT(related_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setRelated(string related) { DARABONBA_PTR_SET_VALUE(related_, related) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // scanTime Field Functions 
    bool hasScanTime() const { return this->scanTime_ != nullptr;};
    void deleteScanTime() { this->scanTime_ = nullptr;};
    inline int64_t scanTime() const { DARABONBA_PTR_GET_DEFAULT(scanTime_, 0L) };
    inline DescribeCanFixVulListResponseBodyVulRecords& setScanTime(int64_t scanTime) { DARABONBA_PTR_SET_VALUE(scanTime_, scanTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCanFixVulListResponseBodyVulRecords& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeCanFixVulListResponseBodyVulRecords& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The alias of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // Indicates whether the vulnerability can be fixed in the Security Center console. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> canFix_ = nullptr;
    // Indicates whether the packages of the software that has the vulnerability can be upgraded by using Security Center. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> canUpdate_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The container ID.
    std::shared_ptr<string> containerId_ = nullptr;
    // The extended information about the vulnerability.
    std::shared_ptr<Models::DescribeCanFixVulListResponseBodyVulRecordsExtendContentJson> extendContentJson_ = nullptr;
    // The timestamp generated when the vulnerability was first detected. Unit: milliseconds.
    std::shared_ptr<int64_t> firstTs_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> image_ = nullptr;
    // The unique identifier of the image.
    std::shared_ptr<string> imageDigest_ = nullptr;
    // The name of the instance.
    // 
    // The name must be 3 to 64 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the asset.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the asset.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The timestamp generated when the vulnerability was last detected. Unit: milliseconds.
    std::shared_ptr<int64_t> lastTs_ = nullptr;
    // The image layers.
    std::shared_ptr<vector<string>> layers_ = nullptr;
    // The source of the malicious file. Valid values:
    // 
    // *   **agentless**
    // *   **image**
    // *   **container**
    std::shared_ptr<string> maliciousSource_ = nullptr;
    // The timestamp generated when the vulnerability status was modified. Unit: milliseconds.
    std::shared_ptr<int64_t> modifyTs_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The priority to fix the vulnerability. Valid values:
    // 
    // *   **asap**: high
    // *   **later**: medium
    // *   **nntf**: low
    // 
    // >  We recommend that you fix high-level vulnerabilities as soon as possible.
    std::shared_ptr<string> necessity_ = nullptr;
    // The name of the container group.
    std::shared_ptr<string> pod_ = nullptr;
    // The vulnerability ID.
    std::shared_ptr<int64_t> primaryId_ = nullptr;
    // The CVE IDs related to the vulnerability. Multiple CVE IDs are separated by commas (,).
    std::shared_ptr<string> related_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The namespace to which the image repository belongs.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // The timestamp generated when the scan task was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> scanTime_ = nullptr;
    // The status of the vulnerability. Valid values:
    // 
    // *   **1**: The vulnerability is unfixed.
    // *   **4**: The vulnerability is being fixed.
    // *   **7**: The vulnerability is fixed.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The tag that is added to the image.
    std::shared_ptr<string> tag_ = nullptr;
    // The ID of the asset that is scanned.
    std::shared_ptr<string> targetId_ = nullptr;
    // The name of the asset that is scanned.
    std::shared_ptr<string> targetName_ = nullptr;
    // The type of the asset that is scanned. Valid values:
    // 
    // *   **IMAGE**
    // *   **ECS_IMAGE**
    // *   **ECS_SNAPSHOT**
    std::shared_ptr<string> targetType_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: system vulnerability
    // *   **sca**: application vulnerability
    std::shared_ptr<string> type_ = nullptr;
    // The UUID of the container image.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
