// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATAHITRULEREVIEWINFOLISTBRANCHINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATAHITRULEREVIEWINFOLISTBRANCHINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Lambda, lambda_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextNodeId, nextNodeId_);
      DARABONBA_PTR_TO_JSON(Situation, situation_);
      DARABONBA_PTR_TO_JSON(Triggers, triggers_);
    };
    friend void from_json(const Darabonba::Json& j, TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextNodeId, nextNodeId_);
      DARABONBA_PTR_FROM_JSON(Situation, situation_);
      DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
    };
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList() = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList(const TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList &) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList(TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList &&) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList() = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList& operator=(const TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList &) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList& operator=(TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkType_ != nullptr
        && this->index_ != nullptr && this->lambda_ != nullptr && this->name_ != nullptr && this->nextNodeId_ != nullptr && this->situation_ != nullptr
        && this->triggers_ != nullptr; };
    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // lambda Field Functions 
    bool hasLambda() const { return this->lambda_ != nullptr;};
    void deleteLambda() { this->lambda_ = nullptr;};
    inline string lambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextNodeId Field Functions 
    bool hasNextNodeId() const { return this->nextNodeId_ != nullptr;};
    void deleteNextNodeId() { this->nextNodeId_ = nullptr;};
    inline int64_t nextNodeId() const { DARABONBA_PTR_GET_DEFAULT(nextNodeId_, 0L) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList& setNextNodeId(int64_t nextNodeId) { DARABONBA_PTR_SET_VALUE(nextNodeId_, nextNodeId) };


    // situation Field Functions 
    bool hasSituation() const { return this->situation_ != nullptr;};
    void deleteSituation() { this->situation_ = nullptr;};
    inline const Models::NextNodeSituations & situation() const { DARABONBA_PTR_GET_CONST(situation_, Models::NextNodeSituations) };
    inline Models::NextNodeSituations situation() { DARABONBA_PTR_GET(situation_, Models::NextNodeSituations) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList& setSituation(const Models::NextNodeSituations & situation) { DARABONBA_PTR_SET_VALUE(situation_, situation) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList& setSituation(Models::NextNodeSituations && situation) { DARABONBA_PTR_SET_RVALUE(situation_, situation) };


    // triggers Field Functions 
    bool hasTriggers() const { return this->triggers_ != nullptr;};
    void deleteTriggers() { this->triggers_ = nullptr;};
    inline const vector<string> & triggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<string>) };
    inline vector<string> triggers() { DARABONBA_PTR_GET(triggers_, vector<string>) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList& setTriggers(const vector<string> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList& setTriggers(vector<string> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


  protected:
    std::shared_ptr<int32_t> checkType_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<string> lambda_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> nextNodeId_ = nullptr;
    std::shared_ptr<Models::NextNodeSituations> situation_ = nullptr;
    std::shared_ptr<vector<string>> triggers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
