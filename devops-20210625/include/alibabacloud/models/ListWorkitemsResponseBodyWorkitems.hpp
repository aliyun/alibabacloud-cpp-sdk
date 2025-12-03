// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKITEMSRESPONSEBODYWORKITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKITEMSRESPONSEBODYWORKITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListWorkitemsResponseBodyWorkitems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkitemsResponseBodyWorkitems& obj) { 
      DARABONBA_PTR_TO_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_TO_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(document, document_);
      DARABONBA_PTR_TO_JSON(finishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(logicalStatus, logicalStatus_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(parentIdentifier, parentIdentifier_);
      DARABONBA_PTR_TO_JSON(serialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_TO_JSON(spaceName, spaceName_);
      DARABONBA_PTR_TO_JSON(spaceType, spaceType_);
      DARABONBA_PTR_TO_JSON(sprintIdentifier, sprintIdentifier_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusIdentifier, statusIdentifier_);
      DARABONBA_PTR_TO_JSON(statusStageIdentifier, statusStageIdentifier_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(updateStatusAt, updateStatusAt_);
      DARABONBA_PTR_TO_JSON(workitemTypeIdentifier, workitemTypeIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkitemsResponseBodyWorkitems& obj) { 
      DARABONBA_PTR_FROM_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_FROM_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(document, document_);
      DARABONBA_PTR_FROM_JSON(finishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(logicalStatus, logicalStatus_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(parentIdentifier, parentIdentifier_);
      DARABONBA_PTR_FROM_JSON(serialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_FROM_JSON(spaceName, spaceName_);
      DARABONBA_PTR_FROM_JSON(spaceType, spaceType_);
      DARABONBA_PTR_FROM_JSON(sprintIdentifier, sprintIdentifier_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusIdentifier, statusIdentifier_);
      DARABONBA_PTR_FROM_JSON(statusStageIdentifier, statusStageIdentifier_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(updateStatusAt, updateStatusAt_);
      DARABONBA_PTR_FROM_JSON(workitemTypeIdentifier, workitemTypeIdentifier_);
    };
    ListWorkitemsResponseBodyWorkitems() = default ;
    ListWorkitemsResponseBodyWorkitems(const ListWorkitemsResponseBodyWorkitems &) = default ;
    ListWorkitemsResponseBodyWorkitems(ListWorkitemsResponseBodyWorkitems &&) = default ;
    ListWorkitemsResponseBodyWorkitems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkitemsResponseBodyWorkitems() = default ;
    ListWorkitemsResponseBodyWorkitems& operator=(const ListWorkitemsResponseBodyWorkitems &) = default ;
    ListWorkitemsResponseBodyWorkitems& operator=(ListWorkitemsResponseBodyWorkitems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedTo_ == nullptr
        && return this->categoryIdentifier_ == nullptr && return this->creator_ == nullptr && return this->document_ == nullptr && return this->finishTime_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->identifier_ == nullptr && return this->logicalStatus_ == nullptr && return this->modifier_ == nullptr && return this->parentIdentifier_ == nullptr
        && return this->serialNumber_ == nullptr && return this->spaceIdentifier_ == nullptr && return this->spaceName_ == nullptr && return this->spaceType_ == nullptr && return this->sprintIdentifier_ == nullptr
        && return this->status_ == nullptr && return this->statusIdentifier_ == nullptr && return this->statusStageIdentifier_ == nullptr && return this->subject_ == nullptr && return this->updateStatusAt_ == nullptr
        && return this->workitemTypeIdentifier_ == nullptr; };
    // assignedTo Field Functions 
    bool hasAssignedTo() const { return this->assignedTo_ != nullptr;};
    void deleteAssignedTo() { this->assignedTo_ = nullptr;};
    inline string assignedTo() const { DARABONBA_PTR_GET_DEFAULT(assignedTo_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setAssignedTo(string assignedTo) { DARABONBA_PTR_SET_VALUE(assignedTo_, assignedTo) };


    // categoryIdentifier Field Functions 
    bool hasCategoryIdentifier() const { return this->categoryIdentifier_ != nullptr;};
    void deleteCategoryIdentifier() { this->categoryIdentifier_ = nullptr;};
    inline string categoryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(categoryIdentifier_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setCategoryIdentifier(string categoryIdentifier) { DARABONBA_PTR_SET_VALUE(categoryIdentifier_, categoryIdentifier) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline string document() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline ListWorkitemsResponseBodyWorkitems& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListWorkitemsResponseBodyWorkitems& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListWorkitemsResponseBodyWorkitems& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // logicalStatus Field Functions 
    bool hasLogicalStatus() const { return this->logicalStatus_ != nullptr;};
    void deleteLogicalStatus() { this->logicalStatus_ = nullptr;};
    inline string logicalStatus() const { DARABONBA_PTR_GET_DEFAULT(logicalStatus_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setLogicalStatus(string logicalStatus) { DARABONBA_PTR_SET_VALUE(logicalStatus_, logicalStatus) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string parentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


    // spaceName Field Functions 
    bool hasSpaceName() const { return this->spaceName_ != nullptr;};
    void deleteSpaceName() { this->spaceName_ = nullptr;};
    inline string spaceName() const { DARABONBA_PTR_GET_DEFAULT(spaceName_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setSpaceName(string spaceName) { DARABONBA_PTR_SET_VALUE(spaceName_, spaceName) };


    // spaceType Field Functions 
    bool hasSpaceType() const { return this->spaceType_ != nullptr;};
    void deleteSpaceType() { this->spaceType_ = nullptr;};
    inline string spaceType() const { DARABONBA_PTR_GET_DEFAULT(spaceType_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setSpaceType(string spaceType) { DARABONBA_PTR_SET_VALUE(spaceType_, spaceType) };


    // sprintIdentifier Field Functions 
    bool hasSprintIdentifier() const { return this->sprintIdentifier_ != nullptr;};
    void deleteSprintIdentifier() { this->sprintIdentifier_ = nullptr;};
    inline string sprintIdentifier() const { DARABONBA_PTR_GET_DEFAULT(sprintIdentifier_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setSprintIdentifier(string sprintIdentifier) { DARABONBA_PTR_SET_VALUE(sprintIdentifier_, sprintIdentifier) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusIdentifier Field Functions 
    bool hasStatusIdentifier() const { return this->statusIdentifier_ != nullptr;};
    void deleteStatusIdentifier() { this->statusIdentifier_ = nullptr;};
    inline string statusIdentifier() const { DARABONBA_PTR_GET_DEFAULT(statusIdentifier_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setStatusIdentifier(string statusIdentifier) { DARABONBA_PTR_SET_VALUE(statusIdentifier_, statusIdentifier) };


    // statusStageIdentifier Field Functions 
    bool hasStatusStageIdentifier() const { return this->statusStageIdentifier_ != nullptr;};
    void deleteStatusStageIdentifier() { this->statusStageIdentifier_ = nullptr;};
    inline string statusStageIdentifier() const { DARABONBA_PTR_GET_DEFAULT(statusStageIdentifier_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setStatusStageIdentifier(string statusStageIdentifier) { DARABONBA_PTR_SET_VALUE(statusStageIdentifier_, statusStageIdentifier) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // updateStatusAt Field Functions 
    bool hasUpdateStatusAt() const { return this->updateStatusAt_ != nullptr;};
    void deleteUpdateStatusAt() { this->updateStatusAt_ = nullptr;};
    inline int64_t updateStatusAt() const { DARABONBA_PTR_GET_DEFAULT(updateStatusAt_, 0L) };
    inline ListWorkitemsResponseBodyWorkitems& setUpdateStatusAt(int64_t updateStatusAt) { DARABONBA_PTR_SET_VALUE(updateStatusAt_, updateStatusAt) };


    // workitemTypeIdentifier Field Functions 
    bool hasWorkitemTypeIdentifier() const { return this->workitemTypeIdentifier_ != nullptr;};
    void deleteWorkitemTypeIdentifier() { this->workitemTypeIdentifier_ = nullptr;};
    inline string workitemTypeIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemTypeIdentifier_, "") };
    inline ListWorkitemsResponseBodyWorkitems& setWorkitemTypeIdentifier(string workitemTypeIdentifier) { DARABONBA_PTR_SET_VALUE(workitemTypeIdentifier_, workitemTypeIdentifier) };


  protected:
    std::shared_ptr<string> assignedTo_ = nullptr;
    std::shared_ptr<string> categoryIdentifier_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> document_ = nullptr;
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> logicalStatus_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> parentIdentifier_ = nullptr;
    std::shared_ptr<string> serialNumber_ = nullptr;
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
    std::shared_ptr<string> spaceName_ = nullptr;
    std::shared_ptr<string> spaceType_ = nullptr;
    std::shared_ptr<string> sprintIdentifier_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusIdentifier_ = nullptr;
    std::shared_ptr<string> statusStageIdentifier_ = nullptr;
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<int64_t> updateStatusAt_ = nullptr;
    std::shared_ptr<string> workitemTypeIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
