// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETFILEMETA_HPP_
#define ALIBABACLOUD_MODELS_DATASETFILEMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DatasetFileMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasetFileMeta& obj) { 
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(DatasetFileMetaId, datasetFileMetaId_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(FileCreateTime, fileCreateTime_);
      DARABONBA_PTR_TO_JSON(FileFingerPrint, fileFingerPrint_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileUpdateTime, fileUpdateTime_);
      DARABONBA_PTR_TO_JSON(MetaAttributes, metaAttributes_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(SemanticIndexJobId, semanticIndexJobId_);
      DARABONBA_PTR_TO_JSON(SemanticIndexUpdateTime, semanticIndexUpdateTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ThumbnailUrl, thumbnailUrl_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, DatasetFileMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(DatasetFileMetaId, datasetFileMetaId_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(FileCreateTime, fileCreateTime_);
      DARABONBA_PTR_FROM_JSON(FileFingerPrint, fileFingerPrint_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileUpdateTime, fileUpdateTime_);
      DARABONBA_PTR_FROM_JSON(MetaAttributes, metaAttributes_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(SemanticIndexJobId, semanticIndexJobId_);
      DARABONBA_PTR_FROM_JSON(SemanticIndexUpdateTime, semanticIndexUpdateTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ThumbnailUrl, thumbnailUrl_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    DatasetFileMeta() = default ;
    DatasetFileMeta(const DatasetFileMeta &) = default ;
    DatasetFileMeta(DatasetFileMeta &&) = default ;
    DatasetFileMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasetFileMeta() = default ;
    DatasetFileMeta& operator=(const DatasetFileMeta &) = default ;
    DatasetFileMeta& operator=(DatasetFileMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && return this->dataSize_ == nullptr && return this->datasetFileMetaId_ == nullptr && return this->downloadUrl_ == nullptr && return this->fileCreateTime_ == nullptr && return this->fileFingerPrint_ == nullptr
        && return this->fileName_ == nullptr && return this->fileType_ == nullptr && return this->fileUpdateTime_ == nullptr && return this->metaAttributes_ == nullptr && return this->score_ == nullptr
        && return this->semanticIndexJobId_ == nullptr && return this->semanticIndexUpdateTime_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->thumbnailUrl_ == nullptr
        && return this->uri_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline DatasetFileMeta& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline DatasetFileMeta& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // datasetFileMetaId Field Functions 
    bool hasDatasetFileMetaId() const { return this->datasetFileMetaId_ != nullptr;};
    void deleteDatasetFileMetaId() { this->datasetFileMetaId_ = nullptr;};
    inline string datasetFileMetaId() const { DARABONBA_PTR_GET_DEFAULT(datasetFileMetaId_, "") };
    inline DatasetFileMeta& setDatasetFileMetaId(string datasetFileMetaId) { DARABONBA_PTR_SET_VALUE(datasetFileMetaId_, datasetFileMetaId) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DatasetFileMeta& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // fileCreateTime Field Functions 
    bool hasFileCreateTime() const { return this->fileCreateTime_ != nullptr;};
    void deleteFileCreateTime() { this->fileCreateTime_ = nullptr;};
    inline string fileCreateTime() const { DARABONBA_PTR_GET_DEFAULT(fileCreateTime_, "") };
    inline DatasetFileMeta& setFileCreateTime(string fileCreateTime) { DARABONBA_PTR_SET_VALUE(fileCreateTime_, fileCreateTime) };


    // fileFingerPrint Field Functions 
    bool hasFileFingerPrint() const { return this->fileFingerPrint_ != nullptr;};
    void deleteFileFingerPrint() { this->fileFingerPrint_ = nullptr;};
    inline string fileFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(fileFingerPrint_, "") };
    inline DatasetFileMeta& setFileFingerPrint(string fileFingerPrint) { DARABONBA_PTR_SET_VALUE(fileFingerPrint_, fileFingerPrint) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DatasetFileMeta& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline DatasetFileMeta& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileUpdateTime Field Functions 
    bool hasFileUpdateTime() const { return this->fileUpdateTime_ != nullptr;};
    void deleteFileUpdateTime() { this->fileUpdateTime_ = nullptr;};
    inline string fileUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(fileUpdateTime_, "") };
    inline DatasetFileMeta& setFileUpdateTime(string fileUpdateTime) { DARABONBA_PTR_SET_VALUE(fileUpdateTime_, fileUpdateTime) };


    // metaAttributes Field Functions 
    bool hasMetaAttributes() const { return this->metaAttributes_ != nullptr;};
    void deleteMetaAttributes() { this->metaAttributes_ = nullptr;};
    inline string metaAttributes() const { DARABONBA_PTR_GET_DEFAULT(metaAttributes_, "") };
    inline DatasetFileMeta& setMetaAttributes(string metaAttributes) { DARABONBA_PTR_SET_VALUE(metaAttributes_, metaAttributes) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline DatasetFileMeta& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // semanticIndexJobId Field Functions 
    bool hasSemanticIndexJobId() const { return this->semanticIndexJobId_ != nullptr;};
    void deleteSemanticIndexJobId() { this->semanticIndexJobId_ = nullptr;};
    inline string semanticIndexJobId() const { DARABONBA_PTR_GET_DEFAULT(semanticIndexJobId_, "") };
    inline DatasetFileMeta& setSemanticIndexJobId(string semanticIndexJobId) { DARABONBA_PTR_SET_VALUE(semanticIndexJobId_, semanticIndexJobId) };


    // semanticIndexUpdateTime Field Functions 
    bool hasSemanticIndexUpdateTime() const { return this->semanticIndexUpdateTime_ != nullptr;};
    void deleteSemanticIndexUpdateTime() { this->semanticIndexUpdateTime_ = nullptr;};
    inline string semanticIndexUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(semanticIndexUpdateTime_, "") };
    inline DatasetFileMeta& setSemanticIndexUpdateTime(string semanticIndexUpdateTime) { DARABONBA_PTR_SET_VALUE(semanticIndexUpdateTime_, semanticIndexUpdateTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DatasetFileMeta& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline DatasetFileMeta& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // thumbnailUrl Field Functions 
    bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
    void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
    inline string thumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
    inline DatasetFileMeta& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline DatasetFileMeta& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<int64_t> dataSize_ = nullptr;
    std::shared_ptr<string> datasetFileMetaId_ = nullptr;
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> fileCreateTime_ = nullptr;
    std::shared_ptr<string> fileFingerPrint_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileType_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> fileUpdateTime_ = nullptr;
    std::shared_ptr<string> metaAttributes_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<string> semanticIndexJobId_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> semanticIndexUpdateTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> tags_ = nullptr;
    std::shared_ptr<string> thumbnailUrl_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
