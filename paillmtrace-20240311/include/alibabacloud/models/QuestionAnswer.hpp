// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUESTIONANSWER_HPP_
#define ALIBABACLOUD_MODELS_QUESTIONANSWER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuestionAnswerAnswer.hpp>
#include <alibabacloud/models/QuestionAnswerGroundTruth.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class QuestionAnswer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuestionAnswer& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(GroundTruth, groundTruth_);
      DARABONBA_PTR_TO_JSON(Question, question_);
    };
    friend void from_json(const Darabonba::Json& j, QuestionAnswer& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(GroundTruth, groundTruth_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
    };
    QuestionAnswer() = default ;
    QuestionAnswer(const QuestionAnswer &) = default ;
    QuestionAnswer(QuestionAnswer &&) = default ;
    QuestionAnswer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuestionAnswer() = default ;
    QuestionAnswer& operator=(const QuestionAnswer &) = default ;
    QuestionAnswer& operator=(QuestionAnswer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->answer_ != nullptr
        && this->groundTruth_ != nullptr && this->question_ != nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline const QuestionAnswerAnswer & answer() const { DARABONBA_PTR_GET_CONST(answer_, QuestionAnswerAnswer) };
    inline QuestionAnswerAnswer answer() { DARABONBA_PTR_GET(answer_, QuestionAnswerAnswer) };
    inline QuestionAnswer& setAnswer(const QuestionAnswerAnswer & answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };
    inline QuestionAnswer& setAnswer(QuestionAnswerAnswer && answer) { DARABONBA_PTR_SET_RVALUE(answer_, answer) };


    // groundTruth Field Functions 
    bool hasGroundTruth() const { return this->groundTruth_ != nullptr;};
    void deleteGroundTruth() { this->groundTruth_ = nullptr;};
    inline const QuestionAnswerGroundTruth & groundTruth() const { DARABONBA_PTR_GET_CONST(groundTruth_, QuestionAnswerGroundTruth) };
    inline QuestionAnswerGroundTruth groundTruth() { DARABONBA_PTR_GET(groundTruth_, QuestionAnswerGroundTruth) };
    inline QuestionAnswer& setGroundTruth(const QuestionAnswerGroundTruth & groundTruth) { DARABONBA_PTR_SET_VALUE(groundTruth_, groundTruth) };
    inline QuestionAnswer& setGroundTruth(QuestionAnswerGroundTruth && groundTruth) { DARABONBA_PTR_SET_RVALUE(groundTruth_, groundTruth) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string question() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline QuestionAnswer& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


  protected:
    std::shared_ptr<QuestionAnswerAnswer> answer_ = nullptr;
    std::shared_ptr<QuestionAnswerGroundTruth> groundTruth_ = nullptr;
    std::shared_ptr<string> question_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
