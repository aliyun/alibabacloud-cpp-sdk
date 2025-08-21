// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZESOLUTIONRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZESOLUTIONRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeSolutionResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeSolutionResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
      DARABONBA_PTR_TO_JSON(SolutionExt, solutionExt_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeSolutionResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
      DARABONBA_PTR_FROM_JSON(SolutionExt, solutionExt_);
    };
    GetQueryOptimizeSolutionResponseBodyDataList() = default ;
    GetQueryOptimizeSolutionResponseBodyDataList(const GetQueryOptimizeSolutionResponseBodyDataList &) = default ;
    GetQueryOptimizeSolutionResponseBodyDataList(GetQueryOptimizeSolutionResponseBodyDataList &&) = default ;
    GetQueryOptimizeSolutionResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeSolutionResponseBodyDataList() = default ;
    GetQueryOptimizeSolutionResponseBodyDataList& operator=(const GetQueryOptimizeSolutionResponseBodyDataList &) = default ;
    GetQueryOptimizeSolutionResponseBodyDataList& operator=(GetQueryOptimizeSolutionResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->level_ != nullptr
        && this->ruleId_ != nullptr && this->solution_ != nullptr && this->solutionExt_ != nullptr; };
    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetQueryOptimizeSolutionResponseBodyDataList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetQueryOptimizeSolutionResponseBodyDataList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline string solution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
    inline GetQueryOptimizeSolutionResponseBodyDataList& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


    // solutionExt Field Functions 
    bool hasSolutionExt() const { return this->solutionExt_ != nullptr;};
    void deleteSolutionExt() { this->solutionExt_ = nullptr;};
    inline string solutionExt() const { DARABONBA_PTR_GET_DEFAULT(solutionExt_, "") };
    inline GetQueryOptimizeSolutionResponseBodyDataList& setSolutionExt(string solutionExt) { DARABONBA_PTR_SET_VALUE(solutionExt_, solutionExt) };


  protected:
    // The severity level. Valid values:
    // 
    // * **INFO**
    // * **WARN**
    std::shared_ptr<string> level_ = nullptr;
    // The tag ID.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The suggestion.
    std::shared_ptr<string> solution_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<string> solutionExt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
