// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAiEngineEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAiEngineEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAiEngineEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAiEngineEventsResponseBody() = default ;
    DescribeAiEngineEventsResponseBody(const DescribeAiEngineEventsResponseBody &) = default ;
    DescribeAiEngineEventsResponseBody(DescribeAiEngineEventsResponseBody &&) = default ;
    DescribeAiEngineEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAiEngineEventsResponseBody() = default ;
    DescribeAiEngineEventsResponseBody& operator=(const DescribeAiEngineEventsResponseBody &) = default ;
    DescribeAiEngineEventsResponseBody& operator=(DescribeAiEngineEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AttackSources, attackSources_);
        DARABONBA_PTR_TO_JSON(BypassRequestCount, bypassRequestCount_);
        DARABONBA_PTR_TO_JSON(Domains, domains_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(EventNodeCount, eventNodeCount_);
        DARABONBA_PTR_TO_JSON(EvidenceRequestCount, evidenceRequestCount_);
        DARABONBA_PTR_TO_JSON(FirstSeenAt, firstSeenAt_);
        DARABONBA_PTR_TO_JSON(HandleStatus, handleStatus_);
        DARABONBA_PTR_TO_JSON(LastSeenAt, lastSeenAt_);
        DARABONBA_PTR_TO_JSON(RelatedEventIds, relatedEventIds_);
        DARABONBA_PTR_TO_JSON(Resources, resources_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackSources, attackSources_);
        DARABONBA_PTR_FROM_JSON(BypassRequestCount, bypassRequestCount_);
        DARABONBA_PTR_FROM_JSON(Domains, domains_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(EventNodeCount, eventNodeCount_);
        DARABONBA_PTR_FROM_JSON(EvidenceRequestCount, evidenceRequestCount_);
        DARABONBA_PTR_FROM_JSON(FirstSeenAt, firstSeenAt_);
        DARABONBA_PTR_FROM_JSON(HandleStatus, handleStatus_);
        DARABONBA_PTR_FROM_JSON(LastSeenAt, lastSeenAt_);
        DARABONBA_PTR_FROM_JSON(RelatedEventIds, relatedEventIds_);
        DARABONBA_PTR_FROM_JSON(Resources, resources_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AttackSources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttackSources& obj) { 
          DARABONBA_PTR_TO_JSON(Sources, sources_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AttackSources& obj) { 
          DARABONBA_PTR_FROM_JSON(Sources, sources_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        AttackSources() = default ;
        AttackSources(const AttackSources &) = default ;
        AttackSources(AttackSources &&) = default ;
        AttackSources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttackSources() = default ;
        AttackSources& operator=(const AttackSources &) = default ;
        AttackSources& operator=(AttackSources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Sources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Sources& obj) { 
            DARABONBA_PTR_TO_JSON(Attribute, attribute_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Sources& obj) { 
            DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Sources() = default ;
          Sources(const Sources &) = default ;
          Sources(Sources &&) = default ;
          Sources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Sources() = default ;
          Sources& operator=(const Sources &) = default ;
          Sources& operator=(Sources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attribute_ == nullptr
        && this->value_ == nullptr; };
          // attribute Field Functions 
          bool hasAttribute() const { return this->attribute_ != nullptr;};
          void deleteAttribute() { this->attribute_ = nullptr;};
          inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
          inline Sources& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Sources& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The display attribute of the attack source, such as the region code.
          shared_ptr<string> attribute_ {};
          // The value of the attack source. If the attack source type is IP address (the **Type** parameter is set to **ip**), the value is an IP address.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->sources_ == nullptr
        && this->type_ == nullptr; };
        // sources Field Functions 
        bool hasSources() const { return this->sources_ != nullptr;};
        void deleteSources() { this->sources_ = nullptr;};
        inline const vector<AttackSources::Sources> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<AttackSources::Sources>) };
        inline vector<AttackSources::Sources> getSources() { DARABONBA_PTR_GET(sources_, vector<AttackSources::Sources>) };
        inline AttackSources& setSources(const vector<AttackSources::Sources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
        inline AttackSources& setSources(vector<AttackSources::Sources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AttackSources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The list of attack sources of the specified type.
        shared_ptr<vector<AttackSources::Sources>> sources_ {};
        // The type of the attack source. Valid values:
        // 
        // - **ip**: IP address.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->attackSources_ == nullptr
        && this->bypassRequestCount_ == nullptr && this->domains_ == nullptr && this->eventId_ == nullptr && this->eventName_ == nullptr && this->eventNodeCount_ == nullptr
        && this->evidenceRequestCount_ == nullptr && this->firstSeenAt_ == nullptr && this->handleStatus_ == nullptr && this->lastSeenAt_ == nullptr && this->relatedEventIds_ == nullptr
        && this->resources_ == nullptr && this->riskLevel_ == nullptr; };
      // attackSources Field Functions 
      bool hasAttackSources() const { return this->attackSources_ != nullptr;};
      void deleteAttackSources() { this->attackSources_ = nullptr;};
      inline const vector<Items::AttackSources> & getAttackSources() const { DARABONBA_PTR_GET_CONST(attackSources_, vector<Items::AttackSources>) };
      inline vector<Items::AttackSources> getAttackSources() { DARABONBA_PTR_GET(attackSources_, vector<Items::AttackSources>) };
      inline Items& setAttackSources(const vector<Items::AttackSources> & attackSources) { DARABONBA_PTR_SET_VALUE(attackSources_, attackSources) };
      inline Items& setAttackSources(vector<Items::AttackSources> && attackSources) { DARABONBA_PTR_SET_RVALUE(attackSources_, attackSources) };


      // bypassRequestCount Field Functions 
      bool hasBypassRequestCount() const { return this->bypassRequestCount_ != nullptr;};
      void deleteBypassRequestCount() { this->bypassRequestCount_ = nullptr;};
      inline int64_t getBypassRequestCount() const { DARABONBA_PTR_GET_DEFAULT(bypassRequestCount_, 0L) };
      inline Items& setBypassRequestCount(int64_t bypassRequestCount) { DARABONBA_PTR_SET_VALUE(bypassRequestCount_, bypassRequestCount) };


      // domains Field Functions 
      bool hasDomains() const { return this->domains_ != nullptr;};
      void deleteDomains() { this->domains_ = nullptr;};
      inline const vector<string> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
      inline vector<string> getDomains() { DARABONBA_PTR_GET(domains_, vector<string>) };
      inline Items& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
      inline Items& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Items& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline Items& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventNodeCount Field Functions 
      bool hasEventNodeCount() const { return this->eventNodeCount_ != nullptr;};
      void deleteEventNodeCount() { this->eventNodeCount_ = nullptr;};
      inline int32_t getEventNodeCount() const { DARABONBA_PTR_GET_DEFAULT(eventNodeCount_, 0) };
      inline Items& setEventNodeCount(int32_t eventNodeCount) { DARABONBA_PTR_SET_VALUE(eventNodeCount_, eventNodeCount) };


      // evidenceRequestCount Field Functions 
      bool hasEvidenceRequestCount() const { return this->evidenceRequestCount_ != nullptr;};
      void deleteEvidenceRequestCount() { this->evidenceRequestCount_ = nullptr;};
      inline int64_t getEvidenceRequestCount() const { DARABONBA_PTR_GET_DEFAULT(evidenceRequestCount_, 0L) };
      inline Items& setEvidenceRequestCount(int64_t evidenceRequestCount) { DARABONBA_PTR_SET_VALUE(evidenceRequestCount_, evidenceRequestCount) };


      // firstSeenAt Field Functions 
      bool hasFirstSeenAt() const { return this->firstSeenAt_ != nullptr;};
      void deleteFirstSeenAt() { this->firstSeenAt_ = nullptr;};
      inline int64_t getFirstSeenAt() const { DARABONBA_PTR_GET_DEFAULT(firstSeenAt_, 0L) };
      inline Items& setFirstSeenAt(int64_t firstSeenAt) { DARABONBA_PTR_SET_VALUE(firstSeenAt_, firstSeenAt) };


      // handleStatus Field Functions 
      bool hasHandleStatus() const { return this->handleStatus_ != nullptr;};
      void deleteHandleStatus() { this->handleStatus_ = nullptr;};
      inline string getHandleStatus() const { DARABONBA_PTR_GET_DEFAULT(handleStatus_, "") };
      inline Items& setHandleStatus(string handleStatus) { DARABONBA_PTR_SET_VALUE(handleStatus_, handleStatus) };


      // lastSeenAt Field Functions 
      bool hasLastSeenAt() const { return this->lastSeenAt_ != nullptr;};
      void deleteLastSeenAt() { this->lastSeenAt_ = nullptr;};
      inline int64_t getLastSeenAt() const { DARABONBA_PTR_GET_DEFAULT(lastSeenAt_, 0L) };
      inline Items& setLastSeenAt(int64_t lastSeenAt) { DARABONBA_PTR_SET_VALUE(lastSeenAt_, lastSeenAt) };


      // relatedEventIds Field Functions 
      bool hasRelatedEventIds() const { return this->relatedEventIds_ != nullptr;};
      void deleteRelatedEventIds() { this->relatedEventIds_ = nullptr;};
      inline string getRelatedEventIds() const { DARABONBA_PTR_GET_DEFAULT(relatedEventIds_, "") };
      inline Items& setRelatedEventIds(string relatedEventIds) { DARABONBA_PTR_SET_VALUE(relatedEventIds_, relatedEventIds) };


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline const vector<string> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
      inline vector<string> getResources() { DARABONBA_PTR_GET(resources_, vector<string>) };
      inline Items& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
      inline Items& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Items& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    protected:
      // The list of attack source groups for the event.
      shared_ptr<vector<Items::AttackSources>> attackSources_ {};
      // The statistics of suspected bypass evidence requests for the event.
      shared_ptr<int64_t> bypassRequestCount_ {};
      // The list of domain names involved in the event.
      shared_ptr<vector<string>> domains_ {};
      // The ID of the event.
      shared_ptr<string> eventId_ {};
      // The name of the event in the selected language.
      shared_ptr<string> eventName_ {};
      // The number of nodes included in the event.
      shared_ptr<int32_t> eventNodeCount_ {};
      // The statistics of evidence requests for the event.
      shared_ptr<int64_t> evidenceRequestCount_ {};
      // The time when the event was first detected. The value is a UNIX timestamp in UTC. Unit: milliseconds.
      shared_ptr<int64_t> firstSeenAt_ {};
      // The current manual handling status. Valid values:
      // 
      // - **unhandled**: Unhandled.
      // 
      // - **handling**: In progress.
      // 
      // - **handled**: Handled.
      shared_ptr<string> handleStatus_ {};
      // The time when the event was last detected. The value is a UNIX timestamp in UTC. Unit: milliseconds.
      shared_ptr<int64_t> lastSeenAt_ {};
      // The IDs of the related events. Multiple IDs are separated by commas (,).
      shared_ptr<string> relatedEventIds_ {};
      // The list of protected objects involved in the event.
      shared_ptr<vector<string>> resources_ {};
      // The current risk level. Valid values:
      // 
      // - **critical**: Critical.
      // 
      // - **high**: High.
      // 
      // - **medium**: Medium.
      // 
      // - **low**: Low.
      shared_ptr<string> riskLevel_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAiEngineEventsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAiEngineEventsResponseBody::Items>) };
    inline vector<DescribeAiEngineEventsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeAiEngineEventsResponseBody::Items>) };
    inline DescribeAiEngineEventsResponseBody& setItems(const vector<DescribeAiEngineEventsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAiEngineEventsResponseBody& setItems(vector<DescribeAiEngineEventsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAiEngineEventsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAiEngineEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAiEngineEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAiEngineEventsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of events.
    shared_ptr<vector<DescribeAiEngineEventsResponseBody::Items>> items_ {};
    // The number of entries to return per page in a paging query. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page. If a next page exists, this field returns a value.
    // > If this parameter returns a value, a next page exists. You can use the returned **NextToken** as a request parameter to retrieve the next page until no value is returned, which indicates that all data has been retrieved.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of events that meet the query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
