// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOCUMENTCHUNKREQUESTCHUNKS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOCUMENTCHUNKREQUESTCHUNKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class UpdateDocumentChunkRequestChunks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDocumentChunkRequestChunks& obj) { 
      DARABONBA_PTR_TO_JSON(chunkId, chunkId_);
      DARABONBA_PTR_TO_JSON(chunkText, chunkText_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDocumentChunkRequestChunks& obj) { 
      DARABONBA_PTR_FROM_JSON(chunkId, chunkId_);
      DARABONBA_PTR_FROM_JSON(chunkText, chunkText_);
    };
    UpdateDocumentChunkRequestChunks() = default ;
    UpdateDocumentChunkRequestChunks(const UpdateDocumentChunkRequestChunks &) = default ;
    UpdateDocumentChunkRequestChunks(UpdateDocumentChunkRequestChunks &&) = default ;
    UpdateDocumentChunkRequestChunks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDocumentChunkRequestChunks() = default ;
    UpdateDocumentChunkRequestChunks& operator=(const UpdateDocumentChunkRequestChunks &) = default ;
    UpdateDocumentChunkRequestChunks& operator=(UpdateDocumentChunkRequestChunks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkId_ == nullptr
        && return this->chunkText_ == nullptr; };
    // chunkId Field Functions 
    bool hasChunkId() const { return this->chunkId_ != nullptr;};
    void deleteChunkId() { this->chunkId_ = nullptr;};
    inline string chunkId() const { DARABONBA_PTR_GET_DEFAULT(chunkId_, "") };
    inline UpdateDocumentChunkRequestChunks& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


    // chunkText Field Functions 
    bool hasChunkText() const { return this->chunkText_ != nullptr;};
    void deleteChunkText() { this->chunkText_ = nullptr;};
    inline string chunkText() const { DARABONBA_PTR_GET_DEFAULT(chunkText_, "") };
    inline UpdateDocumentChunkRequestChunks& setChunkText(string chunkText) { DARABONBA_PTR_SET_VALUE(chunkText_, chunkText) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> chunkId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> chunkText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
