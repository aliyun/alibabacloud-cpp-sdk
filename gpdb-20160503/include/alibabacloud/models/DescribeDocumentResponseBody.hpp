// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCUMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCUMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDocumentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocumentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkFileUrl, chunkFileUrl_);
      DARABONBA_PTR_TO_JSON(DocsCount, docsCount_);
      DARABONBA_PTR_TO_JSON(DocumentLoader, documentLoader_);
      DARABONBA_PTR_TO_JSON(DocumentLoaderResultFileUrl, documentLoaderResultFileUrl_);
      DARABONBA_PTR_TO_JSON(FileExt, fileExt_);
      DARABONBA_PTR_TO_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_TO_JSON(FileMtime, fileMtime_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(FileVersion, fileVersion_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PlainChunkFileUrl, plainChunkFileUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TextSplitter, textSplitter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocumentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkFileUrl, chunkFileUrl_);
      DARABONBA_PTR_FROM_JSON(DocsCount, docsCount_);
      DARABONBA_PTR_FROM_JSON(DocumentLoader, documentLoader_);
      DARABONBA_PTR_FROM_JSON(DocumentLoaderResultFileUrl, documentLoaderResultFileUrl_);
      DARABONBA_PTR_FROM_JSON(FileExt, fileExt_);
      DARABONBA_PTR_FROM_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_FROM_JSON(FileMtime, fileMtime_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(FileVersion, fileVersion_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PlainChunkFileUrl, plainChunkFileUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TextSplitter, textSplitter_);
    };
    DescribeDocumentResponseBody() = default ;
    DescribeDocumentResponseBody(const DescribeDocumentResponseBody &) = default ;
    DescribeDocumentResponseBody(DescribeDocumentResponseBody &&) = default ;
    DescribeDocumentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocumentResponseBody() = default ;
    DescribeDocumentResponseBody& operator=(const DescribeDocumentResponseBody &) = default ;
    DescribeDocumentResponseBody& operator=(DescribeDocumentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkFileUrl_ == nullptr
        && return this->docsCount_ == nullptr && return this->documentLoader_ == nullptr && return this->documentLoaderResultFileUrl_ == nullptr && return this->fileExt_ == nullptr && return this->fileMd5_ == nullptr
        && return this->fileMtime_ == nullptr && return this->fileName_ == nullptr && return this->fileSize_ == nullptr && return this->fileUrl_ == nullptr && return this->fileVersion_ == nullptr
        && return this->message_ == nullptr && return this->plainChunkFileUrl_ == nullptr && return this->requestId_ == nullptr && return this->source_ == nullptr && return this->status_ == nullptr
        && return this->textSplitter_ == nullptr; };
    // chunkFileUrl Field Functions 
    bool hasChunkFileUrl() const { return this->chunkFileUrl_ != nullptr;};
    void deleteChunkFileUrl() { this->chunkFileUrl_ = nullptr;};
    inline string chunkFileUrl() const { DARABONBA_PTR_GET_DEFAULT(chunkFileUrl_, "") };
    inline DescribeDocumentResponseBody& setChunkFileUrl(string chunkFileUrl) { DARABONBA_PTR_SET_VALUE(chunkFileUrl_, chunkFileUrl) };


    // docsCount Field Functions 
    bool hasDocsCount() const { return this->docsCount_ != nullptr;};
    void deleteDocsCount() { this->docsCount_ = nullptr;};
    inline int32_t docsCount() const { DARABONBA_PTR_GET_DEFAULT(docsCount_, 0) };
    inline DescribeDocumentResponseBody& setDocsCount(int32_t docsCount) { DARABONBA_PTR_SET_VALUE(docsCount_, docsCount) };


    // documentLoader Field Functions 
    bool hasDocumentLoader() const { return this->documentLoader_ != nullptr;};
    void deleteDocumentLoader() { this->documentLoader_ = nullptr;};
    inline string documentLoader() const { DARABONBA_PTR_GET_DEFAULT(documentLoader_, "") };
    inline DescribeDocumentResponseBody& setDocumentLoader(string documentLoader) { DARABONBA_PTR_SET_VALUE(documentLoader_, documentLoader) };


    // documentLoaderResultFileUrl Field Functions 
    bool hasDocumentLoaderResultFileUrl() const { return this->documentLoaderResultFileUrl_ != nullptr;};
    void deleteDocumentLoaderResultFileUrl() { this->documentLoaderResultFileUrl_ = nullptr;};
    inline string documentLoaderResultFileUrl() const { DARABONBA_PTR_GET_DEFAULT(documentLoaderResultFileUrl_, "") };
    inline DescribeDocumentResponseBody& setDocumentLoaderResultFileUrl(string documentLoaderResultFileUrl) { DARABONBA_PTR_SET_VALUE(documentLoaderResultFileUrl_, documentLoaderResultFileUrl) };


    // fileExt Field Functions 
    bool hasFileExt() const { return this->fileExt_ != nullptr;};
    void deleteFileExt() { this->fileExt_ = nullptr;};
    inline string fileExt() const { DARABONBA_PTR_GET_DEFAULT(fileExt_, "") };
    inline DescribeDocumentResponseBody& setFileExt(string fileExt) { DARABONBA_PTR_SET_VALUE(fileExt_, fileExt) };


    // fileMd5 Field Functions 
    bool hasFileMd5() const { return this->fileMd5_ != nullptr;};
    void deleteFileMd5() { this->fileMd5_ = nullptr;};
    inline string fileMd5() const { DARABONBA_PTR_GET_DEFAULT(fileMd5_, "") };
    inline DescribeDocumentResponseBody& setFileMd5(string fileMd5) { DARABONBA_PTR_SET_VALUE(fileMd5_, fileMd5) };


    // fileMtime Field Functions 
    bool hasFileMtime() const { return this->fileMtime_ != nullptr;};
    void deleteFileMtime() { this->fileMtime_ = nullptr;};
    inline string fileMtime() const { DARABONBA_PTR_GET_DEFAULT(fileMtime_, "") };
    inline DescribeDocumentResponseBody& setFileMtime(string fileMtime) { DARABONBA_PTR_SET_VALUE(fileMtime_, fileMtime) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeDocumentResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline DescribeDocumentResponseBody& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline DescribeDocumentResponseBody& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // fileVersion Field Functions 
    bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
    void deleteFileVersion() { this->fileVersion_ = nullptr;};
    inline int32_t fileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, 0) };
    inline DescribeDocumentResponseBody& setFileVersion(int32_t fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDocumentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // plainChunkFileUrl Field Functions 
    bool hasPlainChunkFileUrl() const { return this->plainChunkFileUrl_ != nullptr;};
    void deletePlainChunkFileUrl() { this->plainChunkFileUrl_ = nullptr;};
    inline string plainChunkFileUrl() const { DARABONBA_PTR_GET_DEFAULT(plainChunkFileUrl_, "") };
    inline DescribeDocumentResponseBody& setPlainChunkFileUrl(string plainChunkFileUrl) { DARABONBA_PTR_SET_VALUE(plainChunkFileUrl_, plainChunkFileUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDocumentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeDocumentResponseBody& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDocumentResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // textSplitter Field Functions 
    bool hasTextSplitter() const { return this->textSplitter_ != nullptr;};
    void deleteTextSplitter() { this->textSplitter_ = nullptr;};
    inline string textSplitter() const { DARABONBA_PTR_GET_DEFAULT(textSplitter_, "") };
    inline DescribeDocumentResponseBody& setTextSplitter(string textSplitter) { DARABONBA_PTR_SET_VALUE(textSplitter_, textSplitter) };


  protected:
    // URL of the split file, valid for 2 hours. The file format is JSONL, with each line formatted as `{"page_content":"*****", "metadata": {"**":"***","**":"***"}`.
    std::shared_ptr<string> chunkFileUrl_ = nullptr;
    // Number of documents after splitting.
    std::shared_ptr<int32_t> docsCount_ = nullptr;
    // Name of the document loader.
    std::shared_ptr<string> documentLoader_ = nullptr;
    std::shared_ptr<string> documentLoaderResultFileUrl_ = nullptr;
    // File extension.
    std::shared_ptr<string> fileExt_ = nullptr;
    // MD5 value of the file.
    std::shared_ptr<string> fileMd5_ = nullptr;
    // The last modified time of the document.
    std::shared_ptr<string> fileMtime_ = nullptr;
    // File name.
    std::shared_ptr<string> fileName_ = nullptr;
    // File size, in bytes.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    // Download URL of the document, valid for 2 hours.
    std::shared_ptr<string> fileUrl_ = nullptr;
    // Document version. This value increments by 1 each time the same document is updated and uploaded.
    std::shared_ptr<int32_t> fileVersion_ = nullptr;
    // Detailed information returned by the API.
    std::shared_ptr<string> message_ = nullptr;
    // Download URL for the plain text (without metadata) after splitting, each line is a chunk, valid for 2 hours.
    std::shared_ptr<string> plainChunkFileUrl_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Source of the document.
    std::shared_ptr<string> source_ = nullptr;
    // API execution status, with values as follows:
    // - **success**: Execution succeeded.
    // - **fail**: Execution failed.
    std::shared_ptr<string> status_ = nullptr;
    // Name of the text splitter.
    std::shared_ptr<string> textSplitter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
