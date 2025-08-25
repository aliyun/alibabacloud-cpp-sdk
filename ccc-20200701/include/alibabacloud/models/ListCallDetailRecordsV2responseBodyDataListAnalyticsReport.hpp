// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSV2RESPONSEBODYDATALISTANALYTICSREPORT_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSV2RESPONSEBODYDATALISTANALYTICSREPORT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion.hpp>
#include <alibabacloud/models/ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportProblemSolving.hpp>
#include <alibabacloud/models/ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction.hpp>
#include <alibabacloud/models/ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportTodoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport& obj) { 
      DARABONBA_PTR_TO_JSON(Emotion, emotion_);
      DARABONBA_PTR_TO_JSON(ProblemSolving, problemSolving_);
      DARABONBA_PTR_TO_JSON(Satisfaction, satisfaction_);
      DARABONBA_PTR_TO_JSON(TodoList, todoList_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport& obj) { 
      DARABONBA_PTR_FROM_JSON(Emotion, emotion_);
      DARABONBA_PTR_FROM_JSON(ProblemSolving, problemSolving_);
      DARABONBA_PTR_FROM_JSON(Satisfaction, satisfaction_);
      DARABONBA_PTR_FROM_JSON(TodoList, todoList_);
    };
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport() = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport(const ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport &) = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport(ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport &&) = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport() = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport& operator=(const ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport &) = default ;
    ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport& operator=(ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->emotion_ != nullptr
        && this->problemSolving_ != nullptr && this->satisfaction_ != nullptr && this->todoList_ != nullptr; };
    // emotion Field Functions 
    bool hasEmotion() const { return this->emotion_ != nullptr;};
    void deleteEmotion() { this->emotion_ = nullptr;};
    inline const Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion & emotion() const { DARABONBA_PTR_GET_CONST(emotion_, Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion) };
    inline Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion emotion() { DARABONBA_PTR_GET(emotion_, Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion) };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport& setEmotion(const Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion & emotion) { DARABONBA_PTR_SET_VALUE(emotion_, emotion) };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport& setEmotion(Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion && emotion) { DARABONBA_PTR_SET_RVALUE(emotion_, emotion) };


    // problemSolving Field Functions 
    bool hasProblemSolving() const { return this->problemSolving_ != nullptr;};
    void deleteProblemSolving() { this->problemSolving_ = nullptr;};
    inline const Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportProblemSolving & problemSolving() const { DARABONBA_PTR_GET_CONST(problemSolving_, Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportProblemSolving) };
    inline Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportProblemSolving problemSolving() { DARABONBA_PTR_GET(problemSolving_, Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportProblemSolving) };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport& setProblemSolving(const Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportProblemSolving & problemSolving) { DARABONBA_PTR_SET_VALUE(problemSolving_, problemSolving) };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport& setProblemSolving(Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportProblemSolving && problemSolving) { DARABONBA_PTR_SET_RVALUE(problemSolving_, problemSolving) };


    // satisfaction Field Functions 
    bool hasSatisfaction() const { return this->satisfaction_ != nullptr;};
    void deleteSatisfaction() { this->satisfaction_ = nullptr;};
    inline const Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction & satisfaction() const { DARABONBA_PTR_GET_CONST(satisfaction_, Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction) };
    inline Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction satisfaction() { DARABONBA_PTR_GET(satisfaction_, Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction) };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport& setSatisfaction(const Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction & satisfaction) { DARABONBA_PTR_SET_VALUE(satisfaction_, satisfaction) };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport& setSatisfaction(Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction && satisfaction) { DARABONBA_PTR_SET_RVALUE(satisfaction_, satisfaction) };


    // todoList Field Functions 
    bool hasTodoList() const { return this->todoList_ != nullptr;};
    void deleteTodoList() { this->todoList_ = nullptr;};
    inline const Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportTodoList & todoList() const { DARABONBA_PTR_GET_CONST(todoList_, Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportTodoList) };
    inline Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportTodoList todoList() { DARABONBA_PTR_GET(todoList_, Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportTodoList) };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport& setTodoList(const Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportTodoList & todoList) { DARABONBA_PTR_SET_VALUE(todoList_, todoList) };
    inline ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReport& setTodoList(Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportTodoList && todoList) { DARABONBA_PTR_SET_RVALUE(todoList_, todoList) };


  protected:
    std::shared_ptr<Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportEmotion> emotion_ = nullptr;
    std::shared_ptr<Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportProblemSolving> problemSolving_ = nullptr;
    std::shared_ptr<Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportSatisfaction> satisfaction_ = nullptr;
    std::shared_ptr<Models::ListCallDetailRecordsV2ResponseBodyDataListAnalyticsReportTodoList> todoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
