// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICANALYSISRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICANALYSISRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunCustomHotTopicAnalysisResponseBodyPayloadOutputArticles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunCustomHotTopicAnalysisResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCustomHotTopicAnalysisResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(AskUser, askUser_);
      DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_TO_JSON(Attitude, attitude_);
      DARABONBA_PTR_TO_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
    };
    friend void from_json(const Darabonba::Json& j, RunCustomHotTopicAnalysisResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(AskUser, askUser_);
      DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
      DARABONBA_PTR_FROM_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
    };
    RunCustomHotTopicAnalysisResponseBodyPayloadOutput() = default ;
    RunCustomHotTopicAnalysisResponseBodyPayloadOutput(const RunCustomHotTopicAnalysisResponseBodyPayloadOutput &) = default ;
    RunCustomHotTopicAnalysisResponseBodyPayloadOutput(RunCustomHotTopicAnalysisResponseBodyPayloadOutput &&) = default ;
    RunCustomHotTopicAnalysisResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCustomHotTopicAnalysisResponseBodyPayloadOutput() = default ;
    RunCustomHotTopicAnalysisResponseBodyPayloadOutput& operator=(const RunCustomHotTopicAnalysisResponseBodyPayloadOutput &) = default ;
    RunCustomHotTopicAnalysisResponseBodyPayloadOutput& operator=(RunCustomHotTopicAnalysisResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->articles_ != nullptr
        && this->askUser_ != nullptr && this->asyncTaskId_ != nullptr && this->attitude_ != nullptr && this->searchQuery_ != nullptr && this->text_ != nullptr
        && this->topicId_ != nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<Models::RunCustomHotTopicAnalysisResponseBodyPayloadOutputArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Models::RunCustomHotTopicAnalysisResponseBodyPayloadOutputArticles>) };
    inline vector<Models::RunCustomHotTopicAnalysisResponseBodyPayloadOutputArticles> articles() { DARABONBA_PTR_GET(articles_, vector<Models::RunCustomHotTopicAnalysisResponseBodyPayloadOutputArticles>) };
    inline RunCustomHotTopicAnalysisResponseBodyPayloadOutput& setArticles(const vector<Models::RunCustomHotTopicAnalysisResponseBodyPayloadOutputArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunCustomHotTopicAnalysisResponseBodyPayloadOutput& setArticles(vector<Models::RunCustomHotTopicAnalysisResponseBodyPayloadOutputArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // askUser Field Functions 
    bool hasAskUser() const { return this->askUser_ != nullptr;};
    void deleteAskUser() { this->askUser_ = nullptr;};
    inline const vector<string> & askUser() const { DARABONBA_PTR_GET_CONST(askUser_, vector<string>) };
    inline vector<string> askUser() { DARABONBA_PTR_GET(askUser_, vector<string>) };
    inline RunCustomHotTopicAnalysisResponseBodyPayloadOutput& setAskUser(const vector<string> & askUser) { DARABONBA_PTR_SET_VALUE(askUser_, askUser) };
    inline RunCustomHotTopicAnalysisResponseBodyPayloadOutput& setAskUser(vector<string> && askUser) { DARABONBA_PTR_SET_RVALUE(askUser_, askUser) };


    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline string asyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
    inline RunCustomHotTopicAnalysisResponseBodyPayloadOutput& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


    // attitude Field Functions 
    bool hasAttitude() const { return this->attitude_ != nullptr;};
    void deleteAttitude() { this->attitude_ = nullptr;};
    inline string attitude() const { DARABONBA_PTR_GET_DEFAULT(attitude_, "") };
    inline RunCustomHotTopicAnalysisResponseBodyPayloadOutput& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


    // searchQuery Field Functions 
    bool hasSearchQuery() const { return this->searchQuery_ != nullptr;};
    void deleteSearchQuery() { this->searchQuery_ = nullptr;};
    inline string searchQuery() const { DARABONBA_PTR_GET_DEFAULT(searchQuery_, "") };
    inline RunCustomHotTopicAnalysisResponseBodyPayloadOutput& setSearchQuery(string searchQuery) { DARABONBA_PTR_SET_VALUE(searchQuery_, searchQuery) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunCustomHotTopicAnalysisResponseBodyPayloadOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline string topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, "") };
    inline RunCustomHotTopicAnalysisResponseBodyPayloadOutput& setTopicId(string topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


  protected:
    std::shared_ptr<vector<Models::RunCustomHotTopicAnalysisResponseBodyPayloadOutputArticles>> articles_ = nullptr;
    std::shared_ptr<vector<string>> askUser_ = nullptr;
    std::shared_ptr<string> asyncTaskId_ = nullptr;
    std::shared_ptr<string> attitude_ = nullptr;
    std::shared_ptr<string> searchQuery_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> topicId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
