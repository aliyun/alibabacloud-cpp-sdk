// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSASCONTAINERWEBDEFENSERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSASCONTAINERWEBDEFENSERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifySasContainerWebDefenseRuleRequestPathConfDTOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifySasContainerWebDefenseRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySasContainerWebDefenseRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PathConfDTOList, pathConfDTOList_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySasContainerWebDefenseRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PathConfDTOList, pathConfDTOList_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    ModifySasContainerWebDefenseRuleRequest() = default ;
    ModifySasContainerWebDefenseRuleRequest(const ModifySasContainerWebDefenseRuleRequest &) = default ;
    ModifySasContainerWebDefenseRuleRequest(ModifySasContainerWebDefenseRuleRequest &&) = default ;
    ModifySasContainerWebDefenseRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySasContainerWebDefenseRuleRequest() = default ;
    ModifySasContainerWebDefenseRuleRequest& operator=(const ModifySasContainerWebDefenseRuleRequest &) = default ;
    ModifySasContainerWebDefenseRuleRequest& operator=(ModifySasContainerWebDefenseRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pathConfDTOList_ != nullptr
        && this->ruleId_ != nullptr && this->ruleName_ != nullptr; };
    // pathConfDTOList Field Functions 
    bool hasPathConfDTOList() const { return this->pathConfDTOList_ != nullptr;};
    void deletePathConfDTOList() { this->pathConfDTOList_ = nullptr;};
    inline const vector<ModifySasContainerWebDefenseRuleRequestPathConfDTOList> & pathConfDTOList() const { DARABONBA_PTR_GET_CONST(pathConfDTOList_, vector<ModifySasContainerWebDefenseRuleRequestPathConfDTOList>) };
    inline vector<ModifySasContainerWebDefenseRuleRequestPathConfDTOList> pathConfDTOList() { DARABONBA_PTR_GET(pathConfDTOList_, vector<ModifySasContainerWebDefenseRuleRequestPathConfDTOList>) };
    inline ModifySasContainerWebDefenseRuleRequest& setPathConfDTOList(const vector<ModifySasContainerWebDefenseRuleRequestPathConfDTOList> & pathConfDTOList) { DARABONBA_PTR_SET_VALUE(pathConfDTOList_, pathConfDTOList) };
    inline ModifySasContainerWebDefenseRuleRequest& setPathConfDTOList(vector<ModifySasContainerWebDefenseRuleRequestPathConfDTOList> && pathConfDTOList) { DARABONBA_PTR_SET_RVALUE(pathConfDTOList_, pathConfDTOList) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ModifySasContainerWebDefenseRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifySasContainerWebDefenseRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The paths that are protected.
    std::shared_ptr<vector<ModifySasContainerWebDefenseRuleRequestPathConfDTOList>> pathConfDTOList_ = nullptr;
    // The ID of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
