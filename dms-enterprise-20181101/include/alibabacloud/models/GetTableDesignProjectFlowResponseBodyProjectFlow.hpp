// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEDESIGNPROJECTFLOWRESPONSEBODYPROJECTFLOW_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEDESIGNPROJECTFLOWRESPONSEBODYPROJECTFLOW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableDesignProjectFlowResponseBodyProjectFlow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableDesignProjectFlowResponseBodyProjectFlow& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPosition, currentPosition_);
      DARABONBA_PTR_TO_JSON(FlowNodeArray, flowNodeArray_);
      DARABONBA_PTR_TO_JSON(RuleComment, ruleComment_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableDesignProjectFlowResponseBodyProjectFlow& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPosition, currentPosition_);
      DARABONBA_PTR_FROM_JSON(FlowNodeArray, flowNodeArray_);
      DARABONBA_PTR_FROM_JSON(RuleComment, ruleComment_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    GetTableDesignProjectFlowResponseBodyProjectFlow() = default ;
    GetTableDesignProjectFlowResponseBodyProjectFlow(const GetTableDesignProjectFlowResponseBodyProjectFlow &) = default ;
    GetTableDesignProjectFlowResponseBodyProjectFlow(GetTableDesignProjectFlowResponseBodyProjectFlow &&) = default ;
    GetTableDesignProjectFlowResponseBodyProjectFlow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableDesignProjectFlowResponseBodyProjectFlow() = default ;
    GetTableDesignProjectFlowResponseBodyProjectFlow& operator=(const GetTableDesignProjectFlowResponseBodyProjectFlow &) = default ;
    GetTableDesignProjectFlowResponseBodyProjectFlow& operator=(GetTableDesignProjectFlowResponseBodyProjectFlow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPosition_ == nullptr
        && return this->flowNodeArray_ == nullptr && return this->ruleComment_ == nullptr && return this->ruleName_ == nullptr; };
    // currentPosition Field Functions 
    bool hasCurrentPosition() const { return this->currentPosition_ != nullptr;};
    void deleteCurrentPosition() { this->currentPosition_ = nullptr;};
    inline int32_t currentPosition() const { DARABONBA_PTR_GET_DEFAULT(currentPosition_, 0) };
    inline GetTableDesignProjectFlowResponseBodyProjectFlow& setCurrentPosition(int32_t currentPosition) { DARABONBA_PTR_SET_VALUE(currentPosition_, currentPosition) };


    // flowNodeArray Field Functions 
    bool hasFlowNodeArray() const { return this->flowNodeArray_ != nullptr;};
    void deleteFlowNodeArray() { this->flowNodeArray_ = nullptr;};
    inline const vector<Models::GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray> & flowNodeArray() const { DARABONBA_PTR_GET_CONST(flowNodeArray_, vector<Models::GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray>) };
    inline vector<Models::GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray> flowNodeArray() { DARABONBA_PTR_GET(flowNodeArray_, vector<Models::GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray>) };
    inline GetTableDesignProjectFlowResponseBodyProjectFlow& setFlowNodeArray(const vector<Models::GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray> & flowNodeArray) { DARABONBA_PTR_SET_VALUE(flowNodeArray_, flowNodeArray) };
    inline GetTableDesignProjectFlowResponseBodyProjectFlow& setFlowNodeArray(vector<Models::GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray> && flowNodeArray) { DARABONBA_PTR_SET_RVALUE(flowNodeArray_, flowNodeArray) };


    // ruleComment Field Functions 
    bool hasRuleComment() const { return this->ruleComment_ != nullptr;};
    void deleteRuleComment() { this->ruleComment_ = nullptr;};
    inline string ruleComment() const { DARABONBA_PTR_GET_DEFAULT(ruleComment_, "") };
    inline GetTableDesignProjectFlowResponseBodyProjectFlow& setRuleComment(string ruleComment) { DARABONBA_PTR_SET_VALUE(ruleComment_, ruleComment) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetTableDesignProjectFlowResponseBodyProjectFlow& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The position of the current node in the process.
    std::shared_ptr<int32_t> currentPosition_ = nullptr;
    // The nodes in the process.
    std::shared_ptr<vector<Models::GetTableDesignProjectFlowResponseBodyProjectFlowFlowNodeArray>> flowNodeArray_ = nullptr;
    // The description of the security rule set that is applied to the schema design ticket.
    std::shared_ptr<string> ruleComment_ = nullptr;
    // The name of the security rule set that is applied to the schema design ticket.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
