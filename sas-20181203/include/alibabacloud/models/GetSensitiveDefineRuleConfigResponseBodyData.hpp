// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSENSITIVEDEFINERULECONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSENSITIVEDEFINERULECONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSensitiveDefineRuleConfigResponseBodyDataRuleTree.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSensitiveDefineRuleConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSensitiveDefineRuleConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EnableNewRule, enableNewRule_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_TO_JSON(RuleTree, ruleTree_);
      DARABONBA_PTR_TO_JSON(SelectedCount, selectedCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetSensitiveDefineRuleConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableNewRule, enableNewRule_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_FROM_JSON(RuleTree, ruleTree_);
      DARABONBA_PTR_FROM_JSON(SelectedCount, selectedCount_);
    };
    GetSensitiveDefineRuleConfigResponseBodyData() = default ;
    GetSensitiveDefineRuleConfigResponseBodyData(const GetSensitiveDefineRuleConfigResponseBodyData &) = default ;
    GetSensitiveDefineRuleConfigResponseBodyData(GetSensitiveDefineRuleConfigResponseBodyData &&) = default ;
    GetSensitiveDefineRuleConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSensitiveDefineRuleConfigResponseBodyData() = default ;
    GetSensitiveDefineRuleConfigResponseBodyData& operator=(const GetSensitiveDefineRuleConfigResponseBodyData &) = default ;
    GetSensitiveDefineRuleConfigResponseBodyData& operator=(GetSensitiveDefineRuleConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableNewRule_ == nullptr
        && return this->id_ == nullptr && return this->ruleCount_ == nullptr && return this->ruleTree_ == nullptr && return this->selectedCount_ == nullptr; };
    // enableNewRule Field Functions 
    bool hasEnableNewRule() const { return this->enableNewRule_ != nullptr;};
    void deleteEnableNewRule() { this->enableNewRule_ = nullptr;};
    inline int32_t enableNewRule() const { DARABONBA_PTR_GET_DEFAULT(enableNewRule_, 0) };
    inline GetSensitiveDefineRuleConfigResponseBodyData& setEnableNewRule(int32_t enableNewRule) { DARABONBA_PTR_SET_VALUE(enableNewRule_, enableNewRule) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetSensitiveDefineRuleConfigResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int32_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
    inline GetSensitiveDefineRuleConfigResponseBodyData& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


    // ruleTree Field Functions 
    bool hasRuleTree() const { return this->ruleTree_ != nullptr;};
    void deleteRuleTree() { this->ruleTree_ = nullptr;};
    inline const vector<Models::GetSensitiveDefineRuleConfigResponseBodyDataRuleTree> & ruleTree() const { DARABONBA_PTR_GET_CONST(ruleTree_, vector<Models::GetSensitiveDefineRuleConfigResponseBodyDataRuleTree>) };
    inline vector<Models::GetSensitiveDefineRuleConfigResponseBodyDataRuleTree> ruleTree() { DARABONBA_PTR_GET(ruleTree_, vector<Models::GetSensitiveDefineRuleConfigResponseBodyDataRuleTree>) };
    inline GetSensitiveDefineRuleConfigResponseBodyData& setRuleTree(const vector<Models::GetSensitiveDefineRuleConfigResponseBodyDataRuleTree> & ruleTree) { DARABONBA_PTR_SET_VALUE(ruleTree_, ruleTree) };
    inline GetSensitiveDefineRuleConfigResponseBodyData& setRuleTree(vector<Models::GetSensitiveDefineRuleConfigResponseBodyDataRuleTree> && ruleTree) { DARABONBA_PTR_SET_RVALUE(ruleTree_, ruleTree) };


    // selectedCount Field Functions 
    bool hasSelectedCount() const { return this->selectedCount_ != nullptr;};
    void deleteSelectedCount() { this->selectedCount_ = nullptr;};
    inline int32_t selectedCount() const { DARABONBA_PTR_GET_DEFAULT(selectedCount_, 0) };
    inline GetSensitiveDefineRuleConfigResponseBodyData& setSelectedCount(int32_t selectedCount) { DARABONBA_PTR_SET_VALUE(selectedCount_, selectedCount) };


  protected:
    // Indicates whether the new rule is enabled for automatic check only on agentless detection. Valid values:
    // 
    // *   **0**: disabled.
    // *   **1**: enabled.
    std::shared_ptr<int32_t> enableNewRule_ = nullptr;
    // The custom configuration ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The total number of check rules.
    std::shared_ptr<int32_t> ruleCount_ = nullptr;
    // The tree of the check rules.
    std::shared_ptr<vector<Models::GetSensitiveDefineRuleConfigResponseBodyDataRuleTree>> ruleTree_ = nullptr;
    // The number of selected check rules.
    std::shared_ptr<int32_t> selectedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
