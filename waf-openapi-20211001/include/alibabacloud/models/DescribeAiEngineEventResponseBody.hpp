// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVENTRESPONSEBODY_HPP_
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
  class DescribeAiEngineEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAiEngineEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackSources, attackSources_);
      DARABONBA_PTR_TO_JSON(BypassRequestCount, bypassRequestCount_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventNodeCount, eventNodeCount_);
      DARABONBA_PTR_TO_JSON(EventSummary, eventSummary_);
      DARABONBA_PTR_TO_JSON(EvidenceRequestCount, evidenceRequestCount_);
      DARABONBA_PTR_TO_JSON(FirstSeenAt, firstSeenAt_);
      DARABONBA_PTR_TO_JSON(HandleStatus, handleStatus_);
      DARABONBA_PTR_TO_JSON(LastSeenAt, lastSeenAt_);
      DARABONBA_PTR_TO_JSON(RelatedEventIds, relatedEventIds_);
      DARABONBA_PTR_TO_JSON(ReportMarkdown, reportMarkdown_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAiEngineEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackSources, attackSources_);
      DARABONBA_PTR_FROM_JSON(BypassRequestCount, bypassRequestCount_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventNodeCount, eventNodeCount_);
      DARABONBA_PTR_FROM_JSON(EventSummary, eventSummary_);
      DARABONBA_PTR_FROM_JSON(EvidenceRequestCount, evidenceRequestCount_);
      DARABONBA_PTR_FROM_JSON(FirstSeenAt, firstSeenAt_);
      DARABONBA_PTR_FROM_JSON(HandleStatus, handleStatus_);
      DARABONBA_PTR_FROM_JSON(LastSeenAt, lastSeenAt_);
      DARABONBA_PTR_FROM_JSON(RelatedEventIds, relatedEventIds_);
      DARABONBA_PTR_FROM_JSON(ReportMarkdown, reportMarkdown_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    DescribeAiEngineEventResponseBody() = default ;
    DescribeAiEngineEventResponseBody(const DescribeAiEngineEventResponseBody &) = default ;
    DescribeAiEngineEventResponseBody(DescribeAiEngineEventResponseBody &&) = default ;
    DescribeAiEngineEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAiEngineEventResponseBody() = default ;
    DescribeAiEngineEventResponseBody& operator=(const DescribeAiEngineEventResponseBody &) = default ;
    DescribeAiEngineEventResponseBody& operator=(DescribeAiEngineEventResponseBody &&) = default ;
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
        // The display attribute of the source, such as the region code.
        shared_ptr<string> attribute_ {};
        // The value of the attack source. If the attack source type is IP address (**Type** is set to **ip**), this parameter indicates the IP address.
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
      // The list of sources of this type.
      shared_ptr<vector<AttackSources::Sources>> sources_ {};
      // The type of the attack source. Valid values:
      // 
      // - **ip**: IP address.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->attackSources_ == nullptr
        && this->bypassRequestCount_ == nullptr && this->domains_ == nullptr && this->eventId_ == nullptr && this->eventName_ == nullptr && this->eventNodeCount_ == nullptr
        && this->eventSummary_ == nullptr && this->evidenceRequestCount_ == nullptr && this->firstSeenAt_ == nullptr && this->handleStatus_ == nullptr && this->lastSeenAt_ == nullptr
        && this->relatedEventIds_ == nullptr && this->reportMarkdown_ == nullptr && this->requestId_ == nullptr && this->resources_ == nullptr && this->riskLevel_ == nullptr; };
    // attackSources Field Functions 
    bool hasAttackSources() const { return this->attackSources_ != nullptr;};
    void deleteAttackSources() { this->attackSources_ = nullptr;};
    inline const vector<DescribeAiEngineEventResponseBody::AttackSources> & getAttackSources() const { DARABONBA_PTR_GET_CONST(attackSources_, vector<DescribeAiEngineEventResponseBody::AttackSources>) };
    inline vector<DescribeAiEngineEventResponseBody::AttackSources> getAttackSources() { DARABONBA_PTR_GET(attackSources_, vector<DescribeAiEngineEventResponseBody::AttackSources>) };
    inline DescribeAiEngineEventResponseBody& setAttackSources(const vector<DescribeAiEngineEventResponseBody::AttackSources> & attackSources) { DARABONBA_PTR_SET_VALUE(attackSources_, attackSources) };
    inline DescribeAiEngineEventResponseBody& setAttackSources(vector<DescribeAiEngineEventResponseBody::AttackSources> && attackSources) { DARABONBA_PTR_SET_RVALUE(attackSources_, attackSources) };


    // bypassRequestCount Field Functions 
    bool hasBypassRequestCount() const { return this->bypassRequestCount_ != nullptr;};
    void deleteBypassRequestCount() { this->bypassRequestCount_ = nullptr;};
    inline int64_t getBypassRequestCount() const { DARABONBA_PTR_GET_DEFAULT(bypassRequestCount_, 0L) };
    inline DescribeAiEngineEventResponseBody& setBypassRequestCount(int64_t bypassRequestCount) { DARABONBA_PTR_SET_VALUE(bypassRequestCount_, bypassRequestCount) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> getDomains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline DescribeAiEngineEventResponseBody& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeAiEngineEventResponseBody& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeAiEngineEventResponseBody& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeAiEngineEventResponseBody& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventNodeCount Field Functions 
    bool hasEventNodeCount() const { return this->eventNodeCount_ != nullptr;};
    void deleteEventNodeCount() { this->eventNodeCount_ = nullptr;};
    inline int32_t getEventNodeCount() const { DARABONBA_PTR_GET_DEFAULT(eventNodeCount_, 0) };
    inline DescribeAiEngineEventResponseBody& setEventNodeCount(int32_t eventNodeCount) { DARABONBA_PTR_SET_VALUE(eventNodeCount_, eventNodeCount) };


    // eventSummary Field Functions 
    bool hasEventSummary() const { return this->eventSummary_ != nullptr;};
    void deleteEventSummary() { this->eventSummary_ = nullptr;};
    inline string getEventSummary() const { DARABONBA_PTR_GET_DEFAULT(eventSummary_, "") };
    inline DescribeAiEngineEventResponseBody& setEventSummary(string eventSummary) { DARABONBA_PTR_SET_VALUE(eventSummary_, eventSummary) };


    // evidenceRequestCount Field Functions 
    bool hasEvidenceRequestCount() const { return this->evidenceRequestCount_ != nullptr;};
    void deleteEvidenceRequestCount() { this->evidenceRequestCount_ = nullptr;};
    inline int64_t getEvidenceRequestCount() const { DARABONBA_PTR_GET_DEFAULT(evidenceRequestCount_, 0L) };
    inline DescribeAiEngineEventResponseBody& setEvidenceRequestCount(int64_t evidenceRequestCount) { DARABONBA_PTR_SET_VALUE(evidenceRequestCount_, evidenceRequestCount) };


    // firstSeenAt Field Functions 
    bool hasFirstSeenAt() const { return this->firstSeenAt_ != nullptr;};
    void deleteFirstSeenAt() { this->firstSeenAt_ = nullptr;};
    inline int64_t getFirstSeenAt() const { DARABONBA_PTR_GET_DEFAULT(firstSeenAt_, 0L) };
    inline DescribeAiEngineEventResponseBody& setFirstSeenAt(int64_t firstSeenAt) { DARABONBA_PTR_SET_VALUE(firstSeenAt_, firstSeenAt) };


    // handleStatus Field Functions 
    bool hasHandleStatus() const { return this->handleStatus_ != nullptr;};
    void deleteHandleStatus() { this->handleStatus_ = nullptr;};
    inline string getHandleStatus() const { DARABONBA_PTR_GET_DEFAULT(handleStatus_, "") };
    inline DescribeAiEngineEventResponseBody& setHandleStatus(string handleStatus) { DARABONBA_PTR_SET_VALUE(handleStatus_, handleStatus) };


    // lastSeenAt Field Functions 
    bool hasLastSeenAt() const { return this->lastSeenAt_ != nullptr;};
    void deleteLastSeenAt() { this->lastSeenAt_ = nullptr;};
    inline int64_t getLastSeenAt() const { DARABONBA_PTR_GET_DEFAULT(lastSeenAt_, 0L) };
    inline DescribeAiEngineEventResponseBody& setLastSeenAt(int64_t lastSeenAt) { DARABONBA_PTR_SET_VALUE(lastSeenAt_, lastSeenAt) };


    // relatedEventIds Field Functions 
    bool hasRelatedEventIds() const { return this->relatedEventIds_ != nullptr;};
    void deleteRelatedEventIds() { this->relatedEventIds_ = nullptr;};
    inline string getRelatedEventIds() const { DARABONBA_PTR_GET_DEFAULT(relatedEventIds_, "") };
    inline DescribeAiEngineEventResponseBody& setRelatedEventIds(string relatedEventIds) { DARABONBA_PTR_SET_VALUE(relatedEventIds_, relatedEventIds) };


    // reportMarkdown Field Functions 
    bool hasReportMarkdown() const { return this->reportMarkdown_ != nullptr;};
    void deleteReportMarkdown() { this->reportMarkdown_ = nullptr;};
    inline string getReportMarkdown() const { DARABONBA_PTR_GET_DEFAULT(reportMarkdown_, "") };
    inline DescribeAiEngineEventResponseBody& setReportMarkdown(string reportMarkdown) { DARABONBA_PTR_SET_VALUE(reportMarkdown_, reportMarkdown) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAiEngineEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<string> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
    inline vector<string> getResources() { DARABONBA_PTR_GET(resources_, vector<string>) };
    inline DescribeAiEngineEventResponseBody& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeAiEngineEventResponseBody& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeAiEngineEventResponseBody& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The grouped list of attack sources for the event.
    shared_ptr<vector<DescribeAiEngineEventResponseBody::AttackSources>> attackSources_ {};
    // The statistical value of suspected bypass evidence requests for the event.
    shared_ptr<int64_t> bypassRequestCount_ {};
    // The domain names involved in the event.
    shared_ptr<vector<string>> domains_ {};
    // The event ID.
    shared_ptr<string> eventId_ {};
    // The name of the event in the specified language.
    shared_ptr<string> eventName_ {};
    // The number of nodes included in the event.
    shared_ptr<int32_t> eventNodeCount_ {};
    // The summary of the event in the specified language.
    shared_ptr<string> eventSummary_ {};
    // The statistical value of evidence requests for the event.
    shared_ptr<int64_t> evidenceRequestCount_ {};
    // The time when the event was first detected. The time is a UNIX timestamp in UTC. Unit: milliseconds.
    shared_ptr<int64_t> firstSeenAt_ {};
    // The current manual handling status. Valid values:
    // 
    // - **unhandled**: Unhandled.
    // 
    // - **handling**: Handling.
    // 
    // - **handled**: Handled.
    shared_ptr<string> handleStatus_ {};
    // The time when the event was last detected. The time is a UNIX timestamp in UTC. Unit: milliseconds.
    shared_ptr<int64_t> lastSeenAt_ {};
    // The IDs of the related events. Multiple IDs are separated by commas (,).
    shared_ptr<string> relatedEventIds_ {};
    // The event analysis report in Markdown format in the specified language.
    shared_ptr<string> reportMarkdown_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The IDs of the protected objects involved in the event.
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

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
