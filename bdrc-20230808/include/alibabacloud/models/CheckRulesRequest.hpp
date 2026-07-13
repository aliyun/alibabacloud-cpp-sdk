// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class CheckRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    CheckRulesRequest() = default ;
    CheckRulesRequest(const CheckRulesRequest &) = default ;
    CheckRulesRequest(CheckRulesRequest &&) = default ;
    CheckRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckRulesRequest() = default ;
    CheckRulesRequest& operator=(const CheckRulesRequest &) = default ;
    CheckRulesRequest& operator=(CheckRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceArn_ == nullptr
        && this->ruleId_ == nullptr; };
    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline CheckRulesRequest& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline CheckRulesRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The unique identifier of the resource.
    // 
    // This parameter is required.
    shared_ptr<string> resourceArn_ {};
    // The ID of the rule to update. If you do not specify this parameter, all rules are updated.
    shared_ptr<string> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
