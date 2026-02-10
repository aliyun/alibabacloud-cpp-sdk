// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTALARMEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTALARMEVENTSRESPONSEBODY_HPP_
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
  class ListHoneypotAlarmEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotAlarmEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HoneypotAlarmEvents, honeypotAlarmEvents_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotAlarmEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneypotAlarmEvents, honeypotAlarmEvents_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListHoneypotAlarmEventsResponseBody() = default ;
    ListHoneypotAlarmEventsResponseBody(const ListHoneypotAlarmEventsResponseBody &) = default ;
    ListHoneypotAlarmEventsResponseBody(ListHoneypotAlarmEventsResponseBody &&) = default ;
    ListHoneypotAlarmEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotAlarmEventsResponseBody() = default ;
    ListHoneypotAlarmEventsResponseBody& operator=(const ListHoneypotAlarmEventsResponseBody &) = default ;
    ListHoneypotAlarmEventsResponseBody& operator=(ListHoneypotAlarmEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
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
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
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
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class HoneypotAlarmEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HoneypotAlarmEvents& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmEventId, alarmEventId_);
        DARABONBA_PTR_TO_JSON(AlarmEventName, alarmEventName_);
        DARABONBA_PTR_TO_JSON(AlarmEventType, alarmEventType_);
        DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
        DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
        DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(MergeFieldList, mergeFieldList_);
        DARABONBA_PTR_TO_JSON(OperateStatus, operateStatus_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      };
      friend void from_json(const Darabonba::Json& j, HoneypotAlarmEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmEventId, alarmEventId_);
        DARABONBA_PTR_FROM_JSON(AlarmEventName, alarmEventName_);
        DARABONBA_PTR_FROM_JSON(AlarmEventType, alarmEventType_);
        DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
        DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
        DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(MergeFieldList, mergeFieldList_);
        DARABONBA_PTR_FROM_JSON(OperateStatus, operateStatus_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      };
      HoneypotAlarmEvents() = default ;
      HoneypotAlarmEvents(const HoneypotAlarmEvents &) = default ;
      HoneypotAlarmEvents(HoneypotAlarmEvents &&) = default ;
      HoneypotAlarmEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HoneypotAlarmEvents() = default ;
      HoneypotAlarmEvents& operator=(const HoneypotAlarmEvents &) = default ;
      HoneypotAlarmEvents& operator=(HoneypotAlarmEvents &&) = default ;
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
        // The extended value that corresponds to the field key.
        shared_ptr<string> fieldExtInfo_ {};
        // The key of the field.
        shared_ptr<string> fieldKey_ {};
        // The type of the field. You can ignore this internal parameter.
        shared_ptr<string> fieldType_ {};
        // The value that corresponds to the field key.
        shared_ptr<string> fieldValue_ {};
      };

      virtual bool empty() const override { return this->alarmEventId_ == nullptr
        && this->alarmEventName_ == nullptr && this->alarmEventType_ == nullptr && this->alarmUniqueInfo_ == nullptr && this->eventCount_ == nullptr && this->firstTime_ == nullptr
        && this->lastTime_ == nullptr && this->mergeFieldList_ == nullptr && this->operateStatus_ == nullptr && this->riskLevel_ == nullptr; };
      // alarmEventId Field Functions 
      bool hasAlarmEventId() const { return this->alarmEventId_ != nullptr;};
      void deleteAlarmEventId() { this->alarmEventId_ = nullptr;};
      inline int64_t getAlarmEventId() const { DARABONBA_PTR_GET_DEFAULT(alarmEventId_, 0L) };
      inline HoneypotAlarmEvents& setAlarmEventId(int64_t alarmEventId) { DARABONBA_PTR_SET_VALUE(alarmEventId_, alarmEventId) };


      // alarmEventName Field Functions 
      bool hasAlarmEventName() const { return this->alarmEventName_ != nullptr;};
      void deleteAlarmEventName() { this->alarmEventName_ = nullptr;};
      inline string getAlarmEventName() const { DARABONBA_PTR_GET_DEFAULT(alarmEventName_, "") };
      inline HoneypotAlarmEvents& setAlarmEventName(string alarmEventName) { DARABONBA_PTR_SET_VALUE(alarmEventName_, alarmEventName) };


      // alarmEventType Field Functions 
      bool hasAlarmEventType() const { return this->alarmEventType_ != nullptr;};
      void deleteAlarmEventType() { this->alarmEventType_ = nullptr;};
      inline string getAlarmEventType() const { DARABONBA_PTR_GET_DEFAULT(alarmEventType_, "") };
      inline HoneypotAlarmEvents& setAlarmEventType(string alarmEventType) { DARABONBA_PTR_SET_VALUE(alarmEventType_, alarmEventType) };


      // alarmUniqueInfo Field Functions 
      bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
      void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
      inline string getAlarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
      inline HoneypotAlarmEvents& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


      // eventCount Field Functions 
      bool hasEventCount() const { return this->eventCount_ != nullptr;};
      void deleteEventCount() { this->eventCount_ = nullptr;};
      inline int32_t getEventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0) };
      inline HoneypotAlarmEvents& setEventCount(int32_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline HoneypotAlarmEvents& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline HoneypotAlarmEvents& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // mergeFieldList Field Functions 
      bool hasMergeFieldList() const { return this->mergeFieldList_ != nullptr;};
      void deleteMergeFieldList() { this->mergeFieldList_ = nullptr;};
      inline const vector<HoneypotAlarmEvents::MergeFieldList> & getMergeFieldList() const { DARABONBA_PTR_GET_CONST(mergeFieldList_, vector<HoneypotAlarmEvents::MergeFieldList>) };
      inline vector<HoneypotAlarmEvents::MergeFieldList> getMergeFieldList() { DARABONBA_PTR_GET(mergeFieldList_, vector<HoneypotAlarmEvents::MergeFieldList>) };
      inline HoneypotAlarmEvents& setMergeFieldList(const vector<HoneypotAlarmEvents::MergeFieldList> & mergeFieldList) { DARABONBA_PTR_SET_VALUE(mergeFieldList_, mergeFieldList) };
      inline HoneypotAlarmEvents& setMergeFieldList(vector<HoneypotAlarmEvents::MergeFieldList> && mergeFieldList) { DARABONBA_PTR_SET_RVALUE(mergeFieldList_, mergeFieldList) };


      // operateStatus Field Functions 
      bool hasOperateStatus() const { return this->operateStatus_ != nullptr;};
      void deleteOperateStatus() { this->operateStatus_ = nullptr;};
      inline int32_t getOperateStatus() const { DARABONBA_PTR_GET_DEFAULT(operateStatus_, 0) };
      inline HoneypotAlarmEvents& setOperateStatus(int32_t operateStatus) { DARABONBA_PTR_SET_VALUE(operateStatus_, operateStatus) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline HoneypotAlarmEvents& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    protected:
      // The event ID.
      shared_ptr<int64_t> alarmEventId_ {};
      // The name of the alert event.
      shared_ptr<string> alarmEventName_ {};
      // The type of the alert event.
      shared_ptr<string> alarmEventType_ {};
      // The unique identifier of the alert event.
      shared_ptr<string> alarmUniqueInfo_ {};
      // The total number of times that the alert event was generated.
      shared_ptr<int32_t> eventCount_ {};
      // The timestamp that indicates the time when the alert event was first detected. Unit: milliseconds.
      shared_ptr<int64_t> firstTime_ {};
      // The timestamp that indicates the time when the alert event was last detected. Unit: milliseconds.
      shared_ptr<int64_t> lastTime_ {};
      // The risk information.
      shared_ptr<vector<HoneypotAlarmEvents::MergeFieldList>> mergeFieldList_ {};
      // The handling status of the alert event. Valid values:
      // 
      // *   **1**: pending
      // *   **2**: ignored
      // *   **4**: confirmed
      shared_ptr<int32_t> operateStatus_ {};
      // The risk level. Valid values:
      // 
      // *   **2**: low
      // *   **3**: medium
      // *   **4**: high
      shared_ptr<string> riskLevel_ {};
    };

    virtual bool empty() const override { return this->honeypotAlarmEvents_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // honeypotAlarmEvents Field Functions 
    bool hasHoneypotAlarmEvents() const { return this->honeypotAlarmEvents_ != nullptr;};
    void deleteHoneypotAlarmEvents() { this->honeypotAlarmEvents_ = nullptr;};
    inline const vector<ListHoneypotAlarmEventsResponseBody::HoneypotAlarmEvents> & getHoneypotAlarmEvents() const { DARABONBA_PTR_GET_CONST(honeypotAlarmEvents_, vector<ListHoneypotAlarmEventsResponseBody::HoneypotAlarmEvents>) };
    inline vector<ListHoneypotAlarmEventsResponseBody::HoneypotAlarmEvents> getHoneypotAlarmEvents() { DARABONBA_PTR_GET(honeypotAlarmEvents_, vector<ListHoneypotAlarmEventsResponseBody::HoneypotAlarmEvents>) };
    inline ListHoneypotAlarmEventsResponseBody& setHoneypotAlarmEvents(const vector<ListHoneypotAlarmEventsResponseBody::HoneypotAlarmEvents> & honeypotAlarmEvents) { DARABONBA_PTR_SET_VALUE(honeypotAlarmEvents_, honeypotAlarmEvents) };
    inline ListHoneypotAlarmEventsResponseBody& setHoneypotAlarmEvents(vector<ListHoneypotAlarmEventsResponseBody::HoneypotAlarmEvents> && honeypotAlarmEvents) { DARABONBA_PTR_SET_RVALUE(honeypotAlarmEvents_, honeypotAlarmEvents) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListHoneypotAlarmEventsResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListHoneypotAlarmEventsResponseBody::PageInfo) };
    inline ListHoneypotAlarmEventsResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListHoneypotAlarmEventsResponseBody::PageInfo) };
    inline ListHoneypotAlarmEventsResponseBody& setPageInfo(const ListHoneypotAlarmEventsResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListHoneypotAlarmEventsResponseBody& setPageInfo(ListHoneypotAlarmEventsResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHoneypotAlarmEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The alert events.
    shared_ptr<vector<ListHoneypotAlarmEventsResponseBody::HoneypotAlarmEvents>> honeypotAlarmEvents_ {};
    // The pagination information.
    shared_ptr<ListHoneypotAlarmEventsResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
