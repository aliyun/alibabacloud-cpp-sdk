// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONSFORWARDGROUPCONFIGSERVERGROUPTUPLES_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONSFORWARDGROUPCONFIGSERVERGROUPTUPLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples() = default ;
    UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples(const UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples &) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples(UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples &&) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples() = default ;
    UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples& operator=(const UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples &) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples& operator=(UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupId_ != nullptr
        && this->weight_ != nullptr; };
    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string serverGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> serverGroupId_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
