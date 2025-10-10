// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSFORWARDGROUPCONFIGSERVERGROUPTUPLES_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSFORWARDGROUPCONFIGSERVERGROUPTUPLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples() = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples(const UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples &) = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples(UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples &&) = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples() = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples& operator=(const UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples &) = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples& operator=(UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples &&) = default ;
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
    inline UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The ID of the server group to which requests are forwarded.
    std::shared_ptr<string> serverGroupId_ = nullptr;
    // The weight of the server group. A larger value specifies a higher weight. A server group with a higher weight receives more requests. Valid values: **0** to **100**.
    // 
    // *   If the number of destination server groups is 1, the default weight of the server group is **100**, unless you specify a weight.
    // *   If the number of destination server groups is larger than 1, you must specify a weight.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
