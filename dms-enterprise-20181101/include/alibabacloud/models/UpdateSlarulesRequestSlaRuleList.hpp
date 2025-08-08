// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESLARULESREQUESTSLARULELIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESLARULESREQUESTSLARULELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateSLARulesRequestSlaRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSLARulesRequestSlaRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(IntervalMinutes, intervalMinutes_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSLARulesRequestSlaRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(IntervalMinutes, intervalMinutes_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateSLARulesRequestSlaRuleList() = default ;
    UpdateSLARulesRequestSlaRuleList(const UpdateSLARulesRequestSlaRuleList &) = default ;
    UpdateSLARulesRequestSlaRuleList(UpdateSLARulesRequestSlaRuleList &&) = default ;
    UpdateSLARulesRequestSlaRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSLARulesRequestSlaRuleList() = default ;
    UpdateSLARulesRequestSlaRuleList& operator=(const UpdateSLARulesRequestSlaRuleList &) = default ;
    UpdateSLARulesRequestSlaRuleList& operator=(UpdateSLARulesRequestSlaRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagId_ != nullptr
        && this->intervalMinutes_ != nullptr && this->nodeId_ != nullptr && this->type_ != nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateSLARulesRequestSlaRuleList& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // intervalMinutes Field Functions 
    bool hasIntervalMinutes() const { return this->intervalMinutes_ != nullptr;};
    void deleteIntervalMinutes() { this->intervalMinutes_ = nullptr;};
    inline int32_t intervalMinutes() const { DARABONBA_PTR_GET_DEFAULT(intervalMinutes_, 0) };
    inline UpdateSLARulesRequestSlaRuleList& setIntervalMinutes(int32_t intervalMinutes) { DARABONBA_PTR_SET_VALUE(intervalMinutes_, intervalMinutes) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline UpdateSLARulesRequestSlaRuleList& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline UpdateSLARulesRequestSlaRuleList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the task flow.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The timeout period. Unit: minutes.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> intervalMinutes_ = nullptr;
    // The ID of the task node.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The rule type. Valid values:
    // 
    // *   **0**: SLA rules for task flows
    // *   **1**: SLA rules for nodes
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
