// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDSIEMCUSTOMIZERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDSIEMCUSTOMIZERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListCloudSiemCustomizeRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudSiemCustomizeRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudSiemCustomizeRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCloudSiemCustomizeRulesResponseBody() = default ;
    ListCloudSiemCustomizeRulesResponseBody(const ListCloudSiemCustomizeRulesResponseBody &) = default ;
    ListCloudSiemCustomizeRulesResponseBody(ListCloudSiemCustomizeRulesResponseBody &&) = default ;
    ListCloudSiemCustomizeRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudSiemCustomizeRulesResponseBody() = default ;
    ListCloudSiemCustomizeRulesResponseBody& operator=(const ListCloudSiemCustomizeRulesResponseBody &) = default ;
    ListCloudSiemCustomizeRulesResponseBody& operator=(ListCloudSiemCustomizeRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResponseData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResponseData& obj) { 
          DARABONBA_PTR_TO_JSON(AlertType, alertType_);
          DARABONBA_PTR_TO_JSON(AlertTypeMds, alertTypeMds_);
          DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
          DARABONBA_PTR_TO_JSON(AttCk, attCk_);
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(EventTransferExt, eventTransferExt_);
          DARABONBA_PTR_TO_JSON(EventTransferSwitch, eventTransferSwitch_);
          DARABONBA_PTR_TO_JSON(EventTransferType, eventTransferType_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LogSource, logSource_);
          DARABONBA_PTR_TO_JSON(LogSourceMds, logSourceMds_);
          DARABONBA_PTR_TO_JSON(LogType, logType_);
          DARABONBA_PTR_TO_JSON(LogTypeMds, logTypeMds_);
          DARABONBA_PTR_TO_JSON(QueryCycle, queryCycle_);
          DARABONBA_PTR_TO_JSON(RuleCondition, ruleCondition_);
          DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
          DARABONBA_PTR_TO_JSON(RuleGroup, ruleGroup_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(RuleThreshold, ruleThreshold_);
          DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseData& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
          DARABONBA_PTR_FROM_JSON(AlertTypeMds, alertTypeMds_);
          DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
          DARABONBA_PTR_FROM_JSON(AttCk, attCk_);
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(EventTransferExt, eventTransferExt_);
          DARABONBA_PTR_FROM_JSON(EventTransferSwitch, eventTransferSwitch_);
          DARABONBA_PTR_FROM_JSON(EventTransferType, eventTransferType_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LogSource, logSource_);
          DARABONBA_PTR_FROM_JSON(LogSourceMds, logSourceMds_);
          DARABONBA_PTR_FROM_JSON(LogType, logType_);
          DARABONBA_PTR_FROM_JSON(LogTypeMds, logTypeMds_);
          DARABONBA_PTR_FROM_JSON(QueryCycle, queryCycle_);
          DARABONBA_PTR_FROM_JSON(RuleCondition, ruleCondition_);
          DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
          DARABONBA_PTR_FROM_JSON(RuleGroup, ruleGroup_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(RuleThreshold, ruleThreshold_);
          DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
        };
        ResponseData() = default ;
        ResponseData(const ResponseData &) = default ;
        ResponseData(ResponseData &&) = default ;
        ResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResponseData() = default ;
        ResponseData& operator=(const ResponseData &) = default ;
        ResponseData& operator=(ResponseData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alertType_ == nullptr
        && this->alertTypeMds_ == nullptr && this->aliuid_ == nullptr && this->attCk_ == nullptr && this->dataType_ == nullptr && this->eventTransferExt_ == nullptr
        && this->eventTransferSwitch_ == nullptr && this->eventTransferType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->logSource_ == nullptr && this->logSourceMds_ == nullptr && this->logType_ == nullptr && this->logTypeMds_ == nullptr && this->queryCycle_ == nullptr
        && this->ruleCondition_ == nullptr && this->ruleDesc_ == nullptr && this->ruleGroup_ == nullptr && this->ruleName_ == nullptr && this->ruleThreshold_ == nullptr
        && this->ruleType_ == nullptr && this->status_ == nullptr && this->threatLevel_ == nullptr; };
        // alertType Field Functions 
        bool hasAlertType() const { return this->alertType_ != nullptr;};
        void deleteAlertType() { this->alertType_ = nullptr;};
        inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
        inline ResponseData& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


        // alertTypeMds Field Functions 
        bool hasAlertTypeMds() const { return this->alertTypeMds_ != nullptr;};
        void deleteAlertTypeMds() { this->alertTypeMds_ = nullptr;};
        inline string getAlertTypeMds() const { DARABONBA_PTR_GET_DEFAULT(alertTypeMds_, "") };
        inline ResponseData& setAlertTypeMds(string alertTypeMds) { DARABONBA_PTR_SET_VALUE(alertTypeMds_, alertTypeMds) };


        // aliuid Field Functions 
        bool hasAliuid() const { return this->aliuid_ != nullptr;};
        void deleteAliuid() { this->aliuid_ = nullptr;};
        inline int64_t getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
        inline ResponseData& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


        // attCk Field Functions 
        bool hasAttCk() const { return this->attCk_ != nullptr;};
        void deleteAttCk() { this->attCk_ = nullptr;};
        inline string getAttCk() const { DARABONBA_PTR_GET_DEFAULT(attCk_, "") };
        inline ResponseData& setAttCk(string attCk) { DARABONBA_PTR_SET_VALUE(attCk_, attCk) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline int32_t getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
        inline ResponseData& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // eventTransferExt Field Functions 
        bool hasEventTransferExt() const { return this->eventTransferExt_ != nullptr;};
        void deleteEventTransferExt() { this->eventTransferExt_ = nullptr;};
        inline string getEventTransferExt() const { DARABONBA_PTR_GET_DEFAULT(eventTransferExt_, "") };
        inline ResponseData& setEventTransferExt(string eventTransferExt) { DARABONBA_PTR_SET_VALUE(eventTransferExt_, eventTransferExt) };


        // eventTransferSwitch Field Functions 
        bool hasEventTransferSwitch() const { return this->eventTransferSwitch_ != nullptr;};
        void deleteEventTransferSwitch() { this->eventTransferSwitch_ = nullptr;};
        inline int32_t getEventTransferSwitch() const { DARABONBA_PTR_GET_DEFAULT(eventTransferSwitch_, 0) };
        inline ResponseData& setEventTransferSwitch(int32_t eventTransferSwitch) { DARABONBA_PTR_SET_VALUE(eventTransferSwitch_, eventTransferSwitch) };


        // eventTransferType Field Functions 
        bool hasEventTransferType() const { return this->eventTransferType_ != nullptr;};
        void deleteEventTransferType() { this->eventTransferType_ = nullptr;};
        inline string getEventTransferType() const { DARABONBA_PTR_GET_DEFAULT(eventTransferType_, "") };
        inline ResponseData& setEventTransferType(string eventTransferType) { DARABONBA_PTR_SET_VALUE(eventTransferType_, eventTransferType) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // logSource Field Functions 
        bool hasLogSource() const { return this->logSource_ != nullptr;};
        void deleteLogSource() { this->logSource_ = nullptr;};
        inline string getLogSource() const { DARABONBA_PTR_GET_DEFAULT(logSource_, "") };
        inline ResponseData& setLogSource(string logSource) { DARABONBA_PTR_SET_VALUE(logSource_, logSource) };


        // logSourceMds Field Functions 
        bool hasLogSourceMds() const { return this->logSourceMds_ != nullptr;};
        void deleteLogSourceMds() { this->logSourceMds_ = nullptr;};
        inline string getLogSourceMds() const { DARABONBA_PTR_GET_DEFAULT(logSourceMds_, "") };
        inline ResponseData& setLogSourceMds(string logSourceMds) { DARABONBA_PTR_SET_VALUE(logSourceMds_, logSourceMds) };


        // logType Field Functions 
        bool hasLogType() const { return this->logType_ != nullptr;};
        void deleteLogType() { this->logType_ = nullptr;};
        inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
        inline ResponseData& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


        // logTypeMds Field Functions 
        bool hasLogTypeMds() const { return this->logTypeMds_ != nullptr;};
        void deleteLogTypeMds() { this->logTypeMds_ = nullptr;};
        inline string getLogTypeMds() const { DARABONBA_PTR_GET_DEFAULT(logTypeMds_, "") };
        inline ResponseData& setLogTypeMds(string logTypeMds) { DARABONBA_PTR_SET_VALUE(logTypeMds_, logTypeMds) };


        // queryCycle Field Functions 
        bool hasQueryCycle() const { return this->queryCycle_ != nullptr;};
        void deleteQueryCycle() { this->queryCycle_ = nullptr;};
        inline string getQueryCycle() const { DARABONBA_PTR_GET_DEFAULT(queryCycle_, "") };
        inline ResponseData& setQueryCycle(string queryCycle) { DARABONBA_PTR_SET_VALUE(queryCycle_, queryCycle) };


        // ruleCondition Field Functions 
        bool hasRuleCondition() const { return this->ruleCondition_ != nullptr;};
        void deleteRuleCondition() { this->ruleCondition_ = nullptr;};
        inline string getRuleCondition() const { DARABONBA_PTR_GET_DEFAULT(ruleCondition_, "") };
        inline ResponseData& setRuleCondition(string ruleCondition) { DARABONBA_PTR_SET_VALUE(ruleCondition_, ruleCondition) };


        // ruleDesc Field Functions 
        bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
        void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
        inline string getRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
        inline ResponseData& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


        // ruleGroup Field Functions 
        bool hasRuleGroup() const { return this->ruleGroup_ != nullptr;};
        void deleteRuleGroup() { this->ruleGroup_ = nullptr;};
        inline string getRuleGroup() const { DARABONBA_PTR_GET_DEFAULT(ruleGroup_, "") };
        inline ResponseData& setRuleGroup(string ruleGroup) { DARABONBA_PTR_SET_VALUE(ruleGroup_, ruleGroup) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline ResponseData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // ruleThreshold Field Functions 
        bool hasRuleThreshold() const { return this->ruleThreshold_ != nullptr;};
        void deleteRuleThreshold() { this->ruleThreshold_ = nullptr;};
        inline string getRuleThreshold() const { DARABONBA_PTR_GET_DEFAULT(ruleThreshold_, "") };
        inline ResponseData& setRuleThreshold(string ruleThreshold) { DARABONBA_PTR_SET_VALUE(ruleThreshold_, ruleThreshold) };


        // ruleType Field Functions 
        bool hasRuleType() const { return this->ruleType_ != nullptr;};
        void deleteRuleType() { this->ruleType_ = nullptr;};
        inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
        inline ResponseData& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline ResponseData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // threatLevel Field Functions 
        bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
        void deleteThreatLevel() { this->threatLevel_ = nullptr;};
        inline string getThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
        inline ResponseData& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


      protected:
        // The type of the risk.
        shared_ptr<string> alertType_ {};
        // The internal code of the risk type.
        shared_ptr<string> alertTypeMds_ {};
        // The ID of the Alibaba Cloud account in SIEM.
        shared_ptr<int64_t> aliuid_ {};
        // The alert additional field for ATT\\&CK.
        shared_ptr<string> attCk_ {};
        // The type of the view. Valid values:
        // 
        // 0: view of the current Alibaba Cloud account. 1: view of all accounts for the enterprise.
        shared_ptr<int32_t> dataType_ {};
        // The extended information about event generation. If the value of **eventTransferType** is **allToSingle**, the value of this parameter indicates the length and unit of the alert aggregation window. The HTML escape characters are reversed.
        shared_ptr<string> eventTransferExt_ {};
        // Indicates whether the system generates an event for the alert. Valid values:
        // 
        // *   **0**: no.
        // *   **1**: yes.
        shared_ptr<int32_t> eventTransferSwitch_ {};
        // The method that is used to generate an event. Valid values:
        // 
        // *   **default**: built-in method.
        // *   **singleToSingle**: The system generates an event for each alert.
        // *   **allToSingle**: The system generates an event for alerts within a period of time.
        shared_ptr<string> eventTransferType_ {};
        // The time when the custom rule was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the custom rule was last updated.
        shared_ptr<string> gmtModified_ {};
        // The ID of the custom rule.
        shared_ptr<int64_t> id_ {};
        // The log source of the rule.
        shared_ptr<string> logSource_ {};
        // The internal code of the log source.
        shared_ptr<string> logSourceMds_ {};
        // The log type of the rule.
        shared_ptr<string> logType_ {};
        // The internal code of the log type.
        shared_ptr<string> logTypeMds_ {};
        // The window length of the rule. The HTML escape characters are reversed.
        shared_ptr<string> queryCycle_ {};
        // The query condition of the rule. The value is in the JSON format. The HTML escape characters are reversed.
        shared_ptr<string> ruleCondition_ {};
        // The description of the rule.
        shared_ptr<string> ruleDesc_ {};
        // The log aggregation field. The value is in the JSON format. The HTML escape characters are reversed.
        shared_ptr<string> ruleGroup_ {};
        // The name of the rule.
        shared_ptr<string> ruleName_ {};
        // The threshold configurations of the rule in the JSON format. The HTML escape characters are reversed.
        shared_ptr<string> ruleThreshold_ {};
        // The type of the rule. Valid values:
        // 
        // *   **predefine**
        // *   **customize**
        shared_ptr<string> ruleType_ {};
        // The status of the rule. Valid values:
        // 
        // *   **0**: The rule is in the initial state.
        // *   **10**: The simulation data is tested.
        // *   **15**: The business data is being tested.
        // *   **20**: The business data test is complete.
        // *   **100**: The rule is in effect.
        shared_ptr<int32_t> status_ {};
        // The risk level. Valid values:
        // 
        // *   **serious**: high-risk.
        // *   **suspicious**: medium-risk.
        // *   **remind**: low-risk.
        shared_ptr<string> threatLevel_ {};
      };

      class PageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
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
        virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
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
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline PageInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The current page number.
        shared_ptr<int32_t> currentPage_ {};
        // The number of entries per page.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of entries returned.
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->responseData_ == nullptr; };
      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


      // responseData Field Functions 
      bool hasResponseData() const { return this->responseData_ != nullptr;};
      void deleteResponseData() { this->responseData_ = nullptr;};
      inline const vector<Data::ResponseData> & getResponseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Data::ResponseData>) };
      inline vector<Data::ResponseData> getResponseData() { DARABONBA_PTR_GET(responseData_, vector<Data::ResponseData>) };
      inline Data& setResponseData(const vector<Data::ResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
      inline Data& setResponseData(vector<Data::ResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


    protected:
      // The pagination information.
      shared_ptr<Data::PageInfo> pageInfo_ {};
      // The detailed data.
      shared_ptr<vector<Data::ResponseData>> responseData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListCloudSiemCustomizeRulesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCloudSiemCustomizeRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCloudSiemCustomizeRulesResponseBody::Data) };
    inline ListCloudSiemCustomizeRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCloudSiemCustomizeRulesResponseBody::Data) };
    inline ListCloudSiemCustomizeRulesResponseBody& setData(const ListCloudSiemCustomizeRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCloudSiemCustomizeRulesResponseBody& setData(ListCloudSiemCustomizeRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCloudSiemCustomizeRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudSiemCustomizeRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCloudSiemCustomizeRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<ListCloudSiemCustomizeRulesResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
