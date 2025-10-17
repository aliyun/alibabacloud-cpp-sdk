// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunHotTopicChatResponseBodyPayloadOutputArticles.hpp>
#include <alibabacloud/models/RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries.hpp>
#include <alibabacloud/models/RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicChatResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicChatResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(articles, articles_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(hotTopicSummaries, hotTopicSummaries_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(multimodalMedias, multimodalMedias_);
      DARABONBA_PTR_TO_JSON(recommendQueries, recommendQueries_);
      DARABONBA_PTR_TO_JSON(searchQuery, searchQuery_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicChatResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(articles, articles_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(hotTopicSummaries, hotTopicSummaries_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(multimodalMedias, multimodalMedias_);
      DARABONBA_PTR_FROM_JSON(recommendQueries, recommendQueries_);
      DARABONBA_PTR_FROM_JSON(searchQuery, searchQuery_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    RunHotTopicChatResponseBodyPayloadOutput() = default ;
    RunHotTopicChatResponseBodyPayloadOutput(const RunHotTopicChatResponseBodyPayloadOutput &) = default ;
    RunHotTopicChatResponseBodyPayloadOutput(RunHotTopicChatResponseBodyPayloadOutput &&) = default ;
    RunHotTopicChatResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicChatResponseBodyPayloadOutput() = default ;
    RunHotTopicChatResponseBodyPayloadOutput& operator=(const RunHotTopicChatResponseBodyPayloadOutput &) = default ;
    RunHotTopicChatResponseBodyPayloadOutput& operator=(RunHotTopicChatResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articles_ == nullptr
        && return this->category_ == nullptr && return this->hotTopicSummaries_ == nullptr && return this->keyword_ == nullptr && return this->location_ == nullptr && return this->multimodalMedias_ == nullptr
        && return this->recommendQueries_ == nullptr && return this->searchQuery_ == nullptr && return this->text_ == nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<Models::RunHotTopicChatResponseBodyPayloadOutputArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Models::RunHotTopicChatResponseBodyPayloadOutputArticles>) };
    inline vector<Models::RunHotTopicChatResponseBodyPayloadOutputArticles> articles() { DARABONBA_PTR_GET(articles_, vector<Models::RunHotTopicChatResponseBodyPayloadOutputArticles>) };
    inline RunHotTopicChatResponseBodyPayloadOutput& setArticles(const vector<Models::RunHotTopicChatResponseBodyPayloadOutputArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunHotTopicChatResponseBodyPayloadOutput& setArticles(vector<Models::RunHotTopicChatResponseBodyPayloadOutputArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutput& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // hotTopicSummaries Field Functions 
    bool hasHotTopicSummaries() const { return this->hotTopicSummaries_ != nullptr;};
    void deleteHotTopicSummaries() { this->hotTopicSummaries_ = nullptr;};
    inline const vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries> & hotTopicSummaries() const { DARABONBA_PTR_GET_CONST(hotTopicSummaries_, vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries>) };
    inline vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries> hotTopicSummaries() { DARABONBA_PTR_GET(hotTopicSummaries_, vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries>) };
    inline RunHotTopicChatResponseBodyPayloadOutput& setHotTopicSummaries(const vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries> & hotTopicSummaries) { DARABONBA_PTR_SET_VALUE(hotTopicSummaries_, hotTopicSummaries) };
    inline RunHotTopicChatResponseBodyPayloadOutput& setHotTopicSummaries(vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries> && hotTopicSummaries) { DARABONBA_PTR_SET_RVALUE(hotTopicSummaries_, hotTopicSummaries) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutput& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutput& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // multimodalMedias Field Functions 
    bool hasMultimodalMedias() const { return this->multimodalMedias_ != nullptr;};
    void deleteMultimodalMedias() { this->multimodalMedias_ = nullptr;};
    inline const vector<Models::RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias> & multimodalMedias() const { DARABONBA_PTR_GET_CONST(multimodalMedias_, vector<Models::RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias>) };
    inline vector<Models::RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias> multimodalMedias() { DARABONBA_PTR_GET(multimodalMedias_, vector<Models::RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias>) };
    inline RunHotTopicChatResponseBodyPayloadOutput& setMultimodalMedias(const vector<Models::RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias> & multimodalMedias) { DARABONBA_PTR_SET_VALUE(multimodalMedias_, multimodalMedias) };
    inline RunHotTopicChatResponseBodyPayloadOutput& setMultimodalMedias(vector<Models::RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias> && multimodalMedias) { DARABONBA_PTR_SET_RVALUE(multimodalMedias_, multimodalMedias) };


    // recommendQueries Field Functions 
    bool hasRecommendQueries() const { return this->recommendQueries_ != nullptr;};
    void deleteRecommendQueries() { this->recommendQueries_ = nullptr;};
    inline const vector<string> & recommendQueries() const { DARABONBA_PTR_GET_CONST(recommendQueries_, vector<string>) };
    inline vector<string> recommendQueries() { DARABONBA_PTR_GET(recommendQueries_, vector<string>) };
    inline RunHotTopicChatResponseBodyPayloadOutput& setRecommendQueries(const vector<string> & recommendQueries) { DARABONBA_PTR_SET_VALUE(recommendQueries_, recommendQueries) };
    inline RunHotTopicChatResponseBodyPayloadOutput& setRecommendQueries(vector<string> && recommendQueries) { DARABONBA_PTR_SET_RVALUE(recommendQueries_, recommendQueries) };


    // searchQuery Field Functions 
    bool hasSearchQuery() const { return this->searchQuery_ != nullptr;};
    void deleteSearchQuery() { this->searchQuery_ = nullptr;};
    inline string searchQuery() const { DARABONBA_PTR_GET_DEFAULT(searchQuery_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutput& setSearchQuery(string searchQuery) { DARABONBA_PTR_SET_VALUE(searchQuery_, searchQuery) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<vector<Models::RunHotTopicChatResponseBodyPayloadOutputArticles>> articles_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries>> hotTopicSummaries_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<vector<Models::RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias>> multimodalMedias_ = nullptr;
    std::shared_ptr<vector<string>> recommendQueries_ = nullptr;
    std::shared_ptr<string> searchQuery_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
