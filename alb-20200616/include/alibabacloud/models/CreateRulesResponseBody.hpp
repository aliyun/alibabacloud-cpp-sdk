// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRulesResponseBodyRuleIds.hpp>
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
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->requestId_ != nullptr && this->ruleIds_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CreateRulesResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const vector<CreateRulesResponseBodyRuleIds> & ruleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<CreateRulesResponseBodyRuleIds>) };
    inline vector<CreateRulesResponseBodyRuleIds> ruleIds() { DARABONBA_PTR_GET(ruleIds_, vector<CreateRulesResponseBodyRuleIds>) };
    inline CreateRulesResponseBody& setRuleIds(const vector<CreateRulesResponseBodyRuleIds> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline CreateRulesResponseBody& setRuleIds(vector<CreateRulesResponseBodyRuleIds> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


  protected:
    // The ID of the asynchronous task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The priority of the forwarding rule. Valid values: **1 to 10000**. A lower value specifies a higher priority.
    // 
    // > The priorities of the forwarding rules created for the same listener is unique.
    std::shared_ptr<vector<CreateRulesResponseBodyRuleIds>> ruleIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
