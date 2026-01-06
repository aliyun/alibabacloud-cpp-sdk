// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class NotifyConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NotifyConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(dingNotify, dingNotify_);
      };
      friend void from_json(const Darabonba::Json& j, NotifyConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(dingNotify, dingNotify_);
      };
      NotifyConfigs() = default ;
      NotifyConfigs(const NotifyConfigs &) = default ;
      NotifyConfigs(NotifyConfigs &&) = default ;
      NotifyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NotifyConfigs() = default ;
      NotifyConfigs& operator=(const NotifyConfigs &) = default ;
      NotifyConfigs& operator=(NotifyConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dingNotify_ == nullptr; };
      // dingNotify Field Functions 
      bool hasDingNotify() const { return this->dingNotify_ != nullptr;};
      void deleteDingNotify() { this->dingNotify_ = nullptr;};
      inline string getDingNotify() const { DARABONBA_PTR_GET_DEFAULT(dingNotify_, "") };
      inline NotifyConfigs& setDingNotify(string dingNotify) { DARABONBA_PTR_SET_VALUE(dingNotify_, dingNotify) };


    protected:
      shared_ptr<string> dingNotify_ {};
    };

    class DetailUrl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetailUrl& obj) { 
        DARABONBA_PTR_TO_JSON(appUrl, appUrl_);
        DARABONBA_PTR_TO_JSON(pcUrl, pcUrl_);
      };
      friend void from_json(const Darabonba::Json& j, DetailUrl& obj) { 
        DARABONBA_PTR_FROM_JSON(appUrl, appUrl_);
        DARABONBA_PTR_FROM_JSON(pcUrl, pcUrl_);
      };
      DetailUrl() = default ;
      DetailUrl(const DetailUrl &) = default ;
      DetailUrl(DetailUrl &&) = default ;
      DetailUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetailUrl() = default ;
      DetailUrl& operator=(const DetailUrl &) = default ;
      DetailUrl& operator=(DetailUrl &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appUrl_ == nullptr
        && this->pcUrl_ == nullptr; };
      // appUrl Field Functions 
      bool hasAppUrl() const { return this->appUrl_ != nullptr;};
      void deleteAppUrl() { this->appUrl_ = nullptr;};
      inline string getAppUrl() const { DARABONBA_PTR_GET_DEFAULT(appUrl_, "") };
      inline DetailUrl& setAppUrl(string appUrl) { DARABONBA_PTR_SET_VALUE(appUrl_, appUrl) };


      // pcUrl Field Functions 
      bool hasPcUrl() const { return this->pcUrl_ != nullptr;};
      void deletePcUrl() { this->pcUrl_ = nullptr;};
      inline string getPcUrl() const { DARABONBA_PTR_GET_DEFAULT(pcUrl_, "") };
      inline DetailUrl& setPcUrl(string pcUrl) { DARABONBA_PTR_SET_VALUE(pcUrl_, pcUrl) };


    protected:
      shared_ptr<string> appUrl_ {};
      shared_ptr<string> pcUrl_ {};
    };

    class ContentFieldList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContentFieldList& obj) { 
        DARABONBA_PTR_TO_JSON(fieldKey, fieldKey_);
        DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
      };
      friend void from_json(const Darabonba::Json& j, ContentFieldList& obj) { 
        DARABONBA_PTR_FROM_JSON(fieldKey, fieldKey_);
        DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
      };
      ContentFieldList() = default ;
      ContentFieldList(const ContentFieldList &) = default ;
      ContentFieldList(ContentFieldList &&) = default ;
      ContentFieldList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContentFieldList() = default ;
      ContentFieldList& operator=(const ContentFieldList &) = default ;
      ContentFieldList& operator=(ContentFieldList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fieldKey_ == nullptr
        && this->fieldValue_ == nullptr; };
      // fieldKey Field Functions 
      bool hasFieldKey() const { return this->fieldKey_ != nullptr;};
      void deleteFieldKey() { this->fieldKey_ = nullptr;};
      inline string getFieldKey() const { DARABONBA_PTR_GET_DEFAULT(fieldKey_, "") };
      inline ContentFieldList& setFieldKey(string fieldKey) { DARABONBA_PTR_SET_VALUE(fieldKey_, fieldKey) };


      // fieldValue Field Functions 
      bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
      void deleteFieldValue() { this->fieldValue_ = nullptr;};
      inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
      inline ContentFieldList& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    protected:
      // fieldKey
      shared_ptr<string> fieldKey_ {};
      // fieldValue
      shared_ptr<string> fieldValue_ {};
    };

    virtual bool empty() const override { return this->bizTag_ == nullptr
        && this->contentFieldList_ == nullptr && this->createdTime_ == nullptr && this->creatorId_ == nullptr && this->description_ == nullptr && this->detailUrl_ == nullptr
        && this->done_ == nullptr && this->dueTime_ == nullptr && this->executorIds_ == nullptr && this->finishTime_ == nullptr && this->id_ == nullptr
        && this->isOnlyShowExecutor_ == nullptr && this->modifiedTime_ == nullptr && this->modifierId_ == nullptr && this->notifyConfigs_ == nullptr && this->participantIds_ == nullptr
        && this->priority_ == nullptr && this->requestId_ == nullptr && this->source_ == nullptr && this->sourceId_ == nullptr && this->startTime_ == nullptr
        && this->subject_ == nullptr; };
    // bizTag Field Functions 
    bool hasBizTag() const { return this->bizTag_ != nullptr;};
    void deleteBizTag() { this->bizTag_ = nullptr;};
    inline string getBizTag() const { DARABONBA_PTR_GET_DEFAULT(bizTag_, "") };
    inline CreateTodoTaskResponseBody& setBizTag(string bizTag) { DARABONBA_PTR_SET_VALUE(bizTag_, bizTag) };


    // contentFieldList Field Functions 
    bool hasContentFieldList() const { return this->contentFieldList_ != nullptr;};
    void deleteContentFieldList() { this->contentFieldList_ = nullptr;};
    inline const vector<CreateTodoTaskResponseBody::ContentFieldList> & getContentFieldList() const { DARABONBA_PTR_GET_CONST(contentFieldList_, vector<CreateTodoTaskResponseBody::ContentFieldList>) };
    inline vector<CreateTodoTaskResponseBody::ContentFieldList> getContentFieldList() { DARABONBA_PTR_GET(contentFieldList_, vector<CreateTodoTaskResponseBody::ContentFieldList>) };
    inline CreateTodoTaskResponseBody& setContentFieldList(const vector<CreateTodoTaskResponseBody::ContentFieldList> & contentFieldList) { DARABONBA_PTR_SET_VALUE(contentFieldList_, contentFieldList) };
    inline CreateTodoTaskResponseBody& setContentFieldList(vector<CreateTodoTaskResponseBody::ContentFieldList> && contentFieldList) { DARABONBA_PTR_SET_RVALUE(contentFieldList_, contentFieldList) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline CreateTodoTaskResponseBody& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline CreateTodoTaskResponseBody& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTodoTaskResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detailUrl Field Functions 
    bool hasDetailUrl() const { return this->detailUrl_ != nullptr;};
    void deleteDetailUrl() { this->detailUrl_ = nullptr;};
    inline const CreateTodoTaskResponseBody::DetailUrl & getDetailUrl() const { DARABONBA_PTR_GET_CONST(detailUrl_, CreateTodoTaskResponseBody::DetailUrl) };
    inline CreateTodoTaskResponseBody::DetailUrl getDetailUrl() { DARABONBA_PTR_GET(detailUrl_, CreateTodoTaskResponseBody::DetailUrl) };
    inline CreateTodoTaskResponseBody& setDetailUrl(const CreateTodoTaskResponseBody::DetailUrl & detailUrl) { DARABONBA_PTR_SET_VALUE(detailUrl_, detailUrl) };
    inline CreateTodoTaskResponseBody& setDetailUrl(CreateTodoTaskResponseBody::DetailUrl && detailUrl) { DARABONBA_PTR_SET_RVALUE(detailUrl_, detailUrl) };


    // done Field Functions 
    bool hasDone() const { return this->done_ != nullptr;};
    void deleteDone() { this->done_ = nullptr;};
    inline bool getDone() const { DARABONBA_PTR_GET_DEFAULT(done_, false) };
    inline CreateTodoTaskResponseBody& setDone(bool done) { DARABONBA_PTR_SET_VALUE(done_, done) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline int64_t getDueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
    inline CreateTodoTaskResponseBody& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // executorIds Field Functions 
    bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
    void deleteExecutorIds() { this->executorIds_ = nullptr;};
    inline const vector<string> & getExecutorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
    inline vector<string> getExecutorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
    inline CreateTodoTaskResponseBody& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
    inline CreateTodoTaskResponseBody& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline CreateTodoTaskResponseBody& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateTodoTaskResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isOnlyShowExecutor Field Functions 
    bool hasIsOnlyShowExecutor() const { return this->isOnlyShowExecutor_ != nullptr;};
    void deleteIsOnlyShowExecutor() { this->isOnlyShowExecutor_ = nullptr;};
    inline bool getIsOnlyShowExecutor() const { DARABONBA_PTR_GET_DEFAULT(isOnlyShowExecutor_, false) };
    inline CreateTodoTaskResponseBody& setIsOnlyShowExecutor(bool isOnlyShowExecutor) { DARABONBA_PTR_SET_VALUE(isOnlyShowExecutor_, isOnlyShowExecutor) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline CreateTodoTaskResponseBody& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // modifierId Field Functions 
    bool hasModifierId() const { return this->modifierId_ != nullptr;};
    void deleteModifierId() { this->modifierId_ = nullptr;};
    inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
    inline CreateTodoTaskResponseBody& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


    // notifyConfigs Field Functions 
    bool hasNotifyConfigs() const { return this->notifyConfigs_ != nullptr;};
    void deleteNotifyConfigs() { this->notifyConfigs_ = nullptr;};
    inline const CreateTodoTaskResponseBody::NotifyConfigs & getNotifyConfigs() const { DARABONBA_PTR_GET_CONST(notifyConfigs_, CreateTodoTaskResponseBody::NotifyConfigs) };
    inline CreateTodoTaskResponseBody::NotifyConfigs getNotifyConfigs() { DARABONBA_PTR_GET(notifyConfigs_, CreateTodoTaskResponseBody::NotifyConfigs) };
    inline CreateTodoTaskResponseBody& setNotifyConfigs(const CreateTodoTaskResponseBody::NotifyConfigs & notifyConfigs) { DARABONBA_PTR_SET_VALUE(notifyConfigs_, notifyConfigs) };
    inline CreateTodoTaskResponseBody& setNotifyConfigs(CreateTodoTaskResponseBody::NotifyConfigs && notifyConfigs) { DARABONBA_PTR_SET_RVALUE(notifyConfigs_, notifyConfigs) };


    // participantIds Field Functions 
    bool hasParticipantIds() const { return this->participantIds_ != nullptr;};
    void deleteParticipantIds() { this->participantIds_ = nullptr;};
    inline const vector<string> & getParticipantIds() const { DARABONBA_PTR_GET_CONST(participantIds_, vector<string>) };
    inline vector<string> getParticipantIds() { DARABONBA_PTR_GET(participantIds_, vector<string>) };
    inline CreateTodoTaskResponseBody& setParticipantIds(const vector<string> & participantIds) { DARABONBA_PTR_SET_VALUE(participantIds_, participantIds) };
    inline CreateTodoTaskResponseBody& setParticipantIds(vector<string> && participantIds) { DARABONBA_PTR_SET_RVALUE(participantIds_, participantIds) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateTodoTaskResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTodoTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateTodoTaskResponseBody& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateTodoTaskResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateTodoTaskResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CreateTodoTaskResponseBody& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


  protected:
    shared_ptr<string> bizTag_ {};
    shared_ptr<vector<CreateTodoTaskResponseBody::ContentFieldList>> contentFieldList_ {};
    shared_ptr<int64_t> createdTime_ {};
    shared_ptr<string> creatorId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<CreateTodoTaskResponseBody::DetailUrl> detailUrl_ {};
    shared_ptr<bool> done_ {};
    shared_ptr<int64_t> dueTime_ {};
    shared_ptr<vector<string>> executorIds_ {};
    shared_ptr<int64_t> finishTime_ {};
    shared_ptr<string> id_ {};
    shared_ptr<bool> isOnlyShowExecutor_ {};
    shared_ptr<int64_t> modifiedTime_ {};
    shared_ptr<string> modifierId_ {};
    shared_ptr<CreateTodoTaskResponseBody::NotifyConfigs> notifyConfigs_ {};
    shared_ptr<vector<string>> participantIds_ {};
    shared_ptr<int32_t> priority_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> sourceId_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> subject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
