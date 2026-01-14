// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEMETA_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEMETA_HPP_
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
  class KnowledgeBaseMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseMeta& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkAttachment, chunkAttachment_);
      DARABONBA_PTR_TO_JSON(ChunkContent, chunkContent_);
      DARABONBA_PTR_TO_JSON(ChunkEnd, chunkEnd_);
      DARABONBA_PTR_TO_JSON(ChunkId, chunkId_);
      DARABONBA_PTR_TO_JSON(ChunkSequence, chunkSequence_);
      DARABONBA_PTR_TO_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_TO_JSON(ChunkStart, chunkStart_);
      DARABONBA_PTR_TO_JSON(ChunkStatus, chunkStatus_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(FileContentType, fileContentType_);
      DARABONBA_PTR_TO_JSON(FileCreateTime, fileCreateTime_);
      DARABONBA_PTR_TO_JSON(FileMetaData, fileMetaData_);
      DARABONBA_PTR_TO_JSON(FileMetaId, fileMetaId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(FileStatus, fileStatus_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileUpdateTime, fileUpdateTime_);
      DARABONBA_PTR_TO_JSON(FileUri, fileUri_);
      DARABONBA_PTR_TO_JSON(MetaData, metaData_);
      DARABONBA_PTR_TO_JSON(ThumbnailUrl, thumbnailUrl_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkAttachment, chunkAttachment_);
      DARABONBA_PTR_FROM_JSON(ChunkContent, chunkContent_);
      DARABONBA_PTR_FROM_JSON(ChunkEnd, chunkEnd_);
      DARABONBA_PTR_FROM_JSON(ChunkId, chunkId_);
      DARABONBA_PTR_FROM_JSON(ChunkSequence, chunkSequence_);
      DARABONBA_PTR_FROM_JSON(ChunkSize, chunkSize_);
      DARABONBA_PTR_FROM_JSON(ChunkStart, chunkStart_);
      DARABONBA_PTR_FROM_JSON(ChunkStatus, chunkStatus_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(FileContentType, fileContentType_);
      DARABONBA_PTR_FROM_JSON(FileCreateTime, fileCreateTime_);
      DARABONBA_PTR_FROM_JSON(FileMetaData, fileMetaData_);
      DARABONBA_PTR_FROM_JSON(FileMetaId, fileMetaId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(FileStatus, fileStatus_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileUpdateTime, fileUpdateTime_);
      DARABONBA_PTR_FROM_JSON(FileUri, fileUri_);
      DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
      DARABONBA_PTR_FROM_JSON(ThumbnailUrl, thumbnailUrl_);
    };
    KnowledgeBaseMeta() = default ;
    KnowledgeBaseMeta(const KnowledgeBaseMeta &) = default ;
    KnowledgeBaseMeta(KnowledgeBaseMeta &&) = default ;
    KnowledgeBaseMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseMeta() = default ;
    KnowledgeBaseMeta& operator=(const KnowledgeBaseMeta &) = default ;
    KnowledgeBaseMeta& operator=(KnowledgeBaseMeta &&) = default ;
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
        && this->chunkStart_ == nullptr && this->chunkStatus_ == nullptr && this->downloadUrl_ == nullptr && this->fileContentType_ == nullptr && this->fileCreateTime_ == nullptr
        && this->fileMetaData_ == nullptr && this->fileMetaId_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->fileStatus_ == nullptr
        && this->fileType_ == nullptr && this->fileUpdateTime_ == nullptr && this->fileUri_ == nullptr && this->metaData_ == nullptr && this->thumbnailUrl_ == nullptr; };
    // chunkAttachment Field Functions 
    bool hasChunkAttachment() const { return this->chunkAttachment_ != nullptr;};
    void deleteChunkAttachment() { this->chunkAttachment_ = nullptr;};
    inline const vector<KnowledgeBaseMeta::ChunkAttachment> & getChunkAttachment() const { DARABONBA_PTR_GET_CONST(chunkAttachment_, vector<KnowledgeBaseMeta::ChunkAttachment>) };
    inline vector<KnowledgeBaseMeta::ChunkAttachment> getChunkAttachment() { DARABONBA_PTR_GET(chunkAttachment_, vector<KnowledgeBaseMeta::ChunkAttachment>) };
    inline KnowledgeBaseMeta& setChunkAttachment(const vector<KnowledgeBaseMeta::ChunkAttachment> & chunkAttachment) { DARABONBA_PTR_SET_VALUE(chunkAttachment_, chunkAttachment) };
    inline KnowledgeBaseMeta& setChunkAttachment(vector<KnowledgeBaseMeta::ChunkAttachment> && chunkAttachment) { DARABONBA_PTR_SET_RVALUE(chunkAttachment_, chunkAttachment) };


    // chunkContent Field Functions 
    bool hasChunkContent() const { return this->chunkContent_ != nullptr;};
    void deleteChunkContent() { this->chunkContent_ = nullptr;};
    inline string getChunkContent() const { DARABONBA_PTR_GET_DEFAULT(chunkContent_, "") };
    inline KnowledgeBaseMeta& setChunkContent(string chunkContent) { DARABONBA_PTR_SET_VALUE(chunkContent_, chunkContent) };


    // chunkEnd Field Functions 
    bool hasChunkEnd() const { return this->chunkEnd_ != nullptr;};
    void deleteChunkEnd() { this->chunkEnd_ = nullptr;};
    inline int32_t getChunkEnd() const { DARABONBA_PTR_GET_DEFAULT(chunkEnd_, 0) };
    inline KnowledgeBaseMeta& setChunkEnd(int32_t chunkEnd) { DARABONBA_PTR_SET_VALUE(chunkEnd_, chunkEnd) };


    // chunkId Field Functions 
    bool hasChunkId() const { return this->chunkId_ != nullptr;};
    void deleteChunkId() { this->chunkId_ = nullptr;};
    inline string getChunkId() const { DARABONBA_PTR_GET_DEFAULT(chunkId_, "") };
    inline KnowledgeBaseMeta& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


    // chunkSequence Field Functions 
    bool hasChunkSequence() const { return this->chunkSequence_ != nullptr;};
    void deleteChunkSequence() { this->chunkSequence_ = nullptr;};
    inline int32_t getChunkSequence() const { DARABONBA_PTR_GET_DEFAULT(chunkSequence_, 0) };
    inline KnowledgeBaseMeta& setChunkSequence(int32_t chunkSequence) { DARABONBA_PTR_SET_VALUE(chunkSequence_, chunkSequence) };


    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline int32_t getChunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
    inline KnowledgeBaseMeta& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // chunkStart Field Functions 
    bool hasChunkStart() const { return this->chunkStart_ != nullptr;};
    void deleteChunkStart() { this->chunkStart_ = nullptr;};
    inline int32_t getChunkStart() const { DARABONBA_PTR_GET_DEFAULT(chunkStart_, 0) };
    inline KnowledgeBaseMeta& setChunkStart(int32_t chunkStart) { DARABONBA_PTR_SET_VALUE(chunkStart_, chunkStart) };


    // chunkStatus Field Functions 
    bool hasChunkStatus() const { return this->chunkStatus_ != nullptr;};
    void deleteChunkStatus() { this->chunkStatus_ = nullptr;};
    inline string getChunkStatus() const { DARABONBA_PTR_GET_DEFAULT(chunkStatus_, "") };
    inline KnowledgeBaseMeta& setChunkStatus(string chunkStatus) { DARABONBA_PTR_SET_VALUE(chunkStatus_, chunkStatus) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline KnowledgeBaseMeta& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // fileContentType Field Functions 
    bool hasFileContentType() const { return this->fileContentType_ != nullptr;};
    void deleteFileContentType() { this->fileContentType_ = nullptr;};
    inline string getFileContentType() const { DARABONBA_PTR_GET_DEFAULT(fileContentType_, "") };
    inline KnowledgeBaseMeta& setFileContentType(string fileContentType) { DARABONBA_PTR_SET_VALUE(fileContentType_, fileContentType) };


    // fileCreateTime Field Functions 
    bool hasFileCreateTime() const { return this->fileCreateTime_ != nullptr;};
    void deleteFileCreateTime() { this->fileCreateTime_ = nullptr;};
    inline string getFileCreateTime() const { DARABONBA_PTR_GET_DEFAULT(fileCreateTime_, "") };
    inline KnowledgeBaseMeta& setFileCreateTime(string fileCreateTime) { DARABONBA_PTR_SET_VALUE(fileCreateTime_, fileCreateTime) };


    // fileMetaData Field Functions 
    bool hasFileMetaData() const { return this->fileMetaData_ != nullptr;};
    void deleteFileMetaData() { this->fileMetaData_ = nullptr;};
    inline string getFileMetaData() const { DARABONBA_PTR_GET_DEFAULT(fileMetaData_, "") };
    inline KnowledgeBaseMeta& setFileMetaData(string fileMetaData) { DARABONBA_PTR_SET_VALUE(fileMetaData_, fileMetaData) };


    // fileMetaId Field Functions 
    bool hasFileMetaId() const { return this->fileMetaId_ != nullptr;};
    void deleteFileMetaId() { this->fileMetaId_ = nullptr;};
    inline string getFileMetaId() const { DARABONBA_PTR_GET_DEFAULT(fileMetaId_, "") };
    inline KnowledgeBaseMeta& setFileMetaId(string fileMetaId) { DARABONBA_PTR_SET_VALUE(fileMetaId_, fileMetaId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline KnowledgeBaseMeta& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int32_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0) };
    inline KnowledgeBaseMeta& setFileSize(int32_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // fileStatus Field Functions 
    bool hasFileStatus() const { return this->fileStatus_ != nullptr;};
    void deleteFileStatus() { this->fileStatus_ = nullptr;};
    inline string getFileStatus() const { DARABONBA_PTR_GET_DEFAULT(fileStatus_, "") };
    inline KnowledgeBaseMeta& setFileStatus(string fileStatus) { DARABONBA_PTR_SET_VALUE(fileStatus_, fileStatus) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline KnowledgeBaseMeta& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileUpdateTime Field Functions 
    bool hasFileUpdateTime() const { return this->fileUpdateTime_ != nullptr;};
    void deleteFileUpdateTime() { this->fileUpdateTime_ = nullptr;};
    inline string getFileUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(fileUpdateTime_, "") };
    inline KnowledgeBaseMeta& setFileUpdateTime(string fileUpdateTime) { DARABONBA_PTR_SET_VALUE(fileUpdateTime_, fileUpdateTime) };


    // fileUri Field Functions 
    bool hasFileUri() const { return this->fileUri_ != nullptr;};
    void deleteFileUri() { this->fileUri_ = nullptr;};
    inline string getFileUri() const { DARABONBA_PTR_GET_DEFAULT(fileUri_, "") };
    inline KnowledgeBaseMeta& setFileUri(string fileUri) { DARABONBA_PTR_SET_VALUE(fileUri_, fileUri) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const KnowledgeBaseMeta::MetaData & getMetaData() const { DARABONBA_PTR_GET_CONST(metaData_, KnowledgeBaseMeta::MetaData) };
    inline KnowledgeBaseMeta::MetaData getMetaData() { DARABONBA_PTR_GET(metaData_, KnowledgeBaseMeta::MetaData) };
    inline KnowledgeBaseMeta& setMetaData(const KnowledgeBaseMeta::MetaData & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline KnowledgeBaseMeta& setMetaData(KnowledgeBaseMeta::MetaData && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


    // thumbnailUrl Field Functions 
    bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
    void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
    inline string getThumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
    inline KnowledgeBaseMeta& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


  protected:
    shared_ptr<vector<KnowledgeBaseMeta::ChunkAttachment>> chunkAttachment_ {};
    shared_ptr<string> chunkContent_ {};
    shared_ptr<int32_t> chunkEnd_ {};
    shared_ptr<string> chunkId_ {};
    shared_ptr<int32_t> chunkSequence_ {};
    shared_ptr<int32_t> chunkSize_ {};
    shared_ptr<int32_t> chunkStart_ {};
    shared_ptr<string> chunkStatus_ {};
    shared_ptr<string> downloadUrl_ {};
    shared_ptr<string> fileContentType_ {};
    shared_ptr<string> fileCreateTime_ {};
    shared_ptr<string> fileMetaData_ {};
    shared_ptr<string> fileMetaId_ {};
    shared_ptr<string> fileName_ {};
    shared_ptr<int32_t> fileSize_ {};
    shared_ptr<string> fileStatus_ {};
    shared_ptr<string> fileType_ {};
    shared_ptr<string> fileUpdateTime_ {};
    shared_ptr<string> fileUri_ {};
    shared_ptr<KnowledgeBaseMeta::MetaData> metaData_ {};
    shared_ptr<string> thumbnailUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
