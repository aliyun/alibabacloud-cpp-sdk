// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEFILECHUNK_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEFILECHUNK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/KnowledgeBaseFileChunkChunkAttachment.hpp>
#include <alibabacloud/models/KnowledgeBaseFileChunkMetaData.hpp>
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
    virtual bool empty() const override { return this->chunkAttachment_ == nullptr
        && return this->chunkContent_ == nullptr && return this->chunkEnd_ == nullptr && return this->chunkId_ == nullptr && return this->chunkSequence_ == nullptr && return this->chunkSize_ == nullptr
        && return this->chunkStart_ == nullptr && return this->chunkStatus_ == nullptr && return this->downloadUrl_ == nullptr && return this->metaData_ == nullptr && return this->score_ == nullptr
        && return this->thumbnailUrl_ == nullptr; };
    // chunkAttachment Field Functions 
    bool hasChunkAttachment() const { return this->chunkAttachment_ != nullptr;};
    void deleteChunkAttachment() { this->chunkAttachment_ = nullptr;};
    inline const vector<KnowledgeBaseFileChunkChunkAttachment> & chunkAttachment() const { DARABONBA_PTR_GET_CONST(chunkAttachment_, vector<KnowledgeBaseFileChunkChunkAttachment>) };
    inline vector<KnowledgeBaseFileChunkChunkAttachment> chunkAttachment() { DARABONBA_PTR_GET(chunkAttachment_, vector<KnowledgeBaseFileChunkChunkAttachment>) };
    inline KnowledgeBaseFileChunk& setChunkAttachment(const vector<KnowledgeBaseFileChunkChunkAttachment> & chunkAttachment) { DARABONBA_PTR_SET_VALUE(chunkAttachment_, chunkAttachment) };
    inline KnowledgeBaseFileChunk& setChunkAttachment(vector<KnowledgeBaseFileChunkChunkAttachment> && chunkAttachment) { DARABONBA_PTR_SET_RVALUE(chunkAttachment_, chunkAttachment) };


    // chunkContent Field Functions 
    bool hasChunkContent() const { return this->chunkContent_ != nullptr;};
    void deleteChunkContent() { this->chunkContent_ = nullptr;};
    inline string chunkContent() const { DARABONBA_PTR_GET_DEFAULT(chunkContent_, "") };
    inline KnowledgeBaseFileChunk& setChunkContent(string chunkContent) { DARABONBA_PTR_SET_VALUE(chunkContent_, chunkContent) };


    // chunkEnd Field Functions 
    bool hasChunkEnd() const { return this->chunkEnd_ != nullptr;};
    void deleteChunkEnd() { this->chunkEnd_ = nullptr;};
    inline int32_t chunkEnd() const { DARABONBA_PTR_GET_DEFAULT(chunkEnd_, 0) };
    inline KnowledgeBaseFileChunk& setChunkEnd(int32_t chunkEnd) { DARABONBA_PTR_SET_VALUE(chunkEnd_, chunkEnd) };


    // chunkId Field Functions 
    bool hasChunkId() const { return this->chunkId_ != nullptr;};
    void deleteChunkId() { this->chunkId_ = nullptr;};
    inline string chunkId() const { DARABONBA_PTR_GET_DEFAULT(chunkId_, "") };
    inline KnowledgeBaseFileChunk& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


    // chunkSequence Field Functions 
    bool hasChunkSequence() const { return this->chunkSequence_ != nullptr;};
    void deleteChunkSequence() { this->chunkSequence_ = nullptr;};
    inline int32_t chunkSequence() const { DARABONBA_PTR_GET_DEFAULT(chunkSequence_, 0) };
    inline KnowledgeBaseFileChunk& setChunkSequence(int32_t chunkSequence) { DARABONBA_PTR_SET_VALUE(chunkSequence_, chunkSequence) };


    // chunkSize Field Functions 
    bool hasChunkSize() const { return this->chunkSize_ != nullptr;};
    void deleteChunkSize() { this->chunkSize_ = nullptr;};
    inline int32_t chunkSize() const { DARABONBA_PTR_GET_DEFAULT(chunkSize_, 0) };
    inline KnowledgeBaseFileChunk& setChunkSize(int32_t chunkSize) { DARABONBA_PTR_SET_VALUE(chunkSize_, chunkSize) };


    // chunkStart Field Functions 
    bool hasChunkStart() const { return this->chunkStart_ != nullptr;};
    void deleteChunkStart() { this->chunkStart_ = nullptr;};
    inline int32_t chunkStart() const { DARABONBA_PTR_GET_DEFAULT(chunkStart_, 0) };
    inline KnowledgeBaseFileChunk& setChunkStart(int32_t chunkStart) { DARABONBA_PTR_SET_VALUE(chunkStart_, chunkStart) };


    // chunkStatus Field Functions 
    bool hasChunkStatus() const { return this->chunkStatus_ != nullptr;};
    void deleteChunkStatus() { this->chunkStatus_ = nullptr;};
    inline string chunkStatus() const { DARABONBA_PTR_GET_DEFAULT(chunkStatus_, "") };
    inline KnowledgeBaseFileChunk& setChunkStatus(string chunkStatus) { DARABONBA_PTR_SET_VALUE(chunkStatus_, chunkStatus) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline KnowledgeBaseFileChunk& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const KnowledgeBaseFileChunkMetaData & metaData() const { DARABONBA_PTR_GET_CONST(metaData_, KnowledgeBaseFileChunkMetaData) };
    inline KnowledgeBaseFileChunkMetaData metaData() { DARABONBA_PTR_GET(metaData_, KnowledgeBaseFileChunkMetaData) };
    inline KnowledgeBaseFileChunk& setMetaData(const KnowledgeBaseFileChunkMetaData & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline KnowledgeBaseFileChunk& setMetaData(KnowledgeBaseFileChunkMetaData && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline KnowledgeBaseFileChunk& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // thumbnailUrl Field Functions 
    bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
    void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
    inline string thumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
    inline KnowledgeBaseFileChunk& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


  protected:
    std::shared_ptr<vector<KnowledgeBaseFileChunkChunkAttachment>> chunkAttachment_ = nullptr;
    std::shared_ptr<string> chunkContent_ = nullptr;
    std::shared_ptr<int32_t> chunkEnd_ = nullptr;
    std::shared_ptr<string> chunkId_ = nullptr;
    std::shared_ptr<int32_t> chunkSequence_ = nullptr;
    std::shared_ptr<int32_t> chunkSize_ = nullptr;
    std::shared_ptr<int32_t> chunkStart_ = nullptr;
    std::shared_ptr<string> chunkStatus_ = nullptr;
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<KnowledgeBaseFileChunkMetaData> metaData_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<string> thumbnailUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
