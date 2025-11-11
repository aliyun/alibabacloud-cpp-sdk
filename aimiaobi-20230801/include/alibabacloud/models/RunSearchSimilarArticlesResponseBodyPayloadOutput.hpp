// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchSimilarArticlesResponseBodyPayloadOutputArticles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchSimilarArticlesResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchSimilarArticlesResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchSimilarArticlesResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    RunSearchSimilarArticlesResponseBodyPayloadOutput() = default ;
    RunSearchSimilarArticlesResponseBodyPayloadOutput(const RunSearchSimilarArticlesResponseBodyPayloadOutput &) = default ;
    RunSearchSimilarArticlesResponseBodyPayloadOutput(RunSearchSimilarArticlesResponseBodyPayloadOutput &&) = default ;
    RunSearchSimilarArticlesResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchSimilarArticlesResponseBodyPayloadOutput() = default ;
    RunSearchSimilarArticlesResponseBodyPayloadOutput& operator=(const RunSearchSimilarArticlesResponseBodyPayloadOutput &) = default ;
    RunSearchSimilarArticlesResponseBodyPayloadOutput& operator=(RunSearchSimilarArticlesResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articles_ == nullptr
        && return this->text_ == nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<Models::RunSearchSimilarArticlesResponseBodyPayloadOutputArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Models::RunSearchSimilarArticlesResponseBodyPayloadOutputArticles>) };
    inline vector<Models::RunSearchSimilarArticlesResponseBodyPayloadOutputArticles> articles() { DARABONBA_PTR_GET(articles_, vector<Models::RunSearchSimilarArticlesResponseBodyPayloadOutputArticles>) };
    inline RunSearchSimilarArticlesResponseBodyPayloadOutput& setArticles(const vector<Models::RunSearchSimilarArticlesResponseBodyPayloadOutputArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunSearchSimilarArticlesResponseBodyPayloadOutput& setArticles(vector<Models::RunSearchSimilarArticlesResponseBodyPayloadOutputArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunSearchSimilarArticlesResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<vector<Models::RunSearchSimilarArticlesResponseBodyPayloadOutputArticles>> articles_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
