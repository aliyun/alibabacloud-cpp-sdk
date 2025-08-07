// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATAUNHITRULEREVIEWINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATAUNHITRULEREVIEWINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/Qualitycheck20190115.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionInfoList, conditionInfoList_);
      DARABONBA_PTR_TO_JSON(Matched, matched_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(TaskFlowType, taskFlowType_);
    };
    friend void from_json(const Darabonba::Json& j, TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionInfoList, conditionInfoList_);
      DARABONBA_PTR_FROM_JSON(Matched, matched_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(TaskFlowType, taskFlowType_);
    };
    TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList() = default ;
    TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList(const TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList &) = default ;
    TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList(TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList &&) = default ;
    TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList() = default ;
    TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList& operator=(const TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList &) = default ;
    TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList& operator=(TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditionInfoList_ != nullptr
        && this->matched_ != nullptr && this->rid_ != nullptr && this->taskFlowType_ != nullptr; };
    // conditionInfoList Field Functions 
    bool hasConditionInfoList() const { return this->conditionInfoList_ != nullptr;};
    void deleteConditionInfoList() { this->conditionInfoList_ = nullptr;};
    inline const vector<Models::ConditionBasicInfo> & conditionInfoList() const { DARABONBA_PTR_GET_CONST(conditionInfoList_, vector<Models::ConditionBasicInfo>) };
    inline vector<Models::ConditionBasicInfo> conditionInfoList() { DARABONBA_PTR_GET(conditionInfoList_, vector<Models::ConditionBasicInfo>) };
    inline TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList& setConditionInfoList(const vector<Models::ConditionBasicInfo> & conditionInfoList) { DARABONBA_PTR_SET_VALUE(conditionInfoList_, conditionInfoList) };
    inline TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList& setConditionInfoList(vector<Models::ConditionBasicInfo> && conditionInfoList) { DARABONBA_PTR_SET_RVALUE(conditionInfoList_, conditionInfoList) };


    // matched Field Functions 
    bool hasMatched() const { return this->matched_ != nullptr;};
    void deleteMatched() { this->matched_ = nullptr;};
    inline bool matched() const { DARABONBA_PTR_GET_DEFAULT(matched_, false) };
    inline TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList& setMatched(bool matched) { DARABONBA_PTR_SET_VALUE(matched_, matched) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // taskFlowType Field Functions 
    bool hasTaskFlowType() const { return this->taskFlowType_ != nullptr;};
    void deleteTaskFlowType() { this->taskFlowType_ = nullptr;};
    inline int32_t taskFlowType() const { DARABONBA_PTR_GET_DEFAULT(taskFlowType_, 0) };
    inline TestRuleV4ResponseBodyDataUnhitRuleReviewInfoList& setTaskFlowType(int32_t taskFlowType) { DARABONBA_PTR_SET_VALUE(taskFlowType_, taskFlowType) };


  protected:
    std::shared_ptr<vector<Models::ConditionBasicInfo>> conditionInfoList_ = nullptr;
    std::shared_ptr<bool> matched_ = nullptr;
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<int32_t> taskFlowType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
