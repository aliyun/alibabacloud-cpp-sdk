// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYEVENTSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYEVENTSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceHistoryEventsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceHistoryEventsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ecsId, ecsId_);
      DARABONBA_PTR_TO_JSON(eventCreateTime, eventCreateTime_);
      DARABONBA_PTR_TO_JSON(eventCycleStatus, eventCycleStatus_);
      DARABONBA_PTR_TO_JSON(eventExecuteTime, eventExecuteTime_);
      DARABONBA_PTR_TO_JSON(eventFinashTime, eventFinashTime_);
      DARABONBA_PTR_TO_JSON(eventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(eventType, eventType_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(nodeIP, nodeIP_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceHistoryEventsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ecsId, ecsId_);
      DARABONBA_PTR_FROM_JSON(eventCreateTime, eventCreateTime_);
      DARABONBA_PTR_FROM_JSON(eventCycleStatus, eventCycleStatus_);
      DARABONBA_PTR_FROM_JSON(eventExecuteTime, eventExecuteTime_);
      DARABONBA_PTR_FROM_JSON(eventFinashTime, eventFinashTime_);
      DARABONBA_PTR_FROM_JSON(eventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(eventType, eventType_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(nodeIP, nodeIP_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    ListInstanceHistoryEventsResponseBodyResult() = default ;
    ListInstanceHistoryEventsResponseBodyResult(const ListInstanceHistoryEventsResponseBodyResult &) = default ;
    ListInstanceHistoryEventsResponseBodyResult(ListInstanceHistoryEventsResponseBodyResult &&) = default ;
    ListInstanceHistoryEventsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceHistoryEventsResponseBodyResult() = default ;
    ListInstanceHistoryEventsResponseBodyResult& operator=(const ListInstanceHistoryEventsResponseBodyResult &) = default ;
    ListInstanceHistoryEventsResponseBodyResult& operator=(ListInstanceHistoryEventsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ecsId_ != nullptr
        && this->eventCreateTime_ != nullptr && this->eventCycleStatus_ != nullptr && this->eventExecuteTime_ != nullptr && this->eventFinashTime_ != nullptr && this->eventLevel_ != nullptr
        && this->eventType_ != nullptr && this->instanceId_ != nullptr && this->nodeIP_ != nullptr && this->regionId_ != nullptr; };
    // ecsId Field Functions 
    bool hasEcsId() const { return this->ecsId_ != nullptr;};
    void deleteEcsId() { this->ecsId_ = nullptr;};
    inline string ecsId() const { DARABONBA_PTR_GET_DEFAULT(ecsId_, "") };
    inline ListInstanceHistoryEventsResponseBodyResult& setEcsId(string ecsId) { DARABONBA_PTR_SET_VALUE(ecsId_, ecsId) };


    // eventCreateTime Field Functions 
    bool hasEventCreateTime() const { return this->eventCreateTime_ != nullptr;};
    void deleteEventCreateTime() { this->eventCreateTime_ = nullptr;};
    inline string eventCreateTime() const { DARABONBA_PTR_GET_DEFAULT(eventCreateTime_, "") };
    inline ListInstanceHistoryEventsResponseBodyResult& setEventCreateTime(string eventCreateTime) { DARABONBA_PTR_SET_VALUE(eventCreateTime_, eventCreateTime) };


    // eventCycleStatus Field Functions 
    bool hasEventCycleStatus() const { return this->eventCycleStatus_ != nullptr;};
    void deleteEventCycleStatus() { this->eventCycleStatus_ = nullptr;};
    inline string eventCycleStatus() const { DARABONBA_PTR_GET_DEFAULT(eventCycleStatus_, "") };
    inline ListInstanceHistoryEventsResponseBodyResult& setEventCycleStatus(string eventCycleStatus) { DARABONBA_PTR_SET_VALUE(eventCycleStatus_, eventCycleStatus) };


    // eventExecuteTime Field Functions 
    bool hasEventExecuteTime() const { return this->eventExecuteTime_ != nullptr;};
    void deleteEventExecuteTime() { this->eventExecuteTime_ = nullptr;};
    inline string eventExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(eventExecuteTime_, "") };
    inline ListInstanceHistoryEventsResponseBodyResult& setEventExecuteTime(string eventExecuteTime) { DARABONBA_PTR_SET_VALUE(eventExecuteTime_, eventExecuteTime) };


    // eventFinashTime Field Functions 
    bool hasEventFinashTime() const { return this->eventFinashTime_ != nullptr;};
    void deleteEventFinashTime() { this->eventFinashTime_ = nullptr;};
    inline string eventFinashTime() const { DARABONBA_PTR_GET_DEFAULT(eventFinashTime_, "") };
    inline ListInstanceHistoryEventsResponseBodyResult& setEventFinashTime(string eventFinashTime) { DARABONBA_PTR_SET_VALUE(eventFinashTime_, eventFinashTime) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline ListInstanceHistoryEventsResponseBodyResult& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline ListInstanceHistoryEventsResponseBodyResult& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceHistoryEventsResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeIP Field Functions 
    bool hasNodeIP() const { return this->nodeIP_ != nullptr;};
    void deleteNodeIP() { this->nodeIP_ = nullptr;};
    inline string nodeIP() const { DARABONBA_PTR_GET_DEFAULT(nodeIP_, "") };
    inline ListInstanceHistoryEventsResponseBodyResult& setNodeIP(string nodeIP) { DARABONBA_PTR_SET_VALUE(nodeIP_, nodeIP) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstanceHistoryEventsResponseBodyResult& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> ecsId_ = nullptr;
    std::shared_ptr<string> eventCreateTime_ = nullptr;
    std::shared_ptr<string> eventCycleStatus_ = nullptr;
    std::shared_ptr<string> eventExecuteTime_ = nullptr;
    std::shared_ptr<string> eventFinashTime_ = nullptr;
    std::shared_ptr<string> eventLevel_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> nodeIP_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
