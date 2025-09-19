// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUILDRISKDEFINERULECONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETBUILDRISKDEFINERULECONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBuildRiskDefineRuleConfigResponseBodyDataRuleTree.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetBuildRiskDefineRuleConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBuildRiskDefineRuleConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_TO_JSON(RuleTree, ruleTree_);
      DARABONBA_PTR_TO_JSON(SelectedCount, selectedCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetBuildRiskDefineRuleConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_FROM_JSON(RuleTree, ruleTree_);
      DARABONBA_PTR_FROM_JSON(SelectedCount, selectedCount_);
    };
    GetBuildRiskDefineRuleConfigResponseBodyData() = default ;
    GetBuildRiskDefineRuleConfigResponseBodyData(const GetBuildRiskDefineRuleConfigResponseBodyData &) = default ;
    GetBuildRiskDefineRuleConfigResponseBodyData(GetBuildRiskDefineRuleConfigResponseBodyData &&) = default ;
    GetBuildRiskDefineRuleConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBuildRiskDefineRuleConfigResponseBodyData() = default ;
    GetBuildRiskDefineRuleConfigResponseBodyData& operator=(const GetBuildRiskDefineRuleConfigResponseBodyData &) = default ;
    GetBuildRiskDefineRuleConfigResponseBodyData& operator=(GetBuildRiskDefineRuleConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->ruleCount_ != nullptr && this->ruleTree_ != nullptr && this->selectedCount_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetBuildRiskDefineRuleConfigResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int32_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
    inline GetBuildRiskDefineRuleConfigResponseBodyData& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


    // ruleTree Field Functions 
    bool hasRuleTree() const { return this->ruleTree_ != nullptr;};
    void deleteRuleTree() { this->ruleTree_ = nullptr;};
    inline const vector<Models::GetBuildRiskDefineRuleConfigResponseBodyDataRuleTree> & ruleTree() const { DARABONBA_PTR_GET_CONST(ruleTree_, vector<Models::GetBuildRiskDefineRuleConfigResponseBodyDataRuleTree>) };
    inline vector<Models::GetBuildRiskDefineRuleConfigResponseBodyDataRuleTree> ruleTree() { DARABONBA_PTR_GET(ruleTree_, vector<Models::GetBuildRiskDefineRuleConfigResponseBodyDataRuleTree>) };
    inline GetBuildRiskDefineRuleConfigResponseBodyData& setRuleTree(const vector<Models::GetBuildRiskDefineRuleConfigResponseBodyDataRuleTree> & ruleTree) { DARABONBA_PTR_SET_VALUE(ruleTree_, ruleTree) };
    inline GetBuildRiskDefineRuleConfigResponseBodyData& setRuleTree(vector<Models::GetBuildRiskDefineRuleConfigResponseBodyDataRuleTree> && ruleTree) { DARABONBA_PTR_SET_RVALUE(ruleTree_, ruleTree) };


    // selectedCount Field Functions 
    bool hasSelectedCount() const { return this->selectedCount_ != nullptr;};
    void deleteSelectedCount() { this->selectedCount_ = nullptr;};
    inline int32_t selectedCount() const { DARABONBA_PTR_GET_DEFAULT(selectedCount_, 0) };
    inline GetBuildRiskDefineRuleConfigResponseBodyData& setSelectedCount(int32_t selectedCount) { DARABONBA_PTR_SET_VALUE(selectedCount_, selectedCount) };


  protected:
    // The configuration ID for scanning image build command risks.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The total number of check items.
    std::shared_ptr<int32_t> ruleCount_ = nullptr;
    // The details of all check items.
    std::shared_ptr<vector<Models::GetBuildRiskDefineRuleConfigResponseBodyDataRuleTree>> ruleTree_ = nullptr;
    // The number of selected check items.
    std::shared_ptr<int32_t> selectedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
