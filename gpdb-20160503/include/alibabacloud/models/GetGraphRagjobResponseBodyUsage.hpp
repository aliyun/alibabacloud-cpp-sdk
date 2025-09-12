// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRAPHRAGJOBRESPONSEBODYUSAGE_HPP_
#define ALIBABACLOUD_MODELS_GETGRAPHRAGJOBRESPONSEBODYUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetGraphRAGJobResponseBodyUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGraphRAGJobResponseBodyUsage& obj) { 
      DARABONBA_PTR_TO_JSON(EmbeddingTokens, embeddingTokens_);
      DARABONBA_PTR_TO_JSON(LLMInputTokens, LLMInputTokens_);
      DARABONBA_PTR_TO_JSON(LLMOutputTokens, LLMOutputTokens_);
    };
    friend void from_json(const Darabonba::Json& j, GetGraphRAGJobResponseBodyUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(EmbeddingTokens, embeddingTokens_);
      DARABONBA_PTR_FROM_JSON(LLMInputTokens, LLMInputTokens_);
      DARABONBA_PTR_FROM_JSON(LLMOutputTokens, LLMOutputTokens_);
    };
    GetGraphRAGJobResponseBodyUsage() = default ;
    GetGraphRAGJobResponseBodyUsage(const GetGraphRAGJobResponseBodyUsage &) = default ;
    GetGraphRAGJobResponseBodyUsage(GetGraphRAGJobResponseBodyUsage &&) = default ;
    GetGraphRAGJobResponseBodyUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGraphRAGJobResponseBodyUsage() = default ;
    GetGraphRAGJobResponseBodyUsage& operator=(const GetGraphRAGJobResponseBodyUsage &) = default ;
    GetGraphRAGJobResponseBodyUsage& operator=(GetGraphRAGJobResponseBodyUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->embeddingTokens_ != nullptr
        && this->LLMInputTokens_ != nullptr && this->LLMOutputTokens_ != nullptr; };
    // embeddingTokens Field Functions 
    bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
    void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
    inline int32_t embeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, 0) };
    inline GetGraphRAGJobResponseBodyUsage& setEmbeddingTokens(int32_t embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


    // LLMInputTokens Field Functions 
    bool hasLLMInputTokens() const { return this->LLMInputTokens_ != nullptr;};
    void deleteLLMInputTokens() { this->LLMInputTokens_ = nullptr;};
    inline int32_t LLMInputTokens() const { DARABONBA_PTR_GET_DEFAULT(LLMInputTokens_, 0) };
    inline GetGraphRAGJobResponseBodyUsage& setLLMInputTokens(int32_t LLMInputTokens) { DARABONBA_PTR_SET_VALUE(LLMInputTokens_, LLMInputTokens) };


    // LLMOutputTokens Field Functions 
    bool hasLLMOutputTokens() const { return this->LLMOutputTokens_ != nullptr;};
    void deleteLLMOutputTokens() { this->LLMOutputTokens_ = nullptr;};
    inline int32_t LLMOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(LLMOutputTokens_, 0) };
    inline GetGraphRAGJobResponseBodyUsage& setLLMOutputTokens(int32_t LLMOutputTokens) { DARABONBA_PTR_SET_VALUE(LLMOutputTokens_, LLMOutputTokens) };


  protected:
    std::shared_ptr<int32_t> embeddingTokens_ = nullptr;
    std::shared_ptr<int32_t> LLMInputTokens_ = nullptr;
    std::shared_ptr<int32_t> LLMOutputTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
