// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEHISTORYEVENTSRESPONSEBODY_HPP_
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
  class ListInstanceHistoryEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceHistoryEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceHistoryEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListInstanceHistoryEventsResponseBody() = default ;
    ListInstanceHistoryEventsResponseBody(const ListInstanceHistoryEventsResponseBody &) = default ;
    ListInstanceHistoryEventsResponseBody(ListInstanceHistoryEventsResponseBody &&) = default ;
    ListInstanceHistoryEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceHistoryEventsResponseBody() = default ;
    ListInstanceHistoryEventsResponseBody& operator=(const ListInstanceHistoryEventsResponseBody &) = default ;
    ListInstanceHistoryEventsResponseBody& operator=(ListInstanceHistoryEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ecsId_ == nullptr
        && this->eventCreateTime_ == nullptr && this->eventCycleStatus_ == nullptr && this->eventExecuteTime_ == nullptr && this->eventFinashTime_ == nullptr && this->eventLevel_ == nullptr
        && this->eventType_ == nullptr && this->instanceId_ == nullptr && this->nodeIP_ == nullptr && this->regionId_ == nullptr; };
      // ecsId Field Functions 
      bool hasEcsId() const { return this->ecsId_ != nullptr;};
      void deleteEcsId() { this->ecsId_ = nullptr;};
      inline string getEcsId() const { DARABONBA_PTR_GET_DEFAULT(ecsId_, "") };
      inline Result& setEcsId(string ecsId) { DARABONBA_PTR_SET_VALUE(ecsId_, ecsId) };


      // eventCreateTime Field Functions 
      bool hasEventCreateTime() const { return this->eventCreateTime_ != nullptr;};
      void deleteEventCreateTime() { this->eventCreateTime_ = nullptr;};
      inline string getEventCreateTime() const { DARABONBA_PTR_GET_DEFAULT(eventCreateTime_, "") };
      inline Result& setEventCreateTime(string eventCreateTime) { DARABONBA_PTR_SET_VALUE(eventCreateTime_, eventCreateTime) };


      // eventCycleStatus Field Functions 
      bool hasEventCycleStatus() const { return this->eventCycleStatus_ != nullptr;};
      void deleteEventCycleStatus() { this->eventCycleStatus_ = nullptr;};
      inline string getEventCycleStatus() const { DARABONBA_PTR_GET_DEFAULT(eventCycleStatus_, "") };
      inline Result& setEventCycleStatus(string eventCycleStatus) { DARABONBA_PTR_SET_VALUE(eventCycleStatus_, eventCycleStatus) };


      // eventExecuteTime Field Functions 
      bool hasEventExecuteTime() const { return this->eventExecuteTime_ != nullptr;};
      void deleteEventExecuteTime() { this->eventExecuteTime_ = nullptr;};
      inline string getEventExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(eventExecuteTime_, "") };
      inline Result& setEventExecuteTime(string eventExecuteTime) { DARABONBA_PTR_SET_VALUE(eventExecuteTime_, eventExecuteTime) };


      // eventFinashTime Field Functions 
      bool hasEventFinashTime() const { return this->eventFinashTime_ != nullptr;};
      void deleteEventFinashTime() { this->eventFinashTime_ = nullptr;};
      inline string getEventFinashTime() const { DARABONBA_PTR_GET_DEFAULT(eventFinashTime_, "") };
      inline Result& setEventFinashTime(string eventFinashTime) { DARABONBA_PTR_SET_VALUE(eventFinashTime_, eventFinashTime) };


      // eventLevel Field Functions 
      bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
      void deleteEventLevel() { this->eventLevel_ = nullptr;};
      inline string getEventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
      inline Result& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Result& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // nodeIP Field Functions 
      bool hasNodeIP() const { return this->nodeIP_ != nullptr;};
      void deleteNodeIP() { this->nodeIP_ = nullptr;};
      inline string getNodeIP() const { DARABONBA_PTR_GET_DEFAULT(nodeIP_, "") };
      inline Result& setNodeIP(string nodeIP) { DARABONBA_PTR_SET_VALUE(nodeIP_, nodeIP) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Result& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      shared_ptr<string> ecsId_ {};
      shared_ptr<string> eventCreateTime_ {};
      shared_ptr<string> eventCycleStatus_ {};
      shared_ptr<string> eventExecuteTime_ {};
      shared_ptr<string> eventFinashTime_ {};
      shared_ptr<string> eventLevel_ {};
      shared_ptr<string> eventType_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> nodeIP_ {};
      shared_ptr<string> regionId_ {};
    };

    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
        DARABONBA_PTR_TO_JSON(X-Total-Failed, xTotalFailed_);
        DARABONBA_PTR_TO_JSON(X-Total-Success, xTotalSuccess_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
        DARABONBA_PTR_FROM_JSON(X-Total-Failed, xTotalFailed_);
        DARABONBA_PTR_FROM_JSON(X-Total-Success, xTotalSuccess_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->xTotalCount_ == nullptr
        && this->xTotalFailed_ == nullptr && this->xTotalSuccess_ == nullptr; };
      // xTotalCount Field Functions 
      bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
      void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
      inline int64_t getXTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0L) };
      inline Headers& setXTotalCount(int64_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


      // xTotalFailed Field Functions 
      bool hasXTotalFailed() const { return this->xTotalFailed_ != nullptr;};
      void deleteXTotalFailed() { this->xTotalFailed_ = nullptr;};
      inline int64_t getXTotalFailed() const { DARABONBA_PTR_GET_DEFAULT(xTotalFailed_, 0L) };
      inline Headers& setXTotalFailed(int64_t xTotalFailed) { DARABONBA_PTR_SET_VALUE(xTotalFailed_, xTotalFailed) };


      // xTotalSuccess Field Functions 
      bool hasXTotalSuccess() const { return this->xTotalSuccess_ != nullptr;};
      void deleteXTotalSuccess() { this->xTotalSuccess_ = nullptr;};
      inline int64_t getXTotalSuccess() const { DARABONBA_PTR_GET_DEFAULT(xTotalSuccess_, 0L) };
      inline Headers& setXTotalSuccess(int64_t xTotalSuccess) { DARABONBA_PTR_SET_VALUE(xTotalSuccess_, xTotalSuccess) };


    protected:
      shared_ptr<int64_t> xTotalCount_ {};
      shared_ptr<int64_t> xTotalFailed_ {};
      shared_ptr<int64_t> xTotalSuccess_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListInstanceHistoryEventsResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListInstanceHistoryEventsResponseBody::Headers) };
    inline ListInstanceHistoryEventsResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListInstanceHistoryEventsResponseBody::Headers) };
    inline ListInstanceHistoryEventsResponseBody& setHeaders(const ListInstanceHistoryEventsResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListInstanceHistoryEventsResponseBody& setHeaders(ListInstanceHistoryEventsResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceHistoryEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListInstanceHistoryEventsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListInstanceHistoryEventsResponseBody::Result>) };
    inline vector<ListInstanceHistoryEventsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListInstanceHistoryEventsResponseBody::Result>) };
    inline ListInstanceHistoryEventsResponseBody& setResult(const vector<ListInstanceHistoryEventsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListInstanceHistoryEventsResponseBody& setResult(vector<ListInstanceHistoryEventsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<ListInstanceHistoryEventsResponseBody::Headers> headers_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListInstanceHistoryEventsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
