// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GUICHATCOMPLETIONSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GUICHATCOMPLETIONSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaasQIService20260831
{
namespace Models
{
  class GuiChatCompletionStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GuiChatCompletionStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(allowedTokenIds, allowedTokenIds_);
      DARABONBA_PTR_TO_JSON(badWords, badWords_);
      DARABONBA_PTR_TO_JSON(chatTemplateKwargs, chatTemplateKwargs_);
      DARABONBA_PTR_TO_JSON(frequencyPenalty, frequencyPenalty_);
      DARABONBA_PTR_TO_JSON(ignoreEos, ignoreEos_);
      DARABONBA_PTR_TO_JSON(includeReasoning, includeReasoning_);
      DARABONBA_PTR_TO_JSON(logprobs, logprobs_);
      DARABONBA_PTR_TO_JSON(maxCompletionTokens, maxCompletionTokens_);
      DARABONBA_PTR_TO_JSON(maxTokens, maxTokens_);
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(minP, minP_);
      DARABONBA_PTR_TO_JSON(minTokens, minTokens_);
      DARABONBA_PTR_TO_JSON(mmProcessorKwargs, mmProcessorKwargs_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(n, n_);
      DARABONBA_PTR_TO_JSON(parallelToolCalls, parallelToolCalls_);
      DARABONBA_PTR_TO_JSON(presencePenalty, presencePenalty_);
      DARABONBA_PTR_TO_JSON(promptLogprobs, promptLogprobs_);
      DARABONBA_PTR_TO_JSON(reasoningEffort, reasoningEffort_);
      DARABONBA_PTR_TO_JSON(repetitionPenalty, repetitionPenalty_);
      DARABONBA_PTR_TO_JSON(responseFormat, responseFormat_);
      DARABONBA_PTR_TO_JSON(seed, seed_);
      DARABONBA_PTR_TO_JSON(skipSpecialTokens, skipSpecialTokens_);
      DARABONBA_PTR_TO_JSON(stop, stop_);
      DARABONBA_PTR_TO_JSON(stopTokenIds, stopTokenIds_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(streamOptions, streamOptions_);
      DARABONBA_PTR_TO_JSON(structuredOutputs, structuredOutputs_);
      DARABONBA_PTR_TO_JSON(temperature, temperature_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
      DARABONBA_PTR_TO_JSON(topLogprobs, topLogprobs_);
      DARABONBA_PTR_TO_JSON(topP, topP_);
    };
    friend void from_json(const Darabonba::Json& j, GuiChatCompletionStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(allowedTokenIds, allowedTokenIds_);
      DARABONBA_PTR_FROM_JSON(badWords, badWords_);
      DARABONBA_PTR_FROM_JSON(chatTemplateKwargs, chatTemplateKwargs_);
      DARABONBA_PTR_FROM_JSON(frequencyPenalty, frequencyPenalty_);
      DARABONBA_PTR_FROM_JSON(ignoreEos, ignoreEos_);
      DARABONBA_PTR_FROM_JSON(includeReasoning, includeReasoning_);
      DARABONBA_PTR_FROM_JSON(logprobs, logprobs_);
      DARABONBA_PTR_FROM_JSON(maxCompletionTokens, maxCompletionTokens_);
      DARABONBA_PTR_FROM_JSON(maxTokens, maxTokens_);
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(minP, minP_);
      DARABONBA_PTR_FROM_JSON(minTokens, minTokens_);
      DARABONBA_PTR_FROM_JSON(mmProcessorKwargs, mmProcessorKwargs_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(n, n_);
      DARABONBA_PTR_FROM_JSON(parallelToolCalls, parallelToolCalls_);
      DARABONBA_PTR_FROM_JSON(presencePenalty, presencePenalty_);
      DARABONBA_PTR_FROM_JSON(promptLogprobs, promptLogprobs_);
      DARABONBA_PTR_FROM_JSON(reasoningEffort, reasoningEffort_);
      DARABONBA_PTR_FROM_JSON(repetitionPenalty, repetitionPenalty_);
      DARABONBA_PTR_FROM_JSON(responseFormat, responseFormat_);
      DARABONBA_PTR_FROM_JSON(seed, seed_);
      DARABONBA_PTR_FROM_JSON(skipSpecialTokens, skipSpecialTokens_);
      DARABONBA_PTR_FROM_JSON(stop, stop_);
      DARABONBA_PTR_FROM_JSON(stopTokenIds, stopTokenIds_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(streamOptions, streamOptions_);
      DARABONBA_PTR_FROM_JSON(structuredOutputs, structuredOutputs_);
      DARABONBA_PTR_FROM_JSON(temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
      DARABONBA_PTR_FROM_JSON(topLogprobs, topLogprobs_);
      DARABONBA_PTR_FROM_JSON(topP, topP_);
    };
    GuiChatCompletionStreamRequest() = default ;
    GuiChatCompletionStreamRequest(const GuiChatCompletionStreamRequest &) = default ;
    GuiChatCompletionStreamRequest(GuiChatCompletionStreamRequest &&) = default ;
    GuiChatCompletionStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GuiChatCompletionStreamRequest() = default ;
    GuiChatCompletionStreamRequest& operator=(const GuiChatCompletionStreamRequest &) = default ;
    GuiChatCompletionStreamRequest& operator=(GuiChatCompletionStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StructuredOutputs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StructuredOutputs& obj) { 
        DARABONBA_PTR_TO_JSON(choice, choice_);
      };
      friend void from_json(const Darabonba::Json& j, StructuredOutputs& obj) { 
        DARABONBA_PTR_FROM_JSON(choice, choice_);
      };
      StructuredOutputs() = default ;
      StructuredOutputs(const StructuredOutputs &) = default ;
      StructuredOutputs(StructuredOutputs &&) = default ;
      StructuredOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StructuredOutputs() = default ;
      StructuredOutputs& operator=(const StructuredOutputs &) = default ;
      StructuredOutputs& operator=(StructuredOutputs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->choice_ == nullptr; };
      // choice Field Functions 
      bool hasChoice() const { return this->choice_ != nullptr;};
      void deleteChoice() { this->choice_ = nullptr;};
      inline const vector<string> & getChoice() const { DARABONBA_PTR_GET_CONST(choice_, vector<string>) };
      inline vector<string> getChoice() { DARABONBA_PTR_GET(choice_, vector<string>) };
      inline StructuredOutputs& setChoice(const vector<string> & choice) { DARABONBA_PTR_SET_VALUE(choice_, choice) };
      inline StructuredOutputs& setChoice(vector<string> && choice) { DARABONBA_PTR_SET_RVALUE(choice_, choice) };


    protected:
      shared_ptr<vector<string>> choice_ {};
    };

    class StreamOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamOptions& obj) { 
        DARABONBA_PTR_TO_JSON(includeUsage, includeUsage_);
      };
      friend void from_json(const Darabonba::Json& j, StreamOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(includeUsage, includeUsage_);
      };
      StreamOptions() = default ;
      StreamOptions(const StreamOptions &) = default ;
      StreamOptions(StreamOptions &&) = default ;
      StreamOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamOptions() = default ;
      StreamOptions& operator=(const StreamOptions &) = default ;
      StreamOptions& operator=(StreamOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->includeUsage_ == nullptr; };
      // includeUsage Field Functions 
      bool hasIncludeUsage() const { return this->includeUsage_ != nullptr;};
      void deleteIncludeUsage() { this->includeUsage_ = nullptr;};
      inline bool getIncludeUsage() const { DARABONBA_PTR_GET_DEFAULT(includeUsage_, false) };
      inline StreamOptions& setIncludeUsage(bool includeUsage) { DARABONBA_PTR_SET_VALUE(includeUsage_, includeUsage) };


    protected:
      shared_ptr<bool> includeUsage_ {};
    };

    class ResponseFormat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResponseFormat& obj) { 
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ResponseFormat& obj) { 
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      ResponseFormat() = default ;
      ResponseFormat(const ResponseFormat &) = default ;
      ResponseFormat(ResponseFormat &&) = default ;
      ResponseFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResponseFormat() = default ;
      ResponseFormat& operator=(const ResponseFormat &) = default ;
      ResponseFormat& operator=(ResponseFormat &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ResponseFormat& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> type_ {};
    };

    class MmProcessorKwargs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MmProcessorKwargs& obj) { 
        DARABONBA_PTR_TO_JSON(maxDynamicPatch, maxDynamicPatch_);
      };
      friend void from_json(const Darabonba::Json& j, MmProcessorKwargs& obj) { 
        DARABONBA_PTR_FROM_JSON(maxDynamicPatch, maxDynamicPatch_);
      };
      MmProcessorKwargs() = default ;
      MmProcessorKwargs(const MmProcessorKwargs &) = default ;
      MmProcessorKwargs(MmProcessorKwargs &&) = default ;
      MmProcessorKwargs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MmProcessorKwargs() = default ;
      MmProcessorKwargs& operator=(const MmProcessorKwargs &) = default ;
      MmProcessorKwargs& operator=(MmProcessorKwargs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maxDynamicPatch_ == nullptr; };
      // maxDynamicPatch Field Functions 
      bool hasMaxDynamicPatch() const { return this->maxDynamicPatch_ != nullptr;};
      void deleteMaxDynamicPatch() { this->maxDynamicPatch_ = nullptr;};
      inline int64_t getMaxDynamicPatch() const { DARABONBA_PTR_GET_DEFAULT(maxDynamicPatch_, 0L) };
      inline MmProcessorKwargs& setMaxDynamicPatch(int64_t maxDynamicPatch) { DARABONBA_PTR_SET_VALUE(maxDynamicPatch_, maxDynamicPatch) };


    protected:
      shared_ptr<int64_t> maxDynamicPatch_ {};
    };

    class Metadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
        DARABONBA_PTR_TO_JSON(appList, appList_);
        DARABONBA_PTR_TO_JSON(availableApps, availableApps_);
        DARABONBA_PTR_TO_JSON(harnessMessage, harnessMessage_);
        DARABONBA_PTR_TO_JSON(screenHeight, screenHeight_);
        DARABONBA_PTR_TO_JSON(screenWidth, screenWidth_);
      };
      friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
        DARABONBA_PTR_FROM_JSON(appList, appList_);
        DARABONBA_PTR_FROM_JSON(availableApps, availableApps_);
        DARABONBA_PTR_FROM_JSON(harnessMessage, harnessMessage_);
        DARABONBA_PTR_FROM_JSON(screenHeight, screenHeight_);
        DARABONBA_PTR_FROM_JSON(screenWidth, screenWidth_);
      };
      Metadata() = default ;
      Metadata(const Metadata &) = default ;
      Metadata(Metadata &&) = default ;
      Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metadata() = default ;
      Metadata& operator=(const Metadata &) = default ;
      Metadata& operator=(Metadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appList_ == nullptr
        && this->availableApps_ == nullptr && this->harnessMessage_ == nullptr && this->screenHeight_ == nullptr && this->screenWidth_ == nullptr; };
      // appList Field Functions 
      bool hasAppList() const { return this->appList_ != nullptr;};
      void deleteAppList() { this->appList_ = nullptr;};
      inline const vector<string> & getAppList() const { DARABONBA_PTR_GET_CONST(appList_, vector<string>) };
      inline vector<string> getAppList() { DARABONBA_PTR_GET(appList_, vector<string>) };
      inline Metadata& setAppList(const vector<string> & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
      inline Metadata& setAppList(vector<string> && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


      // availableApps Field Functions 
      bool hasAvailableApps() const { return this->availableApps_ != nullptr;};
      void deleteAvailableApps() { this->availableApps_ = nullptr;};
      inline const vector<string> & getAvailableApps() const { DARABONBA_PTR_GET_CONST(availableApps_, vector<string>) };
      inline vector<string> getAvailableApps() { DARABONBA_PTR_GET(availableApps_, vector<string>) };
      inline Metadata& setAvailableApps(const vector<string> & availableApps) { DARABONBA_PTR_SET_VALUE(availableApps_, availableApps) };
      inline Metadata& setAvailableApps(vector<string> && availableApps) { DARABONBA_PTR_SET_RVALUE(availableApps_, availableApps) };


      // harnessMessage Field Functions 
      bool hasHarnessMessage() const { return this->harnessMessage_ != nullptr;};
      void deleteHarnessMessage() { this->harnessMessage_ = nullptr;};
      inline string getHarnessMessage() const { DARABONBA_PTR_GET_DEFAULT(harnessMessage_, "") };
      inline Metadata& setHarnessMessage(string harnessMessage) { DARABONBA_PTR_SET_VALUE(harnessMessage_, harnessMessage) };


      // screenHeight Field Functions 
      bool hasScreenHeight() const { return this->screenHeight_ != nullptr;};
      void deleteScreenHeight() { this->screenHeight_ = nullptr;};
      inline int64_t getScreenHeight() const { DARABONBA_PTR_GET_DEFAULT(screenHeight_, 0L) };
      inline Metadata& setScreenHeight(int64_t screenHeight) { DARABONBA_PTR_SET_VALUE(screenHeight_, screenHeight) };


      // screenWidth Field Functions 
      bool hasScreenWidth() const { return this->screenWidth_ != nullptr;};
      void deleteScreenWidth() { this->screenWidth_ = nullptr;};
      inline int64_t getScreenWidth() const { DARABONBA_PTR_GET_DEFAULT(screenWidth_, 0L) };
      inline Metadata& setScreenWidth(int64_t screenWidth) { DARABONBA_PTR_SET_VALUE(screenWidth_, screenWidth) };


    protected:
      shared_ptr<vector<string>> appList_ {};
      shared_ptr<vector<string>> availableApps_ {};
      shared_ptr<string> harnessMessage_ {};
      shared_ptr<int64_t> screenHeight_ {};
      shared_ptr<int64_t> screenWidth_ {};
    };

    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(toolCallId, toolCallId_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(role, role_);
        DARABONBA_PTR_FROM_JSON(toolCallId, toolCallId_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(imageData, imageData_);
          DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(text, text_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(imageData, imageData_);
          DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(text, text_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ImageUrl : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImageUrl& obj) { 
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, ImageUrl& obj) { 
            DARABONBA_PTR_FROM_JSON(url, url_);
          };
          ImageUrl() = default ;
          ImageUrl(const ImageUrl &) = default ;
          ImageUrl(ImageUrl &&) = default ;
          ImageUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImageUrl() = default ;
          ImageUrl& operator=(const ImageUrl &) = default ;
          ImageUrl& operator=(ImageUrl &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->url_ == nullptr; };
          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline ImageUrl& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->imageData_ == nullptr
        && this->imageUrl_ == nullptr && this->text_ == nullptr && this->type_ == nullptr; };
        // imageData Field Functions 
        bool hasImageData() const { return this->imageData_ != nullptr;};
        void deleteImageData() { this->imageData_ = nullptr;};
        inline string getImageData() const { DARABONBA_PTR_GET_DEFAULT(imageData_, "") };
        inline Content& setImageData(string imageData) { DARABONBA_PTR_SET_VALUE(imageData_, imageData) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline const Content::ImageUrl & getImageUrl() const { DARABONBA_PTR_GET_CONST(imageUrl_, Content::ImageUrl) };
        inline Content::ImageUrl getImageUrl() { DARABONBA_PTR_GET(imageUrl_, Content::ImageUrl) };
        inline Content& setImageUrl(const Content::ImageUrl & imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };
        inline Content& setImageUrl(Content::ImageUrl && imageUrl) { DARABONBA_PTR_SET_RVALUE(imageUrl_, imageUrl) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Content& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> imageData_ {};
        shared_ptr<Content::ImageUrl> imageUrl_ {};
        shared_ptr<string> text_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr && this->toolCallId_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Messages::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Messages::Content>) };
      inline vector<Messages::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Messages::Content>) };
      inline Messages& setContent(const vector<Messages::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Messages& setContent(vector<Messages::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // toolCallId Field Functions 
      bool hasToolCallId() const { return this->toolCallId_ != nullptr;};
      void deleteToolCallId() { this->toolCallId_ = nullptr;};
      inline string getToolCallId() const { DARABONBA_PTR_GET_DEFAULT(toolCallId_, "") };
      inline Messages& setToolCallId(string toolCallId) { DARABONBA_PTR_SET_VALUE(toolCallId_, toolCallId) };


    protected:
      shared_ptr<vector<Messages::Content>> content_ {};
      shared_ptr<string> role_ {};
      shared_ptr<string> toolCallId_ {};
    };

    class ChatTemplateKwargs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChatTemplateKwargs& obj) { 
        DARABONBA_PTR_TO_JSON(enableThinking, enableThinking_);
        DARABONBA_PTR_TO_JSON(preserveThinking, preserveThinking_);
      };
      friend void from_json(const Darabonba::Json& j, ChatTemplateKwargs& obj) { 
        DARABONBA_PTR_FROM_JSON(enableThinking, enableThinking_);
        DARABONBA_PTR_FROM_JSON(preserveThinking, preserveThinking_);
      };
      ChatTemplateKwargs() = default ;
      ChatTemplateKwargs(const ChatTemplateKwargs &) = default ;
      ChatTemplateKwargs(ChatTemplateKwargs &&) = default ;
      ChatTemplateKwargs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChatTemplateKwargs() = default ;
      ChatTemplateKwargs& operator=(const ChatTemplateKwargs &) = default ;
      ChatTemplateKwargs& operator=(ChatTemplateKwargs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableThinking_ == nullptr
        && this->preserveThinking_ == nullptr; };
      // enableThinking Field Functions 
      bool hasEnableThinking() const { return this->enableThinking_ != nullptr;};
      void deleteEnableThinking() { this->enableThinking_ = nullptr;};
      inline bool getEnableThinking() const { DARABONBA_PTR_GET_DEFAULT(enableThinking_, false) };
      inline ChatTemplateKwargs& setEnableThinking(bool enableThinking) { DARABONBA_PTR_SET_VALUE(enableThinking_, enableThinking) };


      // preserveThinking Field Functions 
      bool hasPreserveThinking() const { return this->preserveThinking_ != nullptr;};
      void deletePreserveThinking() { this->preserveThinking_ = nullptr;};
      inline bool getPreserveThinking() const { DARABONBA_PTR_GET_DEFAULT(preserveThinking_, false) };
      inline ChatTemplateKwargs& setPreserveThinking(bool preserveThinking) { DARABONBA_PTR_SET_VALUE(preserveThinking_, preserveThinking) };


    protected:
      shared_ptr<bool> enableThinking_ {};
      shared_ptr<bool> preserveThinking_ {};
    };

    virtual bool empty() const override { return this->allowedTokenIds_ == nullptr
        && this->badWords_ == nullptr && this->chatTemplateKwargs_ == nullptr && this->frequencyPenalty_ == nullptr && this->ignoreEos_ == nullptr && this->includeReasoning_ == nullptr
        && this->logprobs_ == nullptr && this->maxCompletionTokens_ == nullptr && this->maxTokens_ == nullptr && this->messages_ == nullptr && this->metadata_ == nullptr
        && this->minP_ == nullptr && this->minTokens_ == nullptr && this->mmProcessorKwargs_ == nullptr && this->model_ == nullptr && this->n_ == nullptr
        && this->parallelToolCalls_ == nullptr && this->presencePenalty_ == nullptr && this->promptLogprobs_ == nullptr && this->reasoningEffort_ == nullptr && this->repetitionPenalty_ == nullptr
        && this->responseFormat_ == nullptr && this->seed_ == nullptr && this->skipSpecialTokens_ == nullptr && this->stop_ == nullptr && this->stopTokenIds_ == nullptr
        && this->stream_ == nullptr && this->streamOptions_ == nullptr && this->structuredOutputs_ == nullptr && this->temperature_ == nullptr && this->topK_ == nullptr
        && this->topLogprobs_ == nullptr && this->topP_ == nullptr; };
    // allowedTokenIds Field Functions 
    bool hasAllowedTokenIds() const { return this->allowedTokenIds_ != nullptr;};
    void deleteAllowedTokenIds() { this->allowedTokenIds_ = nullptr;};
    inline const vector<int64_t> & getAllowedTokenIds() const { DARABONBA_PTR_GET_CONST(allowedTokenIds_, vector<int64_t>) };
    inline vector<int64_t> getAllowedTokenIds() { DARABONBA_PTR_GET(allowedTokenIds_, vector<int64_t>) };
    inline GuiChatCompletionStreamRequest& setAllowedTokenIds(const vector<int64_t> & allowedTokenIds) { DARABONBA_PTR_SET_VALUE(allowedTokenIds_, allowedTokenIds) };
    inline GuiChatCompletionStreamRequest& setAllowedTokenIds(vector<int64_t> && allowedTokenIds) { DARABONBA_PTR_SET_RVALUE(allowedTokenIds_, allowedTokenIds) };


    // badWords Field Functions 
    bool hasBadWords() const { return this->badWords_ != nullptr;};
    void deleteBadWords() { this->badWords_ = nullptr;};
    inline const vector<string> & getBadWords() const { DARABONBA_PTR_GET_CONST(badWords_, vector<string>) };
    inline vector<string> getBadWords() { DARABONBA_PTR_GET(badWords_, vector<string>) };
    inline GuiChatCompletionStreamRequest& setBadWords(const vector<string> & badWords) { DARABONBA_PTR_SET_VALUE(badWords_, badWords) };
    inline GuiChatCompletionStreamRequest& setBadWords(vector<string> && badWords) { DARABONBA_PTR_SET_RVALUE(badWords_, badWords) };


    // chatTemplateKwargs Field Functions 
    bool hasChatTemplateKwargs() const { return this->chatTemplateKwargs_ != nullptr;};
    void deleteChatTemplateKwargs() { this->chatTemplateKwargs_ = nullptr;};
    inline const GuiChatCompletionStreamRequest::ChatTemplateKwargs & getChatTemplateKwargs() const { DARABONBA_PTR_GET_CONST(chatTemplateKwargs_, GuiChatCompletionStreamRequest::ChatTemplateKwargs) };
    inline GuiChatCompletionStreamRequest::ChatTemplateKwargs getChatTemplateKwargs() { DARABONBA_PTR_GET(chatTemplateKwargs_, GuiChatCompletionStreamRequest::ChatTemplateKwargs) };
    inline GuiChatCompletionStreamRequest& setChatTemplateKwargs(const GuiChatCompletionStreamRequest::ChatTemplateKwargs & chatTemplateKwargs) { DARABONBA_PTR_SET_VALUE(chatTemplateKwargs_, chatTemplateKwargs) };
    inline GuiChatCompletionStreamRequest& setChatTemplateKwargs(GuiChatCompletionStreamRequest::ChatTemplateKwargs && chatTemplateKwargs) { DARABONBA_PTR_SET_RVALUE(chatTemplateKwargs_, chatTemplateKwargs) };


    // frequencyPenalty Field Functions 
    bool hasFrequencyPenalty() const { return this->frequencyPenalty_ != nullptr;};
    void deleteFrequencyPenalty() { this->frequencyPenalty_ = nullptr;};
    inline double getFrequencyPenalty() const { DARABONBA_PTR_GET_DEFAULT(frequencyPenalty_, 0.0) };
    inline GuiChatCompletionStreamRequest& setFrequencyPenalty(double frequencyPenalty) { DARABONBA_PTR_SET_VALUE(frequencyPenalty_, frequencyPenalty) };


    // ignoreEos Field Functions 
    bool hasIgnoreEos() const { return this->ignoreEos_ != nullptr;};
    void deleteIgnoreEos() { this->ignoreEos_ = nullptr;};
    inline bool getIgnoreEos() const { DARABONBA_PTR_GET_DEFAULT(ignoreEos_, false) };
    inline GuiChatCompletionStreamRequest& setIgnoreEos(bool ignoreEos) { DARABONBA_PTR_SET_VALUE(ignoreEos_, ignoreEos) };


    // includeReasoning Field Functions 
    bool hasIncludeReasoning() const { return this->includeReasoning_ != nullptr;};
    void deleteIncludeReasoning() { this->includeReasoning_ = nullptr;};
    inline bool getIncludeReasoning() const { DARABONBA_PTR_GET_DEFAULT(includeReasoning_, false) };
    inline GuiChatCompletionStreamRequest& setIncludeReasoning(bool includeReasoning) { DARABONBA_PTR_SET_VALUE(includeReasoning_, includeReasoning) };


    // logprobs Field Functions 
    bool hasLogprobs() const { return this->logprobs_ != nullptr;};
    void deleteLogprobs() { this->logprobs_ = nullptr;};
    inline bool getLogprobs() const { DARABONBA_PTR_GET_DEFAULT(logprobs_, false) };
    inline GuiChatCompletionStreamRequest& setLogprobs(bool logprobs) { DARABONBA_PTR_SET_VALUE(logprobs_, logprobs) };


    // maxCompletionTokens Field Functions 
    bool hasMaxCompletionTokens() const { return this->maxCompletionTokens_ != nullptr;};
    void deleteMaxCompletionTokens() { this->maxCompletionTokens_ = nullptr;};
    inline int64_t getMaxCompletionTokens() const { DARABONBA_PTR_GET_DEFAULT(maxCompletionTokens_, 0L) };
    inline GuiChatCompletionStreamRequest& setMaxCompletionTokens(int64_t maxCompletionTokens) { DARABONBA_PTR_SET_VALUE(maxCompletionTokens_, maxCompletionTokens) };


    // maxTokens Field Functions 
    bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
    void deleteMaxTokens() { this->maxTokens_ = nullptr;};
    inline int64_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0L) };
    inline GuiChatCompletionStreamRequest& setMaxTokens(int64_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<GuiChatCompletionStreamRequest::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<GuiChatCompletionStreamRequest::Messages>) };
    inline vector<GuiChatCompletionStreamRequest::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<GuiChatCompletionStreamRequest::Messages>) };
    inline GuiChatCompletionStreamRequest& setMessages(const vector<GuiChatCompletionStreamRequest::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline GuiChatCompletionStreamRequest& setMessages(vector<GuiChatCompletionStreamRequest::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const GuiChatCompletionStreamRequest::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, GuiChatCompletionStreamRequest::Metadata) };
    inline GuiChatCompletionStreamRequest::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, GuiChatCompletionStreamRequest::Metadata) };
    inline GuiChatCompletionStreamRequest& setMetadata(const GuiChatCompletionStreamRequest::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline GuiChatCompletionStreamRequest& setMetadata(GuiChatCompletionStreamRequest::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // minP Field Functions 
    bool hasMinP() const { return this->minP_ != nullptr;};
    void deleteMinP() { this->minP_ = nullptr;};
    inline double getMinP() const { DARABONBA_PTR_GET_DEFAULT(minP_, 0.0) };
    inline GuiChatCompletionStreamRequest& setMinP(double minP) { DARABONBA_PTR_SET_VALUE(minP_, minP) };


    // minTokens Field Functions 
    bool hasMinTokens() const { return this->minTokens_ != nullptr;};
    void deleteMinTokens() { this->minTokens_ = nullptr;};
    inline int64_t getMinTokens() const { DARABONBA_PTR_GET_DEFAULT(minTokens_, 0L) };
    inline GuiChatCompletionStreamRequest& setMinTokens(int64_t minTokens) { DARABONBA_PTR_SET_VALUE(minTokens_, minTokens) };


    // mmProcessorKwargs Field Functions 
    bool hasMmProcessorKwargs() const { return this->mmProcessorKwargs_ != nullptr;};
    void deleteMmProcessorKwargs() { this->mmProcessorKwargs_ = nullptr;};
    inline const GuiChatCompletionStreamRequest::MmProcessorKwargs & getMmProcessorKwargs() const { DARABONBA_PTR_GET_CONST(mmProcessorKwargs_, GuiChatCompletionStreamRequest::MmProcessorKwargs) };
    inline GuiChatCompletionStreamRequest::MmProcessorKwargs getMmProcessorKwargs() { DARABONBA_PTR_GET(mmProcessorKwargs_, GuiChatCompletionStreamRequest::MmProcessorKwargs) };
    inline GuiChatCompletionStreamRequest& setMmProcessorKwargs(const GuiChatCompletionStreamRequest::MmProcessorKwargs & mmProcessorKwargs) { DARABONBA_PTR_SET_VALUE(mmProcessorKwargs_, mmProcessorKwargs) };
    inline GuiChatCompletionStreamRequest& setMmProcessorKwargs(GuiChatCompletionStreamRequest::MmProcessorKwargs && mmProcessorKwargs) { DARABONBA_PTR_SET_RVALUE(mmProcessorKwargs_, mmProcessorKwargs) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline GuiChatCompletionStreamRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // n Field Functions 
    bool hasN() const { return this->n_ != nullptr;};
    void deleteN() { this->n_ = nullptr;};
    inline int64_t getN() const { DARABONBA_PTR_GET_DEFAULT(n_, 0L) };
    inline GuiChatCompletionStreamRequest& setN(int64_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


    // parallelToolCalls Field Functions 
    bool hasParallelToolCalls() const { return this->parallelToolCalls_ != nullptr;};
    void deleteParallelToolCalls() { this->parallelToolCalls_ = nullptr;};
    inline bool getParallelToolCalls() const { DARABONBA_PTR_GET_DEFAULT(parallelToolCalls_, false) };
    inline GuiChatCompletionStreamRequest& setParallelToolCalls(bool parallelToolCalls) { DARABONBA_PTR_SET_VALUE(parallelToolCalls_, parallelToolCalls) };


    // presencePenalty Field Functions 
    bool hasPresencePenalty() const { return this->presencePenalty_ != nullptr;};
    void deletePresencePenalty() { this->presencePenalty_ = nullptr;};
    inline double getPresencePenalty() const { DARABONBA_PTR_GET_DEFAULT(presencePenalty_, 0.0) };
    inline GuiChatCompletionStreamRequest& setPresencePenalty(double presencePenalty) { DARABONBA_PTR_SET_VALUE(presencePenalty_, presencePenalty) };


    // promptLogprobs Field Functions 
    bool hasPromptLogprobs() const { return this->promptLogprobs_ != nullptr;};
    void deletePromptLogprobs() { this->promptLogprobs_ = nullptr;};
    inline int64_t getPromptLogprobs() const { DARABONBA_PTR_GET_DEFAULT(promptLogprobs_, 0L) };
    inline GuiChatCompletionStreamRequest& setPromptLogprobs(int64_t promptLogprobs) { DARABONBA_PTR_SET_VALUE(promptLogprobs_, promptLogprobs) };


    // reasoningEffort Field Functions 
    bool hasReasoningEffort() const { return this->reasoningEffort_ != nullptr;};
    void deleteReasoningEffort() { this->reasoningEffort_ = nullptr;};
    inline string getReasoningEffort() const { DARABONBA_PTR_GET_DEFAULT(reasoningEffort_, "") };
    inline GuiChatCompletionStreamRequest& setReasoningEffort(string reasoningEffort) { DARABONBA_PTR_SET_VALUE(reasoningEffort_, reasoningEffort) };


    // repetitionPenalty Field Functions 
    bool hasRepetitionPenalty() const { return this->repetitionPenalty_ != nullptr;};
    void deleteRepetitionPenalty() { this->repetitionPenalty_ = nullptr;};
    inline double getRepetitionPenalty() const { DARABONBA_PTR_GET_DEFAULT(repetitionPenalty_, 0.0) };
    inline GuiChatCompletionStreamRequest& setRepetitionPenalty(double repetitionPenalty) { DARABONBA_PTR_SET_VALUE(repetitionPenalty_, repetitionPenalty) };


    // responseFormat Field Functions 
    bool hasResponseFormat() const { return this->responseFormat_ != nullptr;};
    void deleteResponseFormat() { this->responseFormat_ = nullptr;};
    inline const GuiChatCompletionStreamRequest::ResponseFormat & getResponseFormat() const { DARABONBA_PTR_GET_CONST(responseFormat_, GuiChatCompletionStreamRequest::ResponseFormat) };
    inline GuiChatCompletionStreamRequest::ResponseFormat getResponseFormat() { DARABONBA_PTR_GET(responseFormat_, GuiChatCompletionStreamRequest::ResponseFormat) };
    inline GuiChatCompletionStreamRequest& setResponseFormat(const GuiChatCompletionStreamRequest::ResponseFormat & responseFormat) { DARABONBA_PTR_SET_VALUE(responseFormat_, responseFormat) };
    inline GuiChatCompletionStreamRequest& setResponseFormat(GuiChatCompletionStreamRequest::ResponseFormat && responseFormat) { DARABONBA_PTR_SET_RVALUE(responseFormat_, responseFormat) };


    // seed Field Functions 
    bool hasSeed() const { return this->seed_ != nullptr;};
    void deleteSeed() { this->seed_ = nullptr;};
    inline int64_t getSeed() const { DARABONBA_PTR_GET_DEFAULT(seed_, 0L) };
    inline GuiChatCompletionStreamRequest& setSeed(int64_t seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


    // skipSpecialTokens Field Functions 
    bool hasSkipSpecialTokens() const { return this->skipSpecialTokens_ != nullptr;};
    void deleteSkipSpecialTokens() { this->skipSpecialTokens_ = nullptr;};
    inline bool getSkipSpecialTokens() const { DARABONBA_PTR_GET_DEFAULT(skipSpecialTokens_, false) };
    inline GuiChatCompletionStreamRequest& setSkipSpecialTokens(bool skipSpecialTokens) { DARABONBA_PTR_SET_VALUE(skipSpecialTokens_, skipSpecialTokens) };


    // stop Field Functions 
    bool hasStop() const { return this->stop_ != nullptr;};
    void deleteStop() { this->stop_ = nullptr;};
    inline const vector<string> & getStop() const { DARABONBA_PTR_GET_CONST(stop_, vector<string>) };
    inline vector<string> getStop() { DARABONBA_PTR_GET(stop_, vector<string>) };
    inline GuiChatCompletionStreamRequest& setStop(const vector<string> & stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };
    inline GuiChatCompletionStreamRequest& setStop(vector<string> && stop) { DARABONBA_PTR_SET_RVALUE(stop_, stop) };


    // stopTokenIds Field Functions 
    bool hasStopTokenIds() const { return this->stopTokenIds_ != nullptr;};
    void deleteStopTokenIds() { this->stopTokenIds_ = nullptr;};
    inline const vector<int64_t> & getStopTokenIds() const { DARABONBA_PTR_GET_CONST(stopTokenIds_, vector<int64_t>) };
    inline vector<int64_t> getStopTokenIds() { DARABONBA_PTR_GET(stopTokenIds_, vector<int64_t>) };
    inline GuiChatCompletionStreamRequest& setStopTokenIds(const vector<int64_t> & stopTokenIds) { DARABONBA_PTR_SET_VALUE(stopTokenIds_, stopTokenIds) };
    inline GuiChatCompletionStreamRequest& setStopTokenIds(vector<int64_t> && stopTokenIds) { DARABONBA_PTR_SET_RVALUE(stopTokenIds_, stopTokenIds) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline GuiChatCompletionStreamRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // streamOptions Field Functions 
    bool hasStreamOptions() const { return this->streamOptions_ != nullptr;};
    void deleteStreamOptions() { this->streamOptions_ = nullptr;};
    inline const GuiChatCompletionStreamRequest::StreamOptions & getStreamOptions() const { DARABONBA_PTR_GET_CONST(streamOptions_, GuiChatCompletionStreamRequest::StreamOptions) };
    inline GuiChatCompletionStreamRequest::StreamOptions getStreamOptions() { DARABONBA_PTR_GET(streamOptions_, GuiChatCompletionStreamRequest::StreamOptions) };
    inline GuiChatCompletionStreamRequest& setStreamOptions(const GuiChatCompletionStreamRequest::StreamOptions & streamOptions) { DARABONBA_PTR_SET_VALUE(streamOptions_, streamOptions) };
    inline GuiChatCompletionStreamRequest& setStreamOptions(GuiChatCompletionStreamRequest::StreamOptions && streamOptions) { DARABONBA_PTR_SET_RVALUE(streamOptions_, streamOptions) };


    // structuredOutputs Field Functions 
    bool hasStructuredOutputs() const { return this->structuredOutputs_ != nullptr;};
    void deleteStructuredOutputs() { this->structuredOutputs_ = nullptr;};
    inline const GuiChatCompletionStreamRequest::StructuredOutputs & getStructuredOutputs() const { DARABONBA_PTR_GET_CONST(structuredOutputs_, GuiChatCompletionStreamRequest::StructuredOutputs) };
    inline GuiChatCompletionStreamRequest::StructuredOutputs getStructuredOutputs() { DARABONBA_PTR_GET(structuredOutputs_, GuiChatCompletionStreamRequest::StructuredOutputs) };
    inline GuiChatCompletionStreamRequest& setStructuredOutputs(const GuiChatCompletionStreamRequest::StructuredOutputs & structuredOutputs) { DARABONBA_PTR_SET_VALUE(structuredOutputs_, structuredOutputs) };
    inline GuiChatCompletionStreamRequest& setStructuredOutputs(GuiChatCompletionStreamRequest::StructuredOutputs && structuredOutputs) { DARABONBA_PTR_SET_RVALUE(structuredOutputs_, structuredOutputs) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline double getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline GuiChatCompletionStreamRequest& setTemperature(double temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int64_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
    inline GuiChatCompletionStreamRequest& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // topLogprobs Field Functions 
    bool hasTopLogprobs() const { return this->topLogprobs_ != nullptr;};
    void deleteTopLogprobs() { this->topLogprobs_ = nullptr;};
    inline int64_t getTopLogprobs() const { DARABONBA_PTR_GET_DEFAULT(topLogprobs_, 0L) };
    inline GuiChatCompletionStreamRequest& setTopLogprobs(int64_t topLogprobs) { DARABONBA_PTR_SET_VALUE(topLogprobs_, topLogprobs) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline double getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
    inline GuiChatCompletionStreamRequest& setTopP(double topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


  protected:
    shared_ptr<vector<int64_t>> allowedTokenIds_ {};
    shared_ptr<vector<string>> badWords_ {};
    shared_ptr<GuiChatCompletionStreamRequest::ChatTemplateKwargs> chatTemplateKwargs_ {};
    shared_ptr<double> frequencyPenalty_ {};
    shared_ptr<bool> ignoreEos_ {};
    shared_ptr<bool> includeReasoning_ {};
    shared_ptr<bool> logprobs_ {};
    shared_ptr<int64_t> maxCompletionTokens_ {};
    shared_ptr<int64_t> maxTokens_ {};
    // This parameter is required.
    shared_ptr<vector<GuiChatCompletionStreamRequest::Messages>> messages_ {};
    shared_ptr<GuiChatCompletionStreamRequest::Metadata> metadata_ {};
    shared_ptr<double> minP_ {};
    shared_ptr<int64_t> minTokens_ {};
    shared_ptr<GuiChatCompletionStreamRequest::MmProcessorKwargs> mmProcessorKwargs_ {};
    shared_ptr<string> model_ {};
    shared_ptr<int64_t> n_ {};
    shared_ptr<bool> parallelToolCalls_ {};
    shared_ptr<double> presencePenalty_ {};
    shared_ptr<int64_t> promptLogprobs_ {};
    shared_ptr<string> reasoningEffort_ {};
    shared_ptr<double> repetitionPenalty_ {};
    shared_ptr<GuiChatCompletionStreamRequest::ResponseFormat> responseFormat_ {};
    shared_ptr<int64_t> seed_ {};
    shared_ptr<bool> skipSpecialTokens_ {};
    shared_ptr<vector<string>> stop_ {};
    shared_ptr<vector<int64_t>> stopTokenIds_ {};
    // This parameter is required.
    shared_ptr<bool> stream_ {};
    shared_ptr<GuiChatCompletionStreamRequest::StreamOptions> streamOptions_ {};
    shared_ptr<GuiChatCompletionStreamRequest::StructuredOutputs> structuredOutputs_ {};
    shared_ptr<double> temperature_ {};
    shared_ptr<int64_t> topK_ {};
    shared_ptr<int64_t> topLogprobs_ {};
    shared_ptr<double> topP_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaasQIService20260831
#endif
