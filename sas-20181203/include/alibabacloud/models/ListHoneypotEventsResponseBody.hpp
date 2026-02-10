// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HoneypotEvents, honeypotEvents_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneypotEvents, honeypotEvents_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListHoneypotEventsResponseBody() = default ;
    ListHoneypotEventsResponseBody(const ListHoneypotEventsResponseBody &) = default ;
    ListHoneypotEventsResponseBody(ListHoneypotEventsResponseBody &&) = default ;
    ListHoneypotEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotEventsResponseBody() = default ;
    ListHoneypotEventsResponseBody& operator=(const ListHoneypotEventsResponseBody &) = default ;
    ListHoneypotEventsResponseBody& operator=(ListHoneypotEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(LastRowKey, lastRowKey_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(LastRowKey, lastRowKey_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->lastRowKey_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // lastRowKey Field Functions 
      bool hasLastRowKey() const { return this->lastRowKey_ != nullptr;};
      void deleteLastRowKey() { this->lastRowKey_ = nullptr;};
      inline string getLastRowKey() const { DARABONBA_PTR_GET_DEFAULT(lastRowKey_, "") };
      inline PageInfo& setLastRowKey(string lastRowKey) { DARABONBA_PTR_SET_VALUE(lastRowKey_, lastRowKey) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline PageInfo& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The key of the last data entry.
      shared_ptr<string> lastRowKey_ {};
      // The value of the NextToken parameter that is returned by using the NextToken method.
      shared_ptr<string> nextToken_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class HoneypotEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HoneypotEvents& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentName, agentName_);
        DARABONBA_PTR_TO_JSON(AlarmEventId, alarmEventId_);
        DARABONBA_PTR_TO_JSON(DstIp, dstIp_);
        DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_TO_JSON(HoneypotName, honeypotName_);
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(MergeFieldList, mergeFieldList_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(SecurityEventId, securityEventId_);
        DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
      };
      friend void from_json(const Darabonba::Json& j, HoneypotEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
        DARABONBA_PTR_FROM_JSON(AlarmEventId, alarmEventId_);
        DARABONBA_PTR_FROM_JSON(DstIp, dstIp_);
        DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_FROM_JSON(HoneypotName, honeypotName_);
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(MergeFieldList, mergeFieldList_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(SecurityEventId, securityEventId_);
        DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
      };
      HoneypotEvents() = default ;
      HoneypotEvents(const HoneypotEvents &) = default ;
      HoneypotEvents(HoneypotEvents &&) = default ;
      HoneypotEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HoneypotEvents() = default ;
      HoneypotEvents& operator=(const HoneypotEvents &) = default ;
      HoneypotEvents& operator=(HoneypotEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MergeFieldList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MergeFieldList& obj) { 
          DARABONBA_PTR_TO_JSON(FieldExtInfo, fieldExtInfo_);
          DARABONBA_PTR_TO_JSON(FieldKey, fieldKey_);
          DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
          DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
        };
        friend void from_json(const Darabonba::Json& j, MergeFieldList& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldExtInfo, fieldExtInfo_);
          DARABONBA_PTR_FROM_JSON(FieldKey, fieldKey_);
          DARABONBA_PTR_FROM_JSON(FieldType, fieldType_);
          DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
        };
        MergeFieldList() = default ;
        MergeFieldList(const MergeFieldList &) = default ;
        MergeFieldList(MergeFieldList &&) = default ;
        MergeFieldList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MergeFieldList() = default ;
        MergeFieldList& operator=(const MergeFieldList &) = default ;
        MergeFieldList& operator=(MergeFieldList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldExtInfo_ == nullptr
        && this->fieldKey_ == nullptr && this->fieldType_ == nullptr && this->fieldValue_ == nullptr; };
        // fieldExtInfo Field Functions 
        bool hasFieldExtInfo() const { return this->fieldExtInfo_ != nullptr;};
        void deleteFieldExtInfo() { this->fieldExtInfo_ = nullptr;};
        inline string getFieldExtInfo() const { DARABONBA_PTR_GET_DEFAULT(fieldExtInfo_, "") };
        inline MergeFieldList& setFieldExtInfo(string fieldExtInfo) { DARABONBA_PTR_SET_VALUE(fieldExtInfo_, fieldExtInfo) };


        // fieldKey Field Functions 
        bool hasFieldKey() const { return this->fieldKey_ != nullptr;};
        void deleteFieldKey() { this->fieldKey_ = nullptr;};
        inline string getFieldKey() const { DARABONBA_PTR_GET_DEFAULT(fieldKey_, "") };
        inline MergeFieldList& setFieldKey(string fieldKey) { DARABONBA_PTR_SET_VALUE(fieldKey_, fieldKey) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline MergeFieldList& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // fieldValue Field Functions 
        bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
        void deleteFieldValue() { this->fieldValue_ = nullptr;};
        inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
        inline MergeFieldList& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


      protected:
        // The supplementary information about the field.
        shared_ptr<string> fieldExtInfo_ {};
        // The key of the field.
        shared_ptr<string> fieldKey_ {};
        // The type of the field.
        shared_ptr<string> fieldType_ {};
        // The value of the field key.
        shared_ptr<string> fieldValue_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->alarmEventId_ == nullptr && this->dstIp_ == nullptr && this->firstTime_ == nullptr && this->honeypotName_ == nullptr
        && this->lastTime_ == nullptr && this->location_ == nullptr && this->mergeFieldList_ == nullptr && this->protocol_ == nullptr && this->riskLevel_ == nullptr
        && this->securityEventId_ == nullptr && this->srcIp_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline HoneypotEvents& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentName Field Functions 
      bool hasAgentName() const { return this->agentName_ != nullptr;};
      void deleteAgentName() { this->agentName_ = nullptr;};
      inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
      inline HoneypotEvents& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      // alarmEventId Field Functions 
      bool hasAlarmEventId() const { return this->alarmEventId_ != nullptr;};
      void deleteAlarmEventId() { this->alarmEventId_ = nullptr;};
      inline int64_t getAlarmEventId() const { DARABONBA_PTR_GET_DEFAULT(alarmEventId_, 0L) };
      inline HoneypotEvents& setAlarmEventId(int64_t alarmEventId) { DARABONBA_PTR_SET_VALUE(alarmEventId_, alarmEventId) };


      // dstIp Field Functions 
      bool hasDstIp() const { return this->dstIp_ != nullptr;};
      void deleteDstIp() { this->dstIp_ = nullptr;};
      inline string getDstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
      inline HoneypotEvents& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline HoneypotEvents& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // honeypotName Field Functions 
      bool hasHoneypotName() const { return this->honeypotName_ != nullptr;};
      void deleteHoneypotName() { this->honeypotName_ = nullptr;};
      inline string getHoneypotName() const { DARABONBA_PTR_GET_DEFAULT(honeypotName_, "") };
      inline HoneypotEvents& setHoneypotName(string honeypotName) { DARABONBA_PTR_SET_VALUE(honeypotName_, honeypotName) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline HoneypotEvents& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline HoneypotEvents& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // mergeFieldList Field Functions 
      bool hasMergeFieldList() const { return this->mergeFieldList_ != nullptr;};
      void deleteMergeFieldList() { this->mergeFieldList_ = nullptr;};
      inline const vector<HoneypotEvents::MergeFieldList> & getMergeFieldList() const { DARABONBA_PTR_GET_CONST(mergeFieldList_, vector<HoneypotEvents::MergeFieldList>) };
      inline vector<HoneypotEvents::MergeFieldList> getMergeFieldList() { DARABONBA_PTR_GET(mergeFieldList_, vector<HoneypotEvents::MergeFieldList>) };
      inline HoneypotEvents& setMergeFieldList(const vector<HoneypotEvents::MergeFieldList> & mergeFieldList) { DARABONBA_PTR_SET_VALUE(mergeFieldList_, mergeFieldList) };
      inline HoneypotEvents& setMergeFieldList(vector<HoneypotEvents::MergeFieldList> && mergeFieldList) { DARABONBA_PTR_SET_RVALUE(mergeFieldList_, mergeFieldList) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline HoneypotEvents& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline HoneypotEvents& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // securityEventId Field Functions 
      bool hasSecurityEventId() const { return this->securityEventId_ != nullptr;};
      void deleteSecurityEventId() { this->securityEventId_ = nullptr;};
      inline int64_t getSecurityEventId() const { DARABONBA_PTR_GET_DEFAULT(securityEventId_, 0L) };
      inline HoneypotEvents& setSecurityEventId(int64_t securityEventId) { DARABONBA_PTR_SET_VALUE(securityEventId_, securityEventId) };


      // srcIp Field Functions 
      bool hasSrcIp() const { return this->srcIp_ != nullptr;};
      void deleteSrcIp() { this->srcIp_ = nullptr;};
      inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
      inline HoneypotEvents& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    protected:
      // The probe ID.
      shared_ptr<string> agentId_ {};
      // The name of the probe.
      shared_ptr<string> agentName_ {};
      // The ID of the alert event.
      shared_ptr<int64_t> alarmEventId_ {};
      // The destination IP address of the attack.
      shared_ptr<string> dstIp_ {};
      // The timestamp at which the event was first detected.
      shared_ptr<int64_t> firstTime_ {};
      // The name of the honeypot.
      shared_ptr<string> honeypotName_ {};
      // The timestamp at which the event was last detected.
      shared_ptr<int64_t> lastTime_ {};
      // The region.
      shared_ptr<string> location_ {};
      // The extended values that correspond to the field key.
      shared_ptr<vector<HoneypotEvents::MergeFieldList>> mergeFieldList_ {};
      // The protocol. Valid values:
      // 
      // *   **tcp**
      // *   **udp**
      shared_ptr<string> protocol_ {};
      // The risk level. Valid values:
      // 
      // *   **2**: low
      // *   **3**: medium
      // *   **4**: high
      shared_ptr<string> riskLevel_ {};
      // The ID of the intrusion event.
      shared_ptr<int64_t> securityEventId_ {};
      // The source IP address of the attack.
      shared_ptr<string> srcIp_ {};
    };

    virtual bool empty() const override { return this->honeypotEvents_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // honeypotEvents Field Functions 
    bool hasHoneypotEvents() const { return this->honeypotEvents_ != nullptr;};
    void deleteHoneypotEvents() { this->honeypotEvents_ = nullptr;};
    inline const vector<ListHoneypotEventsResponseBody::HoneypotEvents> & getHoneypotEvents() const { DARABONBA_PTR_GET_CONST(honeypotEvents_, vector<ListHoneypotEventsResponseBody::HoneypotEvents>) };
    inline vector<ListHoneypotEventsResponseBody::HoneypotEvents> getHoneypotEvents() { DARABONBA_PTR_GET(honeypotEvents_, vector<ListHoneypotEventsResponseBody::HoneypotEvents>) };
    inline ListHoneypotEventsResponseBody& setHoneypotEvents(const vector<ListHoneypotEventsResponseBody::HoneypotEvents> & honeypotEvents) { DARABONBA_PTR_SET_VALUE(honeypotEvents_, honeypotEvents) };
    inline ListHoneypotEventsResponseBody& setHoneypotEvents(vector<ListHoneypotEventsResponseBody::HoneypotEvents> && honeypotEvents) { DARABONBA_PTR_SET_RVALUE(honeypotEvents_, honeypotEvents) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListHoneypotEventsResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListHoneypotEventsResponseBody::PageInfo) };
    inline ListHoneypotEventsResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListHoneypotEventsResponseBody::PageInfo) };
    inline ListHoneypotEventsResponseBody& setPageInfo(const ListHoneypotEventsResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListHoneypotEventsResponseBody& setPageInfo(ListHoneypotEventsResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHoneypotEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The intrusion events.
    shared_ptr<vector<ListHoneypotEventsResponseBody::HoneypotEvents>> honeypotEvents_ {};
    // The pagination information.
    shared_ptr<ListHoneypotEventsResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
