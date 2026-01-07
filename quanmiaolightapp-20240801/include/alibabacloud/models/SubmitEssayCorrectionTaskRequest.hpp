// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITESSAYCORRECTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITESSAYCORRECTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(answer, answer_);
        DARABONBA_PTR_TO_JSON(customId, customId_);
        DARABONBA_PTR_TO_JSON(grade, grade_);
        DARABONBA_PTR_TO_JSON(otherReviewPoints, otherReviewPoints_);
        DARABONBA_PTR_TO_JSON(question, question_);
        DARABONBA_PTR_TO_JSON(subject, subject_);
        DARABONBA_PTR_TO_JSON(totalScore, totalScore_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(answer, answer_);
        DARABONBA_PTR_FROM_JSON(customId, customId_);
        DARABONBA_PTR_FROM_JSON(grade, grade_);
        DARABONBA_PTR_FROM_JSON(otherReviewPoints, otherReviewPoints_);
        DARABONBA_PTR_FROM_JSON(question, question_);
        DARABONBA_PTR_FROM_JSON(subject, subject_);
        DARABONBA_PTR_FROM_JSON(totalScore, totalScore_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->answer_ == nullptr
        && this->customId_ == nullptr && this->grade_ == nullptr && this->otherReviewPoints_ == nullptr && this->question_ == nullptr && this->subject_ == nullptr
        && this->totalScore_ == nullptr; };
      // answer Field Functions 
      bool hasAnswer() const { return this->answer_ != nullptr;};
      void deleteAnswer() { this->answer_ = nullptr;};
      inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
      inline Tasks& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


      // customId Field Functions 
      bool hasCustomId() const { return this->customId_ != nullptr;};
      void deleteCustomId() { this->customId_ = nullptr;};
      inline string getCustomId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
      inline Tasks& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


      // grade Field Functions 
      bool hasGrade() const { return this->grade_ != nullptr;};
      void deleteGrade() { this->grade_ = nullptr;};
      inline string getGrade() const { DARABONBA_PTR_GET_DEFAULT(grade_, "") };
      inline Tasks& setGrade(string grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


      // otherReviewPoints Field Functions 
      bool hasOtherReviewPoints() const { return this->otherReviewPoints_ != nullptr;};
      void deleteOtherReviewPoints() { this->otherReviewPoints_ = nullptr;};
      inline string getOtherReviewPoints() const { DARABONBA_PTR_GET_DEFAULT(otherReviewPoints_, "") };
      inline Tasks& setOtherReviewPoints(string otherReviewPoints) { DARABONBA_PTR_SET_VALUE(otherReviewPoints_, otherReviewPoints) };


      // question Field Functions 
      bool hasQuestion() const { return this->question_ != nullptr;};
      void deleteQuestion() { this->question_ = nullptr;};
      inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
      inline Tasks& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


      // subject Field Functions 
      bool hasSubject() const { return this->subject_ != nullptr;};
      void deleteSubject() { this->subject_ = nullptr;};
      inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
      inline Tasks& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


      // totalScore Field Functions 
      bool hasTotalScore() const { return this->totalScore_ != nullptr;};
      void deleteTotalScore() { this->totalScore_ = nullptr;};
      inline int32_t getTotalScore() const { DARABONBA_PTR_GET_DEFAULT(totalScore_, 0) };
      inline Tasks& setTotalScore(int32_t totalScore) { DARABONBA_PTR_SET_VALUE(totalScore_, totalScore) };


    protected:
      shared_ptr<string> answer_ {};
      shared_ptr<string> customId_ {};
      shared_ptr<string> grade_ {};
      shared_ptr<string> otherReviewPoints_ {};
      shared_ptr<string> question_ {};
      shared_ptr<string> subject_ {};
      shared_ptr<int32_t> totalScore_ {};
    };

    virtual bool empty() const override { return this->grade_ == nullptr
        && this->modelId_ == nullptr && this->otherReviewPoints_ == nullptr && this->question_ == nullptr && this->subject_ == nullptr && this->tasks_ == nullptr
        && this->totalScore_ == nullptr; };
    // grade Field Functions 
    bool hasGrade() const { return this->grade_ != nullptr;};
    void deleteGrade() { this->grade_ = nullptr;};
    inline string getGrade() const { DARABONBA_PTR_GET_DEFAULT(grade_, "") };
    inline SubmitEssayCorrectionTaskRequest& setGrade(string grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitEssayCorrectionTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // otherReviewPoints Field Functions 
    bool hasOtherReviewPoints() const { return this->otherReviewPoints_ != nullptr;};
    void deleteOtherReviewPoints() { this->otherReviewPoints_ = nullptr;};
    inline string getOtherReviewPoints() const { DARABONBA_PTR_GET_DEFAULT(otherReviewPoints_, "") };
    inline SubmitEssayCorrectionTaskRequest& setOtherReviewPoints(string otherReviewPoints) { DARABONBA_PTR_SET_VALUE(otherReviewPoints_, otherReviewPoints) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline SubmitEssayCorrectionTaskRequest& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline SubmitEssayCorrectionTaskRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<SubmitEssayCorrectionTaskRequest::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<SubmitEssayCorrectionTaskRequest::Tasks>) };
    inline vector<SubmitEssayCorrectionTaskRequest::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<SubmitEssayCorrectionTaskRequest::Tasks>) };
    inline SubmitEssayCorrectionTaskRequest& setTasks(const vector<SubmitEssayCorrectionTaskRequest::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline SubmitEssayCorrectionTaskRequest& setTasks(vector<SubmitEssayCorrectionTaskRequest::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalScore Field Functions 
    bool hasTotalScore() const { return this->totalScore_ != nullptr;};
    void deleteTotalScore() { this->totalScore_ = nullptr;};
    inline int32_t getTotalScore() const { DARABONBA_PTR_GET_DEFAULT(totalScore_, 0) };
    inline SubmitEssayCorrectionTaskRequest& setTotalScore(int32_t totalScore) { DARABONBA_PTR_SET_VALUE(totalScore_, totalScore) };


  protected:
    shared_ptr<string> grade_ {};
    shared_ptr<string> modelId_ {};
    shared_ptr<string> otherReviewPoints_ {};
    shared_ptr<string> question_ {};
    shared_ptr<string> subject_ {};
    shared_ptr<vector<SubmitEssayCorrectionTaskRequest::Tasks>> tasks_ {};
    shared_ptr<int32_t> totalScore_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
