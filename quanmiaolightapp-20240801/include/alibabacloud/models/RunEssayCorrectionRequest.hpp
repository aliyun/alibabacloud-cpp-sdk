// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNESSAYCORRECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNESSAYCORRECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(grade, grade_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(otherReviewPoints, otherReviewPoints_);
      DARABONBA_PTR_TO_JSON(question, question_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(totalScore, totalScore_);
    };
    friend void from_json(const Darabonba::Json& j, RunEssayCorrectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(answer, answer_);
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
    virtual bool empty() const override { return this->answer_ == nullptr
        && return this->grade_ == nullptr && return this->modelId_ == nullptr && return this->otherReviewPoints_ == nullptr && return this->question_ == nullptr && return this->subject_ == nullptr
        && return this->totalScore_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string answer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline RunEssayCorrectionRequest& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // grade Field Functions 
    bool hasGrade() const { return this->grade_ != nullptr;};
    void deleteGrade() { this->grade_ = nullptr;};
    inline string grade() const { DARABONBA_PTR_GET_DEFAULT(grade_, "") };
    inline RunEssayCorrectionRequest& setGrade(string grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunEssayCorrectionRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // otherReviewPoints Field Functions 
    bool hasOtherReviewPoints() const { return this->otherReviewPoints_ != nullptr;};
    void deleteOtherReviewPoints() { this->otherReviewPoints_ = nullptr;};
    inline string otherReviewPoints() const { DARABONBA_PTR_GET_DEFAULT(otherReviewPoints_, "") };
    inline RunEssayCorrectionRequest& setOtherReviewPoints(string otherReviewPoints) { DARABONBA_PTR_SET_VALUE(otherReviewPoints_, otherReviewPoints) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string question() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline RunEssayCorrectionRequest& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline RunEssayCorrectionRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // totalScore Field Functions 
    bool hasTotalScore() const { return this->totalScore_ != nullptr;};
    void deleteTotalScore() { this->totalScore_ = nullptr;};
    inline int32_t totalScore() const { DARABONBA_PTR_GET_DEFAULT(totalScore_, 0) };
    inline RunEssayCorrectionRequest& setTotalScore(int32_t totalScore) { DARABONBA_PTR_SET_VALUE(totalScore_, totalScore) };


  protected:
    std::shared_ptr<string> answer_ = nullptr;
    std::shared_ptr<string> grade_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> otherReviewPoints_ = nullptr;
    std::shared_ptr<string> question_ = nullptr;
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<int32_t> totalScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
