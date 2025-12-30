// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPREDEFINEDDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPREDEFINEDDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreatePredefinedDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePredefinedDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chunks, chunks_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_ANY_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePredefinedDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chunks, chunks_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_ANY_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    CreatePredefinedDocumentRequest() = default ;
    CreatePredefinedDocumentRequest(const CreatePredefinedDocumentRequest &) = default ;
    CreatePredefinedDocumentRequest(CreatePredefinedDocumentRequest &&) = default ;
    CreatePredefinedDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePredefinedDocumentRequest() = default ;
    CreatePredefinedDocumentRequest& operator=(const CreatePredefinedDocumentRequest &) = default ;
    CreatePredefinedDocumentRequest& operator=(CreatePredefinedDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Chunks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Chunks& obj) { 
        DARABONBA_ANY_TO_JSON(chunkMeta, chunkMeta_);
        DARABONBA_PTR_TO_JSON(chunkOrder, chunkOrder_);
        DARABONBA_PTR_TO_JSON(chunkText, chunkText_);
        DARABONBA_PTR_TO_JSON(chunkType, chunkType_);
      };
      friend void from_json(const Darabonba::Json& j, Chunks& obj) { 
        DARABONBA_ANY_FROM_JSON(chunkMeta, chunkMeta_);
        DARABONBA_PTR_FROM_JSON(chunkOrder, chunkOrder_);
        DARABONBA_PTR_FROM_JSON(chunkText, chunkText_);
        DARABONBA_PTR_FROM_JSON(chunkType, chunkType_);
      };
      Chunks() = default ;
      Chunks(const Chunks &) = default ;
      Chunks(Chunks &&) = default ;
      Chunks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Chunks() = default ;
      Chunks& operator=(const Chunks &) = default ;
      Chunks& operator=(Chunks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chunkMeta_ == nullptr
        && this->chunkOrder_ == nullptr && this->chunkText_ == nullptr && this->chunkType_ == nullptr; };
      // chunkMeta Field Functions 
      bool hasChunkMeta() const { return this->chunkMeta_ != nullptr;};
      void deleteChunkMeta() { this->chunkMeta_ = nullptr;};
      inline       const Darabonba::Json & getChunkMeta() const { DARABONBA_GET(chunkMeta_) };
      Darabonba::Json & getChunkMeta() { DARABONBA_GET(chunkMeta_) };
      inline Chunks& setChunkMeta(const Darabonba::Json & chunkMeta) { DARABONBA_SET_VALUE(chunkMeta_, chunkMeta) };
      inline Chunks& setChunkMeta(Darabonba::Json && chunkMeta) { DARABONBA_SET_RVALUE(chunkMeta_, chunkMeta) };


      // chunkOrder Field Functions 
      bool hasChunkOrder() const { return this->chunkOrder_ != nullptr;};
      void deleteChunkOrder() { this->chunkOrder_ = nullptr;};
      inline int32_t getChunkOrder() const { DARABONBA_PTR_GET_DEFAULT(chunkOrder_, 0) };
      inline Chunks& setChunkOrder(int32_t chunkOrder) { DARABONBA_PTR_SET_VALUE(chunkOrder_, chunkOrder) };


      // chunkText Field Functions 
      bool hasChunkText() const { return this->chunkText_ != nullptr;};
      void deleteChunkText() { this->chunkText_ = nullptr;};
      inline string getChunkText() const { DARABONBA_PTR_GET_DEFAULT(chunkText_, "") };
      inline Chunks& setChunkText(string chunkText) { DARABONBA_PTR_SET_VALUE(chunkText_, chunkText) };


      // chunkType Field Functions 
      bool hasChunkType() const { return this->chunkType_ != nullptr;};
      void deleteChunkType() { this->chunkType_ = nullptr;};
      inline string getChunkType() const { DARABONBA_PTR_GET_DEFAULT(chunkType_, "") };
      inline Chunks& setChunkType(string chunkType) { DARABONBA_PTR_SET_VALUE(chunkType_, chunkType) };


    protected:
      Darabonba::Json chunkMeta_ {};
      shared_ptr<int32_t> chunkOrder_ {};
      shared_ptr<string> chunkText_ {};
      shared_ptr<string> chunkType_ {};
    };

    virtual bool empty() const override { return this->chunks_ == nullptr
        && this->libraryId_ == nullptr && this->metadata_ == nullptr && this->title_ == nullptr; };
    // chunks Field Functions 
    bool hasChunks() const { return this->chunks_ != nullptr;};
    void deleteChunks() { this->chunks_ = nullptr;};
    inline const vector<CreatePredefinedDocumentRequest::Chunks> & getChunks() const { DARABONBA_PTR_GET_CONST(chunks_, vector<CreatePredefinedDocumentRequest::Chunks>) };
    inline vector<CreatePredefinedDocumentRequest::Chunks> getChunks() { DARABONBA_PTR_GET(chunks_, vector<CreatePredefinedDocumentRequest::Chunks>) };
    inline CreatePredefinedDocumentRequest& setChunks(const vector<CreatePredefinedDocumentRequest::Chunks> & chunks) { DARABONBA_PTR_SET_VALUE(chunks_, chunks) };
    inline CreatePredefinedDocumentRequest& setChunks(vector<CreatePredefinedDocumentRequest::Chunks> && chunks) { DARABONBA_PTR_SET_RVALUE(chunks_, chunks) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline CreatePredefinedDocumentRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline CreatePredefinedDocumentRequest& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline CreatePredefinedDocumentRequest& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreatePredefinedDocumentRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<vector<CreatePredefinedDocumentRequest::Chunks>> chunks_ {};
    shared_ptr<string> libraryId_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
