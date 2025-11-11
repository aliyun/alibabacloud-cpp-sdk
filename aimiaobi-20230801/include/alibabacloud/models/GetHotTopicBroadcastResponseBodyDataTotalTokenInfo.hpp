// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODYDATATOTALTOKENINFO_HPP_
#define ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODYDATATOTALTOKENINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetHotTopicBroadcastResponseBodyDataTotalTokenInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotTopicBroadcastResponseBodyDataTotalTokenInfo& obj) { 
      DARABONBA_PTR_TO_JSON(HotTopicCount, hotTopicCount_);
      DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
      DARABONBA_PTR_TO_JSON(WordCount, wordCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotTopicBroadcastResponseBodyDataTotalTokenInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(HotTopicCount, hotTopicCount_);
      DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
      DARABONBA_PTR_FROM_JSON(WordCount, wordCount_);
    };
    GetHotTopicBroadcastResponseBodyDataTotalTokenInfo() = default ;
    GetHotTopicBroadcastResponseBodyDataTotalTokenInfo(const GetHotTopicBroadcastResponseBodyDataTotalTokenInfo &) = default ;
    GetHotTopicBroadcastResponseBodyDataTotalTokenInfo(GetHotTopicBroadcastResponseBodyDataTotalTokenInfo &&) = default ;
    GetHotTopicBroadcastResponseBodyDataTotalTokenInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotTopicBroadcastResponseBodyDataTotalTokenInfo() = default ;
    GetHotTopicBroadcastResponseBodyDataTotalTokenInfo& operator=(const GetHotTopicBroadcastResponseBodyDataTotalTokenInfo &) = default ;
    GetHotTopicBroadcastResponseBodyDataTotalTokenInfo& operator=(GetHotTopicBroadcastResponseBodyDataTotalTokenInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotTopicCount_ == nullptr
        && return this->inputTokens_ == nullptr && return this->outputTokens_ == nullptr && return this->wordCount_ == nullptr; };
    // hotTopicCount Field Functions 
    bool hasHotTopicCount() const { return this->hotTopicCount_ != nullptr;};
    void deleteHotTopicCount() { this->hotTopicCount_ = nullptr;};
    inline int32_t hotTopicCount() const { DARABONBA_PTR_GET_DEFAULT(hotTopicCount_, 0) };
    inline GetHotTopicBroadcastResponseBodyDataTotalTokenInfo& setHotTopicCount(int32_t hotTopicCount) { DARABONBA_PTR_SET_VALUE(hotTopicCount_, hotTopicCount) };


    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline int32_t inputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
    inline GetHotTopicBroadcastResponseBodyDataTotalTokenInfo& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline int32_t outputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
    inline GetHotTopicBroadcastResponseBodyDataTotalTokenInfo& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


    // wordCount Field Functions 
    bool hasWordCount() const { return this->wordCount_ != nullptr;};
    void deleteWordCount() { this->wordCount_ = nullptr;};
    inline int32_t wordCount() const { DARABONBA_PTR_GET_DEFAULT(wordCount_, 0) };
    inline GetHotTopicBroadcastResponseBodyDataTotalTokenInfo& setWordCount(int32_t wordCount) { DARABONBA_PTR_SET_VALUE(wordCount_, wordCount) };


  protected:
    std::shared_ptr<int32_t> hotTopicCount_ = nullptr;
    std::shared_ptr<int32_t> inputTokens_ = nullptr;
    std::shared_ptr<int32_t> outputTokens_ = nullptr;
    std::shared_ptr<int32_t> wordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
