// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUESTIONANSWERGROUNDTRUTH_HPP_
#define ALIBABACLOUD_MODELS_QUESTIONANSWERGROUNDTRUTH_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class QuestionAnswerGroundTruth : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuestionAnswerGroundTruth& obj) { 
      DARABONBA_PTR_TO_JSON(Contexts, contexts_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, QuestionAnswerGroundTruth& obj) { 
      DARABONBA_PTR_FROM_JSON(Contexts, contexts_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    QuestionAnswerGroundTruth() = default ;
    QuestionAnswerGroundTruth(const QuestionAnswerGroundTruth &) = default ;
    QuestionAnswerGroundTruth(QuestionAnswerGroundTruth &&) = default ;
    QuestionAnswerGroundTruth(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuestionAnswerGroundTruth() = default ;
    QuestionAnswerGroundTruth& operator=(const QuestionAnswerGroundTruth &) = default ;
    QuestionAnswerGroundTruth& operator=(QuestionAnswerGroundTruth &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contexts_ != nullptr
        && this->text_ != nullptr; };
    // contexts Field Functions 
    bool hasContexts() const { return this->contexts_ != nullptr;};
    void deleteContexts() { this->contexts_ = nullptr;};
    inline const vector<string> & contexts() const { DARABONBA_PTR_GET_CONST(contexts_, vector<string>) };
    inline vector<string> contexts() { DARABONBA_PTR_GET(contexts_, vector<string>) };
    inline QuestionAnswerGroundTruth& setContexts(const vector<string> & contexts) { DARABONBA_PTR_SET_VALUE(contexts_, contexts) };
    inline QuestionAnswerGroundTruth& setContexts(vector<string> && contexts) { DARABONBA_PTR_SET_RVALUE(contexts_, contexts) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline QuestionAnswerGroundTruth& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<vector<string>> contexts_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
