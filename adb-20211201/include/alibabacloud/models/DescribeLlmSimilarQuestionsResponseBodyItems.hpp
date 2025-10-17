// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELLMSIMILARQUESTIONSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELLMSIMILARQUESTIONSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeLLMSimilarQuestionsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLLMSimilarQuestionsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLLMSimilarQuestionsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeLLMSimilarQuestionsResponseBodyItems() = default ;
    DescribeLLMSimilarQuestionsResponseBodyItems(const DescribeLLMSimilarQuestionsResponseBodyItems &) = default ;
    DescribeLLMSimilarQuestionsResponseBodyItems(DescribeLLMSimilarQuestionsResponseBodyItems &&) = default ;
    DescribeLLMSimilarQuestionsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLLMSimilarQuestionsResponseBodyItems() = default ;
    DescribeLLMSimilarQuestionsResponseBodyItems& operator=(const DescribeLLMSimilarQuestionsResponseBodyItems &) = default ;
    DescribeLLMSimilarQuestionsResponseBodyItems& operator=(DescribeLLMSimilarQuestionsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && return this->id_ == nullptr && return this->score_ == nullptr && return this->source_ == nullptr && return this->summary_ == nullptr && return this->title_ == nullptr
        && return this->url_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string answer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline DescribeLLMSimilarQuestionsResponseBodyItems& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeLLMSimilarQuestionsResponseBodyItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline DescribeLLMSimilarQuestionsResponseBodyItems& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeLLMSimilarQuestionsResponseBodyItems& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline DescribeLLMSimilarQuestionsResponseBodyItems& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeLLMSimilarQuestionsResponseBodyItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeLLMSimilarQuestionsResponseBodyItems& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The answer to the similar question.
    std::shared_ptr<string> answer_ = nullptr;
    // The ID of the similar question.
    std::shared_ptr<string> id_ = nullptr;
    // The similarity of the similar question.
    std::shared_ptr<double> score_ = nullptr;
    // The source of the similar question.
    std::shared_ptr<string> source_ = nullptr;
    // The summary of the similar question.
    std::shared_ptr<string> summary_ = nullptr;
    // The content of the similar question.
    std::shared_ptr<string> title_ = nullptr;
    // The URL of the answer to the similar question.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
