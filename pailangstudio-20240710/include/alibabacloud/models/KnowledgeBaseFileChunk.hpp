// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEFILECHUNK_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEFILECHUNK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBaseFileChunk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseFileChunk& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkAttachment, chunkAttachment_);
      DARABONBA_PTR_TO_JSON(ChunkContent, chunkContent_);
      DARABONBA_PTR_TO_JSON(ChunkEnd, chunkEnd_);
      DARABONBA_PTR_TO_JSON(ChunkId, chunkId_);
      DARABONBA_PTR_TO_JSON(ChunkSequence, chunkSequence_);
      DARABONBA_PTR_TO_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_TO_JSON(ChunkStart, chunkStart_);
      DARABONBA_PTR_TO_JSON(ChunkStatus, chunkStatus_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(MetaData, metaData_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(ThumbnailUrl, thumbnailUrl_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseFileChunk& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkAttachment, chunkAttachment_);
      DARABONBA_PTR_FROM_JSON(ChunkContent, chunkContent_);
      DARABONBA_PTR_FROM_JSON(ChunkEnd, chunkEnd_);
      DARABONBA_PTR_FROM_JSON(ChunkId, chunkId_);
      DARABONBA_PTR_FROM_JSON(ChunkSequence, chunkSequence_);
      DARABONBA_PTR_FROM_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_FROM_JSON(ChunkStart, chunkStart_);
      DARABONBA_PTR_FROM_JSON(ChunkStatus, chunkStatus_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(ThumbnailUrl, thumbnailUrl_);
    };
    KnowledgeBaseFileChunk() = default ;
    KnowledgeBaseFileChunk(const KnowledgeBaseFileChunk &) = default ;
    KnowledgeBaseFileChunk(KnowledgeBaseFileChunk &&) = default ;
    KnowledgeBaseFileChunk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseFileChunk() = default ;
    KnowledgeBaseFileChunk& operator=(const KnowledgeBaseFileChunk &) = default ;
    KnowledgeBaseFileChunk& operator=(KnowledgeBaseFileChunk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetaData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetaData& obj) { 
        DARABONBA_PTR_TO_JSON(FileMetaId, fileMetaId_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileUri, fileUri_);
      };
      friend void from_json(const Darabonba::Json& j, MetaData& obj) { 
        DARABONBA_PTR_FROM_JSON(FileMetaId, fileMetaId_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileUri, fileUri_);
      };
      MetaData() = default ;
      MetaData(const MetaData &) = default ;
      MetaData(MetaData &&) = default ;
      MetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetaData() = default ;
      MetaData& operator=(const MetaData &) = default ;
      MetaData& operator=(MetaData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileMetaId_ == nullptr
        && this->fileName_ == nullptr && this->fileUri_ == nullptr; };
      // fileMetaId Field Functions 
      bool hasFileMetaId() const { return this->fileMetaId_ != nullptr;};
      void deleteFileMetaId() { this->fileMetaId_ = nullptr;};
      inline string getFileMetaId() const { DARABONBA_PTR_GET_DEFAULT(fileMetaId_, "") };
      inline MetaData& setFileMetaId(string fileMetaId) { DARABONBA_PTR_SET_VALUE(fileMetaId_, fileMetaId) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline MetaData& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileUri Field Functions 
      bool hasFileUri() const { return this->fileUri_ != nullptr;};
      void deleteFileUri() { this->fileUri_ = nullptr;};
      inline string getFileUri() const { DARABONBA_PTR_GET_DEFAULT(fileUri_, "") };
      inline MetaData& setFileUri(string fileUri) { DARABONBA_PTR_SET_VALUE(fileUri_, fileUri) };


    protected:
      shared_ptr<string> fileMetaId_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> fileUri_ {};
    };

    class ChunkAttachment : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChunkAttachment& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(PlaceholderId, placeholderId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
      };
      friend void from_json(const Darabonba::Json& j, ChunkAttachment& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(PlaceholderId, placeholderId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
      };
      ChunkAttachment() = default ;
      ChunkAttachment(const ChunkAttachment &) = default ;
      ChunkAttachment(ChunkAttachment &&) = default ;
      ChunkAttachment(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChunkAttachment() = default ;
      ChunkAttachment& operator=(const ChunkAttachment &) = default ;
      ChunkAttachment& operator=(ChunkAttachment &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->placeholderId_ == nullptr && this->type_ == nullptr && this->uri_ == nullptr; };
      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline ChunkAttachment& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // placeholderId Field Functions 
      bool hasPlaceholderId() const { return this->placeholderId_ != nullptr;};
      void deletePlaceholderId() { this->placeholderId_ = nullptr;};
      inline string getPlaceholderId() const { DARABONBA_PTR_GET_DEFAULT(placeholderId_, "") };
      inline ChunkAttachment& setPlaceholderId(string placeholderId) { DARABONBA_PTR_SET_VALUE(placeholderId_, placeholderId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ChunkAttachment& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline ChunkAttachment& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    protected:
      shared_ptr<string> downloadUrl_ {};
      shared_ptr<string> placeholderId_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> uri_ {};
    };

    virtual bool empty() const override { return this->chunkAttachment_ == nullptr
        && this->chunkContent_ == nullptr && this->chunkEnd_ == nullptr && this->chunkId_ == nullptr && this->chunkSequence_ == nullptr && this->chunkSize_ == nullptr
        && this->chunkStart_ == nullptr && this->chunkStatus_ == nullptr && this->downloadUrl_ == nullptr && this->metaData_ == nullptr && this->score_ == nullptr
        && this->thumbnailUrl_ == nullptr; };
    // chunkAttachment Field Functions 
    bool hasChunkAttachment() const { return this->chunkAttachment_ != nullptr;};
    void deleteChunkAttachment() { this->chunkAttachment_ = nullptr;};
    inline const vector<KnowledgeBaseFileChunk::ChunkAttachment> & getChunkAttachment() const { DARABONBA_PTR_GET_CONST(chunkAttachment_, vector<KnowledgeBaseFileChunk::ChunkAttachment>) };
    inline vector<KnowledgeBaseFileChunk::ChunkAttachment> getChunkAttachment() { DARABONBA_PTR_GET(chunkAttachment_, vector<KnowledgeBaseFileChunk::ChunkAttachment>) };
    inline KnowledgeBaseFileChunk& setChunkAttachment(const vector<KnowledgeBaseFileChunk::ChunkAttachment> & chunkAttachment) { DARABONBA_PTR_SET_VALUE(chunkAttachment_, chunkAttachment) };
    inline KnowledgeBaseFileChunk& setChunkAttachment(vector<KnowledgeBaseFileChunk::ChunkAttachment> && chunkAttachment) { DARABONBA_PTR_SET_RVALUE(chunkAttachment_, chunkAttachment) };


    // chunkContent Field Functions 
    bool hasChunkContent() const { return this->chunkContent_ != nullptr;};
    void deleteChunkContent() { this->chunkContent_ = nullptr;};
    inline string getChunkContent() const { DARABONBA_PTR_GET_DEFAULT(chunkContent_, "") };
    inline KnowledgeBaseFileChunk& setChunkContent(string chunkContent) { DARABONBA_PTR_SET_VALUE(chunkContent_, chunkContent) };


    // chunkEnd Field Functions 
    bool hasChunkEnd() const { return this->chunkEnd_ != nullptr;};
    void deleteChunkEnd() { this->chunkEnd_ = nullptr;};
    inline int32_t getChunkEnd() const { DARABONBA_PTR_GET_DEFAULT(chunkEnd_, 0) };
    inline KnowledgeBaseFileChunk& setChunkEnd(int32_t chunkEnd) { DARABONBA_PTR_SET_VALUE(chunkEnd_, chunkEnd) };


    // chunkId Field Functions 
    bool hasChunkId() const { return this->chunkId_ != nullptr;};
    void deleteChunkId() { this->chunkId_ = nullptr;};
    inline string getChunkId() const { DARABONBA_PTR_GET_DEFAULT(chunkId_, "") };
    inline KnowledgeBaseFileChunk& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


    // chunkSequence Field Functions 
    bool hasChunkSequence() const { return this->chunkSequence_ != nullptr;};
    void deleteChunkSequence() { this->chunkSequence_ = nullptr;};
    inline int32_t getChunkSequence() const { DARABONBA_PTR_GET_DEFAULT(chunkSequence_, 0) };
    inline KnowledgeBaseFileChunk& setChunkSequence(int32_t chunkSequence) { DARABONBA_PTR_SET_VALUE(chunkSequence_, chunkSequence) };


    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline int32_t getChunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
    inline KnowledgeBaseFileChunk& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // chunkStart Field Functions 
    bool hasChunkStart() const { return this->chunkStart_ != nullptr;};
    void deleteChunkStart() { this->chunkStart_ = nullptr;};
    inline int32_t getChunkStart() const { DARABONBA_PTR_GET_DEFAULT(chunkStart_, 0) };
    inline KnowledgeBaseFileChunk& setChunkStart(int32_t chunkStart) { DARABONBA_PTR_SET_VALUE(chunkStart_, chunkStart) };


    // chunkStatus Field Functions 
    bool hasChunkStatus() const { return this->chunkStatus_ != nullptr;};
    void deleteChunkStatus() { this->chunkStatus_ = nullptr;};
    inline string getChunkStatus() const { DARABONBA_PTR_GET_DEFAULT(chunkStatus_, "") };
    inline KnowledgeBaseFileChunk& setChunkStatus(string chunkStatus) { DARABONBA_PTR_SET_VALUE(chunkStatus_, chunkStatus) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline KnowledgeBaseFileChunk& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const KnowledgeBaseFileChunk::MetaData & getMetaData() const { DARABONBA_PTR_GET_CONST(metaData_, KnowledgeBaseFileChunk::MetaData) };
    inline KnowledgeBaseFileChunk::MetaData getMetaData() { DARABONBA_PTR_GET(metaData_, KnowledgeBaseFileChunk::MetaData) };
    inline KnowledgeBaseFileChunk& setMetaData(const KnowledgeBaseFileChunk::MetaData & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline KnowledgeBaseFileChunk& setMetaData(KnowledgeBaseFileChunk::MetaData && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline KnowledgeBaseFileChunk& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // thumbnailUrl Field Functions 
    bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
    void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
    inline string getThumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
    inline KnowledgeBaseFileChunk& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


  protected:
    shared_ptr<vector<KnowledgeBaseFileChunk::ChunkAttachment>> chunkAttachment_ {};
    shared_ptr<string> chunkContent_ {};
    shared_ptr<int32_t> chunkEnd_ {};
    shared_ptr<string> chunkId_ {};
    shared_ptr<int32_t> chunkSequence_ {};
    shared_ptr<int32_t> chunkSize_ {};
    shared_ptr<int32_t> chunkStart_ {};
    shared_ptr<string> chunkStatus_ {};
    shared_ptr<string> downloadUrl_ {};
    shared_ptr<KnowledgeBaseFileChunk::MetaData> metaData_ {};
    shared_ptr<float> score_ {};
    shared_ptr<string> thumbnailUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
