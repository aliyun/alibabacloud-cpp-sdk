// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTodoTaskResponseBodyContentFieldList.hpp>
#include <alibabacloud/models/CreateTodoTaskResponseBodyDetailUrl.hpp>
#include <alibabacloud/models/CreateTodoTaskResponseBodyNotifyConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTodoTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(bizTag, bizTag_);
      DARABONBA_PTR_TO_JSON(contentFieldList, contentFieldList_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(detailUrl, detailUrl_);
      DARABONBA_PTR_TO_JSON(done, done_);
      DARABONBA_PTR_TO_JSON(dueTime, dueTime_);
      DARABONBA_PTR_TO_JSON(executorIds, executorIds_);
      DARABONBA_PTR_TO_JSON(finishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isOnlyShowExecutor, isOnlyShowExecutor_);
      DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(modifierId, modifierId_);
      DARABONBA_PTR_TO_JSON(notifyConfigs, notifyConfigs_);
      DARABONBA_PTR_TO_JSON(participantIds, participantIds_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(bizTag, bizTag_);
      DARABONBA_PTR_FROM_JSON(contentFieldList, contentFieldList_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(detailUrl, detailUrl_);
      DARABONBA_PTR_FROM_JSON(done, done_);
      DARABONBA_PTR_FROM_JSON(dueTime, dueTime_);
      DARABONBA_PTR_FROM_JSON(executorIds, executorIds_);
      DARABONBA_PTR_FROM_JSON(finishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isOnlyShowExecutor, isOnlyShowExecutor_);
      DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(modifierId, modifierId_);
      DARABONBA_PTR_FROM_JSON(notifyConfigs, notifyConfigs_);
      DARABONBA_PTR_FROM_JSON(participantIds, participantIds_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
    };
    CreateTodoTaskResponseBody() = default ;
    CreateTodoTaskResponseBody(const CreateTodoTaskResponseBody &) = default ;
    CreateTodoTaskResponseBody(CreateTodoTaskResponseBody &&) = default ;
    CreateTodoTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoTaskResponseBody() = default ;
    CreateTodoTaskResponseBody& operator=(const CreateTodoTaskResponseBody &) = default ;
    CreateTodoTaskResponseBody& operator=(CreateTodoTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizTag_ != nullptr
        && this->contentFieldList_ != nullptr && this->createdTime_ != nullptr && this->creatorId_ != nullptr && this->description_ != nullptr && this->detailUrl_ != nullptr
        && this->done_ != nullptr && this->dueTime_ != nullptr && this->executorIds_ != nullptr && this->finishTime_ != nullptr && this->id_ != nullptr
        && this->isOnlyShowExecutor_ != nullptr && this->modifiedTime_ != nullptr && this->modifierId_ != nullptr && this->notifyConfigs_ != nullptr && this->participantIds_ != nullptr
        && this->priority_ != nullptr && this->requestId_ != nullptr && this->source_ != nullptr && this->sourceId_ != nullptr && this->startTime_ != nullptr
        && this->subject_ != nullptr; };
    // bizTag Field Functions 
    bool hasBizTag() const { return this->bizTag_ != nullptr;};
    void deleteBizTag() { this->bizTag_ = nullptr;};
    inline string bizTag() const { DARABONBA_PTR_GET_DEFAULT(bizTag_, "") };
    inline CreateTodoTaskResponseBody& setBizTag(string bizTag) { DARABONBA_PTR_SET_VALUE(bizTag_, bizTag) };


    // contentFieldList Field Functions 
    bool hasContentFieldList() const { return this->contentFieldList_ != nullptr;};
    void deleteContentFieldList() { this->contentFieldList_ = nullptr;};
    inline const vector<CreateTodoTaskResponseBodyContentFieldList> & contentFieldList() const { DARABONBA_PTR_GET_CONST(contentFieldList_, vector<CreateTodoTaskResponseBodyContentFieldList>) };
    inline vector<CreateTodoTaskResponseBodyContentFieldList> contentFieldList() { DARABONBA_PTR_GET(contentFieldList_, vector<CreateTodoTaskResponseBodyContentFieldList>) };
    inline CreateTodoTaskResponseBody& setContentFieldList(const vector<CreateTodoTaskResponseBodyContentFieldList> & contentFieldList) { DARABONBA_PTR_SET_VALUE(contentFieldList_, contentFieldList) };
    inline CreateTodoTaskResponseBody& setContentFieldList(vector<CreateTodoTaskResponseBodyContentFieldList> && contentFieldList) { DARABONBA_PTR_SET_RVALUE(contentFieldList_, contentFieldList) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline CreateTodoTaskResponseBody& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline CreateTodoTaskResponseBody& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTodoTaskResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detailUrl Field Functions 
    bool hasDetailUrl() const { return this->detailUrl_ != nullptr;};
    void deleteDetailUrl() { this->detailUrl_ = nullptr;};
    inline const CreateTodoTaskResponseBodyDetailUrl & detailUrl() const { DARABONBA_PTR_GET_CONST(detailUrl_, CreateTodoTaskResponseBodyDetailUrl) };
    inline CreateTodoTaskResponseBodyDetailUrl detailUrl() { DARABONBA_PTR_GET(detailUrl_, CreateTodoTaskResponseBodyDetailUrl) };
    inline CreateTodoTaskResponseBody& setDetailUrl(const CreateTodoTaskResponseBodyDetailUrl & detailUrl) { DARABONBA_PTR_SET_VALUE(detailUrl_, detailUrl) };
    inline CreateTodoTaskResponseBody& setDetailUrl(CreateTodoTaskResponseBodyDetailUrl && detailUrl) { DARABONBA_PTR_SET_RVALUE(detailUrl_, detailUrl) };


    // done Field Functions 
    bool hasDone() const { return this->done_ != nullptr;};
    void deleteDone() { this->done_ = nullptr;};
    inline bool done() const { DARABONBA_PTR_GET_DEFAULT(done_, false) };
    inline CreateTodoTaskResponseBody& setDone(bool done) { DARABONBA_PTR_SET_VALUE(done_, done) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline int64_t dueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
    inline CreateTodoTaskResponseBody& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // executorIds Field Functions 
    bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
    void deleteExecutorIds() { this->executorIds_ = nullptr;};
    inline const vector<string> & executorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
    inline vector<string> executorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
    inline CreateTodoTaskResponseBody& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
    inline CreateTodoTaskResponseBody& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline CreateTodoTaskResponseBody& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateTodoTaskResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isOnlyShowExecutor Field Functions 
    bool hasIsOnlyShowExecutor() const { return this->isOnlyShowExecutor_ != nullptr;};
    void deleteIsOnlyShowExecutor() { this->isOnlyShowExecutor_ = nullptr;};
    inline bool isOnlyShowExecutor() const { DARABONBA_PTR_GET_DEFAULT(isOnlyShowExecutor_, false) };
    inline CreateTodoTaskResponseBody& setIsOnlyShowExecutor(bool isOnlyShowExecutor) { DARABONBA_PTR_SET_VALUE(isOnlyShowExecutor_, isOnlyShowExecutor) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline CreateTodoTaskResponseBody& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // modifierId Field Functions 
    bool hasModifierId() const { return this->modifierId_ != nullptr;};
    void deleteModifierId() { this->modifierId_ = nullptr;};
    inline string modifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
    inline CreateTodoTaskResponseBody& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


    // notifyConfigs Field Functions 
    bool hasNotifyConfigs() const { return this->notifyConfigs_ != nullptr;};
    void deleteNotifyConfigs() { this->notifyConfigs_ = nullptr;};
    inline const CreateTodoTaskResponseBodyNotifyConfigs & notifyConfigs() const { DARABONBA_PTR_GET_CONST(notifyConfigs_, CreateTodoTaskResponseBodyNotifyConfigs) };
    inline CreateTodoTaskResponseBodyNotifyConfigs notifyConfigs() { DARABONBA_PTR_GET(notifyConfigs_, CreateTodoTaskResponseBodyNotifyConfigs) };
    inline CreateTodoTaskResponseBody& setNotifyConfigs(const CreateTodoTaskResponseBodyNotifyConfigs & notifyConfigs) { DARABONBA_PTR_SET_VALUE(notifyConfigs_, notifyConfigs) };
    inline CreateTodoTaskResponseBody& setNotifyConfigs(CreateTodoTaskResponseBodyNotifyConfigs && notifyConfigs) { DARABONBA_PTR_SET_RVALUE(notifyConfigs_, notifyConfigs) };


    // participantIds Field Functions 
    bool hasParticipantIds() const { return this->participantIds_ != nullptr;};
    void deleteParticipantIds() { this->participantIds_ = nullptr;};
    inline const vector<string> & participantIds() const { DARABONBA_PTR_GET_CONST(participantIds_, vector<string>) };
    inline vector<string> participantIds() { DARABONBA_PTR_GET(participantIds_, vector<string>) };
    inline CreateTodoTaskResponseBody& setParticipantIds(const vector<string> & participantIds) { DARABONBA_PTR_SET_VALUE(participantIds_, participantIds) };
    inline CreateTodoTaskResponseBody& setParticipantIds(vector<string> && participantIds) { DARABONBA_PTR_SET_RVALUE(participantIds_, participantIds) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateTodoTaskResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTodoTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateTodoTaskResponseBody& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateTodoTaskResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateTodoTaskResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CreateTodoTaskResponseBody& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


  protected:
    std::shared_ptr<string> bizTag_ = nullptr;
    std::shared_ptr<vector<CreateTodoTaskResponseBodyContentFieldList>> contentFieldList_ = nullptr;
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<CreateTodoTaskResponseBodyDetailUrl> detailUrl_ = nullptr;
    std::shared_ptr<bool> done_ = nullptr;
    std::shared_ptr<int64_t> dueTime_ = nullptr;
    std::shared_ptr<vector<string>> executorIds_ = nullptr;
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isOnlyShowExecutor_ = nullptr;
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    std::shared_ptr<string> modifierId_ = nullptr;
    std::shared_ptr<CreateTodoTaskResponseBodyNotifyConfigs> notifyConfigs_ = nullptr;
    std::shared_ptr<vector<string>> participantIds_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourceId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> subject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
