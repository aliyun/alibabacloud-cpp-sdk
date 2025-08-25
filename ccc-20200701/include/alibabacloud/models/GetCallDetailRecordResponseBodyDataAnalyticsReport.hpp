// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAANALYTICSREPORT_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAANALYTICSREPORT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCallDetailRecordResponseBodyDataAnalyticsReportEmotion.hpp>
#include <alibabacloud/models/GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving.hpp>
#include <alibabacloud/models/GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction.hpp>
#include <alibabacloud/models/GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetCallDetailRecordResponseBodyDataAnalyticsReport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDetailRecordResponseBodyDataAnalyticsReport& obj) { 
      DARABONBA_PTR_TO_JSON(Emotion, emotion_);
      DARABONBA_PTR_TO_JSON(ProblemSolving, problemSolving_);
      DARABONBA_PTR_TO_JSON(Satisfaction, satisfaction_);
      DARABONBA_PTR_TO_JSON(TodoList, todoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordResponseBodyDataAnalyticsReport& obj) { 
      DARABONBA_PTR_FROM_JSON(Emotion, emotion_);
      DARABONBA_PTR_FROM_JSON(ProblemSolving, problemSolving_);
      DARABONBA_PTR_FROM_JSON(Satisfaction, satisfaction_);
      DARABONBA_PTR_FROM_JSON(TodoList, todoList_);
    };
    GetCallDetailRecordResponseBodyDataAnalyticsReport() = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReport(const GetCallDetailRecordResponseBodyDataAnalyticsReport &) = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReport(GetCallDetailRecordResponseBodyDataAnalyticsReport &&) = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDetailRecordResponseBodyDataAnalyticsReport() = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReport& operator=(const GetCallDetailRecordResponseBodyDataAnalyticsReport &) = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReport& operator=(GetCallDetailRecordResponseBodyDataAnalyticsReport &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->emotion_ != nullptr
        && this->problemSolving_ != nullptr && this->satisfaction_ != nullptr && this->todoList_ != nullptr; };
    // emotion Field Functions 
    bool hasEmotion() const { return this->emotion_ != nullptr;};
    void deleteEmotion() { this->emotion_ = nullptr;};
    inline const Models::GetCallDetailRecordResponseBodyDataAnalyticsReportEmotion & emotion() const { DARABONBA_PTR_GET_CONST(emotion_, Models::GetCallDetailRecordResponseBodyDataAnalyticsReportEmotion) };
    inline Models::GetCallDetailRecordResponseBodyDataAnalyticsReportEmotion emotion() { DARABONBA_PTR_GET(emotion_, Models::GetCallDetailRecordResponseBodyDataAnalyticsReportEmotion) };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReport& setEmotion(const Models::GetCallDetailRecordResponseBodyDataAnalyticsReportEmotion & emotion) { DARABONBA_PTR_SET_VALUE(emotion_, emotion) };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReport& setEmotion(Models::GetCallDetailRecordResponseBodyDataAnalyticsReportEmotion && emotion) { DARABONBA_PTR_SET_RVALUE(emotion_, emotion) };


    // problemSolving Field Functions 
    bool hasProblemSolving() const { return this->problemSolving_ != nullptr;};
    void deleteProblemSolving() { this->problemSolving_ = nullptr;};
    inline const Models::GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving & problemSolving() const { DARABONBA_PTR_GET_CONST(problemSolving_, Models::GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving) };
    inline Models::GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving problemSolving() { DARABONBA_PTR_GET(problemSolving_, Models::GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving) };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReport& setProblemSolving(const Models::GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving & problemSolving) { DARABONBA_PTR_SET_VALUE(problemSolving_, problemSolving) };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReport& setProblemSolving(Models::GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving && problemSolving) { DARABONBA_PTR_SET_RVALUE(problemSolving_, problemSolving) };


    // satisfaction Field Functions 
    bool hasSatisfaction() const { return this->satisfaction_ != nullptr;};
    void deleteSatisfaction() { this->satisfaction_ = nullptr;};
    inline const Models::GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction & satisfaction() const { DARABONBA_PTR_GET_CONST(satisfaction_, Models::GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction) };
    inline Models::GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction satisfaction() { DARABONBA_PTR_GET(satisfaction_, Models::GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction) };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReport& setSatisfaction(const Models::GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction & satisfaction) { DARABONBA_PTR_SET_VALUE(satisfaction_, satisfaction) };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReport& setSatisfaction(Models::GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction && satisfaction) { DARABONBA_PTR_SET_RVALUE(satisfaction_, satisfaction) };


    // todoList Field Functions 
    bool hasTodoList() const { return this->todoList_ != nullptr;};
    void deleteTodoList() { this->todoList_ = nullptr;};
    inline const Models::GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList & todoList() const { DARABONBA_PTR_GET_CONST(todoList_, Models::GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList) };
    inline Models::GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList todoList() { DARABONBA_PTR_GET(todoList_, Models::GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList) };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReport& setTodoList(const Models::GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList & todoList) { DARABONBA_PTR_SET_VALUE(todoList_, todoList) };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReport& setTodoList(Models::GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList && todoList) { DARABONBA_PTR_SET_RVALUE(todoList_, todoList) };


  protected:
    std::shared_ptr<Models::GetCallDetailRecordResponseBodyDataAnalyticsReportEmotion> emotion_ = nullptr;
    std::shared_ptr<Models::GetCallDetailRecordResponseBodyDataAnalyticsReportProblemSolving> problemSolving_ = nullptr;
    std::shared_ptr<Models::GetCallDetailRecordResponseBodyDataAnalyticsReportSatisfaction> satisfaction_ = nullptr;
    std::shared_ptr<Models::GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList> todoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
