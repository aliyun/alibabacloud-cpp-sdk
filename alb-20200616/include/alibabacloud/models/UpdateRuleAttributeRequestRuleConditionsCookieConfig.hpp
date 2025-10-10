// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULECONDITIONSCOOKIECONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULECONDITIONSCOOKIECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleConditionsCookieConfigValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRuleAttributeRequestRuleConditionsCookieConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequestRuleConditionsCookieConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequestRuleConditionsCookieConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    UpdateRuleAttributeRequestRuleConditionsCookieConfig() = default ;
    UpdateRuleAttributeRequestRuleConditionsCookieConfig(const UpdateRuleAttributeRequestRuleConditionsCookieConfig &) = default ;
    UpdateRuleAttributeRequestRuleConditionsCookieConfig(UpdateRuleAttributeRequestRuleConditionsCookieConfig &&) = default ;
    UpdateRuleAttributeRequestRuleConditionsCookieConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequestRuleConditionsCookieConfig() = default ;
    UpdateRuleAttributeRequestRuleConditionsCookieConfig& operator=(const UpdateRuleAttributeRequestRuleConditionsCookieConfig &) = default ;
    UpdateRuleAttributeRequestRuleConditionsCookieConfig& operator=(UpdateRuleAttributeRequestRuleConditionsCookieConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->values_ != nullptr; };
    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Models::UpdateRuleAttributeRequestRuleConditionsCookieConfigValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Models::UpdateRuleAttributeRequestRuleConditionsCookieConfigValues>) };
    inline vector<Models::UpdateRuleAttributeRequestRuleConditionsCookieConfigValues> values() { DARABONBA_PTR_GET(values_, vector<Models::UpdateRuleAttributeRequestRuleConditionsCookieConfigValues>) };
    inline UpdateRuleAttributeRequestRuleConditionsCookieConfig& setValues(const vector<Models::UpdateRuleAttributeRequestRuleConditionsCookieConfigValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline UpdateRuleAttributeRequestRuleConditionsCookieConfig& setValues(vector<Models::UpdateRuleAttributeRequestRuleConditionsCookieConfigValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The key-value pairs of the cookie.
    std::shared_ptr<vector<Models::UpdateRuleAttributeRequestRuleConditionsCookieConfigValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
