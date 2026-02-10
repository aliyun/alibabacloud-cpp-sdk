// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANTIBRUTEFORCERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEANTIBRUTEFORCERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateAntiBruteForceRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAntiBruteForceRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateAntiBruteForceRule, createAntiBruteForceRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAntiBruteForceRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateAntiBruteForceRule, createAntiBruteForceRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAntiBruteForceRuleResponseBody() = default ;
    CreateAntiBruteForceRuleResponseBody(const CreateAntiBruteForceRuleResponseBody &) = default ;
    CreateAntiBruteForceRuleResponseBody(CreateAntiBruteForceRuleResponseBody &&) = default ;
    CreateAntiBruteForceRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAntiBruteForceRuleResponseBody() = default ;
    CreateAntiBruteForceRuleResponseBody& operator=(const CreateAntiBruteForceRuleResponseBody &) = default ;
    CreateAntiBruteForceRuleResponseBody& operator=(CreateAntiBruteForceRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateAntiBruteForceRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateAntiBruteForceRule& obj) { 
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      };
      friend void from_json(const Darabonba::Json& j, CreateAntiBruteForceRule& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      };
      CreateAntiBruteForceRule() = default ;
      CreateAntiBruteForceRule(const CreateAntiBruteForceRule &) = default ;
      CreateAntiBruteForceRule(CreateAntiBruteForceRule &&) = default ;
      CreateAntiBruteForceRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateAntiBruteForceRule() = default ;
      CreateAntiBruteForceRule& operator=(const CreateAntiBruteForceRule &) = default ;
      CreateAntiBruteForceRule& operator=(CreateAntiBruteForceRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ruleId_ == nullptr; };
      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline CreateAntiBruteForceRule& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    protected:
      // The ID of the defense rule.
      shared_ptr<int64_t> ruleId_ {};
    };

    virtual bool empty() const override { return this->createAntiBruteForceRule_ == nullptr
        && this->requestId_ == nullptr; };
    // createAntiBruteForceRule Field Functions 
    bool hasCreateAntiBruteForceRule() const { return this->createAntiBruteForceRule_ != nullptr;};
    void deleteCreateAntiBruteForceRule() { this->createAntiBruteForceRule_ = nullptr;};
    inline const CreateAntiBruteForceRuleResponseBody::CreateAntiBruteForceRule & getCreateAntiBruteForceRule() const { DARABONBA_PTR_GET_CONST(createAntiBruteForceRule_, CreateAntiBruteForceRuleResponseBody::CreateAntiBruteForceRule) };
    inline CreateAntiBruteForceRuleResponseBody::CreateAntiBruteForceRule getCreateAntiBruteForceRule() { DARABONBA_PTR_GET(createAntiBruteForceRule_, CreateAntiBruteForceRuleResponseBody::CreateAntiBruteForceRule) };
    inline CreateAntiBruteForceRuleResponseBody& setCreateAntiBruteForceRule(const CreateAntiBruteForceRuleResponseBody::CreateAntiBruteForceRule & createAntiBruteForceRule) { DARABONBA_PTR_SET_VALUE(createAntiBruteForceRule_, createAntiBruteForceRule) };
    inline CreateAntiBruteForceRuleResponseBody& setCreateAntiBruteForceRule(CreateAntiBruteForceRuleResponseBody::CreateAntiBruteForceRule && createAntiBruteForceRule) { DARABONBA_PTR_SET_RVALUE(createAntiBruteForceRule_, createAntiBruteForceRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAntiBruteForceRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the defense rule.
    shared_ptr<CreateAntiBruteForceRuleResponseBody::CreateAntiBruteForceRule> createAntiBruteForceRule_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
