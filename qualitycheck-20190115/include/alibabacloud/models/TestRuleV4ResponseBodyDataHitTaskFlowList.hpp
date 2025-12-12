// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATAHITTASKFLOWLIST_HPP_
#define ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATAHITTASKFLOWLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TaskGraphFlow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class TestRuleV4ResponseBodyDataHitTaskFlowList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestRuleV4ResponseBodyDataHitTaskFlowList& obj) { 
      DARABONBA_PTR_TO_JSON(GraphFlow, graphFlow_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(TaskFlowType, taskFlowType_);
    };
    friend void from_json(const Darabonba::Json& j, TestRuleV4ResponseBodyDataHitTaskFlowList& obj) { 
      DARABONBA_PTR_FROM_JSON(GraphFlow, graphFlow_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(TaskFlowType, taskFlowType_);
    };
    TestRuleV4ResponseBodyDataHitTaskFlowList() = default ;
    TestRuleV4ResponseBodyDataHitTaskFlowList(const TestRuleV4ResponseBodyDataHitTaskFlowList &) = default ;
    TestRuleV4ResponseBodyDataHitTaskFlowList(TestRuleV4ResponseBodyDataHitTaskFlowList &&) = default ;
    TestRuleV4ResponseBodyDataHitTaskFlowList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestRuleV4ResponseBodyDataHitTaskFlowList() = default ;
    TestRuleV4ResponseBodyDataHitTaskFlowList& operator=(const TestRuleV4ResponseBodyDataHitTaskFlowList &) = default ;
    TestRuleV4ResponseBodyDataHitTaskFlowList& operator=(TestRuleV4ResponseBodyDataHitTaskFlowList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->graphFlow_ == nullptr
        && return this->rid_ == nullptr && return this->taskFlowType_ == nullptr; };
    // graphFlow Field Functions 
    bool hasGraphFlow() const { return this->graphFlow_ != nullptr;};
    void deleteGraphFlow() { this->graphFlow_ = nullptr;};
    inline const Models::TaskGraphFlow & graphFlow() const { DARABONBA_PTR_GET_CONST(graphFlow_, Models::TaskGraphFlow) };
    inline Models::TaskGraphFlow graphFlow() { DARABONBA_PTR_GET(graphFlow_, Models::TaskGraphFlow) };
    inline TestRuleV4ResponseBodyDataHitTaskFlowList& setGraphFlow(const Models::TaskGraphFlow & graphFlow) { DARABONBA_PTR_SET_VALUE(graphFlow_, graphFlow) };
    inline TestRuleV4ResponseBodyDataHitTaskFlowList& setGraphFlow(Models::TaskGraphFlow && graphFlow) { DARABONBA_PTR_SET_RVALUE(graphFlow_, graphFlow) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline TestRuleV4ResponseBodyDataHitTaskFlowList& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // taskFlowType Field Functions 
    bool hasTaskFlowType() const { return this->taskFlowType_ != nullptr;};
    void deleteTaskFlowType() { this->taskFlowType_ = nullptr;};
    inline int32_t taskFlowType() const { DARABONBA_PTR_GET_DEFAULT(taskFlowType_, 0) };
    inline TestRuleV4ResponseBodyDataHitTaskFlowList& setTaskFlowType(int32_t taskFlowType) { DARABONBA_PTR_SET_VALUE(taskFlowType_, taskFlowType) };


  protected:
    std::shared_ptr<Models::TaskGraphFlow> graphFlow_ = nullptr;
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<int32_t> taskFlowType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
