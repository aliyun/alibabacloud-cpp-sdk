// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEAUTOUPDATECONFIGEMBEDDINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEAUTOUPDATECONFIGEMBEDDINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBaseAutoUpdateConfigEmbeddingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseAutoUpdateConfigEmbeddingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BatchSize, batchSize_);
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseAutoUpdateConfigEmbeddingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchSize, batchSize_);
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
    };
    KnowledgeBaseAutoUpdateConfigEmbeddingConfig() = default ;
    KnowledgeBaseAutoUpdateConfigEmbeddingConfig(const KnowledgeBaseAutoUpdateConfigEmbeddingConfig &) = default ;
    KnowledgeBaseAutoUpdateConfigEmbeddingConfig(KnowledgeBaseAutoUpdateConfigEmbeddingConfig &&) = default ;
    KnowledgeBaseAutoUpdateConfigEmbeddingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseAutoUpdateConfigEmbeddingConfig() = default ;
    KnowledgeBaseAutoUpdateConfigEmbeddingConfig& operator=(const KnowledgeBaseAutoUpdateConfigEmbeddingConfig &) = default ;
    KnowledgeBaseAutoUpdateConfigEmbeddingConfig& operator=(KnowledgeBaseAutoUpdateConfigEmbeddingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchSize_ == nullptr
        && return this->concurrency_ == nullptr; };
    // batchSize Field Functions 
    bool hasBatchSize() const { return this->batchSize_ != nullptr;};
    void deleteBatchSize() { this->batchSize_ = nullptr;};
    inline int32_t batchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
    inline KnowledgeBaseAutoUpdateConfigEmbeddingConfig& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int32_t concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
    inline KnowledgeBaseAutoUpdateConfigEmbeddingConfig& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


  protected:
    // Embedding分批大小
    std::shared_ptr<int32_t> batchSize_ = nullptr;
    // Embedding并发数
    std::shared_ptr<int32_t> concurrency_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
