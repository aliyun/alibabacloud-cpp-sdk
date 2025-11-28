// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADDOCUMENTJOBRESPONSEBODYUSAGE_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADDOCUMENTJOBRESPONSEBODYUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetUploadDocumentJobResponseBodyUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadDocumentJobResponseBodyUsage& obj) { 
      DARABONBA_PTR_TO_JSON(EmbeddingEntries, embeddingEntries_);
      DARABONBA_PTR_TO_JSON(EmbeddingTokens, embeddingTokens_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadDocumentJobResponseBodyUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(EmbeddingEntries, embeddingEntries_);
      DARABONBA_PTR_FROM_JSON(EmbeddingTokens, embeddingTokens_);
    };
    GetUploadDocumentJobResponseBodyUsage() = default ;
    GetUploadDocumentJobResponseBodyUsage(const GetUploadDocumentJobResponseBodyUsage &) = default ;
    GetUploadDocumentJobResponseBodyUsage(GetUploadDocumentJobResponseBodyUsage &&) = default ;
    GetUploadDocumentJobResponseBodyUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadDocumentJobResponseBodyUsage() = default ;
    GetUploadDocumentJobResponseBodyUsage& operator=(const GetUploadDocumentJobResponseBodyUsage &) = default ;
    GetUploadDocumentJobResponseBodyUsage& operator=(GetUploadDocumentJobResponseBodyUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->embeddingEntries_ == nullptr
        && return this->embeddingTokens_ == nullptr; };
    // embeddingEntries Field Functions 
    bool hasEmbeddingEntries() const { return this->embeddingEntries_ != nullptr;};
    void deleteEmbeddingEntries() { this->embeddingEntries_ = nullptr;};
    inline int32_t embeddingEntries() const { DARABONBA_PTR_GET_DEFAULT(embeddingEntries_, 0) };
    inline GetUploadDocumentJobResponseBodyUsage& setEmbeddingEntries(int32_t embeddingEntries) { DARABONBA_PTR_SET_VALUE(embeddingEntries_, embeddingEntries) };


    // embeddingTokens Field Functions 
    bool hasEmbeddingTokens() const { return this->embeddingTokens_ != nullptr;};
    void deleteEmbeddingTokens() { this->embeddingTokens_ = nullptr;};
    inline int32_t embeddingTokens() const { DARABONBA_PTR_GET_DEFAULT(embeddingTokens_, 0) };
    inline GetUploadDocumentJobResponseBodyUsage& setEmbeddingTokens(int32_t embeddingTokens) { DARABONBA_PTR_SET_VALUE(embeddingTokens_, embeddingTokens) };


  protected:
    // The number of entries during vectorization.
    std::shared_ptr<int32_t> embeddingEntries_ = nullptr;
    // The number of tokens that are consumed during vectorization.
    // 
    // > A token is the minimum unit for splitting text. A token can be a word, phrase, punctuation, or character.
    std::shared_ptr<int32_t> embeddingTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
