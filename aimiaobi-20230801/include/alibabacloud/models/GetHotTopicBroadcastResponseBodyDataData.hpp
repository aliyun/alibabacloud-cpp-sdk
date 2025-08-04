// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODYDATADATA_HPP_
#define ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODYDATADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHotTopicBroadcastResponseBodyDataDataImages.hpp>
#include <alibabacloud/models/GetHotTopicBroadcastResponseBodyDataDataNews.hpp>
#include <alibabacloud/models/GetHotTopicBroadcastResponseBodyDataDataSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetHotTopicBroadcastResponseBodyDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotTopicBroadcastResponseBodyDataData& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomHotValue, customHotValue_);
      DARABONBA_PTR_TO_JSON(CustomTextSummary, customTextSummary_);
      DARABONBA_PTR_TO_JSON(HotTopic, hotTopic_);
      DARABONBA_PTR_TO_JSON(HotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(HotValue, hotValue_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(InputToken, inputToken_);
      DARABONBA_PTR_TO_JSON(Locations, locations_);
      DARABONBA_PTR_TO_JSON(News, news_);
      DARABONBA_PTR_TO_JSON(OutputToken, outputToken_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TextSummary, textSummary_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotTopicBroadcastResponseBodyDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomHotValue, customHotValue_);
      DARABONBA_PTR_FROM_JSON(CustomTextSummary, customTextSummary_);
      DARABONBA_PTR_FROM_JSON(HotTopic, hotTopic_);
      DARABONBA_PTR_FROM_JSON(HotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(HotValue, hotValue_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(InputToken, inputToken_);
      DARABONBA_PTR_FROM_JSON(Locations, locations_);
      DARABONBA_PTR_FROM_JSON(News, news_);
      DARABONBA_PTR_FROM_JSON(OutputToken, outputToken_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TextSummary, textSummary_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetHotTopicBroadcastResponseBodyDataData() = default ;
    GetHotTopicBroadcastResponseBodyDataData(const GetHotTopicBroadcastResponseBodyDataData &) = default ;
    GetHotTopicBroadcastResponseBodyDataData(GetHotTopicBroadcastResponseBodyDataData &&) = default ;
    GetHotTopicBroadcastResponseBodyDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotTopicBroadcastResponseBodyDataData() = default ;
    GetHotTopicBroadcastResponseBodyDataData& operator=(const GetHotTopicBroadcastResponseBodyDataData &) = default ;
    GetHotTopicBroadcastResponseBodyDataData& operator=(GetHotTopicBroadcastResponseBodyDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->createTime_ != nullptr && this->customHotValue_ != nullptr && this->customTextSummary_ != nullptr && this->hotTopic_ != nullptr && this->hotTopicVersion_ != nullptr
        && this->hotValue_ != nullptr && this->id_ != nullptr && this->images_ != nullptr && this->inputToken_ != nullptr && this->locations_ != nullptr
        && this->news_ != nullptr && this->outputToken_ != nullptr && this->pubTime_ != nullptr && this->summary_ != nullptr && this->textSummary_ != nullptr
        && this->url_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetHotTopicBroadcastResponseBodyDataData& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetHotTopicBroadcastResponseBodyDataData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customHotValue Field Functions 
    bool hasCustomHotValue() const { return this->customHotValue_ != nullptr;};
    void deleteCustomHotValue() { this->customHotValue_ = nullptr;};
    inline double customHotValue() const { DARABONBA_PTR_GET_DEFAULT(customHotValue_, 0.0) };
    inline GetHotTopicBroadcastResponseBodyDataData& setCustomHotValue(double customHotValue) { DARABONBA_PTR_SET_VALUE(customHotValue_, customHotValue) };


    // customTextSummary Field Functions 
    bool hasCustomTextSummary() const { return this->customTextSummary_ != nullptr;};
    void deleteCustomTextSummary() { this->customTextSummary_ = nullptr;};
    inline string customTextSummary() const { DARABONBA_PTR_GET_DEFAULT(customTextSummary_, "") };
    inline GetHotTopicBroadcastResponseBodyDataData& setCustomTextSummary(string customTextSummary) { DARABONBA_PTR_SET_VALUE(customTextSummary_, customTextSummary) };


    // hotTopic Field Functions 
    bool hasHotTopic() const { return this->hotTopic_ != nullptr;};
    void deleteHotTopic() { this->hotTopic_ = nullptr;};
    inline string hotTopic() const { DARABONBA_PTR_GET_DEFAULT(hotTopic_, "") };
    inline GetHotTopicBroadcastResponseBodyDataData& setHotTopic(string hotTopic) { DARABONBA_PTR_SET_VALUE(hotTopic_, hotTopic) };


    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string hotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline GetHotTopicBroadcastResponseBodyDataData& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // hotValue Field Functions 
    bool hasHotValue() const { return this->hotValue_ != nullptr;};
    void deleteHotValue() { this->hotValue_ = nullptr;};
    inline double hotValue() const { DARABONBA_PTR_GET_DEFAULT(hotValue_, 0.0) };
    inline GetHotTopicBroadcastResponseBodyDataData& setHotValue(double hotValue) { DARABONBA_PTR_SET_VALUE(hotValue_, hotValue) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetHotTopicBroadcastResponseBodyDataData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<Models::GetHotTopicBroadcastResponseBodyDataDataImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<Models::GetHotTopicBroadcastResponseBodyDataDataImages>) };
    inline vector<Models::GetHotTopicBroadcastResponseBodyDataDataImages> images() { DARABONBA_PTR_GET(images_, vector<Models::GetHotTopicBroadcastResponseBodyDataDataImages>) };
    inline GetHotTopicBroadcastResponseBodyDataData& setImages(const vector<Models::GetHotTopicBroadcastResponseBodyDataDataImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline GetHotTopicBroadcastResponseBodyDataData& setImages(vector<Models::GetHotTopicBroadcastResponseBodyDataDataImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // inputToken Field Functions 
    bool hasInputToken() const { return this->inputToken_ != nullptr;};
    void deleteInputToken() { this->inputToken_ = nullptr;};
    inline int32_t inputToken() const { DARABONBA_PTR_GET_DEFAULT(inputToken_, 0) };
    inline GetHotTopicBroadcastResponseBodyDataData& setInputToken(int32_t inputToken) { DARABONBA_PTR_SET_VALUE(inputToken_, inputToken) };


    // locations Field Functions 
    bool hasLocations() const { return this->locations_ != nullptr;};
    void deleteLocations() { this->locations_ = nullptr;};
    inline const vector<string> & locations() const { DARABONBA_PTR_GET_CONST(locations_, vector<string>) };
    inline vector<string> locations() { DARABONBA_PTR_GET(locations_, vector<string>) };
    inline GetHotTopicBroadcastResponseBodyDataData& setLocations(const vector<string> & locations) { DARABONBA_PTR_SET_VALUE(locations_, locations) };
    inline GetHotTopicBroadcastResponseBodyDataData& setLocations(vector<string> && locations) { DARABONBA_PTR_SET_RVALUE(locations_, locations) };


    // news Field Functions 
    bool hasNews() const { return this->news_ != nullptr;};
    void deleteNews() { this->news_ = nullptr;};
    inline const vector<Models::GetHotTopicBroadcastResponseBodyDataDataNews> & news() const { DARABONBA_PTR_GET_CONST(news_, vector<Models::GetHotTopicBroadcastResponseBodyDataDataNews>) };
    inline vector<Models::GetHotTopicBroadcastResponseBodyDataDataNews> news() { DARABONBA_PTR_GET(news_, vector<Models::GetHotTopicBroadcastResponseBodyDataDataNews>) };
    inline GetHotTopicBroadcastResponseBodyDataData& setNews(const vector<Models::GetHotTopicBroadcastResponseBodyDataDataNews> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
    inline GetHotTopicBroadcastResponseBodyDataData& setNews(vector<Models::GetHotTopicBroadcastResponseBodyDataDataNews> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


    // outputToken Field Functions 
    bool hasOutputToken() const { return this->outputToken_ != nullptr;};
    void deleteOutputToken() { this->outputToken_ = nullptr;};
    inline int32_t outputToken() const { DARABONBA_PTR_GET_DEFAULT(outputToken_, 0) };
    inline GetHotTopicBroadcastResponseBodyDataData& setOutputToken(int32_t outputToken) { DARABONBA_PTR_SET_VALUE(outputToken_, outputToken) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline GetHotTopicBroadcastResponseBodyDataData& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const Models::GetHotTopicBroadcastResponseBodyDataDataSummary & summary() const { DARABONBA_PTR_GET_CONST(summary_, Models::GetHotTopicBroadcastResponseBodyDataDataSummary) };
    inline Models::GetHotTopicBroadcastResponseBodyDataDataSummary summary() { DARABONBA_PTR_GET(summary_, Models::GetHotTopicBroadcastResponseBodyDataDataSummary) };
    inline GetHotTopicBroadcastResponseBodyDataData& setSummary(const Models::GetHotTopicBroadcastResponseBodyDataDataSummary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline GetHotTopicBroadcastResponseBodyDataData& setSummary(Models::GetHotTopicBroadcastResponseBodyDataDataSummary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // textSummary Field Functions 
    bool hasTextSummary() const { return this->textSummary_ != nullptr;};
    void deleteTextSummary() { this->textSummary_ = nullptr;};
    inline string textSummary() const { DARABONBA_PTR_GET_DEFAULT(textSummary_, "") };
    inline GetHotTopicBroadcastResponseBodyDataData& setTextSummary(string textSummary) { DARABONBA_PTR_SET_VALUE(textSummary_, textSummary) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetHotTopicBroadcastResponseBodyDataData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<double> customHotValue_ = nullptr;
    std::shared_ptr<string> customTextSummary_ = nullptr;
    std::shared_ptr<string> hotTopic_ = nullptr;
    std::shared_ptr<string> hotTopicVersion_ = nullptr;
    std::shared_ptr<double> hotValue_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<vector<Models::GetHotTopicBroadcastResponseBodyDataDataImages>> images_ = nullptr;
    std::shared_ptr<int32_t> inputToken_ = nullptr;
    std::shared_ptr<vector<string>> locations_ = nullptr;
    std::shared_ptr<vector<Models::GetHotTopicBroadcastResponseBodyDataDataNews>> news_ = nullptr;
    std::shared_ptr<int32_t> outputToken_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<Models::GetHotTopicBroadcastResponseBodyDataDataSummary> summary_ = nullptr;
    std::shared_ptr<string> textSummary_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
