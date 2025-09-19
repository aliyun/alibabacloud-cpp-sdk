// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEVULLISTRESPONSEBODYVULRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEVULLISTRESPONSEBODYVULRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImageVulListResponseBodyVulRecordsExtendContentJson.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageVulListResponseBodyVulRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageVulListResponseBodyVulRecords& obj) { 
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
      DARABONBA_PTR_TO_JSON(RuleTag, ruleTag_);
      DARABONBA_PTR_TO_JSON(ScanTime, scanTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageVulListResponseBodyVulRecords& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RuleTag, ruleTag_);
      DARABONBA_PTR_FROM_JSON(ScanTime, scanTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeImageVulListResponseBodyVulRecords() = default ;
    DescribeImageVulListResponseBodyVulRecords(const DescribeImageVulListResponseBodyVulRecords &) = default ;
    DescribeImageVulListResponseBodyVulRecords(DescribeImageVulListResponseBodyVulRecords &&) = default ;
    DescribeImageVulListResponseBodyVulRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageVulListResponseBodyVulRecords() = default ;
    DescribeImageVulListResponseBodyVulRecords& operator=(const DescribeImageVulListResponseBodyVulRecords &) = default ;
    DescribeImageVulListResponseBodyVulRecords& operator=(DescribeImageVulListResponseBodyVulRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasName_ != nullptr
        && this->canFix_ != nullptr && this->canUpdate_ != nullptr && this->clusterId_ != nullptr && this->clusterName_ != nullptr && this->containerId_ != nullptr
        && this->extendContentJson_ != nullptr && this->firstTs_ != nullptr && this->image_ != nullptr && this->imageDigest_ != nullptr && this->instanceName_ != nullptr
        && this->internetIp_ != nullptr && this->intranetIp_ != nullptr && this->lastTs_ != nullptr && this->layers_ != nullptr && this->maliciousSource_ != nullptr
        && this->modifyTs_ != nullptr && this->name_ != nullptr && this->namespace_ != nullptr && this->necessity_ != nullptr && this->pod_ != nullptr
        && this->primaryId_ != nullptr && this->related_ != nullptr && this->repoName_ != nullptr && this->repoNamespace_ != nullptr && this->ruleTag_ != nullptr
        && this->scanTime_ != nullptr && this->status_ != nullptr && this->tag_ != nullptr && this->targetId_ != nullptr && this->targetName_ != nullptr
        && this->targetType_ != nullptr && this->type_ != nullptr && this->uuid_ != nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // canFix Field Functions 
    bool hasCanFix() const { return this->canFix_ != nullptr;};
    void deleteCanFix() { this->canFix_ = nullptr;};
    inline string canFix() const { DARABONBA_PTR_GET_DEFAULT(canFix_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setCanFix(string canFix) { DARABONBA_PTR_SET_VALUE(canFix_, canFix) };


    // canUpdate Field Functions 
    bool hasCanUpdate() const { return this->canUpdate_ != nullptr;};
    void deleteCanUpdate() { this->canUpdate_ = nullptr;};
    inline bool canUpdate() const { DARABONBA_PTR_GET_DEFAULT(canUpdate_, false) };
    inline DescribeImageVulListResponseBodyVulRecords& setCanUpdate(bool canUpdate) { DARABONBA_PTR_SET_VALUE(canUpdate_, canUpdate) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // extendContentJson Field Functions 
    bool hasExtendContentJson() const { return this->extendContentJson_ != nullptr;};
    void deleteExtendContentJson() { this->extendContentJson_ = nullptr;};
    inline const Models::DescribeImageVulListResponseBodyVulRecordsExtendContentJson & extendContentJson() const { DARABONBA_PTR_GET_CONST(extendContentJson_, Models::DescribeImageVulListResponseBodyVulRecordsExtendContentJson) };
    inline Models::DescribeImageVulListResponseBodyVulRecordsExtendContentJson extendContentJson() { DARABONBA_PTR_GET(extendContentJson_, Models::DescribeImageVulListResponseBodyVulRecordsExtendContentJson) };
    inline DescribeImageVulListResponseBodyVulRecords& setExtendContentJson(const Models::DescribeImageVulListResponseBodyVulRecordsExtendContentJson & extendContentJson) { DARABONBA_PTR_SET_VALUE(extendContentJson_, extendContentJson) };
    inline DescribeImageVulListResponseBodyVulRecords& setExtendContentJson(Models::DescribeImageVulListResponseBodyVulRecordsExtendContentJson && extendContentJson) { DARABONBA_PTR_SET_RVALUE(extendContentJson_, extendContentJson) };


    // firstTs Field Functions 
    bool hasFirstTs() const { return this->firstTs_ != nullptr;};
    void deleteFirstTs() { this->firstTs_ = nullptr;};
    inline int64_t firstTs() const { DARABONBA_PTR_GET_DEFAULT(firstTs_, 0L) };
    inline DescribeImageVulListResponseBodyVulRecords& setFirstTs(int64_t firstTs) { DARABONBA_PTR_SET_VALUE(firstTs_, firstTs) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imageDigest Field Functions 
    bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
    void deleteImageDigest() { this->imageDigest_ = nullptr;};
    inline string imageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // lastTs Field Functions 
    bool hasLastTs() const { return this->lastTs_ != nullptr;};
    void deleteLastTs() { this->lastTs_ = nullptr;};
    inline int64_t lastTs() const { DARABONBA_PTR_GET_DEFAULT(lastTs_, 0L) };
    inline DescribeImageVulListResponseBodyVulRecords& setLastTs(int64_t lastTs) { DARABONBA_PTR_SET_VALUE(lastTs_, lastTs) };


    // layers Field Functions 
    bool hasLayers() const { return this->layers_ != nullptr;};
    void deleteLayers() { this->layers_ = nullptr;};
    inline const vector<string> & layers() const { DARABONBA_PTR_GET_CONST(layers_, vector<string>) };
    inline vector<string> layers() { DARABONBA_PTR_GET(layers_, vector<string>) };
    inline DescribeImageVulListResponseBodyVulRecords& setLayers(const vector<string> & layers) { DARABONBA_PTR_SET_VALUE(layers_, layers) };
    inline DescribeImageVulListResponseBodyVulRecords& setLayers(vector<string> && layers) { DARABONBA_PTR_SET_RVALUE(layers_, layers) };


    // maliciousSource Field Functions 
    bool hasMaliciousSource() const { return this->maliciousSource_ != nullptr;};
    void deleteMaliciousSource() { this->maliciousSource_ = nullptr;};
    inline string maliciousSource() const { DARABONBA_PTR_GET_DEFAULT(maliciousSource_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setMaliciousSource(string maliciousSource) { DARABONBA_PTR_SET_VALUE(maliciousSource_, maliciousSource) };


    // modifyTs Field Functions 
    bool hasModifyTs() const { return this->modifyTs_ != nullptr;};
    void deleteModifyTs() { this->modifyTs_ = nullptr;};
    inline int64_t modifyTs() const { DARABONBA_PTR_GET_DEFAULT(modifyTs_, 0L) };
    inline DescribeImageVulListResponseBodyVulRecords& setModifyTs(int64_t modifyTs) { DARABONBA_PTR_SET_VALUE(modifyTs_, modifyTs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string necessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // primaryId Field Functions 
    bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
    void deletePrimaryId() { this->primaryId_ = nullptr;};
    inline int64_t primaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
    inline DescribeImageVulListResponseBodyVulRecords& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


    // related Field Functions 
    bool hasRelated() const { return this->related_ != nullptr;};
    void deleteRelated() { this->related_ = nullptr;};
    inline string related() const { DARABONBA_PTR_GET_DEFAULT(related_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setRelated(string related) { DARABONBA_PTR_SET_VALUE(related_, related) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string repoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // ruleTag Field Functions 
    bool hasRuleTag() const { return this->ruleTag_ != nullptr;};
    void deleteRuleTag() { this->ruleTag_ = nullptr;};
    inline string ruleTag() const { DARABONBA_PTR_GET_DEFAULT(ruleTag_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setRuleTag(string ruleTag) { DARABONBA_PTR_SET_VALUE(ruleTag_, ruleTag) };


    // scanTime Field Functions 
    bool hasScanTime() const { return this->scanTime_ != nullptr;};
    void deleteScanTime() { this->scanTime_ = nullptr;};
    inline int64_t scanTime() const { DARABONBA_PTR_GET_DEFAULT(scanTime_, 0L) };
    inline DescribeImageVulListResponseBodyVulRecords& setScanTime(int64_t scanTime) { DARABONBA_PTR_SET_VALUE(scanTime_, scanTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeImageVulListResponseBodyVulRecords& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeImageVulListResponseBodyVulRecords& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The alias of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // Indicates whether the vulnerability can be fixed in the Security Center console. Valid values:
    // 
    // *   **yes**: yes
    // *   **no**: no
    std::shared_ptr<string> canFix_ = nullptr;
    // Indicates whether the package of the software that has the vulnerability can be upgraded by using Security Center. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> canUpdate_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The ID of the container.
    std::shared_ptr<string> containerId_ = nullptr;
    // The extended information about the vulnerability.
    std::shared_ptr<Models::DescribeImageVulListResponseBodyVulRecordsExtendContentJson> extendContentJson_ = nullptr;
    // The timestamp when the first scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> firstTs_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> image_ = nullptr;
    // The digest of the image.
    std::shared_ptr<string> imageDigest_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The timestamp when the last scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> lastTs_ = nullptr;
    // The image layers.
    std::shared_ptr<vector<string>> layers_ = nullptr;
    // The source of the malicious file. Valid values:
    // 
    // *   **agentless**: agentless detection
    // *   **image**: image
    // *   **container**: container
    std::shared_ptr<string> maliciousSource_ = nullptr;
    // The timestamp when the information about the vulnerability was updated. Unit: milliseconds.
    std::shared_ptr<int64_t> modifyTs_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The priority to fix the vulnerability. Valid values:
    // 
    // *   **asap**: high. You must fix the vulnerability at the earliest opportunity.
    // *   **later**: medium. You can fix the vulnerability based on your business requirements.
    // *   **nntf**: low. You can ignore the vulnerability.
    std::shared_ptr<string> necessity_ = nullptr;
    // The pod.
    std::shared_ptr<string> pod_ = nullptr;
    // The ID of the vulnerability.
    std::shared_ptr<int64_t> primaryId_ = nullptr;
    // The Common Vulnerabilities and Exposures (CVE) ID of the associated vulnerability.
    std::shared_ptr<string> related_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The namespace to which the image repository belongs.
    std::shared_ptr<string> repoNamespace_ = nullptr;
    // The tag of this vulnerability. Valid values:
    // 
    // *   **AI**: AI-related components.
    std::shared_ptr<string> ruleTag_ = nullptr;
    // The time at which the scan was performed. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> scanTime_ = nullptr;
    // The status of the vulnerability. Valid values:
    // 
    // *   **1**: unfixed
    // *   **7**: fixed
    std::shared_ptr<int32_t> status_ = nullptr;
    // The tag that is added to the image vulnerability.
    std::shared_ptr<string> tag_ = nullptr;
    // The ID of the asset on which the vulnerability is detected.
    std::shared_ptr<string> targetId_ = nullptr;
    // The name of the asset on which the vulnerability is detected.
    std::shared_ptr<string> targetName_ = nullptr;
    // The type of the asset on which the vulnerability is detected. Valid values:
    // 
    // *   **ECS_SNAPSHOT**: snapshot
    // *   **ECS_IMAGE**: image
    std::shared_ptr<string> targetType_ = nullptr;
    // The type of the vulnerability. The value is fixed as CVE, which indicates image vulnerabilities.
    std::shared_ptr<string> type_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
