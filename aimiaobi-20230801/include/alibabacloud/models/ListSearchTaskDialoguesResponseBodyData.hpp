// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSearchTaskDialoguesResponseBodyDataChatConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListSearchTaskDialoguesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchTaskDialoguesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DialogueType, dialogueType_);
      DARABONBA_PTR_TO_JSON(GoodText, goodText_);
      DARABONBA_PTR_TO_JSON(OriginSessionId, originSessionId_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(Rating, rating_);
      DARABONBA_PTR_TO_JSON(ResponseBodyStr, responseBodyStr_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchTaskDialoguesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DialogueType, dialogueType_);
      DARABONBA_PTR_FROM_JSON(GoodText, goodText_);
      DARABONBA_PTR_FROM_JSON(OriginSessionId, originSessionId_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(Rating, rating_);
      DARABONBA_PTR_FROM_JSON(ResponseBodyStr, responseBodyStr_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    ListSearchTaskDialoguesResponseBodyData() = default ;
    ListSearchTaskDialoguesResponseBodyData(const ListSearchTaskDialoguesResponseBodyData &) = default ;
    ListSearchTaskDialoguesResponseBodyData(ListSearchTaskDialoguesResponseBodyData &&) = default ;
    ListSearchTaskDialoguesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchTaskDialoguesResponseBodyData() = default ;
    ListSearchTaskDialoguesResponseBodyData& operator=(const ListSearchTaskDialoguesResponseBodyData &) = default ;
    ListSearchTaskDialoguesResponseBodyData& operator=(ListSearchTaskDialoguesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chatConfig_ != nullptr
        && this->createTime_ != nullptr && this->dialogueType_ != nullptr && this->goodText_ != nullptr && this->originSessionId_ != nullptr && this->prompt_ != nullptr
        && this->rating_ != nullptr && this->responseBodyStr_ != nullptr && this->sessionId_ != nullptr && this->tags_ != nullptr && this->taskId_ != nullptr
        && this->text_ != nullptr; };
    // chatConfig Field Functions 
    bool hasChatConfig() const { return this->chatConfig_ != nullptr;};
    void deleteChatConfig() { this->chatConfig_ = nullptr;};
    inline const Models::ListSearchTaskDialoguesResponseBodyDataChatConfig & chatConfig() const { DARABONBA_PTR_GET_CONST(chatConfig_, Models::ListSearchTaskDialoguesResponseBodyDataChatConfig) };
    inline Models::ListSearchTaskDialoguesResponseBodyDataChatConfig chatConfig() { DARABONBA_PTR_GET(chatConfig_, Models::ListSearchTaskDialoguesResponseBodyDataChatConfig) };
    inline ListSearchTaskDialoguesResponseBodyData& setChatConfig(const Models::ListSearchTaskDialoguesResponseBodyDataChatConfig & chatConfig) { DARABONBA_PTR_SET_VALUE(chatConfig_, chatConfig) };
    inline ListSearchTaskDialoguesResponseBodyData& setChatConfig(Models::ListSearchTaskDialoguesResponseBodyDataChatConfig && chatConfig) { DARABONBA_PTR_SET_RVALUE(chatConfig_, chatConfig) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSearchTaskDialoguesResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dialogueType Field Functions 
    bool hasDialogueType() const { return this->dialogueType_ != nullptr;};
    void deleteDialogueType() { this->dialogueType_ = nullptr;};
    inline int32_t dialogueType() const { DARABONBA_PTR_GET_DEFAULT(dialogueType_, 0) };
    inline ListSearchTaskDialoguesResponseBodyData& setDialogueType(int32_t dialogueType) { DARABONBA_PTR_SET_VALUE(dialogueType_, dialogueType) };


    // goodText Field Functions 
    bool hasGoodText() const { return this->goodText_ != nullptr;};
    void deleteGoodText() { this->goodText_ = nullptr;};
    inline string goodText() const { DARABONBA_PTR_GET_DEFAULT(goodText_, "") };
    inline ListSearchTaskDialoguesResponseBodyData& setGoodText(string goodText) { DARABONBA_PTR_SET_VALUE(goodText_, goodText) };


    // originSessionId Field Functions 
    bool hasOriginSessionId() const { return this->originSessionId_ != nullptr;};
    void deleteOriginSessionId() { this->originSessionId_ = nullptr;};
    inline string originSessionId() const { DARABONBA_PTR_GET_DEFAULT(originSessionId_, "") };
    inline ListSearchTaskDialoguesResponseBodyData& setOriginSessionId(string originSessionId) { DARABONBA_PTR_SET_VALUE(originSessionId_, originSessionId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline ListSearchTaskDialoguesResponseBodyData& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // rating Field Functions 
    bool hasRating() const { return this->rating_ != nullptr;};
    void deleteRating() { this->rating_ = nullptr;};
    inline string rating() const { DARABONBA_PTR_GET_DEFAULT(rating_, "") };
    inline ListSearchTaskDialoguesResponseBodyData& setRating(string rating) { DARABONBA_PTR_SET_VALUE(rating_, rating) };


    // responseBodyStr Field Functions 
    bool hasResponseBodyStr() const { return this->responseBodyStr_ != nullptr;};
    void deleteResponseBodyStr() { this->responseBodyStr_ = nullptr;};
    inline string responseBodyStr() const { DARABONBA_PTR_GET_DEFAULT(responseBodyStr_, "") };
    inline ListSearchTaskDialoguesResponseBodyData& setResponseBodyStr(string responseBodyStr) { DARABONBA_PTR_SET_VALUE(responseBodyStr_, responseBodyStr) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListSearchTaskDialoguesResponseBodyData& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline ListSearchTaskDialoguesResponseBodyData& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListSearchTaskDialoguesResponseBodyData& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListSearchTaskDialoguesResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ListSearchTaskDialoguesResponseBodyData& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<Models::ListSearchTaskDialoguesResponseBodyDataChatConfig> chatConfig_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int32_t> dialogueType_ = nullptr;
    std::shared_ptr<string> goodText_ = nullptr;
    std::shared_ptr<string> originSessionId_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> rating_ = nullptr;
    std::shared_ptr<string> responseBodyStr_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
