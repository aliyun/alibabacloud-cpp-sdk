// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEPRECONFIGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEPRECONFIGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EvaluatePreConfigRulesRequestResourceEvaluateItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class EvaluatePreConfigRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluatePreConfigRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableManagedRules, enableManagedRules_);
      DARABONBA_PTR_TO_JSON(ResourceEvaluateItems, resourceEvaluateItems_);
      DARABONBA_PTR_TO_JSON(ResourceTypeFormat, resourceTypeFormat_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluatePreConfigRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableManagedRules, enableManagedRules_);
      DARABONBA_PTR_FROM_JSON(ResourceEvaluateItems, resourceEvaluateItems_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeFormat, resourceTypeFormat_);
    };
    EvaluatePreConfigRulesRequest() = default ;
    EvaluatePreConfigRulesRequest(const EvaluatePreConfigRulesRequest &) = default ;
    EvaluatePreConfigRulesRequest(EvaluatePreConfigRulesRequest &&) = default ;
    EvaluatePreConfigRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluatePreConfigRulesRequest() = default ;
    EvaluatePreConfigRulesRequest& operator=(const EvaluatePreConfigRulesRequest &) = default ;
    EvaluatePreConfigRulesRequest& operator=(EvaluatePreConfigRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableManagedRules_ == nullptr
        && return this->resourceEvaluateItems_ == nullptr && return this->resourceTypeFormat_ == nullptr; };
    // enableManagedRules Field Functions 
    bool hasEnableManagedRules() const { return this->enableManagedRules_ != nullptr;};
    void deleteEnableManagedRules() { this->enableManagedRules_ = nullptr;};
    inline bool enableManagedRules() const { DARABONBA_PTR_GET_DEFAULT(enableManagedRules_, false) };
    inline EvaluatePreConfigRulesRequest& setEnableManagedRules(bool enableManagedRules) { DARABONBA_PTR_SET_VALUE(enableManagedRules_, enableManagedRules) };


    // resourceEvaluateItems Field Functions 
    bool hasResourceEvaluateItems() const { return this->resourceEvaluateItems_ != nullptr;};
    void deleteResourceEvaluateItems() { this->resourceEvaluateItems_ = nullptr;};
    inline const vector<EvaluatePreConfigRulesRequestResourceEvaluateItems> & resourceEvaluateItems() const { DARABONBA_PTR_GET_CONST(resourceEvaluateItems_, vector<EvaluatePreConfigRulesRequestResourceEvaluateItems>) };
    inline vector<EvaluatePreConfigRulesRequestResourceEvaluateItems> resourceEvaluateItems() { DARABONBA_PTR_GET(resourceEvaluateItems_, vector<EvaluatePreConfigRulesRequestResourceEvaluateItems>) };
    inline EvaluatePreConfigRulesRequest& setResourceEvaluateItems(const vector<EvaluatePreConfigRulesRequestResourceEvaluateItems> & resourceEvaluateItems) { DARABONBA_PTR_SET_VALUE(resourceEvaluateItems_, resourceEvaluateItems) };
    inline EvaluatePreConfigRulesRequest& setResourceEvaluateItems(vector<EvaluatePreConfigRulesRequestResourceEvaluateItems> && resourceEvaluateItems) { DARABONBA_PTR_SET_RVALUE(resourceEvaluateItems_, resourceEvaluateItems) };


    // resourceTypeFormat Field Functions 
    bool hasResourceTypeFormat() const { return this->resourceTypeFormat_ != nullptr;};
    void deleteResourceTypeFormat() { this->resourceTypeFormat_ = nullptr;};
    inline string resourceTypeFormat() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeFormat_, "") };
    inline EvaluatePreConfigRulesRequest& setResourceTypeFormat(string resourceTypeFormat) { DARABONBA_PTR_SET_VALUE(resourceTypeFormat_, resourceTypeFormat) };


  protected:
    // Specifies whether to enable the managed rule. Valid values:
    // 
    // *   true: enables the managed rule.
    // *   false: does not enable the managed rule. This is the default value.
    // 
    // >  After you create an evaluation rule, a managed rule that has the same settings as the evaluation rule is created. After you create a resource, the managed rule can be used to continuously check the compliance of the resource.
    std::shared_ptr<bool> enableManagedRules_ = nullptr;
    // The resources that you want to evaluate.
    // 
    // This parameter is required.
    std::shared_ptr<vector<EvaluatePreConfigRulesRequestResourceEvaluateItems>> resourceEvaluateItems_ = nullptr;
    // 下一个查询开始Token
    std::shared_ptr<string> resourceTypeFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
