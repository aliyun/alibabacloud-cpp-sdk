// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYEVENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYEVENTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceHistoryEventsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceHistoryEventsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(eventCreateEndTime, eventCreateEndTime_);
      DARABONBA_PTR_TO_JSON(eventCreateStartTime, eventCreateStartTime_);
      DARABONBA_PTR_TO_JSON(eventCycleStatus, eventCycleStatusShrink_);
      DARABONBA_PTR_TO_JSON(eventExecuteEndTime, eventExecuteEndTime_);
      DARABONBA_PTR_TO_JSON(eventExecuteStartTime, eventExecuteStartTime_);
      DARABONBA_PTR_TO_JSON(eventFinashEndTime, eventFinashEndTime_);
      DARABONBA_PTR_TO_JSON(eventFinashStartTime, eventFinashStartTime_);
      DARABONBA_PTR_TO_JSON(eventLevel, eventLevelShrink_);
      DARABONBA_PTR_TO_JSON(eventType, eventTypeShrink_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(nodeIP, nodeIP_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceHistoryEventsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(eventCreateEndTime, eventCreateEndTime_);
      DARABONBA_PTR_FROM_JSON(eventCreateStartTime, eventCreateStartTime_);
      DARABONBA_PTR_FROM_JSON(eventCycleStatus, eventCycleStatusShrink_);
      DARABONBA_PTR_FROM_JSON(eventExecuteEndTime, eventExecuteEndTime_);
      DARABONBA_PTR_FROM_JSON(eventExecuteStartTime, eventExecuteStartTime_);
      DARABONBA_PTR_FROM_JSON(eventFinashEndTime, eventFinashEndTime_);
      DARABONBA_PTR_FROM_JSON(eventFinashStartTime, eventFinashStartTime_);
      DARABONBA_PTR_FROM_JSON(eventLevel, eventLevelShrink_);
      DARABONBA_PTR_FROM_JSON(eventType, eventTypeShrink_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(nodeIP, nodeIP_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    ListInstanceHistoryEventsShrinkRequest() = default ;
    ListInstanceHistoryEventsShrinkRequest(const ListInstanceHistoryEventsShrinkRequest &) = default ;
    ListInstanceHistoryEventsShrinkRequest(ListInstanceHistoryEventsShrinkRequest &&) = default ;
    ListInstanceHistoryEventsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceHistoryEventsShrinkRequest() = default ;
    ListInstanceHistoryEventsShrinkRequest& operator=(const ListInstanceHistoryEventsShrinkRequest &) = default ;
    ListInstanceHistoryEventsShrinkRequest& operator=(ListInstanceHistoryEventsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(desc, desc_);
        DARABONBA_PTR_TO_JSON(sortField, sortField_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(desc, desc_);
        DARABONBA_PTR_FROM_JSON(sortField, sortField_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desc_ == nullptr
        && this->sortField_ == nullptr; };
      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline bool getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, false) };
      inline Body& setDesc(bool desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // sortField Field Functions 
      bool hasSortField() const { return this->sortField_ != nullptr;};
      void deleteSortField() { this->sortField_ = nullptr;};
      inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
      inline Body& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    protected:
      shared_ptr<bool> desc_ {};
      shared_ptr<string> sortField_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->eventCreateEndTime_ == nullptr && this->eventCreateStartTime_ == nullptr && this->eventCycleStatusShrink_ == nullptr && this->eventExecuteEndTime_ == nullptr && this->eventExecuteStartTime_ == nullptr
        && this->eventFinashEndTime_ == nullptr && this->eventFinashStartTime_ == nullptr && this->eventLevelShrink_ == nullptr && this->eventTypeShrink_ == nullptr && this->instanceId_ == nullptr
        && this->nodeIP_ == nullptr && this->page_ == nullptr && this->size_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<ListInstanceHistoryEventsShrinkRequest::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<ListInstanceHistoryEventsShrinkRequest::Body>) };
    inline vector<ListInstanceHistoryEventsShrinkRequest::Body> getBody() { DARABONBA_PTR_GET(body_, vector<ListInstanceHistoryEventsShrinkRequest::Body>) };
    inline ListInstanceHistoryEventsShrinkRequest& setBody(const vector<ListInstanceHistoryEventsShrinkRequest::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListInstanceHistoryEventsShrinkRequest& setBody(vector<ListInstanceHistoryEventsShrinkRequest::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // eventCreateEndTime Field Functions 
    bool hasEventCreateEndTime() const { return this->eventCreateEndTime_ != nullptr;};
    void deleteEventCreateEndTime() { this->eventCreateEndTime_ = nullptr;};
    inline string getEventCreateEndTime() const { DARABONBA_PTR_GET_DEFAULT(eventCreateEndTime_, "") };
    inline ListInstanceHistoryEventsShrinkRequest& setEventCreateEndTime(string eventCreateEndTime) { DARABONBA_PTR_SET_VALUE(eventCreateEndTime_, eventCreateEndTime) };


    // eventCreateStartTime Field Functions 
    bool hasEventCreateStartTime() const { return this->eventCreateStartTime_ != nullptr;};
    void deleteEventCreateStartTime() { this->eventCreateStartTime_ = nullptr;};
    inline string getEventCreateStartTime() const { DARABONBA_PTR_GET_DEFAULT(eventCreateStartTime_, "") };
    inline ListInstanceHistoryEventsShrinkRequest& setEventCreateStartTime(string eventCreateStartTime) { DARABONBA_PTR_SET_VALUE(eventCreateStartTime_, eventCreateStartTime) };


    // eventCycleStatusShrink Field Functions 
    bool hasEventCycleStatusShrink() const { return this->eventCycleStatusShrink_ != nullptr;};
    void deleteEventCycleStatusShrink() { this->eventCycleStatusShrink_ = nullptr;};
    inline string getEventCycleStatusShrink() const { DARABONBA_PTR_GET_DEFAULT(eventCycleStatusShrink_, "") };
    inline ListInstanceHistoryEventsShrinkRequest& setEventCycleStatusShrink(string eventCycleStatusShrink) { DARABONBA_PTR_SET_VALUE(eventCycleStatusShrink_, eventCycleStatusShrink) };


    // eventExecuteEndTime Field Functions 
    bool hasEventExecuteEndTime() const { return this->eventExecuteEndTime_ != nullptr;};
    void deleteEventExecuteEndTime() { this->eventExecuteEndTime_ = nullptr;};
    inline string getEventExecuteEndTime() const { DARABONBA_PTR_GET_DEFAULT(eventExecuteEndTime_, "") };
    inline ListInstanceHistoryEventsShrinkRequest& setEventExecuteEndTime(string eventExecuteEndTime) { DARABONBA_PTR_SET_VALUE(eventExecuteEndTime_, eventExecuteEndTime) };


    // eventExecuteStartTime Field Functions 
    bool hasEventExecuteStartTime() const { return this->eventExecuteStartTime_ != nullptr;};
    void deleteEventExecuteStartTime() { this->eventExecuteStartTime_ = nullptr;};
    inline string getEventExecuteStartTime() const { DARABONBA_PTR_GET_DEFAULT(eventExecuteStartTime_, "") };
    inline ListInstanceHistoryEventsShrinkRequest& setEventExecuteStartTime(string eventExecuteStartTime) { DARABONBA_PTR_SET_VALUE(eventExecuteStartTime_, eventExecuteStartTime) };


    // eventFinashEndTime Field Functions 
    bool hasEventFinashEndTime() const { return this->eventFinashEndTime_ != nullptr;};
    void deleteEventFinashEndTime() { this->eventFinashEndTime_ = nullptr;};
    inline string getEventFinashEndTime() const { DARABONBA_PTR_GET_DEFAULT(eventFinashEndTime_, "") };
    inline ListInstanceHistoryEventsShrinkRequest& setEventFinashEndTime(string eventFinashEndTime) { DARABONBA_PTR_SET_VALUE(eventFinashEndTime_, eventFinashEndTime) };


    // eventFinashStartTime Field Functions 
    bool hasEventFinashStartTime() const { return this->eventFinashStartTime_ != nullptr;};
    void deleteEventFinashStartTime() { this->eventFinashStartTime_ = nullptr;};
    inline string getEventFinashStartTime() const { DARABONBA_PTR_GET_DEFAULT(eventFinashStartTime_, "") };
    inline ListInstanceHistoryEventsShrinkRequest& setEventFinashStartTime(string eventFinashStartTime) { DARABONBA_PTR_SET_VALUE(eventFinashStartTime_, eventFinashStartTime) };


    // eventLevelShrink Field Functions 
    bool hasEventLevelShrink() const { return this->eventLevelShrink_ != nullptr;};
    void deleteEventLevelShrink() { this->eventLevelShrink_ = nullptr;};
    inline string getEventLevelShrink() const { DARABONBA_PTR_GET_DEFAULT(eventLevelShrink_, "") };
    inline ListInstanceHistoryEventsShrinkRequest& setEventLevelShrink(string eventLevelShrink) { DARABONBA_PTR_SET_VALUE(eventLevelShrink_, eventLevelShrink) };


    // eventTypeShrink Field Functions 
    bool hasEventTypeShrink() const { return this->eventTypeShrink_ != nullptr;};
    void deleteEventTypeShrink() { this->eventTypeShrink_ = nullptr;};
    inline string getEventTypeShrink() const { DARABONBA_PTR_GET_DEFAULT(eventTypeShrink_, "") };
    inline ListInstanceHistoryEventsShrinkRequest& setEventTypeShrink(string eventTypeShrink) { DARABONBA_PTR_SET_VALUE(eventTypeShrink_, eventTypeShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceHistoryEventsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeIP Field Functions 
    bool hasNodeIP() const { return this->nodeIP_ != nullptr;};
    void deleteNodeIP() { this->nodeIP_ = nullptr;};
    inline string getNodeIP() const { DARABONBA_PTR_GET_DEFAULT(nodeIP_, "") };
    inline ListInstanceHistoryEventsShrinkRequest& setNodeIP(string nodeIP) { DARABONBA_PTR_SET_VALUE(nodeIP_, nodeIP) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListInstanceHistoryEventsShrinkRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListInstanceHistoryEventsShrinkRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    shared_ptr<vector<ListInstanceHistoryEventsShrinkRequest::Body>> body_ {};
    shared_ptr<string> eventCreateEndTime_ {};
    shared_ptr<string> eventCreateStartTime_ {};
    shared_ptr<string> eventCycleStatusShrink_ {};
    shared_ptr<string> eventExecuteEndTime_ {};
    shared_ptr<string> eventExecuteStartTime_ {};
    shared_ptr<string> eventFinashEndTime_ {};
    shared_ptr<string> eventFinashStartTime_ {};
    shared_ptr<string> eventLevelShrink_ {};
    shared_ptr<string> eventTypeShrink_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> nodeIP_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
