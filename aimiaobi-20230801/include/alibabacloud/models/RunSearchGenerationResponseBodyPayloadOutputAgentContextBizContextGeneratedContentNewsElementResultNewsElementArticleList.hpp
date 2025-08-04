// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTNEWSELEMENTRESULTNEWSELEMENTARTICLELIST_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTAGENTCONTEXTBIZCONTEXTGENERATEDCONTENTNEWSELEMENTRESULTNEWSELEMENTARTICLELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListArticle.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList& obj) { 
      DARABONBA_PTR_TO_JSON(Article, article_);
      DARABONBA_PTR_TO_JSON(NewsElementList, newsElementList_);
      DARABONBA_PTR_TO_JSON(TextGenerate, textGenerate_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Article, article_);
      DARABONBA_PTR_FROM_JSON(NewsElementList, newsElementList_);
      DARABONBA_PTR_FROM_JSON(TextGenerate, textGenerate_);
    };
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList() = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList& operator=(const RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList& operator=(RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->article_ != nullptr
        && this->newsElementList_ != nullptr && this->textGenerate_ != nullptr; };
    // article Field Functions 
    bool hasArticle() const { return this->article_ != nullptr;};
    void deleteArticle() { this->article_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListArticle & article() const { DARABONBA_PTR_GET_CONST(article_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListArticle) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListArticle article() { DARABONBA_PTR_GET(article_, Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListArticle) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList& setArticle(const Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListArticle & article) { DARABONBA_PTR_SET_VALUE(article_, article) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList& setArticle(Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListArticle && article) { DARABONBA_PTR_SET_RVALUE(article_, article) };


    // newsElementList Field Functions 
    bool hasNewsElementList() const { return this->newsElementList_ != nullptr;};
    void deleteNewsElementList() { this->newsElementList_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementList> & newsElementList() const { DARABONBA_PTR_GET_CONST(newsElementList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementList>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementList> newsElementList() { DARABONBA_PTR_GET(newsElementList_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementList>) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList& setNewsElementList(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementList> & newsElementList) { DARABONBA_PTR_SET_VALUE(newsElementList_, newsElementList) };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList& setNewsElementList(vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementList> && newsElementList) { DARABONBA_PTR_SET_RVALUE(newsElementList_, newsElementList) };


    // textGenerate Field Functions 
    bool hasTextGenerate() const { return this->textGenerate_ != nullptr;};
    void deleteTextGenerate() { this->textGenerate_ = nullptr;};
    inline string textGenerate() const { DARABONBA_PTR_GET_DEFAULT(textGenerate_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleList& setTextGenerate(string textGenerate) { DARABONBA_PTR_SET_VALUE(textGenerate_, textGenerate) };


  protected:
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListArticle> article_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputAgentContextBizContextGeneratedContentNewsElementResultNewsElementArticleListNewsElementList>> newsElementList_ = nullptr;
    std::shared_ptr<string> textGenerate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
