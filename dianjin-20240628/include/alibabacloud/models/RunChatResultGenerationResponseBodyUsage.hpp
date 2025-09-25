// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONRESPONSEBODYUSAGE_HPP_
#define ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONRESPONSEBODYUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunChatResultGenerationResponseBodyUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunChatResultGenerationResponseBodyUsage& obj) { 
      DARABONBA_PTR_TO_JSON(imageCount, imageCount_);
      DARABONBA_PTR_TO_JSON(imageTokens, imageTokens_);
      DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
    };
    friend void from_json(const Darabonba::Json& j, RunChatResultGenerationResponseBodyUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(imageCount, imageCount_);
      DARABONBA_PTR_FROM_JSON(imageTokens, imageTokens_);
      DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
    };
    RunChatResultGenerationResponseBodyUsage() = default ;
    RunChatResultGenerationResponseBodyUsage(const RunChatResultGenerationResponseBodyUsage &) = default ;
    RunChatResultGenerationResponseBodyUsage(RunChatResultGenerationResponseBodyUsage &&) = default ;
    RunChatResultGenerationResponseBodyUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunChatResultGenerationResponseBodyUsage() = default ;
    RunChatResultGenerationResponseBodyUsage& operator=(const RunChatResultGenerationResponseBodyUsage &) = default ;
    RunChatResultGenerationResponseBodyUsage& operator=(RunChatResultGenerationResponseBodyUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageCount_ != nullptr
        && this->imageTokens_ != nullptr && this->inputTokens_ != nullptr && this->outputTokens_ != nullptr && this->totalTokens_ != nullptr; };
    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int32_t imageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
    inline RunChatResultGenerationResponseBodyUsage& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // imageTokens Field Functions 
    bool hasImageTokens() const { return this->imageTokens_ != nullptr;};
    void deleteImageTokens() { this->imageTokens_ = nullptr;};
    inline int32_t imageTokens() const { DARABONBA_PTR_GET_DEFAULT(imageTokens_, 0) };
    inline RunChatResultGenerationResponseBodyUsage& setImageTokens(int32_t imageTokens) { DARABONBA_PTR_SET_VALUE(imageTokens_, imageTokens) };


    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline int32_t inputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
    inline RunChatResultGenerationResponseBodyUsage& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline int32_t outputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
    inline RunChatResultGenerationResponseBodyUsage& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int32_t totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0) };
    inline RunChatResultGenerationResponseBodyUsage& setTotalTokens(int32_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


  protected:
    std::shared_ptr<int32_t> imageCount_ = nullptr;
    std::shared_ptr<int32_t> imageTokens_ = nullptr;
    std::shared_ptr<int32_t> inputTokens_ = nullptr;
    std::shared_ptr<int32_t> outputTokens_ = nullptr;
    std::shared_ptr<int32_t> totalTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
