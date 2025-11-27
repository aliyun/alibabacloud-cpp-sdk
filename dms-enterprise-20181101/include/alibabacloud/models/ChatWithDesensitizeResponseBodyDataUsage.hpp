// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHDESENSITIZERESPONSEBODYDATAUSAGE_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHDESENSITIZERESPONSEBODYDATAUSAGE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ChatWithDesensitizeResponseBodyDataUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithDesensitizeResponseBodyDataUsage& obj) { 
      DARABONBA_PTR_TO_JSON(CompletionTokens, completionTokens_);
      DARABONBA_PTR_TO_JSON(CompletionTokensDetails, completionTokensDetails_);
      DARABONBA_PTR_TO_JSON(PromptTokens, promptTokens_);
      DARABONBA_PTR_TO_JSON(PromptTokensDetails, promptTokensDetails_);
      DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithDesensitizeResponseBodyDataUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(CompletionTokens, completionTokens_);
      DARABONBA_PTR_FROM_JSON(CompletionTokensDetails, completionTokensDetails_);
      DARABONBA_PTR_FROM_JSON(PromptTokens, promptTokens_);
      DARABONBA_PTR_FROM_JSON(PromptTokensDetails, promptTokensDetails_);
      DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
    };
    ChatWithDesensitizeResponseBodyDataUsage() = default ;
    ChatWithDesensitizeResponseBodyDataUsage(const ChatWithDesensitizeResponseBodyDataUsage &) = default ;
    ChatWithDesensitizeResponseBodyDataUsage(ChatWithDesensitizeResponseBodyDataUsage &&) = default ;
    ChatWithDesensitizeResponseBodyDataUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithDesensitizeResponseBodyDataUsage() = default ;
    ChatWithDesensitizeResponseBodyDataUsage& operator=(const ChatWithDesensitizeResponseBodyDataUsage &) = default ;
    ChatWithDesensitizeResponseBodyDataUsage& operator=(ChatWithDesensitizeResponseBodyDataUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completionTokens_ == nullptr
        && return this->completionTokensDetails_ == nullptr && return this->promptTokens_ == nullptr && return this->promptTokensDetails_ == nullptr && return this->totalTokens_ == nullptr; };
    // completionTokens Field Functions 
    bool hasCompletionTokens() const { return this->completionTokens_ != nullptr;};
    void deleteCompletionTokens() { this->completionTokens_ = nullptr;};
    inline string completionTokens() const { DARABONBA_PTR_GET_DEFAULT(completionTokens_, "") };
    inline ChatWithDesensitizeResponseBodyDataUsage& setCompletionTokens(string completionTokens) { DARABONBA_PTR_SET_VALUE(completionTokens_, completionTokens) };


    // completionTokensDetails Field Functions 
    bool hasCompletionTokensDetails() const { return this->completionTokensDetails_ != nullptr;};
    void deleteCompletionTokensDetails() { this->completionTokensDetails_ = nullptr;};
    inline const map<string, string> & completionTokensDetails() const { DARABONBA_PTR_GET_CONST(completionTokensDetails_, map<string, string>) };
    inline map<string, string> completionTokensDetails() { DARABONBA_PTR_GET(completionTokensDetails_, map<string, string>) };
    inline ChatWithDesensitizeResponseBodyDataUsage& setCompletionTokensDetails(const map<string, string> & completionTokensDetails) { DARABONBA_PTR_SET_VALUE(completionTokensDetails_, completionTokensDetails) };
    inline ChatWithDesensitizeResponseBodyDataUsage& setCompletionTokensDetails(map<string, string> && completionTokensDetails) { DARABONBA_PTR_SET_RVALUE(completionTokensDetails_, completionTokensDetails) };


    // promptTokens Field Functions 
    bool hasPromptTokens() const { return this->promptTokens_ != nullptr;};
    void deletePromptTokens() { this->promptTokens_ = nullptr;};
    inline string promptTokens() const { DARABONBA_PTR_GET_DEFAULT(promptTokens_, "") };
    inline ChatWithDesensitizeResponseBodyDataUsage& setPromptTokens(string promptTokens) { DARABONBA_PTR_SET_VALUE(promptTokens_, promptTokens) };


    // promptTokensDetails Field Functions 
    bool hasPromptTokensDetails() const { return this->promptTokensDetails_ != nullptr;};
    void deletePromptTokensDetails() { this->promptTokensDetails_ = nullptr;};
    inline const map<string, string> & promptTokensDetails() const { DARABONBA_PTR_GET_CONST(promptTokensDetails_, map<string, string>) };
    inline map<string, string> promptTokensDetails() { DARABONBA_PTR_GET(promptTokensDetails_, map<string, string>) };
    inline ChatWithDesensitizeResponseBodyDataUsage& setPromptTokensDetails(const map<string, string> & promptTokensDetails) { DARABONBA_PTR_SET_VALUE(promptTokensDetails_, promptTokensDetails) };
    inline ChatWithDesensitizeResponseBodyDataUsage& setPromptTokensDetails(map<string, string> && promptTokensDetails) { DARABONBA_PTR_SET_RVALUE(promptTokensDetails_, promptTokensDetails) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline string totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, "") };
    inline ChatWithDesensitizeResponseBodyDataUsage& setTotalTokens(string totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


  protected:
    std::shared_ptr<string> completionTokens_ = nullptr;
    std::shared_ptr<map<string, string>> completionTokensDetails_ = nullptr;
    std::shared_ptr<string> promptTokens_ = nullptr;
    std::shared_ptr<map<string, string>> promptTokensDetails_ = nullptr;
    std::shared_ptr<string> totalTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
