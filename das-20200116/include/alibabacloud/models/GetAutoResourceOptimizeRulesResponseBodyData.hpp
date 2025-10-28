// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTORESOURCEOPTIMIZERULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAUTORESOURCEOPTIMIZERULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAutoResourceOptimizeRulesResponseBodyDataEnableAutoResourceOptimizeList.hpp>
#include <alibabacloud/models/GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList.hpp>
#include <alibabacloud/models/GetAutoResourceOptimizeRulesResponseBodyDataTurnOffAutoResourceOptimizeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutoResourceOptimizeRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoResourceOptimizeRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAutoResourceOptimizeCount, enableAutoResourceOptimizeCount_);
      DARABONBA_PTR_TO_JSON(EnableAutoResourceOptimizeList, enableAutoResourceOptimizeList_);
      DARABONBA_PTR_TO_JSON(HasEnableRuleButNotDasProCount, hasEnableRuleButNotDasProCount_);
      DARABONBA_PTR_TO_JSON(HasEnableRuleButNotDasProList, hasEnableRuleButNotDasProList_);
      DARABONBA_PTR_TO_JSON(NeverEnableAutoResourceOptimizeOrReleasedInstanceCount, neverEnableAutoResourceOptimizeOrReleasedInstanceCount_);
      DARABONBA_PTR_TO_JSON(NeverEnableAutoResourceOptimizeOrReleasedInstanceIdList, neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_);
      DARABONBA_PTR_TO_JSON(TotalAutoResourceOptimizeRulesCount, totalAutoResourceOptimizeRulesCount_);
      DARABONBA_PTR_TO_JSON(TurnOffAutoResourceOptimizeCount, turnOffAutoResourceOptimizeCount_);
      DARABONBA_PTR_TO_JSON(TurnOffAutoResourceOptimizeList, turnOffAutoResourceOptimizeList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoResourceOptimizeRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAutoResourceOptimizeCount, enableAutoResourceOptimizeCount_);
      DARABONBA_PTR_FROM_JSON(EnableAutoResourceOptimizeList, enableAutoResourceOptimizeList_);
      DARABONBA_PTR_FROM_JSON(HasEnableRuleButNotDasProCount, hasEnableRuleButNotDasProCount_);
      DARABONBA_PTR_FROM_JSON(HasEnableRuleButNotDasProList, hasEnableRuleButNotDasProList_);
      DARABONBA_PTR_FROM_JSON(NeverEnableAutoResourceOptimizeOrReleasedInstanceCount, neverEnableAutoResourceOptimizeOrReleasedInstanceCount_);
      DARABONBA_PTR_FROM_JSON(NeverEnableAutoResourceOptimizeOrReleasedInstanceIdList, neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(TotalAutoResourceOptimizeRulesCount, totalAutoResourceOptimizeRulesCount_);
      DARABONBA_PTR_FROM_JSON(TurnOffAutoResourceOptimizeCount, turnOffAutoResourceOptimizeCount_);
      DARABONBA_PTR_FROM_JSON(TurnOffAutoResourceOptimizeList, turnOffAutoResourceOptimizeList_);
    };
    GetAutoResourceOptimizeRulesResponseBodyData() = default ;
    GetAutoResourceOptimizeRulesResponseBodyData(const GetAutoResourceOptimizeRulesResponseBodyData &) = default ;
    GetAutoResourceOptimizeRulesResponseBodyData(GetAutoResourceOptimizeRulesResponseBodyData &&) = default ;
    GetAutoResourceOptimizeRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoResourceOptimizeRulesResponseBodyData() = default ;
    GetAutoResourceOptimizeRulesResponseBodyData& operator=(const GetAutoResourceOptimizeRulesResponseBodyData &) = default ;
    GetAutoResourceOptimizeRulesResponseBodyData& operator=(GetAutoResourceOptimizeRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableAutoResourceOptimizeCount_ == nullptr
        && return this->enableAutoResourceOptimizeList_ == nullptr && return this->hasEnableRuleButNotDasProCount_ == nullptr && return this->hasEnableRuleButNotDasProList_ == nullptr && return this->neverEnableAutoResourceOptimizeOrReleasedInstanceCount_ == nullptr && return this->neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_ == nullptr
        && return this->totalAutoResourceOptimizeRulesCount_ == nullptr && return this->turnOffAutoResourceOptimizeCount_ == nullptr && return this->turnOffAutoResourceOptimizeList_ == nullptr; };
    // enableAutoResourceOptimizeCount Field Functions 
    bool hasEnableAutoResourceOptimizeCount() const { return this->enableAutoResourceOptimizeCount_ != nullptr;};
    void deleteEnableAutoResourceOptimizeCount() { this->enableAutoResourceOptimizeCount_ = nullptr;};
    inline int64_t enableAutoResourceOptimizeCount() const { DARABONBA_PTR_GET_DEFAULT(enableAutoResourceOptimizeCount_, 0L) };
    inline GetAutoResourceOptimizeRulesResponseBodyData& setEnableAutoResourceOptimizeCount(int64_t enableAutoResourceOptimizeCount) { DARABONBA_PTR_SET_VALUE(enableAutoResourceOptimizeCount_, enableAutoResourceOptimizeCount) };


    // enableAutoResourceOptimizeList Field Functions 
    bool hasEnableAutoResourceOptimizeList() const { return this->enableAutoResourceOptimizeList_ != nullptr;};
    void deleteEnableAutoResourceOptimizeList() { this->enableAutoResourceOptimizeList_ = nullptr;};
    inline const vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataEnableAutoResourceOptimizeList> & enableAutoResourceOptimizeList() const { DARABONBA_PTR_GET_CONST(enableAutoResourceOptimizeList_, vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataEnableAutoResourceOptimizeList>) };
    inline vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataEnableAutoResourceOptimizeList> enableAutoResourceOptimizeList() { DARABONBA_PTR_GET(enableAutoResourceOptimizeList_, vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataEnableAutoResourceOptimizeList>) };
    inline GetAutoResourceOptimizeRulesResponseBodyData& setEnableAutoResourceOptimizeList(const vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataEnableAutoResourceOptimizeList> & enableAutoResourceOptimizeList) { DARABONBA_PTR_SET_VALUE(enableAutoResourceOptimizeList_, enableAutoResourceOptimizeList) };
    inline GetAutoResourceOptimizeRulesResponseBodyData& setEnableAutoResourceOptimizeList(vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataEnableAutoResourceOptimizeList> && enableAutoResourceOptimizeList) { DARABONBA_PTR_SET_RVALUE(enableAutoResourceOptimizeList_, enableAutoResourceOptimizeList) };


    // hasEnableRuleButNotDasProCount Field Functions 
    bool hasHasEnableRuleButNotDasProCount() const { return this->hasEnableRuleButNotDasProCount_ != nullptr;};
    void deleteHasEnableRuleButNotDasProCount() { this->hasEnableRuleButNotDasProCount_ = nullptr;};
    inline int64_t hasEnableRuleButNotDasProCount() const { DARABONBA_PTR_GET_DEFAULT(hasEnableRuleButNotDasProCount_, 0L) };
    inline GetAutoResourceOptimizeRulesResponseBodyData& setHasEnableRuleButNotDasProCount(int64_t hasEnableRuleButNotDasProCount) { DARABONBA_PTR_SET_VALUE(hasEnableRuleButNotDasProCount_, hasEnableRuleButNotDasProCount) };


    // hasEnableRuleButNotDasProList Field Functions 
    bool hasHasEnableRuleButNotDasProList() const { return this->hasEnableRuleButNotDasProList_ != nullptr;};
    void deleteHasEnableRuleButNotDasProList() { this->hasEnableRuleButNotDasProList_ = nullptr;};
    inline const vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList> & hasEnableRuleButNotDasProList() const { DARABONBA_PTR_GET_CONST(hasEnableRuleButNotDasProList_, vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList>) };
    inline vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList> hasEnableRuleButNotDasProList() { DARABONBA_PTR_GET(hasEnableRuleButNotDasProList_, vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList>) };
    inline GetAutoResourceOptimizeRulesResponseBodyData& setHasEnableRuleButNotDasProList(const vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList> & hasEnableRuleButNotDasProList) { DARABONBA_PTR_SET_VALUE(hasEnableRuleButNotDasProList_, hasEnableRuleButNotDasProList) };
    inline GetAutoResourceOptimizeRulesResponseBodyData& setHasEnableRuleButNotDasProList(vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList> && hasEnableRuleButNotDasProList) { DARABONBA_PTR_SET_RVALUE(hasEnableRuleButNotDasProList_, hasEnableRuleButNotDasProList) };


    // neverEnableAutoResourceOptimizeOrReleasedInstanceCount Field Functions 
    bool hasNeverEnableAutoResourceOptimizeOrReleasedInstanceCount() const { return this->neverEnableAutoResourceOptimizeOrReleasedInstanceCount_ != nullptr;};
    void deleteNeverEnableAutoResourceOptimizeOrReleasedInstanceCount() { this->neverEnableAutoResourceOptimizeOrReleasedInstanceCount_ = nullptr;};
    inline int64_t neverEnableAutoResourceOptimizeOrReleasedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(neverEnableAutoResourceOptimizeOrReleasedInstanceCount_, 0L) };
    inline GetAutoResourceOptimizeRulesResponseBodyData& setNeverEnableAutoResourceOptimizeOrReleasedInstanceCount(int64_t neverEnableAutoResourceOptimizeOrReleasedInstanceCount) { DARABONBA_PTR_SET_VALUE(neverEnableAutoResourceOptimizeOrReleasedInstanceCount_, neverEnableAutoResourceOptimizeOrReleasedInstanceCount) };


    // neverEnableAutoResourceOptimizeOrReleasedInstanceIdList Field Functions 
    bool hasNeverEnableAutoResourceOptimizeOrReleasedInstanceIdList() const { return this->neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_ != nullptr;};
    void deleteNeverEnableAutoResourceOptimizeOrReleasedInstanceIdList() { this->neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_ = nullptr;};
    inline const vector<string> & neverEnableAutoResourceOptimizeOrReleasedInstanceIdList() const { DARABONBA_PTR_GET_CONST(neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_, vector<string>) };
    inline vector<string> neverEnableAutoResourceOptimizeOrReleasedInstanceIdList() { DARABONBA_PTR_GET(neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_, vector<string>) };
    inline GetAutoResourceOptimizeRulesResponseBodyData& setNeverEnableAutoResourceOptimizeOrReleasedInstanceIdList(const vector<string> & neverEnableAutoResourceOptimizeOrReleasedInstanceIdList) { DARABONBA_PTR_SET_VALUE(neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_, neverEnableAutoResourceOptimizeOrReleasedInstanceIdList) };
    inline GetAutoResourceOptimizeRulesResponseBodyData& setNeverEnableAutoResourceOptimizeOrReleasedInstanceIdList(vector<string> && neverEnableAutoResourceOptimizeOrReleasedInstanceIdList) { DARABONBA_PTR_SET_RVALUE(neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_, neverEnableAutoResourceOptimizeOrReleasedInstanceIdList) };


    // totalAutoResourceOptimizeRulesCount Field Functions 
    bool hasTotalAutoResourceOptimizeRulesCount() const { return this->totalAutoResourceOptimizeRulesCount_ != nullptr;};
    void deleteTotalAutoResourceOptimizeRulesCount() { this->totalAutoResourceOptimizeRulesCount_ = nullptr;};
    inline int64_t totalAutoResourceOptimizeRulesCount() const { DARABONBA_PTR_GET_DEFAULT(totalAutoResourceOptimizeRulesCount_, 0L) };
    inline GetAutoResourceOptimizeRulesResponseBodyData& setTotalAutoResourceOptimizeRulesCount(int64_t totalAutoResourceOptimizeRulesCount) { DARABONBA_PTR_SET_VALUE(totalAutoResourceOptimizeRulesCount_, totalAutoResourceOptimizeRulesCount) };


    // turnOffAutoResourceOptimizeCount Field Functions 
    bool hasTurnOffAutoResourceOptimizeCount() const { return this->turnOffAutoResourceOptimizeCount_ != nullptr;};
    void deleteTurnOffAutoResourceOptimizeCount() { this->turnOffAutoResourceOptimizeCount_ = nullptr;};
    inline int64_t turnOffAutoResourceOptimizeCount() const { DARABONBA_PTR_GET_DEFAULT(turnOffAutoResourceOptimizeCount_, 0L) };
    inline GetAutoResourceOptimizeRulesResponseBodyData& setTurnOffAutoResourceOptimizeCount(int64_t turnOffAutoResourceOptimizeCount) { DARABONBA_PTR_SET_VALUE(turnOffAutoResourceOptimizeCount_, turnOffAutoResourceOptimizeCount) };


    // turnOffAutoResourceOptimizeList Field Functions 
    bool hasTurnOffAutoResourceOptimizeList() const { return this->turnOffAutoResourceOptimizeList_ != nullptr;};
    void deleteTurnOffAutoResourceOptimizeList() { this->turnOffAutoResourceOptimizeList_ = nullptr;};
    inline const vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataTurnOffAutoResourceOptimizeList> & turnOffAutoResourceOptimizeList() const { DARABONBA_PTR_GET_CONST(turnOffAutoResourceOptimizeList_, vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataTurnOffAutoResourceOptimizeList>) };
    inline vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataTurnOffAutoResourceOptimizeList> turnOffAutoResourceOptimizeList() { DARABONBA_PTR_GET(turnOffAutoResourceOptimizeList_, vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataTurnOffAutoResourceOptimizeList>) };
    inline GetAutoResourceOptimizeRulesResponseBodyData& setTurnOffAutoResourceOptimizeList(const vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataTurnOffAutoResourceOptimizeList> & turnOffAutoResourceOptimizeList) { DARABONBA_PTR_SET_VALUE(turnOffAutoResourceOptimizeList_, turnOffAutoResourceOptimizeList) };
    inline GetAutoResourceOptimizeRulesResponseBodyData& setTurnOffAutoResourceOptimizeList(vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataTurnOffAutoResourceOptimizeList> && turnOffAutoResourceOptimizeList) { DARABONBA_PTR_SET_RVALUE(turnOffAutoResourceOptimizeList_, turnOffAutoResourceOptimizeList) };


  protected:
    // The number of database instances for which the automatic fragment recycling feature is currently enabled.
    std::shared_ptr<int64_t> enableAutoResourceOptimizeCount_ = nullptr;
    // The database instances for which the automatic fragment recycling feature is currently enabled.
    std::shared_ptr<vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataEnableAutoResourceOptimizeList>> enableAutoResourceOptimizeList_ = nullptr;
    // The number of database instances for which the automatic fragment recycling feature is enabled and DAS Enterprise Edition is disabled.
    std::shared_ptr<int64_t> hasEnableRuleButNotDasProCount_ = nullptr;
    // The database instances for which the automatic fragment recycling feature is enabled and DAS Enterprise Edition is disabled.
    // 
    // >  Automatic fragment recycling tasks are run on this type of database instances only if DAS Enterprise Edition is enabled for the database instances again.
    std::shared_ptr<vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList>> hasEnableRuleButNotDasProList_ = nullptr;
    // The number of database instances that do not exist or for which the automatic fragment recycling feature has never been enabled.
    // 
    // >  If a database instance does not exist, the instance has been released or the specified instance ID is invalid.
    std::shared_ptr<int64_t> neverEnableAutoResourceOptimizeOrReleasedInstanceCount_ = nullptr;
    // The database instances that do not exist or for which the automatic fragment recycling feature has never been enabled.
    std::shared_ptr<vector<string>> neverEnableAutoResourceOptimizeOrReleasedInstanceIdList_ = nullptr;
    // The number of database instances for which the automatic fragment recycling feature has been enabled.
    std::shared_ptr<int64_t> totalAutoResourceOptimizeRulesCount_ = nullptr;
    // The number of database instances for which the automatic fragment recycling feature was once enabled but is currently disabled.
    std::shared_ptr<int64_t> turnOffAutoResourceOptimizeCount_ = nullptr;
    // The database instances for which the automatic fragment recycling feature was once enabled but is currently disabled.
    std::shared_ptr<vector<Models::GetAutoResourceOptimizeRulesResponseBodyDataTurnOffAutoResourceOptimizeList>> turnOffAutoResourceOptimizeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
