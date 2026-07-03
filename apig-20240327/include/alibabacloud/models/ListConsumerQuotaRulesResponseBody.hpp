// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERQUOTARULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERQUOTARULESRESPONSEBODY_HPP_
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
  class ListConsumerQuotaRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerQuotaRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerQuotaRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListConsumerQuotaRulesResponseBody() = default ;
    ListConsumerQuotaRulesResponseBody(const ListConsumerQuotaRulesResponseBody &) = default ;
    ListConsumerQuotaRulesResponseBody(ListConsumerQuotaRulesResponseBody &&) = default ;
    ListConsumerQuotaRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerQuotaRulesResponseBody() = default ;
    ListConsumerQuotaRulesResponseBody& operator=(const ListConsumerQuotaRulesResponseBody &) = default ;
    ListConsumerQuotaRulesResponseBody& operator=(ListConsumerQuotaRulesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(gatewayName, gatewayName_);
          DARABONBA_PTR_TO_JSON(periodMultiplier, periodMultiplier_);
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
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(gatewayName, gatewayName_);
          DARABONBA_PTR_FROM_JSON(periodMultiplier, periodMultiplier_);
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
        virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->gatewayName_ == nullptr && this->periodMultiplier_ == nullptr && this->periodType_ == nullptr && this->quotaDimension_ == nullptr && this->quotaLimit_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr && this->timezone_ == nullptr && this->windowAlignment_ == nullptr; };
        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline Items& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // gatewayName Field Functions 
        bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
        void deleteGatewayName() { this->gatewayName_ = nullptr;};
        inline string getGatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
        inline Items& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


        // periodMultiplier Field Functions 
        bool hasPeriodMultiplier() const { return this->periodMultiplier_ != nullptr;};
        void deletePeriodMultiplier() { this->periodMultiplier_ = nullptr;};
        inline string getPeriodMultiplier() const { DARABONBA_PTR_GET_DEFAULT(periodMultiplier_, "") };
        inline Items& setPeriodMultiplier(string periodMultiplier) { DARABONBA_PTR_SET_VALUE(periodMultiplier_, periodMultiplier) };


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
        // The ID of the gateway to which the rule belongs.
        shared_ptr<string> gatewayId_ {};
        // The name of the gateway to which the rule belongs.
        shared_ptr<string> gatewayName_ {};
        // The period multiplier, which specifies the number of periods after which the quota is reset. This parameter is returned only when the rule uses a custom cycle. Minimum value: 1. Maximum value: 60.
        shared_ptr<string> periodMultiplier_ {};
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
        // The time zone corresponding to the natural cycle, in UTC+x format.
        shared_ptr<string> timezone_ {};
        // The cycle type. Valid values:
        // - calendar: Natural cycle.
        // - epoch: Custom cycle.
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
      // The total number of configured quota rules.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListConsumerQuotaRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListConsumerQuotaRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListConsumerQuotaRulesResponseBody::Data) };
    inline ListConsumerQuotaRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListConsumerQuotaRulesResponseBody::Data) };
    inline ListConsumerQuotaRulesResponseBody& setData(const ListConsumerQuotaRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListConsumerQuotaRulesResponseBody& setData(ListConsumerQuotaRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListConsumerQuotaRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConsumerQuotaRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<ListConsumerQuotaRulesResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
