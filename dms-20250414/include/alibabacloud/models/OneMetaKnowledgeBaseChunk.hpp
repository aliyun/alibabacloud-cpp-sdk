// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONEMETAKNOWLEDGEBASECHUNK_HPP_
#define ALIBABACLOUD_MODELS_ONEMETAKNOWLEDGEBASECHUNK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class OneMetaKnowledgeBaseChunk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OneMetaKnowledgeBaseChunk& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkMtime, chunkMtime_);
      DARABONBA_PTR_TO_JSON(ChunkTitle, chunkTitle_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DocName, docName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, OneMetaKnowledgeBaseChunk& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkMtime, chunkMtime_);
      DARABONBA_PTR_FROM_JSON(ChunkTitle, chunkTitle_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DocName, docName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    OneMetaKnowledgeBaseChunk() = default ;
    OneMetaKnowledgeBaseChunk(const OneMetaKnowledgeBaseChunk &) = default ;
    OneMetaKnowledgeBaseChunk(OneMetaKnowledgeBaseChunk &&) = default ;
    OneMetaKnowledgeBaseChunk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OneMetaKnowledgeBaseChunk() = default ;
    OneMetaKnowledgeBaseChunk& operator=(const OneMetaKnowledgeBaseChunk &) = default ;
    OneMetaKnowledgeBaseChunk& operator=(OneMetaKnowledgeBaseChunk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkMtime_ == nullptr
        && this->chunkTitle_ == nullptr && this->content_ == nullptr && this->docName_ == nullptr && this->id_ == nullptr; };
    // chunkMtime Field Functions 
    bool hasChunkMtime() const { return this->chunkMtime_ != nullptr;};
    void deleteChunkMtime() { this->chunkMtime_ = nullptr;};
    inline string getChunkMtime() const { DARABONBA_PTR_GET_DEFAULT(chunkMtime_, "") };
    inline OneMetaKnowledgeBaseChunk& setChunkMtime(string chunkMtime) { DARABONBA_PTR_SET_VALUE(chunkMtime_, chunkMtime) };


    // chunkTitle Field Functions 
    bool hasChunkTitle() const { return this->chunkTitle_ != nullptr;};
    void deleteChunkTitle() { this->chunkTitle_ = nullptr;};
    inline string getChunkTitle() const { DARABONBA_PTR_GET_DEFAULT(chunkTitle_, "") };
    inline OneMetaKnowledgeBaseChunk& setChunkTitle(string chunkTitle) { DARABONBA_PTR_SET_VALUE(chunkTitle_, chunkTitle) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline OneMetaKnowledgeBaseChunk& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline OneMetaKnowledgeBaseChunk& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline OneMetaKnowledgeBaseChunk& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    shared_ptr<string> chunkMtime_ {};
    shared_ptr<string> chunkTitle_ {};
    shared_ptr<string> content_ {};
    shared_ptr<string> docName_ {};
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
