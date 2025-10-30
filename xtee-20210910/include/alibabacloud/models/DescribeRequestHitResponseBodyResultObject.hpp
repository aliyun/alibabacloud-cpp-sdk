// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREQUESTHITRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREQUESTHITRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRequestHitResponseBodyResultObjectRuleHitRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRequestHitResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRequestHitResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(inputs, inputs_);
      DARABONBA_PTR_TO_JSON(outputs, outputs_);
      DARABONBA_PTR_TO_JSON(requestTime, requestTime_);
      DARABONBA_PTR_TO_JSON(ruleHitRecords, ruleHitRecords_);
      DARABONBA_PTR_TO_JSON(sRequestId, sRequestId_);
      DARABONBA_PTR_TO_JSON(totalCost, totalCost_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRequestHitResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(requestTime, requestTime_);
      DARABONBA_PTR_FROM_JSON(ruleHitRecords, ruleHitRecords_);
      DARABONBA_PTR_FROM_JSON(sRequestId, sRequestId_);
      DARABONBA_PTR_FROM_JSON(totalCost, totalCost_);
    };
    DescribeRequestHitResponseBodyResultObject() = default ;
    DescribeRequestHitResponseBodyResultObject(const DescribeRequestHitResponseBodyResultObject &) = default ;
    DescribeRequestHitResponseBodyResultObject(DescribeRequestHitResponseBodyResultObject &&) = default ;
    DescribeRequestHitResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRequestHitResponseBodyResultObject() = default ;
    DescribeRequestHitResponseBodyResultObject& operator=(const DescribeRequestHitResponseBodyResultObject &) = default ;
    DescribeRequestHitResponseBodyResultObject& operator=(DescribeRequestHitResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventCode_ == nullptr
        && return this->eventName_ == nullptr && return this->inputs_ == nullptr && return this->outputs_ == nullptr && return this->requestTime_ == nullptr && return this->ruleHitRecords_ == nullptr
        && return this->sRequestId_ == nullptr && return this->totalCost_ == nullptr; };
    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeRequestHitResponseBodyResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeRequestHitResponseBodyResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline string inputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
    inline DescribeRequestHitResponseBodyResultObject& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline DescribeRequestHitResponseBodyResultObject& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // requestTime Field Functions 
    bool hasRequestTime() const { return this->requestTime_ != nullptr;};
    void deleteRequestTime() { this->requestTime_ = nullptr;};
    inline int64_t requestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, 0L) };
    inline DescribeRequestHitResponseBodyResultObject& setRequestTime(int64_t requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


    // ruleHitRecords Field Functions 
    bool hasRuleHitRecords() const { return this->ruleHitRecords_ != nullptr;};
    void deleteRuleHitRecords() { this->ruleHitRecords_ = nullptr;};
    inline const vector<Models::DescribeRequestHitResponseBodyResultObjectRuleHitRecords> & ruleHitRecords() const { DARABONBA_PTR_GET_CONST(ruleHitRecords_, vector<Models::DescribeRequestHitResponseBodyResultObjectRuleHitRecords>) };
    inline vector<Models::DescribeRequestHitResponseBodyResultObjectRuleHitRecords> ruleHitRecords() { DARABONBA_PTR_GET(ruleHitRecords_, vector<Models::DescribeRequestHitResponseBodyResultObjectRuleHitRecords>) };
    inline DescribeRequestHitResponseBodyResultObject& setRuleHitRecords(const vector<Models::DescribeRequestHitResponseBodyResultObjectRuleHitRecords> & ruleHitRecords) { DARABONBA_PTR_SET_VALUE(ruleHitRecords_, ruleHitRecords) };
    inline DescribeRequestHitResponseBodyResultObject& setRuleHitRecords(vector<Models::DescribeRequestHitResponseBodyResultObjectRuleHitRecords> && ruleHitRecords) { DARABONBA_PTR_SET_RVALUE(ruleHitRecords_, ruleHitRecords) };


    // sRequestId Field Functions 
    bool hasSRequestId() const { return this->sRequestId_ != nullptr;};
    void deleteSRequestId() { this->sRequestId_ = nullptr;};
    inline string sRequestId() const { DARABONBA_PTR_GET_DEFAULT(sRequestId_, "") };
    inline DescribeRequestHitResponseBodyResultObject& setSRequestId(string sRequestId) { DARABONBA_PTR_SET_VALUE(sRequestId_, sRequestId) };


    // totalCost Field Functions 
    bool hasTotalCost() const { return this->totalCost_ != nullptr;};
    void deleteTotalCost() { this->totalCost_ = nullptr;};
    inline int64_t totalCost() const { DARABONBA_PTR_GET_DEFAULT(totalCost_, 0L) };
    inline DescribeRequestHitResponseBodyResultObject& setTotalCost(int64_t totalCost) { DARABONBA_PTR_SET_VALUE(totalCost_, totalCost) };


  protected:
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Input parameters.
    std::shared_ptr<string> inputs_ = nullptr;
    // Output parameters
    std::shared_ptr<string> outputs_ = nullptr;
    // Timestamp of the request.
    std::shared_ptr<int64_t> requestTime_ = nullptr;
    // Details of the executed rules.
    std::shared_ptr<vector<Models::DescribeRequestHitResponseBodyResultObjectRuleHitRecords>> ruleHitRecords_ = nullptr;
    // Request ID
    std::shared_ptr<string> sRequestId_ = nullptr;
    // Total amount of the request
    std::shared_ptr<int64_t> totalCost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
