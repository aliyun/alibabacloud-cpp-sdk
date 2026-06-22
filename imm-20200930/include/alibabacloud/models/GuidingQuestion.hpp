// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GUIDINGQUESTION_HPP_
#define ALIBABACLOUD_MODELS_GUIDINGQUESTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GuidingQuestion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GuidingQuestion& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(Question, question_);
    };
    friend void from_json(const Darabonba::Json& j, GuidingQuestion& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
    };
    GuidingQuestion() = default ;
    GuidingQuestion(const GuidingQuestion &) = default ;
    GuidingQuestion(GuidingQuestion &&) = default ;
    GuidingQuestion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GuidingQuestion() = default ;
    GuidingQuestion& operator=(const GuidingQuestion &) = default ;
    GuidingQuestion& operator=(GuidingQuestion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && this->question_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline GuidingQuestion& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline GuidingQuestion& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


  protected:
    // The answer to the question.
    shared_ptr<string> answer_ {};
    // The guiding question.
    shared_ptr<string> question_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
