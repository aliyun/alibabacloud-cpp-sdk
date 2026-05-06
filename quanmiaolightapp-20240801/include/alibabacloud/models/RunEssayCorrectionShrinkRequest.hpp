// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNESSAYCORRECTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNESSAYCORRECTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunEssayCorrectionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEssayCorrectionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(answer, answer_);
      DARABONBA_PTR_TO_JSON(dimensions, dimensionsShrink_);
      DARABONBA_PTR_TO_JSON(grade, grade_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(otherReviewPoints, otherReviewPoints_);
      DARABONBA_PTR_TO_JSON(question, question_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(totalScore, totalScore_);
    };
    friend void from_json(const Darabonba::Json& j, RunEssayCorrectionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(answer, answer_);
      DARABONBA_PTR_FROM_JSON(dimensions, dimensionsShrink_);
      DARABONBA_PTR_FROM_JSON(grade, grade_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(otherReviewPoints, otherReviewPoints_);
      DARABONBA_PTR_FROM_JSON(question, question_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(totalScore, totalScore_);
    };
    RunEssayCorrectionShrinkRequest() = default ;
    RunEssayCorrectionShrinkRequest(const RunEssayCorrectionShrinkRequest &) = default ;
    RunEssayCorrectionShrinkRequest(RunEssayCorrectionShrinkRequest &&) = default ;
    RunEssayCorrectionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEssayCorrectionShrinkRequest() = default ;
    RunEssayCorrectionShrinkRequest& operator=(const RunEssayCorrectionShrinkRequest &) = default ;
    RunEssayCorrectionShrinkRequest& operator=(RunEssayCorrectionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && this->dimensionsShrink_ == nullptr && this->grade_ == nullptr && this->modelId_ == nullptr && this->otherReviewPoints_ == nullptr && this->question_ == nullptr
        && this->subject_ == nullptr && this->totalScore_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline RunEssayCorrectionShrinkRequest& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // dimensionsShrink Field Functions 
    bool hasDimensionsShrink() const { return this->dimensionsShrink_ != nullptr;};
    void deleteDimensionsShrink() { this->dimensionsShrink_ = nullptr;};
    inline string getDimensionsShrink() const { DARABONBA_PTR_GET_DEFAULT(dimensionsShrink_, "") };
    inline RunEssayCorrectionShrinkRequest& setDimensionsShrink(string dimensionsShrink) { DARABONBA_PTR_SET_VALUE(dimensionsShrink_, dimensionsShrink) };


    // grade Field Functions 
    bool hasGrade() const { return this->grade_ != nullptr;};
    void deleteGrade() { this->grade_ = nullptr;};
    inline string getGrade() const { DARABONBA_PTR_GET_DEFAULT(grade_, "") };
    inline RunEssayCorrectionShrinkRequest& setGrade(string grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunEssayCorrectionShrinkRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // otherReviewPoints Field Functions 
    bool hasOtherReviewPoints() const { return this->otherReviewPoints_ != nullptr;};
    void deleteOtherReviewPoints() { this->otherReviewPoints_ = nullptr;};
    inline string getOtherReviewPoints() const { DARABONBA_PTR_GET_DEFAULT(otherReviewPoints_, "") };
    inline RunEssayCorrectionShrinkRequest& setOtherReviewPoints(string otherReviewPoints) { DARABONBA_PTR_SET_VALUE(otherReviewPoints_, otherReviewPoints) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline RunEssayCorrectionShrinkRequest& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline RunEssayCorrectionShrinkRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // totalScore Field Functions 
    bool hasTotalScore() const { return this->totalScore_ != nullptr;};
    void deleteTotalScore() { this->totalScore_ = nullptr;};
    inline int32_t getTotalScore() const { DARABONBA_PTR_GET_DEFAULT(totalScore_, 0) };
    inline RunEssayCorrectionShrinkRequest& setTotalScore(int32_t totalScore) { DARABONBA_PTR_SET_VALUE(totalScore_, totalScore) };


  protected:
    shared_ptr<string> answer_ {};
    shared_ptr<string> dimensionsShrink_ {};
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
