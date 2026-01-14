// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASECHUNKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASECHUNKSRESPONSEBODY_HPP_
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
  class ListKnowledgeBaseChunksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBaseChunksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseChunks, knowledgeBaseChunks_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBaseChunksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseChunks, knowledgeBaseChunks_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListKnowledgeBaseChunksResponseBody() = default ;
    ListKnowledgeBaseChunksResponseBody(const ListKnowledgeBaseChunksResponseBody &) = default ;
    ListKnowledgeBaseChunksResponseBody(ListKnowledgeBaseChunksResponseBody &&) = default ;
    ListKnowledgeBaseChunksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeBaseChunksResponseBody() = default ;
    ListKnowledgeBaseChunksResponseBody& operator=(const ListKnowledgeBaseChunksResponseBody &) = default ;
    ListKnowledgeBaseChunksResponseBody& operator=(ListKnowledgeBaseChunksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KnowledgeBaseChunks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KnowledgeBaseChunks& obj) { 
        DARABONBA_PTR_TO_JSON(ChunkAttachment, chunkAttachment_);
        DARABONBA_PTR_TO_JSON(ChunkContent, chunkContent_);
        DARABONBA_PTR_TO_JSON(ChunkEnd, chunkEnd_);
        DARABONBA_PTR_TO_JSON(ChunkSequence, chunkSequence_);
        DARABONBA_PTR_TO_JSON(ChunkSize, chunkSize_);
        DARABONBA_PTR_TO_JSON(ChunkStart, chunkStart_);
        DARABONBA_PTR_TO_JSON(ChunkStatus, chunkStatus_);
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(KnowledgeBaseChunkId, knowledgeBaseChunkId_);
        DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_TO_JSON(MetaData, metaData_);
        DARABONBA_PTR_TO_JSON(ThumbnailUrl, thumbnailUrl_);
        DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      };
      friend void from_json(const Darabonba::Json& j, KnowledgeBaseChunks& obj) { 
        DARABONBA_PTR_FROM_JSON(ChunkAttachment, chunkAttachment_);
        DARABONBA_PTR_FROM_JSON(ChunkContent, chunkContent_);
        DARABONBA_PTR_FROM_JSON(ChunkEnd, chunkEnd_);
        DARABONBA_PTR_FROM_JSON(ChunkSequence, chunkSequence_);
        DARABONBA_PTR_FROM_JSON(ChunkSize, chunkSize_);
        DARABONBA_PTR_FROM_JSON(ChunkStart, chunkStart_);
        DARABONBA_PTR_FROM_JSON(ChunkStatus, chunkStatus_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseChunkId, knowledgeBaseChunkId_);
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
        DARABONBA_PTR_FROM_JSON(ThumbnailUrl, thumbnailUrl_);
        DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
      };
      KnowledgeBaseChunks() = default ;
      KnowledgeBaseChunks(const KnowledgeBaseChunks &) = default ;
      KnowledgeBaseChunks(KnowledgeBaseChunks &&) = default ;
      KnowledgeBaseChunks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KnowledgeBaseChunks() = default ;
      KnowledgeBaseChunks& operator=(const KnowledgeBaseChunks &) = default ;
      KnowledgeBaseChunks& operator=(KnowledgeBaseChunks &&) = default ;
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
        // 文件元数据ID
        shared_ptr<string> fileMetaId_ {};
        // 文件名
        shared_ptr<string> fileName_ {};
        // 文件地址
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
        // 下载地址
        shared_ptr<string> downloadUrl_ {};
        // 占位符ID
        shared_ptr<string> placeholderId_ {};
        // 类型
        shared_ptr<string> type_ {};
        // 路径
        shared_ptr<string> uri_ {};
      };

      virtual bool empty() const override { return this->chunkAttachment_ == nullptr
        && this->chunkContent_ == nullptr && this->chunkEnd_ == nullptr && this->chunkSequence_ == nullptr && this->chunkSize_ == nullptr && this->chunkStart_ == nullptr
        && this->chunkStatus_ == nullptr && this->downloadUrl_ == nullptr && this->knowledgeBaseChunkId_ == nullptr && this->knowledgeBaseId_ == nullptr && this->metaData_ == nullptr
        && this->thumbnailUrl_ == nullptr && this->versionName_ == nullptr; };
      // chunkAttachment Field Functions 
      bool hasChunkAttachment() const { return this->chunkAttachment_ != nullptr;};
      void deleteChunkAttachment() { this->chunkAttachment_ = nullptr;};
      inline const vector<KnowledgeBaseChunks::ChunkAttachment> & getChunkAttachment() const { DARABONBA_PTR_GET_CONST(chunkAttachment_, vector<KnowledgeBaseChunks::ChunkAttachment>) };
      inline vector<KnowledgeBaseChunks::ChunkAttachment> getChunkAttachment() { DARABONBA_PTR_GET(chunkAttachment_, vector<KnowledgeBaseChunks::ChunkAttachment>) };
      inline KnowledgeBaseChunks& setChunkAttachment(const vector<KnowledgeBaseChunks::ChunkAttachment> & chunkAttachment) { DARABONBA_PTR_SET_VALUE(chunkAttachment_, chunkAttachment) };
      inline KnowledgeBaseChunks& setChunkAttachment(vector<KnowledgeBaseChunks::ChunkAttachment> && chunkAttachment) { DARABONBA_PTR_SET_RVALUE(chunkAttachment_, chunkAttachment) };


      // chunkContent Field Functions 
      bool hasChunkContent() const { return this->chunkContent_ != nullptr;};
      void deleteChunkContent() { this->chunkContent_ = nullptr;};
      inline string getChunkContent() const { DARABONBA_PTR_GET_DEFAULT(chunkContent_, "") };
      inline KnowledgeBaseChunks& setChunkContent(string chunkContent) { DARABONBA_PTR_SET_VALUE(chunkContent_, chunkContent) };


      // chunkEnd Field Functions 
      bool hasChunkEnd() const { return this->chunkEnd_ != nullptr;};
      void deleteChunkEnd() { this->chunkEnd_ = nullptr;};
      inline int32_t getChunkEnd() const { DARABONBA_PTR_GET_DEFAULT(chunkEnd_, 0) };
      inline KnowledgeBaseChunks& setChunkEnd(int32_t chunkEnd) { DARABONBA_PTR_SET_VALUE(chunkEnd_, chunkEnd) };


      // chunkSequence Field Functions 
      bool hasChunkSequence() const { return this->chunkSequence_ != nullptr;};
      void deleteChunkSequence() { this->chunkSequence_ = nullptr;};
      inline int32_t getChunkSequence() const { DARABONBA_PTR_GET_DEFAULT(chunkSequence_, 0) };
      inline KnowledgeBaseChunks& setChunkSequence(int32_t chunkSequence) { DARABONBA_PTR_SET_VALUE(chunkSequence_, chunkSequence) };


      // chunkSize Field Functions 
      bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
      void deleteChunkSize() { this->chunkSize_ = nullptr;};
      inline int32_t getChunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
      inline KnowledgeBaseChunks& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


      // chunkStart Field Functions 
      bool hasChunkStart() const { return this->chunkStart_ != nullptr;};
      void deleteChunkStart() { this->chunkStart_ = nullptr;};
      inline int32_t getChunkStart() const { DARABONBA_PTR_GET_DEFAULT(chunkStart_, 0) };
      inline KnowledgeBaseChunks& setChunkStart(int32_t chunkStart) { DARABONBA_PTR_SET_VALUE(chunkStart_, chunkStart) };


      // chunkStatus Field Functions 
      bool hasChunkStatus() const { return this->chunkStatus_ != nullptr;};
      void deleteChunkStatus() { this->chunkStatus_ = nullptr;};
      inline string getChunkStatus() const { DARABONBA_PTR_GET_DEFAULT(chunkStatus_, "") };
      inline KnowledgeBaseChunks& setChunkStatus(string chunkStatus) { DARABONBA_PTR_SET_VALUE(chunkStatus_, chunkStatus) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline KnowledgeBaseChunks& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // knowledgeBaseChunkId Field Functions 
      bool hasKnowledgeBaseChunkId() const { return this->knowledgeBaseChunkId_ != nullptr;};
      void deleteKnowledgeBaseChunkId() { this->knowledgeBaseChunkId_ = nullptr;};
      inline string getKnowledgeBaseChunkId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseChunkId_, "") };
      inline KnowledgeBaseChunks& setKnowledgeBaseChunkId(string knowledgeBaseChunkId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseChunkId_, knowledgeBaseChunkId) };


      // knowledgeBaseId Field Functions 
      bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
      void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
      inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
      inline KnowledgeBaseChunks& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


      // metaData Field Functions 
      bool hasMetaData() const { return this->metaData_ != nullptr;};
      void deleteMetaData() { this->metaData_ = nullptr;};
      inline const KnowledgeBaseChunks::MetaData & getMetaData() const { DARABONBA_PTR_GET_CONST(metaData_, KnowledgeBaseChunks::MetaData) };
      inline KnowledgeBaseChunks::MetaData getMetaData() { DARABONBA_PTR_GET(metaData_, KnowledgeBaseChunks::MetaData) };
      inline KnowledgeBaseChunks& setMetaData(const KnowledgeBaseChunks::MetaData & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
      inline KnowledgeBaseChunks& setMetaData(KnowledgeBaseChunks::MetaData && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


      // thumbnailUrl Field Functions 
      bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
      void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
      inline string getThumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
      inline KnowledgeBaseChunks& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline KnowledgeBaseChunks& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    protected:
      // 切片附属信息
      shared_ptr<vector<KnowledgeBaseChunks::ChunkAttachment>> chunkAttachment_ {};
      // 切片内容
      shared_ptr<string> chunkContent_ {};
      // 切片结束位置
      shared_ptr<int32_t> chunkEnd_ {};
      // 切片顺序
      shared_ptr<int32_t> chunkSequence_ {};
      // 切片大小
      shared_ptr<int32_t> chunkSize_ {};
      // 切片起始位置
      shared_ptr<int32_t> chunkStart_ {};
      // 切片状态
      shared_ptr<string> chunkStatus_ {};
      // 切片下载地址
      shared_ptr<string> downloadUrl_ {};
      // 切片ID
      shared_ptr<string> knowledgeBaseChunkId_ {};
      // 知识库ID
      shared_ptr<string> knowledgeBaseId_ {};
      // 原始文件信息
      shared_ptr<KnowledgeBaseChunks::MetaData> metaData_ {};
      // 切片缩略图
      shared_ptr<string> thumbnailUrl_ {};
      // 知识库版本
      shared_ptr<string> versionName_ {};
    };

    virtual bool empty() const override { return this->knowledgeBaseChunks_ == nullptr
        && this->maxResults_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // knowledgeBaseChunks Field Functions 
    bool hasKnowledgeBaseChunks() const { return this->knowledgeBaseChunks_ != nullptr;};
    void deleteKnowledgeBaseChunks() { this->knowledgeBaseChunks_ = nullptr;};
    inline const vector<ListKnowledgeBaseChunksResponseBody::KnowledgeBaseChunks> & getKnowledgeBaseChunks() const { DARABONBA_PTR_GET_CONST(knowledgeBaseChunks_, vector<ListKnowledgeBaseChunksResponseBody::KnowledgeBaseChunks>) };
    inline vector<ListKnowledgeBaseChunksResponseBody::KnowledgeBaseChunks> getKnowledgeBaseChunks() { DARABONBA_PTR_GET(knowledgeBaseChunks_, vector<ListKnowledgeBaseChunksResponseBody::KnowledgeBaseChunks>) };
    inline ListKnowledgeBaseChunksResponseBody& setKnowledgeBaseChunks(const vector<ListKnowledgeBaseChunksResponseBody::KnowledgeBaseChunks> & knowledgeBaseChunks) { DARABONBA_PTR_SET_VALUE(knowledgeBaseChunks_, knowledgeBaseChunks) };
    inline ListKnowledgeBaseChunksResponseBody& setKnowledgeBaseChunks(vector<ListKnowledgeBaseChunksResponseBody::KnowledgeBaseChunks> && knowledgeBaseChunks) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseChunks_, knowledgeBaseChunks) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKnowledgeBaseChunksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKnowledgeBaseChunksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListKnowledgeBaseChunksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // 切片列表
    shared_ptr<vector<ListKnowledgeBaseChunksResponseBody::KnowledgeBaseChunks>> knowledgeBaseChunks_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
