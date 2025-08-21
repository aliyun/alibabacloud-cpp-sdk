// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNNINGSQLCONCURRENCYCONTROLRULESRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETRUNNINGSQLCONCURRENCYCONTROLRULESRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRunningSqlConcurrencyControlRulesResponseBodyDataListRunningRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetRunningSqlConcurrencyControlRulesResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunningSqlConcurrencyControlRulesResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(runningRules, runningRules_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunningSqlConcurrencyControlRulesResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(runningRules, runningRules_);
    };
    GetRunningSqlConcurrencyControlRulesResponseBodyDataList() = default ;
    GetRunningSqlConcurrencyControlRulesResponseBodyDataList(const GetRunningSqlConcurrencyControlRulesResponseBodyDataList &) = default ;
    GetRunningSqlConcurrencyControlRulesResponseBodyDataList(GetRunningSqlConcurrencyControlRulesResponseBodyDataList &&) = default ;
    GetRunningSqlConcurrencyControlRulesResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunningSqlConcurrencyControlRulesResponseBodyDataList() = default ;
    GetRunningSqlConcurrencyControlRulesResponseBodyDataList& operator=(const GetRunningSqlConcurrencyControlRulesResponseBodyDataList &) = default ;
    GetRunningSqlConcurrencyControlRulesResponseBodyDataList& operator=(GetRunningSqlConcurrencyControlRulesResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->runningRules_ != nullptr; };
    // runningRules Field Functions 
    bool hasRunningRules() const { return this->runningRules_ != nullptr;};
    void deleteRunningRules() { this->runningRules_ = nullptr;};
    inline const vector<Models::GetRunningSqlConcurrencyControlRulesResponseBodyDataListRunningRules> & runningRules() const { DARABONBA_PTR_GET_CONST(runningRules_, vector<Models::GetRunningSqlConcurrencyControlRulesResponseBodyDataListRunningRules>) };
    inline vector<Models::GetRunningSqlConcurrencyControlRulesResponseBodyDataListRunningRules> runningRules() { DARABONBA_PTR_GET(runningRules_, vector<Models::GetRunningSqlConcurrencyControlRulesResponseBodyDataListRunningRules>) };
    inline GetRunningSqlConcurrencyControlRulesResponseBodyDataList& setRunningRules(const vector<Models::GetRunningSqlConcurrencyControlRulesResponseBodyDataListRunningRules> & runningRules) { DARABONBA_PTR_SET_VALUE(runningRules_, runningRules) };
    inline GetRunningSqlConcurrencyControlRulesResponseBodyDataList& setRunningRules(vector<Models::GetRunningSqlConcurrencyControlRulesResponseBodyDataListRunningRules> && runningRules) { DARABONBA_PTR_SET_RVALUE(runningRules_, runningRules) };


  protected:
    std::shared_ptr<vector<Models::GetRunningSqlConcurrencyControlRulesResponseBodyDataListRunningRules>> runningRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
