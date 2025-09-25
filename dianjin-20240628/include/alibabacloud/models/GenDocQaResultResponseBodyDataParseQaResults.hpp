// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENDOCQARESULTRESPONSEBODYDATAPARSEQARESULTS_HPP_
#define ALIBABACLOUD_MODELS_GENDOCQARESULTRESPONSEBODYDATAPARSEQARESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GenDocQaResultResponseBodyDataParseQaResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenDocQaResultResponseBodyDataParseQaResults& obj) { 
      DARABONBA_PTR_TO_JSON(answer, answer_);
      DARABONBA_PTR_TO_JSON(question, question_);
    };
    friend void from_json(const Darabonba::Json& j, GenDocQaResultResponseBodyDataParseQaResults& obj) { 
      DARABONBA_PTR_FROM_JSON(answer, answer_);
      DARABONBA_PTR_FROM_JSON(question, question_);
    };
    GenDocQaResultResponseBodyDataParseQaResults() = default ;
    GenDocQaResultResponseBodyDataParseQaResults(const GenDocQaResultResponseBodyDataParseQaResults &) = default ;
    GenDocQaResultResponseBodyDataParseQaResults(GenDocQaResultResponseBodyDataParseQaResults &&) = default ;
    GenDocQaResultResponseBodyDataParseQaResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenDocQaResultResponseBodyDataParseQaResults() = default ;
    GenDocQaResultResponseBodyDataParseQaResults& operator=(const GenDocQaResultResponseBodyDataParseQaResults &) = default ;
    GenDocQaResultResponseBodyDataParseQaResults& operator=(GenDocQaResultResponseBodyDataParseQaResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->answer_ != nullptr
        && this->question_ != nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string answer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline GenDocQaResultResponseBodyDataParseQaResults& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string question() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline GenDocQaResultResponseBodyDataParseQaResults& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


  protected:
    std::shared_ptr<string> answer_ = nullptr;
    std::shared_ptr<string> question_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
