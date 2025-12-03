// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTINSIGHTWORKITEMSTATUSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_EXPORTINSIGHTWORKITEMSTATUSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ExportInsightWorkitemStatusResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportInsightWorkitemStatusResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(assignedToId, assignedToId_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(expectedWorkTime, expectedWorkTime_);
      DARABONBA_PTR_TO_JSON(gmtClosed, gmtClosed_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtDue, gmtDue_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(gmtStart, gmtStart_);
      DARABONBA_PTR_TO_JSON(gmtTodo, gmtTodo_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isArchived, isArchived_);
      DARABONBA_PTR_TO_JSON(isDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(isDone, isDone_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(participantIds, participantIds_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(serialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(sprintId, sprintId_);
      DARABONBA_PTR_TO_JSON(stage, stage_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusId, statusId_);
      DARABONBA_PTR_TO_JSON(storyPoint, storyPoint_);
      DARABONBA_PTR_TO_JSON(subType, subType_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(versionId, versionId_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
      DARABONBA_PTR_TO_JSON(workTime, workTime_);
      DARABONBA_PTR_TO_JSON(workitemId, workitemId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportInsightWorkitemStatusResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(assignedToId, assignedToId_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(expectedWorkTime, expectedWorkTime_);
      DARABONBA_PTR_FROM_JSON(gmtClosed, gmtClosed_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtDue, gmtDue_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(gmtStart, gmtStart_);
      DARABONBA_PTR_FROM_JSON(gmtTodo, gmtTodo_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isArchived, isArchived_);
      DARABONBA_PTR_FROM_JSON(isDeleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(isDone, isDone_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(participantIds, participantIds_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(serialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(sprintId, sprintId_);
      DARABONBA_PTR_FROM_JSON(stage, stage_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusId, statusId_);
      DARABONBA_PTR_FROM_JSON(storyPoint, storyPoint_);
      DARABONBA_PTR_FROM_JSON(subType, subType_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(versionId, versionId_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
      DARABONBA_PTR_FROM_JSON(workTime, workTime_);
      DARABONBA_PTR_FROM_JSON(workitemId, workitemId_);
    };
    ExportInsightWorkitemStatusResponseBodyResult() = default ;
    ExportInsightWorkitemStatusResponseBodyResult(const ExportInsightWorkitemStatusResponseBodyResult &) = default ;
    ExportInsightWorkitemStatusResponseBodyResult(ExportInsightWorkitemStatusResponseBodyResult &&) = default ;
    ExportInsightWorkitemStatusResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportInsightWorkitemStatusResponseBodyResult() = default ;
    ExportInsightWorkitemStatusResponseBodyResult& operator=(const ExportInsightWorkitemStatusResponseBodyResult &) = default ;
    ExportInsightWorkitemStatusResponseBodyResult& operator=(ExportInsightWorkitemStatusResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedToId_ == nullptr
        && return this->creatorId_ == nullptr && return this->expectedWorkTime_ == nullptr && return this->gmtClosed_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtDue_ == nullptr
        && return this->gmtModified_ == nullptr && return this->gmtStart_ == nullptr && return this->gmtTodo_ == nullptr && return this->id_ == nullptr && return this->isArchived_ == nullptr
        && return this->isDeleted_ == nullptr && return this->isDone_ == nullptr && return this->organizationId_ == nullptr && return this->parentId_ == nullptr && return this->participantIds_ == nullptr
        && return this->phase_ == nullptr && return this->priority_ == nullptr && return this->productId_ == nullptr && return this->projectId_ == nullptr && return this->serialNumber_ == nullptr
        && return this->source_ == nullptr && return this->sprintId_ == nullptr && return this->stage_ == nullptr && return this->status_ == nullptr && return this->statusId_ == nullptr
        && return this->storyPoint_ == nullptr && return this->subType_ == nullptr && return this->subject_ == nullptr && return this->type_ == nullptr && return this->versionId_ == nullptr
        && return this->versions_ == nullptr && return this->workTime_ == nullptr && return this->workitemId_ == nullptr; };
    // assignedToId Field Functions 
    bool hasAssignedToId() const { return this->assignedToId_ != nullptr;};
    void deleteAssignedToId() { this->assignedToId_ = nullptr;};
    inline string assignedToId() const { DARABONBA_PTR_GET_DEFAULT(assignedToId_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setAssignedToId(string assignedToId) { DARABONBA_PTR_SET_VALUE(assignedToId_, assignedToId) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // expectedWorkTime Field Functions 
    bool hasExpectedWorkTime() const { return this->expectedWorkTime_ != nullptr;};
    void deleteExpectedWorkTime() { this->expectedWorkTime_ = nullptr;};
    inline int64_t expectedWorkTime() const { DARABONBA_PTR_GET_DEFAULT(expectedWorkTime_, 0L) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setExpectedWorkTime(int64_t expectedWorkTime) { DARABONBA_PTR_SET_VALUE(expectedWorkTime_, expectedWorkTime) };


    // gmtClosed Field Functions 
    bool hasGmtClosed() const { return this->gmtClosed_ != nullptr;};
    void deleteGmtClosed() { this->gmtClosed_ = nullptr;};
    inline int64_t gmtClosed() const { DARABONBA_PTR_GET_DEFAULT(gmtClosed_, 0L) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setGmtClosed(int64_t gmtClosed) { DARABONBA_PTR_SET_VALUE(gmtClosed_, gmtClosed) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtDue Field Functions 
    bool hasGmtDue() const { return this->gmtDue_ != nullptr;};
    void deleteGmtDue() { this->gmtDue_ = nullptr;};
    inline int64_t gmtDue() const { DARABONBA_PTR_GET_DEFAULT(gmtDue_, 0L) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setGmtDue(int64_t gmtDue) { DARABONBA_PTR_SET_VALUE(gmtDue_, gmtDue) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // gmtStart Field Functions 
    bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
    void deleteGmtStart() { this->gmtStart_ = nullptr;};
    inline int64_t gmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, 0L) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setGmtStart(int64_t gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


    // gmtTodo Field Functions 
    bool hasGmtTodo() const { return this->gmtTodo_ != nullptr;};
    void deleteGmtTodo() { this->gmtTodo_ = nullptr;};
    inline int64_t gmtTodo() const { DARABONBA_PTR_GET_DEFAULT(gmtTodo_, 0L) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setGmtTodo(int64_t gmtTodo) { DARABONBA_PTR_SET_VALUE(gmtTodo_, gmtTodo) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isArchived Field Functions 
    bool hasIsArchived() const { return this->isArchived_ != nullptr;};
    void deleteIsArchived() { this->isArchived_ = nullptr;};
    inline string isArchived() const { DARABONBA_PTR_GET_DEFAULT(isArchived_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setIsArchived(string isArchived) { DARABONBA_PTR_SET_VALUE(isArchived_, isArchived) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline string isDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setIsDeleted(string isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // isDone Field Functions 
    bool hasIsDone() const { return this->isDone_ != nullptr;};
    void deleteIsDone() { this->isDone_ = nullptr;};
    inline string isDone() const { DARABONBA_PTR_GET_DEFAULT(isDone_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setIsDone(string isDone) { DARABONBA_PTR_SET_VALUE(isDone_, isDone) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // participantIds Field Functions 
    bool hasParticipantIds() const { return this->participantIds_ != nullptr;};
    void deleteParticipantIds() { this->participantIds_ = nullptr;};
    inline string participantIds() const { DARABONBA_PTR_GET_DEFAULT(participantIds_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setParticipantIds(string participantIds) { DARABONBA_PTR_SET_VALUE(participantIds_, participantIds) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline int32_t phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, 0) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setPhase(int32_t phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline int32_t serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, 0) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setSerialNumber(int32_t serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sprintId Field Functions 
    bool hasSprintId() const { return this->sprintId_ != nullptr;};
    void deleteSprintId() { this->sprintId_ = nullptr;};
    inline string sprintId() const { DARABONBA_PTR_GET_DEFAULT(sprintId_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setSprintId(string sprintId) { DARABONBA_PTR_SET_VALUE(sprintId_, sprintId) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline int32_t stage() const { DARABONBA_PTR_GET_DEFAULT(stage_, 0) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setStage(int32_t stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusId Field Functions 
    bool hasStatusId() const { return this->statusId_ != nullptr;};
    void deleteStatusId() { this->statusId_ = nullptr;};
    inline string statusId() const { DARABONBA_PTR_GET_DEFAULT(statusId_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setStatusId(string statusId) { DARABONBA_PTR_SET_VALUE(statusId_, statusId) };


    // storyPoint Field Functions 
    bool hasStoryPoint() const { return this->storyPoint_ != nullptr;};
    void deleteStoryPoint() { this->storyPoint_ = nullptr;};
    inline float storyPoint() const { DARABONBA_PTR_GET_DEFAULT(storyPoint_, 0.0) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setStoryPoint(float storyPoint) { DARABONBA_PTR_SET_VALUE(storyPoint_, storyPoint) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline string versions() const { DARABONBA_PTR_GET_DEFAULT(versions_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setVersions(string versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };


    // workTime Field Functions 
    bool hasWorkTime() const { return this->workTime_ != nullptr;};
    void deleteWorkTime() { this->workTime_ = nullptr;};
    inline int64_t workTime() const { DARABONBA_PTR_GET_DEFAULT(workTime_, 0L) };
    inline ExportInsightWorkitemStatusResponseBodyResult& setWorkTime(int64_t workTime) { DARABONBA_PTR_SET_VALUE(workTime_, workTime) };


    // workitemId Field Functions 
    bool hasWorkitemId() const { return this->workitemId_ != nullptr;};
    void deleteWorkitemId() { this->workitemId_ = nullptr;};
    inline string workitemId() const { DARABONBA_PTR_GET_DEFAULT(workitemId_, "") };
    inline ExportInsightWorkitemStatusResponseBodyResult& setWorkitemId(string workitemId) { DARABONBA_PTR_SET_VALUE(workitemId_, workitemId) };


  protected:
    std::shared_ptr<string> assignedToId_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<int64_t> expectedWorkTime_ = nullptr;
    std::shared_ptr<int64_t> gmtClosed_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtDue_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> gmtStart_ = nullptr;
    std::shared_ptr<int64_t> gmtTodo_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> isArchived_ = nullptr;
    std::shared_ptr<string> isDeleted_ = nullptr;
    std::shared_ptr<string> isDone_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> parentId_ = nullptr;
    std::shared_ptr<string> participantIds_ = nullptr;
    std::shared_ptr<int32_t> phase_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<int32_t> serialNumber_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sprintId_ = nullptr;
    std::shared_ptr<int32_t> stage_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusId_ = nullptr;
    std::shared_ptr<float> storyPoint_ = nullptr;
    std::shared_ptr<string> subType_ = nullptr;
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> versionId_ = nullptr;
    std::shared_ptr<string> versions_ = nullptr;
    std::shared_ptr<int64_t> workTime_ = nullptr;
    std::shared_ptr<string> workitemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
