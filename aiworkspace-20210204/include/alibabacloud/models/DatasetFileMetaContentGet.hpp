// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETFILEMETACONTENTGET_HPP_
#define ALIBABACLOUD_MODELS_DATASETFILEMETACONTENTGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DatasetFileMetaContentGet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasetFileMetaContentGet& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(DatasetFileMetaId, datasetFileMetaId_);
      DARABONBA_PTR_TO_JSON(FileCreateTime, fileCreateTime_);
      DARABONBA_PTR_TO_JSON(FileDir, fileDir_);
      DARABONBA_PTR_TO_JSON(FileFingerPrint, fileFingerPrint_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileUpdateTime, fileUpdateTime_);
      DARABONBA_PTR_TO_JSON(MetaAttributes, metaAttributes_);
      DARABONBA_PTR_TO_JSON(SemanticIndexJobId, semanticIndexJobId_);
      DARABONBA_PTR_TO_JSON(SemanticIndexUpdateTime, semanticIndexUpdateTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagUpdateTime, tagUpdateTime_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, DatasetFileMetaContentGet& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(DatasetFileMetaId, datasetFileMetaId_);
      DARABONBA_PTR_FROM_JSON(FileCreateTime, fileCreateTime_);
      DARABONBA_PTR_FROM_JSON(FileDir, fileDir_);
      DARABONBA_PTR_FROM_JSON(FileFingerPrint, fileFingerPrint_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileUpdateTime, fileUpdateTime_);
      DARABONBA_PTR_FROM_JSON(MetaAttributes, metaAttributes_);
      DARABONBA_PTR_FROM_JSON(SemanticIndexJobId, semanticIndexJobId_);
      DARABONBA_PTR_FROM_JSON(SemanticIndexUpdateTime, semanticIndexUpdateTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagUpdateTime, tagUpdateTime_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    DatasetFileMetaContentGet() = default ;
    DatasetFileMetaContentGet(const DatasetFileMetaContentGet &) = default ;
    DatasetFileMetaContentGet(DatasetFileMetaContentGet &&) = default ;
    DatasetFileMetaContentGet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasetFileMetaContentGet() = default ;
    DatasetFileMetaContentGet& operator=(const DatasetFileMetaContentGet &) = default ;
    DatasetFileMetaContentGet& operator=(DatasetFileMetaContentGet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->contentType_ == nullptr && this->dataSize_ == nullptr && this->datasetFileMetaId_ == nullptr && this->fileCreateTime_ == nullptr && this->fileDir_ == nullptr
        && this->fileFingerPrint_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->fileUpdateTime_ == nullptr && this->metaAttributes_ == nullptr
        && this->semanticIndexJobId_ == nullptr && this->semanticIndexUpdateTime_ == nullptr && this->status_ == nullptr && this->tagUpdateTime_ == nullptr && this->tags_ == nullptr
        && this->uri_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DatasetFileMetaContentGet& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline DatasetFileMetaContentGet& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline DatasetFileMetaContentGet& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // datasetFileMetaId Field Functions 
    bool hasDatasetFileMetaId() const { return this->datasetFileMetaId_ != nullptr;};
    void deleteDatasetFileMetaId() { this->datasetFileMetaId_ = nullptr;};
    inline string getDatasetFileMetaId() const { DARABONBA_PTR_GET_DEFAULT(datasetFileMetaId_, "") };
    inline DatasetFileMetaContentGet& setDatasetFileMetaId(string datasetFileMetaId) { DARABONBA_PTR_SET_VALUE(datasetFileMetaId_, datasetFileMetaId) };


    // fileCreateTime Field Functions 
    bool hasFileCreateTime() const { return this->fileCreateTime_ != nullptr;};
    void deleteFileCreateTime() { this->fileCreateTime_ = nullptr;};
    inline string getFileCreateTime() const { DARABONBA_PTR_GET_DEFAULT(fileCreateTime_, "") };
    inline DatasetFileMetaContentGet& setFileCreateTime(string fileCreateTime) { DARABONBA_PTR_SET_VALUE(fileCreateTime_, fileCreateTime) };


    // fileDir Field Functions 
    bool hasFileDir() const { return this->fileDir_ != nullptr;};
    void deleteFileDir() { this->fileDir_ = nullptr;};
    inline string getFileDir() const { DARABONBA_PTR_GET_DEFAULT(fileDir_, "") };
    inline DatasetFileMetaContentGet& setFileDir(string fileDir) { DARABONBA_PTR_SET_VALUE(fileDir_, fileDir) };


    // fileFingerPrint Field Functions 
    bool hasFileFingerPrint() const { return this->fileFingerPrint_ != nullptr;};
    void deleteFileFingerPrint() { this->fileFingerPrint_ = nullptr;};
    inline string getFileFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(fileFingerPrint_, "") };
    inline DatasetFileMetaContentGet& setFileFingerPrint(string fileFingerPrint) { DARABONBA_PTR_SET_VALUE(fileFingerPrint_, fileFingerPrint) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DatasetFileMetaContentGet& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline DatasetFileMetaContentGet& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileUpdateTime Field Functions 
    bool hasFileUpdateTime() const { return this->fileUpdateTime_ != nullptr;};
    void deleteFileUpdateTime() { this->fileUpdateTime_ = nullptr;};
    inline string getFileUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(fileUpdateTime_, "") };
    inline DatasetFileMetaContentGet& setFileUpdateTime(string fileUpdateTime) { DARABONBA_PTR_SET_VALUE(fileUpdateTime_, fileUpdateTime) };


    // metaAttributes Field Functions 
    bool hasMetaAttributes() const { return this->metaAttributes_ != nullptr;};
    void deleteMetaAttributes() { this->metaAttributes_ = nullptr;};
    inline string getMetaAttributes() const { DARABONBA_PTR_GET_DEFAULT(metaAttributes_, "") };
    inline DatasetFileMetaContentGet& setMetaAttributes(string metaAttributes) { DARABONBA_PTR_SET_VALUE(metaAttributes_, metaAttributes) };


    // semanticIndexJobId Field Functions 
    bool hasSemanticIndexJobId() const { return this->semanticIndexJobId_ != nullptr;};
    void deleteSemanticIndexJobId() { this->semanticIndexJobId_ = nullptr;};
    inline string getSemanticIndexJobId() const { DARABONBA_PTR_GET_DEFAULT(semanticIndexJobId_, "") };
    inline DatasetFileMetaContentGet& setSemanticIndexJobId(string semanticIndexJobId) { DARABONBA_PTR_SET_VALUE(semanticIndexJobId_, semanticIndexJobId) };


    // semanticIndexUpdateTime Field Functions 
    bool hasSemanticIndexUpdateTime() const { return this->semanticIndexUpdateTime_ != nullptr;};
    void deleteSemanticIndexUpdateTime() { this->semanticIndexUpdateTime_ = nullptr;};
    inline string getSemanticIndexUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(semanticIndexUpdateTime_, "") };
    inline DatasetFileMetaContentGet& setSemanticIndexUpdateTime(string semanticIndexUpdateTime) { DARABONBA_PTR_SET_VALUE(semanticIndexUpdateTime_, semanticIndexUpdateTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DatasetFileMetaContentGet& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagUpdateTime Field Functions 
    bool hasTagUpdateTime() const { return this->tagUpdateTime_ != nullptr;};
    void deleteTagUpdateTime() { this->tagUpdateTime_ = nullptr;};
    inline string getTagUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(tagUpdateTime_, "") };
    inline DatasetFileMetaContentGet& setTagUpdateTime(string tagUpdateTime) { DARABONBA_PTR_SET_VALUE(tagUpdateTime_, tagUpdateTime) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline DatasetFileMetaContentGet& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline DatasetFileMetaContentGet& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // The comment on the file.
    shared_ptr<string> comment_ {};
    // The MIME type of the file. It includes a type and a subtype.
    shared_ptr<string> contentType_ {};
    // The file size in bytes.
    shared_ptr<int64_t> dataSize_ {};
    // The ID of the dataset file metadata.
    shared_ptr<string> datasetFileMetaId_ {};
    // The time when the file was created. The time is in the ISO 8601 format.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> fileCreateTime_ {};
    // The path of the folder where the OSS, NAS, or CPFS file is located.
    shared_ptr<string> fileDir_ {};
    // The fingerprint of the file. This value ensures the uniqueness of the file content. The value changes if the file content is modified. For OSS files, the ETag is used. For NAS files, the MD5 hash is used.
    shared_ptr<string> fileFingerPrint_ {};
    // The file name.
    shared_ptr<string> fileName_ {};
    // The file type. This is the same as the Multipurpose Internet Mail Extensions (MIME) type.
    shared_ptr<string> fileType_ {};
    // The time when the file was last modified. The time is in the ISO 8601 format.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> fileUpdateTime_ {};
    // The specific metadata of the file. This metadata cannot be used for retrieval. The format is a JSON string.
    shared_ptr<string> metaAttributes_ {};
    // The ID of the job that builds the semantic index.
    shared_ptr<string> semanticIndexJobId_ {};
    // The time when the semantic index was built.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> semanticIndexUpdateTime_ {};
    shared_ptr<string> status_ {};
    // The time when the tag was last modified. The time is in the ISO 8601 format.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> tagUpdateTime_ {};
    // A collection of tags for the metadata. It includes the following groups:
    // 
    // - Algorithm tag group:
    // 
    //   - ai: A list of tag names aggregated from all algorithmic tagging tasks for a single metadata record.
    // 
    // - User-defined tag group:
    // 
    //   - user: A list of tag names that a user adds to a single metadata record.
    // 
    //   - user-delete-ai-tags: A list of tag names from the algorithm tag group that the user wants to delete from a single metadata record.
    shared_ptr<string> tags_ {};
    // The unique URI of the file. This URI records the unique path of the file. Paths for files in OSS and NAS are supported.
    // 
    // <details>
    // 
    // <summary>
    // 
    // OSS
    // 
    // </summary>
    // 
    // oss\\://${bucket}/${path}
    // 
    // </details>
    // 
    // <details>
    // 
    // <summary>
    // 
    // NAS
    // 
    // </summary>
    // 
    // nas\\://${fileSystemId}/${path}
    // 
    // </details>
    shared_ptr<string> uri_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
