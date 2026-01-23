// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTCENTERRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTCENTERRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListEventCenterRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventCenterRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventCenterRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEventCenterRecordResponseBody() = default ;
    ListEventCenterRecordResponseBody(const ListEventCenterRecordResponseBody &) = default ;
    ListEventCenterRecordResponseBody(ListEventCenterRecordResponseBody &&) = default ;
    ListEventCenterRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventCenterRecordResponseBody() = default ;
    ListEventCenterRecordResponseBody& operator=(const ListEventCenterRecordResponseBody &) = default ;
    ListEventCenterRecordResponseBody& operator=(ListEventCenterRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EventChannel, eventChannel_);
        DARABONBA_PTR_TO_JSON(EventNotifyId, eventNotifyId_);
        DARABONBA_PTR_TO_JSON(EventNotifyMethod, eventNotifyMethod_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(RecordId, recordId_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EventChannel, eventChannel_);
        DARABONBA_PTR_FROM_JSON(EventNotifyId, eventNotifyId_);
        DARABONBA_PTR_FROM_JSON(EventNotifyMethod, eventNotifyMethod_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->eventChannel_ == nullptr && this->eventNotifyId_ == nullptr && this->eventNotifyMethod_ == nullptr && this->eventType_ == nullptr && this->instanceId_ == nullptr
        && this->namespace_ == nullptr && this->recordId_ == nullptr && this->repoName_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr
        && this->tag_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Records& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // eventChannel Field Functions 
      bool hasEventChannel() const { return this->eventChannel_ != nullptr;};
      void deleteEventChannel() { this->eventChannel_ = nullptr;};
      inline string getEventChannel() const { DARABONBA_PTR_GET_DEFAULT(eventChannel_, "") };
      inline Records& setEventChannel(string eventChannel) { DARABONBA_PTR_SET_VALUE(eventChannel_, eventChannel) };


      // eventNotifyId Field Functions 
      bool hasEventNotifyId() const { return this->eventNotifyId_ != nullptr;};
      void deleteEventNotifyId() { this->eventNotifyId_ = nullptr;};
      inline string getEventNotifyId() const { DARABONBA_PTR_GET_DEFAULT(eventNotifyId_, "") };
      inline Records& setEventNotifyId(string eventNotifyId) { DARABONBA_PTR_SET_VALUE(eventNotifyId_, eventNotifyId) };


      // eventNotifyMethod Field Functions 
      bool hasEventNotifyMethod() const { return this->eventNotifyMethod_ != nullptr;};
      void deleteEventNotifyMethod() { this->eventNotifyMethod_ = nullptr;};
      inline string getEventNotifyMethod() const { DARABONBA_PTR_GET_DEFAULT(eventNotifyMethod_, "") };
      inline Records& setEventNotifyMethod(string eventNotifyMethod) { DARABONBA_PTR_SET_VALUE(eventNotifyMethod_, eventNotifyMethod) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Records& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Records& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Records& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
      inline Records& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline Records& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Records& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Records& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Records& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Records& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the event was created.
      shared_ptr<int64_t> createTime_ {};
      // The event notification channel.
      shared_ptr<string> eventChannel_ {};
      // The ID of the event notification.
      shared_ptr<string> eventNotifyId_ {};
      // The notification method. Valid values:
      // 
      // *   `http`: The notification is sent over HTTP.
      // *   `https`: The notification is sent over HTTPS.
      // *   `dingding`: The notification is sent by using DingTalk.
      shared_ptr<string> eventNotifyMethod_ {};
      // The type of the event.
      shared_ptr<string> eventType_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The ID of the event record.
      shared_ptr<string> recordId_ {};
      // The name of the image repository.
      shared_ptr<string> repoName_ {};
      // The ID of the event notification rule.
      shared_ptr<string> ruleId_ {};
      // The name of the event notification rule.
      shared_ptr<string> ruleName_ {};
      // The tags.
      shared_ptr<string> tag_ {};
      // The time when the event was last updated.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->records_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListEventCenterRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListEventCenterRecordResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListEventCenterRecordResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEventCenterRecordResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<ListEventCenterRecordResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<ListEventCenterRecordResponseBody::Records>) };
    inline vector<ListEventCenterRecordResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<ListEventCenterRecordResponseBody::Records>) };
    inline ListEventCenterRecordResponseBody& setRecords(const vector<ListEventCenterRecordResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ListEventCenterRecordResponseBody& setRecords(vector<ListEventCenterRecordResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventCenterRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEventCenterRecordResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The list of historical events.
    shared_ptr<vector<ListEventCenterRecordResponseBody::Records>> records_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total entries of historical events.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
