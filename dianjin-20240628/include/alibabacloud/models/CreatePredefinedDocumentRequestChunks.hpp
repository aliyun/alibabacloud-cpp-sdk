// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPREDEFINEDDOCUMENTREQUESTCHUNKS_HPP_
#define ALIBABACLOUD_MODELS_CREATEPREDEFINEDDOCUMENTREQUESTCHUNKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreatePredefinedDocumentRequestChunks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePredefinedDocumentRequestChunks& obj) { 
      DARABONBA_ANY_TO_JSON(chunkMeta, chunkMeta_);
      DARABONBA_PTR_TO_JSON(chunkOrder, chunkOrder_);
      DARABONBA_PTR_TO_JSON(chunkText, chunkText_);
      DARABONBA_PTR_TO_JSON(chunkType, chunkType_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePredefinedDocumentRequestChunks& obj) { 
      DARABONBA_ANY_FROM_JSON(chunkMeta, chunkMeta_);
      DARABONBA_PTR_FROM_JSON(chunkOrder, chunkOrder_);
      DARABONBA_PTR_FROM_JSON(chunkText, chunkText_);
      DARABONBA_PTR_FROM_JSON(chunkType, chunkType_);
    };
    CreatePredefinedDocumentRequestChunks() = default ;
    CreatePredefinedDocumentRequestChunks(const CreatePredefinedDocumentRequestChunks &) = default ;
    CreatePredefinedDocumentRequestChunks(CreatePredefinedDocumentRequestChunks &&) = default ;
    CreatePredefinedDocumentRequestChunks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePredefinedDocumentRequestChunks() = default ;
    CreatePredefinedDocumentRequestChunks& operator=(const CreatePredefinedDocumentRequestChunks &) = default ;
    CreatePredefinedDocumentRequestChunks& operator=(CreatePredefinedDocumentRequestChunks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chunkMeta_ != nullptr
        && this->chunkOrder_ != nullptr && this->chunkText_ != nullptr && this->chunkType_ != nullptr; };
    // chunkMeta Field Functions 
    bool hasChunkMeta() const { return this->chunkMeta_ != nullptr;};
    void deleteChunkMeta() { this->chunkMeta_ = nullptr;};
    inline     const Darabonba::Json & chunkMeta() const { DARABONBA_GET(chunkMeta_) };
    Darabonba::Json & chunkMeta() { DARABONBA_GET(chunkMeta_) };
    inline CreatePredefinedDocumentRequestChunks& setChunkMeta(const Darabonba::Json & chunkMeta) { DARABONBA_SET_VALUE(chunkMeta_, chunkMeta) };
    inline CreatePredefinedDocumentRequestChunks& setChunkMeta(Darabonba::Json & chunkMeta) { DARABONBA_SET_RVALUE(chunkMeta_, chunkMeta) };


    // chunkOrder Field Functions 
    bool hasChunkOrder() const { return this->chunkOrder_ != nullptr;};
    void deleteChunkOrder() { this->chunkOrder_ = nullptr;};
    inline int32_t chunkOrder() const { DARABONBA_PTR_GET_DEFAULT(chunkOrder_, 0) };
    inline CreatePredefinedDocumentRequestChunks& setChunkOrder(int32_t chunkOrder) { DARABONBA_PTR_SET_VALUE(chunkOrder_, chunkOrder) };


    // chunkText Field Functions 
    bool hasChunkText() const { return this->chunkText_ != nullptr;};
    void deleteChunkText() { this->chunkText_ = nullptr;};
    inline string chunkText() const { DARABONBA_PTR_GET_DEFAULT(chunkText_, "") };
    inline CreatePredefinedDocumentRequestChunks& setChunkText(string chunkText) { DARABONBA_PTR_SET_VALUE(chunkText_, chunkText) };


    // chunkType Field Functions 
    bool hasChunkType() const { return this->chunkType_ != nullptr;};
    void deleteChunkType() { this->chunkType_ = nullptr;};
    inline string chunkType() const { DARABONBA_PTR_GET_DEFAULT(chunkType_, "") };
    inline CreatePredefinedDocumentRequestChunks& setChunkType(string chunkType) { DARABONBA_PTR_SET_VALUE(chunkType_, chunkType) };


  protected:
    Darabonba::Json chunkMeta_ = nullptr;
    std::shared_ptr<int32_t> chunkOrder_ = nullptr;
    std::shared_ptr<string> chunkText_ = nullptr;
    std::shared_ptr<string> chunkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
