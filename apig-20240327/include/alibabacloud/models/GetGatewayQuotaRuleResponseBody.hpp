// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYQUOTARULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYQUOTARULERESPONSEBODY_HPP_
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
  class GetGatewayQuotaRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayQuotaRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayQuotaRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGatewayQuotaRuleResponseBody() = default ;
    GetGatewayQuotaRuleResponseBody(const GetGatewayQuotaRuleResponseBody &) = default ;
    GetGatewayQuotaRuleResponseBody(GetGatewayQuotaRuleResponseBody &&) = default ;
    GetGatewayQuotaRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayQuotaRuleResponseBody() = default ;
    GetGatewayQuotaRuleResponseBody& operator=(const GetGatewayQuotaRuleResponseBody &) = default ;
    GetGatewayQuotaRuleResponseBody& operator=(GetGatewayQuotaRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(baseTimestamp, baseTimestamp_);
        DARABONBA_PTR_TO_JSON(consumerCount, consumerCount_);
        DARABONBA_PTR_TO_JSON(consumers, consumers_);
        DARABONBA_PTR_TO_JSON(periodType, periodType_);
        DARABONBA_PTR_TO_JSON(quotaDimension, quotaDimension_);
        DARABONBA_PTR_TO_JSON(quotaLimit, quotaLimit_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
        DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
        DARABONBA_PTR_TO_JSON(timezone, timezone_);
        DARABONBA_PTR_TO_JSON(windowAlignment, windowAlignment_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(baseTimestamp, baseTimestamp_);
        DARABONBA_PTR_FROM_JSON(consumerCount, consumerCount_);
        DARABONBA_PTR_FROM_JSON(consumers, consumers_);
        DARABONBA_PTR_FROM_JSON(periodType, periodType_);
        DARABONBA_PTR_FROM_JSON(quotaDimension, quotaDimension_);
        DARABONBA_PTR_FROM_JSON(quotaLimit, quotaLimit_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
        DARABONBA_PTR_FROM_JSON(timezone, timezone_);
        DARABONBA_PTR_FROM_JSON(windowAlignment, windowAlignment_);
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
      class Consumers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Consumers& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Consumers& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        Consumers() = default ;
        Consumers(const Consumers &) = default ;
        Consumers(Consumers &&) = default ;
        Consumers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Consumers() = default ;
        Consumers& operator=(const Consumers &) = default ;
        Consumers& operator=(Consumers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Consumers& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Consumers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The ID of the principal (consumer).
        shared_ptr<string> id_ {};
        // The name of the principal (consumer).
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->baseTimestamp_ == nullptr
        && this->consumerCount_ == nullptr && this->consumers_ == nullptr && this->periodType_ == nullptr && this->quotaDimension_ == nullptr && this->quotaLimit_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr && this->timezone_ == nullptr && this->windowAlignment_ == nullptr; };
      // baseTimestamp Field Functions 
      bool hasBaseTimestamp() const { return this->baseTimestamp_ != nullptr;};
      void deleteBaseTimestamp() { this->baseTimestamp_ = nullptr;};
      inline int64_t getBaseTimestamp() const { DARABONBA_PTR_GET_DEFAULT(baseTimestamp_, 0L) };
      inline Data& setBaseTimestamp(int64_t baseTimestamp) { DARABONBA_PTR_SET_VALUE(baseTimestamp_, baseTimestamp) };


      // consumerCount Field Functions 
      bool hasConsumerCount() const { return this->consumerCount_ != nullptr;};
      void deleteConsumerCount() { this->consumerCount_ = nullptr;};
      inline int64_t getConsumerCount() const { DARABONBA_PTR_GET_DEFAULT(consumerCount_, 0L) };
      inline Data& setConsumerCount(int64_t consumerCount) { DARABONBA_PTR_SET_VALUE(consumerCount_, consumerCount) };


      // consumers Field Functions 
      bool hasConsumers() const { return this->consumers_ != nullptr;};
      void deleteConsumers() { this->consumers_ = nullptr;};
      inline const vector<Data::Consumers> & getConsumers() const { DARABONBA_PTR_GET_CONST(consumers_, vector<Data::Consumers>) };
      inline vector<Data::Consumers> getConsumers() { DARABONBA_PTR_GET(consumers_, vector<Data::Consumers>) };
      inline Data& setConsumers(const vector<Data::Consumers> & consumers) { DARABONBA_PTR_SET_VALUE(consumers_, consumers) };
      inline Data& setConsumers(vector<Data::Consumers> && consumers) { DARABONBA_PTR_SET_RVALUE(consumers_, consumers) };


      // periodType Field Functions 
      bool hasPeriodType() const { return this->periodType_ != nullptr;};
      void deletePeriodType() { this->periodType_ = nullptr;};
      inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
      inline Data& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


      // quotaDimension Field Functions 
      bool hasQuotaDimension() const { return this->quotaDimension_ != nullptr;};
      void deleteQuotaDimension() { this->quotaDimension_ = nullptr;};
      inline string getQuotaDimension() const { DARABONBA_PTR_GET_DEFAULT(quotaDimension_, "") };
      inline Data& setQuotaDimension(string quotaDimension) { DARABONBA_PTR_SET_VALUE(quotaDimension_, quotaDimension) };


      // quotaLimit Field Functions 
      bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
      void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
      inline int64_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0L) };
      inline Data& setQuotaLimit(int64_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Data& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Data& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleStatus Field Functions 
      bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
      void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
      inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
      inline Data& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline Data& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      // windowAlignment Field Functions 
      bool hasWindowAlignment() const { return this->windowAlignment_ != nullptr;};
      void deleteWindowAlignment() { this->windowAlignment_ = nullptr;};
      inline string getWindowAlignment() const { DARABONBA_PTR_GET_DEFAULT(windowAlignment_, "") };
      inline Data& setWindowAlignment(string windowAlignment) { DARABONBA_PTR_SET_VALUE(windowAlignment_, windowAlignment) };


    protected:
      // The base timestamp of the period.
      shared_ptr<int64_t> baseTimestamp_ {};
      // The number of consumers associated with the rule.
      shared_ptr<int64_t> consumerCount_ {};
      // The list of principals (consumers) bound to this rule.
      shared_ptr<vector<Data::Consumers>> consumers_ {};
      // The quota period type.
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
      // The reset period type.
      shared_ptr<string> windowAlignment_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGatewayQuotaRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGatewayQuotaRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGatewayQuotaRuleResponseBody::Data) };
    inline GetGatewayQuotaRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGatewayQuotaRuleResponseBody::Data) };
    inline GetGatewayQuotaRuleResponseBody& setData(const GetGatewayQuotaRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGatewayQuotaRuleResponseBody& setData(GetGatewayQuotaRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGatewayQuotaRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGatewayQuotaRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetGatewayQuotaRuleResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
