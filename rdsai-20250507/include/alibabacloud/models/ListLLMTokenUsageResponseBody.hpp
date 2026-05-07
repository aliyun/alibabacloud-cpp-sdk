// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLLMTOKENUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLLMTOKENUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListLLMTokenUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLLMTokenUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompletionTokens, completionTokens_);
      DARABONBA_PTR_TO_JSON(ExplicitCachedTokens, explicitCachedTokens_);
      DARABONBA_PTR_TO_JSON(ImplicitCachedTokens, implicitCachedTokens_);
      DARABONBA_PTR_TO_JSON(PromptTokens, promptTokens_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TokenUsages, tokenUsages_);
      DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
    };
    friend void from_json(const Darabonba::Json& j, ListLLMTokenUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompletionTokens, completionTokens_);
      DARABONBA_PTR_FROM_JSON(ExplicitCachedTokens, explicitCachedTokens_);
      DARABONBA_PTR_FROM_JSON(ImplicitCachedTokens, implicitCachedTokens_);
      DARABONBA_PTR_FROM_JSON(PromptTokens, promptTokens_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TokenUsages, tokenUsages_);
      DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
    };
    ListLLMTokenUsageResponseBody() = default ;
    ListLLMTokenUsageResponseBody(const ListLLMTokenUsageResponseBody &) = default ;
    ListLLMTokenUsageResponseBody(ListLLMTokenUsageResponseBody &&) = default ;
    ListLLMTokenUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLLMTokenUsageResponseBody() = default ;
    ListLLMTokenUsageResponseBody& operator=(const ListLLMTokenUsageResponseBody &) = default ;
    ListLLMTokenUsageResponseBody& operator=(ListLLMTokenUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TokenUsages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TokenUsages& obj) { 
        DARABONBA_PTR_TO_JSON(CompletionReasoningTokens, completionReasoningTokens_);
        DARABONBA_PTR_TO_JSON(CompletionTokens, completionTokens_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExplicitCachedTokens, explicitCachedTokens_);
        DARABONBA_PTR_TO_JSON(ImplicitCachedTokens, implicitCachedTokens_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(PromptTokens, promptTokens_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
      };
      friend void from_json(const Darabonba::Json& j, TokenUsages& obj) { 
        DARABONBA_PTR_FROM_JSON(CompletionReasoningTokens, completionReasoningTokens_);
        DARABONBA_PTR_FROM_JSON(CompletionTokens, completionTokens_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExplicitCachedTokens, explicitCachedTokens_);
        DARABONBA_PTR_FROM_JSON(ImplicitCachedTokens, implicitCachedTokens_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(PromptTokens, promptTokens_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
      };
      TokenUsages() = default ;
      TokenUsages(const TokenUsages &) = default ;
      TokenUsages(TokenUsages &&) = default ;
      TokenUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TokenUsages() = default ;
      TokenUsages& operator=(const TokenUsages &) = default ;
      TokenUsages& operator=(TokenUsages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completionReasoningTokens_ == nullptr
        && this->completionTokens_ == nullptr && this->endTime_ == nullptr && this->explicitCachedTokens_ == nullptr && this->implicitCachedTokens_ == nullptr && this->model_ == nullptr
        && this->promptTokens_ == nullptr && this->startTime_ == nullptr && this->totalTokens_ == nullptr; };
      // completionReasoningTokens Field Functions 
      bool hasCompletionReasoningTokens() const { return this->completionReasoningTokens_ != nullptr;};
      void deleteCompletionReasoningTokens() { this->completionReasoningTokens_ = nullptr;};
      inline int64_t getCompletionReasoningTokens() const { DARABONBA_PTR_GET_DEFAULT(completionReasoningTokens_, 0L) };
      inline TokenUsages& setCompletionReasoningTokens(int64_t completionReasoningTokens) { DARABONBA_PTR_SET_VALUE(completionReasoningTokens_, completionReasoningTokens) };


      // completionTokens Field Functions 
      bool hasCompletionTokens() const { return this->completionTokens_ != nullptr;};
      void deleteCompletionTokens() { this->completionTokens_ = nullptr;};
      inline int64_t getCompletionTokens() const { DARABONBA_PTR_GET_DEFAULT(completionTokens_, 0L) };
      inline TokenUsages& setCompletionTokens(int64_t completionTokens) { DARABONBA_PTR_SET_VALUE(completionTokens_, completionTokens) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline TokenUsages& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // explicitCachedTokens Field Functions 
      bool hasExplicitCachedTokens() const { return this->explicitCachedTokens_ != nullptr;};
      void deleteExplicitCachedTokens() { this->explicitCachedTokens_ = nullptr;};
      inline int64_t getExplicitCachedTokens() const { DARABONBA_PTR_GET_DEFAULT(explicitCachedTokens_, 0L) };
      inline TokenUsages& setExplicitCachedTokens(int64_t explicitCachedTokens) { DARABONBA_PTR_SET_VALUE(explicitCachedTokens_, explicitCachedTokens) };


      // implicitCachedTokens Field Functions 
      bool hasImplicitCachedTokens() const { return this->implicitCachedTokens_ != nullptr;};
      void deleteImplicitCachedTokens() { this->implicitCachedTokens_ = nullptr;};
      inline int64_t getImplicitCachedTokens() const { DARABONBA_PTR_GET_DEFAULT(implicitCachedTokens_, 0L) };
      inline TokenUsages& setImplicitCachedTokens(int64_t implicitCachedTokens) { DARABONBA_PTR_SET_VALUE(implicitCachedTokens_, implicitCachedTokens) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline TokenUsages& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // promptTokens Field Functions 
      bool hasPromptTokens() const { return this->promptTokens_ != nullptr;};
      void deletePromptTokens() { this->promptTokens_ = nullptr;};
      inline int64_t getPromptTokens() const { DARABONBA_PTR_GET_DEFAULT(promptTokens_, 0L) };
      inline TokenUsages& setPromptTokens(int64_t promptTokens) { DARABONBA_PTR_SET_VALUE(promptTokens_, promptTokens) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline TokenUsages& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // totalTokens Field Functions 
      bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
      void deleteTotalTokens() { this->totalTokens_ = nullptr;};
      inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
      inline TokenUsages& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


    protected:
      shared_ptr<int64_t> completionReasoningTokens_ {};
      shared_ptr<int64_t> completionTokens_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<int64_t> explicitCachedTokens_ {};
      shared_ptr<int64_t> implicitCachedTokens_ {};
      shared_ptr<string> model_ {};
      shared_ptr<int64_t> promptTokens_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<int64_t> totalTokens_ {};
    };

    virtual bool empty() const override { return this->completionTokens_ == nullptr
        && this->explicitCachedTokens_ == nullptr && this->implicitCachedTokens_ == nullptr && this->promptTokens_ == nullptr && this->requestId_ == nullptr && this->tokenUsages_ == nullptr
        && this->totalTokens_ == nullptr; };
    // completionTokens Field Functions 
    bool hasCompletionTokens() const { return this->completionTokens_ != nullptr;};
    void deleteCompletionTokens() { this->completionTokens_ = nullptr;};
    inline int64_t getCompletionTokens() const { DARABONBA_PTR_GET_DEFAULT(completionTokens_, 0L) };
    inline ListLLMTokenUsageResponseBody& setCompletionTokens(int64_t completionTokens) { DARABONBA_PTR_SET_VALUE(completionTokens_, completionTokens) };


    // explicitCachedTokens Field Functions 
    bool hasExplicitCachedTokens() const { return this->explicitCachedTokens_ != nullptr;};
    void deleteExplicitCachedTokens() { this->explicitCachedTokens_ = nullptr;};
    inline int64_t getExplicitCachedTokens() const { DARABONBA_PTR_GET_DEFAULT(explicitCachedTokens_, 0L) };
    inline ListLLMTokenUsageResponseBody& setExplicitCachedTokens(int64_t explicitCachedTokens) { DARABONBA_PTR_SET_VALUE(explicitCachedTokens_, explicitCachedTokens) };


    // implicitCachedTokens Field Functions 
    bool hasImplicitCachedTokens() const { return this->implicitCachedTokens_ != nullptr;};
    void deleteImplicitCachedTokens() { this->implicitCachedTokens_ = nullptr;};
    inline int64_t getImplicitCachedTokens() const { DARABONBA_PTR_GET_DEFAULT(implicitCachedTokens_, 0L) };
    inline ListLLMTokenUsageResponseBody& setImplicitCachedTokens(int64_t implicitCachedTokens) { DARABONBA_PTR_SET_VALUE(implicitCachedTokens_, implicitCachedTokens) };


    // promptTokens Field Functions 
    bool hasPromptTokens() const { return this->promptTokens_ != nullptr;};
    void deletePromptTokens() { this->promptTokens_ = nullptr;};
    inline int64_t getPromptTokens() const { DARABONBA_PTR_GET_DEFAULT(promptTokens_, 0L) };
    inline ListLLMTokenUsageResponseBody& setPromptTokens(int64_t promptTokens) { DARABONBA_PTR_SET_VALUE(promptTokens_, promptTokens) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLLMTokenUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tokenUsages Field Functions 
    bool hasTokenUsages() const { return this->tokenUsages_ != nullptr;};
    void deleteTokenUsages() { this->tokenUsages_ = nullptr;};
    inline const vector<ListLLMTokenUsageResponseBody::TokenUsages> & getTokenUsages() const { DARABONBA_PTR_GET_CONST(tokenUsages_, vector<ListLLMTokenUsageResponseBody::TokenUsages>) };
    inline vector<ListLLMTokenUsageResponseBody::TokenUsages> getTokenUsages() { DARABONBA_PTR_GET(tokenUsages_, vector<ListLLMTokenUsageResponseBody::TokenUsages>) };
    inline ListLLMTokenUsageResponseBody& setTokenUsages(const vector<ListLLMTokenUsageResponseBody::TokenUsages> & tokenUsages) { DARABONBA_PTR_SET_VALUE(tokenUsages_, tokenUsages) };
    inline ListLLMTokenUsageResponseBody& setTokenUsages(vector<ListLLMTokenUsageResponseBody::TokenUsages> && tokenUsages) { DARABONBA_PTR_SET_RVALUE(tokenUsages_, tokenUsages) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
    inline ListLLMTokenUsageResponseBody& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


  protected:
    shared_ptr<int64_t> completionTokens_ {};
    shared_ptr<int64_t> explicitCachedTokens_ {};
    shared_ptr<int64_t> implicitCachedTokens_ {};
    shared_ptr<int64_t> promptTokens_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListLLMTokenUsageResponseBody::TokenUsages>> tokenUsages_ {};
    shared_ptr<int64_t> totalTokens_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
