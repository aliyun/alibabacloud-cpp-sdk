// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUESTCHUNKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUESTCHUNKCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class CreateKnowledgeBaseRequestChunkConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseRequestChunkConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkDuration, chunkDuration_);
      DARABONBA_PTR_TO_JSON(ChunkOverlap, chunkOverlap_);
      DARABONBA_PTR_TO_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_TO_JSON(ChunkStrategy, chunkStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseRequestChunkConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkDuration, chunkDuration_);
      DARABONBA_PTR_FROM_JSON(ChunkOverlap, chunkOverlap_);
      DARABONBA_PTR_FROM_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_FROM_JSON(ChunkStrategy, chunkStrategy_);
    };
    CreateKnowledgeBaseRequestChunkConfig() = default ;
    CreateKnowledgeBaseRequestChunkConfig(const CreateKnowledgeBaseRequestChunkConfig &) = default ;
    CreateKnowledgeBaseRequestChunkConfig(CreateKnowledgeBaseRequestChunkConfig &&) = default ;
    CreateKnowledgeBaseRequestChunkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseRequestChunkConfig() = default ;
    CreateKnowledgeBaseRequestChunkConfig& operator=(const CreateKnowledgeBaseRequestChunkConfig &) = default ;
    CreateKnowledgeBaseRequestChunkConfig& operator=(CreateKnowledgeBaseRequestChunkConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkDuration_ == nullptr
        && return this->chunkOverlap_ == nullptr && return this->chunkSize_ == nullptr && return this->chunkStrategy_ == nullptr; };
    // chunkDuration Field Functions 
    bool hasChunkDuration() const { return this->chunkDuration_ != nullptr;};
    void deleteChunkDuration() { this->chunkDuration_ = nullptr;};
    inline int32_t chunkDuration() const { DARABONBA_PTR_GET_DEFAULT(chunkDuration_, 0) };
    inline CreateKnowledgeBaseRequestChunkConfig& setChunkDuration(int32_t chunkDuration) { DARABONBA_PTR_SET_VALUE(chunkDuration_, chunkDuration) };


    // chunkOverlap Field Functions 
    bool hasChunkOverlap() const { return this->chunkOverlap_ != nullptr;};
    void deleteChunkOverlap() { this->chunkOverlap_ = nullptr;};
    inline int32_t chunkOverlap() const { DARABONBA_PTR_GET_DEFAULT(chunkOverlap_, 0) };
    inline CreateKnowledgeBaseRequestChunkConfig& setChunkOverlap(int32_t chunkOverlap) { DARABONBA_PTR_SET_VALUE(chunkOverlap_, chunkOverlap) };


    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline int32_t chunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
    inline CreateKnowledgeBaseRequestChunkConfig& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // chunkStrategy Field Functions 
    bool hasChunkStrategy() const { return this->chunkStrategy_ != nullptr;};
    void deleteChunkStrategy() { this->chunkStrategy_ = nullptr;};
    inline string chunkStrategy() const { DARABONBA_PTR_GET_DEFAULT(chunkStrategy_, "") };
    inline CreateKnowledgeBaseRequestChunkConfig& setChunkStrategy(string chunkStrategy) { DARABONBA_PTR_SET_VALUE(chunkStrategy_, chunkStrategy) };


  protected:
    // 分块时长
    std::shared_ptr<int32_t> chunkDuration_ = nullptr;
    // 分块重叠大小
    std::shared_ptr<int32_t> chunkOverlap_ = nullptr;
    // 分块大小
    std::shared_ptr<int32_t> chunkSize_ = nullptr;
    // 分块策略
    std::shared_ptr<string> chunkStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
