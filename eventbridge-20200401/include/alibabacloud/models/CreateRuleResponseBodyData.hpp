// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATERULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RuleARN, ruleARN_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleARN, ruleARN_);
    };
    CreateRuleResponseBodyData() = default ;
    CreateRuleResponseBodyData(const CreateRuleResponseBodyData &) = default ;
    CreateRuleResponseBodyData(CreateRuleResponseBodyData &&) = default ;
    CreateRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleResponseBodyData() = default ;
    CreateRuleResponseBodyData& operator=(const CreateRuleResponseBodyData &) = default ;
    CreateRuleResponseBodyData& operator=(CreateRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleARN_ != nullptr; };
    // ruleARN Field Functions 
    bool hasRuleARN() const { return this->ruleARN_ != nullptr;};
    void deleteRuleARN() { this->ruleARN_ = nullptr;};
    inline string ruleARN() const { DARABONBA_PTR_GET_DEFAULT(ruleARN_, "") };
    inline CreateRuleResponseBodyData& setRuleARN(string ruleARN) { DARABONBA_PTR_SET_VALUE(ruleARN_, ruleARN) };


  protected:
    // The ARN of the event rule. The ARN is used for authorization.
    std::shared_ptr<string> ruleARN_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
