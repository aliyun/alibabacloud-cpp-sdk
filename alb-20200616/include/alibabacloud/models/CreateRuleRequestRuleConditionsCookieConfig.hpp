// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULEREQUESTRULECONDITIONSCOOKIECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATERULEREQUESTRULECONDITIONSCOOKIECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRuleRequestRuleConditionsCookieConfigValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRuleRequestRuleConditionsCookieConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleRequestRuleConditionsCookieConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRuleRequestRuleConditionsCookieConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    CreateRuleRequestRuleConditionsCookieConfig() = default ;
    CreateRuleRequestRuleConditionsCookieConfig(const CreateRuleRequestRuleConditionsCookieConfig &) = default ;
    CreateRuleRequestRuleConditionsCookieConfig(CreateRuleRequestRuleConditionsCookieConfig &&) = default ;
    CreateRuleRequestRuleConditionsCookieConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleRequestRuleConditionsCookieConfig() = default ;
    CreateRuleRequestRuleConditionsCookieConfig& operator=(const CreateRuleRequestRuleConditionsCookieConfig &) = default ;
    CreateRuleRequestRuleConditionsCookieConfig& operator=(CreateRuleRequestRuleConditionsCookieConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->values_ != nullptr; };
    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::CreateRuleRequestRuleConditionsCookieConfigValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::CreateRuleRequestRuleConditionsCookieConfigValues>) };
    inline vector<Models::CreateRuleRequestRuleConditionsCookieConfigValues> values() { DARABONBA_PTR_GET(values_, vector<Models::CreateRuleRequestRuleConditionsCookieConfigValues>) };
    inline CreateRuleRequestRuleConditionsCookieConfig& setValues(const vector<Models::CreateRuleRequestRuleConditionsCookieConfigValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline CreateRuleRequestRuleConditionsCookieConfig& setValues(vector<Models::CreateRuleRequestRuleConditionsCookieConfigValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The cookie values.
    std::shared_ptr<vector<Models::CreateRuleRequestRuleConditionsCookieConfigValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
