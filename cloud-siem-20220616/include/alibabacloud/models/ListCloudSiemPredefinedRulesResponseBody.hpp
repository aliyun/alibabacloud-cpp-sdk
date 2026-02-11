// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDSIEMPREDEFINEDRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDSIEMPREDEFINEDRULESRESPONSEBODY_HPP_
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
  class ListCloudSiemPredefinedRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudSiemPredefinedRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudSiemPredefinedRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCloudSiemPredefinedRulesResponseBody() = default ;
    ListCloudSiemPredefinedRulesResponseBody(const ListCloudSiemPredefinedRulesResponseBody &) = default ;
    ListCloudSiemPredefinedRulesResponseBody(ListCloudSiemPredefinedRulesResponseBody &&) = default ;
    ListCloudSiemPredefinedRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudSiemPredefinedRulesResponseBody() = default ;
    ListCloudSiemPredefinedRulesResponseBody& operator=(const ListCloudSiemPredefinedRulesResponseBody &) = default ;
    ListCloudSiemPredefinedRulesResponseBody& operator=(ListCloudSiemPredefinedRulesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AttCk, attCk_);
          DARABONBA_PTR_TO_JSON(EventTransferType, eventTransferType_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(RuleDescMds, ruleDescMds_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(RuleNameCn, ruleNameCn_);
          DARABONBA_PTR_TO_JSON(RuleNameEn, ruleNameEn_);
          DARABONBA_PTR_TO_JSON(RuleNameMds, ruleNameMds_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseData& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
          DARABONBA_PTR_FROM_JSON(AttCk, attCk_);
          DARABONBA_PTR_FROM_JSON(EventTransferType, eventTransferType_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(RuleDescMds, ruleDescMds_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(RuleNameCn, ruleNameCn_);
          DARABONBA_PTR_FROM_JSON(RuleNameEn, ruleNameEn_);
          DARABONBA_PTR_FROM_JSON(RuleNameMds, ruleNameMds_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
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
        && this->attCk_ == nullptr && this->eventTransferType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->ruleDescMds_ == nullptr && this->ruleName_ == nullptr && this->ruleNameCn_ == nullptr && this->ruleNameEn_ == nullptr && this->ruleNameMds_ == nullptr
        && this->source_ == nullptr && this->status_ == nullptr && this->threatLevel_ == nullptr; };
        // alertType Field Functions 
        bool hasAlertType() const { return this->alertType_ != nullptr;};
        void deleteAlertType() { this->alertType_ = nullptr;};
        inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
        inline ResponseData& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


        // attCk Field Functions 
        bool hasAttCk() const { return this->attCk_ != nullptr;};
        void deleteAttCk() { this->attCk_ = nullptr;};
        inline string getAttCk() const { DARABONBA_PTR_GET_DEFAULT(attCk_, "") };
        inline ResponseData& setAttCk(string attCk) { DARABONBA_PTR_SET_VALUE(attCk_, attCk) };


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


        // ruleDescMds Field Functions 
        bool hasRuleDescMds() const { return this->ruleDescMds_ != nullptr;};
        void deleteRuleDescMds() { this->ruleDescMds_ = nullptr;};
        inline string getRuleDescMds() const { DARABONBA_PTR_GET_DEFAULT(ruleDescMds_, "") };
        inline ResponseData& setRuleDescMds(string ruleDescMds) { DARABONBA_PTR_SET_VALUE(ruleDescMds_, ruleDescMds) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline ResponseData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // ruleNameCn Field Functions 
        bool hasRuleNameCn() const { return this->ruleNameCn_ != nullptr;};
        void deleteRuleNameCn() { this->ruleNameCn_ = nullptr;};
        inline string getRuleNameCn() const { DARABONBA_PTR_GET_DEFAULT(ruleNameCn_, "") };
        inline ResponseData& setRuleNameCn(string ruleNameCn) { DARABONBA_PTR_SET_VALUE(ruleNameCn_, ruleNameCn) };


        // ruleNameEn Field Functions 
        bool hasRuleNameEn() const { return this->ruleNameEn_ != nullptr;};
        void deleteRuleNameEn() { this->ruleNameEn_ = nullptr;};
        inline string getRuleNameEn() const { DARABONBA_PTR_GET_DEFAULT(ruleNameEn_, "") };
        inline ResponseData& setRuleNameEn(string ruleNameEn) { DARABONBA_PTR_SET_VALUE(ruleNameEn_, ruleNameEn) };


        // ruleNameMds Field Functions 
        bool hasRuleNameMds() const { return this->ruleNameMds_ != nullptr;};
        void deleteRuleNameMds() { this->ruleNameMds_ = nullptr;};
        inline string getRuleNameMds() const { DARABONBA_PTR_GET_DEFAULT(ruleNameMds_, "") };
        inline ResponseData& setRuleNameMds(string ruleNameMds) { DARABONBA_PTR_SET_VALUE(ruleNameMds_, ruleNameMds) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline ResponseData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


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
        // The alert additional field for ATT\\&CK.
        shared_ptr<string> attCk_ {};
        // The method that is used to generate an event. Valid values:
        // 
        // *   default: built-in method.
        // *   singleToSingle: The system generates an event for each alert.
        // *   allToSingle: The system generates an event for alerts within a period of time.
        shared_ptr<string> eventTransferType_ {};
        // The time when the rule was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the rule was modified.
        shared_ptr<string> gmtModified_ {};
        // The ID of the predefined rule.
        shared_ptr<int64_t> id_ {};
        // The internal code of the rule description.
        shared_ptr<string> ruleDescMds_ {};
        // The name of the rule.
        shared_ptr<string> ruleName_ {};
        // The rule name in Chinese.
        shared_ptr<string> ruleNameCn_ {};
        // The rule name in English.
        shared_ptr<string> ruleNameEn_ {};
        // The internal code of the rule name.
        shared_ptr<string> ruleNameMds_ {};
        // The log source of the rule.
        shared_ptr<string> source_ {};
        // The status of the predefined rule. Valid values:
        // 
        // *   0: The rule is in the initial state.
        // *   100: The rule takes effect.
        shared_ptr<int32_t> status_ {};
        // The risk level. Valid values:
        // 
        // *   serious: high.
        // *   suspicious: medium.
        // *   remind: low.
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
    inline ListCloudSiemPredefinedRulesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCloudSiemPredefinedRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCloudSiemPredefinedRulesResponseBody::Data) };
    inline ListCloudSiemPredefinedRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCloudSiemPredefinedRulesResponseBody::Data) };
    inline ListCloudSiemPredefinedRulesResponseBody& setData(const ListCloudSiemPredefinedRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCloudSiemPredefinedRulesResponseBody& setData(ListCloudSiemPredefinedRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCloudSiemPredefinedRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudSiemPredefinedRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCloudSiemPredefinedRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<ListCloudSiemPredefinedRulesResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
