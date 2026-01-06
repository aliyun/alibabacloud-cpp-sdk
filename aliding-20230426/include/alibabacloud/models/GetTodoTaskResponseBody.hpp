// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTODOTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTODOTASKRESPONSEBODY_HPP_
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
  class GetTodoTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTodoTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(bizTag, bizTag_);
      DARABONBA_PTR_TO_JSON(cardTypeId, cardTypeId_);
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
      DARABONBA_PTR_TO_JSON(participantIds, participantIds_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(tenantType, tenantType_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTodoTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(bizTag, bizTag_);
      DARABONBA_PTR_FROM_JSON(cardTypeId, cardTypeId_);
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
      DARABONBA_PTR_FROM_JSON(participantIds, participantIds_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(tenantType, tenantType_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetTodoTaskResponseBody() = default ;
    GetTodoTaskResponseBody(const GetTodoTaskResponseBody &) = default ;
    GetTodoTaskResponseBody(GetTodoTaskResponseBody &&) = default ;
    GetTodoTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTodoTaskResponseBody() = default ;
    GetTodoTaskResponseBody& operator=(const GetTodoTaskResponseBody &) = default ;
    GetTodoTaskResponseBody& operator=(GetTodoTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetailUrl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetailUrl& obj) { 
        DARABONBA_PTR_TO_JSON(AppUrl, appUrl_);
        DARABONBA_PTR_TO_JSON(PcUrl, pcUrl_);
      };
      friend void from_json(const Darabonba::Json& j, DetailUrl& obj) { 
        DARABONBA_PTR_FROM_JSON(AppUrl, appUrl_);
        DARABONBA_PTR_FROM_JSON(PcUrl, pcUrl_);
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

    virtual bool empty() const override { return this->bizTag_ == nullptr
        && this->cardTypeId_ == nullptr && this->createdTime_ == nullptr && this->creatorId_ == nullptr && this->description_ == nullptr && this->detailUrl_ == nullptr
        && this->done_ == nullptr && this->dueTime_ == nullptr && this->executorIds_ == nullptr && this->finishTime_ == nullptr && this->id_ == nullptr
        && this->isOnlyShowExecutor_ == nullptr && this->modifiedTime_ == nullptr && this->modifierId_ == nullptr && this->participantIds_ == nullptr && this->priority_ == nullptr
        && this->requestId_ == nullptr && this->source_ == nullptr && this->sourceId_ == nullptr && this->startTime_ == nullptr && this->subject_ == nullptr
        && this->tenantId_ == nullptr && this->tenantType_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // bizTag Field Functions 
    bool hasBizTag() const { return this->bizTag_ != nullptr;};
    void deleteBizTag() { this->bizTag_ = nullptr;};
    inline string getBizTag() const { DARABONBA_PTR_GET_DEFAULT(bizTag_, "") };
    inline GetTodoTaskResponseBody& setBizTag(string bizTag) { DARABONBA_PTR_SET_VALUE(bizTag_, bizTag) };


    // cardTypeId Field Functions 
    bool hasCardTypeId() const { return this->cardTypeId_ != nullptr;};
    void deleteCardTypeId() { this->cardTypeId_ = nullptr;};
    inline string getCardTypeId() const { DARABONBA_PTR_GET_DEFAULT(cardTypeId_, "") };
    inline GetTodoTaskResponseBody& setCardTypeId(string cardTypeId) { DARABONBA_PTR_SET_VALUE(cardTypeId_, cardTypeId) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline GetTodoTaskResponseBody& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetTodoTaskResponseBody& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetTodoTaskResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detailUrl Field Functions 
    bool hasDetailUrl() const { return this->detailUrl_ != nullptr;};
    void deleteDetailUrl() { this->detailUrl_ = nullptr;};
    inline const GetTodoTaskResponseBody::DetailUrl & getDetailUrl() const { DARABONBA_PTR_GET_CONST(detailUrl_, GetTodoTaskResponseBody::DetailUrl) };
    inline GetTodoTaskResponseBody::DetailUrl getDetailUrl() { DARABONBA_PTR_GET(detailUrl_, GetTodoTaskResponseBody::DetailUrl) };
    inline GetTodoTaskResponseBody& setDetailUrl(const GetTodoTaskResponseBody::DetailUrl & detailUrl) { DARABONBA_PTR_SET_VALUE(detailUrl_, detailUrl) };
    inline GetTodoTaskResponseBody& setDetailUrl(GetTodoTaskResponseBody::DetailUrl && detailUrl) { DARABONBA_PTR_SET_RVALUE(detailUrl_, detailUrl) };


    // done Field Functions 
    bool hasDone() const { return this->done_ != nullptr;};
    void deleteDone() { this->done_ = nullptr;};
    inline bool getDone() const { DARABONBA_PTR_GET_DEFAULT(done_, false) };
    inline GetTodoTaskResponseBody& setDone(bool done) { DARABONBA_PTR_SET_VALUE(done_, done) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline int64_t getDueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
    inline GetTodoTaskResponseBody& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // executorIds Field Functions 
    bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
    void deleteExecutorIds() { this->executorIds_ = nullptr;};
    inline const vector<string> & getExecutorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
    inline vector<string> getExecutorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
    inline GetTodoTaskResponseBody& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
    inline GetTodoTaskResponseBody& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline GetTodoTaskResponseBody& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetTodoTaskResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isOnlyShowExecutor Field Functions 
    bool hasIsOnlyShowExecutor() const { return this->isOnlyShowExecutor_ != nullptr;};
    void deleteIsOnlyShowExecutor() { this->isOnlyShowExecutor_ = nullptr;};
    inline bool getIsOnlyShowExecutor() const { DARABONBA_PTR_GET_DEFAULT(isOnlyShowExecutor_, false) };
    inline GetTodoTaskResponseBody& setIsOnlyShowExecutor(bool isOnlyShowExecutor) { DARABONBA_PTR_SET_VALUE(isOnlyShowExecutor_, isOnlyShowExecutor) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline GetTodoTaskResponseBody& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // modifierId Field Functions 
    bool hasModifierId() const { return this->modifierId_ != nullptr;};
    void deleteModifierId() { this->modifierId_ = nullptr;};
    inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
    inline GetTodoTaskResponseBody& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


    // participantIds Field Functions 
    bool hasParticipantIds() const { return this->participantIds_ != nullptr;};
    void deleteParticipantIds() { this->participantIds_ = nullptr;};
    inline const vector<string> & getParticipantIds() const { DARABONBA_PTR_GET_CONST(participantIds_, vector<string>) };
    inline vector<string> getParticipantIds() { DARABONBA_PTR_GET(participantIds_, vector<string>) };
    inline GetTodoTaskResponseBody& setParticipantIds(const vector<string> & participantIds) { DARABONBA_PTR_SET_VALUE(participantIds_, participantIds) };
    inline GetTodoTaskResponseBody& setParticipantIds(vector<string> && participantIds) { DARABONBA_PTR_SET_RVALUE(participantIds_, participantIds) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetTodoTaskResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTodoTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetTodoTaskResponseBody& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline GetTodoTaskResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetTodoTaskResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline GetTodoTaskResponseBody& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetTodoTaskResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // tenantType Field Functions 
    bool hasTenantType() const { return this->tenantType_ != nullptr;};
    void deleteTenantType() { this->tenantType_ = nullptr;};
    inline string getTenantType() const { DARABONBA_PTR_GET_DEFAULT(tenantType_, "") };
    inline GetTodoTaskResponseBody& setTenantType(string tenantType) { DARABONBA_PTR_SET_VALUE(tenantType_, tenantType) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetTodoTaskResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetTodoTaskResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> bizTag_ {};
    shared_ptr<string> cardTypeId_ {};
    shared_ptr<int64_t> createdTime_ {};
    shared_ptr<string> creatorId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<GetTodoTaskResponseBody::DetailUrl> detailUrl_ {};
    shared_ptr<bool> done_ {};
    shared_ptr<int64_t> dueTime_ {};
    shared_ptr<vector<string>> executorIds_ {};
    shared_ptr<int64_t> finishTime_ {};
    shared_ptr<string> id_ {};
    shared_ptr<bool> isOnlyShowExecutor_ {};
    shared_ptr<int64_t> modifiedTime_ {};
    shared_ptr<string> modifierId_ {};
    shared_ptr<vector<string>> participantIds_ {};
    shared_ptr<int32_t> priority_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> sourceId_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> subject_ {};
    shared_ptr<string> tenantId_ {};
    shared_ptr<string> tenantType_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
