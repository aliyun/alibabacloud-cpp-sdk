// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULECONDITIONSRESPONSEHEADERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULECONDITIONSRESPONSEHEADERCONFIG_HPP_
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
  class UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig() = default ;
    UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig(const UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig &) = default ;
    UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig(UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig &&) = default ;
    UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig() = default ;
    UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig& operator=(const UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig &) = default ;
    UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig& operator=(UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->values_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline UpdateRuleAttributeRequestRuleConditionsResponseHeaderConfig& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The header key.
    // 
    // *   The key must be 1 to 40 characters in length.
    // *   It can contain letters, digits, hyphens (-), and underscores (_).
    // *   Cookie and Host are not supported.
    std::shared_ptr<string> key_ = nullptr;
    // The header values.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
