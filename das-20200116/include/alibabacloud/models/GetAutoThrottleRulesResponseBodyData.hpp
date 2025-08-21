// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOTHROTTLERULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOTHROTTLERULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList.hpp>
#include <alibabacloud/models/GetAutoThrottleRulesResponseBodyDataTurnOffAutoThrottleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutoThrottleRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoThrottleRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAutoThrottleCount, enableAutoThrottleCount_);
      DARABONBA_PTR_TO_JSON(EnableAutoThrottleList, enableAutoThrottleList_);
      DARABONBA_PTR_TO_JSON(NeverEnableAutoThrottleOrReleasedInstanceCount, neverEnableAutoThrottleOrReleasedInstanceCount_);
      DARABONBA_PTR_TO_JSON(NeverEnableAutoThrottleOrReleasedInstanceIdList, neverEnableAutoThrottleOrReleasedInstanceIdList_);
      DARABONBA_PTR_TO_JSON(TotalAutoThrottleRulesCount, totalAutoThrottleRulesCount_);
      DARABONBA_PTR_TO_JSON(TurnOffAutoThrottleCount, turnOffAutoThrottleCount_);
      DARABONBA_PTR_TO_JSON(TurnOffAutoThrottleList, turnOffAutoThrottleList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoThrottleRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAutoThrottleCount, enableAutoThrottleCount_);
      DARABONBA_PTR_FROM_JSON(EnableAutoThrottleList, enableAutoThrottleList_);
      DARABONBA_PTR_FROM_JSON(NeverEnableAutoThrottleOrReleasedInstanceCount, neverEnableAutoThrottleOrReleasedInstanceCount_);
      DARABONBA_PTR_FROM_JSON(NeverEnableAutoThrottleOrReleasedInstanceIdList, neverEnableAutoThrottleOrReleasedInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(TotalAutoThrottleRulesCount, totalAutoThrottleRulesCount_);
      DARABONBA_PTR_FROM_JSON(TurnOffAutoThrottleCount, turnOffAutoThrottleCount_);
      DARABONBA_PTR_FROM_JSON(TurnOffAutoThrottleList, turnOffAutoThrottleList_);
    };
    GetAutoThrottleRulesResponseBodyData() = default ;
    GetAutoThrottleRulesResponseBodyData(const GetAutoThrottleRulesResponseBodyData &) = default ;
    GetAutoThrottleRulesResponseBodyData(GetAutoThrottleRulesResponseBodyData &&) = default ;
    GetAutoThrottleRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoThrottleRulesResponseBodyData() = default ;
    GetAutoThrottleRulesResponseBodyData& operator=(const GetAutoThrottleRulesResponseBodyData &) = default ;
    GetAutoThrottleRulesResponseBodyData& operator=(GetAutoThrottleRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableAutoThrottleCount_ != nullptr
        && this->enableAutoThrottleList_ != nullptr && this->neverEnableAutoThrottleOrReleasedInstanceCount_ != nullptr && this->neverEnableAutoThrottleOrReleasedInstanceIdList_ != nullptr && this->totalAutoThrottleRulesCount_ != nullptr && this->turnOffAutoThrottleCount_ != nullptr
        && this->turnOffAutoThrottleList_ != nullptr; };
    // enableAutoThrottleCount Field Functions 
    bool hasEnableAutoThrottleCount() const { return this->enableAutoThrottleCount_ != nullptr;};
    void deleteEnableAutoThrottleCount() { this->enableAutoThrottleCount_ = nullptr;};
    inline int64_t enableAutoThrottleCount() const { DARABONBA_PTR_GET_DEFAULT(enableAutoThrottleCount_, 0L) };
    inline GetAutoThrottleRulesResponseBodyData& setEnableAutoThrottleCount(int64_t enableAutoThrottleCount) { DARABONBA_PTR_SET_VALUE(enableAutoThrottleCount_, enableAutoThrottleCount) };


    // enableAutoThrottleList Field Functions 
    bool hasEnableAutoThrottleList() const { return this->enableAutoThrottleList_ != nullptr;};
    void deleteEnableAutoThrottleList() { this->enableAutoThrottleList_ = nullptr;};
    inline const vector<Models::GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList> & enableAutoThrottleList() const { DARABONBA_PTR_GET_CONST(enableAutoThrottleList_, vector<Models::GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList>) };
    inline vector<Models::GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList> enableAutoThrottleList() { DARABONBA_PTR_GET(enableAutoThrottleList_, vector<Models::GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList>) };
    inline GetAutoThrottleRulesResponseBodyData& setEnableAutoThrottleList(const vector<Models::GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList> & enableAutoThrottleList) { DARABONBA_PTR_SET_VALUE(enableAutoThrottleList_, enableAutoThrottleList) };
    inline GetAutoThrottleRulesResponseBodyData& setEnableAutoThrottleList(vector<Models::GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList> && enableAutoThrottleList) { DARABONBA_PTR_SET_RVALUE(enableAutoThrottleList_, enableAutoThrottleList) };


    // neverEnableAutoThrottleOrReleasedInstanceCount Field Functions 
    bool hasNeverEnableAutoThrottleOrReleasedInstanceCount() const { return this->neverEnableAutoThrottleOrReleasedInstanceCount_ != nullptr;};
    void deleteNeverEnableAutoThrottleOrReleasedInstanceCount() { this->neverEnableAutoThrottleOrReleasedInstanceCount_ = nullptr;};
    inline int64_t neverEnableAutoThrottleOrReleasedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(neverEnableAutoThrottleOrReleasedInstanceCount_, 0L) };
    inline GetAutoThrottleRulesResponseBodyData& setNeverEnableAutoThrottleOrReleasedInstanceCount(int64_t neverEnableAutoThrottleOrReleasedInstanceCount) { DARABONBA_PTR_SET_VALUE(neverEnableAutoThrottleOrReleasedInstanceCount_, neverEnableAutoThrottleOrReleasedInstanceCount) };


    // neverEnableAutoThrottleOrReleasedInstanceIdList Field Functions 
    bool hasNeverEnableAutoThrottleOrReleasedInstanceIdList() const { return this->neverEnableAutoThrottleOrReleasedInstanceIdList_ != nullptr;};
    void deleteNeverEnableAutoThrottleOrReleasedInstanceIdList() { this->neverEnableAutoThrottleOrReleasedInstanceIdList_ = nullptr;};
    inline const vector<string> & neverEnableAutoThrottleOrReleasedInstanceIdList() const { DARABONBA_PTR_GET_CONST(neverEnableAutoThrottleOrReleasedInstanceIdList_, vector<string>) };
    inline vector<string> neverEnableAutoThrottleOrReleasedInstanceIdList() { DARABONBA_PTR_GET(neverEnableAutoThrottleOrReleasedInstanceIdList_, vector<string>) };
    inline GetAutoThrottleRulesResponseBodyData& setNeverEnableAutoThrottleOrReleasedInstanceIdList(const vector<string> & neverEnableAutoThrottleOrReleasedInstanceIdList) { DARABONBA_PTR_SET_VALUE(neverEnableAutoThrottleOrReleasedInstanceIdList_, neverEnableAutoThrottleOrReleasedInstanceIdList) };
    inline GetAutoThrottleRulesResponseBodyData& setNeverEnableAutoThrottleOrReleasedInstanceIdList(vector<string> && neverEnableAutoThrottleOrReleasedInstanceIdList) { DARABONBA_PTR_SET_RVALUE(neverEnableAutoThrottleOrReleasedInstanceIdList_, neverEnableAutoThrottleOrReleasedInstanceIdList) };


    // totalAutoThrottleRulesCount Field Functions 
    bool hasTotalAutoThrottleRulesCount() const { return this->totalAutoThrottleRulesCount_ != nullptr;};
    void deleteTotalAutoThrottleRulesCount() { this->totalAutoThrottleRulesCount_ = nullptr;};
    inline int64_t totalAutoThrottleRulesCount() const { DARABONBA_PTR_GET_DEFAULT(totalAutoThrottleRulesCount_, 0L) };
    inline GetAutoThrottleRulesResponseBodyData& setTotalAutoThrottleRulesCount(int64_t totalAutoThrottleRulesCount) { DARABONBA_PTR_SET_VALUE(totalAutoThrottleRulesCount_, totalAutoThrottleRulesCount) };


    // turnOffAutoThrottleCount Field Functions 
    bool hasTurnOffAutoThrottleCount() const { return this->turnOffAutoThrottleCount_ != nullptr;};
    void deleteTurnOffAutoThrottleCount() { this->turnOffAutoThrottleCount_ = nullptr;};
    inline int64_t turnOffAutoThrottleCount() const { DARABONBA_PTR_GET_DEFAULT(turnOffAutoThrottleCount_, 0L) };
    inline GetAutoThrottleRulesResponseBodyData& setTurnOffAutoThrottleCount(int64_t turnOffAutoThrottleCount) { DARABONBA_PTR_SET_VALUE(turnOffAutoThrottleCount_, turnOffAutoThrottleCount) };


    // turnOffAutoThrottleList Field Functions 
    bool hasTurnOffAutoThrottleList() const { return this->turnOffAutoThrottleList_ != nullptr;};
    void deleteTurnOffAutoThrottleList() { this->turnOffAutoThrottleList_ = nullptr;};
    inline const vector<Models::GetAutoThrottleRulesResponseBodyDataTurnOffAutoThrottleList> & turnOffAutoThrottleList() const { DARABONBA_PTR_GET_CONST(turnOffAutoThrottleList_, vector<Models::GetAutoThrottleRulesResponseBodyDataTurnOffAutoThrottleList>) };
    inline vector<Models::GetAutoThrottleRulesResponseBodyDataTurnOffAutoThrottleList> turnOffAutoThrottleList() { DARABONBA_PTR_GET(turnOffAutoThrottleList_, vector<Models::GetAutoThrottleRulesResponseBodyDataTurnOffAutoThrottleList>) };
    inline GetAutoThrottleRulesResponseBodyData& setTurnOffAutoThrottleList(const vector<Models::GetAutoThrottleRulesResponseBodyDataTurnOffAutoThrottleList> & turnOffAutoThrottleList) { DARABONBA_PTR_SET_VALUE(turnOffAutoThrottleList_, turnOffAutoThrottleList) };
    inline GetAutoThrottleRulesResponseBodyData& setTurnOffAutoThrottleList(vector<Models::GetAutoThrottleRulesResponseBodyDataTurnOffAutoThrottleList> && turnOffAutoThrottleList) { DARABONBA_PTR_SET_RVALUE(turnOffAutoThrottleList_, turnOffAutoThrottleList) };


  protected:
    // The number of database instances for which the automatic SQL throttling feature is currently enabled.
    std::shared_ptr<int64_t> enableAutoThrottleCount_ = nullptr;
    // The database instances for which the automatic SQL throttling feature is currently enabled.
    std::shared_ptr<vector<Models::GetAutoThrottleRulesResponseBodyDataEnableAutoThrottleList>> enableAutoThrottleList_ = nullptr;
    // The number of database instances that do not exist or for which the automatic SQL throttling feature has never been enabled.
    // 
    // >  If a database instance does not exist, the instance has been released or the specified instance ID is invalid.
    std::shared_ptr<int64_t> neverEnableAutoThrottleOrReleasedInstanceCount_ = nullptr;
    // The number of database instances that do not exist or for which the automatic SQL throttling feature has never been enabled.
    // 
    // >  If a database instance does not exist, the instance has been released or the specified instance ID is invalid.
    std::shared_ptr<vector<string>> neverEnableAutoThrottleOrReleasedInstanceIdList_ = nullptr;
    // The number of databases for which the automatic SQL throttling feature has been enabled.
    std::shared_ptr<int64_t> totalAutoThrottleRulesCount_ = nullptr;
    // The number of database instances for which the automatic SQL throttling feature was once enabled but is currently disabled.
    std::shared_ptr<int64_t> turnOffAutoThrottleCount_ = nullptr;
    // The database instances for which the automatic SQL throttling feature was once enabled but is currently disabled.
    std::shared_ptr<vector<Models::GetAutoThrottleRulesResponseBodyDataTurnOffAutoThrottleList>> turnOffAutoThrottleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
