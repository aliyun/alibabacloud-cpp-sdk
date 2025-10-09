// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTRULESRESPONSEBODYPAGINGINFOALERTRULESTRIGGERCONDITIONTARGET_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTRULESRESPONSEBODYPAGINGINFOALERTRULESTRIGGERCONDITIONTARGET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget& obj) { 
      DARABONBA_PTR_TO_JSON(AllowTasks, allowTasks_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowTasks, allowTasks_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget() = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget(const ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget &) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget(ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget &&) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget() = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget& operator=(const ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget &) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget& operator=(ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowTasks_ != nullptr
        && this->ids_ != nullptr && this->type_ != nullptr; };
    // allowTasks Field Functions 
    bool hasAllowTasks() const { return this->allowTasks_ != nullptr;};
    void deleteAllowTasks() { this->allowTasks_ = nullptr;};
    inline const vector<int64_t> & allowTasks() const { DARABONBA_PTR_GET_CONST(allowTasks_, vector<int64_t>) };
    inline vector<int64_t> allowTasks() { DARABONBA_PTR_GET(allowTasks_, vector<int64_t>) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget& setAllowTasks(const vector<int64_t> & allowTasks) { DARABONBA_PTR_SET_VALUE(allowTasks_, allowTasks) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget& setAllowTasks(vector<int64_t> && allowTasks) { DARABONBA_PTR_SET_RVALUE(allowTasks_, allowTasks) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> ids() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionTarget& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The nodes that are not to be monitored.
    std::shared_ptr<vector<int64_t>> allowTasks_ = nullptr;
    // The IDs of monitored objects.
    std::shared_ptr<vector<int64_t>> ids_ = nullptr;
    // The type of the monitored objects. Valid values:
    // 
    // *   Task: node
    // *   Baseline: baseline
    // *   Project: workspace
    // *   BizProcess: workflow
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
