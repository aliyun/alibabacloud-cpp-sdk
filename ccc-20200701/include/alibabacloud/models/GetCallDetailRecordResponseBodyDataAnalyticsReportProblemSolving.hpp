// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAANALYTICSREPORTPROBLEMSOLVING_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAANALYTICSREPORTPROBLEMSOLVING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving& obj) { 
      DARABONBA_PTR_TO_JSON(Problem, problem_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
      DARABONBA_PTR_TO_JSON(Solved, solved_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving& obj) { 
      DARABONBA_PTR_FROM_JSON(Problem, problem_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
      DARABONBA_PTR_FROM_JSON(Solved, solved_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving() = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving(const GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving &) = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving(GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving &&) = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving() = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving& operator=(const GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving &) = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving& operator=(GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->problem_ == nullptr
        && return this->solution_ == nullptr && return this->solved_ == nullptr && return this->success_ == nullptr && return this->taskId_ == nullptr; };
    // problem Field Functions 
    bool hasProblem() const { return this->problem_ != nullptr;};
    void deleteProblem() { this->problem_ = nullptr;};
    inline string problem() const { DARABONBA_PTR_GET_DEFAULT(problem_, "") };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving& setProblem(string problem) { DARABONBA_PTR_SET_VALUE(problem_, problem) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline string solution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


    // solved Field Functions 
    bool hasSolved() const { return this->solved_ != nullptr;};
    void deleteSolved() { this->solved_ = nullptr;};
    inline bool solved() const { DARABONBA_PTR_GET_DEFAULT(solved_, false) };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving& setSolved(bool solved) { DARABONBA_PTR_SET_VALUE(solved_, solved) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> problem_ = nullptr;
    std::shared_ptr<string> solution_ = nullptr;
    std::shared_ptr<bool> solved_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
