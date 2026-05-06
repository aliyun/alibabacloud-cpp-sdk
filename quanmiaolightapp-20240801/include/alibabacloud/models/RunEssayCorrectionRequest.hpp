// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNESSAYCORRECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNESSAYCORRECTIONREQUEST_HPP_
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
  class RunEssayCorrectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEssayCorrectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(answer, answer_);
      DARABONBA_PTR_TO_JSON(dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(grade, grade_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(otherReviewPoints, otherReviewPoints_);
      DARABONBA_PTR_TO_JSON(question, question_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(totalScore, totalScore_);
    };
    friend void from_json(const Darabonba::Json& j, RunEssayCorrectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(answer, answer_);
      DARABONBA_PTR_FROM_JSON(dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(grade, grade_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(otherReviewPoints, otherReviewPoints_);
      DARABONBA_PTR_FROM_JSON(question, question_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(totalScore, totalScore_);
    };
    RunEssayCorrectionRequest() = default ;
    RunEssayCorrectionRequest(const RunEssayCorrectionRequest &) = default ;
    RunEssayCorrectionRequest(RunEssayCorrectionRequest &&) = default ;
    RunEssayCorrectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEssayCorrectionRequest() = default ;
    RunEssayCorrectionRequest& operator=(const RunEssayCorrectionRequest &) = default ;
    RunEssayCorrectionRequest& operator=(RunEssayCorrectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Dimensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
        DARABONBA_PTR_TO_JSON(maxScore, maxScore_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(rubric, rubric_);
      };
      friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
        DARABONBA_PTR_FROM_JSON(maxScore, maxScore_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(rubric, rubric_);
      };
      Dimensions() = default ;
      Dimensions(const Dimensions &) = default ;
      Dimensions(Dimensions &&) = default ;
      Dimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Dimensions() = default ;
      Dimensions& operator=(const Dimensions &) = default ;
      Dimensions& operator=(Dimensions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maxScore_ == nullptr
        && this->name_ == nullptr && this->rubric_ == nullptr; };
      // maxScore Field Functions 
      bool hasMaxScore() const { return this->maxScore_ != nullptr;};
      void deleteMaxScore() { this->maxScore_ = nullptr;};
      inline int32_t getMaxScore() const { DARABONBA_PTR_GET_DEFAULT(maxScore_, 0) };
      inline Dimensions& setMaxScore(int32_t maxScore) { DARABONBA_PTR_SET_VALUE(maxScore_, maxScore) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Dimensions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // rubric Field Functions 
      bool hasRubric() const { return this->rubric_ != nullptr;};
      void deleteRubric() { this->rubric_ = nullptr;};
      inline string getRubric() const { DARABONBA_PTR_GET_DEFAULT(rubric_, "") };
      inline Dimensions& setRubric(string rubric) { DARABONBA_PTR_SET_VALUE(rubric_, rubric) };


    protected:
      shared_ptr<int32_t> maxScore_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> rubric_ {};
    };

    virtual bool empty() const override { return this->answer_ == nullptr
        && this->dimensions_ == nullptr && this->grade_ == nullptr && this->modelId_ == nullptr && this->otherReviewPoints_ == nullptr && this->question_ == nullptr
        && this->subject_ == nullptr && this->totalScore_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline RunEssayCorrectionRequest& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<RunEssayCorrectionRequest::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<RunEssayCorrectionRequest::Dimensions>) };
    inline vector<RunEssayCorrectionRequest::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<RunEssayCorrectionRequest::Dimensions>) };
    inline RunEssayCorrectionRequest& setDimensions(const vector<RunEssayCorrectionRequest::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline RunEssayCorrectionRequest& setDimensions(vector<RunEssayCorrectionRequest::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // grade Field Functions 
    bool hasGrade() const { return this->grade_ != nullptr;};
    void deleteGrade() { this->grade_ = nullptr;};
    inline string getGrade() const { DARABONBA_PTR_GET_DEFAULT(grade_, "") };
    inline RunEssayCorrectionRequest& setGrade(string grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunEssayCorrectionRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // otherReviewPoints Field Functions 
    bool hasOtherReviewPoints() const { return this->otherReviewPoints_ != nullptr;};
    void deleteOtherReviewPoints() { this->otherReviewPoints_ = nullptr;};
    inline string getOtherReviewPoints() const { DARABONBA_PTR_GET_DEFAULT(otherReviewPoints_, "") };
    inline RunEssayCorrectionRequest& setOtherReviewPoints(string otherReviewPoints) { DARABONBA_PTR_SET_VALUE(otherReviewPoints_, otherReviewPoints) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline RunEssayCorrectionRequest& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline RunEssayCorrectionRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // totalScore Field Functions 
    bool hasTotalScore() const { return this->totalScore_ != nullptr;};
    void deleteTotalScore() { this->totalScore_ = nullptr;};
    inline int32_t getTotalScore() const { DARABONBA_PTR_GET_DEFAULT(totalScore_, 0) };
    inline RunEssayCorrectionRequest& setTotalScore(int32_t totalScore) { DARABONBA_PTR_SET_VALUE(totalScore_, totalScore) };


  protected:
    shared_ptr<string> answer_ {};
    shared_ptr<vector<RunEssayCorrectionRequest::Dimensions>> dimensions_ {};
    shared_ptr<string> grade_ {};
    shared_ptr<string> modelId_ {};
    shared_ptr<string> otherReviewPoints_ {};
    shared_ptr<string> question_ {};
    shared_ptr<string> subject_ {};
    shared_ptr<int32_t> totalScore_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
