// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODYPAYLOADOUTPUTARTICLES_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODYPAYLOADOUTPUTARTICLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicChatResponseBodyPayloadOutputArticles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicChatResponseBodyPayloadOutputArticles& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(pubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(score, score_);
      DARABONBA_PTR_TO_JSON(searchSourceName, searchSourceName_);
      DARABONBA_PTR_TO_JSON(select, select_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicChatResponseBodyPayloadOutputArticles& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(pubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(score, score_);
      DARABONBA_PTR_FROM_JSON(searchSourceName, searchSourceName_);
      DARABONBA_PTR_FROM_JSON(select, select_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    RunHotTopicChatResponseBodyPayloadOutputArticles() = default ;
    RunHotTopicChatResponseBodyPayloadOutputArticles(const RunHotTopicChatResponseBodyPayloadOutputArticles &) = default ;
    RunHotTopicChatResponseBodyPayloadOutputArticles(RunHotTopicChatResponseBodyPayloadOutputArticles &&) = default ;
    RunHotTopicChatResponseBodyPayloadOutputArticles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicChatResponseBodyPayloadOutputArticles() = default ;
    RunHotTopicChatResponseBodyPayloadOutputArticles& operator=(const RunHotTopicChatResponseBodyPayloadOutputArticles &) = default ;
    RunHotTopicChatResponseBodyPayloadOutputArticles& operator=(RunHotTopicChatResponseBodyPayloadOutputArticles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->pubTime_ != nullptr && this->score_ != nullptr && this->searchSourceName_ != nullptr && this->select_ != nullptr && this->summary_ != nullptr
        && this->title_ != nullptr && this->url_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputArticles& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputArticles& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline RunHotTopicChatResponseBodyPayloadOutputArticles& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // searchSourceName Field Functions 
    bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
    void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
    inline string searchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputArticles& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


    // select Field Functions 
    bool hasSelect() const { return this->select_ != nullptr;};
    void deleteSelect() { this->select_ = nullptr;};
    inline bool select() const { DARABONBA_PTR_GET_DEFAULT(select_, false) };
    inline RunHotTopicChatResponseBodyPayloadOutputArticles& setSelect(bool select) { DARABONBA_PTR_SET_VALUE(select_, select) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputArticles& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputArticles& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputArticles& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<double> score_ = nullptr;
    std::shared_ptr<string> searchSourceName_ = nullptr;
    std::shared_ptr<bool> select_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
