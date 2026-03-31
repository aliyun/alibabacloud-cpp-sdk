// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONFIGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONFIGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteConfigRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConfigRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleIds, configRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConfigRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleIds, configRuleIds_);
    };
    DeleteConfigRulesRequest() = default ;
    DeleteConfigRulesRequest(const DeleteConfigRulesRequest &) = default ;
    DeleteConfigRulesRequest(DeleteConfigRulesRequest &&) = default ;
    DeleteConfigRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConfigRulesRequest() = default ;
    DeleteConfigRulesRequest& operator=(const DeleteConfigRulesRequest &) = default ;
    DeleteConfigRulesRequest& operator=(DeleteConfigRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleIds_ == nullptr; };
    // configRuleIds Field Functions 
    bool hasConfigRuleIds() const { return this->configRuleIds_ != nullptr;};
    void deleteConfigRuleIds() { this->configRuleIds_ = nullptr;};
    inline string getConfigRuleIds() const { DARABONBA_PTR_GET_DEFAULT(configRuleIds_, "") };
    inline DeleteConfigRulesRequest& setConfigRuleIds(string configRuleIds) { DARABONBA_PTR_SET_VALUE(configRuleIds_, configRuleIds) };


  protected:
    // The rule IDs. Separate multiple rule IDs with commas (,).
    // 
    // For more information about how to obtain the ID of a rule, see [ListConfigRules](https://help.aliyun.com/document_detail/609222.html).
    // 
    // This parameter is required.
    shared_ptr<string> configRuleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
