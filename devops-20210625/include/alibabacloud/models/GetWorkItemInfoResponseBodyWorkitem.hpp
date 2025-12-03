// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMINFORESPONSEBODYWORKITEM_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMINFORESPONSEBODYWORKITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkItemInfoResponseBodyWorkitemCustomFields.hpp>
#include <alibabacloud/models/GetWorkItemInfoResponseBodyWorkitemTagDetails.hpp>
#include <alibabacloud/models/GetWorkItemInfoResponseBodyWorkitemVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkItemInfoResponseBodyWorkitem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemInfoResponseBodyWorkitem& obj) { 
      DARABONBA_PTR_TO_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_TO_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(customFields, customFields_);
      DARABONBA_PTR_TO_JSON(document, document_);
      DARABONBA_PTR_TO_JSON(documentFormat, documentFormat_);
      DARABONBA_PTR_TO_JSON(finishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(logicalStatus, logicalStatus_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(parentIdentifier, parentIdentifier_);
      DARABONBA_PTR_TO_JSON(participant, participant_);
      DARABONBA_PTR_TO_JSON(serialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_TO_JSON(spaceName, spaceName_);
      DARABONBA_PTR_TO_JSON(spaceType, spaceType_);
      DARABONBA_PTR_TO_JSON(sprint, sprint_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusIdentifier, statusIdentifier_);
      DARABONBA_PTR_TO_JSON(statusStageIdentifier, statusStageIdentifier_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(tagDetails, tagDetails_);
      DARABONBA_PTR_TO_JSON(tracker, tracker_);
      DARABONBA_PTR_TO_JSON(updateStatusAt, updateStatusAt_);
      DARABONBA_PTR_TO_JSON(verifier, verifier_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
      DARABONBA_PTR_TO_JSON(workitemTypeIdentifier, workitemTypeIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemInfoResponseBodyWorkitem& obj) { 
      DARABONBA_PTR_FROM_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_FROM_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(customFields, customFields_);
      DARABONBA_PTR_FROM_JSON(document, document_);
      DARABONBA_PTR_FROM_JSON(documentFormat, documentFormat_);
      DARABONBA_PTR_FROM_JSON(finishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(logicalStatus, logicalStatus_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(parentIdentifier, parentIdentifier_);
      DARABONBA_PTR_FROM_JSON(participant, participant_);
      DARABONBA_PTR_FROM_JSON(serialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_FROM_JSON(spaceName, spaceName_);
      DARABONBA_PTR_FROM_JSON(spaceType, spaceType_);
      DARABONBA_PTR_FROM_JSON(sprint, sprint_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusIdentifier, statusIdentifier_);
      DARABONBA_PTR_FROM_JSON(statusStageIdentifier, statusStageIdentifier_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(tagDetails, tagDetails_);
      DARABONBA_PTR_FROM_JSON(tracker, tracker_);
      DARABONBA_PTR_FROM_JSON(updateStatusAt, updateStatusAt_);
      DARABONBA_PTR_FROM_JSON(verifier, verifier_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
      DARABONBA_PTR_FROM_JSON(workitemTypeIdentifier, workitemTypeIdentifier_);
    };
    GetWorkItemInfoResponseBodyWorkitem() = default ;
    GetWorkItemInfoResponseBodyWorkitem(const GetWorkItemInfoResponseBodyWorkitem &) = default ;
    GetWorkItemInfoResponseBodyWorkitem(GetWorkItemInfoResponseBodyWorkitem &&) = default ;
    GetWorkItemInfoResponseBodyWorkitem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemInfoResponseBodyWorkitem() = default ;
    GetWorkItemInfoResponseBodyWorkitem& operator=(const GetWorkItemInfoResponseBodyWorkitem &) = default ;
    GetWorkItemInfoResponseBodyWorkitem& operator=(GetWorkItemInfoResponseBodyWorkitem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedTo_ == nullptr
        && return this->categoryIdentifier_ == nullptr && return this->creator_ == nullptr && return this->customFields_ == nullptr && return this->document_ == nullptr && return this->documentFormat_ == nullptr
        && return this->finishTime_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->identifier_ == nullptr && return this->logicalStatus_ == nullptr
        && return this->modifier_ == nullptr && return this->parentIdentifier_ == nullptr && return this->participant_ == nullptr && return this->serialNumber_ == nullptr && return this->spaceIdentifier_ == nullptr
        && return this->spaceName_ == nullptr && return this->spaceType_ == nullptr && return this->sprint_ == nullptr && return this->status_ == nullptr && return this->statusIdentifier_ == nullptr
        && return this->statusStageIdentifier_ == nullptr && return this->subject_ == nullptr && return this->tag_ == nullptr && return this->tagDetails_ == nullptr && return this->tracker_ == nullptr
        && return this->updateStatusAt_ == nullptr && return this->verifier_ == nullptr && return this->versions_ == nullptr && return this->workitemTypeIdentifier_ == nullptr; };
    // assignedTo Field Functions 
    bool hasAssignedTo() const { return this->assignedTo_ != nullptr;};
    void deleteAssignedTo() { this->assignedTo_ = nullptr;};
    inline string assignedTo() const { DARABONBA_PTR_GET_DEFAULT(assignedTo_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setAssignedTo(string assignedTo) { DARABONBA_PTR_SET_VALUE(assignedTo_, assignedTo) };


    // categoryIdentifier Field Functions 
    bool hasCategoryIdentifier() const { return this->categoryIdentifier_ != nullptr;};
    void deleteCategoryIdentifier() { this->categoryIdentifier_ = nullptr;};
    inline string categoryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(categoryIdentifier_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setCategoryIdentifier(string categoryIdentifier) { DARABONBA_PTR_SET_VALUE(categoryIdentifier_, categoryIdentifier) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline const vector<Models::GetWorkItemInfoResponseBodyWorkitemCustomFields> & customFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<Models::GetWorkItemInfoResponseBodyWorkitemCustomFields>) };
    inline vector<Models::GetWorkItemInfoResponseBodyWorkitemCustomFields> customFields() { DARABONBA_PTR_GET(customFields_, vector<Models::GetWorkItemInfoResponseBodyWorkitemCustomFields>) };
    inline GetWorkItemInfoResponseBodyWorkitem& setCustomFields(const vector<Models::GetWorkItemInfoResponseBodyWorkitemCustomFields> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
    inline GetWorkItemInfoResponseBodyWorkitem& setCustomFields(vector<Models::GetWorkItemInfoResponseBodyWorkitemCustomFields> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline string document() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


    // documentFormat Field Functions 
    bool hasDocumentFormat() const { return this->documentFormat_ != nullptr;};
    void deleteDocumentFormat() { this->documentFormat_ = nullptr;};
    inline string documentFormat() const { DARABONBA_PTR_GET_DEFAULT(documentFormat_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setDocumentFormat(string documentFormat) { DARABONBA_PTR_SET_VALUE(documentFormat_, documentFormat) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline GetWorkItemInfoResponseBodyWorkitem& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetWorkItemInfoResponseBodyWorkitem& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline GetWorkItemInfoResponseBodyWorkitem& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // logicalStatus Field Functions 
    bool hasLogicalStatus() const { return this->logicalStatus_ != nullptr;};
    void deleteLogicalStatus() { this->logicalStatus_ = nullptr;};
    inline string logicalStatus() const { DARABONBA_PTR_GET_DEFAULT(logicalStatus_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setLogicalStatus(string logicalStatus) { DARABONBA_PTR_SET_VALUE(logicalStatus_, logicalStatus) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string parentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // participant Field Functions 
    bool hasParticipant() const { return this->participant_ != nullptr;};
    void deleteParticipant() { this->participant_ = nullptr;};
    inline const vector<string> & participant() const { DARABONBA_PTR_GET_CONST(participant_, vector<string>) };
    inline vector<string> participant() { DARABONBA_PTR_GET(participant_, vector<string>) };
    inline GetWorkItemInfoResponseBodyWorkitem& setParticipant(const vector<string> & participant) { DARABONBA_PTR_SET_VALUE(participant_, participant) };
    inline GetWorkItemInfoResponseBodyWorkitem& setParticipant(vector<string> && participant) { DARABONBA_PTR_SET_RVALUE(participant_, participant) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


    // spaceName Field Functions 
    bool hasSpaceName() const { return this->spaceName_ != nullptr;};
    void deleteSpaceName() { this->spaceName_ = nullptr;};
    inline string spaceName() const { DARABONBA_PTR_GET_DEFAULT(spaceName_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setSpaceName(string spaceName) { DARABONBA_PTR_SET_VALUE(spaceName_, spaceName) };


    // spaceType Field Functions 
    bool hasSpaceType() const { return this->spaceType_ != nullptr;};
    void deleteSpaceType() { this->spaceType_ = nullptr;};
    inline string spaceType() const { DARABONBA_PTR_GET_DEFAULT(spaceType_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setSpaceType(string spaceType) { DARABONBA_PTR_SET_VALUE(spaceType_, spaceType) };


    // sprint Field Functions 
    bool hasSprint() const { return this->sprint_ != nullptr;};
    void deleteSprint() { this->sprint_ = nullptr;};
    inline const vector<string> & sprint() const { DARABONBA_PTR_GET_CONST(sprint_, vector<string>) };
    inline vector<string> sprint() { DARABONBA_PTR_GET(sprint_, vector<string>) };
    inline GetWorkItemInfoResponseBodyWorkitem& setSprint(const vector<string> & sprint) { DARABONBA_PTR_SET_VALUE(sprint_, sprint) };
    inline GetWorkItemInfoResponseBodyWorkitem& setSprint(vector<string> && sprint) { DARABONBA_PTR_SET_RVALUE(sprint_, sprint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusIdentifier Field Functions 
    bool hasStatusIdentifier() const { return this->statusIdentifier_ != nullptr;};
    void deleteStatusIdentifier() { this->statusIdentifier_ = nullptr;};
    inline string statusIdentifier() const { DARABONBA_PTR_GET_DEFAULT(statusIdentifier_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setStatusIdentifier(string statusIdentifier) { DARABONBA_PTR_SET_VALUE(statusIdentifier_, statusIdentifier) };


    // statusStageIdentifier Field Functions 
    bool hasStatusStageIdentifier() const { return this->statusStageIdentifier_ != nullptr;};
    void deleteStatusStageIdentifier() { this->statusStageIdentifier_ = nullptr;};
    inline string statusStageIdentifier() const { DARABONBA_PTR_GET_DEFAULT(statusStageIdentifier_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setStatusStageIdentifier(string statusStageIdentifier) { DARABONBA_PTR_SET_VALUE(statusStageIdentifier_, statusStageIdentifier) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<string> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<string>) };
    inline vector<string> tag() { DARABONBA_PTR_GET(tag_, vector<string>) };
    inline GetWorkItemInfoResponseBodyWorkitem& setTag(const vector<string> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetWorkItemInfoResponseBodyWorkitem& setTag(vector<string> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tagDetails Field Functions 
    bool hasTagDetails() const { return this->tagDetails_ != nullptr;};
    void deleteTagDetails() { this->tagDetails_ = nullptr;};
    inline const vector<Models::GetWorkItemInfoResponseBodyWorkitemTagDetails> & tagDetails() const { DARABONBA_PTR_GET_CONST(tagDetails_, vector<Models::GetWorkItemInfoResponseBodyWorkitemTagDetails>) };
    inline vector<Models::GetWorkItemInfoResponseBodyWorkitemTagDetails> tagDetails() { DARABONBA_PTR_GET(tagDetails_, vector<Models::GetWorkItemInfoResponseBodyWorkitemTagDetails>) };
    inline GetWorkItemInfoResponseBodyWorkitem& setTagDetails(const vector<Models::GetWorkItemInfoResponseBodyWorkitemTagDetails> & tagDetails) { DARABONBA_PTR_SET_VALUE(tagDetails_, tagDetails) };
    inline GetWorkItemInfoResponseBodyWorkitem& setTagDetails(vector<Models::GetWorkItemInfoResponseBodyWorkitemTagDetails> && tagDetails) { DARABONBA_PTR_SET_RVALUE(tagDetails_, tagDetails) };


    // tracker Field Functions 
    bool hasTracker() const { return this->tracker_ != nullptr;};
    void deleteTracker() { this->tracker_ = nullptr;};
    inline const vector<string> & tracker() const { DARABONBA_PTR_GET_CONST(tracker_, vector<string>) };
    inline vector<string> tracker() { DARABONBA_PTR_GET(tracker_, vector<string>) };
    inline GetWorkItemInfoResponseBodyWorkitem& setTracker(const vector<string> & tracker) { DARABONBA_PTR_SET_VALUE(tracker_, tracker) };
    inline GetWorkItemInfoResponseBodyWorkitem& setTracker(vector<string> && tracker) { DARABONBA_PTR_SET_RVALUE(tracker_, tracker) };


    // updateStatusAt Field Functions 
    bool hasUpdateStatusAt() const { return this->updateStatusAt_ != nullptr;};
    void deleteUpdateStatusAt() { this->updateStatusAt_ = nullptr;};
    inline int64_t updateStatusAt() const { DARABONBA_PTR_GET_DEFAULT(updateStatusAt_, 0L) };
    inline GetWorkItemInfoResponseBodyWorkitem& setUpdateStatusAt(int64_t updateStatusAt) { DARABONBA_PTR_SET_VALUE(updateStatusAt_, updateStatusAt) };


    // verifier Field Functions 
    bool hasVerifier() const { return this->verifier_ != nullptr;};
    void deleteVerifier() { this->verifier_ = nullptr;};
    inline const vector<string> & verifier() const { DARABONBA_PTR_GET_CONST(verifier_, vector<string>) };
    inline vector<string> verifier() { DARABONBA_PTR_GET(verifier_, vector<string>) };
    inline GetWorkItemInfoResponseBodyWorkitem& setVerifier(const vector<string> & verifier) { DARABONBA_PTR_SET_VALUE(verifier_, verifier) };
    inline GetWorkItemInfoResponseBodyWorkitem& setVerifier(vector<string> && verifier) { DARABONBA_PTR_SET_RVALUE(verifier_, verifier) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<Models::GetWorkItemInfoResponseBodyWorkitemVersions> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Models::GetWorkItemInfoResponseBodyWorkitemVersions>) };
    inline vector<Models::GetWorkItemInfoResponseBodyWorkitemVersions> versions() { DARABONBA_PTR_GET(versions_, vector<Models::GetWorkItemInfoResponseBodyWorkitemVersions>) };
    inline GetWorkItemInfoResponseBodyWorkitem& setVersions(const vector<Models::GetWorkItemInfoResponseBodyWorkitemVersions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline GetWorkItemInfoResponseBodyWorkitem& setVersions(vector<Models::GetWorkItemInfoResponseBodyWorkitemVersions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


    // workitemTypeIdentifier Field Functions 
    bool hasWorkitemTypeIdentifier() const { return this->workitemTypeIdentifier_ != nullptr;};
    void deleteWorkitemTypeIdentifier() { this->workitemTypeIdentifier_ = nullptr;};
    inline string workitemTypeIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemTypeIdentifier_, "") };
    inline GetWorkItemInfoResponseBodyWorkitem& setWorkitemTypeIdentifier(string workitemTypeIdentifier) { DARABONBA_PTR_SET_VALUE(workitemTypeIdentifier_, workitemTypeIdentifier) };


  protected:
    std::shared_ptr<string> assignedTo_ = nullptr;
    std::shared_ptr<string> categoryIdentifier_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<vector<Models::GetWorkItemInfoResponseBodyWorkitemCustomFields>> customFields_ = nullptr;
    std::shared_ptr<string> document_ = nullptr;
    std::shared_ptr<string> documentFormat_ = nullptr;
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> logicalStatus_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> parentIdentifier_ = nullptr;
    std::shared_ptr<vector<string>> participant_ = nullptr;
    std::shared_ptr<string> serialNumber_ = nullptr;
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
    std::shared_ptr<string> spaceName_ = nullptr;
    std::shared_ptr<string> spaceType_ = nullptr;
    std::shared_ptr<vector<string>> sprint_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusIdentifier_ = nullptr;
    std::shared_ptr<string> statusStageIdentifier_ = nullptr;
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<vector<string>> tag_ = nullptr;
    std::shared_ptr<vector<Models::GetWorkItemInfoResponseBodyWorkitemTagDetails>> tagDetails_ = nullptr;
    std::shared_ptr<vector<string>> tracker_ = nullptr;
    std::shared_ptr<int64_t> updateStatusAt_ = nullptr;
    std::shared_ptr<vector<string>> verifier_ = nullptr;
    std::shared_ptr<vector<Models::GetWorkItemInfoResponseBodyWorkitemVersions>> versions_ = nullptr;
    std::shared_ptr<string> workitemTypeIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
