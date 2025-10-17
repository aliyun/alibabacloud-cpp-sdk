// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITESSAYCORRECTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITESSAYCORRECTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitEssayCorrectionTaskRequestTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class SubmitEssayCorrectionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEssayCorrectionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(grade, grade_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(otherReviewPoints, otherReviewPoints_);
      DARABONBA_PTR_TO_JSON(question, question_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(tasks, tasks_);
      DARABONBA_PTR_TO_JSON(totalScore, totalScore_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEssayCorrectionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(grade, grade_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(otherReviewPoints, otherReviewPoints_);
      DARABONBA_PTR_FROM_JSON(question, question_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(totalScore, totalScore_);
    };
    SubmitEssayCorrectionTaskRequest() = default ;
    SubmitEssayCorrectionTaskRequest(const SubmitEssayCorrectionTaskRequest &) = default ;
    SubmitEssayCorrectionTaskRequest(SubmitEssayCorrectionTaskRequest &&) = default ;
    SubmitEssayCorrectionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitEssayCorrectionTaskRequest() = default ;
    SubmitEssayCorrectionTaskRequest& operator=(const SubmitEssayCorrectionTaskRequest &) = default ;
    SubmitEssayCorrectionTaskRequest& operator=(SubmitEssayCorrectionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->grade_ == nullptr
        && return this->modelId_ == nullptr && return this->otherReviewPoints_ == nullptr && return this->question_ == nullptr && return this->subject_ == nullptr && return this->tasks_ == nullptr
        && return this->totalScore_ == nullptr; };
    // grade Field Functions 
    bool hasGrade() const { return this->grade_ != nullptr;};
    void deleteGrade() { this->grade_ = nullptr;};
    inline string grade() const { DARABONBA_PTR_GET_DEFAULT(grade_, "") };
    inline SubmitEssayCorrectionTaskRequest& setGrade(string grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitEssayCorrectionTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // otherReviewPoints Field Functions 
    bool hasOtherReviewPoints() const { return this->otherReviewPoints_ != nullptr;};
    void deleteOtherReviewPoints() { this->otherReviewPoints_ = nullptr;};
    inline string otherReviewPoints() const { DARABONBA_PTR_GET_DEFAULT(otherReviewPoints_, "") };
    inline SubmitEssayCorrectionTaskRequest& setOtherReviewPoints(string otherReviewPoints) { DARABONBA_PTR_SET_VALUE(otherReviewPoints_, otherReviewPoints) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string question() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline SubmitEssayCorrectionTaskRequest& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline SubmitEssayCorrectionTaskRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<SubmitEssayCorrectionTaskRequestTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<SubmitEssayCorrectionTaskRequestTasks>) };
    inline vector<SubmitEssayCorrectionTaskRequestTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<SubmitEssayCorrectionTaskRequestTasks>) };
    inline SubmitEssayCorrectionTaskRequest& setTasks(const vector<SubmitEssayCorrectionTaskRequestTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline SubmitEssayCorrectionTaskRequest& setTasks(vector<SubmitEssayCorrectionTaskRequestTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalScore Field Functions 
    bool hasTotalScore() const { return this->totalScore_ != nullptr;};
    void deleteTotalScore() { this->totalScore_ = nullptr;};
    inline int32_t totalScore() const { DARABONBA_PTR_GET_DEFAULT(totalScore_, 0) };
    inline SubmitEssayCorrectionTaskRequest& setTotalScore(int32_t totalScore) { DARABONBA_PTR_SET_VALUE(totalScore_, totalScore) };


  protected:
    std::shared_ptr<string> grade_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> otherReviewPoints_ = nullptr;
    std::shared_ptr<string> question_ = nullptr;
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<vector<SubmitEssayCorrectionTaskRequestTasks>> tasks_ = nullptr;
    std::shared_ptr<int32_t> totalScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
