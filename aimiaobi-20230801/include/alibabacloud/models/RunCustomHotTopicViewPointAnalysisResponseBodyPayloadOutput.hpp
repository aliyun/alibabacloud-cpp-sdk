// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICVIEWPOINTANALYSISRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICVIEWPOINTANALYSISRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutputArticles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(AskUser, askUser_);
      DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_TO_JSON(Attitude, attitude_);
      DARABONBA_PTR_TO_JSON(CustomViewPointId, customViewPointId_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
    };
    friend void from_json(const Darabonba::Json& j, RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(AskUser, askUser_);
      DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
      DARABONBA_PTR_FROM_JSON(CustomViewPointId, customViewPointId_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
    };
    RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput() = default ;
    RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput(const RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput &) = default ;
    RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput(RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput &&) = default ;
    RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput() = default ;
    RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput& operator=(const RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput &) = default ;
    RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput& operator=(RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articles_ == nullptr
        && return this->askUser_ == nullptr && return this->asyncTaskId_ == nullptr && return this->attitude_ == nullptr && return this->customViewPointId_ == nullptr && return this->text_ == nullptr
        && return this->topicId_ == nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutputArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutputArticles>) };
    inline vector<Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutputArticles> articles() { DARABONBA_PTR_GET(articles_, vector<Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutputArticles>) };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput& setArticles(const vector<Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutputArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput& setArticles(vector<Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutputArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // askUser Field Functions 
    bool hasAskUser() const { return this->askUser_ != nullptr;};
    void deleteAskUser() { this->askUser_ = nullptr;};
    inline const vector<string> & askUser() const { DARABONBA_PTR_GET_CONST(askUser_, vector<string>) };
    inline vector<string> askUser() { DARABONBA_PTR_GET(askUser_, vector<string>) };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput& setAskUser(const vector<string> & askUser) { DARABONBA_PTR_SET_VALUE(askUser_, askUser) };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput& setAskUser(vector<string> && askUser) { DARABONBA_PTR_SET_RVALUE(askUser_, askUser) };


    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline string asyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


    // attitude Field Functions 
    bool hasAttitude() const { return this->attitude_ != nullptr;};
    void deleteAttitude() { this->attitude_ = nullptr;};
    inline string attitude() const { DARABONBA_PTR_GET_DEFAULT(attitude_, "") };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


    // customViewPointId Field Functions 
    bool hasCustomViewPointId() const { return this->customViewPointId_ != nullptr;};
    void deleteCustomViewPointId() { this->customViewPointId_ = nullptr;};
    inline string customViewPointId() const { DARABONBA_PTR_GET_DEFAULT(customViewPointId_, "") };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput& setCustomViewPointId(string customViewPointId) { DARABONBA_PTR_SET_VALUE(customViewPointId_, customViewPointId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline string topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, "") };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput& setTopicId(string topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


  protected:
    std::shared_ptr<vector<Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutputArticles>> articles_ = nullptr;
    std::shared_ptr<vector<string>> askUser_ = nullptr;
    std::shared_ptr<string> asyncTaskId_ = nullptr;
    std::shared_ptr<string> attitude_ = nullptr;
    std::shared_ptr<string> customViewPointId_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> topicId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
