// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULECONDITIONSQUERYSTRINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULECONDITIONSQUERYSTRINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRuleAttributeRequestRuleConditionsQueryStringConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequestRuleConditionsQueryStringConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequestRuleConditionsQueryStringConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    UpdateRuleAttributeRequestRuleConditionsQueryStringConfig() = default ;
    UpdateRuleAttributeRequestRuleConditionsQueryStringConfig(const UpdateRuleAttributeRequestRuleConditionsQueryStringConfig &) = default ;
    UpdateRuleAttributeRequestRuleConditionsQueryStringConfig(UpdateRuleAttributeRequestRuleConditionsQueryStringConfig &&) = default ;
    UpdateRuleAttributeRequestRuleConditionsQueryStringConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequestRuleConditionsQueryStringConfig() = default ;
    UpdateRuleAttributeRequestRuleConditionsQueryStringConfig& operator=(const UpdateRuleAttributeRequestRuleConditionsQueryStringConfig &) = default ;
    UpdateRuleAttributeRequestRuleConditionsQueryStringConfig& operator=(UpdateRuleAttributeRequestRuleConditionsQueryStringConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->values_ != nullptr; };
    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues>) };
    inline vector<Models::UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues> values() { DARABONBA_PTR_GET(values_, vector<Models::UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues>) };
    inline UpdateRuleAttributeRequestRuleConditionsQueryStringConfig& setValues(const vector<Models::UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline UpdateRuleAttributeRequestRuleConditionsQueryStringConfig& setValues(vector<Models::UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The query strings. You can specify up to 20 query strings.
    std::shared_ptr<vector<Models::UpdateRuleAttributeRequestRuleConditionsQueryStringConfigValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
