// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODYPAYLOADOUTPUTHOTTOPICSUMMARIES_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODYPAYLOADOUTPUTHOTTOPICSUMMARIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages.hpp>
#include <alibabacloud/models/RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& obj) { 
      DARABONBA_PTR_TO_JSON(customHotValue, customHotValue_);
      DARABONBA_PTR_TO_JSON(customTextSummary, customTextSummary_);
      DARABONBA_PTR_TO_JSON(hotTopic, hotTopic_);
      DARABONBA_PTR_TO_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(hotValue, hotValue_);
      DARABONBA_PTR_TO_JSON(images, images_);
      DARABONBA_PTR_TO_JSON(news, news_);
      DARABONBA_PTR_TO_JSON(pubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(textSummary, textSummary_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& obj) { 
      DARABONBA_PTR_FROM_JSON(customHotValue, customHotValue_);
      DARABONBA_PTR_FROM_JSON(customTextSummary, customTextSummary_);
      DARABONBA_PTR_FROM_JSON(hotTopic, hotTopic_);
      DARABONBA_PTR_FROM_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(hotValue, hotValue_);
      DARABONBA_PTR_FROM_JSON(images, images_);
      DARABONBA_PTR_FROM_JSON(news, news_);
      DARABONBA_PTR_FROM_JSON(pubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(textSummary, textSummary_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries() = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries(const RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries &) = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries(RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries &&) = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries() = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& operator=(const RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries &) = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& operator=(RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customHotValue_ == nullptr
        && return this->customTextSummary_ == nullptr && return this->hotTopic_ == nullptr && return this->hotTopicVersion_ == nullptr && return this->hotValue_ == nullptr && return this->images_ == nullptr
        && return this->news_ == nullptr && return this->pubTime_ == nullptr && return this->textSummary_ == nullptr && return this->url_ == nullptr; };
    // customHotValue Field Functions 
    bool hasCustomHotValue() const { return this->customHotValue_ != nullptr;};
    void deleteCustomHotValue() { this->customHotValue_ = nullptr;};
    inline double customHotValue() const { DARABONBA_PTR_GET_DEFAULT(customHotValue_, 0.0) };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& setCustomHotValue(double customHotValue) { DARABONBA_PTR_SET_VALUE(customHotValue_, customHotValue) };


    // customTextSummary Field Functions 
    bool hasCustomTextSummary() const { return this->customTextSummary_ != nullptr;};
    void deleteCustomTextSummary() { this->customTextSummary_ = nullptr;};
    inline string customTextSummary() const { DARABONBA_PTR_GET_DEFAULT(customTextSummary_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& setCustomTextSummary(string customTextSummary) { DARABONBA_PTR_SET_VALUE(customTextSummary_, customTextSummary) };


    // hotTopic Field Functions 
    bool hasHotTopic() const { return this->hotTopic_ != nullptr;};
    void deleteHotTopic() { this->hotTopic_ = nullptr;};
    inline string hotTopic() const { DARABONBA_PTR_GET_DEFAULT(hotTopic_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& setHotTopic(string hotTopic) { DARABONBA_PTR_SET_VALUE(hotTopic_, hotTopic) };


    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string hotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // hotValue Field Functions 
    bool hasHotValue() const { return this->hotValue_ != nullptr;};
    void deleteHotValue() { this->hotValue_ = nullptr;};
    inline double hotValue() const { DARABONBA_PTR_GET_DEFAULT(hotValue_, 0.0) };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& setHotValue(double hotValue) { DARABONBA_PTR_SET_VALUE(hotValue_, hotValue) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages>) };
    inline vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages> images() { DARABONBA_PTR_GET(images_, vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages>) };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& setImages(const vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& setImages(vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // news Field Functions 
    bool hasNews() const { return this->news_ != nullptr;};
    void deleteNews() { this->news_ = nullptr;};
    inline const vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews> & news() const { DARABONBA_PTR_GET_CONST(news_, vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews>) };
    inline vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews> news() { DARABONBA_PTR_GET(news_, vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews>) };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& setNews(const vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& setNews(vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // textSummary Field Functions 
    bool hasTextSummary() const { return this->textSummary_ != nullptr;};
    void deleteTextSummary() { this->textSummary_ = nullptr;};
    inline string textSummary() const { DARABONBA_PTR_GET_DEFAULT(textSummary_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& setTextSummary(string textSummary) { DARABONBA_PTR_SET_VALUE(textSummary_, textSummary) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummaries& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<double> customHotValue_ = nullptr;
    std::shared_ptr<string> customTextSummary_ = nullptr;
    std::shared_ptr<string> hotTopic_ = nullptr;
    std::shared_ptr<string> hotTopicVersion_ = nullptr;
    std::shared_ptr<double> hotValue_ = nullptr;
    std::shared_ptr<vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesImages>> images_ = nullptr;
    std::shared_ptr<vector<Models::RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews>> news_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> textSummary_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
