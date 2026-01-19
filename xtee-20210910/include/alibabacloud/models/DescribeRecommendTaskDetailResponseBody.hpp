// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDTASKDETAILRESPONSEBODY_HPP_
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
  class DescribeRecommendTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeRecommendTaskDetailResponseBody() = default ;
    DescribeRecommendTaskDetailResponseBody(const DescribeRecommendTaskDetailResponseBody &) = default ;
    DescribeRecommendTaskDetailResponseBody(DescribeRecommendTaskDetailResponseBody &&) = default ;
    DescribeRecommendTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendTaskDetailResponseBody() = default ;
    DescribeRecommendTaskDetailResponseBody& operator=(const DescribeRecommendTaskDetailResponseBody &) = default ;
    DescribeRecommendTaskDetailResponseBody& operator=(DescribeRecommendTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(eventName, eventName_);
        DARABONBA_PTR_TO_JSON(expectVelocities, expectVelocities_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(normalSize, normalSize_);
        DARABONBA_PTR_TO_JSON(recommendRuleDTOs, recommendRuleDTOs_);
        DARABONBA_PTR_TO_JSON(recommendVariableDTOs, recommendVariableDTOs_);
        DARABONBA_PTR_TO_JSON(riskSize, riskSize_);
        DARABONBA_PTR_TO_JSON(sampleName, sampleName_);
        DARABONBA_PTR_TO_JSON(sampleScene, sampleScene_);
        DARABONBA_PTR_TO_JSON(sampleSceneName, sampleSceneName_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskName, taskName_);
        DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(eventName, eventName_);
        DARABONBA_PTR_FROM_JSON(expectVelocities, expectVelocities_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(normalSize, normalSize_);
        DARABONBA_PTR_FROM_JSON(recommendRuleDTOs, recommendRuleDTOs_);
        DARABONBA_PTR_FROM_JSON(recommendVariableDTOs, recommendVariableDTOs_);
        DARABONBA_PTR_FROM_JSON(riskSize, riskSize_);
        DARABONBA_PTR_FROM_JSON(sampleName, sampleName_);
        DARABONBA_PTR_FROM_JSON(sampleScene, sampleScene_);
        DARABONBA_PTR_FROM_JSON(sampleSceneName, sampleSceneName_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskName, taskName_);
        DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
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
      class RecommendVariableDTOs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecommendVariableDTOs& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, RecommendVariableDTOs& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(title, title_);
        };
        RecommendVariableDTOs() = default ;
        RecommendVariableDTOs(const RecommendVariableDTOs &) = default ;
        RecommendVariableDTOs(RecommendVariableDTOs &&) = default ;
        RecommendVariableDTOs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecommendVariableDTOs() = default ;
        RecommendVariableDTOs& operator=(const RecommendVariableDTOs &) = default ;
        RecommendVariableDTOs& operator=(RecommendVariableDTOs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->title_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline RecommendVariableDTOs& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline RecommendVariableDTOs& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // Primary key ID
        shared_ptr<int64_t> id_ {};
        // Title
        shared_ptr<string> title_ {};
      };

      class RecommendRuleDTOs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecommendRuleDTOs& obj) { 
          DARABONBA_PTR_TO_JSON(computeExpression, computeExpression_);
          DARABONBA_PTR_TO_JSON(hitSample, hitSample_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(notHitSample, notHitSample_);
          DARABONBA_PTR_TO_JSON(recommendRules, recommendRules_);
          DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
          DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(velocities, velocities_);
        };
        friend void from_json(const Darabonba::Json& j, RecommendRuleDTOs& obj) { 
          DARABONBA_PTR_FROM_JSON(computeExpression, computeExpression_);
          DARABONBA_PTR_FROM_JSON(hitSample, hitSample_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(notHitSample, notHitSample_);
          DARABONBA_PTR_FROM_JSON(recommendRules, recommendRules_);
          DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(velocities, velocities_);
        };
        RecommendRuleDTOs() = default ;
        RecommendRuleDTOs(const RecommendRuleDTOs &) = default ;
        RecommendRuleDTOs(RecommendRuleDTOs &&) = default ;
        RecommendRuleDTOs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecommendRuleDTOs() = default ;
        RecommendRuleDTOs& operator=(const RecommendRuleDTOs &) = default ;
        RecommendRuleDTOs& operator=(RecommendRuleDTOs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RecommendRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RecommendRules& obj) { 
            DARABONBA_PTR_TO_JSON(left, left_);
            DARABONBA_PTR_TO_JSON(operator, operator_);
            DARABONBA_PTR_TO_JSON(right, right_);
          };
          friend void from_json(const Darabonba::Json& j, RecommendRules& obj) { 
            DARABONBA_PTR_FROM_JSON(left, left_);
            DARABONBA_PTR_FROM_JSON(operator, operator_);
            DARABONBA_PTR_FROM_JSON(right, right_);
          };
          RecommendRules() = default ;
          RecommendRules(const RecommendRules &) = default ;
          RecommendRules(RecommendRules &&) = default ;
          RecommendRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RecommendRules() = default ;
          RecommendRules& operator=(const RecommendRules &) = default ;
          RecommendRules& operator=(RecommendRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->left_ == nullptr
        && this->operator_ == nullptr && this->right_ == nullptr; };
          // left Field Functions 
          bool hasLeft() const { return this->left_ != nullptr;};
          void deleteLeft() { this->left_ = nullptr;};
          inline string getLeft() const { DARABONBA_PTR_GET_DEFAULT(left_, "") };
          inline RecommendRules& setLeft(string left) { DARABONBA_PTR_SET_VALUE(left_, left) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline RecommendRules& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // right Field Functions 
          bool hasRight() const { return this->right_ != nullptr;};
          void deleteRight() { this->right_ = nullptr;};
          inline string getRight() const { DARABONBA_PTR_GET_DEFAULT(right_, "") };
          inline RecommendRules& setRight(string right) { DARABONBA_PTR_SET_VALUE(right_, right) };


        protected:
          // Left variable
          shared_ptr<string> left_ {};
          // Operator
          shared_ptr<string> operator_ {};
          // Right variable
          shared_ptr<string> right_ {};
        };

        virtual bool empty() const override { return this->computeExpression_ == nullptr
        && this->hitSample_ == nullptr && this->id_ == nullptr && this->notHitSample_ == nullptr && this->recommendRules_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->status_ == nullptr && this->velocities_ == nullptr; };
        // computeExpression Field Functions 
        bool hasComputeExpression() const { return this->computeExpression_ != nullptr;};
        void deleteComputeExpression() { this->computeExpression_ = nullptr;};
        inline string getComputeExpression() const { DARABONBA_PTR_GET_DEFAULT(computeExpression_, "") };
        inline RecommendRuleDTOs& setComputeExpression(string computeExpression) { DARABONBA_PTR_SET_VALUE(computeExpression_, computeExpression) };


        // hitSample Field Functions 
        bool hasHitSample() const { return this->hitSample_ != nullptr;};
        void deleteHitSample() { this->hitSample_ = nullptr;};
        inline int64_t getHitSample() const { DARABONBA_PTR_GET_DEFAULT(hitSample_, 0L) };
        inline RecommendRuleDTOs& setHitSample(int64_t hitSample) { DARABONBA_PTR_SET_VALUE(hitSample_, hitSample) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline RecommendRuleDTOs& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // notHitSample Field Functions 
        bool hasNotHitSample() const { return this->notHitSample_ != nullptr;};
        void deleteNotHitSample() { this->notHitSample_ = nullptr;};
        inline int64_t getNotHitSample() const { DARABONBA_PTR_GET_DEFAULT(notHitSample_, 0L) };
        inline RecommendRuleDTOs& setNotHitSample(int64_t notHitSample) { DARABONBA_PTR_SET_VALUE(notHitSample_, notHitSample) };


        // recommendRules Field Functions 
        bool hasRecommendRules() const { return this->recommendRules_ != nullptr;};
        void deleteRecommendRules() { this->recommendRules_ = nullptr;};
        inline const vector<RecommendRuleDTOs::RecommendRules> & getRecommendRules() const { DARABONBA_PTR_GET_CONST(recommendRules_, vector<RecommendRuleDTOs::RecommendRules>) };
        inline vector<RecommendRuleDTOs::RecommendRules> getRecommendRules() { DARABONBA_PTR_GET(recommendRules_, vector<RecommendRuleDTOs::RecommendRules>) };
        inline RecommendRuleDTOs& setRecommendRules(const vector<RecommendRuleDTOs::RecommendRules> & recommendRules) { DARABONBA_PTR_SET_VALUE(recommendRules_, recommendRules) };
        inline RecommendRuleDTOs& setRecommendRules(vector<RecommendRuleDTOs::RecommendRules> && recommendRules) { DARABONBA_PTR_SET_RVALUE(recommendRules_, recommendRules) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline RecommendRuleDTOs& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline RecommendRuleDTOs& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RecommendRuleDTOs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // velocities Field Functions 
        bool hasVelocities() const { return this->velocities_ != nullptr;};
        void deleteVelocities() { this->velocities_ = nullptr;};
        inline string getVelocities() const { DARABONBA_PTR_GET_DEFAULT(velocities_, "") };
        inline RecommendRuleDTOs& setVelocities(string velocities) { DARABONBA_PTR_SET_VALUE(velocities_, velocities) };


      protected:
        // Calculation path
        shared_ptr<string> computeExpression_ {};
        // Number of hit samples
        shared_ptr<int64_t> hitSample_ {};
        // Primary key ID of the rule
        shared_ptr<int64_t> id_ {};
        // Number of unhit samples
        shared_ptr<int64_t> notHitSample_ {};
        // List of candidate rules
        shared_ptr<vector<RecommendRuleDTOs::RecommendRules>> recommendRules_ {};
        // Strategy ID
        shared_ptr<string> ruleId_ {};
        // Rule name
        shared_ptr<string> ruleName_ {};
        // Status
        shared_ptr<string> status_ {};
        // List of indicators in JSON string format
        shared_ptr<string> velocities_ {};
      };

      virtual bool empty() const override { return this->eventCode_ == nullptr
        && this->eventName_ == nullptr && this->expectVelocities_ == nullptr && this->gmtCreate_ == nullptr && this->normalSize_ == nullptr && this->recommendRuleDTOs_ == nullptr
        && this->recommendVariableDTOs_ == nullptr && this->riskSize_ == nullptr && this->sampleName_ == nullptr && this->sampleScene_ == nullptr && this->sampleSceneName_ == nullptr
        && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskStatus_ == nullptr; };
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


      // expectVelocities Field Functions 
      bool hasExpectVelocities() const { return this->expectVelocities_ != nullptr;};
      void deleteExpectVelocities() { this->expectVelocities_ = nullptr;};
      inline const vector<string> & getExpectVelocities() const { DARABONBA_PTR_GET_CONST(expectVelocities_, vector<string>) };
      inline vector<string> getExpectVelocities() { DARABONBA_PTR_GET(expectVelocities_, vector<string>) };
      inline ResultObject& setExpectVelocities(const vector<string> & expectVelocities) { DARABONBA_PTR_SET_VALUE(expectVelocities_, expectVelocities) };
      inline ResultObject& setExpectVelocities(vector<string> && expectVelocities) { DARABONBA_PTR_SET_RVALUE(expectVelocities_, expectVelocities) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // normalSize Field Functions 
      bool hasNormalSize() const { return this->normalSize_ != nullptr;};
      void deleteNormalSize() { this->normalSize_ = nullptr;};
      inline int64_t getNormalSize() const { DARABONBA_PTR_GET_DEFAULT(normalSize_, 0L) };
      inline ResultObject& setNormalSize(int64_t normalSize) { DARABONBA_PTR_SET_VALUE(normalSize_, normalSize) };


      // recommendRuleDTOs Field Functions 
      bool hasRecommendRuleDTOs() const { return this->recommendRuleDTOs_ != nullptr;};
      void deleteRecommendRuleDTOs() { this->recommendRuleDTOs_ = nullptr;};
      inline const vector<ResultObject::RecommendRuleDTOs> & getRecommendRuleDTOs() const { DARABONBA_PTR_GET_CONST(recommendRuleDTOs_, vector<ResultObject::RecommendRuleDTOs>) };
      inline vector<ResultObject::RecommendRuleDTOs> getRecommendRuleDTOs() { DARABONBA_PTR_GET(recommendRuleDTOs_, vector<ResultObject::RecommendRuleDTOs>) };
      inline ResultObject& setRecommendRuleDTOs(const vector<ResultObject::RecommendRuleDTOs> & recommendRuleDTOs) { DARABONBA_PTR_SET_VALUE(recommendRuleDTOs_, recommendRuleDTOs) };
      inline ResultObject& setRecommendRuleDTOs(vector<ResultObject::RecommendRuleDTOs> && recommendRuleDTOs) { DARABONBA_PTR_SET_RVALUE(recommendRuleDTOs_, recommendRuleDTOs) };


      // recommendVariableDTOs Field Functions 
      bool hasRecommendVariableDTOs() const { return this->recommendVariableDTOs_ != nullptr;};
      void deleteRecommendVariableDTOs() { this->recommendVariableDTOs_ = nullptr;};
      inline const vector<ResultObject::RecommendVariableDTOs> & getRecommendVariableDTOs() const { DARABONBA_PTR_GET_CONST(recommendVariableDTOs_, vector<ResultObject::RecommendVariableDTOs>) };
      inline vector<ResultObject::RecommendVariableDTOs> getRecommendVariableDTOs() { DARABONBA_PTR_GET(recommendVariableDTOs_, vector<ResultObject::RecommendVariableDTOs>) };
      inline ResultObject& setRecommendVariableDTOs(const vector<ResultObject::RecommendVariableDTOs> & recommendVariableDTOs) { DARABONBA_PTR_SET_VALUE(recommendVariableDTOs_, recommendVariableDTOs) };
      inline ResultObject& setRecommendVariableDTOs(vector<ResultObject::RecommendVariableDTOs> && recommendVariableDTOs) { DARABONBA_PTR_SET_RVALUE(recommendVariableDTOs_, recommendVariableDTOs) };


      // riskSize Field Functions 
      bool hasRiskSize() const { return this->riskSize_ != nullptr;};
      void deleteRiskSize() { this->riskSize_ = nullptr;};
      inline int64_t getRiskSize() const { DARABONBA_PTR_GET_DEFAULT(riskSize_, 0L) };
      inline ResultObject& setRiskSize(int64_t riskSize) { DARABONBA_PTR_SET_VALUE(riskSize_, riskSize) };


      // sampleName Field Functions 
      bool hasSampleName() const { return this->sampleName_ != nullptr;};
      void deleteSampleName() { this->sampleName_ = nullptr;};
      inline string getSampleName() const { DARABONBA_PTR_GET_DEFAULT(sampleName_, "") };
      inline ResultObject& setSampleName(string sampleName) { DARABONBA_PTR_SET_VALUE(sampleName_, sampleName) };


      // sampleScene Field Functions 
      bool hasSampleScene() const { return this->sampleScene_ != nullptr;};
      void deleteSampleScene() { this->sampleScene_ = nullptr;};
      inline string getSampleScene() const { DARABONBA_PTR_GET_DEFAULT(sampleScene_, "") };
      inline ResultObject& setSampleScene(string sampleScene) { DARABONBA_PTR_SET_VALUE(sampleScene_, sampleScene) };


      // sampleSceneName Field Functions 
      bool hasSampleSceneName() const { return this->sampleSceneName_ != nullptr;};
      void deleteSampleSceneName() { this->sampleSceneName_ = nullptr;};
      inline string getSampleSceneName() const { DARABONBA_PTR_GET_DEFAULT(sampleSceneName_, "") };
      inline ResultObject& setSampleSceneName(string sampleSceneName) { DARABONBA_PTR_SET_VALUE(sampleSceneName_, sampleSceneName) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline ResultObject& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline ResultObject& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline ResultObject& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      // Event code
      shared_ptr<string> eventCode_ {};
      // Event name.
      shared_ptr<string> eventName_ {};
      // Comparison indicators
      shared_ptr<vector<string>> expectVelocities_ {};
      // Creation time
      shared_ptr<int64_t> gmtCreate_ {};
      // Number of normal samples
      shared_ptr<int64_t> normalSize_ {};
      // Recommended strategy list
      shared_ptr<vector<ResultObject::RecommendRuleDTOs>> recommendRuleDTOs_ {};
      // Selected variable list
      shared_ptr<vector<ResultObject::RecommendVariableDTOs>> recommendVariableDTOs_ {};
      // Number of risk samples
      shared_ptr<int64_t> riskSize_ {};
      // Sample name
      shared_ptr<string> sampleName_ {};
      // Sample scenario
      shared_ptr<string> sampleScene_ {};
      // Sample scenario name
      shared_ptr<string> sampleSceneName_ {};
      // Task ID
      shared_ptr<int64_t> taskId_ {};
      // Task name
      shared_ptr<string> taskName_ {};
      // Task status.
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecommendTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeRecommendTaskDetailResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeRecommendTaskDetailResponseBody::ResultObject) };
    inline DescribeRecommendTaskDetailResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeRecommendTaskDetailResponseBody::ResultObject) };
    inline DescribeRecommendTaskDetailResponseBody& setResultObject(const DescribeRecommendTaskDetailResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeRecommendTaskDetailResponseBody& setResultObject(DescribeRecommendTaskDetailResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return result
    shared_ptr<DescribeRecommendTaskDetailResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
