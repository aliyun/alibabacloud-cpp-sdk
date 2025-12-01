// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULLISTRESPONSEBODYVULRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULLISTRESPONSEBODYVULRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVulListResponseBodyVulRecordsExtendContentJson.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulListResponseBodyVulRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulListResponseBodyVulRecords& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_TO_JSON(Bind, bind_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(ExtendContentJson, extendContentJson_);
      DARABONBA_PTR_TO_JSON(FirstTs, firstTs_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_TO_JSON(K8sNamespace, k8sNamespace_);
      DARABONBA_PTR_TO_JSON(K8sNodeId, k8sNodeId_);
      DARABONBA_PTR_TO_JSON(K8sNodeName, k8sNodeName_);
      DARABONBA_PTR_TO_JSON(K8sPodName, k8sPodName_);
      DARABONBA_PTR_TO_JSON(LastTs, lastTs_);
      DARABONBA_PTR_TO_JSON(ModifyTs, modifyTs_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Necessity, necessity_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(OsName, osName_);
      DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_TO_JSON(PrimaryId, primaryId_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RaspDefend, raspDefend_);
      DARABONBA_PTR_TO_JSON(RaspStatus, raspStatus_);
      DARABONBA_PTR_TO_JSON(RealRisk, realRisk_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Related, related_);
      DARABONBA_PTR_TO_JSON(RepairTs, repairTs_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_TO_JSON(RuleTag, ruleTag_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulListResponseBodyVulRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_FROM_JSON(Bind, bind_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(ExtendContentJson, extendContentJson_);
      DARABONBA_PTR_FROM_JSON(FirstTs, firstTs_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_FROM_JSON(K8sNamespace, k8sNamespace_);
      DARABONBA_PTR_FROM_JSON(K8sNodeId, k8sNodeId_);
      DARABONBA_PTR_FROM_JSON(K8sNodeName, k8sNodeName_);
      DARABONBA_PTR_FROM_JSON(K8sPodName, k8sPodName_);
      DARABONBA_PTR_FROM_JSON(LastTs, lastTs_);
      DARABONBA_PTR_FROM_JSON(ModifyTs, modifyTs_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(OsName, osName_);
      DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_FROM_JSON(PrimaryId, primaryId_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RaspDefend, raspDefend_);
      DARABONBA_PTR_FROM_JSON(RaspStatus, raspStatus_);
      DARABONBA_PTR_FROM_JSON(RealRisk, realRisk_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Related, related_);
      DARABONBA_PTR_FROM_JSON(RepairTs, repairTs_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_FROM_JSON(RuleTag, ruleTag_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeVulListResponseBodyVulRecords() = default ;
    DescribeVulListResponseBodyVulRecords(const DescribeVulListResponseBodyVulRecords &) = default ;
    DescribeVulListResponseBodyVulRecords(DescribeVulListResponseBodyVulRecords &&) = default ;
    DescribeVulListResponseBodyVulRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulListResponseBodyVulRecords() = default ;
    DescribeVulListResponseBodyVulRecords& operator=(const DescribeVulListResponseBodyVulRecords &) = default ;
    DescribeVulListResponseBodyVulRecords& operator=(DescribeVulListResponseBodyVulRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->authVersion_ == nullptr && return this->bind_ == nullptr && return this->containerId_ == nullptr && return this->extendContentJson_ == nullptr && return this->firstTs_ == nullptr
        && return this->groupId_ == nullptr && return this->image_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr
        && return this->intranetIp_ == nullptr && return this->k8sClusterId_ == nullptr && return this->k8sNamespace_ == nullptr && return this->k8sNodeId_ == nullptr && return this->k8sNodeName_ == nullptr
        && return this->k8sPodName_ == nullptr && return this->lastTs_ == nullptr && return this->modifyTs_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr
        && return this->necessity_ == nullptr && return this->online_ == nullptr && return this->osName_ == nullptr && return this->osVersion_ == nullptr && return this->primaryId_ == nullptr
        && return this->progress_ == nullptr && return this->raspDefend_ == nullptr && return this->raspStatus_ == nullptr && return this->realRisk_ == nullptr && return this->regionId_ == nullptr
        && return this->related_ == nullptr && return this->repairTs_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr && return this->ruleTag_ == nullptr
        && return this->status_ == nullptr && return this->tag_ == nullptr && return this->type_ == nullptr && return this->uuid_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeVulListResponseBodyVulRecords& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // authVersion Field Functions 
    bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
    void deleteAuthVersion() { this->authVersion_ = nullptr;};
    inline string authVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, "") };
    inline DescribeVulListResponseBodyVulRecords& setAuthVersion(string authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


    // bind Field Functions 
    bool hasBind() const { return this->bind_ != nullptr;};
    void deleteBind() { this->bind_ = nullptr;};
    inline bool bind() const { DARABONBA_PTR_GET_DEFAULT(bind_, false) };
    inline DescribeVulListResponseBodyVulRecords& setBind(bool bind) { DARABONBA_PTR_SET_VALUE(bind_, bind) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeVulListResponseBodyVulRecords& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // extendContentJson Field Functions 
    bool hasExtendContentJson() const { return this->extendContentJson_ != nullptr;};
    void deleteExtendContentJson() { this->extendContentJson_ = nullptr;};
    inline const Models::DescribeVulListResponseBodyVulRecordsExtendContentJson & extendContentJson() const { DARABONBA_PTR_GET_CONST(extendContentJson_, Models::DescribeVulListResponseBodyVulRecordsExtendContentJson) };
    inline Models::DescribeVulListResponseBodyVulRecordsExtendContentJson extendContentJson() { DARABONBA_PTR_GET(extendContentJson_, Models::DescribeVulListResponseBodyVulRecordsExtendContentJson) };
    inline DescribeVulListResponseBodyVulRecords& setExtendContentJson(const Models::DescribeVulListResponseBodyVulRecordsExtendContentJson & extendContentJson) { DARABONBA_PTR_SET_VALUE(extendContentJson_, extendContentJson) };
    inline DescribeVulListResponseBodyVulRecords& setExtendContentJson(Models::DescribeVulListResponseBodyVulRecordsExtendContentJson && extendContentJson) { DARABONBA_PTR_SET_RVALUE(extendContentJson_, extendContentJson) };


    // firstTs Field Functions 
    bool hasFirstTs() const { return this->firstTs_ != nullptr;};
    void deleteFirstTs() { this->firstTs_ = nullptr;};
    inline int64_t firstTs() const { DARABONBA_PTR_GET_DEFAULT(firstTs_, 0L) };
    inline DescribeVulListResponseBodyVulRecords& setFirstTs(int64_t firstTs) { DARABONBA_PTR_SET_VALUE(firstTs_, firstTs) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeVulListResponseBodyVulRecords& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeVulListResponseBodyVulRecords& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVulListResponseBodyVulRecords& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeVulListResponseBodyVulRecords& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeVulListResponseBodyVulRecords& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeVulListResponseBodyVulRecords& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // k8sClusterId Field Functions 
    bool hasK8sClusterId() const { return this->k8sClusterId_ != nullptr;};
    void deleteK8sClusterId() { this->k8sClusterId_ = nullptr;};
    inline string k8sClusterId() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterId_, "") };
    inline DescribeVulListResponseBodyVulRecords& setK8sClusterId(string k8sClusterId) { DARABONBA_PTR_SET_VALUE(k8sClusterId_, k8sClusterId) };


    // k8sNamespace Field Functions 
    bool hasK8sNamespace() const { return this->k8sNamespace_ != nullptr;};
    void deleteK8sNamespace() { this->k8sNamespace_ = nullptr;};
    inline string k8sNamespace() const { DARABONBA_PTR_GET_DEFAULT(k8sNamespace_, "") };
    inline DescribeVulListResponseBodyVulRecords& setK8sNamespace(string k8sNamespace) { DARABONBA_PTR_SET_VALUE(k8sNamespace_, k8sNamespace) };


    // k8sNodeId Field Functions 
    bool hasK8sNodeId() const { return this->k8sNodeId_ != nullptr;};
    void deleteK8sNodeId() { this->k8sNodeId_ = nullptr;};
    inline string k8sNodeId() const { DARABONBA_PTR_GET_DEFAULT(k8sNodeId_, "") };
    inline DescribeVulListResponseBodyVulRecords& setK8sNodeId(string k8sNodeId) { DARABONBA_PTR_SET_VALUE(k8sNodeId_, k8sNodeId) };


    // k8sNodeName Field Functions 
    bool hasK8sNodeName() const { return this->k8sNodeName_ != nullptr;};
    void deleteK8sNodeName() { this->k8sNodeName_ = nullptr;};
    inline string k8sNodeName() const { DARABONBA_PTR_GET_DEFAULT(k8sNodeName_, "") };
    inline DescribeVulListResponseBodyVulRecords& setK8sNodeName(string k8sNodeName) { DARABONBA_PTR_SET_VALUE(k8sNodeName_, k8sNodeName) };


    // k8sPodName Field Functions 
    bool hasK8sPodName() const { return this->k8sPodName_ != nullptr;};
    void deleteK8sPodName() { this->k8sPodName_ = nullptr;};
    inline string k8sPodName() const { DARABONBA_PTR_GET_DEFAULT(k8sPodName_, "") };
    inline DescribeVulListResponseBodyVulRecords& setK8sPodName(string k8sPodName) { DARABONBA_PTR_SET_VALUE(k8sPodName_, k8sPodName) };


    // lastTs Field Functions 
    bool hasLastTs() const { return this->lastTs_ != nullptr;};
    void deleteLastTs() { this->lastTs_ = nullptr;};
    inline int64_t lastTs() const { DARABONBA_PTR_GET_DEFAULT(lastTs_, 0L) };
    inline DescribeVulListResponseBodyVulRecords& setLastTs(int64_t lastTs) { DARABONBA_PTR_SET_VALUE(lastTs_, lastTs) };


    // modifyTs Field Functions 
    bool hasModifyTs() const { return this->modifyTs_ != nullptr;};
    void deleteModifyTs() { this->modifyTs_ = nullptr;};
    inline int64_t modifyTs() const { DARABONBA_PTR_GET_DEFAULT(modifyTs_, 0L) };
    inline DescribeVulListResponseBodyVulRecords& setModifyTs(int64_t modifyTs) { DARABONBA_PTR_SET_VALUE(modifyTs_, modifyTs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVulListResponseBodyVulRecords& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeVulListResponseBodyVulRecords& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string necessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline DescribeVulListResponseBodyVulRecords& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline DescribeVulListResponseBodyVulRecords& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // osName Field Functions 
    bool hasOsName() const { return this->osName_ != nullptr;};
    void deleteOsName() { this->osName_ = nullptr;};
    inline string osName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
    inline DescribeVulListResponseBodyVulRecords& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


    // osVersion Field Functions 
    bool hasOsVersion() const { return this->osVersion_ != nullptr;};
    void deleteOsVersion() { this->osVersion_ = nullptr;};
    inline string osVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
    inline DescribeVulListResponseBodyVulRecords& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


    // primaryId Field Functions 
    bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
    void deletePrimaryId() { this->primaryId_ = nullptr;};
    inline int64_t primaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
    inline DescribeVulListResponseBodyVulRecords& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeVulListResponseBodyVulRecords& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // raspDefend Field Functions 
    bool hasRaspDefend() const { return this->raspDefend_ != nullptr;};
    void deleteRaspDefend() { this->raspDefend_ = nullptr;};
    inline int32_t raspDefend() const { DARABONBA_PTR_GET_DEFAULT(raspDefend_, 0) };
    inline DescribeVulListResponseBodyVulRecords& setRaspDefend(int32_t raspDefend) { DARABONBA_PTR_SET_VALUE(raspDefend_, raspDefend) };


    // raspStatus Field Functions 
    bool hasRaspStatus() const { return this->raspStatus_ != nullptr;};
    void deleteRaspStatus() { this->raspStatus_ = nullptr;};
    inline int32_t raspStatus() const { DARABONBA_PTR_GET_DEFAULT(raspStatus_, 0) };
    inline DescribeVulListResponseBodyVulRecords& setRaspStatus(int32_t raspStatus) { DARABONBA_PTR_SET_VALUE(raspStatus_, raspStatus) };


    // realRisk Field Functions 
    bool hasRealRisk() const { return this->realRisk_ != nullptr;};
    void deleteRealRisk() { this->realRisk_ = nullptr;};
    inline bool realRisk() const { DARABONBA_PTR_GET_DEFAULT(realRisk_, false) };
    inline DescribeVulListResponseBodyVulRecords& setRealRisk(bool realRisk) { DARABONBA_PTR_SET_VALUE(realRisk_, realRisk) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVulListResponseBodyVulRecords& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // related Field Functions 
    bool hasRelated() const { return this->related_ != nullptr;};
    void deleteRelated() { this->related_ = nullptr;};
    inline string related() const { DARABONBA_PTR_GET_DEFAULT(related_, "") };
    inline DescribeVulListResponseBodyVulRecords& setRelated(string related) { DARABONBA_PTR_SET_VALUE(related_, related) };


    // repairTs Field Functions 
    bool hasRepairTs() const { return this->repairTs_ != nullptr;};
    void deleteRepairTs() { this->repairTs_ = nullptr;};
    inline int64_t repairTs() const { DARABONBA_PTR_GET_DEFAULT(repairTs_, 0L) };
    inline DescribeVulListResponseBodyVulRecords& setRepairTs(int64_t repairTs) { DARABONBA_PTR_SET_VALUE(repairTs_, repairTs) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline DescribeVulListResponseBodyVulRecords& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline DescribeVulListResponseBodyVulRecords& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


    // ruleTag Field Functions 
    bool hasRuleTag() const { return this->ruleTag_ != nullptr;};
    void deleteRuleTag() { this->ruleTag_ = nullptr;};
    inline string ruleTag() const { DARABONBA_PTR_GET_DEFAULT(ruleTag_, "") };
    inline DescribeVulListResponseBodyVulRecords& setRuleTag(string ruleTag) { DARABONBA_PTR_SET_VALUE(ruleTag_, ruleTag) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeVulListResponseBodyVulRecords& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeVulListResponseBodyVulRecords& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVulListResponseBodyVulRecords& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeVulListResponseBodyVulRecords& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The name of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The edition of Security Center that is authorized to scan the asset. Valid values:
    // 
    // *   **1**: Basic.
    // *   **6**: Anti-virus.
    // *   **5**: Advanced.
    // *   **3**: Enterprise.
    // *   **7**: Ultimate.
    // *   **10**: Value-added Plan.
    std::shared_ptr<string> authVersion_ = nullptr;
    // Indicates whether Security Center is authorized to scan the asset. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> bind_ = nullptr;
    // The container ID.
    std::shared_ptr<string> containerId_ = nullptr;
    // The extended information about the vulnerability.
    std::shared_ptr<Models::DescribeVulListResponseBodyVulRecordsExtendContentJson> extendContentJson_ = nullptr;
    // The timestamp when the vulnerability was first detected. Unit: milliseconds.
    std::shared_ptr<int64_t> firstTs_ = nullptr;
    // The ID of the asset group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> image_ = nullptr;
    // The ID of the asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the asset.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the asset.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The ID of the cluster.
    // 
    // >  The value of this parameter is returned only if you use the Ultimate edition of Security Center that can protect container assets.
    std::shared_ptr<string> k8sClusterId_ = nullptr;
    // The namespace.
    // 
    // >  If you use the Ultimate edition of Security Center, the value of this parameter is queried from container assets. If you do not use the Ultimate edition, the value of this parameter is queried from the Security Center agent.
    std::shared_ptr<string> k8sNamespace_ = nullptr;
    // The ID of the node.
    // 
    // >  The value of this parameter is returned only if you use the Ultimate edition of Security Center that can protect container assets.
    std::shared_ptr<string> k8sNodeId_ = nullptr;
    // The name of the node.
    // 
    // >  The value of this parameter is returned only if you use the Ultimate edition of Security Center that can protect container assets.
    std::shared_ptr<string> k8sNodeName_ = nullptr;
    // The name of the pod.
    // 
    // >  The value of this parameter is returned only if you use the Ultimate edition of Security Center that can protect container assets.
    std::shared_ptr<string> k8sPodName_ = nullptr;
    // The timestamp when the vulnerability was last detected. Unit: milliseconds.
    std::shared_ptr<int64_t> lastTs_ = nullptr;
    // The timestamp when the vulnerability status was modified. Unit: milliseconds.
    std::shared_ptr<int64_t> modifyTs_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The priority to fix the vulnerability. Valid values:
    // 
    // *   **asap**: high.
    // *   **later**: medium.
    // *   **nntf**: low.
    // 
    // >  We recommend that you fix **high-risk** vulnerabilities at the earliest opportunity.
    std::shared_ptr<string> necessity_ = nullptr;
    // Indicates whether the Security Center agent on the asset is online. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> online_ = nullptr;
    // The name of the operating system for your asset.
    std::shared_ptr<string> osName_ = nullptr;
    // The name of the operating system for your asset.
    std::shared_ptr<string> osVersion_ = nullptr;
    // The ID of the vulnerability.
    std::shared_ptr<int64_t> primaryId_ = nullptr;
    // The progress of the vulnerability fixing.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // Indicates whether the application protection feature is supported. Valid values:
    // 
    // *   **0**: no.
    // *   **1**: yes.
    // 
    // >  If this parameter is not returned, the application protection feature is not supported.
    std::shared_ptr<int32_t> raspDefend_ = nullptr;
    // The protection mode of the application protection feature. Valid values:
    // 
    // *   **0**: unprotected.
    // *   **1**: the Monitor mode.
    // *   **2**: the Block mode.
    // *   **3**: disabled.
    std::shared_ptr<int32_t> raspStatus_ = nullptr;
    // Indicates whether the vulnerability is easily exploited. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> realRisk_ = nullptr;
    // The region ID of the asset.
    std::shared_ptr<string> regionId_ = nullptr;
    // The Common Vulnerabilities and Exposures (CVE) IDs related to the vulnerability. Multiple CVE IDs are separated by commas (,).
    std::shared_ptr<string> related_ = nullptr;
    // The timestamp when the vulnerability was fixed. Unit: milliseconds. This parameter is returned only if you fix vulnerabilities in the Security Center console.
    std::shared_ptr<int64_t> repairTs_ = nullptr;
    // The code that indicates the vulnerability fixing result.
    std::shared_ptr<string> resultCode_ = nullptr;
    // The message that indicates the vulnerability fixing result.
    std::shared_ptr<string> resultMessage_ = nullptr;
    // The tag of this vulnerability. Valid values:
    // 
    // *   **AI**: AI-related components.
    std::shared_ptr<string> ruleTag_ = nullptr;
    // The status of the vulnerability. Valid values:
    // 
    // *   **1**: unfixed.
    // *   **2**: fix failed.
    // *   **3**: rollback failed.
    // *   **4**: being fixed.
    // *   **5**: being rolled back.
    // *   **6**: being verified.
    // *   **7**: fixed.
    // *   **8**: fixed and to be restarted.
    // *   **9**: rolled back.
    // *   **10**: ignored.
    // *   **11**: rolled back and to be restarted.
    // *   **12**: not found.
    // *   **20**: expired.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The tag that is added to the vulnerability.
    std::shared_ptr<string> tag_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: Linux software vulnerability.
    // *   **sys**: Windows system vulnerability.
    // *   **cms**: Web-CMS vulnerability.
    // *   **emg**: urgent vulnerability.
    // *   **app**: application vulnerability.
    // *   **sca**: application vulnerability that is detected by using software component analysis.
    std::shared_ptr<string> type_ = nullptr;
    // The UUID of the asset.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
