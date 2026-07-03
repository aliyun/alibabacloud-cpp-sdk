// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYQUOTARULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYQUOTARULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewayQuotaRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayQuotaRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayQuotaRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListGatewayQuotaRulesResponseBody() = default ;
    ListGatewayQuotaRulesResponseBody(const ListGatewayQuotaRulesResponseBody &) = default ;
    ListGatewayQuotaRulesResponseBody(ListGatewayQuotaRulesResponseBody &&) = default ;
    ListGatewayQuotaRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayQuotaRulesResponseBody() = default ;
    ListGatewayQuotaRulesResponseBody& operator=(const ListGatewayQuotaRulesResponseBody &) = default ;
    ListGatewayQuotaRulesResponseBody& operator=(ListGatewayQuotaRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(periodType, periodType_);
          DARABONBA_PTR_TO_JSON(quotaDimension, quotaDimension_);
          DARABONBA_PTR_TO_JSON(quotaLimit, quotaLimit_);
          DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
          DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
          DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
          DARABONBA_PTR_TO_JSON(timezone, timezone_);
          DARABONBA_PTR_TO_JSON(windowAlignment, windowAlignment_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(periodType, periodType_);
          DARABONBA_PTR_FROM_JSON(quotaDimension, quotaDimension_);
          DARABONBA_PTR_FROM_JSON(quotaLimit, quotaLimit_);
          DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
          DARABONBA_PTR_FROM_JSON(timezone, timezone_);
          DARABONBA_PTR_FROM_JSON(windowAlignment, windowAlignment_);
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
        virtual bool empty() const override { return this->periodType_ == nullptr
        && this->quotaDimension_ == nullptr && this->quotaLimit_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr
        && this->timezone_ == nullptr && this->windowAlignment_ == nullptr; };
        // periodType Field Functions 
        bool hasPeriodType() const { return this->periodType_ != nullptr;};
        void deletePeriodType() { this->periodType_ = nullptr;};
        inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
        inline Items& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


        // quotaDimension Field Functions 
        bool hasQuotaDimension() const { return this->quotaDimension_ != nullptr;};
        void deleteQuotaDimension() { this->quotaDimension_ = nullptr;};
        inline string getQuotaDimension() const { DARABONBA_PTR_GET_DEFAULT(quotaDimension_, "") };
        inline Items& setQuotaDimension(string quotaDimension) { DARABONBA_PTR_SET_VALUE(quotaDimension_, quotaDimension) };


        // quotaLimit Field Functions 
        bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
        void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
        inline int64_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0L) };
        inline Items& setQuotaLimit(int64_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline Items& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Items& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // ruleStatus Field Functions 
        bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
        void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
        inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
        inline Items& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


        // timezone Field Functions 
        bool hasTimezone() const { return this->timezone_ != nullptr;};
        void deleteTimezone() { this->timezone_ = nullptr;};
        inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
        inline Items& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


        // windowAlignment Field Functions 
        bool hasWindowAlignment() const { return this->windowAlignment_ != nullptr;};
        void deleteWindowAlignment() { this->windowAlignment_ = nullptr;};
        inline string getWindowAlignment() const { DARABONBA_PTR_GET_DEFAULT(windowAlignment_, "") };
        inline Items& setWindowAlignment(string windowAlignment) { DARABONBA_PTR_SET_VALUE(windowAlignment_, windowAlignment) };


      protected:
        // The period type.
        shared_ptr<string> periodType_ {};
        // The quota dimension.
        shared_ptr<string> quotaDimension_ {};
        // The quota limit.
        shared_ptr<int64_t> quotaLimit_ {};
        // The rule ID.
        shared_ptr<string> ruleId_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule status.
        shared_ptr<string> ruleStatus_ {};
        // The time zone for the calendar period, in UTC+x format.
        shared_ptr<string> timezone_ {};
        // The reset period type. Only calendar periods are supported, which means windowAlignment="calendar".
        shared_ptr<string> windowAlignment_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The list of rules.
      shared_ptr<vector<Data::Items>> items_ {};
      // The current page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The current page size.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListGatewayQuotaRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListGatewayQuotaRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListGatewayQuotaRulesResponseBody::Data) };
    inline ListGatewayQuotaRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListGatewayQuotaRulesResponseBody::Data) };
    inline ListGatewayQuotaRulesResponseBody& setData(const ListGatewayQuotaRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewayQuotaRulesResponseBody& setData(ListGatewayQuotaRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListGatewayQuotaRulesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGatewayQuotaRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListGatewayQuotaRulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayQuotaRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<ListGatewayQuotaRulesResponseBody::Data> data_ {};
    // The maximum number of records to retrieve in a single request. This parameter is not supported.
    shared_ptr<int32_t> maxResults_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The pagination token. This parameter is not supported.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
