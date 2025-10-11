// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGV2RESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGV2RESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunWritingV2ResponseBodyPayloadOutputArticles.hpp>
#include <alibabacloud/models/GenerateTraceability.hpp>
#include <alibabacloud/models/WritingOutline.hpp>
#include <alibabacloud/models/OutlineSearchResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingV2ResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingV2ResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(GenerateTraceability, generateTraceability_);
      DARABONBA_PTR_TO_JSON(MiniDoc, miniDoc_);
      DARABONBA_PTR_TO_JSON(Outlines, outlines_);
      DARABONBA_PTR_TO_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingV2ResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(GenerateTraceability, generateTraceability_);
      DARABONBA_PTR_FROM_JSON(MiniDoc, miniDoc_);
      DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
      DARABONBA_PTR_FROM_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    RunWritingV2ResponseBodyPayloadOutput() = default ;
    RunWritingV2ResponseBodyPayloadOutput(const RunWritingV2ResponseBodyPayloadOutput &) = default ;
    RunWritingV2ResponseBodyPayloadOutput(RunWritingV2ResponseBodyPayloadOutput &&) = default ;
    RunWritingV2ResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingV2ResponseBodyPayloadOutput() = default ;
    RunWritingV2ResponseBodyPayloadOutput& operator=(const RunWritingV2ResponseBodyPayloadOutput &) = default ;
    RunWritingV2ResponseBodyPayloadOutput& operator=(RunWritingV2ResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->articles_ != nullptr
        && this->generateTraceability_ != nullptr && this->miniDoc_ != nullptr && this->outlines_ != nullptr && this->searchQuery_ != nullptr && this->searchResult_ != nullptr
        && this->text_ != nullptr && this->title_ != nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<Models::RunWritingV2ResponseBodyPayloadOutputArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Models::RunWritingV2ResponseBodyPayloadOutputArticles>) };
    inline vector<Models::RunWritingV2ResponseBodyPayloadOutputArticles> articles() { DARABONBA_PTR_GET(articles_, vector<Models::RunWritingV2ResponseBodyPayloadOutputArticles>) };
    inline RunWritingV2ResponseBodyPayloadOutput& setArticles(const vector<Models::RunWritingV2ResponseBodyPayloadOutputArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunWritingV2ResponseBodyPayloadOutput& setArticles(vector<Models::RunWritingV2ResponseBodyPayloadOutputArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // generateTraceability Field Functions 
    bool hasGenerateTraceability() const { return this->generateTraceability_ != nullptr;};
    void deleteGenerateTraceability() { this->generateTraceability_ = nullptr;};
    inline const Models::GenerateTraceability & generateTraceability() const { DARABONBA_PTR_GET_CONST(generateTraceability_, Models::GenerateTraceability) };
    inline Models::GenerateTraceability generateTraceability() { DARABONBA_PTR_GET(generateTraceability_, Models::GenerateTraceability) };
    inline RunWritingV2ResponseBodyPayloadOutput& setGenerateTraceability(const Models::GenerateTraceability & generateTraceability) { DARABONBA_PTR_SET_VALUE(generateTraceability_, generateTraceability) };
    inline RunWritingV2ResponseBodyPayloadOutput& setGenerateTraceability(Models::GenerateTraceability && generateTraceability) { DARABONBA_PTR_SET_RVALUE(generateTraceability_, generateTraceability) };


    // miniDoc Field Functions 
    bool hasMiniDoc() const { return this->miniDoc_ != nullptr;};
    void deleteMiniDoc() { this->miniDoc_ = nullptr;};
    inline const vector<string> & miniDoc() const { DARABONBA_PTR_GET_CONST(miniDoc_, vector<string>) };
    inline vector<string> miniDoc() { DARABONBA_PTR_GET(miniDoc_, vector<string>) };
    inline RunWritingV2ResponseBodyPayloadOutput& setMiniDoc(const vector<string> & miniDoc) { DARABONBA_PTR_SET_VALUE(miniDoc_, miniDoc) };
    inline RunWritingV2ResponseBodyPayloadOutput& setMiniDoc(vector<string> && miniDoc) { DARABONBA_PTR_SET_RVALUE(miniDoc_, miniDoc) };


    // outlines Field Functions 
    bool hasOutlines() const { return this->outlines_ != nullptr;};
    void deleteOutlines() { this->outlines_ = nullptr;};
    inline const vector<Models::WritingOutline> & outlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<Models::WritingOutline>) };
    inline vector<Models::WritingOutline> outlines() { DARABONBA_PTR_GET(outlines_, vector<Models::WritingOutline>) };
    inline RunWritingV2ResponseBodyPayloadOutput& setOutlines(const vector<Models::WritingOutline> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
    inline RunWritingV2ResponseBodyPayloadOutput& setOutlines(vector<Models::WritingOutline> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


    // searchQuery Field Functions 
    bool hasSearchQuery() const { return this->searchQuery_ != nullptr;};
    void deleteSearchQuery() { this->searchQuery_ = nullptr;};
    inline string searchQuery() const { DARABONBA_PTR_GET_DEFAULT(searchQuery_, "") };
    inline RunWritingV2ResponseBodyPayloadOutput& setSearchQuery(string searchQuery) { DARABONBA_PTR_SET_VALUE(searchQuery_, searchQuery) };


    // searchResult Field Functions 
    bool hasSearchResult() const { return this->searchResult_ != nullptr;};
    void deleteSearchResult() { this->searchResult_ = nullptr;};
    inline const Models::OutlineSearchResult & searchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, Models::OutlineSearchResult) };
    inline Models::OutlineSearchResult searchResult() { DARABONBA_PTR_GET(searchResult_, Models::OutlineSearchResult) };
    inline RunWritingV2ResponseBodyPayloadOutput& setSearchResult(const Models::OutlineSearchResult & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
    inline RunWritingV2ResponseBodyPayloadOutput& setSearchResult(Models::OutlineSearchResult && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunWritingV2ResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RunWritingV2ResponseBodyPayloadOutput& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<Models::RunWritingV2ResponseBodyPayloadOutputArticles>> articles_ = nullptr;
    std::shared_ptr<Models::GenerateTraceability> generateTraceability_ = nullptr;
    std::shared_ptr<vector<string>> miniDoc_ = nullptr;
    std::shared_ptr<vector<Models::WritingOutline>> outlines_ = nullptr;
    std::shared_ptr<string> searchQuery_ = nullptr;
    std::shared_ptr<Models::OutlineSearchResult> searchResult_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
