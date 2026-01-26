// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVDROPMETRICSRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVDROPMETRICSRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvDropMetricsRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvDropMetricsRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvDropMetricsRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnvDropMetricsRuleResponseBody() = default ;
    DescribeEnvDropMetricsRuleResponseBody(const DescribeEnvDropMetricsRuleResponseBody &) = default ;
    DescribeEnvDropMetricsRuleResponseBody(DescribeEnvDropMetricsRuleResponseBody &&) = default ;
    DescribeEnvDropMetricsRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvDropMetricsRuleResponseBody() = default ;
    DescribeEnvDropMetricsRuleResponseBody& operator=(const DescribeEnvDropMetricsRuleResponseBody &) = default ;
    DescribeEnvDropMetricsRuleResponseBody& operator=(DescribeEnvDropMetricsRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DropMetrics, dropMetrics_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DropMetrics, dropMetrics_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
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
      virtual bool empty() const override { return this->dropMetrics_ == nullptr
        && this->ruleName_ == nullptr; };
      // dropMetrics Field Functions 
      bool hasDropMetrics() const { return this->dropMetrics_ != nullptr;};
      void deleteDropMetrics() { this->dropMetrics_ = nullptr;};
      inline string getDropMetrics() const { DARABONBA_PTR_GET_DEFAULT(dropMetrics_, "") };
      inline Data& setDropMetrics(string dropMetrics) { DARABONBA_PTR_SET_VALUE(dropMetrics_, dropMetrics) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Data& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    protected:
      // The list of discarded metrics. Separate multiple metrics with line feeds.
      shared_ptr<string> dropMetrics_ {};
      // The name of the discarded metric rule.
      shared_ptr<string> ruleName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeEnvDropMetricsRuleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeEnvDropMetricsRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeEnvDropMetricsRuleResponseBody::Data) };
    inline DescribeEnvDropMetricsRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeEnvDropMetricsRuleResponseBody::Data) };
    inline DescribeEnvDropMetricsRuleResponseBody& setData(const DescribeEnvDropMetricsRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEnvDropMetricsRuleResponseBody& setData(DescribeEnvDropMetricsRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEnvDropMetricsRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnvDropMetricsRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The returned struct.
    shared_ptr<DescribeEnvDropMetricsRuleResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
