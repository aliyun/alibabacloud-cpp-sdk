// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
    };
    CreateRulesResponseBody() = default ;
    CreateRulesResponseBody(const CreateRulesResponseBody &) = default ;
    CreateRulesResponseBody(CreateRulesResponseBody &&) = default ;
    CreateRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesResponseBody() = default ;
    CreateRulesResponseBody& operator=(const CreateRulesResponseBody &) = default ;
    CreateRulesResponseBody& operator=(CreateRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleIds& obj) { 
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      };
      friend void from_json(const Darabonba::Json& j, RuleIds& obj) { 
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      };
      RuleIds() = default ;
      RuleIds(const RuleIds &) = default ;
      RuleIds(RuleIds &&) = default ;
      RuleIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleIds() = default ;
      RuleIds& operator=(const RuleIds &) = default ;
      RuleIds& operator=(RuleIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->priority_ == nullptr
        && this->ruleId_ == nullptr; };
      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline RuleIds& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline RuleIds& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    protected:
      // The priority of the forwarding rule. Valid values: **1 to 10000**. A smaller value indicates a higher priority.
      // 
      // > The priorities of the forwarding rules created for the same listener must be unique.
      shared_ptr<int32_t> priority_ {};
      // The forwarding rule ID.
      shared_ptr<string> ruleId_ {};
    };

    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->requestId_ == nullptr && this->ruleIds_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CreateRulesResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const vector<CreateRulesResponseBody::RuleIds> & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<CreateRulesResponseBody::RuleIds>) };
    inline vector<CreateRulesResponseBody::RuleIds> getRuleIds() { DARABONBA_PTR_GET(ruleIds_, vector<CreateRulesResponseBody::RuleIds>) };
    inline CreateRulesResponseBody& setRuleIds(const vector<CreateRulesResponseBody::RuleIds> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline CreateRulesResponseBody& setRuleIds(vector<CreateRulesResponseBody::RuleIds> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


  protected:
    // The ID of the asynchronous task.
    shared_ptr<string> jobId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The priority of the forwarding rule. Valid values: **1 to 10000**. A lower value specifies a higher priority.
    // 
    // > The priorities of the forwarding rules created for the same listener is unique.
    shared_ptr<vector<CreateRulesResponseBody::RuleIds>> ruleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
