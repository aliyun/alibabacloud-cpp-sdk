// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREQUESTHITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREQUESTHITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRequestHitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRequestHitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRequestHitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeRequestHitResponseBody() = default ;
    DescribeRequestHitResponseBody(const DescribeRequestHitResponseBody &) = default ;
    DescribeRequestHitResponseBody(DescribeRequestHitResponseBody &&) = default ;
    DescribeRequestHitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRequestHitResponseBody() = default ;
    DescribeRequestHitResponseBody& operator=(const DescribeRequestHitResponseBody &) = default ;
    DescribeRequestHitResponseBody& operator=(DescribeRequestHitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(eventName, eventName_);
        DARABONBA_PTR_TO_JSON(inputs, inputs_);
        DARABONBA_PTR_TO_JSON(outputs, outputs_);
        DARABONBA_PTR_TO_JSON(requestTime, requestTime_);
        DARABONBA_PTR_TO_JSON(ruleHitRecords, ruleHitRecords_);
        DARABONBA_PTR_TO_JSON(sRequestId, sRequestId_);
        DARABONBA_PTR_TO_JSON(totalCost, totalCost_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(eventName, eventName_);
        DARABONBA_PTR_FROM_JSON(inputs, inputs_);
        DARABONBA_PTR_FROM_JSON(outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(requestTime, requestTime_);
        DARABONBA_PTR_FROM_JSON(ruleHitRecords, ruleHitRecords_);
        DARABONBA_PTR_FROM_JSON(sRequestId, sRequestId_);
        DARABONBA_PTR_FROM_JSON(totalCost, totalCost_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleHitRecords : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleHitRecords& obj) { 
          DARABONBA_PTR_TO_JSON(cost, cost_);
          DARABONBA_PTR_TO_JSON(hitSuccessful, hitSuccessful_);
          DARABONBA_PTR_TO_JSON(isShowDetail, isShowDetail_);
          DARABONBA_PTR_TO_JSON(order, order_);
          DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
          DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
          DARABONBA_PTR_TO_JSON(ruleSnapshotId, ruleSnapshotId_);
          DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
        };
        friend void from_json(const Darabonba::Json& j, RuleHitRecords& obj) { 
          DARABONBA_PTR_FROM_JSON(cost, cost_);
          DARABONBA_PTR_FROM_JSON(hitSuccessful, hitSuccessful_);
          DARABONBA_PTR_FROM_JSON(isShowDetail, isShowDetail_);
          DARABONBA_PTR_FROM_JSON(order, order_);
          DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(ruleSnapshotId, ruleSnapshotId_);
          DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
        };
        RuleHitRecords() = default ;
        RuleHitRecords(const RuleHitRecords &) = default ;
        RuleHitRecords(RuleHitRecords &&) = default ;
        RuleHitRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleHitRecords() = default ;
        RuleHitRecords& operator=(const RuleHitRecords &) = default ;
        RuleHitRecords& operator=(RuleHitRecords &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cost_ == nullptr
        && this->hitSuccessful_ == nullptr && this->isShowDetail_ == nullptr && this->order_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr
        && this->ruleSnapshotId_ == nullptr && this->ruleStatus_ == nullptr; };
        // cost Field Functions 
        bool hasCost() const { return this->cost_ != nullptr;};
        void deleteCost() { this->cost_ = nullptr;};
        inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
        inline RuleHitRecords& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


        // hitSuccessful Field Functions 
        bool hasHitSuccessful() const { return this->hitSuccessful_ != nullptr;};
        void deleteHitSuccessful() { this->hitSuccessful_ = nullptr;};
        inline bool getHitSuccessful() const { DARABONBA_PTR_GET_DEFAULT(hitSuccessful_, false) };
        inline RuleHitRecords& setHitSuccessful(bool hitSuccessful) { DARABONBA_PTR_SET_VALUE(hitSuccessful_, hitSuccessful) };


        // isShowDetail Field Functions 
        bool hasIsShowDetail() const { return this->isShowDetail_ != nullptr;};
        void deleteIsShowDetail() { this->isShowDetail_ = nullptr;};
        inline bool getIsShowDetail() const { DARABONBA_PTR_GET_DEFAULT(isShowDetail_, false) };
        inline RuleHitRecords& setIsShowDetail(bool isShowDetail) { DARABONBA_PTR_SET_VALUE(isShowDetail_, isShowDetail) };


        // order Field Functions 
        bool hasOrder() const { return this->order_ != nullptr;};
        void deleteOrder() { this->order_ = nullptr;};
        inline int32_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
        inline RuleHitRecords& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline RuleHitRecords& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline RuleHitRecords& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // ruleSnapshotId Field Functions 
        bool hasRuleSnapshotId() const { return this->ruleSnapshotId_ != nullptr;};
        void deleteRuleSnapshotId() { this->ruleSnapshotId_ = nullptr;};
        inline string getRuleSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(ruleSnapshotId_, "") };
        inline RuleHitRecords& setRuleSnapshotId(string ruleSnapshotId) { DARABONBA_PTR_SET_VALUE(ruleSnapshotId_, ruleSnapshotId) };


        // ruleStatus Field Functions 
        bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
        void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
        inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
        inline RuleHitRecords& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


      protected:
        // Duration
        shared_ptr<int32_t> cost_ {};
        // Whether the rule was hit.
        shared_ptr<bool> hitSuccessful_ {};
        // Whether to show details
        shared_ptr<bool> isShowDetail_ {};
        // Order.
        shared_ptr<int32_t> order_ {};
        // Policy ID
        shared_ptr<string> ruleId_ {};
        // Policy name
        shared_ptr<string> ruleName_ {};
        // Rule snapshot ID
        shared_ptr<string> ruleSnapshotId_ {};
        // Policy status
        shared_ptr<string> ruleStatus_ {};
      };

      virtual bool empty() const override { return this->eventCode_ == nullptr
        && this->eventName_ == nullptr && this->inputs_ == nullptr && this->outputs_ == nullptr && this->requestTime_ == nullptr && this->ruleHitRecords_ == nullptr
        && this->sRequestId_ == nullptr && this->totalCost_ == nullptr; };
      // eventCode Field Functions 
      bool hasEventCode() const { return this->eventCode_ != nullptr;};
      void deleteEventCode() { this->eventCode_ = nullptr;};
      inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
      inline ResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline ResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // inputs Field Functions 
      bool hasInputs() const { return this->inputs_ != nullptr;};
      void deleteInputs() { this->inputs_ = nullptr;};
      inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
      inline ResultObject& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
      inline ResultObject& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


      // requestTime Field Functions 
      bool hasRequestTime() const { return this->requestTime_ != nullptr;};
      void deleteRequestTime() { this->requestTime_ = nullptr;};
      inline int64_t getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, 0L) };
      inline ResultObject& setRequestTime(int64_t requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


      // ruleHitRecords Field Functions 
      bool hasRuleHitRecords() const { return this->ruleHitRecords_ != nullptr;};
      void deleteRuleHitRecords() { this->ruleHitRecords_ = nullptr;};
      inline const vector<ResultObject::RuleHitRecords> & getRuleHitRecords() const { DARABONBA_PTR_GET_CONST(ruleHitRecords_, vector<ResultObject::RuleHitRecords>) };
      inline vector<ResultObject::RuleHitRecords> getRuleHitRecords() { DARABONBA_PTR_GET(ruleHitRecords_, vector<ResultObject::RuleHitRecords>) };
      inline ResultObject& setRuleHitRecords(const vector<ResultObject::RuleHitRecords> & ruleHitRecords) { DARABONBA_PTR_SET_VALUE(ruleHitRecords_, ruleHitRecords) };
      inline ResultObject& setRuleHitRecords(vector<ResultObject::RuleHitRecords> && ruleHitRecords) { DARABONBA_PTR_SET_RVALUE(ruleHitRecords_, ruleHitRecords) };


      // sRequestId Field Functions 
      bool hasSRequestId() const { return this->sRequestId_ != nullptr;};
      void deleteSRequestId() { this->sRequestId_ = nullptr;};
      inline string getSRequestId() const { DARABONBA_PTR_GET_DEFAULT(sRequestId_, "") };
      inline ResultObject& setSRequestId(string sRequestId) { DARABONBA_PTR_SET_VALUE(sRequestId_, sRequestId) };


      // totalCost Field Functions 
      bool hasTotalCost() const { return this->totalCost_ != nullptr;};
      void deleteTotalCost() { this->totalCost_ = nullptr;};
      inline int64_t getTotalCost() const { DARABONBA_PTR_GET_DEFAULT(totalCost_, 0L) };
      inline ResultObject& setTotalCost(int64_t totalCost) { DARABONBA_PTR_SET_VALUE(totalCost_, totalCost) };


    protected:
      // Event code
      shared_ptr<string> eventCode_ {};
      // Event name.
      shared_ptr<string> eventName_ {};
      // Input parameters.
      shared_ptr<string> inputs_ {};
      // Output parameters
      shared_ptr<string> outputs_ {};
      // Timestamp of the request.
      shared_ptr<int64_t> requestTime_ {};
      // Details of the executed rules.
      shared_ptr<vector<ResultObject::RuleHitRecords>> ruleHitRecords_ {};
      // Request ID
      shared_ptr<string> sRequestId_ {};
      // Total amount of the request
      shared_ptr<int64_t> totalCost_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRequestHitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeRequestHitResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeRequestHitResponseBody::ResultObject) };
    inline DescribeRequestHitResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeRequestHitResponseBody::ResultObject) };
    inline DescribeRequestHitResponseBody& setResultObject(const DescribeRequestHitResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeRequestHitResponseBody& setResultObject(DescribeRequestHitResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<DescribeRequestHitResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
