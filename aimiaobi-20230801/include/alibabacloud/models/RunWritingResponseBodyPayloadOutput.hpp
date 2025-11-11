// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunWritingResponseBodyPayloadOutputArticles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(MiniDoc, miniDoc_);
      DARABONBA_PTR_TO_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(MiniDoc, miniDoc_);
      DARABONBA_PTR_FROM_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    RunWritingResponseBodyPayloadOutput() = default ;
    RunWritingResponseBodyPayloadOutput(const RunWritingResponseBodyPayloadOutput &) = default ;
    RunWritingResponseBodyPayloadOutput(RunWritingResponseBodyPayloadOutput &&) = default ;
    RunWritingResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingResponseBodyPayloadOutput() = default ;
    RunWritingResponseBodyPayloadOutput& operator=(const RunWritingResponseBodyPayloadOutput &) = default ;
    RunWritingResponseBodyPayloadOutput& operator=(RunWritingResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articles_ == nullptr
        && return this->miniDoc_ == nullptr && return this->searchQuery_ == nullptr && return this->text_ == nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<Models::RunWritingResponseBodyPayloadOutputArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Models::RunWritingResponseBodyPayloadOutputArticles>) };
    inline vector<Models::RunWritingResponseBodyPayloadOutputArticles> articles() { DARABONBA_PTR_GET(articles_, vector<Models::RunWritingResponseBodyPayloadOutputArticles>) };
    inline RunWritingResponseBodyPayloadOutput& setArticles(const vector<Models::RunWritingResponseBodyPayloadOutputArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunWritingResponseBodyPayloadOutput& setArticles(vector<Models::RunWritingResponseBodyPayloadOutputArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // miniDoc Field Functions 
    bool hasMiniDoc() const { return this->miniDoc_ != nullptr;};
    void deleteMiniDoc() { this->miniDoc_ = nullptr;};
    inline const vector<string> & miniDoc() const { DARABONBA_PTR_GET_CONST(miniDoc_, vector<string>) };
    inline vector<string> miniDoc() { DARABONBA_PTR_GET(miniDoc_, vector<string>) };
    inline RunWritingResponseBodyPayloadOutput& setMiniDoc(const vector<string> & miniDoc) { DARABONBA_PTR_SET_VALUE(miniDoc_, miniDoc) };
    inline RunWritingResponseBodyPayloadOutput& setMiniDoc(vector<string> && miniDoc) { DARABONBA_PTR_SET_RVALUE(miniDoc_, miniDoc) };


    // searchQuery Field Functions 
    bool hasSearchQuery() const { return this->searchQuery_ != nullptr;};
    void deleteSearchQuery() { this->searchQuery_ = nullptr;};
    inline string searchQuery() const { DARABONBA_PTR_GET_DEFAULT(searchQuery_, "") };
    inline RunWritingResponseBodyPayloadOutput& setSearchQuery(string searchQuery) { DARABONBA_PTR_SET_VALUE(searchQuery_, searchQuery) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunWritingResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<vector<Models::RunWritingResponseBodyPayloadOutputArticles>> articles_ = nullptr;
    std::shared_ptr<vector<string>> miniDoc_ = nullptr;
    std::shared_ptr<string> searchQuery_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
