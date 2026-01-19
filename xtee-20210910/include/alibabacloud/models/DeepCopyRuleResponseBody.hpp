// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEEPCOPYRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEEPCOPYRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DeepCopyRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeepCopyRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DeepCopyRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DeepCopyRuleResponseBody() = default ;
    DeepCopyRuleResponseBody(const DeepCopyRuleResponseBody &) = default ;
    DeepCopyRuleResponseBody(DeepCopyRuleResponseBody &&) = default ;
    DeepCopyRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeepCopyRuleResponseBody() = default ;
    DeepCopyRuleResponseBody& operator=(const DeepCopyRuleResponseBody &) = default ;
    DeepCopyRuleResponseBody& operator=(DeepCopyRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(BatchCopyFlag, batchCopyFlag_);
        DARABONBA_PTR_TO_JSON(ConsoleRuleId, consoleRuleId_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleVersionId, ruleVersionId_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(BatchCopyFlag, batchCopyFlag_);
        DARABONBA_PTR_FROM_JSON(ConsoleRuleId, consoleRuleId_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleVersionId, ruleVersionId_);
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
      virtual bool empty() const override { return this->batchCopyFlag_ == nullptr
        && this->consoleRuleId_ == nullptr && this->ruleId_ == nullptr && this->ruleVersionId_ == nullptr; };
      // batchCopyFlag Field Functions 
      bool hasBatchCopyFlag() const { return this->batchCopyFlag_ != nullptr;};
      void deleteBatchCopyFlag() { this->batchCopyFlag_ = nullptr;};
      inline bool getBatchCopyFlag() const { DARABONBA_PTR_GET_DEFAULT(batchCopyFlag_, false) };
      inline ResultObject& setBatchCopyFlag(bool batchCopyFlag) { DARABONBA_PTR_SET_VALUE(batchCopyFlag_, batchCopyFlag) };


      // consoleRuleId Field Functions 
      bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
      void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
      inline int64_t getConsoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
      inline ResultObject& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline ResultObject& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleVersionId Field Functions 
      bool hasRuleVersionId() const { return this->ruleVersionId_ != nullptr;};
      void deleteRuleVersionId() { this->ruleVersionId_ = nullptr;};
      inline int64_t getRuleVersionId() const { DARABONBA_PTR_GET_DEFAULT(ruleVersionId_, 0L) };
      inline ResultObject& setRuleVersionId(int64_t ruleVersionId) { DARABONBA_PTR_SET_VALUE(ruleVersionId_, ruleVersionId) };


    protected:
      // Whether to redirect to details
      shared_ptr<bool> batchCopyFlag_ {};
      // Primary key of the policy
      shared_ptr<int64_t> consoleRuleId_ {};
      // Policy ID
      shared_ptr<string> ruleId_ {};
      // Primary key of the policy version
      shared_ptr<int64_t> ruleVersionId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeepCopyRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DeepCopyRuleResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DeepCopyRuleResponseBody::ResultObject) };
    inline DeepCopyRuleResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DeepCopyRuleResponseBody::ResultObject) };
    inline DeepCopyRuleResponseBody& setResultObject(const DeepCopyRuleResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DeepCopyRuleResponseBody& setResultObject(DeepCopyRuleResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned result information
    shared_ptr<DeepCopyRuleResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
