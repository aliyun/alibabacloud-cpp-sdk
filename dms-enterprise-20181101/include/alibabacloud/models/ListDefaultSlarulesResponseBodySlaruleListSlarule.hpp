// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEFAULTSLARULESRESPONSEBODYSLARULELISTSLARULE_HPP_
#define ALIBABACLOUD_MODELS_LISTDEFAULTSLARULESRESPONSEBODYSLARULELISTSLARULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDefaultSLARulesResponseBodySLARuleListSLARule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDefaultSLARulesResponseBodySLARuleListSLARule& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IntervalMinutes, intervalMinutes_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDefaultSLARulesResponseBodySLARuleListSLARule& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IntervalMinutes, intervalMinutes_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    ListDefaultSLARulesResponseBodySLARuleListSLARule() = default ;
    ListDefaultSLARulesResponseBodySLARuleListSLARule(const ListDefaultSLARulesResponseBodySLARuleListSLARule &) = default ;
    ListDefaultSLARulesResponseBodySLARuleListSLARule(ListDefaultSLARulesResponseBodySLARuleListSLARule &&) = default ;
    ListDefaultSLARulesResponseBodySLARuleListSLARule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDefaultSLARulesResponseBodySLARuleListSLARule() = default ;
    ListDefaultSLARulesResponseBodySLARuleListSLARule& operator=(const ListDefaultSLARulesResponseBodySLARuleListSLARule &) = default ;
    ListDefaultSLARulesResponseBodySLARuleListSLARule& operator=(ListDefaultSLARulesResponseBodySLARuleListSLARule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagId_ != nullptr
        && this->id_ != nullptr && this->intervalMinutes_ != nullptr && this->nodeId_ != nullptr && this->ruleType_ != nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline ListDefaultSLARulesResponseBodySLARuleListSLARule& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDefaultSLARulesResponseBodySLARuleListSLARule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // intervalMinutes Field Functions 
    bool hasIntervalMinutes() const { return this->intervalMinutes_ != nullptr;};
    void deleteIntervalMinutes() { this->intervalMinutes_ = nullptr;};
    inline int32_t intervalMinutes() const { DARABONBA_PTR_GET_DEFAULT(intervalMinutes_, 0) };
    inline ListDefaultSLARulesResponseBodySLARuleListSLARule& setIntervalMinutes(int32_t intervalMinutes) { DARABONBA_PTR_SET_VALUE(intervalMinutes_, intervalMinutes) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListDefaultSLARulesResponseBodySLARuleListSLARule& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline ListDefaultSLARulesResponseBodySLARuleListSLARule& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The ID of the task flow.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The ID of the SLA rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The timeout period. Unit: minutes.
    std::shared_ptr<int32_t> intervalMinutes_ = nullptr;
    // The ID of the task node.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   **0**: an SLA rule for a task flow
    // *   **1**: an SLA rule for a task node
    std::shared_ptr<int32_t> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
