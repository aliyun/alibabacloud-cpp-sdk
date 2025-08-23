// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTTOPICSUMMARIESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTTOPICSUMMARIESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHotTopicSummariesResponseBodyDataNews.hpp>
#include <alibabacloud/models/ListHotTopicSummariesResponseBodyDataSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class ListHotTopicSummariesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotTopicSummariesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(hotTopic, hotTopic_);
      DARABONBA_PTR_TO_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(hotValue, hotValue_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(news, news_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(textSummary, textSummary_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotTopicSummariesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(hotTopic, hotTopic_);
      DARABONBA_PTR_FROM_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(hotValue, hotValue_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(news, news_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(textSummary, textSummary_);
    };
    ListHotTopicSummariesResponseBodyData() = default ;
    ListHotTopicSummariesResponseBodyData(const ListHotTopicSummariesResponseBodyData &) = default ;
    ListHotTopicSummariesResponseBodyData(ListHotTopicSummariesResponseBodyData &&) = default ;
    ListHotTopicSummariesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotTopicSummariesResponseBodyData() = default ;
    ListHotTopicSummariesResponseBodyData& operator=(const ListHotTopicSummariesResponseBodyData &) = default ;
    ListHotTopicSummariesResponseBodyData& operator=(ListHotTopicSummariesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->hotTopic_ != nullptr && this->hotTopicVersion_ != nullptr && this->hotValue_ != nullptr && this->id_ != nullptr && this->news_ != nullptr
        && this->summary_ != nullptr && this->textSummary_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListHotTopicSummariesResponseBodyData& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // hotTopic Field Functions 
    bool hasHotTopic() const { return this->hotTopic_ != nullptr;};
    void deleteHotTopic() { this->hotTopic_ = nullptr;};
    inline string hotTopic() const { DARABONBA_PTR_GET_DEFAULT(hotTopic_, "") };
    inline ListHotTopicSummariesResponseBodyData& setHotTopic(string hotTopic) { DARABONBA_PTR_SET_VALUE(hotTopic_, hotTopic) };


    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string hotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline ListHotTopicSummariesResponseBodyData& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // hotValue Field Functions 
    bool hasHotValue() const { return this->hotValue_ != nullptr;};
    void deleteHotValue() { this->hotValue_ = nullptr;};
    inline double hotValue() const { DARABONBA_PTR_GET_DEFAULT(hotValue_, 0.0) };
    inline ListHotTopicSummariesResponseBodyData& setHotValue(double hotValue) { DARABONBA_PTR_SET_VALUE(hotValue_, hotValue) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListHotTopicSummariesResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // news Field Functions 
    bool hasNews() const { return this->news_ != nullptr;};
    void deleteNews() { this->news_ = nullptr;};
    inline const vector<Models::ListHotTopicSummariesResponseBodyDataNews> & news() const { DARABONBA_PTR_GET_CONST(news_, vector<Models::ListHotTopicSummariesResponseBodyDataNews>) };
    inline vector<Models::ListHotTopicSummariesResponseBodyDataNews> news() { DARABONBA_PTR_GET(news_, vector<Models::ListHotTopicSummariesResponseBodyDataNews>) };
    inline ListHotTopicSummariesResponseBodyData& setNews(const vector<Models::ListHotTopicSummariesResponseBodyDataNews> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
    inline ListHotTopicSummariesResponseBodyData& setNews(vector<Models::ListHotTopicSummariesResponseBodyDataNews> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const Models::ListHotTopicSummariesResponseBodyDataSummary & summary() const { DARABONBA_PTR_GET_CONST(summary_, Models::ListHotTopicSummariesResponseBodyDataSummary) };
    inline Models::ListHotTopicSummariesResponseBodyDataSummary summary() { DARABONBA_PTR_GET(summary_, Models::ListHotTopicSummariesResponseBodyDataSummary) };
    inline ListHotTopicSummariesResponseBodyData& setSummary(const Models::ListHotTopicSummariesResponseBodyDataSummary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline ListHotTopicSummariesResponseBodyData& setSummary(Models::ListHotTopicSummariesResponseBodyDataSummary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // textSummary Field Functions 
    bool hasTextSummary() const { return this->textSummary_ != nullptr;};
    void deleteTextSummary() { this->textSummary_ = nullptr;};
    inline string textSummary() const { DARABONBA_PTR_GET_DEFAULT(textSummary_, "") };
    inline ListHotTopicSummariesResponseBodyData& setTextSummary(string textSummary) { DARABONBA_PTR_SET_VALUE(textSummary_, textSummary) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> hotTopic_ = nullptr;
    std::shared_ptr<string> hotTopicVersion_ = nullptr;
    std::shared_ptr<double> hotValue_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<vector<Models::ListHotTopicSummariesResponseBodyDataNews>> news_ = nullptr;
    std::shared_ptr<Models::ListHotTopicSummariesResponseBodyDataSummary> summary_ = nullptr;
    std::shared_ptr<string> textSummary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
