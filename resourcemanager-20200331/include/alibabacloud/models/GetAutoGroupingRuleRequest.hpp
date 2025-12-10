// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOGROUPINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOGROUPINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetAutoGroupingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoGroupingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoGroupingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    GetAutoGroupingRuleRequest() = default ;
    GetAutoGroupingRuleRequest(const GetAutoGroupingRuleRequest &) = default ;
    GetAutoGroupingRuleRequest(GetAutoGroupingRuleRequest &&) = default ;
    GetAutoGroupingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoGroupingRuleRequest() = default ;
    GetAutoGroupingRuleRequest& operator=(const GetAutoGroupingRuleRequest &) = default ;
    GetAutoGroupingRuleRequest& operator=(GetAutoGroupingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleId_ == nullptr; };
    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetAutoGroupingRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The ID of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
